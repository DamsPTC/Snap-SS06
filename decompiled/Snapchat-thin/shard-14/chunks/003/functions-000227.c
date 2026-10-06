/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b111d1c; end: 10b111da3; -[SCNNetworkManagerUrlResponseInfoCppProxy getNetworkError] */

void FUN_10b111d1c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x00010b112628();
  func_0x00010b112634();
  func_0x00010563299c(auStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b112614();
  func_0x0001052a038c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b111da4; end: 10b111e27; -[SCNNetworkManagerUrlResponseInfoCppProxy getRequestId] */

void FUN_10b111da4(void)

{
  long extraout_x8;
  undefined1 auStack_40 [32];
  
  func_0x00010b112628();
  (**(code **)(extraout_x8 + 0x38))(auStack_40);
  func_0x000107c27f68(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b112648();
  func_0x000107c279a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b111e28; end: 10b111ea7; -[SCNNetworkManagerUrlResponseInfoCppProxy getFailoverAdvice] */

void FUN_10b111e28(void)

{
  undefined1 auStack_48 [40];
  
  func_0x00010b112628();
  func_0x00010b112634();
  func_0x000107c2be08(auStack_48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b112614();
  func_0x000107c27f14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b111ea8; end: 10b111fe7;  */

void FUN_10b111ea8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int extraout_w10;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  if (param_2 == 0) {
    uVar5 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x00010527a174();
    ___cxa_throw(uVar5,PTR___ZTISt16invalid_argument_110352248,
                 PTR___ZNSt16invalid_argumentD1Ev_1103461e8);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10b111fb4);
    (*pcVar2)();
  }
  puVar3 = PTR_PTR_1126dfcf8;
  _objc_opt_class(PTR_PTR_1126dfcf8);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  if ((uVar4 & 1) == 0) {
    _objc_retain(param_2);
    ppuStack_48 = &PTR_DAT_110cbc1f8;
    uStack_50 = param_2;
    func_0x000107c316f4(&uStack_40,&ppuStack_48,&uStack_50,FUN_10b1120ec);
    uVar1 = uStack_38;
    uVar5 = uStack_40;
    uStack_40 = 0;
    uStack_38 = 0;
    func_0x000107c27d28(&uStack_40);
    _objc_release(uStack_50);
    param_1[1] = uVar1;
    *param_1 = uVar5;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10b1124a8(&uStack_60);
  }
  else {
    lVar6 = *(long *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar5;
    if (lVar6 != 0) {
      do {
        func_0x00010b1125d4();
      } while (extraout_w10 != 0);
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b111fe8; end: 10b112057;  */

void FUN_10b111fe8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110cbc1a0,&PTR_DAT_110cbc1b0,0);
    if (lVar1 == 0) {
      FUN_10b1124d0(param_1);
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



/* Entry: 10b112058; end: 10b1120ab; -[SCNNetworkManagerUrlResponseInfoCppProxy .cxx_destruct] */

void FUN_10b112058(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbc328;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052bc108((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b1120ac; end: 10b1120eb; -[SCNNetworkManagerUrlResponseInfoCppProxy .cxx_construct] */

undefined8 * FUN_10b1120ac(undefined8 *param_1)

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
      func_0x00010b1125d4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b1120ec; end: 10b1121df;  */

void FUN_10b1120ec(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110cbc238;
  puVar1[3] = &PTR_DAT_110cbc2e0;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  func_0x000107c316f8();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      func_0x00010b1125d4();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  puVar1[3] = &PTR_FUN_110cbc288;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b1124a8(&uStack_50);
  return;
}



/* Entry: 10b1121e0; end: 10b1121e3;  */

void FUN_10b1121e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbc238;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1121e4; end: 10b1121f7;  */

void FUN_10b1121e4(void)

{
  FUN_10b112498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1121f8; end: 10b112203;  */

void FUN_10b1121f8(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b112668(param_1 + 0x20);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  func_0x00010b112654();
  return;
}



/* Entry: 10b112204; end: 10b112273;  */

void FUN_10b112204(void)

{
  func_0x00010b112670();
  return;
}



/* Entry: 10b112274; end: 10b1122bb;  */

void FUN_10b112274(void)

{
  FUN_10b1125b0();
  func_0x00010b11263c();
  func_0x00010bfc5980();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20();
  func_0x00010b1125ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b1122bc; end: 10b112303;  */

void FUN_10b1122bc(void)

{
  FUN_10b1125b0();
  func_0x00010b11263c();
  func_0x00010bfc9a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c281c8();
  func_0x00010b1125ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b112304; end: 10b112333;  */

undefined8 FUN_10b112304(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010b112668();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  func_0x00010bfc4100(uVar1);
  func_0x00010b112654();
  return uVar1;
}



/* Entry: 10b112334; end: 10b11237b;  */

void FUN_10b112334(void)

{
  FUN_10b1125b0();
  func_0x00010b11263c();
  func_0x00010bfc7f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105632694();
  func_0x00010b1125ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b11237c; end: 10b1123c3;  */

void FUN_10b11237c(void)

{
  FUN_10b1125b0();
  func_0x00010b11263c();
  func_0x00010bfc9980();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64();
  func_0x00010b1125ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b1123c4; end: 10b11240b;  */

void FUN_10b1123c4(void)

{
  FUN_10b1125b0();
  func_0x00010b11263c();
  func_0x00010bfc5540();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b10fa58();
  func_0x00010b1125ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10b11240c; end: 10b112497;  */

void FUN_10b11240c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x00010b112668();
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_retain(lVar2);
    func_0x000107c316fc();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
  }
  _objc_release(uVar1);
  func_0x000107c27f24();
  func_0x00010b112654();
  return;
}



/* Entry: 10b112498; end: 10b1124a7;  */

void FUN_10b112498(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbc238;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1124a8; end: 10b1124cf;  */

long FUN_10b1124a8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b1124d0; end: 10b112543;  */

void FUN_10b1124d0(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbc328;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010b1125d4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b112544);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b112648();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b112544; end: 10b1125af;  */

void FUN_10b112544(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfcf8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b1125d4();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052bc108(&uStack_30);
  return;
}



/* Entry: 10b1125b0; end: 10b112687;  */

void FUN_10b1125b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPush_11034d1d8)();
  return;
}



/* Entry: 10b112688; end: 10b112777;  */

undefined8 *
FUN_10b112688(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code **ppcVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *extraout_x10;
  undefined8 *extraout_x10_00;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 auStack_1b0 [3];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  code **ppcStack_178;
  undefined8 *puStack_170;
  code **ppcStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 auStack_110 [3];
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_c8;
  code **ppcStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [3];
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  puVar2 = param_2;
  func_0x00010b133e24();
  func_0x00010b134a58(*puVar2);
  func_0x00010b134cd8();
  func_0x00010b1364e4();
  uVar1 = extraout_x11;
  puVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8;
    puVar2 = auStack_80;
  }
  func_0x00010b2070f4(puVar2,uVar1);
  func_0x00010b134678();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000107c2be5c(param_2);
  }
  func_0x00010b134a58(*param_2);
  func_0x00010b134cd8();
  pcStack_68 = FUN_10b125e94;
  ppuStack_60 = &PTR_FUN_110cbc968;
  puVar2 = auStack_80;
  ppcVar4 = &pcStack_68;
  puStack_58 = param_2;
  uStack_50 = param_3;
  FUN_10b112778(&uStack_90);
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  uStack_90 = 0;
  uStack_88 = 0;
  func_0x00010b134558();
  func_0x00010b133eec(ppuStack_60);
  func_0x00010b134678();
  func_0x00010b133dfc(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b133eec(ppuStack_60);
  func_0x00010b134678();
  func_0x00010b1343d0();
  puVar3 = auStack_110;
  pcStack_98 = FUN_10b112778;
  ppcStack_c0 = &pcStack_68;
  puStack_b8 = param_2;
  uStack_b0 = param_3;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010b133e24();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_110);
  func_0x00010b134b7c();
  FUN_10b125950(extraout_x8_00,auStack_110,auStack_f8);
  func_0x00010b133eb4(uStack_f0);
  func_0x00010b13458c();
  func_0x00010b133dfc(uStack_c8);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010b133eb4(uStack_f0);
  func_0x00010b13458c();
  func_0x00010b1343d0();
  func_0x00010b134948();
  func_0x00010b133e38();
  uStack_198 = param_5;
  uStack_190 = param_6;
  func_0x00010b134a58(*puVar3);
  func_0x00010b134cd8();
  func_0x00010b1364e4();
  uVar1 = extraout_x11_00;
  puVar2 = extraout_x10_00;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8_02;
    puVar2 = auStack_1b0;
  }
  func_0x00010b2070f4(puVar2,uVar1);
  func_0x00010b134678();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000107c2be5c(&pcStack_68);
  }
  func_0x00010b134a58(pcStack_68);
  func_0x00010b134cd8();
  uStack_188 = 0x10b1264a0;
  ppuStack_180 = &PTR_FUN_110cbc980;
  puStack_160 = &uStack_198;
  puVar2 = auStack_1b0;
  ppcStack_178 = &pcStack_68;
  puStack_170 = param_2;
  ppcStack_168 = ppcVar4;
  FUN_10b112778(&uStack_1c0,puVar2,&uStack_188);
  extraout_x8_01[1] = uStack_1b8;
  *extraout_x8_01 = uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  func_0x00010b134558();
  func_0x00010b133f10(ppuStack_180);
  func_0x00010b134678();
  func_0x00010b133dfc(uStack_158);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133f10(ppuStack_180);
    func_0x00010b134678();
    func_0x00010b1343d0();
    *puVar2 = &PTR_FUN_110cbc348;
    FUN_10b102da8(puVar2 + 0x3f);
    func_0x000107c27f08(puVar2 + 0x3d);
    func_0x0001052a1374(puVar2 + 0x3b);
    func_0x00010b1258ac(puVar2 + 0x3a);
    FUN_10b0ffe04(puVar2 + 0x38);
    func_0x000107c2826c(puVar2 + 0x32);
    __ZNSt3__15mutexD1Ev(puVar2 + 0x2a);
    (**(code **)puVar2[0x25])(puVar2 + 0x25);
    func_0x00010b13497c(puVar2[0x1e]);
    func_0x00010b12046c(puVar2 + 0x1a);
    func_0x00010b125888(puVar2 + 0x18);
    FUN_10b120490(puVar2 + 0xb);
    func_0x00010b125864(puVar2 + 9);
    func_0x00010b125840(puVar2 + 7);
    func_0x00010b1257f8(puVar2 + 5);
    func_0x00010b1257d4(puVar2 + 3);
    func_0x00010b12581c(puVar2 + 1);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b112778; end: 10b1127f7;  */

undefined8 *
FUN_10b112778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  undefined8 *unaff_x22;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 auStack_120 [3];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_c8;
  undefined8 auStack_80 [3];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  puVar2 = auStack_80;
  func_0x00010b133e24(param_2,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_80);
  func_0x00010b134b7c();
  FUN_10b125950(param_1,auStack_80,auStack_68);
  func_0x00010b133eb4(uStack_60);
  func_0x00010b13458c();
  func_0x00010b133dfc(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b133eb4(uStack_60);
  func_0x00010b13458c();
  func_0x00010b1343d0();
  func_0x00010b134948();
  func_0x00010b133e38();
  uStack_108 = param_5;
  uStack_100 = param_6;
  func_0x00010b134a58(*puVar2);
  func_0x00010b134cd8();
  func_0x00010b1364e4();
  uVar1 = extraout_x11;
  puVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8_00;
    puVar2 = auStack_120;
  }
  func_0x00010b2070f4(puVar2,uVar1);
  func_0x00010b134678();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000107c2be5c();
  }
  func_0x00010b134a58(*unaff_x22);
  func_0x00010b134cd8();
  uStack_f8 = 0x10b1264a0;
  ppuStack_f0 = &PTR_FUN_110cbc980;
  puVar2 = auStack_120;
  FUN_10b112778(&uStack_130,puVar2,&uStack_f8);
  extraout_x8[1] = uStack_128;
  *extraout_x8 = uStack_130;
  uStack_130 = 0;
  uStack_128 = 0;
  func_0x00010b134558();
  func_0x00010b133f10(ppuStack_f0);
  func_0x00010b134678();
  func_0x00010b133dfc(uStack_c8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133f10(ppuStack_f0);
    func_0x00010b134678();
    func_0x00010b1343d0();
    *puVar2 = &PTR_FUN_110cbc348;
    FUN_10b102da8(puVar2 + 0x3f);
    func_0x000107c27f08(puVar2 + 0x3d);
    func_0x0001052a1374(puVar2 + 0x3b);
    func_0x00010b1258ac(puVar2 + 0x3a);
    FUN_10b0ffe04(puVar2 + 0x38);
    func_0x000107c2826c(puVar2 + 0x32);
    __ZNSt3__15mutexD1Ev(puVar2 + 0x2a);
    (**(code **)puVar2[0x25])(puVar2 + 0x25);
    func_0x00010b13497c(puVar2[0x1e]);
    func_0x00010b12046c(puVar2 + 0x1a);
    func_0x00010b125888(puVar2 + 0x18);
    FUN_10b120490(puVar2 + 0xb);
    func_0x00010b125864(puVar2 + 9);
    func_0x00010b125840(puVar2 + 7);
    func_0x00010b1257f8(puVar2 + 5);
    func_0x00010b1257d4(puVar2 + 3);
    func_0x00010b12581c(puVar2 + 1);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b1127f8; end: 10b1128f7;  */

undefined8 *
FUN_10b1127f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *puVar2;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x10;
  undefined8 extraout_x11;
  undefined8 *unaff_x22;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [3];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_48;
  
  func_0x00010b134948();
  func_0x00010b133e38();
  uStack_88 = param_4;
  uStack_80 = param_5;
  func_0x00010b134a58(*param_1);
  func_0x00010b134cd8();
  func_0x00010b1364e4();
  uVar1 = extraout_x11;
  puVar2 = extraout_x10;
  if (in_NG == in_OV) {
    uVar1 = extraout_x8_00;
    puVar2 = auStack_a0;
  }
  func_0x00010b2070f4(puVar2,uVar1);
  func_0x00010b134678();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000107c2be5c();
  }
  func_0x00010b134a58(*unaff_x22);
  func_0x00010b134cd8();
  uStack_78 = 0x10b1264a0;
  ppuStack_70 = &PTR_FUN_110cbc980;
  puVar2 = auStack_a0;
  FUN_10b112778(&uStack_b0,puVar2,&uStack_78);
  extraout_x8[1] = uStack_a8;
  *extraout_x8 = uStack_b0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  func_0x00010b134558();
  func_0x00010b133f10(ppuStack_70);
  func_0x00010b134678();
  func_0x00010b133dfc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133f10(ppuStack_70);
    func_0x00010b134678();
    func_0x00010b1343d0();
    *puVar2 = &PTR_FUN_110cbc348;
    FUN_10b102da8(puVar2 + 0x3f);
    func_0x000107c27f08(puVar2 + 0x3d);
    func_0x0001052a1374(puVar2 + 0x3b);
    func_0x00010b1258ac(puVar2 + 0x3a);
    FUN_10b0ffe04(puVar2 + 0x38);
    func_0x000107c2826c(puVar2 + 0x32);
    __ZNSt3__15mutexD1Ev(puVar2 + 0x2a);
    (**(code **)puVar2[0x25])(puVar2 + 0x25);
    func_0x00010b13497c(puVar2[0x1e]);
    func_0x00010b12046c(puVar2 + 0x1a);
    func_0x00010b125888(puVar2 + 0x18);
    FUN_10b120490(puVar2 + 0xb);
    func_0x00010b125864(puVar2 + 9);
    func_0x00010b125840(puVar2 + 7);
    func_0x00010b1257f8(puVar2 + 5);
    func_0x00010b1257d4(puVar2 + 3);
    func_0x00010b12581c(puVar2 + 1);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b1128f8; end: 10b1129b3;  */

undefined8 * FUN_10b1128f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbc348;
  FUN_10b102da8(param_1 + 0x3f);
  func_0x000107c27f08(param_1 + 0x3d);
  func_0x0001052a1374(param_1 + 0x3b);
  func_0x00010b1258ac(param_1 + 0x3a);
  FUN_10b0ffe04(param_1 + 0x38);
  func_0x000107c2826c(param_1 + 0x32);
  __ZNSt3__15mutexD1Ev(param_1 + 0x2a);
  (**(code **)param_1[0x25])(param_1 + 0x25);
  func_0x00010b13497c(param_1[0x1e]);
  func_0x00010b12046c(param_1 + 0x1a);
  func_0x00010b125888(param_1 + 0x18);
  FUN_10b120490(param_1 + 0xb);
  func_0x00010b125864(param_1 + 9);
  func_0x00010b125840(param_1 + 7);
  func_0x00010b1257f8(param_1 + 5);
  func_0x00010b1257d4(param_1 + 3);
  func_0x00010b12581c(param_1 + 1);
  return param_1;
}



/* Entry: 10b1129b4; end: 10b1129b7;  */

undefined8 * FUN_10b1129b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbc348;
  FUN_10b102da8(param_1 + 0x3f);
  func_0x000107c27f08(param_1 + 0x3d);
  func_0x0001052a1374(param_1 + 0x3b);
  func_0x00010b1258ac(param_1 + 0x3a);
  FUN_10b0ffe04(param_1 + 0x38);
  func_0x000107c2826c(param_1 + 0x32);
  __ZNSt3__15mutexD1Ev(param_1 + 0x2a);
  (**(code **)param_1[0x25])(param_1 + 0x25);
  func_0x00010b13497c(param_1[0x1e]);
  func_0x00010b12046c(param_1 + 0x1a);
  func_0x00010b125888(param_1 + 0x18);
  FUN_10b120490(param_1 + 0xb);
  func_0x00010b125864(param_1 + 9);
  func_0x00010b125840(param_1 + 7);
  func_0x00010b1257f8(param_1 + 5);
  func_0x00010b1257d4(param_1 + 3);
  func_0x00010b12581c(param_1 + 1);
  return param_1;
}



/* Entry: 10b1129b8; end: 10b1129cb;  */

void FUN_10b1129b8(void)

{
  FUN_10b1128f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1129cc; end: 10b1135db;  */

void FUN_10b1129cc(long *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,long param_8)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined ***pppuVar11;
  undefined4 uVar12;
  undefined8 extraout_x8;
  undefined **ppuVar13;
  undefined **extraout_x8_00;
  undefined **ppuVar14;
  undefined8 *puVar15;
  undefined **extraout_x9;
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
  int extraout_w12;
  int extraout_w12_00;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined **ppuVar19;
  undefined ***pppuVar20;
  undefined *puVar21;
  long *plStack_188;
  undefined8 uStack_160;
  long *plStack_158;
  undefined1 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  undefined **ppuStack_d0;
  undefined1 auStack_c8 [40];
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined ***pppuStack_88;
  undefined8 uStack_70;
  
  plVar10 = param_1;
  func_0x00010b133e8c();
  uStack_160 = 0;
  uStack_70 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_150 = 1;
  ppuVar7 = (undefined **)0x228;
  plStack_158 = plVar10;
  __Znwm();
  ppuVar19 = ppuVar7 + 1;
  *ppuVar19 = (undefined *)0x0;
  ppuVar7[2] = (undefined *)0x0;
  *ppuVar7 = (undefined *)&PTR_DAT_110cbc9a8;
  ppuVar14 = ppuVar7 + 3;
  *ppuVar14 = (undefined *)&PTR_FUN_110cbc348;
  ppuVar7[4] = (undefined *)0x0;
  ppuVar13 = ppuVar7 + 6;
  ppuVar7[7] = (undefined *)0x0;
  *ppuVar13 = (undefined *)0x0;
  ppuVar7[0xe] = (undefined *)0x32aaaba7;
  puVar21 = (undefined *)param_6[1];
  puVar16 = (undefined *)*param_6;
  *param_6 = 0;
  param_6[1] = 0;
  ppuStack_98 = (undefined **)param_7[1];
  ppuStack_a0 = (undefined **)*param_7;
  *param_7 = 0;
  param_7[1] = 0;
  ppuVar7[5] = (undefined *)0x0;
  ppuVar7[9] = (undefined *)0x0;
  ppuVar7[8] = (undefined *)0x0;
  ppuVar7[0xb] = (undefined *)0x0;
  ppuVar7[10] = (undefined *)0x0;
  ppuVar7[0xd] = (undefined *)0x0;
  ppuVar7[0xc] = (undefined *)0x0;
  ppuVar7[0x10] = (undefined *)0x0;
  ppuVar7[0xf] = (undefined *)0x0;
  ppuVar7[0x12] = (undefined *)0x0;
  ppuVar7[0x11] = (undefined *)0x0;
  ppuVar7[0x14] = (undefined *)0x0;
  ppuVar7[0x13] = (undefined *)0x0;
  ppuVar7[0x16] = (undefined *)0x0;
  ppuVar7[0x15] = (undefined *)0x0;
  ppuVar7[0x18] = (undefined *)0x0;
  ppuVar7[0x17] = (undefined *)0x0;
  ppuVar7[0x19] = (undefined *)0x0;
  ppuVar7[0x1c] = puVar21;
  ppuVar7[0x1b] = puVar16;
  *(undefined4 *)(ppuVar7 + 0x1a) = 0x3f800000;
  ppuStack_f0 = (undefined **)0x0;
  ppuStack_e8 = (undefined **)0x0;
  FUN_10b126734(ppuVar7 + 0x1d,&ppuStack_a0);
  *(undefined1 *)(ppuVar7 + 0x1f) = 0;
  ppuVar7[0x20] = &UNK_1053a6a3c;
  ppuVar7[0x21] = (undefined *)&PTR_DAT_110873830;
  ppuVar7[0x26] = (undefined *)0x0;
  ppuVar7[0x27] = &UNK_1053a6a3c;
  ppuVar7[0x28] = (undefined *)&PTR_DAT_110873830;
  ppuVar7[0x2d] = (undefined *)0x32aaaba7;
  ppuVar7[0x2f] = (undefined *)0x0;
  ppuVar7[0x2e] = (undefined *)0x0;
  ppuVar7[0x31] = (undefined *)0x0;
  ppuVar7[0x30] = (undefined *)0x0;
  ppuVar7[0x33] = (undefined *)0x0;
  ppuVar7[0x32] = (undefined *)0x0;
  ppuVar7[0x35] = (undefined *)0x0;
  ppuVar7[0x34] = (undefined *)0x0;
  ppuVar7[0x37] = (undefined *)0x0;
  ppuVar7[0x36] = (undefined *)0x0;
  ppuVar7[0x38] = (undefined *)0x0;
  *(undefined4 *)(ppuVar7 + 0x39) = 0x3f800000;
  ppuVar7[0x3a] = (undefined *)0x1;
  ppuVar2 = ppuVar7 + 0x3b;
  ppuVar7[0x43] = (undefined *)0x0;
  ppuVar7[0x3c] = (undefined *)0x0;
  *ppuVar2 = (undefined *)0x0;
  ppuVar7[0x3e] = (undefined *)0x0;
  ppuVar7[0x3d] = (undefined *)0x0;
  ppuVar7[0x40] = (undefined *)0x0;
  ppuVar7[0x3f] = (undefined *)0x0;
  ppuVar7[0x42] = (undefined *)0x0;
  ppuVar7[0x41] = (undefined *)0x0;
  *(undefined4 *)(ppuVar7 + 0x44) = 1;
  func_0x00010539e8a8(&ppuStack_a0);
  func_0x00010b125888(&ppuStack_f0);
  *param_1 = (long)ppuVar14;
  param_1[1] = (long)ppuVar7;
  if ((ppuVar7[5] == (undefined *)0x0) || (*(long *)(ppuVar7[5] + 8) == -1)) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
      if (bVar5) {
        *ppuVar19 = *ppuVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    ppuStack_f0 = ppuVar14;
    ppuStack_e8 = ppuVar7;
    func_0x00010b125df4(ppuVar7 + 4,ppuVar14,ppuVar7);
    func_0x00010b134f60();
  }
  puVar15 = (undefined8 *)*param_4;
  *param_3 = *puVar15;
  puVar21 = (undefined *)puVar15[9];
  puVar16 = (undefined *)puVar15[8];
  if (puVar15[9] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  ppuStack_e8 = (undefined **)ppuVar7[9];
  ppuStack_f0 = (undefined **)ppuVar7[8];
  ppuVar7[9] = puVar21;
  ppuVar7[8] = puVar16;
  func_0x00010b1257f8(&ppuStack_f0);
  func_0x00010b134ad8();
  func_0x00010b1341c0();
  func_0x00010b13488c();
  if (param_8 == 0) {
    FUN_10b113fb8(&ppuStack_130,param_5,0);
    FUN_10b113fb8(&ppuStack_100,param_5,1);
    if (ppuStack_130 == (undefined **)0x0) {
      (**(code **)(*(long *)*param_2 + 0x28))(&ppuStack_f0);
      FUN_10b1f7484(ppuVar7[8],0);
      func_0x00010b135ec0();
      func_0x00010b135ed8();
      func_0x00010b1349e4();
      FUN_10b1f7484(ppuVar7[8],1);
      func_0x00010b135ec0();
      func_0x00010b135ed8();
      func_0x00010b1349e4();
      func_0x00010b120f50(&ppuStack_f0);
    }
    else {
      FUN_10b1f74f8(ppuVar7[8],0,&ppuStack_130);
      if (ppuStack_100 != (undefined **)0x0) {
        FUN_10b1f74f8(ppuVar7[8],1,&ppuStack_100);
      }
    }
    func_0x00010b125864(&ppuStack_100);
    func_0x00010b125864(&ppuStack_130);
  }
  else {
    FUN_10b1f7484(ppuVar7[8],0);
    func_0x00010b134ad8();
    func_0x00010b1341c0();
    func_0x00010b13488c();
    FUN_10b1f7484(ppuVar7[8],1);
    func_0x00010b134ad8();
    func_0x00010b1341c0();
    func_0x00010b13488c();
  }
  lVar18 = *param_4;
  iVar3 = *(int *)(*(long *)(lVar18 + 0x10) + 0x30);
  func_0x00010b134ad8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&ppuStack_a0,*(undefined8 *)(lVar18 + 0x10));
  uVar12 = 4;
  if (iVar3 != 1) {
    uVar12 = 2;
  }
  uVar6 = iVar3 == 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uVar1 = 3;
  if (!(bool)uVar6) {
    uVar1 = uVar12;
  }
  ppuStack_130 = (undefined **)((ulong)ppuStack_130 & 0xffffffffffffff00);
  puStack_120 = (undefined *)((ulong)puStack_120 & 0xffffffffffffff00);
  FUN_10b4942a4(&ppuStack_100,uVar1,&ppuStack_f0,&ppuStack_a0,&uStack_140,1,1,&ppuStack_130,0);
  FUN_10b114068(ppuVar7 + 0xc,&ppuStack_100);
  func_0x00010b127f4c(&ppuStack_100);
  func_0x00010b127f28(&uStack_140);
  func_0x00010b1349e4();
  func_0x00010b13488c();
  func_0x00010b134ad8();
  func_0x00010b1341c0();
  func_0x00010b13488c();
  lVar18 = *param_4;
  if (param_8 == 0) {
    puStack_120 = (undefined *)param_2[1];
    ppuStack_128 = (undefined **)*param_2;
    ppuStack_130 = ppuVar14;
    if (param_2[1] != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
    puStack_110 = *(undefined **)(lVar18 + 0x28);
    puStack_118 = *(undefined **)(lVar18 + 0x20);
    if (*(long *)(lVar18 + 0x28) != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_01 != 0);
    }
    FUN_10b127af8(&ppuStack_100,ppuVar7[4],ppuVar7[5]);
    ppuVar8 = &PTR_DAT_110cbc570;
    func_0x000107c2be10();
    if ((int)ppuVar8 == 0) {
      FUN_10b11408c(&ppuStack_130);
      func_0x00010b134ad8();
      func_0x00010b1341c0();
      func_0x00010b13488c();
    }
    else {
      ppuStack_e8 = (undefined **)FUN_10b127f70;
      ppuStack_e0 = &PTR_FUN_110cbcac8;
      ppuStack_f0 = ppuVar14;
      func_0x00010b135678();
      ppuVar8[1] = (undefined *)ppuStack_128;
      *ppuVar8 = (undefined *)ppuStack_130;
      ppuVar8[2] = puStack_120;
      ppuVar9 = ppuVar8;
      if (puStack_120 != (undefined *)0x0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_02 != 0);
      }
      ppuVar8[4] = puStack_110;
      ppuVar8[3] = puStack_118;
      if (puStack_110 != (undefined *)0x0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_03 != 0);
      }
      ppuVar7[0x27] = FUN_10b127f9c;
      ppuStack_a0 = &PTR_DAT_110cbcae0;
      pppuStack_d8 = (undefined ***)ppuVar8;
      func_0x00010b135e28();
      *ppuVar9 = (undefined *)ppuVar14;
      ppuVar9[1] = FUN_10b127f70;
      ppuVar9[2] = (undefined *)&PTR_FUN_110cbcac8;
      ppuVar9[3] = (undefined *)ppuVar8;
      pppuStack_d8 = (undefined ***)0x0;
      ppuStack_98 = ppuVar9;
      func_0x000107c2816c(ppuVar7 + 0x28,&ppuStack_a0);
      (*(code *)*ppuStack_a0)(&ppuStack_a0);
      FUN_10b127f78(&ppuStack_e0);
      ppuStack_a0 = ppuStack_100;
      ppuStack_98 = (undefined **)puStack_f8;
      if (puStack_f8 == (undefined *)0x0) {
        plVar10 = *(long **)(lVar18 + 0x20);
        ppuVar14 = (undefined **)0x0;
        ppuVar8 = ppuStack_100;
      }
      else {
        do {
          func_0x00010b133f68();
        } while (extraout_w12 != 0);
        plVar10 = *(long **)(lVar18 + 0x20);
        do {
          func_0x00010b133f68();
          ppuVar14 = extraout_x8_00;
          ppuVar8 = extraout_x9;
        } while (extraout_w12_00 != 0);
      }
      ppuStack_f0 = &PTR_FUN_110cbcb08;
      uStack_140 = 0;
      uStack_138 = 0;
      pppuStack_d8 = &ppuStack_f0;
      ppuStack_e8 = ppuVar8;
      ppuStack_e0 = ppuVar14;
      (**(code **)(*plVar10 + 0xa8))();
      func_0x000107c27938(&ppuStack_f0);
      func_0x00010b12581c(&uStack_140);
      func_0x00010b1356c8();
      plStack_188 = param_1;
    }
    func_0x00010b135690();
    func_0x00010b114114(&ppuStack_130);
  }
  else {
    FUN_10b127af8(&ppuStack_f0,ppuVar7[4],ppuVar7[5]);
    ppuVar8 = ppuStack_e8;
    ppuVar14 = ppuStack_f0;
    ppuStack_130 = ppuStack_f0;
    ppuStack_128 = ppuStack_e8;
    if (ppuStack_e8 == (undefined **)0x0) {
      func_0x00010b134f60();
    }
    else {
      ppuVar9 = ppuStack_e8 + 2;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar5) {
          *ppuVar9 = *ppuVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      func_0x00010b134f60();
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
        if (bVar5) {
          *ppuVar9 = *ppuVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar17 = *(undefined8 *)(lVar18 + 0x18);
    pppuVar20 = *(undefined ****)(lVar18 + 0x10);
    if (*(long *)(lVar18 + 0x18) != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_04 != 0);
    }
    ppuVar7[0x27] = FUN_10b1281a8;
    ppuStack_f0 = &PTR_FUN_110cbcb78;
    ppuStack_e8 = ppuVar14;
    ppuStack_e0 = ppuVar8;
    ppuStack_a0 = (undefined **)0x0;
    ppuStack_98 = (undefined **)0x0;
    uStack_90 = 0;
    pppuStack_88 = (undefined ***)0x0;
    pppuStack_d8 = pppuVar20;
    ppuStack_d0 = (undefined **)uVar17;
    func_0x000107c2816c(ppuVar7 + 0x28,&ppuStack_f0);
    func_0x00010b135638();
    func_0x00010b11413c(&ppuStack_a0);
    func_0x00010b135ea0();
    func_0x000107c278b8(&ppuStack_f0,&UNK_10f72f52f);
    func_0x00010b1341c0();
    func_0x00010b13488c();
    plStack_188 = param_1;
  }
  func_0x00010b114160(ppuVar13,param_4);
  FUN_10b17f6d4(&ppuStack_a0);
  ppuVar8 = ppuStack_98;
  ppuVar14 = ppuStack_a0;
  ppuStack_a0 = (undefined **)0x0;
  ppuStack_98 = (undefined **)0x0;
  ppuStack_e8 = (undefined **)ppuVar7[0x3c];
  ppuStack_f0 = (undefined **)*ppuVar2;
  ppuVar7[0x3c] = (undefined *)ppuVar8;
  *ppuVar2 = (undefined *)ppuVar14;
  FUN_10b0ffe04(&ppuStack_f0);
  FUN_10b0ffe04(&ppuStack_a0);
  puVar16 = ppuVar7[8];
  puVar15 = (undefined8 *)0x10;
  __Znwm();
  *puVar15 = ppuVar13;
  puVar15[1] = puVar16;
  ppuStack_f0 = (undefined **)0x0;
  FUN_10b1258cc(ppuVar7 + 0x3d);
  func_0x00010b1258ac(&ppuStack_f0);
  ppuStack_f0 = *(undefined ***)(*(long *)(ppuVar7[6] + 0x30) + 0x20);
  ppuStack_e8 = *(undefined ***)(*(long *)(ppuVar7[6] + 0x30) + 0x28);
  if (ppuStack_e8 != (undefined **)0x0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_05 != 0);
  }
  func_0x00010b114198();
  func_0x00010b135eb8();
  ppuStack_f0 = *(undefined ***)(*(long *)(*ppuVar13 + 0x30) + 0x40);
  ppuStack_e8 = *(undefined ***)(*(long *)(*ppuVar13 + 0x30) + 0x48);
  if (ppuStack_e8 != (undefined **)0x0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_06 != 0);
  }
  func_0x00010b114198();
  func_0x00010b135eb8();
  FUN_10b127af8(&ppuStack_f0,ppuVar7[4],ppuVar7[5]);
  ppuVar14 = ppuStack_e8;
  ppuVar2 = ppuStack_f0;
  ppuStack_a0 = ppuStack_f0;
  ppuStack_98 = ppuStack_e8;
  if (ppuStack_e8 != (undefined **)0x0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_07 != 0);
  }
  func_0x00010b134f60();
  if (ppuVar14 != (undefined **)0x0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_08 != 0);
  }
  ppuStack_f0 = (undefined **)FUN_10b1282c8;
  ppuStack_e8 = &PTR_FUN_110cbcba8;
  ppuStack_e0 = ppuVar2;
  pppuStack_d8 = (undefined ***)ppuVar14;
  ppuStack_130 = (undefined **)0x0;
  ppuStack_128 = (undefined **)0x0;
  FUN_10b1f7320();
  func_0x00010b13485c(ppuStack_e8);
  func_0x00010b135ea0();
  FUN_10b1141c0(&ppuStack_130,ppuVar7 + 0x1b);
  puVar16 = *ppuVar13;
  uStack_148 = 0;
  FUN_10b114244(&uStack_140,ppuVar7 + 0x1d);
  FUN_10b114210(&ppuStack_100,puVar16,puVar16 + 0x20,puVar16 + 0x40,&uStack_148,&ppuStack_130,
                &uStack_140);
  puVar16 = puStack_f8;
  ppuVar2 = ppuStack_100;
  ppuStack_100 = (undefined **)0x0;
  puStack_f8 = (undefined *)0x0;
  ppuStack_e8 = (undefined **)ppuVar7[0x3f];
  ppuStack_f0 = (undefined **)ppuVar7[0x3e];
  ppuVar7[0x3f] = puVar16;
  ppuVar7[0x3e] = (undefined *)ppuVar2;
  func_0x0001052a1374(&ppuStack_f0);
  FUN_10b12878c(&ppuStack_100);
  func_0x00010b135688();
  FUN_10b120a3c(&ppuStack_130);
  FUN_10b18587c(&ppuStack_130,ppuVar7[6] + 0x40);
  ppuVar14 = ppuStack_128;
  ppuVar2 = ppuStack_130;
  ppuStack_130 = (undefined **)0x0;
  ppuStack_128 = (undefined **)0x0;
  ppuStack_e8 = (undefined **)ppuVar7[0x43];
  ppuStack_f0 = (undefined **)ppuVar7[0x42];
  ppuVar7[0x43] = (undefined *)ppuVar14;
  ppuVar7[0x42] = (undefined *)ppuVar2;
  FUN_10b102da8(&ppuStack_f0);
  pppuVar20 = &ppuStack_130;
  FUN_10b129584();
  func_0x00010b134ad8();
  func_0x00010b1341c0();
  func_0x00010b13488c();
  func_0x00010b1356c8();
  __ZNSt3__16chrono12steady_clock3nowEv();
  pppuVar11 = &ppuStack_130;
  FUN_10b127af8(pppuVar11,ppuVar7[4],ppuVar7[5]);
  ppuVar2 = *(undefined ***)(*(long *)(*ppuVar13 + 0x30) + 0x10);
  puStack_f8 = *(undefined **)(*(long *)(*ppuVar13 + 0x30) + 0x18);
  ppuStack_100 = ppuVar2;
  if (puStack_f8 != (undefined *)0x0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_09 != 0);
  }
  ppuVar8 = ppuStack_128;
  ppuVar14 = ppuStack_130;
  ppuStack_f0 = ppuStack_130;
  ppuStack_e8 = ppuStack_128;
  if (ppuStack_128 != (undefined **)0x0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_10 != 0);
  }
  ppuStack_e0 = (undefined **)0x0;
  ppuStack_d0 = (undefined **)CONCAT71(ppuStack_d0._1_7_,1);
  pppuStack_88 = (undefined ***)0x0;
  pppuStack_d8 = pppuVar20;
  func_0x00010b134ad0();
  *pppuVar11 = &PTR_SUB_110cbca58;
  pppuVar11[1] = ppuVar14;
  pppuVar11[2] = ppuVar8;
  ppuVar14 = ppuStack_e0;
  ppuStack_f0 = (undefined **)0x0;
  ppuStack_e8 = (undefined **)0x0;
  pppuVar11[4] = (undefined **)pppuStack_d8;
  pppuVar11[3] = ppuVar14;
  pppuVar11[5] = ppuStack_d0;
  pppuStack_88 = pppuVar11;
  FUN_10b208740(ppuVar2,&ppuStack_a0);
  func_0x000107c27938(&ppuStack_a0);
  func_0x00010b134f60();
  func_0x00010b127b34(&ppuStack_100);
  func_0x00010b12592c(&ppuStack_130);
  func_0x00010b134ad8();
  func_0x00010b1341c0();
  func_0x00010b13488c();
  FUN_10b13c0c8(param_3);
  uVar17 = *(undefined8 *)*ppuVar13;
  func_0x00010b1341a0(&ppuStack_f0);
  func_0x00010b1349dc(auStack_c8);
  func_0x00010b1346c4(&ppuStack_a0,&ppuStack_f0);
  puVar15 = &uStack_160;
  func_0x000107c28148(puVar15);
  FUN_10b1135dc(uVar17,10,&ppuStack_a0,puVar15);
  FUN_10b120998(&ppuStack_a0);
  do {
    func_0x00010b1355dc();
    func_0x00010b135170();
  } while (!(bool)uVar6);
  ppuStack_e8 = (undefined **)*param_1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ppuVar19,0x10);
    if (bVar5) {
      *ppuVar19 = *ppuVar19 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  *(code **)((long)ppuStack_e8 + 0xe8) = FUN_10b12704c;
  ppuStack_f0 = &PTR_FUN_110cbc9e8;
  ppuStack_a0 = (undefined **)0x0;
  ppuStack_98 = (undefined **)0x0;
  ppuStack_e0 = ppuVar7;
  func_0x000107c2816c((long)ppuStack_e8 + 0xf0,&ppuStack_f0);
  func_0x00010b135638();
  func_0x00010b12592c(&ppuStack_a0);
  func_0x00010b133dfc(uStack_70);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    func_0x00010b13478c();
    func_0x00010b1349e4();
    func_0x00010b120f50(&ppuStack_f0);
    func_0x00010b125864(&ppuStack_100);
    func_0x00010b125864(&ppuStack_130);
    func_0x00010b12592c(plStack_188);
    func_0x00010b1358ac();
    func_0x00010b134290();
    func_0x00010b134ea0(*(undefined8 *)*ppuStack_f0);
    func_0x00010b134e98();
    return;
  }
  return;
}



/* Entry: 10b1135dc; end: 10b113617;  */

void FUN_10b1135dc(void)

{
  undefined8 *unaff_x20;
  
  func_0x00010b134290();
  func_0x00010b134ea0(**(undefined8 **)*unaff_x20);
  func_0x00010b134e98();
  return;
}



/* Entry: 10b113618; end: 10b1136e7;  */

void FUN_10b113618(void)

{
  code *pcVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  int extraout_w11;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x00010b13629c();
  func_0x00010b136284();
  FUN_10b1209bc();
  func_0x00010b136278();
  FUN_10b1209e8();
  FUN_10b120a3c(auStack_40);
  func_0x00010b134e54();
  func_0x00010b134e2c(alStack_30[0] + 0x48);
  __ZNSt3__15mutex4lockEv();
  func_0x00010b136260();
  lVar2 = extraout_x8;
  if (extraout_x9 != 0) {
    do {
      func_0x00010b133f58();
      lVar2 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  func_0x00010b13626c(lVar2 + 0x18);
  FUN_10b120a0c();
  func_0x00010b1350a4();
  if (*(long *)(alStack_30[0] + 0x88) != 0) {
    func_0x00010b1355b4();
    func_0x00010b134c7c();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1136b4);
    (*pcVar1)();
  }
  func_0x00010b135950();
  func_0x00010b134ab4();
  FUN_10b120a3c(alStack_30);
  return;
}



/* Entry: 10b1136e8; end: 10b113e07;  */

void FUN_10b1136e8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  long lVar12;
  undefined8 extraout_x8_01;
  undefined8 uVar13;
  code *extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x9;
  code *extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 uVar14;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  long lVar15;
  long extraout_x12;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  int iVar19;
  long lVar20;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined1 auStack_90 [16];
  undefined8 *puStack_80;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar6 = (undefined8 *)0x138;
  __Znwm();
  *puVar6 = FUN_10b1337a8;
  puVar6[1] = FUN_10b133d58;
  puVar16 = puVar6 + 2;
  *puVar16 = &PTR_FUN_110cbc510;
  uVar13 = *param_2;
  puVar6[0x1e] = param_2[1];
  puVar6[0x1d] = uVar13;
  puVar6[0x1f] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar7 = (undefined8 *)0xb0;
  __Znwm();
  puVar11 = puVar7 + 3;
  *puVar11 = 0;
  puVar9 = puVar6 + 3;
  *puVar9 = puVar11;
  puVar7[1] = 0;
  plVar17 = puVar6 + 0xb;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110cbc530;
  puVar2 = puVar6 + 0x20;
  puVar18 = puVar6 + 0x22;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0x3cb0b1bb;
  puVar7[8] = 0;
  puVar7[7] = 0;
  puVar7[10] = 0;
  puVar7[9] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0x32aaaba7;
  puVar7[0xe] = 0;
  puVar7[0xd] = 0;
  puVar7[0x10] = 0;
  puVar7[0xf] = 0;
  puVar7[0x12] = 0;
  puVar7[0x11] = 0;
  puVar7[0x14] = 0;
  puVar7[0x13] = 0;
  puVar7[0x15] = 0;
  puVar6[4] = puVar7;
  puVar6[5] = puVar11;
  puVar6[6] = puVar7;
  do {
    func_0x00010b133f58();
  } while (extraout_w11 != 0);
  puVar11 = puVar6 + 7;
  *(undefined1 *)puVar11 = 0;
  puVar6[2] = &PTR_FUN_110cbc4c8;
  *(undefined1 *)(puVar6 + 10) = 0;
  puStack_b0 = extraout_x8;
  puStack_a8 = puVar7;
  do {
    func_0x00010b133f58();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010b133f58();
  } while (extraout_w11_01 != 0);
  *param_1 = extraout_x8_00;
  param_1[1] = puVar7;
  FUN_10b120b58(&puStack_b0);
  FUN_10b1b9728(plVar17);
  plVar8 = plVar17;
  FUN_10b1270a8();
  if (((ulong)plVar8 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x26) = 0;
    puStack_80 = puVar6;
    plStack_78 = plVar17;
    FUN_10b12713c(&lStack_70,plVar17,&puStack_80);
    if (lStack_68 != 0) {
      do {
        func_0x00010b1340a4();
      } while (extraout_w11_02 != 0);
      if (extraout_x9 == 0) {
        func_0x00010b1346dc();
        func_0x00010b134574();
        __ZNSt3__119__shared_weak_count14__release_weakEv(lStack_68);
      }
    }
  }
  else {
    FUN_10b113e08(puVar2,plVar17);
    FUN_10b120e24(plVar17);
    FUN_10b113eb4(puVar18,puVar2,puVar6 + 0x1d);
    FUN_10b1ab8c8(&lStack_70,puVar18);
    lVar12 = lStack_70;
    if (lStack_70 == 0) {
      iVar19 = 0;
    }
    else {
      puStack_a8 = *(undefined8 **)(lStack_70 + 0x28);
      puStack_b0 = *(undefined8 **)(lStack_70 + 0x20);
      if (*(long *)(lStack_70 + 0x28) != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10 != 0);
      }
      puVar6[0xc] = &PTR_FUN_110cbca30;
      puVar6[0xb] = FUN_10b127674;
      puVar6[0xd] = &puStack_b0;
      puVar6[0xe] = puVar18;
      puVar6[0xf] = &lStack_70;
      FUN_10b112778(&puStack_80,puVar6 + 0x1d,plVar17);
      func_0x00010b134028();
      func_0x00010b1358e4();
      func_0x00010b135c4c();
      func_0x00010b1355ec();
      iVar19 = 3;
    }
    func_0x00010b125888(&lStack_70);
    if (lVar12 == 0) {
      func_0x00010b135c40();
      puVar7 = puVar6 + 0x24;
      FUN_10b113ed8();
      if (((ulong)puVar7 & 1) == 0) {
        *(undefined1 *)(puVar6 + 0x26) = 1;
        __ZNSt3__115recursive_mutex4lockEv(puVar6[0x24]);
        lVar12 = puVar6[0x24];
        if ((*(byte *)(lVar12 + 0x58) & 1) != 0) {
          func_0x00010b135c9c();
          func_0x00010b134574(*puVar6);
          return;
        }
        puVar2 = *(undefined8 **)(lVar12 + 0x68);
        bVar4 = *(undefined8 **)(lVar12 + 0x70) <= puVar2;
        if (bVar4) {
          lVar15 = *(long *)(lVar12 + 0x60);
          lVar20 = (long)puVar2 - lVar15;
          if ((lVar20 >> 3) + 1U >> 0x3d != 0) {
            func_0x00010552fc6c();
LAB_10b113ca4:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10b113ca8);
            (*pcVar3)();
          }
          func_0x00010b133e4c((long)*(undefined8 **)(lVar12 + 0x70) - lVar15);
          uVar1 = extraout_x9_04;
          if (bVar4) {
            uVar1 = extraout_x8_03;
          }
          if (uVar1 == 0) {
            lVar10 = 0;
          }
          else {
            if (uVar1 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto LAB_10b113ca4;
            }
            lVar10 = uVar1 << 3;
            __Znwm();
          }
          puVar2 = (undefined8 *)(lVar10 + lVar20);
          puVar18 = puVar2 + 1;
          *puVar2 = puVar6;
          _memcpy(puVar2 + -extraout_x12,lVar15,lVar20);
          *(undefined8 **)(lVar12 + 0x60) = puVar2 + -extraout_x12;
          *(undefined8 **)(lVar12 + 0x68) = puVar18;
          *(ulong *)(lVar12 + 0x70) = lVar10 + uVar1 * 8;
          if (lVar15 != 0) {
            func_0x00010b134560();
          }
        }
        else {
          puVar18 = puVar2 + 1;
          *puVar2 = puVar6;
        }
        *(undefined8 **)(lVar12 + 0x68) = puVar18;
        func_0x00010b135c9c();
        return;
      }
      plVar8 = puVar6 + 0x24;
      FUN_10b113f00();
      lVar12 = plVar8[1];
      lVar15 = *plVar8;
      puVar6[0xc] = plVar8[1];
      *plVar17 = lVar15;
      if (lVar12 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010b1351f0();
      lStack_70 = *(long *)(*plVar17 + 8);
      lStack_68 = *(long *)(*plVar17 + 0x10);
      if (lStack_68 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010b1364f8();
      (*extraout_x9_00)(&puStack_80);
      if (puStack_80 == (undefined8 *)0x0) {
        iVar19 = 0;
      }
      else {
        func_0x00010b134a58(lStack_70);
        func_0x00010b134cd8();
        puVar6[0x12] = &PTR_FUN_110cbca00;
        puVar6[0x11] = FUN_10b127584;
        puVar6[0x13] = &lStack_70;
        puVar6[0x14] = puVar2;
        puVar6[0x15] = &puStack_80;
        FUN_10b112778(auStack_90,&puStack_b0,puVar6 + 0x11);
        FUN_10b127528(puVar11,auStack_90);
        func_0x00010b1355a4();
        func_0x00010b134028();
        func_0x00010b134678();
        iVar19 = 3;
      }
      func_0x000107c278a4(&puStack_80);
      if (puStack_80 == (undefined8 *)0x0) {
        func_0x00010b134a58(lStack_70);
        func_0x00010b134cd8();
        func_0x00010b1361f0();
        puVar6[0x18] = extraout_x9_01;
        puVar6[0x17] = extraout_x8_01;
        puVar6[0x19] = &lStack_70;
        puVar6[0x1a] = puVar2;
        FUN_10b112778(&puStack_80,&puStack_b0,puVar6 + 0x17);
        func_0x00010b135c4c();
        func_0x00010b1355ec();
        func_0x00010b134028();
        func_0x00010b134678();
        iVar19 = 3;
      }
      func_0x00010b1354b4();
      func_0x000107c2be20(plVar17);
    }
    func_0x00010b1257f8(puVar18);
    func_0x00010b125908(puVar2);
    uVar5 = iVar19 == 3;
    if ((bool)uVar5) {
      func_0x00010b135930();
      func_0x00010b1361d0();
      if ((bool)uVar5) {
        __ZNSt3__112__get_sp_mutEPKv(puVar9);
        __ZNSt3__18__sp_mut4lockEv();
        puVar2 = (undefined8 *)puVar6[3];
        puVar18 = (undefined8 *)puVar6[4];
        puVar6[3] = 0;
        puVar6[4] = 0;
        __ZNSt3__18__sp_mut6unlockEv(puVar9);
        puStack_b0 = puVar2;
        puStack_a8 = puVar18;
        __ZNSt3__15mutex4lockEv(puVar2 + 9);
        uVar13 = *puVar11;
        if (*(char *)(puVar2 + 2) == '\x01') {
          uVar14 = puVar6[8];
          *puVar11 = 0;
          puVar6[8] = 0;
          lVar12 = puVar2[1];
          *puVar2 = uVar13;
          puVar2[1] = uVar14;
          puVar18 = puStack_b0;
          if (lVar12 != 0) {
            do {
              func_0x00010b1340a4();
            } while (extraout_w11_03 != 0);
            puVar18 = puStack_b0;
            if (extraout_x9_02 == 0) {
              func_0x00010b135a2c();
              func_0x00010b13508c();
              __ZNSt3__119__shared_weak_count14__release_weakEv(lVar12);
              puVar18 = puStack_b0;
            }
          }
        }
        else {
          *puVar2 = uVar13;
          puVar2[1] = puVar6[8];
          *puVar11 = 0;
          puVar6[8] = 0;
          *(undefined1 *)(puVar2 + 2) = 1;
          puVar18 = puVar2;
        }
        plVar17 = (long *)puVar18[0x12];
        puVar18[0x12] = 0;
        __ZNSt3__15mutex6unlockEv(puVar2 + 9);
        if (plVar17 == (long *)0x0) {
          __ZNSt3__118condition_variable10notify_allEv(puVar18 + 3);
        }
        else {
          func_0x00010b135a2c();
          (*extraout_x8_02)(plVar17,&puStack_b0);
          func_0x00010b13508c(*(undefined8 *)(*plVar17 + 8));
        }
        puVar2 = puStack_a8;
        if (puStack_a8 != (undefined8 *)0x0) {
          do {
            func_0x00010b1340a4();
          } while (extraout_w11_04 != 0);
          if (extraout_x9_03 == 0) {
            func_0x00010b135a2c();
            func_0x00010b13508c();
            __ZNSt3__119__shared_weak_count14__release_weakEv(puVar2);
          }
        }
      }
      else {
        __ZNSt13exception_ptrC1ERKS_(&puStack_b0,puVar11);
        FUN_10b120c04(puVar16,&puStack_b0);
        func_0x00010b1358ec();
      }
    }
    FUN_10b120efc(puVar16);
    func_0x00010b1354fc();
    func_0x00010b134560();
  }
  return;
}



/* Entry: 10b113e08; end: 10b113eb3;  */

void FUN_10b113e08(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w12;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_30 = 0;
  lStack_28 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10b120d0c(&uStack_40,param_2,&uStack_50);
  FUN_10b120d38(&uStack_30,&uStack_40);
  func_0x00010b134c58();
  func_0x00010b134cd0();
  if (lStack_28 == 0) {
    uStack_38 = 0;
    uStack_40 = uStack_30;
  }
  else {
    do {
      func_0x00010b133f68();
      uStack_38 = extraout_x9;
    } while (extraout_w12 != 0);
    do {
      func_0x00010b1348e4();
      uStack_40 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10b120d5c(param_1,&uStack_40);
  func_0x00010b134c58();
  func_0x00010b135074();
  func_0x00010b134e74();
  return;
}



/* Entry: 10b113eb4; end: 10b113ed7;  */

void FUN_10b113eb4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_10b127480(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 10b113ed8; end: 10b113eff;  */

undefined1 FUN_10b113ed8(void)

{
  undefined1 uVar1;
  long *unaff_x19;
  
  func_0x00010b134818();
  uVar1 = *(undefined1 *)(*unaff_x19 + 0x58);
  func_0x00010b134884();
  return uVar1;
}



/* Entry: 10b113f00; end: 10b113f43;  */

void FUN_10b113f00(long *param_1)

{
  code *pcVar1;
  
  if ((*(byte *)(*param_1 + 0x50) & 1) == 0) {
    func_0x00010b134e8c();
    func_0x00010b134c7c();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b113f3c);
    (*pcVar1)();
  }
  if ((*(byte *)(*param_1 + 0x50) & 1) != 0) {
    return;
  }
  func_0x00010b13604c();
  func_0x00010b13570c();
  func_0x00010b135d2c();
  func_0x00010b1351ac();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b120ef4);
  (*pcVar1)();
}



/* Entry: 10b113f44; end: 10b113fb7;  */

void FUN_10b113f44(void)

{
  long lVar1;
  char cVar2;
  long unaff_x19;
  long lVar3;
  
  func_0x00010b136058();
  cVar2 = *(char *)(unaff_x19 + 0xe0);
  *(undefined1 *)(unaff_x19 + 0xe0) = 0;
  if (cVar2 == '\x01') {
    lVar1 = *(long *)(unaff_x19 + 0xf0);
    for (lVar3 = *(long *)(unaff_x19 + 0xe8); lVar3 != lVar1; lVar3 = lVar3 + 0x60) {
      func_0x000107c31464();
    }
    FUN_10b127ee0((long *)(unaff_x19 + 0xe8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0xa0);
  return;
}



/* Entry: 10b113fb8; end: 10b114067;  */

void FUN_10b113fb8(undefined8 *param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int extraout_w10;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 unaff_x30;
  undefined8 uVar8;
  
  uVar2 = param_2[1];
  if ((uVar2 != 0) && (param_2[3] != 0)) {
    uVar4 = uVar2 - 1;
    uVar5 = (ulong)~(uint)uVar2;
    if ((uVar2 & uVar4) != 0) {
      uVar5 = 1;
    }
    uVar5 = uVar5 & param_3;
    plVar6 = *(long **)(*param_2 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10b114038;
          uVar7 = plVar6[1];
          if (uVar7 != param_3) break;
          if (*(uint *)(plVar6 + 2) == param_3) {
            lVar3 = plVar6[4];
            uVar8 = plVar6[3];
            param_1[1] = plVar6[4];
            *param_1 = uVar8;
            if (lVar3 != 0) {
              do {
                func_0x00010b134088(unaff_x30);
              } while (extraout_w10 != 0);
            }
            return;
          }
        }
        if ((uVar2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (uVar2 <= uVar7) {
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = uVar7 / uVar2;
          }
          uVar7 = uVar7 - uVar1 * uVar2;
        }
      } while (uVar7 == uVar5);
    }
  }
LAB_10b114038:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10b114068; end: 10b11408b;  */

void FUN_10b114068(void)

{
  func_0x00010b133dc4();
  func_0x00010b125864();
  return;
}



/* Entry: 10b11408c; end: 10b114113;  */

void FUN_10b11408c(long *param_1)

{
  long lVar1;
  long *plVar2;
  int extraout_w10;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  lVar1 = *param_1;
  func_0x00010b135910(param_1[1]);
  func_0x00010b1360e0();
  func_0x00010b120fc4(lVar1 + 0x38,&lStack_30);
  func_0x00010b125840(&lStack_30);
  FUN_10b0ff1ac(auStack_40);
  plVar2 = *(long **)(lVar1 + 0x38);
  lStack_28 = param_1[4];
  lStack_30 = param_1[3];
  if (param_1[4] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*plVar2 + 0x20))();
  func_0x0001052a1398(&lStack_30);
  return;
}



/* Entry: 10b114114; end: 10b1141bf;  */

void FUN_10b114114(void)

{
  long unaff_x19;
  
  func_0x00010b1348cc();
  func_0x00010b120fe8();
  func_0x000107c2bdf4(unaff_x19 + 8);
  return;
}



/* Entry: 10b1141c0; end: 10b11420f;  */

void FUN_10b1141c0(void)

{
  undefined1 auStack_48 [40];
  
  func_0x00010b135394();
  FUN_10b12880c(auStack_48);
  FUN_10b1287b0(auStack_48);
  func_0x00010b1287cc(auStack_48);
  FUN_10b128b68(auStack_48);
  return;
}



/* Entry: 10b114210; end: 10b114243;  */

void FUN_10b114210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 uStack_11;
  
  FUN_10b129298(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 10b114244; end: 10b11442f;  */

void FUN_10b114244(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 extraout_w8;
  long lVar6;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  int extraout_w10;
  undefined4 extraout_w10_00;
  undefined4 extraout_var;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_x23;
  
  func_0x00010b13652c();
  func_0x00010b134ce0();
  puVar4 = (undefined8 *)0x70;
  __Znwm();
  *puVar4 = FUN_10b1336a8;
  puVar4[1] = FUN_10b13377c;
  FUN_10b128cf8(puVar4 + 2);
  FUN_10b128cac(puVar4 + 2);
  puVar5 = unaff_x20;
  func_0x00010b11fd48();
  if ((int)puVar5 == 0) {
    lVar6 = unaff_x20[1];
    puVar4[0xb] = *unaff_x20;
    puVar4[0xc] = lVar6;
    if (lVar6 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    puVar5 = puVar4 + 0xb;
    func_0x00010b11fd48();
    if (((ulong)puVar5 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0xd) = 0;
      uVar7 = puVar4[0xb];
      func_0x00010b134c84();
      lVar6 = puVar4[0xb];
      if ((*(byte *)(lVar6 + 0x58) & 1) != 0) {
        func_0x00010b134884();
        func_0x00010b134574(*puVar4);
        return;
      }
      puVar5 = *(undefined8 **)(lVar6 + 0x68);
      uVar3 = *(undefined8 **)(lVar6 + 0x70) <= puVar5;
      if ((bool)uVar3) {
        lVar8 = *(long *)(lVar6 + 0x60);
        func_0x00010b134648();
        if (CONCAT44(extraout_var,extraout_w10_00) != 0) {
          func_0x00010552fc6c();
LAB_10b1143d4:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1143d8);
          (*pcVar2)();
        }
        func_0x00010b133e4c(extraout_x8 - lVar8);
        uVar1 = extraout_x9;
        if ((bool)uVar3) {
          uVar1 = extraout_x8_00;
        }
        if (uVar1 != 0) {
          if (uVar1 >> 0x3d != 0) {
            func_0x000104bd35f4();
            goto LAB_10b1143d4;
          }
          __Znwm(uVar1 << 3);
        }
        func_0x00010b133f38();
        *(undefined8 *)(lVar6 + 0x60) = unaff_x23;
        *(undefined8 **)(lVar6 + 0x68) = puVar5;
        *(ulong *)(lVar6 + 0x70) = uVar1;
        if (lVar8 != 0) {
          func_0x00010b134bcc();
        }
      }
      else {
        *puVar5 = puVar4;
        puVar5 = puVar5 + 1;
      }
      *(undefined8 **)(lVar6 + 0x68) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar7);
      return;
    }
    FUN_10b124cf0(puVar4[0xb]);
    func_0x00010b135f4c();
    func_0x00010b135f68();
  }
  else {
    FUN_10b124cf0();
    func_0x00010b135f4c();
  }
  func_0x00010b13490c();
  *(undefined1 *)(puVar4 + 0xd) = extraout_w8;
  func_0x00010b1361d0();
  if ((bool)in_ZR) {
    func_0x00010b1348c0();
    FUN_10b129190();
  }
  else {
    func_0x00010b136080();
    func_0x00010b1348c0();
    FUN_10b129038();
    func_0x00010b1348a4();
  }
  func_0x00010b135ffc();
  func_0x00010b134560();
  return;
}



/* Entry: 10b114430; end: 10b114443;  */

void FUN_10b114430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b114440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 0x20) + 0x90))();
  return;
}



/* Entry: 10b114444; end: 10b1144bf;  */

void FUN_10b114444(long param_1)

{
  long *plVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 0x20) + 0x80))();
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x20);
  uStack_30 = 0;
  uStack_28 = 0;
  (**(code **)(*plVar1 + 0x88))(plVar1,&uStack_30);
  func_0x0001052b243c(&uStack_30);
  if ((*(byte *)(*(long *)(param_1 + 0xf0) + 8) & 1) == 0) {
    func_0x00010b134574(*(undefined8 *)(param_1 + 0xe8));
    FUN_10b1144c0((undefined8 *)(param_1 + 0xe8));
  }
  return;
}



/* Entry: 10b1144c0; end: 10b11452b;  */

void FUN_10b1144c0(long param_1)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  code **ppcVar4;
  undefined8 **ppuVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 in_ZR;
  bool bVar8;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  code **ppcVar12;
  undefined8 ****ppppuVar13;
  undefined **ppuVar14;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar15;
  undefined8 *puVar16;
  undefined8 ****ppppuVar17;
  ulong extraout_x8_01;
  ulong uVar18;
  ulong extraout_x9;
  int extraout_w10;
  long unaff_x19;
  undefined8 ****ppppuVar19;
  undefined8 ***pppuVar20;
  code **ppcVar21;
  undefined8 ****ppppuVar22;
  undefined8 ***pppuVar23;
  undefined8 ***pppuVar24;
  undefined8 **ppuVar25;
  undefined8 **ppuVar26;
  ulong uVar27;
  byte bVar28;
  uint6 uVar29;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  undefined8 uVar30;
  byte bVar36;
  code *pcStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  code **ppcStack_1c0;
  code **ppcStack_1b8;
  undefined8 auStack_1b0 [2];
  code *pcStack_1a0;
  code **ppcStack_198;
  code **ppcStack_190;
  undefined8 ***pppuStack_188;
  undefined8 ***pppuStack_180;
  long lStack_178;
  undefined8 **ppuStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  code *pcStack_148;
  code *pcStack_140;
  undefined **ppuStack_138;
  code **ppcStack_130;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b133e10();
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  puStack_58 = &UNK_1053a6a3c;
  ppuStack_50 = &PTR_DAT_110873830;
  ppuVar14 = &puStack_58;
  uStack_28 = extraout_x8;
  func_0x000107c28168();
  func_0x00010b133ea8(ppuStack_50);
  func_0x00010b133dfc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b133e10();
  uStack_f0 = extraout_x8_00;
  FUN_10b127af8(&pcStack_150,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  ppuStack_170 = (undefined8 **)&UNK_10e52b660;
  lStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  ppuVar25 = (undefined8 **)*ppuVar14;
  ppuVar26 = (undefined8 **)ppuVar14[1];
  lVar15 = (long)ppuVar26 - (long)ppuVar25;
  if (lVar15 != 0) {
    if (lVar15 == 0xe0) {
      lVar15 = 8;
    }
    else {
      lVar15 = ((lVar15 >> 5) + -1) / 7 + (lVar15 >> 5);
    }
    uVar18 = 0xffffffffffffffff >> (LZCOUNT(lVar15) & 0x3fU);
    if (lVar15 == 0) {
      uVar18 = 1;
    }
    FUN_10b1295a8(&ppuStack_170,uVar18);
    ppuVar25 = (undefined8 **)*ppuVar14;
    ppuVar26 = (undefined8 **)ppuVar14[1];
  }
  pppuStack_180 = (undefined8 ****)0x0;
  lStack_178 = 0;
  pppuStack_188 = &pppuStack_180;
LAB_10b1145e8:
  ppppuVar13 = (undefined8 ****)pppuStack_188;
  if (ppuVar25 != ppuVar26) {
    pcStack_140 = (code *)CONCAT44(pcStack_140._4_4_,*(undefined4 *)(ppuVar25 + 3));
    bVar2 = *(byte *)((long)ppuVar25 + 0x17);
    uVar9 = bVar2 == 0;
    ppcStack_130 = (code **)ppuVar25[1];
    ppuStack_138 = (undefined **)*ppuVar25;
    if (-1 < (char)bVar2) {
      ppcStack_130 = (code **)(ulong)bVar2;
      ppuStack_138 = (undefined **)ppuVar25;
    }
    Hint_Prefetch(ppuStack_170,0,2,0);
    ppcVar12 = &pcStack_140;
    FUN_10b129684(ppuStack_170);
    uVar6 = uStack_160;
    ppuVar5 = ppuStack_170;
    lVar15 = 0;
    uVar18 = (ulong)ppuStack_170 >> 0xc ^ (ulong)ppcVar12 >> 7;
    bVar2 = (byte)ppcVar12;
    uVar29 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
             0x7f7f7f7f7f7f;
    do {
      uVar18 = uVar18 & uVar6;
      uVar30 = *(undefined8 *)((long)ppuVar5 + uVar18);
      cVar31 = (char)((ulong)uVar30 >> 8);
      cVar32 = (char)((ulong)uVar30 >> 0x10);
      cVar33 = (char)((ulong)uVar30 >> 0x18);
      cVar34 = (char)((ulong)uVar30 >> 0x20);
      cVar35 = (char)((ulong)uVar30 >> 0x28);
      bVar28 = (byte)((ulong)uVar30 >> 0x30);
      bVar36 = (byte)((ulong)uVar30 >> 0x38);
      uVar27 = CONCAT17(-(bVar36 == (bVar2 & 0x7f)),
                        CONCAT16(-(bVar28 == (bVar2 & 0x7f)),
                                 CONCAT15(-(cVar35 == (char)(uVar29 >> 0x28)),
                                          CONCAT14(-(cVar34 == (char)(uVar29 >> 0x20)),
                                                   CONCAT13(-(cVar33 == (char)(uVar29 >> 0x18)),
                                                            CONCAT12(-(cVar32 ==
                                                                      (char)(uVar29 >> 0x10)),
                                                                     CONCAT11(-(cVar31 ==
                                                                               (char)(uVar29 >> 8)),
                                                                              -((char)uVar30 ==
                                                                               (char)uVar29))))))))
               & 0x8080808080808080;
      if (uVar27 != 0) {
LAB_10b11465c:
        uVar10 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = lStack_168 +
                 (uVar18 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar6) * 0x18;
        FUN_10b1297f4(uVar10,&pcStack_140);
        if ((uVar10 & 1) == 0) goto code_r0x00010b114684;
        uVar30 = **(undefined8 **)(unaff_x19 + 0x18);
        FUN_10b12983c(&pcStack_140,*(undefined4 *)(ppuVar25 + 3));
        func_0x00010b129878(auStack_118,0x7001f);
        func_0x00010b1346c4(&pcStack_1d8,&pcStack_140);
        func_0x00010b134528(uVar30,0xab,&pcStack_1d8);
        func_0x00010b134754();
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
          func_0x00010b135388();
        } while (!(bool)uVar9);
        goto LAB_10b114704;
      }
LAB_10b114690:
      bVar28 = NEON_umaxv(CONCAT17(-(bVar36 == 0x80),
                                   CONCAT16(-(bVar28 == 0x80),
                                            CONCAT15(-(cVar35 == -0x80),
                                                     CONCAT14(-(cVar34 == -0x80),
                                                              CONCAT13(-(cVar33 == -0x80),
                                                                       CONCAT12(-(cVar32 == -0x80),
                                                                                CONCAT11(-(cVar31 ==
                                                                                          -0x80),-((
                                                  char)uVar30 == -0x80)))))))),1);
      if ((bVar28 & 1) != 0) goto LAB_10b11470c;
      lVar15 = lVar15 + 8;
      uVar18 = lVar15 + uVar18;
    } while( true );
  }
  while (uVar9 = ppppuVar13 == &pppuStack_180, !(bool)uVar9) {
    pcStack_1a0 = (code *)0x0;
    ppcStack_198 = (code **)0x0;
    ppcStack_190 = (code **)0x0;
    ppcVar12 = &pcStack_1a0;
    FUN_10b0f7b44(ppcVar12,(long)ppppuVar13[6] - (long)ppppuVar13[5] >> 3);
    pppuVar20 = ppppuVar13[6];
    for (pppuVar24 = ppppuVar13[5]; ppcVar21 = ppcStack_198, pppuVar24 != pppuVar20;
        pppuVar24 = pppuVar24 + 1) {
      if (ppcStack_198 < ppcStack_190) {
        func_0x00010b1351d8();
        ppcVar21 = ppcVar21 + 4;
        ppcVar12 = ppcStack_198;
      }
      else {
        ppcVar12 = &pcStack_1a0;
        FUN_10b0f7e84(ppcVar12,((long)ppcStack_198 - (long)pcStack_1a0 >> 5) + 1);
        FUN_10b0f7c50(&pcStack_140,ppcVar12,(long)ppcStack_198 - (long)pcStack_1a0 >> 5,
                      &ppcStack_190);
        func_0x00010b1351d8(ppcStack_130);
        ppcStack_130 = ppcStack_130 + 4;
        FUN_10b0f7bd4(&pcStack_1a0,&pcStack_140);
        ppcVar21 = ppcStack_198;
        ppcVar12 = &pcStack_140;
        func_0x00010b0f7e1c();
      }
      ppcStack_198 = ppcVar21;
    }
    func_0x00010b135b28();
    func_0x00010b1ff218(auStack_1b0);
    pcVar7 = pcStack_150;
    uVar30 = auStack_1b0[0];
    pcStack_1d8 = pcStack_150;
    pcStack_1d0 = pcStack_148;
    if (pcStack_148 != (code *)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    ppcVar4 = ppcStack_190;
    ppcVar21 = ppcStack_198;
    pcVar3 = pcStack_1a0;
    pcStack_1c8 = pcStack_1a0;
    ppcStack_1c0 = ppcStack_198;
    ppcStack_1b8 = ppcStack_190;
    pcStack_1a0 = (code *)0x0;
    ppcStack_198 = (code **)0x0;
    ppcStack_190 = (code **)0x0;
    pcStack_140 = FUN_10b1298e8;
    ppuStack_138 = &PTR_FUN_110cbcc98;
    func_0x00010b135678();
    *ppcVar12 = pcVar7;
    ppcVar12[1] = pcStack_1d0;
    pcStack_1d8 = (code *)0x0;
    pcStack_1d0 = (code *)0x0;
    ppcVar12[2] = pcVar3;
    ppcVar12[3] = (code *)ppcVar21;
    ppcVar12[4] = (code *)ppcVar4;
    ppcStack_1c0 = (code **)0x0;
    ppcStack_1b8 = (code **)0x0;
    pcStack_1c8 = (code *)0x0;
    ppcStack_130 = ppcVar12;
    FUN_10b20a5ac(uVar30,&pcStack_140);
    func_0x00010b135274();
    FUN_10b114b3c(&pcStack_1d8);
    func_0x00010b1298c4(auStack_1b0);
    func_0x00010b0f79e0(&pcStack_1a0);
    func_0x000107c27be0();
  }
  func_0x00010b1296c8(pppuStack_180);
  FUN_10b12103c(&ppuStack_170);
  func_0x00010b12592c(&pcStack_150);
  func_0x00010b133dfc(uStack_f0);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_10b114a24:
  FUN_10b121030();
LAB_10b114a30:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10b114a34);
  (*pcVar7)();
code_r0x00010b114684:
  uVar27 = uVar27 - 1 & uVar27;
  if (uVar27 == 0) goto LAB_10b114690;
  goto LAB_10b11465c;
LAB_10b11470c:
  ppppuVar13 = (undefined8 ****)&ppuStack_170;
  func_0x00010b129708(ppppuVar13,ppcVar12);
  puVar16 = (undefined8 *)(lStack_168 + (long)ppppuVar13 * 0x18);
  puVar16[2] = ppcStack_130;
  puVar16[1] = ppuStack_138;
  *puVar16 = pcStack_140;
  iVar1 = *(int *)(ppuVar25 + 3);
  ppppuVar17 = (undefined8 ****)pppuStack_180;
  ppppuVar19 = &pppuStack_180;
  while (ppppuVar22 = ppppuVar19, ppppuVar17 != (undefined8 ****)0x0) {
    while (ppppuVar19 = ppppuVar17, *(int *)(ppppuVar19 + 4) <= iVar1) {
      if (iVar1 <= *(int *)(ppppuVar19 + 4)) goto LAB_10b1147c8;
      ppppuVar17 = (undefined8 ****)ppppuVar19[1];
      if ((undefined8 ****)ppppuVar19[1] == (undefined8 ****)0x0) {
        ppppuVar22 = ppppuVar19 + 1;
        goto LAB_10b114780;
      }
    }
    ppppuVar17 = (undefined8 ****)*ppppuVar19;
  }
LAB_10b114780:
  func_0x00010b134ae0();
  *(int *)(ppppuVar13 + 4) = iVar1;
  ppppuVar13[6] = (undefined8 ***)0x0;
  ppppuVar13[7] = (undefined8 ***)0x0;
  ppppuVar13[5] = (undefined8 ***)0x0;
  *ppppuVar13 = (undefined8 ***)0x0;
  ppppuVar13[1] = (undefined8 ***)0x0;
  ppppuVar13[2] = ppppuVar19;
  *ppppuVar22 = ppppuVar13;
  if ((undefined8 ****)*pppuStack_188 != (undefined8 ****)0x0) {
    pppuStack_188 = (undefined8 ***)*pppuStack_188;
  }
  func_0x000107c27be4(pppuStack_180,ppppuVar13);
  lStack_178 = lStack_178 + 1;
  ppppuVar19 = ppppuVar13;
LAB_10b1147c8:
  pppuVar24 = ppppuVar19[6];
  bVar8 = ppppuVar19[7] <= pppuVar24;
  if (bVar8) {
    pppuVar20 = ppppuVar19[5];
    lVar15 = (long)pppuVar24 - (long)pppuVar20;
    if ((lVar15 >> 3) + 1U >> 0x3d != 0) goto LAB_10b114a24;
    func_0x00010b133e4c((long)ppppuVar19[7] - (long)pppuVar20);
    uVar18 = extraout_x9;
    if (bVar8) {
      uVar18 = extraout_x8_01;
    }
    if (uVar18 == 0) {
      lVar11 = 0;
    }
    else {
      if (uVar18 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10b114a30;
      }
      lVar11 = uVar18 << 3;
      __Znwm();
    }
    puVar16 = (undefined8 *)(lVar11 + lVar15);
    pppuVar23 = (undefined8 ***)(puVar16 + 1);
    *puVar16 = ppuVar25;
    _memcpy(puVar16 + -(lVar15 >> 3),pppuVar20,lVar15);
    ppppuVar19[5] = (undefined8 ***)(puVar16 + -(lVar15 >> 3));
    ppppuVar19[6] = pppuVar23;
    ppppuVar19[7] = (undefined8 ***)(lVar11 + uVar18 * 8);
    if (pppuVar20 != (undefined8 ***)0x0) {
      func_0x00010b134bcc();
    }
  }
  else {
    pppuVar23 = pppuVar24 + 1;
    *pppuVar24 = ppuVar25;
  }
  ppppuVar19[6] = pppuVar23;
LAB_10b114704:
  ppuVar25 = ppuVar25 + 4;
  goto LAB_10b1145e8;
}



/* Entry: 10b11452c; end: 10b114aff;  */

void FUN_10b11452c(long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  code *pcVar3;
  code **ppcVar4;
  undefined8 **ppuVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  code **ppcVar12;
  undefined8 ****ppppuVar13;
  undefined8 extraout_x8;
  long lVar14;
  undefined8 *puVar15;
  undefined8 ****ppppuVar16;
  ulong extraout_x8_00;
  ulong uVar17;
  ulong extraout_x9;
  int extraout_w10;
  long unaff_x19;
  undefined8 ****ppppuVar18;
  undefined8 ***pppuVar19;
  code **ppcVar20;
  undefined8 ****ppppuVar21;
  undefined8 ***pppuVar22;
  undefined8 ***pppuVar23;
  undefined8 **ppuVar24;
  undefined8 **ppuVar25;
  ulong uVar26;
  byte bVar27;
  uint6 uVar28;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  undefined8 uVar29;
  byte bVar35;
  code *pcStack_178;
  code *pcStack_170;
  code *pcStack_168;
  code **ppcStack_160;
  code **ppcStack_158;
  undefined8 auStack_150 [2];
  code *pcStack_140;
  code **ppcStack_138;
  code **ppcStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  long lStack_118;
  undefined8 **ppuStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  undefined **ppuStack_d8;
  code **ppcStack_d0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  
  func_0x00010b133e10();
  uStack_90 = extraout_x8;
  FUN_10b127af8(&pcStack_f0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  ppuStack_110 = (undefined8 **)&UNK_10e52b660;
  lStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  ppuVar24 = (undefined8 **)*param_2;
  ppuVar25 = (undefined8 **)param_2[1];
  lVar14 = (long)ppuVar25 - (long)ppuVar24;
  if (lVar14 != 0) {
    if (lVar14 == 0xe0) {
      lVar14 = 8;
    }
    else {
      lVar14 = ((lVar14 >> 5) + -1) / 7 + (lVar14 >> 5);
    }
    uVar17 = 0xffffffffffffffff >> (LZCOUNT(lVar14) & 0x3fU);
    if (lVar14 == 0) {
      uVar17 = 1;
    }
    FUN_10b1295a8(&ppuStack_110,uVar17);
    ppuVar24 = (undefined8 **)*param_2;
    ppuVar25 = (undefined8 **)param_2[1];
  }
  pppuStack_120 = (undefined8 ****)0x0;
  lStack_118 = 0;
  pppuStack_128 = &pppuStack_120;
LAB_10b1145e8:
  ppppuVar13 = (undefined8 ****)pppuStack_128;
  if (ppuVar24 != ppuVar25) {
    pcStack_e0 = (code *)CONCAT44(pcStack_e0._4_4_,*(undefined4 *)(ppuVar24 + 3));
    bVar2 = *(byte *)((long)ppuVar24 + 0x17);
    uVar9 = bVar2 == 0;
    ppcStack_d0 = (code **)ppuVar24[1];
    ppuStack_d8 = (undefined **)*ppuVar24;
    if (-1 < (char)bVar2) {
      ppcStack_d0 = (code **)(ulong)bVar2;
      ppuStack_d8 = (undefined **)ppuVar24;
    }
    Hint_Prefetch(ppuStack_110,0,2,0);
    ppcVar12 = &pcStack_e0;
    FUN_10b129684(ppuStack_110);
    uVar6 = uStack_100;
    ppuVar5 = ppuStack_110;
    lVar14 = 0;
    uVar17 = (ulong)ppuStack_110 >> 0xc ^ (ulong)ppcVar12 >> 7;
    bVar2 = (byte)ppcVar12;
    uVar28 = CONCAT15(bVar2,CONCAT14(bVar2,CONCAT13(bVar2,CONCAT12(bVar2,CONCAT11(bVar2,bVar2))))) &
             0x7f7f7f7f7f7f;
    do {
      uVar17 = uVar17 & uVar6;
      uVar29 = *(undefined8 *)((long)ppuVar5 + uVar17);
      cVar30 = (char)((ulong)uVar29 >> 8);
      cVar31 = (char)((ulong)uVar29 >> 0x10);
      cVar32 = (char)((ulong)uVar29 >> 0x18);
      cVar33 = (char)((ulong)uVar29 >> 0x20);
      cVar34 = (char)((ulong)uVar29 >> 0x28);
      bVar27 = (byte)((ulong)uVar29 >> 0x30);
      bVar35 = (byte)((ulong)uVar29 >> 0x38);
      uVar26 = CONCAT17(-(bVar35 == (bVar2 & 0x7f)),
                        CONCAT16(-(bVar27 == (bVar2 & 0x7f)),
                                 CONCAT15(-(cVar34 == (char)(uVar28 >> 0x28)),
                                          CONCAT14(-(cVar33 == (char)(uVar28 >> 0x20)),
                                                   CONCAT13(-(cVar32 == (char)(uVar28 >> 0x18)),
                                                            CONCAT12(-(cVar31 ==
                                                                      (char)(uVar28 >> 0x10)),
                                                                     CONCAT11(-(cVar30 ==
                                                                               (char)(uVar28 >> 8)),
                                                                              -((char)uVar29 ==
                                                                               (char)uVar28))))))))
               & 0x8080808080808080;
      if (uVar26 != 0) {
LAB_10b11465c:
        uVar10 = (uVar26 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar26 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = lStack_108 +
                 (uVar17 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar6) * 0x18;
        FUN_10b1297f4(uVar10,&pcStack_e0);
        if ((uVar10 & 1) == 0) goto code_r0x00010b114684;
        uVar29 = **(undefined8 **)(unaff_x19 + 0x18);
        FUN_10b12983c(&pcStack_e0,*(undefined4 *)(ppuVar24 + 3));
        func_0x00010b129878(auStack_b8,0x7001f);
        func_0x00010b1346c4(&pcStack_178,&pcStack_e0);
        func_0x00010b134528(uVar29,0xab,&pcStack_178);
        func_0x00010b134754();
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
          func_0x00010b135388();
        } while (!(bool)uVar9);
        goto LAB_10b114704;
      }
LAB_10b114690:
      bVar27 = NEON_umaxv(CONCAT17(-(bVar35 == 0x80),
                                   CONCAT16(-(bVar27 == 0x80),
                                            CONCAT15(-(cVar34 == -0x80),
                                                     CONCAT14(-(cVar33 == -0x80),
                                                              CONCAT13(-(cVar32 == -0x80),
                                                                       CONCAT12(-(cVar31 == -0x80),
                                                                                CONCAT11(-(cVar30 ==
                                                                                          -0x80),-((
                                                  char)uVar29 == -0x80)))))))),1);
      if ((bVar27 & 1) != 0) goto LAB_10b11470c;
      lVar14 = lVar14 + 8;
      uVar17 = lVar14 + uVar17;
    } while( true );
  }
  while (uVar9 = ppppuVar13 == &pppuStack_120, !(bool)uVar9) {
    pcStack_140 = (code *)0x0;
    ppcStack_138 = (code **)0x0;
    ppcStack_130 = (code **)0x0;
    ppcVar12 = &pcStack_140;
    FUN_10b0f7b44(ppcVar12,(long)ppppuVar13[6] - (long)ppppuVar13[5] >> 3);
    pppuVar19 = ppppuVar13[6];
    for (pppuVar23 = ppppuVar13[5]; ppcVar20 = ppcStack_138, pppuVar23 != pppuVar19;
        pppuVar23 = pppuVar23 + 1) {
      if (ppcStack_138 < ppcStack_130) {
        func_0x00010b1351d8();
        ppcVar20 = ppcVar20 + 4;
        ppcVar12 = ppcStack_138;
      }
      else {
        ppcVar12 = &pcStack_140;
        FUN_10b0f7e84(ppcVar12,((long)ppcStack_138 - (long)pcStack_140 >> 5) + 1);
        FUN_10b0f7c50(&pcStack_e0,ppcVar12,(long)ppcStack_138 - (long)pcStack_140 >> 5,&ppcStack_130
                     );
        func_0x00010b1351d8(ppcStack_d0);
        ppcStack_d0 = ppcStack_d0 + 4;
        FUN_10b0f7bd4(&pcStack_140,&pcStack_e0);
        ppcVar20 = ppcStack_138;
        ppcVar12 = &pcStack_e0;
        func_0x00010b0f7e1c();
      }
      ppcStack_138 = ppcVar20;
    }
    func_0x00010b135b28();
    func_0x00010b1ff218(auStack_150);
    pcVar7 = pcStack_f0;
    uVar29 = auStack_150[0];
    pcStack_178 = pcStack_f0;
    pcStack_170 = pcStack_e8;
    if (pcStack_e8 != (code *)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    ppcVar4 = ppcStack_130;
    ppcVar20 = ppcStack_138;
    pcVar3 = pcStack_140;
    pcStack_168 = pcStack_140;
    ppcStack_160 = ppcStack_138;
    ppcStack_158 = ppcStack_130;
    pcStack_140 = (code *)0x0;
    ppcStack_138 = (code **)0x0;
    ppcStack_130 = (code **)0x0;
    pcStack_e0 = FUN_10b1298e8;
    ppuStack_d8 = &PTR_FUN_110cbcc98;
    func_0x00010b135678();
    *ppcVar12 = pcVar7;
    ppcVar12[1] = pcStack_170;
    pcStack_178 = (code *)0x0;
    pcStack_170 = (code *)0x0;
    ppcVar12[2] = pcVar3;
    ppcVar12[3] = (code *)ppcVar20;
    ppcVar12[4] = (code *)ppcVar4;
    ppcStack_160 = (code **)0x0;
    ppcStack_158 = (code **)0x0;
    pcStack_168 = (code *)0x0;
    ppcStack_d0 = ppcVar12;
    FUN_10b20a5ac(uVar29,&pcStack_e0);
    func_0x00010b135274();
    FUN_10b114b3c(&pcStack_178);
    func_0x00010b1298c4(auStack_150);
    func_0x00010b0f79e0(&pcStack_140);
    func_0x000107c27be0();
  }
  func_0x00010b1296c8(pppuStack_120);
  FUN_10b12103c(&ppuStack_110);
  func_0x00010b12592c(&pcStack_f0);
  func_0x00010b133dfc(uStack_90);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_10b114a24:
  FUN_10b121030();
LAB_10b114a30:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10b114a34);
  (*pcVar7)();
code_r0x00010b114684:
  uVar26 = uVar26 - 1 & uVar26;
  if (uVar26 == 0) goto LAB_10b114690;
  goto LAB_10b11465c;
LAB_10b11470c:
  ppppuVar13 = (undefined8 ****)&ppuStack_110;
  func_0x00010b129708(ppppuVar13,ppcVar12);
  puVar15 = (undefined8 *)(lStack_108 + (long)ppppuVar13 * 0x18);
  puVar15[2] = ppcStack_d0;
  puVar15[1] = ppuStack_d8;
  *puVar15 = pcStack_e0;
  iVar1 = *(int *)(ppuVar24 + 3);
  ppppuVar16 = (undefined8 ****)pppuStack_120;
  ppppuVar18 = &pppuStack_120;
  while (ppppuVar21 = ppppuVar18, ppppuVar16 != (undefined8 ****)0x0) {
    while (ppppuVar18 = ppppuVar16, *(int *)(ppppuVar18 + 4) <= iVar1) {
      if (iVar1 <= *(int *)(ppppuVar18 + 4)) goto LAB_10b1147c8;
      ppppuVar16 = (undefined8 ****)ppppuVar18[1];
      if ((undefined8 ****)ppppuVar18[1] == (undefined8 ****)0x0) {
        ppppuVar21 = ppppuVar18 + 1;
        goto LAB_10b114780;
      }
    }
    ppppuVar16 = (undefined8 ****)*ppppuVar18;
  }
LAB_10b114780:
  func_0x00010b134ae0();
  *(int *)(ppppuVar13 + 4) = iVar1;
  ppppuVar13[6] = (undefined8 ***)0x0;
  ppppuVar13[7] = (undefined8 ***)0x0;
  ppppuVar13[5] = (undefined8 ***)0x0;
  *ppppuVar13 = (undefined8 ***)0x0;
  ppppuVar13[1] = (undefined8 ***)0x0;
  ppppuVar13[2] = ppppuVar18;
  *ppppuVar21 = ppppuVar13;
  if ((undefined8 ****)*pppuStack_128 != (undefined8 ****)0x0) {
    pppuStack_128 = (undefined8 ***)*pppuStack_128;
  }
  func_0x000107c27be4(pppuStack_120,ppppuVar13);
  lStack_118 = lStack_118 + 1;
  ppppuVar18 = ppppuVar13;
LAB_10b1147c8:
  pppuVar23 = ppppuVar18[6];
  bVar8 = ppppuVar18[7] <= pppuVar23;
  if (bVar8) {
    pppuVar19 = ppppuVar18[5];
    lVar14 = (long)pppuVar23 - (long)pppuVar19;
    if ((lVar14 >> 3) + 1U >> 0x3d != 0) goto LAB_10b114a24;
    func_0x00010b133e4c((long)ppppuVar18[7] - (long)pppuVar19);
    uVar17 = extraout_x9;
    if (bVar8) {
      uVar17 = extraout_x8_00;
    }
    if (uVar17 == 0) {
      lVar11 = 0;
    }
    else {
      if (uVar17 >> 0x3d != 0) {
        func_0x000104bd35f4();
        goto LAB_10b114a30;
      }
      lVar11 = uVar17 << 3;
      __Znwm();
    }
    puVar15 = (undefined8 *)(lVar11 + lVar14);
    pppuVar22 = (undefined8 ***)(puVar15 + 1);
    *puVar15 = ppuVar24;
    _memcpy(puVar15 + -(lVar14 >> 3),pppuVar19,lVar14);
    ppppuVar18[5] = (undefined8 ***)(puVar15 + -(lVar14 >> 3));
    ppppuVar18[6] = pppuVar22;
    ppppuVar18[7] = (undefined8 ***)(lVar11 + uVar17 * 8);
    if (pppuVar19 != (undefined8 ***)0x0) {
      func_0x00010b134bcc();
    }
  }
  else {
    pppuVar22 = pppuVar23 + 1;
    *pppuVar23 = ppuVar24;
  }
  ppppuVar18[6] = pppuVar22;
LAB_10b114704:
  ppuVar24 = ppuVar24 + 4;
  goto LAB_10b1145e8;
}



/* Entry: 10b114b00; end: 10b114b3b;  */

void FUN_10b114b00(void)

{
  undefined8 *unaff_x20;
  
  func_0x00010b134290();
  func_0x00010b134ea0(*(undefined8 *)(*(long *)*unaff_x20 + 8));
  func_0x00010b134e98();
  return;
}



/* Entry: 10b114b3c; end: 10b114b97;  */

long FUN_10b114b3c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b134958();
  func_0x00010b0f79e0();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b114b98; end: 10b114ba7;  */

void FUN_10b114b98(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b135904();
    }
    func_0x00010b1210c4();
    *(ulong *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 10b114ba8; end: 10b1151e3;  */

undefined1 *
FUN_10b114ba8(undefined1 *param_1,long param_2,long param_3,undefined1 *param_4,ulong param_5)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  long unaff_x19;
  bool bVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_438 [24];
  undefined1 auStack_420 [384];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [40];
  undefined1 auStack_260 [40];
  undefined1 auStack_238 [40];
  undefined1 auStack_210 [16];
  undefined1 uStack_200;
  long lStack_10;
  
  func_0x00010b134cf8();
  puVar8 = param_4;
  func_0x00010b133e10();
  lStack_10 = extraout_x8;
  if (((puVar8[0x58] & 1) == 0) && ((param_4[0x88] & 1) == 0)) {
    func_0x00010b134984();
    func_0x00010b133e8c();
    if (extraout_x8_00 == lStack_10) {
      puVar8 = (undefined1 *)(unaff_x19 + 0x1c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__bzero_11034bf90)(puVar8,0xb1);
      return puVar8;
    }
    goto LAB_10b1150b8;
  }
  uVar2 = *(undefined4 *)(param_3 + 0x40);
  uVar3 = *(undefined4 *)(param_3 + 0x78);
  puVar8 = param_4;
  FUN_10b1c4c0c();
  if (((ulong)puVar8 & 1) == 0) {
    if ((param_4[0x88] == '\x01') &&
       (in_ZR = *(int *)(param_4 + 100) == 2 && *(int *)(param_3 + 0x1c) == 1, (bool)in_ZR)) {
      uVar14 = **(undefined8 **)(param_2 + 0x18);
      func_0x00010b134ee4();
      func_0x00010b134ed8();
      func_0x00010b134774();
      func_0x00010b1346c4(auStack_2a0,auStack_288);
      func_0x00010b134210(uVar14);
      func_0x00010b134f24();
      do {
        func_0x00010b134ec4();
        func_0x00010b13517c();
      } while (!(bool)in_ZR);
      goto LAB_10b114c40;
    }
    func_0x00010b136310();
    lVar13 = param_2;
    func_0x00010b135630(param_2,param_4);
    bVar12 = false;
    uVar7 = (uint)lVar13;
    in_ZR = uVar7 == 4;
    if ((uVar7 < 5) && (in_ZR = (1 << (ulong)(uVar7 & 0x1f) & 0x1aU) == 0, !(bool)in_ZR)) {
      puVar8 = param_4;
      FUN_10b1c41c0();
      puVar9 = puVar8;
      FUN_10b11f8cc();
      bVar4 = *(byte *)(param_3 + 0x120);
      if (bVar4 == 1) {
        puVar15 = (undefined1 *)(param_3 + 0x80);
        FUN_10b11f8cc();
        puVar10 = puVar15;
      }
      else {
        puVar15 = (undefined1 *)0x0;
        puVar10 = puVar9;
      }
      in_ZR = param_4[0x58] == '\x01' && *(long *)(param_4 + 0x48) == 0;
      if (param_4[0x58] != '\x01' || 0 < *(long *)(param_4 + 0x48)) goto LAB_10b114e10;
      in_ZR = (uint)puVar9 == (uint)puVar15;
      if ((bool)in_ZR) {
        if (puVar8 == (undefined1 *)0x0) {
LAB_10b115040:
          in_ZR = ((uint)(uVar7 == 4) & (uint)puVar15) == 1;
          if (((bool)in_ZR) &&
             (func_0x00010b1349d4(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10)),
             (int)puVar10 != 0)) {
            if ((*(uint *)(param_3 + 0x90) >> 2 & 1) != 0) {
              in_ZR = *(undefined ***)(puVar8 + 0x60) == (undefined **)0x0;
              ppuVar1 = &PTR_PTR_113405540;
              if (!(bool)in_ZR) {
                ppuVar1 = *(undefined ***)(puVar8 + 0x60);
              }
              uVar11 = (ulong)ppuVar1[2] & 0xfffffffffffffffc;
              func_0x000107c278d0(uVar11,*(ulong *)(*(long *)(param_3 + 0xe0) + 0x10) &
                                         0xfffffffffffffffc);
              goto joined_r0x00010b1150b0;
            }
            if (((*(uint *)(param_3 + 0x90) >> 1 & 1) != 0) &&
               (func_0x00010b135d5c(), ((ulong)puVar10 & 1) != 0)) goto LAB_10b11502c;
          }
LAB_10b114e10:
          if (puVar8 == (undefined1 *)0x0) goto LAB_10b114c40;
        }
        else {
          lVar13 = (long)*(char *)((*(ulong *)(puVar8 + 0x30) & 0xfffffffffffffffc) + 0x17);
          if (lVar13 < 0) {
            lVar13 = *(long *)((*(ulong *)(puVar8 + 0x30) & 0xfffffffffffffffc) + 8);
          }
          if (lVar13 == 0) {
            lVar13 = (long)*(char *)((*(ulong *)(puVar8 + 0x38) & 0xfffffffffffffffc) + 0x17);
            if (lVar13 < 0) {
              lVar13 = *(long *)((*(ulong *)(puVar8 + 0x38) & 0xfffffffffffffffc) + 8);
            }
            in_ZR = lVar13 == 0;
            bVar12 = !(bool)in_ZR;
            if ((bVar4 & 1) != 0) goto LAB_10b114f64;
            if (lVar13 != 0) goto LAB_10b114fd4;
            goto LAB_10b115040;
          }
          if ((bVar4 & 1) != 0) {
            bVar12 = true;
LAB_10b114f64:
            uVar11 = *(ulong *)(param_3 + 0xb0) & 0xfffffffffffffffc;
            lVar13 = (long)*(char *)(uVar11 + 0x17);
            if (lVar13 < 0) {
              lVar13 = *(long *)(uVar11 + 8);
            }
            if (lVar13 == 0) {
              uVar11 = *(ulong *)(param_3 + 0xb8) & 0xfffffffffffffffc;
              lVar13 = (long)*(char *)(uVar11 + 0x17);
              if (lVar13 < 0) {
                lVar13 = *(long *)(uVar11 + 8);
              }
              bVar6 = lVar13 != 0;
            }
            else {
              bVar6 = true;
            }
            in_ZR = (bVar12 & bVar6) == 1;
            if ((bool)in_ZR) {
              func_0x00010b135d70(*(undefined8 *)(puVar8 + 0x38));
              if ((((ulong)puVar10 & 1) == 0) ||
                 (func_0x00010b135d70(*(undefined8 *)(puVar8 + 0x30)), ((ulong)puVar10 & 1) == 0))
              goto LAB_10b114fd4;
            }
            else {
              in_ZR = 0;
              if (bVar12 != bVar6) goto LAB_10b114fd4;
            }
            goto LAB_10b115040;
          }
LAB_10b114fd4:
          uVar11 = **(ulong **)(param_2 + 0x18);
          func_0x00010b134ee4();
          func_0x00010b134ed8();
          func_0x00010b134774();
          func_0x00010b1346c4(auStack_2a0,auStack_288);
          func_0x00010b134210();
          func_0x00010b134f24();
          do {
            func_0x00010b134ec4();
            func_0x00010b13517c();
          } while (!(bool)in_ZR);
          func_0x00010b135d5c();
joined_r0x00010b1150b0:
          if ((uVar11 & 1) != 0) goto LAB_10b11502c;
        }
        puVar8 = param_4;
        FUN_10b1c4a58();
        in_ZR = (int)puVar8 == 0;
        goto LAB_10b114c40;
      }
      uVar14 = **(undefined8 **)(param_2 + 0x18);
      func_0x00010b134ee4();
      func_0x00010b134ed8();
      func_0x00010b134780();
      func_0x00010b123d80(auStack_238,&DAT_10f398c03,8,puVar15);
      func_0x00010b135dc0(auStack_210,&UNK_10f72fa89);
      func_0x00010b134cb0(auStack_2a0,auStack_288);
      func_0x00010b134210(uVar14);
      func_0x00010b134f24();
      do {
        func_0x00010b134ec4();
        func_0x00010b13517c();
      } while (!(bool)in_ZR);
      if (((ulong)puVar15 & 1) != 0) goto LAB_10b114e10;
LAB_10b11502c:
      bVar12 = false;
    }
  }
  else {
LAB_10b114c40:
    bVar12 = true;
  }
  func_0x00010b135664();
  func_0x000107c278b8(auStack_2a0);
  if (((param_5 & 1) == 0) && (bVar12)) {
    func_0x00010b134984();
    _bzero(unaff_x19 + 0x1c8,0xb0);
    *(undefined1 *)(unaff_x19 + 0x278) = 1;
  }
  else {
    uVar5 = 0;
    if (bVar12) {
      func_0x00010b1213e8(auStack_420,param_3);
      func_0x00010b134cec(auStack_288);
      FUN_10b1f6b3c();
      func_0x00010b135594();
      FUN_10b1151e4(param_4,auStack_288);
      func_0x00010b121af0(auStack_288);
      uVar5 = uStack_200;
    }
    func_0x00010b1341a0(auStack_288);
    FUN_10b12983c(auStack_260,uVar2);
    func_0x00010b12aca4(auStack_238,uVar3);
    func_0x00010b1349dc(auStack_210);
    func_0x00010b134cb0(auStack_438,auStack_288);
    func_0x00010b1363cc();
    func_0x00010b134528();
    func_0x00010b134754();
    lVar13 = 0x88;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_288 + lVar13);
      lVar13 = lVar13 + -0x28;
      in_ZR = lVar13 == -0x18;
    } while (!(bool)in_ZR);
    func_0x00010b134b9c();
    FUN_10b121c1c();
    *(undefined1 *)(unaff_x19 + 0x278) = uVar5;
  }
  param_1 = auStack_2a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b133dfc(lStack_10);
  if ((bool)in_ZR) {
    return param_1;
  }
LAB_10b1150b8:
  uVar5 = 0;
  ___stack_chk_fail();
  func_0x00010b134f24();
  func_0x00010b134a34(auStack_288);
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b134594();
  } while (!(bool)uVar5);
  func_0x00010b1343d0();
  func_0x00010b13448c();
  func_0x000107c27b9c();
  func_0x00010b1362b4();
  FUN_10b1215e4();
  uVar16 = *(undefined8 *)(param_1 + 0x81);
  uVar14 = *(undefined8 *)(param_1 + 0x79);
  uVar19 = *(undefined8 *)(param_1 + 0x60);
  uVar18 = *(undefined8 *)(param_1 + 0x78);
  uVar17 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_4 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_4 + 0x60) = uVar19;
  *(undefined8 *)(param_4 + 0x78) = uVar18;
  *(undefined8 *)(param_4 + 0x70) = uVar17;
  *(undefined8 *)(param_4 + 0x81) = uVar16;
  *(undefined8 *)(param_4 + 0x79) = uVar14;
  FUN_10b121694(param_4 + 0x90,param_1 + 0x90);
  FUN_10b121704(param_4 + 0x138,param_1 + 0x138);
  FUN_10b121750(param_4 + 0x180,param_1 + 0x180);
  uVar5 = param_1[0x1c2];
  *(undefined2 *)(param_4 + 0x1c0) = *(undefined2 *)(param_1 + 0x1c0);
  param_4[0x1c2] = uVar5;
  FUN_10b12157c(param_4 + 0x1c8,param_1 + 0x1c8);
  func_0x00010b1215a0(param_4 + 0x1d8,param_1 + 0x1d8);
  return param_4;
}



/* Entry: 10b1151e4; end: 10b115267;  */

void FUN_10b1151e4(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00010b13448c();
  func_0x000107c27b9c();
  func_0x00010b1362b4();
  FUN_10b1215e4();
  uVar3 = *(undefined8 *)(unaff_x19 + 0x81);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x79);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x20 + 0x68) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x78) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x70) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x81) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x79) = uVar2;
  FUN_10b121694(unaff_x20 + 0x90,unaff_x19 + 0x90);
  FUN_10b121704(unaff_x20 + 0x138,unaff_x19 + 0x138);
  FUN_10b121750(unaff_x20 + 0x180,unaff_x19 + 0x180);
  uVar1 = *(undefined1 *)(unaff_x19 + 0x1c2);
  *(undefined2 *)(unaff_x20 + 0x1c0) = *(undefined2 *)(unaff_x19 + 0x1c0);
  *(undefined1 *)(unaff_x20 + 0x1c2) = uVar1;
  FUN_10b12157c(unaff_x20 + 0x1c8,unaff_x19 + 0x1c8);
  func_0x00010b1215a0(unaff_x20 + 0x1d8,unaff_x19 + 0x1d8);
  return;
}



/* Entry: 10b115268; end: 10b11723b;  */

void FUN_10b115268(undefined8 *param_1,long *param_2,ulong *param_3,undefined4 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,uint param_8)

{
  byte bVar1;
  undefined **ppuVar2;
  int *piVar3;
  undefined4 *puVar4;
  ulong *puVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  long lVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  ulong **ppuVar13;
  ulong *puVar14;
  long **pplVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong *puVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 uVar22;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  undefined1 *extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  undefined4 extraout_w9;
  undefined4 extraout_w9_00;
  byte *extraout_x9;
  byte *pbVar23;
  long extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  long extraout_x11;
  int extraout_w12;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  uint uVar29;
  undefined *puVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  ulong *puVar34;
  undefined8 *puVar35;
  long lVar36;
  char *in_stack_00000070;
  byte in_stack_00000078;
  undefined8 in_stack_ffffffffffffe450;
  undefined8 uStack_1b80;
  uint uStack_1b68;
  undefined8 uStack_1b38;
  undefined8 uStack_1b30;
  undefined8 uStack_1b28;
  undefined1 auStack_1b20 [104];
  undefined1 auStack_1ab8 [160];
  undefined1 uStack_1a18;
  undefined8 uStack_1a10;
  undefined8 uStack_1a08;
  undefined8 uStack_1a00;
  byte abStack_19f8 [8];
  undefined1 auStack_19f0 [24];
  undefined1 auStack_19d8 [24];
  undefined8 uStack_19c0;
  undefined4 uStack_19b8;
  long lStack_19b0;
  ulong uStack_19a8;
  ulong uStack_19a0;
  long lStack_1998;
  long lStack_1990;
  undefined1 auStack_1988 [24];
  char cStack_1970;
  long lStack_1968;
  ulong auStack_1960 [3];
  undefined1 auStack_1948 [384];
  ulong *puStack_17c8;
  long *plStack_17c0;
  long lStack_17b8;
  undefined8 uStack_17b0;
  ulong uStack_17a8;
  undefined8 uStack_17a0;
  undefined1 uStack_1798;
  undefined1 uStack_1768;
  undefined1 uStack_1760;
  undefined1 uStack_1738;
  undefined1 uStack_1730;
  undefined1 uStack_1690;
  undefined1 uStack_1688;
  undefined1 uStack_1648;
  undefined1 uStack_1640;
  undefined1 uStack_1608;
  undefined2 uStack_1600;
  undefined1 uStack_15fe;
  byte bStack_1548;
  undefined1 auStack_1540 [128];
  undefined1 uStack_14c0;
  undefined4 uStack_14b8;
  undefined1 uStack_14b0;
  undefined1 uStack_14a8;
  long *plStack_14a0;
  long lStack_1498;
  undefined1 auStack_1490 [16];
  int iStack_1480;
  undefined4 uStack_147c;
  undefined *puStack_1478;
  undefined8 uStack_1470;
  ulong uStack_1468;
  undefined8 uStack_1460;
  undefined8 uStack_1458;
  ulong uStack_1450;
  ulong uStack_1448;
  undefined8 uStack_1440;
  undefined1 auStack_1438 [64];
  undefined1 auStack_13f8 [168];
  undefined1 auStack_1350 [64];
  undefined1 uStack_1310;
  undefined1 uStack_1308;
  undefined1 uStack_1304;
  undefined1 uStack_1300;
  undefined1 uStack_12fc;
  ulong *puStack_1200;
  long lStack_11f8;
  long lStack_11f0;
  byte bStack_11e8;
  ulong auStack_11e0 [48];
  long alStack_1060 [5];
  long lStack_1038;
  ulong uStack_1030;
  ulong uStack_1028;
  undefined1 auStack_1020 [8];
  long *plStack_1018;
  long *plStack_1010;
  long *plStack_1008;
  long *plStack_1000;
  long *plStack_ff8;
  ulong uStack_ff0;
  ulong uStack_fe8;
  ulong uStack_fe0;
  ulong uStack_fd8;
  ulong uStack_fd0;
  undefined4 uStack_fc8;
  undefined4 uStack_fc4;
  undefined4 uStack_fc0;
  undefined4 uStack_fbc;
  uint uStack_fb8;
  undefined4 uStack_fb4;
  ulong uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined1 uStack_f10;
  undefined1 auStack_f08 [64];
  undefined1 uStack_ec8;
  uint uStack_ec0;
  undefined1 uStack_ebc;
  uint uStack_eb8;
  undefined1 uStack_eb4;
  byte bStack_d10;
  uint auStack_9b8 [2];
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined1 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined4 uStack_980;
  undefined8 uStack_940;
  byte bStack_930;
  byte bStack_918;
  byte abStack_7e0 [296];
  undefined **ppuStack_6b8;
  int iStack_69c;
  undefined1 auStack_688 [87];
  undefined1 uStack_631;
  byte bStack_468;
  char cStack_3c8;
  byte bStack_348;
  long *plStack_340;
  ulong *puStack_338;
  ulong **ppuStack_330;
  undefined **ppuStack_328;
  long lStack_320;
  undefined1 auStack_318 [8];
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  byte bStack_2f0;
  undefined1 uStack_2e8;
  undefined1 uStack_2e0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b0;
  undefined1 uStack_210;
  undefined1 uStack_208;
  undefined1 uStack_1c8;
  undefined1 uStack_1c0;
  undefined1 uStack_188;
  undefined2 uStack_180;
  undefined1 uStack_17e;
  undefined8 uStack_18;
  
  func_0x00010b134cf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar27 = param_3;
  func_0x00010b133e8c();
  uStack_18 = extraout_x8;
  FUN_10b1c41c0();
  puVar14 = param_3;
  puStack_17c8 = puVar27;
  FUN_10b1c4d48();
  if (((ulong)puVar14 & 1) == 0) {
    func_0x00010b135264(&uStack_1030);
    lStack_320 = 0;
    ppuStack_328 = (undefined **)0x0;
    ppuStack_330 = (ulong **)0x0;
    puStack_338 = (ulong *)0x0;
    plStack_340 = (long *)0x0;
    pplVar15 = (long **)(param_3 + 0xc);
    if ((char)param_3[0x11] == '\0') {
      pplVar15 = &plStack_340;
    }
    plStack_1010 = pplVar15[1];
    plStack_1018 = *pplVar15;
    plStack_1000 = pplVar15[3];
    plStack_1008 = pplVar15[2];
    plStack_ff8 = pplVar15[4];
    auStack_9b8[0] = 0;
    func_0x00010b134a10();
    uStack_9b0 = 0;
    uStack_9a8 = 0;
    uStack_998 = 0;
    uStack_988 = 0;
    uStack_9a0 = 0;
    uStack_990 = 0;
    uStack_980 = 0;
    uVar22 = (undefined4)param_3[3];
    uVar10 = (char)param_3[0xb] == '\0';
    puVar14 = param_3 + 4;
    if ((bool)uVar10) {
      uVar22 = 0;
      puVar14 = (ulong *)(extraout_x8_00 + 8);
    }
    uStack_fe0 = puVar14[1];
    uStack_fe8 = *puVar14;
    uStack_fd8 = puVar14[2];
    puVar14[1] = 0;
    puVar14[2] = 0;
    *puVar14 = 0;
    puVar14 = param_3 + 7;
    if ((bool)uVar10) {
      puVar14 = (ulong *)(extraout_x8_00 + 0x20);
    }
    uStack_fd0 = *puVar14;
    uStack_fbc = (undefined4)*(undefined8 *)((long)puVar14 + 0x14);
    uStack_fb8 = (uint)((ulong)*(undefined8 *)((long)puVar14 + 0x14) >> 0x20);
    uStack_fc0 = (undefined4)((ulong)*(undefined8 *)((long)puVar14 + 0xc) >> 0x20);
    uStack_fc8 = (undefined4)puVar14[1];
    uStack_fc4 = (undefined4)(puVar14[1] >> 0x20);
    uStack_ff0 = CONCAT44(uStack_ff0._4_4_,uVar22);
    uStack_fb0 = uStack_fb0 & 0xffffffffffffff00;
    uStack_f10 = 0;
    auStack_f08[0] = 0;
    uStack_ec8 = 0;
    uStack_ec0 = uStack_ec0 & 0xffffff00;
    uStack_ebc = 0;
    uStack_eb8 = uStack_eb8 & 0xffffff00;
    uStack_eb4 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    uVar24 = *(undefined8 *)param_2[3];
    func_0x00010b134dbc();
    FUN_10b12983c();
    func_0x00010b134ed8();
    func_0x00010b134774();
    func_0x00010b134544();
    func_0x00010b1346c4();
    func_0x00010b134210(uVar24);
    func_0x00010b134544();
    FUN_10b120998();
    do {
      func_0x00010b134ec4();
      func_0x00010b13517c();
    } while (!(bool)uVar10);
    if (puStack_17c8 != (ulong *)0x0) {
      FUN_10b11fdb8(&uStack_fb0);
    }
    puVar14 = param_3;
    FUN_10b1c4ae8();
    if (puVar14 != (ulong *)0x0) {
      func_0x00010b11fdec(auStack_f08);
    }
    if (param_5 != 0) {
      uStack_ec0 = *(uint *)(param_5 + 8);
      uStack_ebc = 1;
      uStack_eb8 = *(uint *)(param_5 + 0x1c);
      uStack_eb4 = 1;
    }
    lVar25 = param_2[5];
    func_0x00010b1213e8(auStack_1948,&uStack_1030);
    func_0x00010b134a10();
    FUN_10b1f6b3c(lVar25,param_3,auStack_1948,0);
    func_0x00010b1213b8(auStack_1948);
    if ((bStack_930 & 1) == 0) {
      func_0x00010b134544();
      func_0x00010b1346cc();
      ppuVar13 = ppuStack_330;
      FUN_10b129c64(ppuStack_330,param_3);
      *(undefined4 *)(ppuVar13 + 0x61) = 4;
      func_0x00010b134544();
      func_0x000107c2798c();
      func_0x00010b1340e8(param_1);
    }
    else {
      func_0x00010b135c80();
    }
    func_0x00010b134dbc();
    func_0x00010b121af0();
    func_0x00010b1213b8(&uStack_1030);
    if ((bStack_930 & 1) == 0) goto LAB_10b116990;
  }
  puVar14 = auStack_1960;
  func_0x00010b135264();
  auStack_9b8[0] = auStack_9b8[0] & 0xffffff00;
  bStack_348 = 0;
  if ((puStack_17c8 == (ulong *)0x0) ||
     (puVar14 = param_3, FUN_10b1c4a58(), ((ulong)puVar14 & 1) != 0)) {
    uVar29 = 0;
  }
  else {
    uVar29 = (uint)((int)puStack_17c8[4] == 0);
  }
  plVar16 = param_2 + 3;
  func_0x00010b1349d4(*(undefined8 *)(*plVar16 + 0x10));
  uVar32 = (uint)puVar14 ^ 1;
  puVar27 = puVar14;
  if (((param_8 & 1) == 0) && ((uVar32 & 1) == 0)) {
    func_0x00010b136144();
    func_0x00010b1349d4();
    puVar27 = (ulong *)(ulong)((uint)puVar14 ^ 1);
  }
  if (uVar29 == 0) {
    uVar33 = 0;
LAB_10b1155c0:
    uVar32 = 1;
  }
  else {
    uVar28 = param_3[0x11];
    if (((char)uVar28 == '\x01') &&
       (*(int *)((long)param_3 + 100) != 2 || ((ulong)puVar27 & 1) != 0)) {
      func_0x00010b135c88();
      puVar34 = puVar14;
    }
    else {
      puVar34 = (ulong *)0x0;
    }
    uVar33 = (uint)puVar34;
    if (((uVar32 | (uint)puVar27) & 1) != 0) goto LAB_10b1155c0;
    uVar32 = 1;
    if (((char)uVar28 != '\0') && (*(int *)((long)param_3 + 100) == 2)) {
      func_0x00010b135c88();
      uVar32 = (uint)puVar14 ^ 1;
    }
  }
  pbVar23 = abStack_19f8;
  lStack_1968 = 0;
  auStack_1988[0] = 0;
  cStack_1970 = '\0';
  lVar25 = param_2[0x18];
  lStack_1990 = param_2[0x19];
  lStack_1998 = lVar25;
  if (lStack_1990 != 0) {
    do {
      func_0x00010b133f68();
      lVar25 = extraout_x8_01;
      pbVar23 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  puVar27 = puStack_17c8;
  uVar24 = *(undefined8 *)*plVar16;
  abStack_19f8[0] = 0;
  pbVar23[0x10] = 0;
  pbVar23[0x11] = 0;
  pbVar23[0x12] = 0;
  pbVar23[0x13] = 0;
  pbVar23[0x14] = 0;
  pbVar23[0x15] = 0;
  pbVar23[0x16] = 0;
  pbVar23[0x17] = 0;
  pbVar23[8] = 0;
  pbVar23[9] = 0;
  pbVar23[10] = 0;
  pbVar23[0xb] = 0;
  pbVar23[0xc] = 0;
  pbVar23[0xd] = 0;
  pbVar23[0xe] = 0;
  pbVar23[0xf] = 0;
  pbVar23[0x20] = 0;
  pbVar23[0x21] = 0;
  pbVar23[0x22] = 0;
  pbVar23[0x23] = 0;
  pbVar23[0x24] = 0;
  pbVar23[0x25] = 0;
  pbVar23[0x26] = 0;
  pbVar23[0x27] = 0;
  pbVar23[0x18] = 0;
  pbVar23[0x19] = 0;
  pbVar23[0x1a] = 0;
  pbVar23[0x1b] = 0;
  pbVar23[0x1c] = 0;
  pbVar23[0x1d] = 0;
  pbVar23[0x1e] = 0;
  pbVar23[0x1f] = 0;
  pbVar23[0x30] = 0;
  pbVar23[0x31] = 0;
  pbVar23[0x32] = 0;
  pbVar23[0x33] = 0;
  pbVar23[0x34] = 0;
  pbVar23[0x35] = 0;
  pbVar23[0x36] = 0;
  pbVar23[0x37] = 0;
  pbVar23[0x28] = 0;
  pbVar23[0x29] = 0;
  pbVar23[0x2a] = 0;
  pbVar23[0x2b] = 0;
  pbVar23[0x2c] = 0;
  pbVar23[0x2d] = 0;
  pbVar23[0x2e] = 0;
  pbVar23[0x2f] = 0;
  uStack_19c0 = (ulong)uStack_19c0._4_4_ << 0x20;
  pbVar23[0x3c] = 5;
  pbVar23[0x3d] = 0;
  pbVar23[0x3e] = 0;
  pbVar23[0x3f] = 0;
  pbVar23[0x40] = 0;
  pbVar23[0x41] = 0;
  pbVar23[0x42] = 0;
  pbVar23[0x43] = 0;
  uStack_19a0 = 0;
  bVar1 = 0;
  if (param_3[0xe] != 0) {
    bVar1 = (byte)param_3[0x11];
  }
  lStack_19b0 = 0;
  uStack_19a8 = 0;
  if (puVar27 == (ulong *)0x0) {
    bVar11 = false;
  }
  else {
    bVar11 = *(int *)((long)puVar27 + 0x8c) == 2;
  }
  uVar10 = param_5 == 0 || lVar25 == 0;
  uVar6 = param_8;
  if (param_5 == 0 || lVar25 == 0) {
    uVar6 = 1;
  }
  if (((((uVar29 == 0 && (uVar6 & 1) == 0) && (puVar27 != (ulong *)0x0)) &&
       (uVar10 = (char)param_3[0xb] == '\x01', (bool)uVar10)) &&
      ((puVar14 = param_3, FUN_10b1c4a58(), ((ulong)puVar14 & 1) == 0 &&
       (((byte)puVar27[2] >> 2 & 1) != 0)))) && ((bVar1 & bVar11) != 0)) {
    FUN_10b1ad9fc(&uStack_1030,*(undefined4 *)(param_5 + 0x1c),(int)param_3[3]);
    uVar10 = (char)uStack_fe0 == '\x01';
    if (((bool)uVar10) &&
       ((((ulong)plStack_ff8 & 0x100000000) != 0 || (((ulong)plStack_ff8 & 0x10000000000) != 0)))) {
      ppuVar2 = &PTR_PTR_11336ce98;
      if ((undefined **)puVar27[0xe] != (undefined **)0x0) {
        ppuVar2 = (undefined **)puVar27[0xe];
      }
      iVar12 = *(int *)((long)ppuVar2 + 0x74);
      uVar28 = param_3[0xd];
      if (param_3[0xf] != 0) {
        uVar28 = param_3[0xf];
      }
      uVar10 = iVar12 == 1;
      if (0 < iVar12) {
        uVar26 = param_3[0xe];
        uVar31 = lStack_1998 + 0x30;
        FUN_10b1ae0a4(uVar31,param_3);
        if ((uVar31 & 1) == 0) {
          abStack_19f8[0] = 1;
          func_0x00010b134544();
          func_0x00010b135264();
          func_0x00010b134aa0();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (extraout_x8_02 + 0x18,param_3 + 4);
          uStack_310 = *(undefined4 *)(param_5 + 0x1c);
          uStack_30c = (undefined4)param_3[3];
          uStack_308 = (undefined4)param_3[10];
          func_0x00010b134a94(auStack_19f0);
          func_0x000107c27b9c();
          func_0x00010b134aa0(auStack_19d8);
          func_0x000107c27b9c();
          uStack_19c0 = CONCAT44(uStack_30c,uStack_310);
          uStack_19b8 = uStack_308;
          func_0x00010b134544();
          FUN_10b1252ac();
          lStack_19b0 = (long)iVar12;
          uStack_19a8 = uVar26;
          uStack_19a0 = uVar28;
          func_0x00010b134544();
          FUN_10b12983c();
          func_0x00010b12aca4(auStack_318,(int)param_3[10]);
          func_0x00010b134a94(&plStack_17c0);
          func_0x00010b1346c4();
          func_0x00010b134528(uVar24,0xdd,&plStack_17c0);
          FUN_10b120998(&plStack_17c0);
          do {
            func_0x00010b135454();
            func_0x00010b135170();
          } while (!(bool)uVar10);
        }
      }
    }
    puVar14 = &uStack_1030;
    FUN_10b1252cc();
  }
  bVar1 = abStack_19f8[0];
  if (((uVar33 | param_8 & uVar29 ^ 0xffffffff) & 1) == 0) {
    func_0x00010b1348b4((char)param_3[0xb]);
    iVar12 = (int)puVar14;
    uVar22 = extraout_w9;
    if ((bool)uVar10) {
      uVar22 = extraout_w8;
    }
    puStack_1478 = (undefined *)CONCAT44(puStack_1478._4_4_,uVar22);
    ppuStack_330 = &puStack_17c8;
    ppuStack_328 = &puStack_1478;
    plStack_340 = param_2;
    puStack_338 = param_3;
    func_0x00010b1349d4(*(undefined8 *)(param_2[3] + 0x10));
    if (iVar12 == 0) {
LAB_10b115ac0:
      uVar28 = *(ulong *)(*plVar16 + 0x10);
      FUN_10b11a16c();
      if ((uVar28 & 1) == 0) {
        uVar24 = *(undefined8 *)*plVar16;
        func_0x00010b135df8();
        func_0x00010b134180();
        func_0x00010b135128();
        func_0x00010b134d44(uVar24);
        func_0x00010b134544();
        FUN_10b11fe18();
      }
      else {
        func_0x00010b135c88();
        puVar14 = *(ulong **)*plVar16;
        if ((uVar28 & 1) != 0) {
          FUN_10b20bf78(puVar14,&UNK_10f72fb0d,0x12);
          goto LAB_10b1161f0;
        }
        uVar10 = param_3[0xe] == 0;
        func_0x00010b134180();
        FUN_10b20c318();
        func_0x00010b134544();
        FUN_10b11fe18();
      }
      func_0x00010b1340e8(param_1);
    }
    else {
      func_0x00010b11f99c(&plStack_17c0,param_2,param_3);
      uVar10 = (int)uStack_17b0 == 2;
      if (((bool)uVar10) && (plStack_17c0 != (long *)0x0)) {
        uVar24 = *(undefined8 *)*plVar16;
        func_0x00010b135df8();
        func_0x00010b134180();
        func_0x00010b135128();
        func_0x00010b134d44(uVar24);
        plVar16 = plStack_17c0;
        if (param_5 == 0) {
          uStack_1030 = uStack_1030 & 0xffffffffffffff00;
          uStack_fb8 = uStack_fb8 & 0xffffff00;
        }
        else {
          FUN_10b123790(&uStack_1030,param_5);
        }
        FUN_10b1a1a14(plVar16,&uStack_1030);
        FUN_10b0faf98(&uStack_1030);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[3] = lStack_17b8;
        param_1[2] = plStack_17c0;
        if (lStack_17b8 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_00 != 0);
        }
        param_1[4] = plVar16;
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 0x62) = 0;
      }
      else {
        uVar10 = (int)uStack_17b0 == 1;
        if ((!(bool)uVar10) ||
           ((plStack_17c0 == (long *)0x0 || (func_0x00010b134248(), !(bool)uVar10)))) {
          func_0x00010b134a64();
          goto LAB_10b115ac0;
        }
        uVar24 = *(undefined8 *)*plVar16;
        func_0x00010b135df8();
        func_0x00010b134180();
        func_0x00010b135128();
        func_0x00010b134d44(uVar24);
        param_1[1] = lStack_17b8;
        *param_1 = plStack_17c0;
        if (lStack_17b8 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10 != 0);
        }
        *(undefined1 *)(param_1 + 0x62) = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 5) = 0;
      }
      *(undefined1 *)(param_1 + 99) = 1;
      func_0x00010b134a64();
    }
  }
  else {
    uVar6 = (in_stack_00000078 ^ 1) & (uint)abStack_19f8[0];
    puVar27 = (ulong *)(ulong)uVar6;
    if (((in_stack_00000078 & 1) != 0) || ((uVar29 & (uVar33 ^ 1)) != 0 || (uVar6 & 1) != 0)) {
      if (((uVar32 | uVar6) & 1) == 0) {
        func_0x00010b136150();
        func_0x00010b1348b4((char)param_3[0xb]);
        FUN_10b20bf78();
      }
      if ((*(byte *)(param_2[0x25] + 8) & 1) == 0) {
        (*(code *)param_2[0x24])(param_2 + 0x24);
      }
      func_0x00010b1346b0(param_2[7]);
      (*extraout_x8_03)();
      func_0x00010b135264(auStack_11e0);
      if (((uVar6 & 1) == 0) && (in_stack_00000078 != 0 || uVar29 != 0)) {
        lVar25 = param_2[5];
        uStack_1a08 = 0;
        uStack_1a00 = 0;
        uStack_1a10 = 0;
        func_0x00010b135c00(lVar25,auStack_11e0,(int)param_3[3],param_3 + 4);
        func_0x000107c27914(&uStack_1a10);
        if ((((uint)in_stack_00000078 | (uint)lVar25) & 1) == 0) {
          func_0x00010b1340e8(param_1);
          func_0x00010b1351d0();
          goto LAB_10b116964;
        }
      }
      func_0x00010b136168();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_3);
      lVar25 = param_2[0x41];
      auStack_1ab8[0] = 0;
      uStack_1a18 = 0;
      FUN_10b1252ec(auStack_1b20,param_7);
      FUN_10b1b1ed8(&uStack_1030,param_3,plVar16,(int)lVar25,param_5,0,param_4,auStack_1ab8,
                    auStack_1b20,
                    CONCAT71(CONCAT61((int6)((ulong)in_stack_ffffffffffffe450 >> 0x10),
                                      in_stack_00000078 | bVar1),(char)uVar6) & 0xffffffffffff01ff);
      uVar10 = bStack_348 == 1;
      if ((bool)uVar10) {
        func_0x00010b134dbc();
        FUN_10b1253b4();
      }
      else {
        func_0x00010b134dbc();
        FUN_10b1254a0();
        bStack_348 = 1;
      }
      func_0x00010b125584(&uStack_1030);
      func_0x00010b121ac0(auStack_1b20);
      FUN_10b12130c(auStack_1ab8);
      if (uVar6 == 0) {
LAB_10b11605c:
        plVar17 = param_2 + 0x1a;
        FUN_10b11fd70();
        plVar18 = (long *)*plVar17;
        puStack_338 = (ulong *)plVar17[1];
        plStack_340 = plVar18;
        if (puStack_338 != (ulong *)0x0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_03 != 0);
        }
        if (((plVar18 != (long *)0x0) && ((bStack_348 & 1) != 0)) &&
           ((uVar10 = cStack_3c8 == '\x01', (bool)uVar10 && ((bStack_468 & 1) != 0)))) {
          (**(code **)(*plVar18 + 0x18))(&plStack_17c0);
          plVar17 = plStack_17c0;
          if (plStack_17c0 != (long *)0x0) {
            func_0x00010b206f0c(&uStack_1030,param_6);
            func_0x00010b134a10();
            (**(code **)(*plVar17 + 0x10))(plVar17,&uStack_1030,extraout_x8_06 + 0x3c8);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1030);
          }
          func_0x00010539eed4(&plStack_17c0);
        }
        func_0x00010b134544();
        func_0x00010539e938();
        func_0x00010b1361c4();
        func_0x00010b1350c4(uStack_631);
        if (extraout_x8_07 != 0) {
          uVar24 = *(undefined8 *)*plVar16;
          FUN_10b12983c(&uStack_1030,(int)param_3[3]);
          func_0x00010b12aca4(&plStack_1008,(int)param_3[10]);
          func_0x00010b1349dc(&uStack_fe0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (&uStack_1b38,puVar27 + 0x6e);
          uStack_fb8 = 0xf72fb33;
          uStack_fb4 = 1;
          uStack_fb0 = 0x15;
          uStack_fa0 = uStack_1b30;
          uStack_fa8 = uStack_1b38;
          uStack_f98 = uStack_1b28;
          uStack_1b38 = 0;
          uStack_1b30 = 0;
          uStack_1b28 = 0;
          func_0x00010b134544();
          func_0x00010b134cb0();
          func_0x00010b134528(uVar24,0xa5,&plStack_340);
          func_0x00010b134544();
          FUN_10b120998();
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_fa8);
            func_0x00010b13517c();
          } while (!(bool)uVar10);
          func_0x00010b1352b8();
        }
        puVar27 = puVar27 + 3;
        puVar14 = auStack_1960;
      }
      else {
        func_0x00010b1350c4(uStack_990._7_1_);
        if (((extraout_x8_04 == 0) || ((*(byte *)(extraout_x11 + 0x738) & 1) == 0)) ||
           (*(char *)(extraout_x11 + 0x708) != '\x01')) {
          puVar35 = (undefined8 *)0x0;
LAB_10b115c70:
          uStack_1b80 = 0;
          uVar28 = 0;
          uVar31 = 0;
        }
        else {
          func_0x00010b1361c4();
          uStack_1030 = uStack_1030 & 0xffffffffffffff00;
          plStack_ff8 = (long *)((ulong)plStack_ff8 & 0xffffffffffffff00);
          puVar35 = &uStack_9a0;
          FUN_10b17ee04(puVar35,puVar27 + 0x52,param_2[0x38],&uStack_1030);
          if (in_stack_00000070[0x38] != '\x01' || uStack_940._4_4_ != 2) goto LAB_10b115c70;
          if (*in_stack_00000070 == '\x01') {
            puVar20 = &uStack_9a0;
            FUN_10b17f060(puVar20,puVar27 + 0x52,param_2[0x38],in_stack_00000070,
                          uStack_19c0 & 0xffffffff);
          }
          else {
            puVar20 = &uStack_9a0;
            FUN_10b17ee04(puVar20,puVar27 + 0x52,param_2[0x38]);
          }
          uVar31 = (ulong)puVar20 & 0xffffffffffffff00;
          uVar28 = (ulong)puVar20 & 0xff;
          uStack_1b80 = 1;
        }
        lVar25 = lStack_1998;
        uVar24 = *(undefined8 *)param_2[3];
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (&plStack_17c0,&uStack_9a0);
        func_0x00010b1350c4(uStack_17b0._7_1_);
        if (extraout_x8_05 == 0) {
          uStack_1b68 = 0;
        }
        else {
          pplVar15 = &plStack_17c0;
          func_0x000107c278d0(pplVar15,auStack_19f0);
          uStack_1b68 = (uint)pplVar15 ^ 1;
        }
        func_0x00010b134aa0(uStack_19c0 & 0xffffffff,uStack_19c0._4_4_);
        FUN_10b1ad9fc();
        lVar9 = lStack_19b0;
        iVar12 = 0;
        ppuVar2 = &PTR_PTR_11336ce98;
        if (ppuStack_6b8 != (undefined **)0x0) {
          ppuVar2 = ppuStack_6b8;
        }
        lVar36 = (long)*(int *)((long)ppuVar2 + 0x74);
        if ((lStack_19b0 == lVar36) || ((bStack_2f0 & 1) == 0)) {
LAB_10b115ee4:
          puVar30 = &UNK_10f72ffb9;
          bVar11 = lVar9 != lVar36;
          if (bVar11) {
            puVar30 = &UNK_10f72ffc6;
          }
          uVar10 = bVar11 && iStack_69c == 2;
          if (bVar11 && iStack_69c == 2) {
            uVar10 = bStack_2f0 == 1;
            if ((bool)uVar10) {
              uVar29 = iVar12 - 1;
              uVar10 = uVar29 == 4;
              if (uVar29 < 5) {
                puVar30 = (&PTR_DAT_110cbdc18)[uVar29];
              }
              else {
                puVar30 = &UNK_10f730027;
              }
            }
            else {
              puVar30 = &UNK_10f72ffd6;
            }
          }
          FUN_10b12983c(&uStack_1030,uStack_19c0._4_4_);
          func_0x00010b12aca4(&plStack_1008,uStack_19b8);
          FUN_10b123d58(&uStack_fe0,"reason",6,puVar30);
          func_0x00010b134fbc(&puStack_1478,&uStack_1030);
          func_0x00010b134528(uVar24,0xe0,&puStack_1478);
          FUN_10b120998(&puStack_1478);
          puVar27 = (ulong *)0x60;
          do {
            func_0x00010b135454();
            func_0x00010b135170();
          } while (!(bool)uVar10);
          func_0x00010b1361c4();
          if (uStack_1b68 != 0) {
            uStack_1468 = 0;
            puStack_1478 = (undefined *)0x0;
            uStack_1470 = 0;
            func_0x00010b135c00(param_2[5],&plStack_17c0,uStack_19c0._4_4_,auStack_19d8);
            func_0x000107c27914(&puStack_1478);
            func_0x00010b1340dc(&uStack_1030,param_2[5],param_6);
            func_0x00010b121af0(&uStack_1030);
          }
          puStack_1200 = (ulong *)0x0;
        }
        else {
          plVar17 = &lStack_19b0;
          FUN_10b1add90(plVar17,lVar36,ppuVar2[0xf],puVar35,uVar31 | uVar28,uStack_1b80,&plStack_340
                       );
          iVar12 = (int)((ulong)plVar17 >> 0x20);
          if ((iStack_69c != 2) || (((ulong)plVar17 & 1) == 0)) goto LAB_10b115ee4;
          uVar10 = ((ulong)plVar17 & 0x100) == 0;
          FUN_10b1ae120(lVar25 + 0x30,auStack_19f0,&plStack_17c0,uStack_19c0._4_4_,uStack_19b8,
                        uVar10,lStack_19b0,lVar36);
          uStack_1028 = param_2[6];
          uStack_1030 = param_2[5];
          if (param_2[6] != 0) {
            do {
              func_0x00010b134088();
            } while (extraout_w10_01 != 0);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (auStack_1020,&plStack_17c0);
          plStack_1008 = (long *)CONCAT44(plStack_1008._4_4_,uStack_19c0._4_4_);
          func_0x00010b135fcc(abStack_19f8,&plStack_1000);
          puVar27 = &uStack_1030;
          puVar14 = &uStack_fe8;
          func_0x00010b121ddc(puVar14,param_6);
          func_0x00010b134ad0();
          *puVar14 = (ulong)FUN_10b1255fc;
          puVar14[1] = (ulong)&PTR_FUN_110cbc950;
          puVar34 = puVar14;
          func_0x00010b135fc4();
          uVar31 = uStack_1028;
          uVar28 = uStack_1030;
          puVar34[1] = uStack_1028;
          *puVar34 = uVar28;
          if (uVar31 != 0) {
            do {
              func_0x00010b134088();
            } while (extraout_w10_02 != 0);
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (puVar34 + 2,auStack_1020);
          *(undefined4 *)(puVar34 + 5) = plStack_1008._0_4_;
          puVar34[7] = (ulong)plStack_ff8;
          puVar34[6] = (ulong)plStack_1000;
          puVar34[8] = uStack_ff0;
          plStack_1000 = (long *)0x0;
          plStack_ff8 = (long *)0x0;
          uStack_ff0 = 0;
          func_0x00010b121ddc(puVar34 + 9,&uStack_fe8);
          puVar14[2] = (ulong)puVar34;
          puStack_1200 = puVar14;
          func_0x00010b1255cc(&uStack_1030);
          func_0x00010b1361c4();
        }
        func_0x00010b134544();
        FUN_10b1252cc();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_17c0);
        puVar14 = puStack_1200;
        puStack_1200 = (ulong *)0x0;
        FUN_10b132f94(&lStack_1968,puVar14);
        FUN_10b132f74(&puStack_1200);
        if (lStack_1968 != 0) {
          if (bStack_348 != 0) {
            func_0x0001078bbb08(auStack_1988,puVar27 + 3);
          }
          goto LAB_10b11605c;
        }
        if (bStack_348 != 0) {
          func_0x00010b134dbc();
          func_0x00010b125584();
          bStack_348 = 0;
        }
        puVar27 = auStack_11e0;
        puVar14 = param_3;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(puVar14,puVar27);
      func_0x00010b1351d0();
    }
LAB_10b1161f0:
    bVar1 = bStack_348;
    lStack_1038 = param_5;
    func_0x00010b135464();
    if ((int)uStack_17b0 == 0) {
      func_0x00010b134a64();
      func_0x00010b134a10();
      puVar27 = (ulong *)(extraout_x8_08 + 0x18);
      if (bVar1 == 0) {
        puVar14 = param_3;
        FUN_10b1c41c0();
        puVar21 = param_3;
        puVar34 = puVar14;
      }
      else {
        puVar21 = puVar27;
        puVar34 = (ulong *)(extraout_x8_08 + 0x290);
      }
      func_0x00010b134a10();
      lVar25 = extraout_x8_09 + 0x30;
      uVar10 = bVar1 == 0;
      func_0x00010b1348b4((char)puVar21[0xb]);
      uVar22 = extraout_w9_00;
      if ((bool)uVar10) {
        uVar22 = extraout_w8_00;
      }
      alStack_1060[3] = 0;
      alStack_1060[2] = 0;
      if (puVar34 == (ulong *)0x0) {
        if (param_8 != 0) {
          uVar24 = *(undefined8 *)*plVar16;
          FUN_10b190178((undefined8 *)*plVar16,puVar21);
          func_0x00010b134180();
          func_0x00010b135128();
          func_0x00010b134d44(uVar24);
        }
        uStack_1030 = uStack_1030 & 0xffffffffffffff00;
        bStack_d10 = 0;
      }
      else {
        uVar29 = (uint)bVar1;
        if (param_5 != 0) {
          func_0x00010b134a10();
          piVar3 = (int *)(extraout_x8_10 + 0x7c);
          if (bVar1 == 0) {
            piVar3 = (int *)((long)param_3 + 100);
          }
          iVar12 = *piVar3;
          if (iVar12 == 1) {
            if ((int)puVar34[4] == 0) {
LAB_10b11635c:
              iVar12 = *piVar3;
              goto LAB_10b116360;
            }
            puVar14 = puVar21;
            func_0x00010b1c4c28();
            if (((ulong)puVar14 & 1) == 0) {
              func_0x00010b134a10();
              puVar5 = (ulong *)(extraout_x8_11 + 0x88);
              if (bVar1 == 0) {
                puVar5 = param_3 + 0xe;
              }
              if (*puVar5 == 0) {
                puVar5 = (ulong *)(extraout_x8_11 + 0x80);
                if (bVar1 == 0) {
                  puVar5 = param_3 + 0xd;
                }
                if (((char)puVar21[0xb] == '\x01') && (*puVar5 == 0)) {
                  FUN_10b2029a0();
                  func_0x00010b134a10();
                  func_0x00010b135af8();
                  FUN_10b20345c();
                  func_0x00010b135b34();
                  if ((*(byte *)(extraout_x8_18 + 0x43) & 1) != 0) goto LAB_10b1162c8;
                }
              }
              goto LAB_10b11635c;
            }
LAB_10b1162c8:
            bVar11 = false;
LAB_10b116394:
            alStack_1060[1] = 0;
            alStack_1060[0] = 0;
            func_0x00010b134aa0();
            func_0x00010b1340e8();
            uVar10 = uVar29 == 0;
            puVar14 = (ulong *)abStack_7e0;
            puVar5 = param_3 + 0x38;
            if (((bool)uVar10) || (puVar5 = puVar14, ((bStack_918 ^ 1 | abStack_7e0[0]) & 1) == 0))
            {
LAB_10b11685c:
              puVar14 = puVar5;
              FUN_10b1b3d48(&plStack_17c0,puVar34);
              FUN_10b11ffec(alStack_1060,&plStack_17c0);
              func_0x0001052ac684(&plStack_17c0);
              puVar19 = puVar21;
              FUN_10b1c41c0();
              if (puVar19 == (ulong *)0x0) {
                bVar8 = true;
              }
              else {
                uVar10 = (int)puVar19[4] == 0;
                bVar8 = (bool)uVar10;
              }
              if (((uVar29 != 0) && (bVar8)) && (uVar10 = (int)puVar34[4] == 1, 0 < (int)puVar34[4])
                 ) {
                func_0x00010b136144();
                func_0x00010b1349d4();
                if ((int)puVar19 != 0) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                            (&puStack_1478,puVar27);
                  puVar35 = &uStack_940;
                  FUN_10b120010();
                  uStack_1458 = puVar35[1];
                  uStack_1460 = *puVar35;
                  uStack_1448 = puVar35[3];
                  uStack_1450 = puVar35[2];
                  uStack_1440 = puVar35[4];
                  func_0x00010b120028(lVar25);
                  func_0x00010b125750(auStack_1438,lVar25);
                  FUN_10b125778(auStack_13f8,puVar34);
                  FUN_10b12138c(auStack_1350,auStack_688);
                  uStack_1310 = 1;
                  uStack_1308 = 0;
                  uStack_1304 = 0;
                  uStack_1300 = 0;
                  uStack_12fc = 0;
                  lVar25 = param_2[5];
                  func_0x00010b1213e8(auStack_11e0,&puStack_1478);
                  FUN_10b1f6b3c(&plStack_17c0,lVar25,puVar27,auStack_11e0,1);
                  func_0x00010b135fdc();
                  func_0x00010b13545c();
                  func_0x00010b1213b8(auStack_11e0);
                  puVar19 = (ulong *)0x0;
                  func_0x00010b1213b8();
                }
              }
            }
            else {
              uStack_1768 = 0;
              uStack_1760 = 0;
              uStack_1738 = 0;
              uStack_1730 = 0;
              uStack_1690 = 0;
              uStack_1688 = 0;
              uStack_1648 = 0;
              uStack_1640 = 0;
              uStack_1608 = 0;
              uStack_1600 = 0;
              uStack_15fe = 0;
              uStack_17b0 = 0;
              plStack_17c0 = (long *)0x0;
              lStack_17b8 = 0;
              uStack_17a8 = uStack_17a8 & 0xffffffffffffff00;
              func_0x00010b1342ec(&plStack_17c0);
              func_0x00010b135c80();
              func_0x00010b13545c();
              func_0x00010b134a10();
              func_0x00010b119678(auStack_318,extraout_x8_12 + 0x388);
              FUN_10b1b4a28(&plStack_17c0,plVar16,auStack_9b8,0);
              func_0x00010b135fdc();
              if ((bStack_1548 & 1) == 0) {
                puVar34 = puVar27;
                FUN_10b1c41c0();
              }
              FUN_10b110dec(alStack_1060,auStack_1540);
              puVar19 = (ulong *)0x0;
              FUN_10b125728();
              if (alStack_1060[0] == 0) goto LAB_10b11685c;
            }
            uVar29 = (uint)puVar19;
            if (bVar11) {
              uVar29 = 1;
            }
            else {
              func_0x00010b136144();
              func_0x00010b1349d4();
            }
            FUN_10b12394c(&puStack_1478,puVar21);
            plStack_17c0 = (long *)0x0;
            FUN_10b119ef8(&puStack_1200,param_2,&puStack_1478,alStack_1060,param_5,&plStack_17c0,1);
            func_0x00010b12b970(&plStack_17c0);
            func_0x00010b121af0(&puStack_1478);
            if ((bStack_11e8 & 1) == 0) {
              uStack_1030 = uStack_1030 & 0xffffffffffffff00;
              bStack_d10 = 0;
            }
            else {
              if (bVar11 || (uVar29 & 1) != 0) {
                func_0x00010b1346cc(auStack_1490);
                lVar25 = CONCAT44(uStack_147c,iStack_1480);
                lStack_17b8 = 0;
                plStack_17c0 = (long *)0x0;
                uStack_17b0 = uStack_17b0 & 0xffffffff00000000;
                uStack_17a8 = uStack_17a8 & 0xffffffffffffff00;
                uStack_14c0 = 0;
                uStack_14b8 = 2;
                FUN_10b11b8d0(lVar25,puVar21,&plStack_17c0);
                func_0x00010b123ee4(&plStack_17c0);
                if (*(int *)(lVar25 + 0x38) == 0) {
                  func_0x00010b11fa90(&plStack_14a0,lVar25 + 0x28);
                  if (plStack_14a0 != (long *)0x0) {
                    lStack_17b8 = 0;
                    plStack_17c0 = (long *)0x0;
                    uStack_17b0 = 0;
                    func_0x00010b120040(auStack_1490,&plStack_17c0);
                    func_0x000107c2798c(&plStack_17c0);
                    FUN_10b1a1ae8(puStack_1200,lStack_11f0);
                    lStack_17b8 = lStack_1498;
                    plStack_17c0 = plStack_14a0;
                    if (lStack_1498 != 0) {
                      do {
                        func_0x00010b134088();
                      } while (extraout_w10_07 != 0);
                    }
                    uStack_14b0 = 0;
                    uStack_14a8 = 0;
                    uStack_17a0 = 0;
                    uStack_17b0 = 0;
                    uStack_17a8 = 0;
                    uStack_1798 = 0;
                    func_0x00010b12570c(&uStack_1030,&plStack_17c0);
                    func_0x00010b121a94(&plStack_17c0);
                    func_0x00010b135da8();
                    func_0x00010b135e18();
                    goto LAB_10b116d44;
                  }
                  func_0x00010b135da8();
                  if (!bVar11) goto LAB_10b116d00;
LAB_10b116b68:
                  puVar27 = puStack_1200;
                  if (lStack_11f8 != 0) {
                    do {
                      func_0x00010b134088();
                    } while (extraout_w10_06 != 0);
                  }
                  uVar10 = *(int *)(lVar25 + 0x38) == 1;
                  if ((bool)uVar10) {
                    lStack_1498 = 0;
                    plStack_14a0 = (long *)0x0;
                    lStack_17b8 = *(long *)(lVar25 + 0x30);
                    plStack_17c0 = *(long **)(lVar25 + 0x28);
                    *(ulong **)(lVar25 + 0x28) = puVar27;
                    *(long *)(lVar25 + 0x30) = lStack_11f8;
                    func_0x00010b124c0c(&plStack_17c0);
                  }
                  else {
                    FUN_10b123f0c(lVar25 + 0x28);
                    *(ulong **)(lVar25 + 0x28) = puVar27;
                    *(long *)(lVar25 + 0x30) = lStack_11f8;
                    lStack_1498 = 0;
                    plStack_14a0 = (long *)0x0;
                    *(undefined4 *)(lVar25 + 0x38) = 1;
                  }
                  func_0x00010b124c0c(&plStack_14a0);
                  if ((uVar29 & (uint)puVar21 & 1) != 0) {
                    uVar10 = (char)*puVar14 == '\x01';
                    if ((bool)uVar10) {
LAB_10b116d08:
                      puVar14 = puStack_1200;
                      func_0x00010b19d06c();
                      if ((int)puVar14 != 0) goto LAB_10b116d14;
                      uVar22 = 2;
                    }
                    else {
LAB_10b116d14:
                      uVar22 = 0;
                    }
                    *(undefined4 *)(lVar25 + 0x330) = uVar22;
                  }
                }
                else {
                  if (bVar11) goto LAB_10b116b68;
LAB_10b116d00:
                  if ((uVar29 & (uint)puVar21 & 1) != 0) goto LAB_10b116d08;
                }
                func_0x00010b135e18();
              }
              func_0x00010b134aa0();
              func_0x00010b120068(extraout_x8_19 + 0x10,&puStack_1200);
              lStack_320 = lStack_11f0;
              func_0x00010b134140();
            }
LAB_10b116d44:
            FUN_10b123d38(&puStack_1200);
            func_0x00010b134274();
            func_0x0001052ac684(alStack_1060);
            goto LAB_10b116910;
          }
LAB_10b116360:
          if ((iVar12 == 2) && ((int)puVar34[4] != 0)) {
            FUN_10b2029a0();
            func_0x00010b134a10();
            func_0x00010b135af8();
            FUN_10b20345c();
            if ((char)puVar14[8] == '\x01') {
              bVar11 = true;
              goto LAB_10b116394;
            }
          }
        }
        uVar28 = puVar34[4];
        func_0x00010b134aa0();
        *extraout_x8_13 = 0;
        extraout_x8_13[0x38] = 0;
        FUN_10b17ee04(puVar21,puVar34);
        func_0x00010b135664();
        puVar14 = auStack_11e0;
        func_0x000107c278b8();
        func_0x00010b136310();
        func_0x00010b134c34();
        func_0x00010b135630();
        uVar10 = ((ulong)puVar14 & 0xfffffffd) == 0;
        if ((bool)uVar10) {
          func_0x00010b135464();
          if ((int)uStack_17b0 == 0) {
            func_0x00010b134a64();
            goto LAB_10b116504;
          }
          func_0x00010b134544();
          func_0x00010b135ef8();
          func_0x00010b134140();
          func_0x00010b134274();
          func_0x00010b134a64();
        }
        else {
LAB_10b116504:
          iVar12 = (int)puVar14;
          if (param_8 == 0) {
            puStack_1478 = &DAT_10f72fb5d;
            uStack_1470 = 7;
            uStack_1468 = uStack_1468 & 0xffffffffffffff00;
            uStack_1450 = uStack_1450 & 0xffffffffffffff00;
            uStack_1448 = uStack_1448 & 0xffffffff00000000;
          }
          else {
            FUN_10b190178(*plVar16,puVar21);
            FUN_10b190310(&puStack_1478,puVar21,iVar12 != 0);
          }
          func_0x00010b134a10();
          puVar27 = (ulong *)(extraout_x8_14 + 0xa0);
          if (uVar29 == 0) {
            puVar27 = param_3 + 0x11;
          }
          puVar4 = (undefined4 *)(extraout_x8_14 + 0x7c);
          if (uVar29 == 0) {
            puVar4 = (undefined4 *)((long)param_3 + 100);
          }
          uVar7 = *puVar4;
          if ((*puVar27 & 1) == 0) {
            uVar7 = 0;
          }
          if ((bVar1 & 1) == 0) {
            FUN_10b121c1c(&plStack_17c0,param_3);
            uVar10 = iVar12 == 0;
            func_0x00010b134aa0();
            FUN_10b1910b4(&plStack_17c0,plVar16);
            func_0x00010b134a94(alStack_1060 + 2);
            func_0x00010b1200a0();
            func_0x00010b134544();
            FUN_10b129c1c();
            func_0x00010b13545c();
          }
          else {
            uStack_2e8 = 0;
            uStack_2e0 = 0;
            uStack_2b8 = 0;
            uStack_2b0 = 0;
            uStack_210 = 0;
            uStack_208 = 0;
            uStack_1c8 = 0;
            uStack_1c0 = 0;
            uStack_188 = 0;
            uStack_180 = 0;
            uStack_17e = 0;
            func_0x00010b134aa0();
            ppuStack_330 = (ulong **)0x0;
            plStack_340 = (long *)0x0;
            puStack_338 = (ulong *)0x0;
            *(undefined1 *)(extraout_x9_00 + 0x18) = 0;
            func_0x00010b1342ec();
            func_0x00010b134a94();
            func_0x00010b135c80();
            uVar10 = iVar12 == 0;
            func_0x00010b134544();
            func_0x00010b121af0();
            func_0x00010b134aa0();
            func_0x00010b134dbc();
            FUN_10b191000();
            func_0x00010b134a94(alStack_1060 + 2);
            func_0x00010b1200a0();
            func_0x00010b134544();
            FUN_10b129c1c();
          }
          lVar25 = alStack_1060[2];
          if (alStack_1060[2] == 0) {
            if (param_8 != 0) {
              func_0x00010b136150();
              func_0x00010b134180();
              func_0x00010b135128();
              func_0x00010b1356d8();
            }
LAB_10b116788:
            uStack_1030 = uStack_1030 & 0xffffffffffffff00;
            bStack_d10 = 0;
          }
          else {
            if ((uVar29 == 0) || (uVar10 = (int)uVar28 == 1, 0 < (int)uVar28)) {
              uVar10 = iVar12 == 3;
              uVar32 = 0;
              if ((bool)uVar10) {
                uVar32 = uVar29;
              }
              puVar27 = (ulong *)(ulong)uVar32;
              if (((uVar32 & 1) == 0) && (iVar12 != 0)) {
                __ZNSt3__115recursive_mutex4lockEv(alStack_1060[2] + 0x18);
                iVar12 = (int)lVar25 + 0x340;
                func_0x00010b1c4c0c();
                __ZNSt3__115recursive_mutex6unlockEv(lVar25 + 0x18);
                puVar27 = puVar14;
                if (iVar12 != 0) goto LAB_10b116698;
              }
            }
            else {
LAB_10b116698:
              func_0x00010b136150();
              FUN_10b20bea8();
              puVar27 = (ulong *)0x3;
            }
            lVar25 = alStack_1060[2];
            FUN_10b1912dc(alStack_1060[2],puVar27);
            iVar12 = (int)lVar25;
            if ((param_8 != 0) && (iVar12 != 0)) {
              func_0x00010b136150();
              func_0x00010b1345cc();
              func_0x00010b1356d8();
              uVar10 = iVar12 == 2;
              if ((bool)uVar10) {
                FUN_10b19055c();
                FUN_10b20c200(*(undefined8 *)*plVar16,&UNK_10f72fbde,0x13,uVar22,uVar7,
                              &DAT_10f51417e,3);
              }
              goto LAB_10b116788;
            }
            func_0x00010b1346cc(&puStack_1200);
            lVar25 = lStack_11f0;
            FUN_10b129c64(lStack_11f0,auStack_1960);
            func_0x00010b11f9ec(auStack_1490,lVar25);
            if (iStack_1480 == 0) {
              func_0x00010b135e20();
              *(int *)(lVar25 + 0x308) = iVar12;
              func_0x00010b135a68();
              if (extraout_x8_15 != 0) {
                do {
                  func_0x00010b134088();
                } while (extraout_w10_04 != 0);
              }
              func_0x00010b134a94();
              func_0x00010b1200c4(lVar25);
              func_0x00010b134544();
              func_0x00010b12ac80();
              func_0x00010b135a68();
              if (extraout_x8_16 != 0) {
                do {
                  func_0x00010b134088();
                } while (extraout_w10_05 != 0);
              }
              func_0x00010b134aa0();
              *(undefined1 *)(extraout_x8_17 + 0x310) = 0;
              *(undefined1 *)(extraout_x8_17 + 0x318) = 0;
              lStack_320 = 0;
              ppuStack_330 = (ulong **)0x0;
              ppuStack_328 = (undefined **)0x0;
              *(undefined1 *)(extraout_x8_17 + 0x28) = 0;
              func_0x00010b134140();
              func_0x00010b134274();
            }
            else {
              puStack_338 = (ulong *)0x0;
              plStack_340 = (long *)0x0;
              ppuStack_330 = (ulong **)0x0;
              func_0x00010b134a94(&puStack_1200);
              func_0x00010b120040();
              func_0x00010b134544();
              func_0x000107c2798c();
              func_0x00010b134544();
              FUN_10b11fef0();
              func_0x00010b134140();
              func_0x00010b134274();
              func_0x00010b135e20();
            }
            func_0x000107c2798c(&puStack_1200);
          }
          func_0x00010b135e70();
        }
        func_0x00010b1351d0();
      }
LAB_10b116910:
      FUN_10b129c1c(alStack_1060 + 2);
    }
    else {
      func_0x00010b134544();
      func_0x00010b135ef8();
      func_0x00010b134140();
      func_0x00010b134274();
      func_0x00010b134a64();
    }
    if ((bStack_d10 & 1) == 0) {
      uVar10 = cStack_1970 == '\x01';
      if (((bool)uVar10) && (lStack_1998 != 0)) {
        FUN_10b1ae534(lStack_1998 + 0x30,auStack_1988,3);
      }
      func_0x00010b1340e8(param_1);
    }
    else {
      FUN_10b125690(param_1,&uStack_1030);
    }
    FUN_10b1256cc(&uStack_1030);
  }
LAB_10b116964:
  func_0x00010b135dec();
  func_0x00010b125888(&lStack_1998);
  func_0x000107c279a4(auStack_1988);
  FUN_10b132f74(&lStack_1968);
  func_0x00010b134dbc();
  func_0x00010b1256ec();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1960);
LAB_10b116990:
  func_0x00010b133dfc(uStack_18);
  if ((bool)uVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b135da8();
  func_0x00010b135e18();
  FUN_10b123d38(&puStack_1200);
  func_0x00010b134274();
  func_0x0001052ac684(alStack_1060);
  FUN_10b129c1c(alStack_1060 + 2);
  func_0x00010b135dec();
  func_0x00010b125888(&lStack_1998);
  func_0x000107c279a4(auStack_1988);
  FUN_10b132f74(&lStack_1968);
  func_0x00010b134dbc();
  func_0x00010b1256ec();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1960);
  do {
    func_0x00010b1343d0();
  } while( true );
}



/* Entry: 10b11723c; end: 10b11727f;  */

void FUN_10b11723c(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x00010b13448c();
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x18);
  FUN_10b12394c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10b117280; end: 10b1172c3;  */

void FUN_10b117280(long param_1,long param_2)

{
  func_0x000107c27f4c();
  *(long *)(param_1 + 0x10) = param_2 + 0x40;
  return;
}



/* Entry: 10b1172c4; end: 10b1174fb;  */

void FUN_10b1172c4(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar4;
  long lVar5;
  undefined8 in_stack_00000030;
  undefined1 in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  code *in_stack_000000b8;
  undefined **in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  undefined8 in_stack_000000e8;
  
  func_0x00010b136510();
  lVar2 = param_1;
  func_0x00010b133e8c();
  in_stack_000000e8 = extraout_x8;
  FUN_10b127af8(&stack0x000000a0,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
  func_0x00010b1ff218(&stack0x00000090,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),
                      *(undefined4 *)(param_2 + 0x18));
  lVar2 = in_stack_000000a8;
  uVar1 = in_stack_000000a0;
  if (in_stack_000000a8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b121ddc(&stack0x00000010,param_2);
  lVar5 = param_4[1];
  uVar4 = *param_4;
  in_stack_00000030 = param_3;
  in_stack_00000038 = param_5;
  in_stack_00000040 = uVar4;
  in_stack_00000048 = lVar5;
  if (param_4[1] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  func_0x000104be0ccc(&stack0x00000050,param_6);
  func_0x00010b13537c();
  in_stack_00000070 = uVar4;
  in_stack_00000078 = lVar5;
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_01 != 0);
  }
  in_stack_000000b8 = FUN_10b12a010;
  in_stack_000000c0 = &PTR_FUN_110cbcce0;
  puVar3 = (undefined8 *)0x88;
  in_stack_00000080 = param_1;
  __Znwm();
  puVar3[1] = lVar2;
  *puVar3 = uVar1;
  func_0x00010b1360c4();
  puVar3[9] = in_stack_00000048;
  puVar3[8] = in_stack_00000040;
  puVar3[6] = in_stack_00000030;
  *(undefined1 *)(puVar3 + 7) = in_stack_00000038;
  if (in_stack_00000048 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_02 != 0);
  }
  func_0x000104be0ccc(puVar3 + 10,&stack0x00000050);
  puVar3[0xf] = in_stack_00000078;
  puVar3[0xe] = in_stack_00000070;
  if (in_stack_00000078 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_03 != 0);
  }
  puVar3[0x10] = in_stack_00000080;
  in_stack_000000c8 = puVar3;
  func_0x00010b135828();
  func_0x00010b133eb4(in_stack_000000c0);
  FUN_10b1174fc();
  func_0x00010b1298c4(&stack0x00000090);
  func_0x00010b135690();
  func_0x00010b133dfc(in_stack_000000e8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133eb4(in_stack_000000c0);
    FUN_10b1174fc();
    func_0x00010b1298c4(&stack0x00000090);
    do {
      func_0x00010b135690();
      func_0x00010b1343d0();
    } while( true );
  }
  return;
}



/* Entry: 10b1174fc; end: 10b117533;  */

undefined8 FUN_10b1174fc(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b0f7ee8(param_1 + 0x70);
  func_0x000107c279c4(param_1 + 0x50);
  func_0x00010b0f7ec4(param_1 + 0x40);
  func_0x00010b134b74();
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b117534; end: 10b1175cb;  */

void FUN_10b117534(void)

{
  undefined1 in_ZR;
  undefined1 auStack_c0 [16];
  long lStack_88;
  undefined8 uStack_48;
  
  func_0x00010b134948();
  func_0x00010b133e38();
  func_0x00010b135788();
  func_0x00010b134eac();
  func_0x00010b135ccc();
  func_0x00010b133f10(&PTR_DAT_110cbccf8);
  func_0x00010b134928();
  func_0x00010b133dfc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b133f10(&PTR_DAT_110cbccf8);
  func_0x00010b134928();
  func_0x00010b1343d0();
  func_0x00010b135568();
  func_0x00010b134918(lStack_88 + 0x28);
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x00010b135cb4();
  func_0x000107c281c0(auStack_c0);
  return;
}



/* Entry: 10b1175cc; end: 10b11760f;  */

void FUN_10b1175cc(undefined8 param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b135568();
  func_0x00010b134918(param_2 + 0x28);
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x00010b135cb4();
  func_0x000107c281c0(auStack_30);
  return;
}



/* Entry: 10b117610; end: 10b1177a7;  */

void FUN_10b117610(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [4];
  undefined1 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_58;
  long lStack_50;
  
  uVar2 = *(undefined8 *)(param_2[3] + 0x20);
  func_0x000107c278b8(&uStack_b0,&UNK_10f72f575);
  FUN_10b17aa30(&lStack_58,uVar2,param_3,&uStack_b0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b0);
  lVar1 = lStack_58;
  do {
    if (lVar1 == lStack_50) {
      func_0x00010b13557c();
      func_0x000105641abc(&uStack_f0,&UNK_10f72f588);
      uStack_a0 = uStack_c0;
      uStack_a8 = uStack_c8;
      uStack_b0 = uStack_d0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d0 = 0;
      uStack_98 = 1;
      uStack_90 = uStack_90 & 0xffffffffffffff00;
      uStack_78 = cStack_d8 == '\x01';
      if ((bool)uStack_78) {
        uStack_88 = uStack_e8;
        uStack_90 = uStack_f0;
        uStack_80 = uStack_e0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_f0 = 0;
      }
      func_0x0001052b8c70(param_1,&uStack_b0);
      func_0x00010b134ebc();
      func_0x00010b136098();
      func_0x00010b134aac();
LAB_10b11775c:
      func_0x000107c278a8(&lStack_58);
      return;
    }
    lVar3 = param_2[5];
    FUN_10b202630(&uStack_b0,lVar1);
    auStack_b8[0] = 0;
    uStack_b4 = 0;
    FUN_10b1f6888(lVar3,&uStack_b0,auStack_b8);
    func_0x00010b121e00(&uStack_b0);
    if ((int)lVar3 != 0) {
      (**(code **)(*param_2 + 0x28))(param_1,param_2,lVar1,param_4);
      goto LAB_10b11775c;
    }
    lVar1 = lVar1 + 0x18;
  } while( true );
}



/* Entry: 10b1177a8; end: 10b11784b;  */

void FUN_10b1177a8(void)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined4 uVar2;
  undefined8 in_x3;
  undefined4 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_1f0 [16];
  undefined8 uStack_1e0;
  undefined8 **ppuStack_1d0;
  code *pcStack_1c8;
  long lStack_1b8;
  code *pcStack_1a8;
  undefined **ppuStack_1a0;
  long *plStack_198;
  undefined8 uStack_178;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long lStack_128;
  long lStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_d8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [20];
  undefined4 uStack_7c;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_48;
  
  uVar3 = (undefined4)((ulong)in_x3 >> 0x20);
  uVar2 = (undefined4)in_x3;
  func_0x00010b134948();
  func_0x00010b133e38();
  uStack_7c = uVar2;
  func_0x00010b135788();
  func_0x00010b1ff218(auStack_90);
  pcStack_78 = FUN_10b12a570;
  ppuStack_70 = &PTR_FUN_110cbcd10;
  func_0x00010b135ccc();
  func_0x00010b133f10(ppuStack_70);
  func_0x00010b135894();
  func_0x00010b133dfc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133f10(ppuStack_70);
    func_0x00010b135894();
    func_0x00010b1343d0();
    pcStack_98 = FUN_10b11784c;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x00010b134948();
    func_0x00010b133e38();
    func_0x00010b135788();
    func_0x00010b134eac();
    uStack_108 = 0x10b12a760;
    ppuStack_100 = &PTR_DAT_110cbcd28;
    lStack_118 = lStack_128 + 0x28;
    uStack_110 = 1;
    __ZNSt3__115recursive_mutex4lockEv();
    func_0x00010b12a760(extraout_x8,&uStack_108);
    plVar1 = &lStack_118;
    func_0x000107c281c0();
    func_0x00010b133f10(ppuStack_100);
    func_0x00010b134928();
    func_0x00010b133dfc(uStack_d8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010b134a4c();
    func_0x000107c281c0();
    func_0x00010b133f10(ppuStack_100);
    func_0x00010b134928();
    func_0x00010b1343d0();
    pcStack_138 = FUN_10b117928;
    ppuStack_140 = &puStack_a0;
    func_0x00010b1354e8();
    func_0x00010b133e38();
    func_0x00010b135788();
    func_0x00010b134eac();
    pcStack_1a8 = FUN_10b12a784;
    ppuStack_1a0 = &PTR_FUN_110cbcd40;
    plStack_198 = plVar1;
    FUN_10b1179d4(extraout_x8_00);
    func_0x00010b1341cc(ppuStack_1a0);
    func_0x00010b134928();
    func_0x00010b133dfc(uStack_178);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010b1341cc(ppuStack_1a0);
      func_0x00010b134928();
      func_0x00010b1343d0();
      pcStack_1c8 = FUN_10b1179d4;
      uStack_1e0 = CONCAT44(uVar3,uVar2);
      ppuStack_1d0 = &ppuStack_140;
      func_0x00010b134918(lStack_1b8 + 0x28);
      __ZNSt3__115recursive_mutex4lockEv();
      func_0x00010b135cb4();
      func_0x000107c281c0(auStack_1f0);
      return;
    }
  }
  return;
}



/* Entry: 10b11784c; end: 10b117927;  */

void FUN_10b11784c(void)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 in_x3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long lStack_128;
  code *pcStack_118;
  undefined **ppuStack_110;
  long *plStack_108;
  undefined8 uStack_e8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_98;
  long lStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_48;
  
  func_0x00010b134948();
  func_0x00010b133e38();
  func_0x00010b135788();
  func_0x00010b134eac();
  uStack_78 = 0x10b12a760;
  ppuStack_70 = &PTR_DAT_110cbcd28;
  lStack_88 = lStack_98 + 0x28;
  uStack_80 = 1;
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x00010b12a760(extraout_x8,&uStack_78);
  plVar1 = &lStack_88;
  func_0x000107c281c0();
  func_0x00010b133f10(ppuStack_70);
  func_0x00010b134928();
  func_0x00010b133dfc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b134a4c();
  func_0x000107c281c0();
  func_0x00010b133f10(ppuStack_70);
  func_0x00010b134928();
  func_0x00010b1343d0();
  pcStack_a8 = FUN_10b117928;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010b1354e8();
  func_0x00010b133e38();
  func_0x00010b135788();
  func_0x00010b134eac();
  pcStack_118 = FUN_10b12a784;
  ppuStack_110 = &PTR_FUN_110cbcd40;
  plStack_108 = plVar1;
  FUN_10b1179d4(extraout_x8_00);
  func_0x00010b1341cc(ppuStack_110);
  func_0x00010b134928();
  func_0x00010b133dfc(uStack_e8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1341cc(ppuStack_110);
  func_0x00010b134928();
  func_0x00010b1343d0();
  pcStack_138 = FUN_10b1179d4;
  uStack_150 = in_x3;
  ppuStack_140 = &puStack_b0;
  func_0x00010b134918(lStack_128 + 0x28);
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x00010b135cb4();
  func_0x000107c281c0(auStack_160);
  return;
}



/* Entry: 10b117928; end: 10b1179d3;  */

void FUN_10b117928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_48;
  
  func_0x00010b1354e8();
  func_0x00010b133e38();
  func_0x00010b135788();
  func_0x00010b134eac();
  pcStack_78 = FUN_10b12a784;
  ppuStack_70 = &PTR_FUN_110cbcd40;
  uStack_68 = param_1;
  FUN_10b1179d4(extraout_x8);
  func_0x00010b1341cc(ppuStack_70);
  func_0x00010b134928();
  func_0x00010b133dfc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1341cc(ppuStack_70);
  func_0x00010b134928();
  func_0x00010b1343d0();
  pcStack_98 = FUN_10b1179d4;
  uStack_b0 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010b134918(lStack_88 + 0x28);
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x00010b135cb4();
  func_0x000107c281c0(auStack_c0);
  return;
}



/* Entry: 10b1179d4; end: 10b117a1b;  */

void FUN_10b1179d4(long param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b134918(param_1 + 0x28);
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x00010b135cb4();
  func_0x000107c281c0(auStack_30);
  return;
}



/* Entry: 10b117a1c; end: 10b117a2b;  */

void FUN_10b117a1c(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b135904();
    }
    func_0x00010597110c();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 10b117a2c; end: 10b117a6f;  */

void FUN_10b117a2c(void)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  auStack_40[0] = 0;
  uStack_28 = 0;
  FUN_10b117a70();
  func_0x000107c279c4(auStack_40);
  return;
}



/* Entry: 10b117a70; end: 10b117f77;  */

void FUN_10b117a70(long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  long *param_6,int param_7,undefined8 param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  long **pplVar4;
  undefined8 uVar5;
  long **pplVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long **extraout_x8_01;
  long **extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w12;
  int extraout_w12_00;
  undefined8 uVar17;
  undefined8 in_stack_00000050;
  long in_stack_00000060;
  long *in_stack_00000068;
  undefined1 auStack_550 [384];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined **ppuStack_378;
  undefined8 uStack_370;
  long lStack_368;
  uint uStack_2f8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d0 [80];
  undefined8 *puStack_280;
  long lStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  long *plStack_150;
  undefined8 *puStack_148;
  undefined1 auStack_138 [24];
  long *plStack_120;
  undefined8 *puStack_118;
  long *plStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_d0 [96];
  long *plStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  long lStack_28;
  long lStack_20;
  undefined8 *puStack_18;
  undefined8 uStack_10;
  
  uVar16 = (undefined4)((ulong)param_8 >> 0x20);
  iVar14 = (int)param_8;
  uVar12 = (undefined4)((ulong)param_4 >> 0x20);
  uVar10 = (uint)param_4;
  func_0x00010b134cf8();
  lVar7 = CONCAT44(uVar16,iVar14);
  uVar5 = CONCAT44(uVar12,uVar10);
  plVar9 = param_3;
  plVar13 = param_6;
  func_0x00010b133e8c();
  plVar2 = (long *)*plVar13;
  puStack_118 = (undefined8 *)plVar13[1];
  plStack_120 = plVar2;
  uStack_10 = extraout_x8;
  if (puStack_118 != (undefined8 *)0x0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
    plVar2 = (long *)*param_6;
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(&plStack_110);
    func_0x00010b1350c4(uStack_100._7_1_);
    if (extraout_x8_00 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_110);
    }
    else {
      func_0x00010b1364f8(*param_6);
      (*extraout_x9)(&plStack_70);
      in_ZR = uStack_60._7_1_ == 0;
      puVar8 = puStack_68;
      if (-1 < uStack_60) {
        puVar8 = (undefined8 *)(ulong)uStack_60._7_1_;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_70);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_110);
      if (puVar8 != (undefined8 *)0x0) {
        uVar3 = (ulong)*(uint *)(param_2 + 0x18);
        func_0x00010b20b440(uVar3);
        func_0x000107c278b8(auStack_138,uVar3);
        (**(code **)(*(long *)*param_6 + 0x70))(&plStack_110);
        func_0x00010b136168();
        func_0x00010727f9a8(&plStack_70,auStack_d0);
        pplVar4 = &plStack_70;
        func_0x000107c278d0(pplVar4,auStack_138);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_70);
        func_0x0001052bb09c(&plStack_110);
        if (((ulong)pplVar4 & 1) == 0) {
          FUN_10b1185c8(&plStack_110);
          FUN_10b20513c(&plStack_110,param_6);
          pplVar4 = &plStack_110;
          func_0x00010b1185d0();
          plVar2 = pplVar4[1];
          if (((ulong)plVar2 & 1) != 0) {
            plVar2 = *(long **)((ulong)plVar2 & 0xfffffffffffffffe);
          }
          func_0x000107c30248(pplVar4 + 3,auStack_138,plVar2);
          FUN_10b12b260(&lStack_28,1);
          puStack_18[2] = 0;
          *puStack_18 = &PTR_FUN_110cbd7d0;
          puStack_18[1] = 0;
          plStack_70 = (long *)0x0;
          puStack_68 = (undefined8 *)0x0;
          uStack_60 = 0;
          FUN_10b2111c0(puStack_18 + 3,&plStack_110,&plStack_70);
          func_0x000107c278a8(&plStack_70);
          puStack_148 = puStack_18;
          puStack_18 = (undefined8 *)0x0;
          plStack_150 = puStack_148 + 3;
          func_0x00010b12b2d8(&lStack_28);
          puVar8 = puStack_148;
          plVar2 = plStack_150;
          plStack_150 = (long *)0x0;
          puStack_148 = (undefined8 *)0x0;
          puStack_68 = puStack_118;
          plStack_70 = plStack_120;
          puStack_118 = puVar8;
          plStack_120 = plVar2;
          func_0x0001052ac684(&plStack_70);
          FUN_10b12b2e8(&plStack_150);
          uVar17 = **(undefined8 **)(param_1 + 0x18);
          FUN_10b12983c(&plStack_70,*(undefined4 *)(param_2 + 0x18));
          func_0x00010b134904(&lStack_28,&plStack_70);
          func_0x00010b134528(uVar17,0x40,&lStack_28);
          func_0x00010b134d78();
          func_0x00010b134618(&plStack_70);
          FUN_10b2514b4(&plStack_110);
        }
        func_0x00010b135970();
        puStack_68 = (undefined8 *)0x0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_40 = 0;
        uStack_38 = (undefined1)param_7;
        if (*(char *)(in_stack_00000060 + 0x18) == '\x01') {
          FUN_10b114b98(&plStack_70);
          func_0x00010b135430(*(undefined8 *)(in_stack_00000060 + 8));
          if ((uVar10 & 1) != 0) {
            func_0x00010b135424();
          }
          func_0x00010b13506c();
        }
        FUN_10b118220(&plStack_110);
        func_0x00010b1185e0(&plStack_110);
        FUN_10b20513c();
        pplVar4 = &plStack_110;
        if (((ulong)ppuStack_108 & 1) != 0) {
          func_0x00010b13615c();
          pplVar4 = extraout_x8_01;
        }
        func_0x000107c30248(pplVar4 + 6,param_3);
        pplVar4 = &plStack_110;
        if (((ulong)ppuStack_108 & 1) != 0) {
          func_0x00010b13615c();
          pplVar4 = extraout_x8_02;
        }
        func_0x000107c30248(pplVar4 + 7,uVar5);
        in_ZR = *(char *)(lVar7 + 0x18) == '\x01';
        if ((bool)in_ZR) {
          FUN_10b118238(&plStack_110);
          func_0x00010b135430(*(undefined8 *)(lVar7 + 8));
          if ((uVar10 & 1) != 0) {
            func_0x00010b135424();
          }
          func_0x00010b13506c();
        }
        if (param_7 == 0) {
          iVar15 = 1;
        }
        else {
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
          FUN_10b20ec9c(uVar5,*(undefined4 *)(param_2 + 0x18));
          in_ZR = (int)uVar5 == 0;
          iVar15 = 1;
          if ((bool)in_ZR) {
            iVar15 = 2;
          }
        }
        func_0x00010b1364d8();
        FUN_10b189390(*(undefined8 *)(param_1 + 0x28));
        func_0x00010b135408();
        func_0x00010b1351c8(iVar15 + 0x48);
        func_0x00010b135534();
        FUN_10b121eac();
        pplVar4 = &plStack_70;
        func_0x00010b121ec4(iVar15 + 0x128);
        func_0x00010b136130();
        func_0x00010b13534c();
        FUN_10b118278();
        FUN_10b1213b8(auStack_2d0);
        FUN_10b24f5cc(&plStack_110);
        FUN_10b24fff8(&plStack_70);
        func_0x00010b13547c();
        goto LAB_10b117e50;
      }
    }
  }
  func_0x00010b135940();
  FUN_10b1ff1d0(&plStack_70);
  uStack_100 = *in_stack_00000068;
  lStack_20 = in_stack_00000068[1];
  lStack_f8 = 0;
  in_stack_00000068 = plVar9;
  lStack_28 = uStack_100;
  if (lStack_20 != 0) {
    do {
      func_0x00010b133f68();
      lStack_f8 = extraout_x8_03;
      uStack_100 = extraout_x9_00;
    } while (extraout_w12 != 0);
  }
  plStack_110 = (long *)0x10b12b228;
  ppuStack_108 = &PTR_DAT_110cbcda0;
  if (lStack_f8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b1346b0();
  pplVar4 = &plStack_110;
  (*extraout_x8_04)();
  func_0x00010b133ea8(ppuStack_108);
  func_0x00010b0f7ee8(&lStack_28);
  FUN_10b127ebc(&plStack_70);
LAB_10b117e50:
  func_0x0001052ac684(&plStack_120);
  func_0x00010b133dfc(uStack_10);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10b24f5cc(&plStack_110);
    FUN_10b24fff8(&plStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    pplVar6 = &plStack_120;
    func_0x0001052ac684();
    func_0x00010b1343d0();
    func_0x00010b134cf8(FUN_10b117f78);
    puStack_280 = &stack0x00000050;
    func_0x00010b133e8c();
    uVar1 = *in_stack_00000068 == in_stack_00000068[1];
    uStack_2e0 = extraout_x8_05;
    if ((bool)uVar1) {
      func_0x00010b135940();
      FUN_10b1ff1d0(&uStack_3d0);
      uStack_370 = *puStack_260;
      lStack_388 = puStack_260[1];
      lStack_368 = 0;
      uStack_390 = uStack_370;
      if (lStack_388 != 0) {
        do {
          func_0x00010b133f68();
          lStack_368 = extraout_x8_08;
          uStack_370 = extraout_x9_01;
        } while (extraout_w12_00 != 0);
      }
      uStack_380 = 0x10b12ab74;
      ppuStack_378 = &PTR_DAT_110cbcd58;
      if (lStack_368 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010b1346b0();
      (*extraout_x8_09)();
      func_0x00010b133ea8(ppuStack_378);
      func_0x00010b0f7ee8(&uStack_390);
      FUN_10b127ebc(&uStack_3d0);
    }
    else {
      uVar11 = uVar10;
      iVar15 = iVar14;
      func_0x00010b135970();
      uStack_3c8 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_3a0 = 0;
      uStack_398 = (undefined1)iVar15;
      if (*(char *)(lStack_268 + 0x18) == '\x01') {
        FUN_10b114b98(&uStack_3d0);
        func_0x00010b135430(*(undefined8 *)(lStack_268 + 8));
        if ((uVar11 & 1) != 0) {
          func_0x00010b135424();
        }
        func_0x00010b13506c();
      }
      FUN_10b118220(&uStack_380);
      func_0x00010b118228();
      func_0x00010b135430(in_stack_00000068[1]);
      if ((uVar11 & 1) != 0) {
        func_0x00010b135424();
      }
      func_0x00010b13506c();
      puVar8 = &uStack_380;
      uStack_2f8 = uVar10;
      if (((ulong)ppuStack_378 & 1) != 0) {
        func_0x00010b13615c();
        puVar8 = extraout_x8_06;
      }
      func_0x000107c30248(puVar8 + 6,param_5);
      puVar8 = &uStack_380;
      if (((ulong)ppuStack_378 & 1) != 0) {
        func_0x00010b13615c();
        puVar8 = extraout_x8_07;
      }
      func_0x000107c30248(puVar8 + 7,plVar13);
      uVar1 = *(char *)(lStack_270 + 0x18) == '\x01';
      if ((bool)uVar1) {
        FUN_10b118238(&uStack_380);
        func_0x00010b135430(*(undefined8 *)(lStack_270 + 8));
        if ((uVar11 & 1) != 0) {
          func_0x00010b135424();
        }
        func_0x00010b13506c();
      }
      if (iVar14 == 0) {
        iVar14 = 1;
      }
      else {
        lVar7 = pplVar6[3][2];
        FUN_10b20ec9c(lVar7,*(undefined4 *)(pplVar4 + 3));
        uVar1 = (int)lVar7 == 0;
        iVar14 = 1;
        if ((bool)uVar1) {
          iVar14 = 2;
        }
      }
      func_0x00010b1364d8();
      FUN_10b189390(pplVar6[5]);
      func_0x00010b135408();
      func_0x00010b1351c8(iVar14 + 0x48);
      func_0x00010b135534();
      FUN_10b121eac();
      func_0x00010b121ec4(iVar14 + 0x128,&uStack_3d0);
      func_0x00010b136130();
      func_0x00010b13534c();
      FUN_10b118278();
      FUN_10b1213b8(auStack_550);
      FUN_10b24f5cc(&uStack_380);
      FUN_10b24fff8(&uStack_3d0);
    }
    func_0x00010b133dfc(uStack_2e0);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      FUN_10b24f5cc(&uStack_380);
      puVar8 = &uStack_3d0;
      FUN_10b24fff8();
      func_0x00010b1343d0();
      *puVar8 = &PTR_FUN_110ccada8;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = &DAT_11383d918;
      puVar8[7] = &DAT_11383d918;
      puVar8[8] = &DAT_11383d918;
      puVar8[9] = &DAT_11383d918;
      puVar8[0xb] = 0;
      puVar8[10] = 0;
      puVar8[0xd] = 0;
      puVar8[0xc] = 0;
      puVar8[0xf] = 0;
      puVar8[0xe] = 0;
      puVar8[0x11] = 0;
      puVar8[0x10] = 0;
      *(undefined8 *)((long)puVar8 + 0x94) = 0;
      *(undefined8 *)((long)puVar8 + 0x8c) = 0;
      return;
    }
  }
  return;
}



/* Entry: 10b117f78; end: 10b11821f;  */

void FUN_10b117f78(long param_1,long param_2,long *param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w12;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined1 auStack_280 [384];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  uint uStack_28;
  undefined8 uStack_10;
  
  func_0x00010b134cf8();
  func_0x00010b133e8c();
  uVar1 = *param_3 == param_3[1];
  uStack_10 = extraout_x8;
  if ((bool)uVar1) {
    func_0x00010b135940();
    FUN_10b1ff1d0(&uStack_100);
    uStack_a0 = *in_stack_00000070;
    lStack_b8 = in_stack_00000070[1];
    lStack_98 = 0;
    uStack_c0 = uStack_a0;
    if (lStack_b8 != 0) {
      do {
        func_0x00010b133f68();
        lStack_98 = extraout_x8_02;
        uStack_a0 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    uStack_b0 = 0x10b12ab74;
    ppuStack_a8 = &PTR_DAT_110cbcd58;
    if (lStack_98 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    func_0x00010b1346b0();
    (*extraout_x8_03)();
    func_0x00010b133ea8(ppuStack_a8);
    func_0x00010b0f7ee8(&uStack_c0);
    FUN_10b127ebc(&uStack_100);
  }
  else {
    uVar4 = param_4;
    iVar5 = param_8;
    func_0x00010b135970();
    uStack_f8 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_c8 = (undefined1)iVar5;
    if (*(char *)(in_stack_00000068 + 0x18) == '\x01') {
      FUN_10b114b98(&uStack_100);
      func_0x00010b135430(*(undefined8 *)(in_stack_00000068 + 8));
      if ((uVar4 & 1) != 0) {
        func_0x00010b135424();
      }
      func_0x00010b13506c();
    }
    FUN_10b118220(&uStack_b0);
    func_0x00010b118228();
    func_0x00010b135430(param_3[1]);
    if ((uVar4 & 1) != 0) {
      func_0x00010b135424();
    }
    func_0x00010b13506c();
    puVar3 = &uStack_b0;
    uStack_28 = param_4;
    if (((ulong)ppuStack_a8 & 1) != 0) {
      func_0x00010b13615c();
      puVar3 = extraout_x8_00;
    }
    func_0x000107c30248(puVar3 + 6,param_5);
    puVar3 = &uStack_b0;
    if (((ulong)ppuStack_a8 & 1) != 0) {
      func_0x00010b13615c();
      puVar3 = extraout_x8_01;
    }
    func_0x000107c30248(puVar3 + 7,param_6);
    uVar1 = *(char *)(in_stack_00000060 + 0x18) == '\x01';
    if ((bool)uVar1) {
      FUN_10b118238(&uStack_b0);
      func_0x00010b135430(*(undefined8 *)(in_stack_00000060 + 8));
      if ((uVar4 & 1) != 0) {
        func_0x00010b135424();
      }
      func_0x00010b13506c();
    }
    if (param_8 == 0) {
      iVar5 = 1;
    }
    else {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
      FUN_10b20ec9c(uVar2,*(undefined4 *)(param_2 + 0x18));
      uVar1 = (int)uVar2 == 0;
      iVar5 = 1;
      if ((bool)uVar1) {
        iVar5 = 2;
      }
    }
    func_0x00010b1364d8();
    FUN_10b189390(*(undefined8 *)(param_1 + 0x28));
    func_0x00010b135408();
    func_0x00010b1351c8(iVar5 + 0x48);
    func_0x00010b135534();
    FUN_10b121eac();
    func_0x00010b121ec4(iVar5 + 0x128,&uStack_100);
    func_0x00010b136130();
    func_0x00010b13534c();
    FUN_10b118278();
    FUN_10b1213b8(auStack_280);
    FUN_10b24f5cc(&uStack_b0);
    FUN_10b24fff8(&uStack_100);
  }
  func_0x00010b133dfc(uStack_10);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_10b24f5cc(&uStack_b0);
    puVar3 = &uStack_100;
    FUN_10b24fff8();
    func_0x00010b1343d0();
    *puVar3 = &PTR_FUN_110ccada8;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = &DAT_11383d918;
    puVar3[7] = &DAT_11383d918;
    puVar3[8] = &DAT_11383d918;
    puVar3[9] = &DAT_11383d918;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    puVar3[0x11] = 0;
    puVar3[0x10] = 0;
    *(undefined8 *)((long)puVar3 + 0x94) = 0;
    *(undefined8 *)((long)puVar3 + 0x8c) = 0;
    return;
  }
  return;
}



/* Entry: 10b118220; end: 10b118237;  */

void FUN_10b118220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccada8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &DAT_11383d918;
  param_1[7] = &DAT_11383d918;
  param_1[8] = &DAT_11383d918;
  param_1[9] = &DAT_11383d918;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  return;
}



/* Entry: 10b118238; end: 10b118277;  */

void FUN_10b118238(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  if (*(long *)(param_1 + 0x68) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x00010b135904();
    }
    func_0x00010b1210c4();
    *(ulong *)(param_1 + 0x68) = uVar1;
  }
  return;
}



/* Entry: 10b118278; end: 10b11844b;  */

void FUN_10b118278(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [384];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  
  func_0x00010b136578();
  func_0x00010b134b60();
  func_0x00010b133e10();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (&uStack_a8,param_2 + 0x48);
  uVar2 = uStack_a0;
  uVar1 = uStack_a8;
  uStack_78 = *(undefined4 *)(unaff_x21 + 0x40);
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  uStack_80 = uStack_98;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  FUN_10b127af8(auStack_b8,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
  func_0x00010b13587c();
  func_0x00010b1213e8(auStack_270);
  func_0x00010b1360c4();
  func_0x00010b135194(auStack_280);
  extraout_x9[1] = uVar2;
  *extraout_x9 = uVar1;
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  __Znwm(0x1c8);
  func_0x00010b134634();
  func_0x00010b1213e8();
  *(long *)(unaff_x20 + 400) = unaff_x19;
  *(undefined8 *)(unaff_x20 + 0x1a0) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0x198) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x1a8) = uStack_d8;
  *(undefined4 *)(unaff_x20 + 0x1b0) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = uStack_c8;
  *(long *)(unaff_x20 + 0x1c0) = lStack_c0;
  if (lStack_c0 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b118450(auStack_280);
  pcStack_68 = FUN_10b12acd8;
  ppuStack_60 = &PTR_FUN_110cbcd88;
  FUN_10b118484();
  func_0x00010b133eec(ppuStack_60);
  func_0x00010b133eb4(&PTR_FUN_110cbcd88);
  func_0x00010b12592c(auStack_b8);
  func_0x00010b135810();
  func_0x00010b133dfc(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133eec(ppuStack_60);
    func_0x00010b133eb4(&PTR_FUN_110cbcd88);
    func_0x00010b12592c(auStack_b8);
    func_0x00010b135810();
    do {
      func_0x00010b1343d0();
    } while( true );
  }
  return;
}



/* Entry: 10b11844c; end: 10b11844f;  */

void FUN_10b11844c(long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  long *param_6,int param_7,undefined8 param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  long **pplVar4;
  undefined8 uVar5;
  long **pplVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  long *plVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long **extraout_x8_01;
  long **extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  long extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w12;
  int extraout_w12_00;
  undefined8 uVar17;
  undefined8 in_stack_00000050;
  long in_stack_00000060;
  long *in_stack_00000068;
  undefined1 auStack_550 [384];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined **ppuStack_378;
  undefined8 uStack_370;
  long lStack_368;
  uint uStack_2f8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d0 [80];
  undefined8 *puStack_280;
  long lStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  long *plStack_150;
  undefined8 *puStack_148;
  undefined1 auStack_138 [24];
  long *plStack_120;
  undefined8 *puStack_118;
  long *plStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_d0 [96];
  long *plStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  long lStack_28;
  long lStack_20;
  undefined8 *puStack_18;
  undefined8 uStack_10;
  
  uVar16 = (undefined4)((ulong)param_8 >> 0x20);
  iVar14 = (int)param_8;
  uVar12 = (undefined4)((ulong)param_4 >> 0x20);
  uVar10 = (uint)param_4;
  func_0x00010b134cf8();
  lVar7 = CONCAT44(uVar16,iVar14);
  uVar5 = CONCAT44(uVar12,uVar10);
  plVar9 = param_3;
  plVar13 = param_6;
  func_0x00010b133e8c();
  plVar2 = (long *)*plVar13;
  puStack_118 = (undefined8 *)plVar13[1];
  plStack_120 = plVar2;
  uStack_10 = extraout_x8;
  if (puStack_118 != (undefined8 *)0x0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
    plVar2 = (long *)*param_6;
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(&plStack_110);
    func_0x00010b1350c4(uStack_100._7_1_);
    if (extraout_x8_00 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_110);
    }
    else {
      func_0x00010b1364f8(*param_6);
      (*extraout_x9)(&plStack_70);
      in_ZR = uStack_60._7_1_ == 0;
      puVar8 = puStack_68;
      if (-1 < uStack_60) {
        puVar8 = (undefined8 *)(ulong)uStack_60._7_1_;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_70);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_110);
      if (puVar8 != (undefined8 *)0x0) {
        uVar3 = (ulong)*(uint *)(param_2 + 0x18);
        func_0x00010b20b440(uVar3);
        func_0x000107c278b8(auStack_138,uVar3);
        (**(code **)(*(long *)*param_6 + 0x70))(&plStack_110);
        func_0x00010b136168();
        func_0x00010727f9a8(&plStack_70,auStack_d0);
        pplVar4 = &plStack_70;
        func_0x000107c278d0(pplVar4,auStack_138);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_70);
        func_0x0001052bb09c(&plStack_110);
        if (((ulong)pplVar4 & 1) == 0) {
          FUN_10b1185c8(&plStack_110);
          FUN_10b20513c(&plStack_110,param_6);
          pplVar4 = &plStack_110;
          func_0x00010b1185d0();
          plVar2 = pplVar4[1];
          if (((ulong)plVar2 & 1) != 0) {
            plVar2 = *(long **)((ulong)plVar2 & 0xfffffffffffffffe);
          }
          func_0x000107c30248(pplVar4 + 3,auStack_138,plVar2);
          FUN_10b12b260(&lStack_28,1);
          puStack_18[2] = 0;
          *puStack_18 = &PTR_FUN_110cbd7d0;
          puStack_18[1] = 0;
          plStack_70 = (long *)0x0;
          puStack_68 = (undefined8 *)0x0;
          uStack_60 = 0;
          FUN_10b2111c0(puStack_18 + 3,&plStack_110,&plStack_70);
          func_0x000107c278a8(&plStack_70);
          puStack_148 = puStack_18;
          puStack_18 = (undefined8 *)0x0;
          plStack_150 = puStack_148 + 3;
          func_0x00010b12b2d8(&lStack_28);
          puVar8 = puStack_148;
          plVar2 = plStack_150;
          plStack_150 = (long *)0x0;
          puStack_148 = (undefined8 *)0x0;
          puStack_68 = puStack_118;
          plStack_70 = plStack_120;
          puStack_118 = puVar8;
          plStack_120 = plVar2;
          func_0x0001052ac684(&plStack_70);
          FUN_10b12b2e8(&plStack_150);
          uVar17 = **(undefined8 **)(param_1 + 0x18);
          FUN_10b12983c(&plStack_70,*(undefined4 *)(param_2 + 0x18));
          func_0x00010b134904(&lStack_28,&plStack_70);
          func_0x00010b134528(uVar17,0x40,&lStack_28);
          func_0x00010b134d78();
          func_0x00010b134618(&plStack_70);
          FUN_10b2514b4(&plStack_110);
        }
        func_0x00010b135970();
        puStack_68 = (undefined8 *)0x0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_40 = 0;
        uStack_38 = (undefined1)param_7;
        if (*(char *)(in_stack_00000060 + 0x18) == '\x01') {
          FUN_10b114b98(&plStack_70);
          func_0x00010b135430(*(undefined8 *)(in_stack_00000060 + 8));
          if ((uVar10 & 1) != 0) {
            func_0x00010b135424();
          }
          func_0x00010b13506c();
        }
        FUN_10b118220(&plStack_110);
        func_0x00010b1185e0(&plStack_110);
        FUN_10b20513c();
        pplVar4 = &plStack_110;
        if (((ulong)ppuStack_108 & 1) != 0) {
          func_0x00010b13615c();
          pplVar4 = extraout_x8_01;
        }
        func_0x000107c30248(pplVar4 + 6,param_3);
        pplVar4 = &plStack_110;
        if (((ulong)ppuStack_108 & 1) != 0) {
          func_0x00010b13615c();
          pplVar4 = extraout_x8_02;
        }
        func_0x000107c30248(pplVar4 + 7,uVar5);
        in_ZR = *(char *)(lVar7 + 0x18) == '\x01';
        if ((bool)in_ZR) {
          FUN_10b118238(&plStack_110);
          func_0x00010b135430(*(undefined8 *)(lVar7 + 8));
          if ((uVar10 & 1) != 0) {
            func_0x00010b135424();
          }
          func_0x00010b13506c();
        }
        if (param_7 == 0) {
          iVar15 = 1;
        }
        else {
          uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
          FUN_10b20ec9c(uVar5,*(undefined4 *)(param_2 + 0x18));
          in_ZR = (int)uVar5 == 0;
          iVar15 = 1;
          if ((bool)in_ZR) {
            iVar15 = 2;
          }
        }
        func_0x00010b1364d8();
        FUN_10b189390(*(undefined8 *)(param_1 + 0x28));
        func_0x00010b135408();
        func_0x00010b1351c8(iVar15 + 0x48);
        func_0x00010b135534();
        FUN_10b121eac();
        pplVar4 = &plStack_70;
        func_0x00010b121ec4(iVar15 + 0x128);
        func_0x00010b136130();
        func_0x00010b13534c();
        FUN_10b118278();
        FUN_10b1213b8(auStack_2d0);
        FUN_10b24f5cc(&plStack_110);
        FUN_10b24fff8(&plStack_70);
        func_0x00010b13547c();
        goto LAB_10b117e50;
      }
    }
  }
  func_0x00010b135940();
  FUN_10b1ff1d0(&plStack_70);
  uStack_100 = *in_stack_00000068;
  lStack_20 = in_stack_00000068[1];
  lStack_f8 = 0;
  in_stack_00000068 = plVar9;
  lStack_28 = uStack_100;
  if (lStack_20 != 0) {
    do {
      func_0x00010b133f68();
      lStack_f8 = extraout_x8_03;
      uStack_100 = extraout_x9_00;
    } while (extraout_w12 != 0);
  }
  plStack_110 = (long *)0x10b12b228;
  ppuStack_108 = &PTR_DAT_110cbcda0;
  if (lStack_f8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b1346b0();
  pplVar4 = &plStack_110;
  (*extraout_x8_04)();
  func_0x00010b133ea8(ppuStack_108);
  func_0x00010b0f7ee8(&lStack_28);
  FUN_10b127ebc(&plStack_70);
LAB_10b117e50:
  func_0x0001052ac684(&plStack_120);
  func_0x00010b133dfc(uStack_10);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10b24f5cc(&plStack_110);
    FUN_10b24fff8(&plStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    pplVar6 = &plStack_120;
    func_0x0001052ac684();
    func_0x00010b1343d0();
    func_0x00010b134cf8(FUN_10b117f78);
    puStack_280 = &stack0x00000050;
    func_0x00010b133e8c();
    uVar1 = *in_stack_00000068 == in_stack_00000068[1];
    uStack_2e0 = extraout_x8_05;
    if ((bool)uVar1) {
      func_0x00010b135940();
      FUN_10b1ff1d0(&uStack_3d0);
      uStack_370 = *puStack_260;
      lStack_388 = puStack_260[1];
      lStack_368 = 0;
      uStack_390 = uStack_370;
      if (lStack_388 != 0) {
        do {
          func_0x00010b133f68();
          lStack_368 = extraout_x8_08;
          uStack_370 = extraout_x9_01;
        } while (extraout_w12_00 != 0);
      }
      uStack_380 = 0x10b12ab74;
      ppuStack_378 = &PTR_DAT_110cbcd58;
      if (lStack_368 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_01 != 0);
      }
      func_0x00010b1346b0();
      (*extraout_x8_09)();
      func_0x00010b133ea8(ppuStack_378);
      func_0x00010b0f7ee8(&uStack_390);
      FUN_10b127ebc(&uStack_3d0);
    }
    else {
      uVar11 = uVar10;
      iVar15 = iVar14;
      func_0x00010b135970();
      uStack_3c8 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_3a0 = 0;
      uStack_398 = (undefined1)iVar15;
      if (*(char *)(lStack_268 + 0x18) == '\x01') {
        FUN_10b114b98(&uStack_3d0);
        func_0x00010b135430(*(undefined8 *)(lStack_268 + 8));
        if ((uVar11 & 1) != 0) {
          func_0x00010b135424();
        }
        func_0x00010b13506c();
      }
      FUN_10b118220(&uStack_380);
      func_0x00010b118228();
      func_0x00010b135430(in_stack_00000068[1]);
      if ((uVar11 & 1) != 0) {
        func_0x00010b135424();
      }
      func_0x00010b13506c();
      puVar8 = &uStack_380;
      uStack_2f8 = uVar10;
      if (((ulong)ppuStack_378 & 1) != 0) {
        func_0x00010b13615c();
        puVar8 = extraout_x8_06;
      }
      func_0x000107c30248(puVar8 + 6,param_5);
      puVar8 = &uStack_380;
      if (((ulong)ppuStack_378 & 1) != 0) {
        func_0x00010b13615c();
        puVar8 = extraout_x8_07;
      }
      func_0x000107c30248(puVar8 + 7,plVar13);
      uVar1 = *(char *)(lStack_270 + 0x18) == '\x01';
      if ((bool)uVar1) {
        FUN_10b118238(&uStack_380);
        func_0x00010b135430(*(undefined8 *)(lStack_270 + 8));
        if ((uVar11 & 1) != 0) {
          func_0x00010b135424();
        }
        func_0x00010b13506c();
      }
      if (iVar14 == 0) {
        iVar14 = 1;
      }
      else {
        lVar7 = pplVar6[3][2];
        FUN_10b20ec9c(lVar7,*(undefined4 *)(pplVar4 + 3));
        uVar1 = (int)lVar7 == 0;
        iVar14 = 1;
        if ((bool)uVar1) {
          iVar14 = 2;
        }
      }
      func_0x00010b1364d8();
      FUN_10b189390(pplVar6[5]);
      func_0x00010b135408();
      func_0x00010b1351c8(iVar14 + 0x48);
      func_0x00010b135534();
      FUN_10b121eac();
      func_0x00010b121ec4(iVar14 + 0x128,&uStack_3d0);
      func_0x00010b136130();
      func_0x00010b13534c();
      FUN_10b118278();
      FUN_10b1213b8(auStack_550);
      FUN_10b24f5cc(&uStack_380);
      FUN_10b24fff8(&uStack_3d0);
    }
    func_0x00010b133dfc(uStack_2e0);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      FUN_10b24f5cc(&uStack_380);
      puVar8 = &uStack_3d0;
      FUN_10b24fff8();
      func_0x00010b1343d0();
      *puVar8 = &PTR_FUN_110ccada8;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = &DAT_11383d918;
      puVar8[7] = &DAT_11383d918;
      puVar8[8] = &DAT_11383d918;
      puVar8[9] = &DAT_11383d918;
      puVar8[0xb] = 0;
      puVar8[10] = 0;
      puVar8[0xd] = 0;
      puVar8[0xc] = 0;
      puVar8[0xf] = 0;
      puVar8[0xe] = 0;
      puVar8[0x11] = 0;
      puVar8[0x10] = 0;
      *(undefined8 *)((long)puVar8 + 0x94) = 0;
      *(undefined8 *)((long)puVar8 + 0x8c) = 0;
      return;
    }
  }
  return;
}



/* Entry: 10b118450; end: 10b118483;  */

undefined8 FUN_10b118450(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b0f7ee8(param_1 + 0x1b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x198);
  FUN_10b1213b8(param_1 + 0x10);
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b118484; end: 10b1185c7;  */

void FUN_10b118484(long param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  long extraout_x8;
  long *unaff_x19;
  long lStack_a8;
  undefined8 uStack_90;
  undefined **ppuStack_60;
  undefined8 uStack_38;
  
  func_0x00010b13421c();
  func_0x00010b133e24();
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x10);
  FUN_10b20ecb0();
  if ((int)plVar1 == 0) {
    func_0x00010b1359e0();
    func_0x00010b134eac();
    func_0x00010b1347c0(*(undefined8 *)(lStack_a8 + 0x10));
    in_ZR = extraout_x8 == *plVar1;
    if (!(bool)in_ZR) {
      func_0x00010b134a6c();
      ppuStack_60 = &PTR_FUN_110cbd580;
      func_0x00010b134ad0();
      func_0x00010b134344();
      func_0x00010b135d54();
      goto LAB_10b118550;
    }
    (*(code *)*unaff_x19)();
  }
  else {
    (*(code *)*unaff_x19)();
    if ((int)unaff_x19 == 0) goto LAB_10b118574;
    func_0x00010b1359e0();
    func_0x00010b134eac();
    func_0x00010b134a6c();
    ppuStack_60 = &PTR_FUN_110cbd568;
    func_0x00010b134ad0();
    func_0x00010b134344();
    func_0x00010b135d54();
    plVar1 = unaff_x19;
LAB_10b118550:
    func_0x00010b133eec(ppuStack_60);
    func_0x00010b133eb4(uStack_90);
    unaff_x19 = plVar1;
  }
  func_0x00010b134928();
LAB_10b118574:
  func_0x00010b133dfc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b134928();
  func_0x00010b1343d0();
  *unaff_x19 = (long)&PTR_FUN_110ccb1e8;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  unaff_x19[3] = 0;
  unaff_x19[4] = 0;
  unaff_x19[5] = 0;
  unaff_x19[6] = 0;
  unaff_x19[7] = 0;
  unaff_x19[8] = 0;
  unaff_x19[9] = (long)&DAT_11383d918;
  unaff_x19[10] = (long)&DAT_11383d918;
  unaff_x19[0xb] = (long)&DAT_11383d918;
  unaff_x19[0xc] = 0;
  unaff_x19[0xd] = 0;
  *(undefined2 *)(unaff_x19 + 0xe) = 0;
  return;
}



/* Entry: 10b1185c8; end: 10b1185ef;  */

void FUN_10b1185c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ccb1e8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = &DAT_11383d918;
  param_1[10] = &DAT_11383d918;
  param_1[0xb] = &DAT_11383d918;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  return;
}



/* Entry: 10b1185f0; end: 10b11873f;  */

void FUN_10b1185f0(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long in_register_00005008;
  undefined1 auStack_f0 [48];
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_48;
  
  func_0x00010b1354e8();
  func_0x00010b133e38();
  func_0x00010b135e60();
  func_0x00010b135940();
  func_0x00010b1ff218(auStack_a0);
  func_0x00010b13644c(uStack_88);
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b135fa8();
  func_0x00010b13537c();
  uStack_c0 = param_1;
  lStack_b8 = in_register_00005008;
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  pcStack_78 = FUN_10b12b30c;
  ppuStack_70 = &PTR_FUN_110cbcdb8;
  lStack_b0 = param_2;
  func_0x00010b135780();
  func_0x00010b134634();
  func_0x00010b135f8c();
  *(long *)(param_2 + 0x38) = lStack_b8;
  *(undefined8 *)(param_2 + 0x30) = uStack_c0;
  if (lStack_b8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(param_2 + 0x40) = lStack_b0;
  lStack_68 = param_2;
  func_0x00010b135828();
  func_0x00010b133eb4(ppuStack_70);
  FUN_10b118740(auStack_f0);
  func_0x00010b1298c4(auStack_a0);
  func_0x00010b134f38();
  func_0x00010b133dfc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133eb4(ppuStack_70);
    FUN_10b118740(auStack_f0);
    func_0x00010b1298c4(auStack_a0);
    func_0x00010b134f38();
    do {
      func_0x00010b1343d0();
    } while( true );
  }
  return;
}



/* Entry: 10b118740; end: 10b118763;  */

long FUN_10b118740(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b135038();
  func_0x00010b0f7ee8();
  func_0x00010b134b74();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b118764; end: 10b118927;  */

void FUN_10b118764(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined1 auStack_670 [744];
  undefined1 auStack_388 [632];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [64];
  undefined1 *puStack_c0;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 *puStack_68;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uVar8 = param_4;
  func_0x00010b133e10();
  *param_1 = param_5;
  param_1[1] = param_6;
  uStack_48 = extraout_x8;
  if (param_6 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b1ff1d0(&uStack_110,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30),param_3);
  uVar7 = (undefined4)param_3;
  FUN_10b12b4a0(auStack_78,1);
  puVar4 = puStack_68;
  uVar3 = uStack_108;
  uVar2 = uStack_110;
  puStack_68[2] = 0;
  *puStack_68 = &PTR_FUN_110cbdab0;
  puStack_68[1] = 0;
  uStack_88 = uStack_110;
  uStack_80 = uStack_108;
  uStack_110 = 0;
  uStack_108 = 0;
  FUN_10b121fd0(auStack_100,param_4);
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = uVar2;
  puVar4[6] = uVar3;
  uStack_88 = 0;
  uStack_80 = 0;
  FUN_10b12b510(auStack_60,1);
  puStack_50[2] = 0;
  *puStack_50 = &PTR_FUN_110cbd780;
  puStack_50[1] = 0;
  FUN_10b0fafd4(puStack_50 + 3,auStack_100);
  puVar6 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  puVar4[7] = puVar6 + 3;
  puVar4[8] = puVar6;
  FUN_10b12b5b0(auStack_60);
  *(undefined1 *)(puVar4 + 9) = 0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[10] = 0;
  *(undefined4 *)(puVar4 + 0xd) = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0x32aaaba7;
  puVar4[0x13] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x16] = 0;
  puVar4[0x18] = 0;
  func_0x00010529fe04(auStack_100);
  func_0x000107c27c20(&uStack_88);
  puVar6 = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  FUN_10b12b488(unaff_x19 + 0x10,puVar6 + 3);
  FUN_10b12b850(auStack_78);
  func_0x00010b135884();
  func_0x00010b133dfc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c27c20(puVar4 + 5);
    FUN_10b12b5c0(puVar4 + 3);
    func_0x00010529fe04(auStack_100);
    func_0x000107c27c20(&uStack_88);
    __ZNSt3__119__shared_weak_countD2Ev(puVar4);
    FUN_10b12b850(auStack_78);
    func_0x00010b135884();
    func_0x00010b0f7f0c();
    func_0x00010b1358ac();
    func_0x00010b134cf8(FUN_10b118928);
    lVar5 = 0x750;
    puStack_c0 = &stack0xfffffffffffffff0;
    __Znwm(0x750);
    func_0x00010b13640c();
    FUN_10b121c1c(auStack_388,uVar8);
    uVar1 = *param_7;
    FUN_10b1238dc(auStack_670,uStack_b0);
    FUN_10b1375cc(lVar5 + 0x18,puVar6,auStack_388,param_5,param_6,uVar1,param_8,auStack_670,uVar7,
                  uStack_a8);
    func_0x00010b0faf64(auStack_670);
    func_0x00010b121af0(auStack_388);
    FUN_10b12b884(unaff_x19,lVar5 + 0x18,lVar5);
    return;
  }
  return;
}



/* Entry: 10b118928; end: 10b118a0f;  */

void FUN_10b118928(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 in_stack_00000060;
  undefined1 in_stack_00000068;
  undefined1 auStack_560 [744];
  undefined1 auStack_278 [632];
  
  func_0x00010b134cf8();
  lVar2 = 0x750;
  __Znwm(0x750);
  func_0x00010b13640c();
  FUN_10b121c1c(auStack_278,param_4);
  uVar1 = *param_7;
  FUN_10b1238dc(auStack_560,in_stack_00000060);
  FUN_10b1375cc(lVar2 + 0x18,param_2,auStack_278,param_5,param_6,uVar1,param_8,auStack_560,param_3,
                in_stack_00000068);
  func_0x00010b0faf64(auStack_560);
  func_0x00010b121af0(auStack_278);
  FUN_10b12b884(param_1,lVar2 + 0x18,lVar2);
  return;
}



/* Entry: 10b118a10; end: 10b1195f3;  */

void FUN_10b118a10(undefined8 param_1,long param_2,ulong *param_3,code *****param_4,long *param_5,
                  long *param_6,undefined8 *param_7,int param_8)

{
  undefined1 uVar1;
  code **ppcVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  code *****pppppcVar5;
  undefined8 *puVar6;
  code *****pppppcVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined *extraout_x8_01;
  code *****extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  code *****extraout_x9;
  ulong extraout_x9_00;
  code *extraout_x9_01;
  code *extraout_x9_02;
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
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  ulong extraout_x12;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  code ****ppppcVar13;
  code *****pppppcVar14;
  undefined8 in_register_00005008;
  undefined8 uVar15;
  code ***pppcStack_e28;
  undefined **ppuStack_e20;
  code ***pppcStack_e18;
  undefined **ppuStack_e10;
  undefined1 auStack_e08 [752];
  undefined1 auStack_b18 [64];
  char cStack_ad8;
  undefined1 auStack_ad0 [64];
  undefined1 uStack_a90;
  code *apcStack_a88 [3];
  undefined1 auStack_a70 [632];
  ulong uStack_7f8;
  ulong uStack_7f0;
  code ****ppppcStack_7e8;
  undefined1 auStack_7e0 [16];
  code ***pppcStack_7d0;
  undefined **ppuStack_7c8;
  long lStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  code ***pppcStack_7a0;
  undefined **ppuStack_798;
  undefined8 uStack_788;
  undefined1 auStack_780 [16];
  code *pcStack_770;
  undefined **ppuStack_768;
  code *pcStack_760;
  long lStack_758;
  code ****ppppcStack_750;
  code *pcStack_740;
  undefined **ppuStack_738;
  code *pcStack_730;
  long lStack_728;
  ulong uStack_720;
  code ****ppppcStack_710;
  undefined **ppuStack_708;
  code ****ppppcStack_700;
  long lStack_6f8;
  code ****ppppcStack_6f0;
  undefined1 auStack_6e0 [704];
  undefined8 uStack_420;
  undefined1 auStack_418 [40];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  code ****ppppcStack_3e0;
  code ***pppcStack_3d8;
  undefined **ppuStack_3d0;
  long lStack_3c8;
  code ****ppppcStack_3c0;
  code ****ppppcStack_3b8;
  code ***pppcStack_3b0;
  long alStack_3a8 [5];
  code *pcStack_380;
  undefined **ppuStack_378;
  code ****ppppcStack_370;
  code ****ppppcStack_368;
  code ****ppppcStack_360;
  undefined2 uStack_358;
  undefined8 uStack_354;
  undefined4 uStack_34c;
  undefined1 uStack_348;
  undefined8 uStack_38;
  undefined8 uStack_20;
  undefined8 uStack_10;
  
  func_0x00010b134cf8();
  puVar9 = param_3;
  func_0x00010b133e8c();
  uStack_10 = extraout_x8;
  FUN_10b1a23e0(auStack_a70,*puVar9);
  func_0x00010b135664();
  ppcVar2 = apcStack_a88;
  func_0x000107c278b8();
  if ((*(byte *)(param_5 + 0x5d) & 1) == 0) {
    puVar3 = auStack_a70;
    FUN_10b1c41c0();
    if (puVar3 == (undefined1 *)0x0) {
      auStack_ad0[0] = 0;
      uStack_a90 = 0;
      func_0x00010b1195f4(&pcStack_380,auStack_ad0);
    }
    else {
      FUN_10b20752c(&pcStack_380,puVar3);
    }
    func_0x00010b119678(param_5,&pcStack_380);
    ppcVar2 = &pcStack_380;
    func_0x00010b0faf64();
    if (puVar3 == (undefined1 *)0x0) {
      ppcVar2 = (code **)auStack_ad0;
      func_0x0001052a038c();
    }
  }
  func_0x000107c316c4();
  if ((*(byte *)(param_5 + 4) & 1) == 0) {
    *(undefined1 *)(param_5 + 4) = 1;
  }
  *param_5 = (long)ppcVar2;
  param_5[1] = 0;
  param_5[2] = 0;
  *(undefined4 *)(param_5 + 3) = 0;
  func_0x00010b207c58(auStack_b18);
  uVar1 = cStack_ad8 == '\x01';
  if ((bool)uVar1) {
    FUN_10b19ce28(&pcStack_380,*param_3);
    uVar12 = (ulong)pcStack_380 & 0xffffffff;
    func_0x00010529fe04(&pcStack_380);
    puVar3 = auStack_b18;
    FUN_10b207d14(puVar3,*(undefined4 *)(*param_3 + 0x370),uVar12,*(undefined4 *)(*param_3 + 0x374))
    ;
    if ((int)puVar3 == 0) goto LAB_10b118b98;
    uVar10 = **(undefined8 **)(param_2 + 0x18);
    func_0x000107c278b8(&pcStack_380,&UNK_10f72f5c9);
    FUN_10b20bd54(uVar10,&pcStack_380);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_380);
    FUN_10b207d6c(&pcStack_380);
    func_0x0001056419c0(param_5 + 0x4f,&pcStack_380);
    ppcVar2 = &pcStack_380;
    func_0x0001052a03ac();
    func_0x000107c316c4();
    param_5[1] = (long)ppcVar2;
    FUN_10b1a1ae8(*param_3,param_4);
    pcStack_380 = (code *)0x0;
    func_0x00010b135290();
LAB_10b118fe4:
    func_0x00010b12b970(&pcStack_380);
    goto LAB_10b11939c;
  }
LAB_10b118b98:
  uVar1 = *(char *)(*param_3 + 0x469) == '\x01';
  if ((bool)uVar1) {
    FUN_10b12255c(auStack_e08,param_5);
    pppcStack_3b0 = (code ***)*param_7;
    (**(code **)(param_7[1] + 0x10))(alStack_3a8,param_7 + 1);
    lVar11 = *(long *)(param_2 + 0x18);
    FUN_10b1a2b7c(auStack_7e0,*param_3,param_4);
    ppppcStack_710 = (code ****)pppcStack_3b0;
    (**(code **)(alStack_3a8[0] + 0x10))(&ppuStack_708,alStack_3a8);
    FUN_10b12255c(auStack_6e0,auStack_e08);
    func_0x00010b135194();
    uStack_3f0 = param_1;
    uStack_3e8 = in_register_00005008;
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    pppcStack_3d8 = *(code ****)(lVar11 + 0x10);
    ppuStack_3d0 = *(undefined ***)(lVar11 + 0x18);
    ppppcStack_3e0 = (code ****)param_4;
    if (ppuStack_3d0 != (undefined **)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b136390();
    func_0x0001052a5474(&pcStack_380,auStack_7e0,auStack_780);
    func_0x0001052a549c(&uStack_7f8,&pcStack_380);
    func_0x0001052a55c0(&pcStack_380);
    func_0x0001052a55c0(auStack_780);
    func_0x000107c27b48(&uStack_788);
    func_0x000107c27b4c(&pppcStack_7a0,uStack_788);
    FUN_10b1233e4(&pcStack_380,&ppppcStack_710);
    uStack_38 = uStack_788;
    uStack_788 = 0;
    lStack_7a8 = 0;
    lStack_7b0 = 0;
    lStack_7c0 = uStack_7f8 + 0x80;
    lStack_7b8 = CONCAT71(lStack_7b8._1_7_,1);
    __ZNSt3__15mutex4lockEv();
    uVar12 = uStack_7f8;
    func_0x0001052a54c0();
    if ((int)uVar12 == 0) {
      puVar6 = (undefined8 *)0x358;
      __Znwm();
      *puVar6 = &PTR_SUB_110cbc660;
      FUN_10b1233e4(puVar6 + 1,&pcStack_380);
      uVar10 = uStack_38;
      uStack_38 = 0;
      puVar6[0x6a] = uVar10;
      lVar11 = *(long *)(uStack_7f8 + 200);
      *(undefined8 **)(uStack_7f8 + 200) = puVar6;
      if (lVar11 != 0) {
        func_0x00010b133ecc();
      }
    }
    else {
      func_0x0001052a549c(&lStack_7b0,&uStack_7f8);
    }
    func_0x00010b135680();
    if (lStack_7b0 != 0) {
      lStack_7c0 = lStack_7b0;
      lStack_7b8 = lStack_7a8;
      if (lStack_7a8 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_02 != 0);
      }
      FUN_10b123474(&pcStack_380);
      func_0x0001052a55c0(&lStack_7c0);
    }
    ppuStack_7c8 = ppuStack_798;
    pppcStack_7d0 = pppcStack_7a0;
    ppuStack_798 = (undefined **)0x0;
    pppcStack_7a0 = (code ***)0x0;
    func_0x0001052a55c0(&lStack_7b0);
    ppcVar2 = &pcStack_380;
    FUN_10b123668();
    func_0x00010b135670();
    func_0x00010b136384();
    if (ppcVar2 != (code **)0x0) {
      func_0x00010b133ecc();
    }
    func_0x0001052a55c0(&uStack_7f8);
    func_0x000107c27b58(&pppcStack_7d0);
    FUN_10b1233ac(&ppppcStack_710);
    func_0x0001052a55c0(auStack_7e0);
    if (*param_6 != 0) {
      ppppcStack_370 = (code ****)*param_3;
      ppuStack_708 = (undefined **)param_3[1];
      ppppcStack_368 = (code ****)0x0;
      ppppcStack_710 = ppppcStack_370;
      if (ppuStack_708 != (undefined **)0x0) {
        do {
          func_0x00010b133f68();
          ppppcStack_368 = (code ****)extraout_x8_02;
          ppppcStack_370 = (code ****)extraout_x9;
        } while (extraout_w12 != 0);
      }
      pcStack_380 = FUN_10b123718;
      ppuStack_378 = &PTR_DAT_110cbc690;
      ppppcStack_700 = (code ****)param_4;
      if ((code *****)ppppcStack_368 != (code *****)0x0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_03 != 0);
      }
      ppppcStack_360 = (code ****)param_4;
      FUN_10b210574();
      func_0x00010b133eec(ppuStack_378);
      func_0x00010b129c40(&ppppcStack_710);
      uVar12 = *param_3;
      uStack_7f0 = param_3[1];
      lStack_6f8 = 0;
      uStack_7f8 = uVar12;
      if (uStack_7f0 != 0) {
        do {
          func_0x00010b133f68();
          lStack_6f8 = extraout_x8_03;
          uVar12 = extraout_x9_00;
        } while (extraout_w12_00 != 0);
      }
      ppppcStack_710 = (code ****)FUN_10b12375c;
      ppuStack_708 = &PTR_FUN_110cbc6a8;
      ppppcStack_7e8 = (code ****)param_4;
      ppppcStack_700 = (code ****)uVar12;
      if (lStack_6f8 != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10_04 != 0);
      }
      ppppcStack_6f0 = (code ****)param_4;
      FUN_10b2104a8();
      func_0x00010b133eec(ppuStack_708);
      func_0x00010b129c40(&uStack_7f8);
    }
    func_0x00010b133f10(alStack_3a8[0]);
    FUN_10b122590(auStack_e08);
    goto LAB_10b11939c;
  }
  puVar3 = auStack_a70;
  FUN_10b1c41c0();
  if (puVar3 == (undefined1 *)0x0) {
    FUN_10b20bea8(**(undefined8 **)(param_2 + 0x18),&UNK_10f72f5de,0x15);
    pcStack_380 = (code *)0x0;
    func_0x00010b135290();
    goto LAB_10b118fe4;
  }
  ppuVar4 = (undefined **)0xe0;
  __Znwm();
  ppuVar4[1] = (undefined *)0x0;
  ppuVar4[2] = (undefined *)0x0;
  *ppuVar4 = (undefined *)&PTR_FUN_110cbce30;
  pppcStack_7d0 = (code ***)(ppuVar4 + 3);
  *pppcStack_7d0 = (code **)&PTR_FUN_110cc2630;
  uVar10 = 0;
  uVar15 = 0;
  ppuVar4[0xf] = (undefined *)0x0;
  ppuVar4[0xe] = (undefined *)0x0;
  ppuVar4[0x11] = (undefined *)0x0;
  ppuVar4[0x10] = (undefined *)0x0;
  ppuVar4[0x13] = (undefined *)0x0;
  ppuVar4[0x12] = (undefined *)0x0;
  ppuVar4[0x15] = (undefined *)0x0;
  ppuVar4[0x14] = (undefined *)0x0;
  ppuVar4[0x17] = (undefined *)0x0;
  ppuVar4[0x16] = (undefined *)0x0;
  ppuVar4[0x19] = (undefined *)0x0;
  ppuVar4[0x18] = (undefined *)0x0;
  ppuVar4[0x1b] = (undefined *)0x0;
  ppuVar4[0x1a] = (undefined *)0x0;
  ppuVar4[6] = (undefined *)0x32aaaba7;
  ppuVar4[8] = (undefined *)0x0;
  ppuVar4[7] = (undefined *)0x0;
  ppuVar4[10] = (undefined *)0x0;
  ppuVar4[9] = (undefined *)0x0;
  ppuVar4[0xc] = (undefined *)0x0;
  ppuVar4[0xb] = (undefined *)0x0;
  *(undefined8 *)((long)ppuVar4 + 0x69) = 0;
  *(undefined8 *)((long)ppuVar4 + 0x61) = 0;
  ppuVar4[0x14] = (undefined *)0x0;
  ppuVar4[0x15] = (undefined *)0x0;
  *(undefined1 *)(ppuVar4 + 0x16) = 0;
  ppuStack_7c8 = ppuVar4;
  ppppcStack_710 = (code ****)pppcStack_7d0;
  ppuStack_708 = ppuVar4;
  do {
    func_0x00010b133f58();
  } while (extraout_w11 != 0);
  do {
    func_0x00010b133f58();
  } while (extraout_w11_00 != 0);
  ppuStack_378 = (undefined **)0x0;
  pcStack_380 = (code *)0x0;
  ppuVar4[4] = extraout_x8_01;
  ppuVar4[5] = (undefined *)ppuVar4;
  func_0x00010b12b9d0(&pcStack_380);
  pppppcVar5 = &ppppcStack_710;
  func_0x00010b12b9f4();
  pcStack_380 = (code *)((ulong)pcStack_380 & 0xffffffffffffff00);
  uStack_348 = 0;
  func_0x00010b1356f4();
  uVar12 = *param_3;
  if (param_8 == 0) {
    pppcStack_e28 = pppcStack_7d0;
    ppuStack_e20 = ppuStack_7c8;
    if (ppuStack_7c8 != (undefined **)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_05 != 0);
    }
    ppppcVar13 = &pppcStack_e28;
    FUN_10b19d3a4();
  }
  else {
    pppcStack_e18 = pppcStack_7d0;
    ppuStack_e10 = ppuStack_7c8;
    if (ppuStack_7c8 != (undefined **)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_01 != 0);
    }
    ppppcVar13 = &pppcStack_e18;
    FUN_10b19de70();
  }
  FUN_10b0fb81c(ppppcVar13);
  ppuVar4 = (undefined **)(*(long *)(*(long *)(param_2 + 0x18) + 0x10) + 0x38);
  func_0x00010b2018e4(ppuVar4,&PTR_DAT_110cbd630);
  pppppcVar7 = (code *****)(*(long *)(*(long *)(param_2 + 0x18) + 0x10) + 0x38);
  func_0x00010b2018e4(pppppcVar7,&PTR_DAT_110cbd618);
  if ((long)ppuVar4 < 1) {
    uVar1 = (long)pppppcVar7 < 1 || pppppcVar5 == pppppcVar7;
    pppppcVar14 = pppppcVar5;
    if ((long)pppppcVar7 >= 1 && (long)pppppcVar7 < (long)pppppcVar5) goto LAB_10b119084;
  }
  else {
    if ((long)pppppcVar7 < 1) {
      pppppcVar7 = pppppcVar5;
    }
LAB_10b119084:
    pcStack_380 = (code *)((ulong)pcStack_380 & 0xffffffffffffff00);
    ppppcStack_370 = (code ****)0x1;
    ppppcStack_360 = (code ****)0x1;
    uStack_358 = 0;
    uStack_354 = 0;
    uStack_34c = 0;
    uStack_348 = 1;
    ppuStack_378 = ppuVar4;
    ppppcStack_368 = (code ****)pppppcVar7;
    func_0x00010b1356f4();
    uVar1 = pppppcVar7 == pppppcVar5;
    pppppcVar14 = pppppcVar7;
    if ((long)pppppcVar5 <= (long)pppppcVar7) {
      pppppcVar14 = pppppcVar5;
    }
  }
  FUN_10b199bb4(auStack_7e0,pppcStack_7d0,pppppcVar14);
  FUN_10b12255c(&ppppcStack_710,param_5);
  uStack_420 = *param_7;
  (**(code **)(param_7[1] + 0x10))(auStack_418,param_7 + 1);
  func_0x00010b135194();
  uStack_3f0 = uVar10;
  uStack_3e8 = uVar15;
  if (extraout_x8_04 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_06 != 0);
  }
  pppcStack_3d8 = pppcStack_7d0;
  ppuStack_3d0 = ppuStack_7c8;
  ppppcStack_3e0 = (code ****)pppppcVar5;
  if (ppuStack_7c8 != (undefined **)0x0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_07 != 0);
  }
  lStack_3c8 = param_2;
  ppppcStack_3c0 = (code ****)pppppcVar14;
  ppppcStack_3b8 = (code ****)param_4;
  func_0x00010b136390();
  FUN_10b1225b0(&pcStack_380,auStack_7e0,auStack_780);
  FUN_10b1225dc(&uStack_7f8,&pcStack_380);
  func_0x00010b122d08(&pcStack_380);
  func_0x00010b122d08(auStack_780);
  func_0x000107c27b48(&uStack_788);
  func_0x000107c27b4c(&pppcStack_7a0,uStack_788);
  func_0x00010b122600(&pcStack_380,&ppppcStack_710);
  uStack_20 = uStack_788;
  uStack_788 = 0;
  lStack_7a8 = 0;
  lStack_7b0 = 0;
  lStack_7c0 = uStack_7f8 + 0x40;
  lStack_7b8 = CONCAT71(lStack_7b8._1_7_,1);
  __ZNSt3__15mutex4lockEv();
  uVar8 = uStack_7f8;
  func_0x00010b12268c();
  if ((int)uVar8 == 0) {
    puVar6 = (undefined8 *)0x370;
    __Znwm();
    *puVar6 = &PTR_SUB_110cbc598;
    func_0x00010b122600(puVar6 + 1,&pcStack_380);
    uVar10 = uStack_20;
    uStack_20 = 0;
    puVar6[0x6d] = uVar10;
    lVar11 = *(long *)(uStack_7f8 + 0x88);
    *(undefined8 **)(uStack_7f8 + 0x88) = puVar6;
    if (lVar11 != 0) {
      func_0x00010b133ecc();
    }
  }
  else {
    FUN_10b1225dc(&lStack_7b0,&uStack_7f8);
  }
  func_0x00010b135680();
  if (lStack_7b0 != 0) {
    lStack_7c0 = lStack_7b0;
    lStack_7b8 = lStack_7a8;
    if (lStack_7a8 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_08 != 0);
    }
    FUN_10b1226cc(&pcStack_380);
    func_0x00010b122d08(&lStack_7c0);
  }
  ppuStack_798 = (undefined **)0x0;
  pppcStack_7a0 = (code ***)0x0;
  func_0x00010b122d08(&lStack_7b0);
  ppcVar2 = &pcStack_380;
  func_0x00010b122ce0();
  func_0x00010b135670();
  func_0x00010b136384();
  if (ppcVar2 != (code **)0x0) {
    func_0x00010b133ecc();
  }
  func_0x00010b122d08(&uStack_7f8);
  func_0x00010b1348ac();
  FUN_10b119704(&ppppcStack_710);
  if (*param_6 != 0) {
    pcStack_730 = (code *)*param_3;
    ppuStack_378 = (undefined **)param_3[1];
    lStack_728 = 0;
    pcStack_380 = pcStack_730;
    if (ppuStack_378 != (undefined **)0x0) {
      do {
        func_0x00010b133f68();
        lStack_728 = extraout_x8_05;
        pcStack_730 = extraout_x9_01;
      } while (extraout_w12_01 != 0);
    }
    pcStack_740 = FUN_10b12ba4c;
    ppuStack_738 = &PTR_DAT_110cbce70;
    ppppcStack_370 = (code ****)uVar12;
    if (lStack_728 != 0) {
      do {
        func_0x00010b134088();
        uVar12 = extraout_x12;
      } while (extraout_w10_09 != 0);
    }
    uStack_720 = uVar12;
    FUN_10b210574();
    func_0x00010b133eec(ppuStack_738);
    func_0x00010b135ed0();
    pcStack_760 = (code *)*param_3;
    ppuStack_378 = (undefined **)param_3[1];
    lStack_758 = 0;
    pcStack_380 = pcStack_760;
    if (ppuStack_378 != (undefined **)0x0) {
      do {
        func_0x00010b133f68();
        lStack_758 = extraout_x8_06;
        pcStack_760 = extraout_x9_02;
      } while (extraout_w12_02 != 0);
    }
    pcStack_770 = FUN_10b12ba90;
    ppuStack_768 = &PTR_FUN_110cbce88;
    ppppcStack_370 = (code ****)param_4;
    if (lStack_758 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_10 != 0);
    }
    ppppcStack_750 = (code ****)param_4;
    FUN_10b2104a8();
    func_0x00010b133ea8(ppuStack_768);
    func_0x00010b135ed0();
  }
  func_0x00010b122d08(auStack_7e0);
  func_0x00010b12b9f4(&pppcStack_7d0);
LAB_10b11939c:
  FUN_10b12338c(auStack_b18);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apcStack_a88);
  func_0x00010b121af0(auStack_a70);
  func_0x00010b133dfc(uStack_10);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b135680();
  func_0x00010b122d08(&lStack_7b0);
  ppcVar2 = &pcStack_380;
  func_0x00010b122ce0();
  func_0x00010b135670();
  func_0x00010b136384();
  if (ppcVar2 != (code **)0x0) {
    func_0x00010b133ecc();
  }
  func_0x00010b122d08(&uStack_7f8);
  FUN_10b119704(&ppppcStack_710);
  func_0x00010b122d08(auStack_7e0);
  func_0x00010b12b9f4(&pppcStack_7d0);
  FUN_10b12338c(auStack_b18);
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apcStack_a88);
    func_0x00010b121af0(auStack_a70);
    func_0x00010b1343d0();
  } while( true );
}



/* Entry: 10b1195f4; end: 10b1196ab;  */

void FUN_10b1195f4(undefined8 param_1)

{
  undefined1 auStack_2f8 [24];
  undefined1 uStack_2e0;
  undefined1 auStack_2d8 [72];
  undefined1 auStack_290 [552];
  undefined1 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 uStack_50;
  undefined1 auStack_48 [32];
  undefined1 uStack_28;
  
  auStack_48[0] = 0;
  uStack_28 = 0;
  auStack_60[0] = 0;
  uStack_50 = 0;
  auStack_290[0] = 0;
  uStack_68 = 0;
  func_0x0001052a07e8(auStack_2d8);
  auStack_2f8[0] = 0;
  uStack_2e0 = 0;
  FUN_10b0fbb80(param_1,auStack_48,auStack_60,auStack_290,0,auStack_2d8,auStack_2f8,0,0);
  func_0x00010b134e84();
  func_0x0001052a038c(auStack_2d8);
  func_0x00010539dd5c(auStack_290);
  return;
}



/* Entry: 10b1196ac; end: 10b119703;  */

void FUN_10b1196ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 uStack_28;
  
  pcVar1 = (code *)*param_1;
  uStack_28 = *param_4;
  *param_4 = 0;
  (*pcVar1)(param_2,param_3,&uStack_28,param_1);
  func_0x00010b12b970(&uStack_28);
  return;
}



/* Entry: 10b119704; end: 10b119743;  */

void FUN_10b119704(long param_1)

{
  func_0x00010b12b9f4(param_1 + 0x338);
  func_0x00010b129c40(param_1 + 800);
  (*(code *)**(undefined8 **)(param_1 + 0x2f8))(param_1 + 0x2f8);
  if (*(char *)(param_1 + 0x2e8) == '\x01') {
    func_0x00010b0faf64();
  }
  return;
}



/* Entry: 10b119744; end: 10b119b73;  */

void FUN_10b119744(ulong param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined1 **ppuVar3;
  undefined1 extraout_w8;
  undefined1 *extraout_x8;
  int iVar4;
  long unaff_x21;
  int iVar5;
  undefined1 *puStack_2f0;
  ushort uStack_2e8;
  undefined1 auStack_2c8 [8];
  ushort uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_278 [24];
  int iStack_260;
  undefined8 **ppuStack_258;
  ulong uStack_250;
  byte bStack_241;
  long lStack_230;
  byte bStack_220;
  long lStack_1f8;
  byte bStack_1f0;
  
  func_0x00010b136578();
  ppuVar3 = &puStack_2f0;
  func_0x00010b134b60();
  uVar1 = param_1;
  func_0x000107c278d0();
  if ((uVar1 & 1) == 0) {
    if (*(char *)(param_1 + 0x58) == '\x01') {
      iVar5 = *(int *)(param_1 + 0x18);
      plVar2 = (long *)*(long *)(param_1 + 0x20);
      uVar1 = *(ulong *)(param_1 + 0x28);
      if (-1 < (char)*(byte *)(param_1 + 0x37)) {
        plVar2 = (long *)(param_1 + 0x20);
        uVar1 = (ulong)*(byte *)(param_1 + 0x37);
      }
    }
    else {
      iVar5 = 5;
      plVar2 = (long *)0;
      uVar1 = 0;
    }
    func_0x00010b135c10(auStack_2c8);
    FUN_10b1f69e0(auStack_278);
    func_0x00010b121e00(auStack_2c8);
    iVar4 = 0;
    if ((((bStack_220 == 1) && ((bStack_1f0 & 1) != 0)) && (lStack_1f8 == 0)) &&
       ((iVar4 = 0, lStack_230 == 0 && (iStack_260 == iVar5)))) {
      if (-1 < (char)bStack_241) {
        uStack_250 = (ulong)bStack_241;
        ppuStack_258 = &ppuStack_258;
      }
      func_0x000107c27944(plVar2,uVar1,ppuStack_258,uStack_250);
      iVar4 = (int)plVar2;
    }
    uStack_2c0 = uStack_2c0 & 0xfe00;
    uStack_2b0 = 0;
    uStack_2a8 = 0;
    uStack_2b8 = 0;
    func_0x0001098f3160(&puStack_2f0,&UNK_10f72f5f4);
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    uStack_2e8 = uStack_2e8 & 0xfe00 | 5;
    func_0x00010b134a1c();
    puStack_2f0 = (undefined1 *)CONCAT71(puStack_2f0._1_7_,(char)iVar4);
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    func_0x0001098f3160(&puStack_2f0,(&PTR_DAT_110cbc6c0)[iVar5]);
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    func_0x00010b1350c4(*(undefined1 *)(unaff_x21 + 0x17));
    uStack_2e8 = 2;
    func_0x00010b134a1c();
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    func_0x00010b1350c4(*(undefined1 *)(param_1 + 0x17));
    uStack_2e8 = 2;
    func_0x00010b134a1c();
    puStack_2f0 = extraout_x8;
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    uStack_2e8 = 5;
    func_0x00010b134a1c(((bStack_220 | bStack_1f0) ^ 0xff) & 1);
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    func_0x00010b1340b4(bStack_220);
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    func_0x00010b1362e0(bStack_220);
    func_0x00010b1340b4();
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    func_0x00010b1340b4(bStack_1f0);
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    func_0x00010b1362e0(bStack_1f0);
    func_0x00010b1340b4();
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    func_0x00010b1340b4(*(undefined1 *)(param_1 + 0x58));
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    func_0x00010b1362e0(*(undefined1 *)(param_1 + 0x58));
    func_0x00010b1340b4();
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    func_0x00010b1340b4(*(undefined1 *)(param_1 + 0x88));
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    func_0x00010b1362e0(*(undefined1 *)(param_1 + 0x88));
    uStack_2e8 = 5;
    func_0x00010b134a1c();
    puStack_2f0 = (undefined1 *)CONCAT71(puStack_2f0._1_7_,extraout_w8);
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    func_0x000107c316c4();
    uStack_2e8 = 2;
    func_0x00010b134a1c();
    puStack_2f0 = (undefined1 *)ppuVar3;
    func_0x00010b134680();
    func_0x00010b134688();
    func_0x00010b134670();
    if (iVar4 != 0) {
      FUN_10b1151e4(param_1,auStack_278);
    }
    func_0x000107c2ad70(auStack_2c8);
    func_0x00010b121af0(auStack_278);
  }
  return;
}



/* Entry: 10b119b74; end: 10b119def;  */

void FUN_10b119b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined1 auStack_1a0 [32];
  undefined1 auStack_178 [120];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 *puStack_58;
  code *pcStack_38;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  undefined8 uStack_8;
  
  func_0x00010b134cf8();
  func_0x00010b134b60();
  func_0x00010b133e10();
  uStack_8 = extraout_x8;
  __ZNSt3__16chrono12steady_clock3nowEv();
  func_0x00010b206f0c(auStack_80);
  FUN_10b210424(param_6[2]);
  FUN_10b127af8(&uStack_90,*(undefined8 *)(unaff_x21 + 8),*(undefined8 *)(unaff_x21 + 0x10));
  uStack_1c8 = param_6[1];
  uStack_1d0 = *param_6;
  uStack_1b8 = param_6[3];
  uStack_1c0 = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_6[3] = 0;
  lStack_1a8 = lStack_88;
  uStack_1b0 = uStack_90;
  if (lStack_88 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b13600c(auStack_1a0);
  FUN_10b121fd0(auStack_178,param_4);
  uStack_f8 = param_5[1];
  uStack_100 = *param_5;
  uStack_e8 = param_5[3];
  uStack_f0 = param_5[2];
  uStack_e0 = param_5[4];
  uStack_b8 = unaff_x19[1];
  uStack_c0 = *unaff_x19;
  uStack_d8 = (undefined1)param_5[5];
  uStack_cf = (undefined7)*(undefined8 *)((long)param_5 + 0x31);
  uStack_c8 = (undefined1)((ulong)*(undefined8 *)((long)param_5 + 0x31) >> 0x38);
  uStack_d7 = (undefined7)*(undefined8 *)((long)param_5 + 0x29);
  uStack_d0 = (undefined1)((ulong)*(undefined8 *)((long)param_5 + 0x29) >> 0x38);
  if (unaff_x19[1] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  uStack_b0 = 0;
  uStack_a0 = 1;
  pcStack_38 = FUN_10b12baf8;
  ppuStack_30 = &PTR_FUN_110cbcf98;
  puVar3 = (undefined8 *)0x138;
  uStack_a8 = param_1;
  __Znwm();
  uVar2 = uStack_1c8;
  uVar1 = uStack_1d0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  puVar3[1] = uVar2;
  *puVar3 = uVar1;
  puVar3[3] = uStack_1b8;
  puVar3[2] = uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puVar3[5] = lStack_1a8;
  puVar3[4] = uStack_1b0;
  uStack_1b0 = 0;
  lStack_1a8 = 0;
  func_0x00010b121ddc(puVar3 + 6,auStack_1a0);
  puVar3[10] = unaff_x21;
  FUN_10b121fd0(puVar3 + 0xb,auStack_178);
  uVar2 = uStack_b8;
  uVar1 = uStack_c0;
  puVar3[0x1b] = uStack_f8;
  puVar3[0x1a] = uStack_100;
  puVar3[0x1d] = uStack_e8;
  puVar3[0x1c] = uStack_f0;
  puVar3[0x1f] = CONCAT71(uStack_d7,uStack_d8);
  puVar3[0x1e] = uStack_e0;
  puVar3[0x21] = CONCAT71(uStack_c7,uStack_c8);
  puVar3[0x20] = CONCAT71(uStack_cf,uStack_d0);
  uStack_c0 = 0;
  uStack_b8 = 0;
  puVar3[0x23] = uVar2;
  puVar3[0x22] = uVar1;
  puVar3[0x25] = uStack_a8;
  puVar3[0x24] = uStack_b0;
  puVar3[0x26] = CONCAT71(uStack_9f,uStack_a0);
  FUN_10b119df0(&uStack_1d0);
  pcStack_68 = FUN_10b12baf8;
  ppuStack_60 = &PTR_FUN_110cbcf98;
  uStack_28 = 0;
  puStack_58 = puVar3;
  FUN_10b119e24(*(undefined8 *)(*(long *)(unaff_x21 + 0x18) + 0x30),
                *(undefined4 *)(unaff_x20 + 0x18),&pcStack_68);
  func_0x00010b13550c();
  func_0x00010b133f10(ppuStack_30);
  func_0x00010b12592c(&uStack_90);
  func_0x00010b135810();
  func_0x00010b133dfc(uStack_8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b13550c();
    func_0x00010b133f10(ppuStack_30);
    func_0x00010b12592c(&uStack_90);
    do {
      func_0x00010539eeb0();
      func_0x00010b135810();
      func_0x00010b1343d8();
    } while( true );
  }
  return;
}



/* Entry: 10b119df0; end: 10b119e23;  */

long FUN_10b119df0(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010539eeb0(param_1 + 0x110);
  func_0x00010b135f78();
  func_0x00010b135c78();
  func_0x00010b135c70();
  func_0x00010b134958(param_1);
  FUN_10b12b860();
  lVar1 = unaff_x19;
  func_0x000107c3503c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b119e24; end: 10b119ef7;  */

void FUN_10b119e24(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,long *param_5,
                  undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined1 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long in_register_00005008;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined1 uStack_1e8;
  long alStack_1e0 [2];
  long lStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [4];
  byte bStack_1bc;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  long lStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long *plStack_58;
  undefined8 uStack_38;
  
  puVar5 = param_4;
  func_0x00010b133e24();
  func_0x00010b134eac();
  func_0x00010b1347c0(*(undefined8 *)(lStack_a8 + 0x10));
  uVar1 = extraout_x8 == *param_2;
  if ((bool)uVar1) {
    func_0x00010b134eb4(*param_4);
  }
  else {
    func_0x00010b134b7c();
    uStack_68 = 0x10b132f40;
    ppuStack_60 = &PTR_FUN_110cbd598;
    func_0x00010b134ad0();
    plVar2 = param_2;
    func_0x00010b134344();
    param_3 = &uStack_68;
    plStack_58 = param_2;
    func_0x00010b135828();
    func_0x00010b133eec(ppuStack_60);
    func_0x00010b133eb4(uStack_90);
    param_2 = plVar2;
  }
  func_0x00010b134928();
  func_0x00010b133dfc(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b134928();
  func_0x00010b1343d0();
  func_0x00010b135664();
  func_0x000107c278b8(auStack_118);
  if (((param_8 & 1) != 0) || (*(int *)((long)puVar5 + 100) == 2)) {
    if (*(char *)((long)puVar5 + 0x17) < '\0') {
      if (puVar5[1] != 0) goto LAB_10b119f64;
    }
    else if (*(char *)((long)puVar5 + 0x17) != '\0') {
LAB_10b119f64:
      if (*param_5 != 0) {
        func_0x00010b1351c8(auStack_130);
        uStack_148 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        FUN_10b11f660(&uStack_148);
        FUN_10b121fd0(auStack_1c0,param_6);
        uVar3 = *(ulong *)(param_3[3] + 0x10);
        FUN_10b11f6a8();
        if ((uVar3 & 1) == 0) {
          bStack_1bc = (byte)param_8 & bStack_1bc;
        }
        lVar4 = param_3[0x18];
        lStack_1c8 = param_3[0x19];
        lStack_1d0 = lVar4;
        if (lStack_1c8 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10 != 0);
        }
        if (lVar4 == 0) {
          func_0x00010b135f24();
          *(undefined1 *)param_2 = 0;
          *(undefined1 *)(param_2 + 3) = 0;
        }
        else {
          FUN_10b1ab1e0(alStack_1e0);
          FUN_10b121fd0(&uStack_260,auStack_1c0);
          uStack_1e8 = 1;
          func_0x00010b13534c();
          FUN_10b1a1a14();
          func_0x00010b134f7c();
          FUN_10b0faf98();
          func_0x00010b1363ec();
          if (extraout_x8_00 != 0) {
            do {
              func_0x00010b134088();
            } while (extraout_w10_00 != 0);
          }
          uStack_258 = 0;
          lStack_250 = alStack_1e0[0];
          param_2[1] = in_register_00005008;
          *param_2 = param_1;
          uStack_260 = 0;
          param_2[2] = alStack_1e0[0];
          *(undefined1 *)(param_2 + 3) = 1;
          func_0x00010b135874();
          func_0x00010b129c40(alStack_1e0);
          func_0x00010b135f24();
        }
        func_0x00010529fe04(auStack_1c0);
        func_0x00010b124c30(&uStack_148);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
        goto LAB_10b11a07c;
      }
    }
  }
  *(undefined1 *)param_2 = 0;
  *(undefined1 *)(param_2 + 3) = 0;
LAB_10b11a07c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  return;
}



/* Entry: 10b119ef8; end: 10b11a0fb;  */

void FUN_10b119ef8(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,long *param_5,
                  undefined8 param_6,undefined8 param_7,byte param_8)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 in_register_00005008;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_138;
  undefined8 auStack_130 [2];
  long lStack_120;
  long lStack_118;
  undefined1 auStack_110 [4];
  byte bStack_10c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x00010b135664();
  func_0x000107c278b8(auStack_68);
  if (((param_8 & 1) != 0) || (*(int *)(param_4 + 100) == 2)) {
    if (*(char *)(param_4 + 0x17) < '\0') {
      if (*(long *)(param_4 + 8) != 0) goto LAB_10b119f64;
    }
    else if (*(char *)(param_4 + 0x17) != '\0') {
LAB_10b119f64:
      if (*param_5 != 0) {
        func_0x00010b1351c8(auStack_80);
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_88 = 0;
        FUN_10b11f660(&uStack_98);
        FUN_10b121fd0(auStack_110,param_6);
        uVar1 = *(ulong *)(*(long *)(param_3 + 0x18) + 0x10);
        FUN_10b11f6a8();
        if ((uVar1 & 1) == 0) {
          bStack_10c = param_8 & bStack_10c;
        }
        lVar2 = *(long *)(param_3 + 0xc0);
        lStack_118 = *(long *)(param_3 + 200);
        lStack_120 = lVar2;
        if (lStack_118 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10 != 0);
        }
        if (lVar2 == 0) {
          func_0x00010b135f24();
          *(undefined1 *)param_2 = 0;
          *(undefined1 *)(param_2 + 3) = 0;
        }
        else {
          FUN_10b1ab1e0(auStack_130);
          FUN_10b121fd0(&uStack_1b0,auStack_110);
          uStack_138 = 1;
          func_0x00010b13534c();
          FUN_10b1a1a14();
          func_0x00010b134f7c();
          FUN_10b0faf98();
          func_0x00010b1363ec();
          if (extraout_x8 != 0) {
            do {
              func_0x00010b134088();
            } while (extraout_w10_00 != 0);
          }
          uStack_1a8 = 0;
          uStack_1a0 = auStack_130[0];
          param_2[1] = in_register_00005008;
          *param_2 = param_1;
          uStack_1b0 = 0;
          param_2[2] = auStack_130[0];
          *(undefined1 *)(param_2 + 3) = 1;
          func_0x00010b135874();
          func_0x00010b129c40(auStack_130);
          func_0x00010b135f24();
        }
        func_0x00010529fe04(auStack_110);
        func_0x00010b124c30(&uStack_98);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
        goto LAB_10b11a07c;
      }
    }
  }
  *(undefined1 *)param_2 = 0;
  *(undefined1 *)(param_2 + 3) = 0;
LAB_10b11a07c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  return;
}



/* Entry: 10b11a0fc; end: 10b11a16b;  */

void FUN_10b11a0fc(void)

{
  func_0x00010b135038();
  FUN_10b1237f0();
  func_0x00010b135c70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b11a16c; end: 10b11a177;  */

uint FUN_10b11a16c(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined **ppuStack_28;
  
  uVar1 = 0;
  param_1 = param_1 + 0x38;
  ppuStack_28 = &PTR_DAT_110cbd690;
  FUN_10b201f80(param_1,&ppuStack_28);
  if (param_1 == 0) {
    func_0x000107c2be10(&PTR_DAT_110cbd690);
  }
  else {
    pbVar2 = (byte *)(param_1 + 0x18);
    func_0x000107c29b34();
    uVar1 = (uint)*pbVar2;
  }
  return uVar1 & 1;
}



/* Entry: 10b11a178; end: 10b11a1b3;  */

undefined8 * FUN_10b11a178(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  uVar1 = *param_2;
  *param_2 = 0;
  uStack_28 = *param_1;
  *param_1 = uVar1;
  func_0x00010b12b970(&uStack_28);
  return param_1;
}



/* Entry: 10b11a1b4; end: 10b11a41f;  */

void FUN_10b11a1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long unaff_x22;
  undefined1 auStack_948 [744];
  undefined1 auStack_660 [632];
  undefined1 auStack_3e8 [744];
  undefined1 auStack_100 [24];
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char cStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_68 [72];
  undefined1 auStack_20 [16];
  long lStack_10;
  
  func_0x00010b134cf8();
  func_0x00010b1354e8();
  func_0x00010b135664();
  func_0x000107c278b8(auStack_100);
  func_0x000107c278b8(auStack_3e8,&UNK_10f72f81e);
  uVar1 = *(undefined4 *)(param_4 + 0x18);
  uVar2 = *(undefined4 *)(param_4 + 0x50);
  func_0x000107c28148(param_6);
  FUN_10b11ba74(**(undefined8 **)(unaff_x22 + 0x18),1,0,auStack_3e8,uVar1,uVar2,param_6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3e8);
  lVar3 = param_4;
  FUN_10b1c41c0();
  FUN_10b117280(auStack_20,unaff_x22 + 0x58);
  FUN_10b12abac(lStack_10,param_4);
  if ((lStack_10 == 0) || (*(char *)(lStack_10 + 0x328) != '\x01')) {
    if (lVar3 == 0) {
      func_0x00010b135c08();
      func_0x000107474460(&uStack_e8,&UNK_10f72fec3);
      uStack_a0 = uStack_b8;
      uStack_a8 = uStack_c0;
      uStack_b0 = uStack_c8;
      uStack_b8 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_98 = 1;
      uStack_90 = uStack_90 & 0xffffffffffffff00;
      uStack_78 = cStack_d0 == '\x01';
      if ((bool)uStack_78) {
        uStack_88 = uStack_e0;
        uStack_90 = uStack_e8;
        uStack_80 = uStack_d8;
        uStack_d8 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
      }
      func_0x0001052b8c70(auStack_68,&uStack_b0);
      FUN_10b1195f4(auStack_3e8,auStack_68);
      func_0x0001052a038c(auStack_68);
      func_0x0001052a03ac(&uStack_b0);
      func_0x000107c279a4(&uStack_e8);
      func_0x00010b13543c();
    }
    else {
      FUN_10b20752c(auStack_3e8,lVar3);
    }
  }
  else {
    FUN_10b123f60(auStack_3e8,lStack_10 + 0x40);
  }
  func_0x000107c2798c(auStack_20);
  FUN_10b121c1c(auStack_660,param_4);
  FUN_10b1238dc(auStack_948,auStack_3e8);
  FUN_10b11bc00(param_1);
  func_0x00010b134610();
  func_0x00010b135bf8();
  func_0x00010b0faf64(auStack_3e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  return;
}



/* Entry: 10b11a420; end: 10b11b36f;  */

undefined8 *****
FUN_10b11a420(undefined8 param_1,undefined8 param_2,undefined8 *****param_3,undefined8 param_4,
             undefined8 *****param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *****pppppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *****pppppuVar11;
  bool bVar12;
  undefined4 extraout_w8;
  undefined4 extraout_w8_00;
  undefined4 uVar13;
  undefined4 extraout_w8_01;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 ****extraout_x8_01;
  undefined4 extraout_w9;
  undefined4 extraout_w9_00;
  undefined4 extraout_w9_01;
  long *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  undefined8 *unaff_x19;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ***pppuVar16;
  uint uVar17;
  undefined8 in_register_00005008;
  undefined8 in_stack_00000050;
  undefined **ppuStack_c38;
  undefined8 ****ppppuStack_c30;
  undefined8 ****ppppuStack_c28;
  undefined8 *puStack_c20;
  code *pcStack_c18;
  undefined8 ****ppppuStack_c10;
  ulong uStack_c08;
  undefined8 ****ppppuStack_c00;
  ulong uStack_bf8;
  undefined8 **ppuStack_bf0;
  undefined8 uStack_be8;
  undefined1 auStack_be0 [632];
  undefined8 ***pppuStack_968;
  undefined8 ***pppuStack_960;
  undefined8 ****ppppuStack_950;
  undefined8 ****ppppuStack_948;
  undefined8 ****ppppuStack_940;
  undefined8 ****ppppuStack_938;
  long lStack_930;
  long lStack_928;
  undefined1 uStack_8d8;
  undefined1 auStack_8d0 [96];
  undefined4 uStack_870;
  int iStack_86c;
  long lStack_868;
  char cStack_848;
  undefined1 auStack_708 [176];
  undefined8 ****ppppuStack_658;
  undefined8 ****ppppuStack_650;
  long lStack_648;
  undefined1 auStack_600 [16];
  undefined1 auStack_5f0 [24];
  undefined8 ****ppppuStack_5d8;
  undefined8 ***pppuStack_5d0;
  ulong uStack_5c8;
  uint uStack_5c0;
  char cStack_5bc;
  undefined1 uStack_5a0;
  undefined1 auStack_588 [8];
  byte bStack_580;
  undefined1 auStack_578 [40];
  char cStack_550;
  undefined8 ****ppppuStack_360;
  undefined **ppuStack_358;
  ulong uStack_340;
  undefined8 ****ppppuStack_330;
  undefined8 ***pppuStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined1 uStack_318;
  undefined7 uStack_317;
  ulong uStack_310;
  undefined1 auStack_308 [48];
  byte bStack_2d8;
  undefined1 uStack_30;
  undefined4 uStack_28;
  char cStack_18;
  undefined8 uStack_10;
  
  func_0x00010b134cf8();
  pppppuVar7 = param_3;
  func_0x00010b133e10();
  pppppuVar7 = (undefined8 *****)pppppuVar7[3][2];
  uStack_10 = extraout_x8;
  FUN_10b11b370();
  if ((int)pppppuVar7 == 0) {
    if (((ulong)param_5[0x11] & 1) == 0) goto LAB_10b11a790;
    if (*(char *)(param_5 + 0xb) != '\x01' || 0 < (long)param_5[9]) {
      pppppuVar7 = param_3;
      FUN_10b11b37c(param_3,param_5,&UNK_10f72f7b2,0xc);
      in_ZR = 1;
      if ((int)pppppuVar7 == 3) goto LAB_10b11a790;
    }
    bVar2 = *(byte *)(param_5 + 0x38);
    ppppuVar14 = param_5[0x10];
    in_ZR = *(int *)((long)param_5 + 100) == 2;
    if (((bool)in_ZR) && (pppppuVar7 = param_5, FUN_10b1c4c0c(), (int)pppppuVar7 != 0)) {
      func_0x00010b134dc8();
      FUN_10b20bea8();
      func_0x00010b1346cc(&ppppuStack_330);
      pppppuVar7 = (undefined8 *****)CONCAT44(uStack_31c,uStack_320);
      func_0x00010b135c58();
LAB_10b11a700:
      uVar13 = 3;
    }
    else {
      pppppuVar7 = param_5;
      FUN_10b1c4d48();
      if (((ulong)pppppuVar7 & 1) != 0) {
        func_0x00010b1350c4(*(undefined1 *)((long)param_5 + 0x17));
        if (((extraout_x8_00 == 0) || (((ulong)param_5[0x11] & 1) == 0)) ||
           (*(int *)((long)param_5 + 100) == 0)) goto LAB_10b11a790;
        pppppuVar7 = param_5;
        FUN_10b11b654();
        if ((int)pppppuVar7 != 0) {
          pppuVar16 = *param_3[3];
          func_0x00010b1348b4(*(undefined1 *)(param_5 + 0xb));
          uVar13 = extraout_w9_00;
          if ((bool)in_ZR) {
            uVar13 = extraout_w8_00;
          }
          FUN_10b11b69c(param_5);
          func_0x00010b1360d8(pppuVar16,&UNK_10f72f7dd,0x15,uVar13,&UNK_10f72f7f3);
          func_0x00010b1346cc(&ppppuStack_330);
          pppppuVar7 = (undefined8 *****)CONCAT44(uStack_31c,uStack_320);
          func_0x00010b135c58();
          goto LAB_10b11a700;
        }
        pppuVar16 = param_3[3][2];
        func_0x00010b11b6f0();
        uVar17 = (uint)pppuVar16;
        pppuStack_968 = (undefined8 ****)0x0;
        func_0x00010b1346cc(&ppppuStack_330);
        lVar10 = CONCAT44(uStack_31c,uStack_320);
        FUN_10b12abac(lVar10,param_5);
        if (lVar10 == 0) {
          uStack_5c8 = uStack_5c8 & 0xffffffff00000000;
          uStack_5c0 = uStack_5c0 & 0xffffff00;
          pppppuVar7 = (undefined8 *****)0x0;
        }
        else {
          pppppuVar7 = &ppppuStack_5d8;
          func_0x00010b11f9ec(pppppuVar7,lVar10 + 0x28);
          uStack_5c0 = *(uint *)(lVar10 + 0x330);
        }
        cStack_5bc = lVar10 != 0;
        func_0x00010b135bd8();
        func_0x00010b134bd4();
        func_0x00010b13611c(auStack_8d0);
        func_0x00010b1342ec();
        in_ZR = (int)uStack_5c8 == 2;
        if ((bool)in_ZR) {
          pppppuVar7 = (undefined8 *****)ppppuStack_5d8;
          if ((undefined8 *****)ppppuStack_5d8 == (undefined8 *****)0x0) {
LAB_10b11ada8:
            uVar6 = uVar17;
            if ((bVar2 & 1) == 0 && (long)ppppuVar14 < 1) {
              bVar12 = false;
              goto LAB_10b11af08;
            }
LAB_10b11adac:
            uVar17 = uVar6;
            in_ZR = cStack_5bc == '\x01';
            if ((((bool)in_ZR) && (uStack_5c0 == 0)) && (((ulong)param_5[0x11] & 1) != 0)) {
              in_ZR = param_5[0x10] == (undefined8 ****)0x0;
              bVar12 = !(bool)in_ZR;
              goto LAB_10b11af08;
            }
          }
          else {
            func_0x00010b19d06c();
            ppppuVar15 = ppppuStack_5d8;
            if ((int)pppppuVar7 == 0) {
              if (((ulong)pppuVar16 & 1) != 0) goto LAB_10b11ade4;
              uVar17 = 0;
              bVar12 = false;
              uVar6 = 0;
              if ((bVar2 & 1) != 0 || 0 < (long)ppppuVar14) goto LAB_10b11adac;
              goto LAB_10b11af08;
            }
            ppppuStack_938 = ppppuStack_5d8;
            lStack_930 = (long)pppuStack_5d0;
            if (pppuStack_5d0 == (undefined8 ***)0x0) {
              lStack_648 = 0;
LAB_10b11ae30:
              ppppuStack_330 = ppppuVar15;
              pppuStack_328 = (undefined8 ****)0x0;
              ppppuStack_650 = ppppuStack_330;
            }
            else {
              do {
                func_0x00010b134088();
              } while (extraout_w10_01 != 0);
              ppppuStack_650 = ppppuVar15;
              lStack_648 = lStack_930;
              if (lStack_930 == 0) goto LAB_10b11ae30;
              do {
                func_0x00010b133f58();
              } while (extraout_w11 != 0);
              do {
                cVar3 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(extraout_x9,0x10);
                if (bVar12) {
                  *extraout_x9 = *extraout_x9 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                pppuStack_328 = extraout_x8_01;
              } while (cVar3 != '\0');
            }
            ppppuStack_330 = ppppuVar15;
            func_0x00010b135818();
            func_0x00010b1341d8();
            *(undefined8 *)((long)pppppuVar7 + 0x84) = in_register_00005008;
            *(undefined8 *)((long)pppppuVar7 + 0x7c) = param_1;
            *pppppuVar7 = (undefined8 ****)&PTR_SUB_110cbd098;
            pppppuVar7[1] = (undefined8 ****)0x0;
            pppppuVar7[0x1b] = ppppuVar15;
            pppppuVar7[0x1c] = (undefined8 ****)pppuStack_328;
            if ((undefined8 ****)pppuStack_328 != (undefined8 ****)0x0) {
              do {
                func_0x00010b134088();
              } while (extraout_w10_02 != 0);
            }
            *(undefined4 *)(pppppuVar7 + 0x11) = 8;
            ppppuStack_940 = pppppuVar7;
            ppppuStack_360 = pppppuVar7;
            func_0x000107c2805c();
            FUN_10b12f768(&ppppuStack_360);
            func_0x00010b129c40(&ppppuStack_330);
            func_0x00010b135820();
            ppppuStack_658 = ppppuStack_940;
            ppppuStack_940 = (undefined8 ****)0x0;
            FUN_10b11a178(&pppuStack_968,&ppppuStack_658);
            func_0x00010b12b970(&ppppuStack_658);
            func_0x00010b12ba18(&ppppuStack_940);
            func_0x00010b129c40(&ppppuStack_938);
            FUN_10b1a23e0(&ppppuStack_330,ppppuStack_5d8);
            iVar5 = (int)&ppppuStack_330;
            func_0x00010b135c68();
            if (iVar5 != 0) {
              pppppuVar7 = &ppppuStack_330;
              FUN_10b1c41c0();
              if ((pppppuVar7 != (undefined8 *****)0x0) && ((bStack_2d8 & 1) != 0)) {
                func_0x00010b135bec();
                goto LAB_10b11aef8;
              }
            }
            func_0x00010b135be0();
LAB_10b11aef8:
            pppppuVar7 = &ppppuStack_330;
            func_0x00010b121af0();
            bVar12 = false;
            uVar17 = 0;
LAB_10b11af08:
            uVar6 = (uint)pppppuVar7;
            if (((undefined8 ****)pppuStack_968 == (undefined8 ****)0x0) && (!bVar12)) {
              func_0x00010b1349d4(param_3[3][2]);
              in_ZR = (uVar6 & *(byte *)(param_5 + 0x11)) == 1;
              if (((bool)in_ZR) &&
                 ((((pppppuVar7 = param_5, FUN_10b11b69c(), ((ulong)pppppuVar7 & 1) == 0 &&
                    (pppppuVar7 = param_5, FUN_10b1c41c0(), pppppuVar7 != (undefined8 *****)0x0)) &&
                   (pppppuVar11 = param_5, FUN_10b1c4a58(), ((ulong)pppppuVar11 & 1) == 0)) &&
                  (*(int *)(pppppuVar7 + 4) == 0)))) {
                func_0x00010b134dc8();
                func_0x00010b1348b4(*(undefined1 *)(param_5 + 0xb));
                in_ZR = param_5[0xe] == (undefined8 ****)0x0;
                FUN_10b20c128();
                goto LAB_10b11ade4;
              }
              ppppuVar14 = param_3[3];
              func_0x00010b135c60(auStack_be0);
              func_0x00010b135e98(&ppppuStack_330,ppppuVar14,auStack_be0);
              func_0x00010b135fe8();
              func_0x00010b12b970(&ppppuStack_330);
              func_0x00010b135cf4();
              func_0x00010b135be0();
            }
          }
          func_0x00010b135664();
          func_0x000107c278b8(&ppppuStack_650);
          if ((undefined8 ****)pppuStack_968 == (undefined8 ****)0x0) {
            *unaff_x19 = 0;
            unaff_x19[1] = 0;
          }
          else {
            func_0x00010b1346cc(&ppppuStack_938);
            pppuStack_328 = (undefined8 ****)0x0;
            ppppuStack_330 = (undefined8 *****)0x0;
            uStack_320 = 0;
            uStack_318 = 0;
            uStack_30 = 0;
            uStack_28 = 0;
            lVar10 = lStack_928;
            FUN_10b11b8d0(lStack_928,auStack_8d0,&ppppuStack_330);
            func_0x00010b123ee4(&ppppuStack_330);
            if ((uVar17 == 0) || (*(int *)(lVar10 + 0x330) == 0)) {
              *(undefined4 *)(lVar10 + 0x330) = 0;
              func_0x00010b135bd0();
              func_0x00010b134b9c();
              func_0x00010b135f80();
            }
            else {
              *unaff_x19 = 0;
              unaff_x19[1] = 0;
              func_0x00010b135bd0();
            }
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_650);
        }
        else {
          if ((((uVar17 | (bVar2 | 0 < (long)ppppuVar14)) & 1) == 0) ||
             (in_ZR = (int)uStack_5c8 == 1, !(bool)in_ZR)) goto LAB_10b11ada8;
          func_0x00010b134248(ppppuStack_5d8);
          uVar6 = 0;
          if (!(bool)in_ZR) {
            uVar6 = uVar17;
          }
          if ((uVar6 & 1) == 0) {
            if (!(bool)in_ZR) goto LAB_10b11ada8;
            FUN_10b194f44(&ppppuStack_330,ppppuStack_5d8);
            func_0x00010b135fe8();
            func_0x00010b12b970(&ppppuStack_330);
            FUN_10b11723c(&ppppuStack_330,ppppuStack_5d8);
            func_0x00010b135bec();
            goto LAB_10b11aef8;
          }
LAB_10b11ade4:
          *unaff_x19 = 0;
          unaff_x19[1] = 0;
        }
        func_0x00010b134d58();
        FUN_10b124c64(&ppppuStack_5d8);
        pppppuVar7 = (undefined8 *****)&pppuStack_968;
        func_0x00010b12b970();
        goto LAB_10b11acd4;
      }
      pppuVar16 = *param_3[3];
      FUN_10b12983c(&ppppuStack_330,*(undefined4 *)(param_5 + 3));
      func_0x00010b134ed8();
      func_0x00010b123d58(auStack_308);
      func_0x00010b1346c4(auStack_8d0,&ppppuStack_330);
      func_0x00010b134210(pppuVar16);
      FUN_10b120998(auStack_8d0);
      do {
        func_0x00010b134ec4();
        func_0x00010b13517c();
      } while (!(bool)in_ZR);
      func_0x00010b1346cc(&ppppuStack_330);
      pppppuVar7 = (undefined8 *****)CONCAT44(uStack_31c,uStack_320);
      func_0x00010b135c58();
      uVar13 = 1;
    }
    *(undefined4 *)(pppppuVar7 + 0x61) = uVar13;
    func_0x00010b135bd8();
  }
  else if (((ulong)param_5[0x11] & 1) != 0) {
    in_ZR = param_6 == 0;
    pppppuVar7 = (undefined8 *****)&DAT_10f3193c1;
    if (!(bool)in_ZR) {
      pppppuVar7 = (undefined8 *****)&UNK_10f72f56c;
    }
    uVar1 = 4;
    if (!(bool)in_ZR) {
      uVar1 = 8;
    }
    func_0x00010b135c60(auStack_8d0);
    ppppuStack_938 = (undefined8 ****)((ulong)ppppuStack_938 & 0xffffffffffffff00);
    uStack_8d8 = 0;
    ppppuStack_5d8 = (undefined8 ****)((ulong)ppppuStack_5d8 & 0xffffffffffffff00);
    uStack_5a0 = 0;
    uStack_bf8 = uStack_bf8 & 0xffffffffffffff00;
    ppppuStack_c00 = &ppppuStack_5d8;
    ppppuStack_c10 = pppppuVar7;
    uStack_c08 = uVar1;
    uStack_be8 = param_7;
    FUN_10b115268(&ppppuStack_330,param_3,auStack_8d0,0,param_8,param_4,&ppppuStack_938,1);
    func_0x00010b121ac0(&ppppuStack_938);
    func_0x00010b134d58();
    if ((undefined8 *****)ppppuStack_330 == (undefined8 *****)0x0 &&
        CONCAT44(uStack_31c,uStack_320) == 0) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
    }
    else {
      func_0x00010b1348b4(*(undefined1 *)(param_5 + 0xb));
      uVar13 = extraout_w9;
      if ((bool)in_ZR) {
        uVar13 = extraout_w8;
      }
      ppuStack_bf0 = (undefined8 **)CONCAT44(ppuStack_bf0._4_4_,uVar13);
      ppppuStack_940 = (undefined8 ****)0x0;
      func_0x00010b134bd4();
      func_0x00010b13611c();
      _bzero(auStack_708,0xb0);
      if (CONCAT71(uStack_317,uStack_318) != 0) {
        do {
          func_0x00010b134088();
        } while (extraout_w10 != 0);
      }
      uStack_5c8 = uStack_310;
      ppppuStack_360 = (undefined8 *****)0x10b12f650;
      ppuStack_358 = &PTR_DAT_110cbd028;
      pppuStack_5d0 = (undefined8 ***)0x0;
      ppppuStack_5d8 = (undefined8 *****)0x0;
      uStack_340 = uStack_310;
      func_0x00010b135b8c();
      uVar8 = CONCAT44(uStack_31c,uStack_320);
      if (uVar8 == 0) {
        func_0x00010b134248(ppppuStack_330);
        if ((bool)in_ZR) {
          FUN_10b11723c(&ppppuStack_5d8,ppppuStack_330);
          func_0x00010b134d4c();
          func_0x00010b1353e4();
          in_ZR = 0;
          if (cStack_848 != '\x01') {
LAB_10b11a928:
            pppuVar16 = *param_3[3];
            func_0x00010b13465c();
            func_0x00010b135b84();
            func_0x00010b134ed8();
            func_0x00010b134774();
            func_0x00010b1346c4(&ppppuStack_650,&ppppuStack_5d8);
            func_0x00010b134210(pppuVar16);
            func_0x00010b135024();
            param_3 = (undefined8 *****)0x38;
            do {
              func_0x00010b13501c();
              func_0x00010b135388();
            } while (!(bool)in_ZR);
            goto LAB_10b11acb4;
          }
          in_ZR = iStack_86c == 2;
          if (!(bool)in_ZR) {
            ppppuVar14 = param_3[5];
            FUN_10b202630(&ppppuStack_5d8,auStack_8d0);
            func_0x00010b1f68d0(ppppuVar14,&ppppuStack_5d8,uStack_870);
            func_0x00010b121e00(&ppppuStack_5d8);
            if (((ulong)ppppuVar14 & 1) == 0) goto LAB_10b11a928;
          }
          FUN_10b194f44(&ppppuStack_5d8,ppppuStack_330);
          FUN_10b11a178(&ppppuStack_940,&ppppuStack_5d8);
          func_0x00010b12b970(&ppppuStack_5d8);
LAB_10b11aa68:
          if (ppppuStack_940 != (undefined8 ****)0x0) {
            iVar5 = (int)auStack_8d0;
            FUN_10b1c4c0c();
            if (iVar5 != 0) {
              func_0x00010b1340dc(&ppppuStack_5d8,param_3[5],param_4);
              uVar17 = 0;
              uVar4 = cStack_550 == '\x01';
              if (((bool)uVar4) && ((bStack_580 & 1) != 0)) {
                uVar17 = (uint)&ppppuStack_5d8;
                FUN_10b1c4c0c();
                uVar17 = uVar17 ^ 1;
              }
              ppuStack_bf0 = *param_3[3];
              func_0x00010b13465c();
              uVar13 = extraout_w9_01;
              if ((bool)uVar4) {
                uVar13 = extraout_w8_01;
              }
              FUN_10b12983c(&ppppuStack_650,uVar13);
              func_0x00010b134ed8();
              func_0x00010b134780();
              func_0x00010b123d80(auStack_600,&DAT_10f50666a,9,uVar17);
              func_0x00010b134fbc(&pppuStack_968,&ppppuStack_650);
              func_0x00010b134528(ppuStack_bf0,0x17,&pppuStack_968);
              FUN_10b120998(&pppuStack_968);
              do {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5f0);
                func_0x00010b136440();
              } while (!(bool)uVar4);
              if (uVar17 != 0) {
                func_0x00010b134d4c();
              }
              func_0x00010b1353e4();
            }
            pppuVar16 = *param_3[3];
            func_0x00010b13465c();
            func_0x00010b135b84();
            func_0x00010b134ed8();
            func_0x00010b134780();
            uVar4 = iStack_86c == 2;
            cVar3 = '\0';
            if ((bool)uVar4) {
              cVar3 = cStack_848;
            }
            func_0x00010b123d80(auStack_588,&DAT_10f2f1c38,9,cVar3);
            func_0x00010b134fbc(&ppppuStack_650,&ppppuStack_5d8);
            func_0x00010b134528(pppuVar16,0x17,&ppppuStack_650);
            func_0x00010b135024();
            do {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_578);
              func_0x00010b136440();
            } while (!(bool)uVar4);
            in_ZR = cStack_18 == '\x01';
            if ((bool)in_ZR) {
              pppuVar16 = *param_3[3];
              func_0x00010b13465c();
              func_0x00010b135b84();
              func_0x00010b134ed8();
              func_0x00010b134780();
              func_0x00010b123dbc(auStack_588,&DAT_10f2dda10,6,pppppuVar7,uVar1);
              func_0x00010b134fbc(&ppppuStack_650,&ppppuStack_5d8);
              func_0x00010b134210(pppuVar16);
              func_0x00010b135024();
              do {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_578);
                func_0x00010b136440();
              } while (!(bool)in_ZR);
            }
            func_0x00010b134b9c();
            func_0x00010b135f80();
            goto LAB_10b11acb8;
          }
          func_0x00010b136504();
          func_0x00010b1354f4();
        }
        else {
          func_0x00010b136504();
          func_0x00010b1354f4();
        }
        ppppuStack_c00 = pppppuVar7;
        uStack_bf8 = uVar1;
        func_0x00010b1345cc();
        func_0x00010b134d44(param_3);
LAB_10b11acb4:
        *unaff_x19 = 0;
        unaff_x19[1] = 0;
      }
      else {
        func_0x00010b19d06c();
        if ((uVar8 & 1) == 0) {
          iVar5 = (int)param_3[3][2];
          FUN_10b11a16c();
          if (iVar5 != 0) {
            uVar9 = CONCAT44(uStack_31c,uStack_320);
            FUN_10b19d0b0(uVar9,param_5);
            if ((int)uVar9 != 0) {
              func_0x00010b134dc8();
              FUN_10b20bf78();
              pppppuVar11 = &ppppuStack_5d8;
              func_0x00010b135c60();
              goto LAB_10b11a5a4;
            }
          }
          func_0x00010b136504();
          func_0x00010b1354f4();
LAB_10b11a880:
          ppppuStack_c00 = pppppuVar7;
          uStack_bf8 = uVar1;
          func_0x00010b1345cc();
          func_0x00010b134d44(param_3);
          goto LAB_10b11acb4;
        }
        pppppuVar11 = (undefined8 *****)CONCAT44(uStack_31c,uStack_320);
        FUN_10b1a23e0(&ppppuStack_5d8);
LAB_10b11a5a4:
        func_0x00010b134d4c();
        func_0x00010b1353e4();
        in_ZR = cStack_848 == '\x01' && iStack_86c == 1;
        if ((cStack_848 == '\x01' && iStack_86c == 1) && (lStack_868 == 0)) {
          func_0x00010b136504();
          func_0x00010b1354f4();
          goto LAB_10b11a880;
        }
        ppppuVar14 = (undefined8 ****)CONCAT44(uStack_31c,uStack_320);
        pppuStack_960 = (undefined8 ***)CONCAT71(uStack_317,uStack_318);
        if ((undefined8 ****)pppuStack_960 == (undefined8 ****)0x0) {
          ppppuVar15 = (undefined8 ****)0x0;
        }
        else {
          do {
            func_0x00010b134088();
            ppppuVar15 = (undefined8 ****)pppuStack_960;
          } while (extraout_w10_00 != 0);
        }
        pppuStack_960 = (undefined8 ***)0x0;
        pppuStack_968 = (undefined8 ****)0x0;
        lStack_648 = 0;
        ppppuStack_650 = (undefined8 *****)0x0;
        pppuStack_5d0 = ppppuVar15;
        func_0x00010b135818();
        func_0x00010b1341d8();
        pppppuVar11[0x10] = (undefined8 ****)0x0;
        *pppppuVar11 = (undefined8 ****)&PTR_SUB_110cbd050;
        pppppuVar11[1] = (undefined8 ****)0x0;
        pppppuVar11[0x1b] = ppppuVar14;
        pppppuVar11[0x1c] = ppppuVar15;
        pppuStack_5d0 = (undefined8 ***)0x0;
        ppppuStack_5d8 = (undefined8 *****)0x0;
        *(undefined4 *)(pppppuVar11 + 0x11) = 8;
        ppppuStack_950 = pppppuVar11;
        ppppuStack_658 = pppppuVar11;
        func_0x000107c2805c();
        FUN_10b12f684(&ppppuStack_658);
        func_0x00010b135b8c();
        func_0x00010b135820();
        ppppuStack_948 = ppppuStack_950;
        ppppuStack_950 = (undefined8 ****)0x0;
        FUN_10b11a178(&ppppuStack_940,&ppppuStack_948);
        func_0x00010b12b970(&ppppuStack_948);
        func_0x00010b12ba18(&ppppuStack_950);
        func_0x00010b129c40(&pppuStack_968);
        func_0x00010b1346cc(&ppppuStack_5d8);
        uVar8 = uStack_5c8;
        FUN_10b129c64(uStack_5c8,auStack_8d0);
        iVar5 = *(int *)(uVar8 + 0x308);
        if (iVar5 == 3) {
          func_0x00010b134dc8();
          FUN_10b20bea8();
          *unaff_x19 = 0;
          unaff_x19[1] = 0;
        }
        else {
          *(undefined4 *)(uVar8 + 0x308) = 0;
        }
        func_0x000107c2798c(&ppppuStack_5d8);
        in_ZR = iVar5 == 3;
        if (!(bool)in_ZR) goto LAB_10b11aa68;
      }
LAB_10b11acb8:
      func_0x000107c281f0(&ppppuStack_360);
      func_0x00010b134d58();
      func_0x00010b12b970(&ppppuStack_940);
    }
    pppppuVar7 = &ppppuStack_330;
    func_0x00010b121a94();
    goto LAB_10b11acd4;
  }
LAB_10b11a790:
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
LAB_10b11acd4:
  func_0x00010b133dfc(uStack_10);
  if ((bool)in_ZR) {
    return pppppuVar7;
  }
  ___stack_chk_fail();
  func_0x00010b121af0(&ppppuStack_330);
  func_0x00010b134d58();
  FUN_10b124c64(&ppppuStack_5d8);
  ppppuVar14 = &pppuStack_968;
  func_0x00010b12b970();
  func_0x00010b1343d0();
  func_0x00010b135830();
  uVar17 = 0;
  ppppuVar14 = ppppuVar14 + 7;
  pcStack_c18 = FUN_10b11b370;
  ppuStack_c38 = &PTR_DAT_110cbdb08;
  ppppuStack_c30 = param_3;
  ppppuStack_c28 = pppppuVar7;
  puStack_c20 = &stack0x00000050;
  FUN_10b201f80(ppppuVar14,&ppuStack_c38);
  if (ppppuVar14 == (undefined8 ****)0x0) {
    func_0x000107c2be10(&PTR_DAT_110cbdb08);
  }
  else {
    ppppuVar14 = ppppuVar14 + 3;
    func_0x000107c29b34();
    uVar17 = (uint)*(byte *)ppppuVar14;
  }
  return (undefined8 *****)(ulong)(uVar17 & 1);
}



/* Entry: 10b11b370; end: 10b11b37b;  */

uint FUN_10b11b370(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined **ppuStack_28;
  
  uVar1 = 0;
  param_1 = param_1 + 0x38;
  ppuStack_28 = &PTR_DAT_110cbdb08;
  FUN_10b201f80(param_1,&ppuStack_28);
  if (param_1 == 0) {
    func_0x000107c2be10(&PTR_DAT_110cbdb08);
  }
  else {
    pbVar2 = (byte *)(param_1 + 0x18);
    func_0x000107c29b34();
    uVar1 = (uint)*pbVar2;
  }
  return uVar1 & 1;
}



/* Entry: 10b11b37c; end: 10b11b653;  */

undefined4 FUN_10b11b37c(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 in_ZR;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined4 extraout_w8;
  long extraout_x8;
  undefined4 extraout_w9;
  undefined4 uVar7;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  byte bVar9;
  long lVar10;
  uint uVar11;
  undefined1 auStack_328 [16];
  long lStack_318;
  uint uStack_20;
  undefined1 auStack_18 [24];
  
  func_0x00010b136578();
  if ((*(byte *)(param_2 + 0x88) & 1) == 0) {
    FUN_10b20bea8(**(undefined8 **)(param_1 + 0x18),&UNK_10f72f9a3,0x11);
    return 3;
  }
  func_0x00010b13448c();
  iVar3 = (int)*(undefined8 *)(extraout_x8 + 0x10);
  FUN_10b11d784();
  if (iVar3 != 0) {
    uVar4 = unaff_x19;
    FUN_10b1c4a78();
    uVar11 = (int)uVar4 - 1;
    in_ZR = uVar11 == 3;
    if (uVar11 < 4) {
      func_0x00010b134dc8();
      FUN_10b20bea8();
      func_0x00010b1348b4(*(undefined1 *)(unaff_x19 + 0x58));
      func_0x00010b134dc8();
      FUN_10b20c200();
      return 3;
    }
  }
  uVar4 = unaff_x19;
  FUN_10b11b654();
  if ((int)uVar4 != 0) {
    uVar8 = **(undefined8 **)(unaff_x20 + 0x18);
    func_0x00010b1348b4(*(undefined1 *)(unaff_x19 + 0x58));
    uVar7 = extraout_w9;
    if ((bool)in_ZR) {
      uVar7 = extraout_w8;
    }
    FUN_10b11b69c();
    func_0x00010b1360d8(uVar8,&UNK_10f72fa17,0x15,uVar7,&UNK_10f72f7f3);
    return 3;
  }
  bVar9 = *(byte *)(unaff_x19 + 0x58);
  lVar10 = *(long *)(unaff_x19 + 0x48);
  func_0x00010b1346cc(auStack_328);
  FUN_10b12abac();
  if (lStack_318 == 0) {
    bVar1 = 0;
    if (lVar10 < 1) {
      bVar1 = bVar9;
    }
    bVar2 = *(byte *)(unaff_x19 + 0x1c0);
    bVar9 = bVar2 ^ 1;
    uVar7 = 3;
    if (bVar2 != 0) {
      uVar7 = 1;
    }
    if (((bVar2 & 1) == 0) && ((bVar1 & 1) == 0)) {
      func_0x00010b134dc8();
      FUN_10b20bea8();
      bVar9 = 0;
      uVar7 = 3;
    }
  }
  else {
    bVar9 = 0;
    uVar7 = *(undefined4 *)(lStack_318 + 0x330);
  }
  func_0x000107c2798c(auStack_328);
  if (bVar9 == 0) {
    return uVar7;
  }
  uVar4 = unaff_x19;
  FUN_10b1c41c0();
  if (uVar4 == 0) {
    if (*(int *)(unaff_x19 + 100) == 2) goto LAB_10b11b5dc;
  }
  else {
    uVar5 = unaff_x19;
    FUN_10b1c4a58();
    if ((uVar5 & 1) == 0) {
LAB_10b11b5dc:
      puVar6 = auStack_18;
      func_0x00010b1346cc();
      func_0x00010b135ae0();
      uStack_20 = (uint)*(byte *)(unaff_x19 + 0x1c0);
      func_0x00010b135cc0();
      goto LAB_10b11b610;
    }
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_10b202630(auStack_328);
  func_0x00010b1f7098(uVar8,auStack_328,*(undefined4 *)(unaff_x19 + 0x60));
  uVar11 = (uint)((int)uVar8 != 1);
  func_0x00010b121e00(auStack_328);
  if ((uVar4 != 0) && ((int)uVar8 != 1)) {
    FUN_10b1c4a58();
    if ((int)unaff_x19 == 0) {
      uVar11 = 1;
    }
    else {
      func_0x00010b134dc8();
      FUN_10b20bea8();
      uVar11 = 3;
    }
  }
  puVar6 = auStack_18;
  func_0x00010b1346cc();
  func_0x00010b135ae0();
  uStack_20 = uVar11;
  func_0x00010b135cc0();
LAB_10b11b610:
  uVar7 = *(undefined4 *)(puVar6 + 0x330);
  func_0x00010b123ee4(auStack_328);
  func_0x000107c2798c(auStack_18);
  return uVar7;
}



/* Entry: 10b11b654; end: 10b11b69b;  */

byte FUN_10b11b654(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x58) == '\x01' && *(int *)(param_1 + 100) == 2) {
    FUN_10b1c4ae8();
    if (param_1 == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x38) ^ 1;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10b11b69c; end: 10b11b6fb;  */

bool FUN_10b11b69c(long param_1)

{
  ulong uVar1;
  
  if ((*(char *)(param_1 + 0x88) == '\x01') && (uVar1 = *(ulong *)(param_1 + 0x70), uVar1 != 0)) {
    if (*(long *)(param_1 + 0x78) - 1U < uVar1) {
      return true;
    }
    if (*(int *)(param_1 + 100) != 2) {
      return *(long *)(param_1 + 0x68) - 1U < uVar1;
    }
  }
  return false;
}


