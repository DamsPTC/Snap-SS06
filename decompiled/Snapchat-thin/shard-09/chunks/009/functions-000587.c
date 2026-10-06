/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072adb08; end: 1072adbaf;  */

void FUN_1072adb08(long param_1)

{
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072adbb0; end: 1072adc23;  */

ulong FUN_1072adbb0(void)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long alStack_40 [2];
  
  func_0x000107289d7c(alStack_40);
  if (alStack_40[0] == 0) {
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    FUN_1072adc24();
    uVar3 = (uint)alStack_40[0] & 0xffffff00;
    uVar1 = (uint)alStack_40[0] & 0xff;
    uVar2 = 0x100000000;
  }
  func_0x000107289dd4(alStack_40);
  return uVar2 | (uVar3 | uVar1);
}



/* Entry: 1072adc24; end: 1072adc63;  */

undefined4 FUN_1072adc24(long param_1)

{
  undefined4 uVar1;
  long alStack_30 [2];
  
  alStack_30[0] = param_1;
  func_0x0001072b01dc();
  FUN_10724e404();
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  FUN_10724e49c(alStack_30);
  return uVar1;
}



/* Entry: 1072adc64; end: 1072adc67;  */

void FUN_1072adc64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110999b98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072adc68; end: 1072adc7b;  */

void FUN_1072adc68(void)

{
  func_0x0001072adc84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072adc7c; end: 1072adc93;  */

void FUN_1072adc7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072af7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072adc94; end: 1072adca7;  */

void FUN_1072adc94(void)

{
  func_0x0001072adcb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072adca8; end: 1072adcc3;  */

undefined8 FUN_1072adca8(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000107366120(param_1 + 0x1c8);
  func_0x000107364f24(param_1 + 0x1a8);
  func_0x000107364f94(param_1 + 0x188);
  func_0x0001073324c4(param_1 + 0x168);
  func_0x0001072ac970(param_1 + 0x150);
  func_0x000107365020(param_1 + 0x128);
  func_0x000107366054(param_1 + 0x100);
  func_0x000107365150(param_1 + 0xe0);
  func_0x000107276ba4(param_1 + 0x38);
  func_0x00010736ad70(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x00010736520c(unaff_x19);
    func_0x00010736a814();
  }
  return unaff_x19;
}



/* Entry: 1072adcc4; end: 1072adcd7;  */

void FUN_1072adcc4(void)

{
  func_0x0001072adce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072adcd8; end: 1072adceb;  */

void FUN_1072adcd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072af7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072adcec; end: 1072add17;  */

undefined8 * FUN_1072adcec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110999c88;
  func_0x0001072a6048(param_1 + 1);
  return param_1;
}



/* Entry: 1072add18; end: 1072add2b;  */

void FUN_1072add18(void)

{
  FUN_1072adcec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072add2c; end: 1072add63;  */

undefined8 FUN_1072add2c(undefined8 param_1)

{
  func_0x0001072b01f0();
  FUN_1072adf00();
  return param_1;
}



/* Entry: 1072add64; end: 1072add87;  */

undefined8 * FUN_1072add64(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110999c88;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = puVar1[5];
  uVar3 = puVar1[4];
  param_2[6] = puVar1[5];
  param_2[5] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_01 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_2 + 7,puVar1 + 6);
  return param_2;
}



/* Entry: 1072add88; end: 1072adecb;  */

void FUN_1072add88(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  uVar1 = *(ulong *)(param_2 + 0x40);
  if (-1 < (char)*(byte *)(param_2 + 0x4f)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x4f);
  }
  if (uVar1 == 0) {
    uStack_40 = uStack_40 & 0xffffffffffffff00;
    cStack_28 = '\0';
  }
  else {
    func_0x0001002a8308(&uStack_40,param_2 + 0x38);
  }
  uStack_48 = *(undefined8 *)(param_2 + 0x10);
  uStack_50 = *(undefined8 *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_60 = *(undefined8 *)(param_2 + 0x18);
  if (*(long *)(param_2 + 0x20) != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_00 != 0);
  }
  uStack_68 = *(undefined8 *)(param_2 + 0x30);
  uStack_70 = *(undefined8 *)(param_2 + 0x28);
  if (*(long *)(param_2 + 0x30) != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_01 != 0);
  }
  uStack_90 = uStack_90 & 0xffffffffffffff00;
  uStack_78 = 0;
  if (cStack_28 == '\x01') {
    uStack_88 = uStack_38;
    uStack_90 = uStack_40;
    uStack_80 = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    func_0x0001072aff04();
  }
  func_0x00010734ba3c(param_1,&uStack_50,&uStack_60,&uStack_70,&uStack_90);
  func_0x0001001148fc(&uStack_90);
  func_0x000100450be4(&uStack_70);
  func_0x0001072ac4dc(&uStack_60);
  func_0x00010726eedc(&uStack_50);
  func_0x0001001148fc(&uStack_40);
  return;
}



/* Entry: 1072adecc; end: 1072adef3;  */

void FUN_1072adecc(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_110999cf8);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072adef4; end: 1072adeff;  */

undefined ** FUN_1072adef4(void)

{
  return &PTR_DAT_110999cf8;
}



/* Entry: 1072adf00; end: 1072adfb7;  */

undefined8 * FUN_1072adf00(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110999c88;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[4] = param_2[3];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_00 != 0);
  }
  lVar1 = param_2[5];
  uVar2 = param_2[4];
  param_1[6] = param_2[5];
  param_1[5] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_01 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 7,param_2 + 6);
  return param_1;
}



/* Entry: 1072adfb8; end: 1072adfeb;  */

void FUN_1072adfb8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x0001072af970();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x0001072af87c(uVar1);
  return;
}



/* Entry: 1072adfec; end: 1072ae037;  */

long FUN_1072adfec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x0001072aff60();
    func_0x0001072afe0c();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1072ae038; end: 1072ae03b;  */

void FUN_1072ae038(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110999d18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072ae03c; end: 1072ae04f;  */

void FUN_1072ae03c(void)

{
  func_0x0001072ae110();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ae050; end: 1072ae057;  */

void FUN_1072ae050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072af7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072ae058; end: 1072ae0a7;  */

void FUN_1072ae058(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 uStack_21;
  
  func_0x0001072afc24();
  FUN_1072adfec();
  FUN_1072ae0e4(param_1 + 0x20,unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  if (*(char *)(unaff_x19 + 0x30) == '\x01') {
    FUN_1072ae0a8((undefined8 *)(unaff_x19 + 0x38),&uStack_21);
  }
  return;
}



/* Entry: 1072ae0a8; end: 1072ae0e3;  */

void FUN_1072ae0a8(long *param_1,undefined8 param_2)

{
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  if (*param_1 != -1) {
    puStack_20 = &uStack_18;
    uStack_18 = param_2;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(param_1,&puStack_20,0x1072ae10c);
  }
  return;
}



/* Entry: 1072ae0e4; end: 1072ae11f;  */

void FUN_1072ae0e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  if (*(char *)(param_2 + 2) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 1072ae120; end: 1072ae133;  */

void FUN_1072ae120(void)

{
  FUN_1072ae184();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ae134; end: 1072ae157;  */

undefined8 * FUN_1072ae134(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  
  func_0x0001072b0630();
  func_0x000107276ba4();
  puVar1 = unaff_x19 + 3;
  func_0x0001072afd54();
  *unaff_x19 = 0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001072afa4c();
  }
  return unaff_x19;
}



/* Entry: 1072ae158; end: 1072ae15b;  */

void FUN_1072ae158(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ae15c; end: 1072ae183;  */

void FUN_1072ae15c(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001072afd54();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x0001072afa4c();
  }
  return;
}



/* Entry: 1072ae184; end: 1072ae18f;  */

void FUN_1072ae184(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110999d68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072ae190; end: 1072ae1ef;  */

void FUN_1072ae190(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001072af784();
  uStack_28 = extraout_x8;
  FUN_1072ae1f0(auStack_40,1);
  FUN_1072ae240(uStack_30);
  func_0x0001072afcd4();
  FUN_1072ae324();
  func_0x0001072af6ec(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072afc3c();
  FUN_1072ae324();
  func_0x0001072afaac();
  func_0x0001072b063c();
  FUN_1072ae210();
  func_0x0001072b05c0();
  return;
}



/* Entry: 1072ae1f0; end: 1072ae20f;  */

void FUN_1072ae1f0(void)

{
  func_0x0001072b063c();
  FUN_1072ae210();
  func_0x0001072b05c0();
  return;
}



/* Entry: 1072ae210; end: 1072ae23f;  */

undefined8 * FUN_1072ae210(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x24924924924924a) {
    puVar1 = (undefined8 *)(param_2 * 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11099a148;
  param_1[1] = 0;
  func_0x0001072ae2a4(param_1 + 3);
  return param_1;
}



/* Entry: 1072ae240; end: 1072ae27f;  */

undefined8 * FUN_1072ae240(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11099a148;
  param_1[1] = 0;
  func_0x0001072ae2a4(param_1 + 3);
  return param_1;
}



/* Entry: 1072ae280; end: 1072ae283;  */

void FUN_1072ae280(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099a148;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072ae284; end: 1072ae297;  */

void FUN_1072ae284(void)

{
  FUN_1072ae2f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ae298; end: 1072ae2bb;  */

void FUN_1072ae298(long param_1)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001072b0008(param_1 + 0x18);
  __ZNSt3__15mutexD1Ev();
  FUN_10726b2ac();
  if ((unaff_x19 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  func_0x00010726b230();
  return;
}



/* Entry: 1072ae2bc; end: 1072ae2ef;  */

void FUN_1072ae2bc(long param_1)

{
  func_0x00010726acf0();
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1072ae2f0; end: 1072ae2ff;  */

void FUN_1072ae2f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099a148;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072ae300; end: 1072ae323;  */

void FUN_1072ae300(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001072b0008();
  __ZNSt3__15mutexD1Ev();
  FUN_10726b2ac();
  if ((unaff_x19 == 1) && (func_0x000107274ee4(), extraout_x8 != 0)) {
    func_0x000107274f70();
    func_0x000107275200();
    func_0x000107275208();
  }
  func_0x00010726b230();
  return;
}



/* Entry: 1072ae324; end: 1072ae333;  */

void FUN_1072ae324(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072ae334; end: 1072ae383;  */

void FUN_1072ae334(long param_1)

{
  func_0x0001072afb28();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072ae384; end: 1072ae397;  */

void FUN_1072ae384(void)

{
  func_0x0001072ae358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ae398; end: 1072ae3bb;  */

void FUN_1072ae398(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  
  puVar1 = param_1;
  func_0x0001072b0070();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_SUB_110999db8;
  uVar3 = *puVar2;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 2);
  puVar1[1] = uVar3;
  lVar4 = param_1[4];
  uVar3 = param_1[3];
  puVar1[4] = param_1[4];
  puVar1[3] = uVar3;
  if (lVar4 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  lVar4 = puVar2[5];
  uVar3 = puVar2[4];
  puVar1[6] = puVar2[5];
  puVar1[5] = uVar3;
  if (lVar4 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1072ae3bc; end: 1072ae3df;  */

void FUN_1072ae3bc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_110999db8;
  uVar2 = *puVar1;
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar2;
  if (lVar3 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar1[5];
  uVar2 = puVar1[4];
  param_2[6] = puVar1[5];
  param_2[5] = uVar2;
  if (lVar3 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1072ae3e0; end: 1072ae7f7;  */

void FUN_1072ae3e0(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long lVar8;
  long *unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 uVar14;
  undefined8 ***pppuStack_110;
  undefined8 *puStack_108;
  undefined8 **appuStack_100 [2];
  undefined8 ****ppppuStack_f0;
  undefined8 ****ppppuStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined1 uStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined1 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 ****ppppuStack_90;
  ulong uStack_88;
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 uStack_68;
  
  func_0x0001072afcec();
  func_0x0001072af784();
  ppppuStack_e0 = (undefined8 *****)0x0;
  ppppuStack_d8 = (undefined8 *****)0x0;
  uStack_68 = extraout_x8;
  FUN_1072ae894(&ppppuStack_c0,*(undefined8 *)(param_1 + 0x18));
  if (ppppuStack_c0 == (undefined8 ****)0x0) {
    pppppuVar6 = &ppppuStack_c0;
    func_0x0001072adb8c();
  }
  else {
    bVar2 = *(byte *)(unaff_x21 + 0x10);
    unaff_x22 = (ulong)bVar2;
    pppppuVar6 = &ppppuStack_c0;
    func_0x0001072adb8c();
    if ((bVar2 & 1) == 0) {
      uVar9 = *(undefined8 *)(unaff_x21 + 8);
      func_0x00010785f1f4();
      lVar11 = *(long *)(unaff_x21 + 0x20);
      uVar14 = *(undefined8 *)(unaff_x21 + 0x20);
      ppppuVar12 = *(undefined8 *****)(unaff_x21 + 0x18);
      pppppuVar7 = pppppuVar6;
      func_0x0001072aff20();
      func_0x0001072b03b8();
      *pppppuVar7 = (undefined8 ****)&PTR_FUN_110999e28;
      ppppuStack_c0 = ppppuVar12;
      ppppuStack_b8 = (undefined8 ****)uVar14;
      if (lVar11 != 0) {
        do {
          func_0x0001072af838();
        } while (extraout_w10 != 0);
      }
      FUN_1072fa98c(pppppuVar7 + 3,&ppppuStack_c0,uVar9,pppppuVar6);
      FUN_1072ac890(&ppppuStack_c0);
      ppppuStack_b8 = ppppuStack_d8;
      ppppuStack_c0 = ppppuStack_e0;
      ppppuStack_e0 = pppppuVar7 + 3;
      ppppuStack_d8 = (undefined8 ****)unaff_x22;
      func_0x0001072b0568();
      func_0x00010002b838(&ppppuStack_c0,&UNK_10f408cef);
      func_0x0001072b044c();
      goto LAB_1072ae514;
    }
  }
  func_0x0001072afe48();
  func_0x0001072b03b8();
  pppppuVar7 = pppppuVar6 + 3;
  *pppppuVar6 = (undefined8 ****)&PTR_DAT_110999e78;
  FUN_1072fc194();
  ppppuStack_b8 = ppppuStack_d8;
  ppppuStack_c0 = ppppuStack_e0;
  ppppuStack_e0 = pppppuVar7;
  ppppuStack_d8 = (undefined8 ****)unaff_x22;
  func_0x0001072b0568();
  func_0x00010002b838(&ppppuStack_c0,&UNK_10f408d00);
  func_0x0001072b044c();
LAB_1072ae514:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppuStack_c0);
  ppppuStack_f0 = (undefined8 *****)0x0;
  ppppuStack_e8 = (undefined8 *****)0x0;
  FUN_1072a5d24(&ppppuStack_c0,*(undefined8 *)(unaff_x21 + 0x28));
  ppppuVar12 = ppppuStack_c0;
  pppppuVar6 = &ppppuStack_c0;
  func_0x00010726ee4c();
  if ((undefined8 *****)ppppuVar12 != (undefined8 *****)0x0) {
    uVar9 = *(undefined8 *)(unaff_x21 + 8);
    lVar11 = *(long *)(unaff_x21 + 0x30);
    uVar14 = *(undefined8 *)(unaff_x21 + 0x30);
    ppppuVar13 = *(undefined8 *****)(unaff_x21 + 0x28);
    func_0x0001072aff20();
    func_0x0001072b03b8();
    *pppppuVar6 = (undefined8 ****)&PTR_DAT_110999ec8;
    ppppuStack_c0 = ppppuVar13;
    ppppuStack_b8 = (undefined8 ****)uVar14;
    if (lVar11 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_00 != 0);
    }
    FUN_1072fc6bc(pppppuVar6 + 3,&ppppuStack_c0,uVar9);
    FUN_1072ac824(&ppppuStack_c0);
    ppppuStack_b8 = ppppuStack_e8;
    ppppuStack_c0 = ppppuStack_f0;
    ppppuStack_e8 = ppppuVar12;
    ppppuStack_f0 = pppppuVar6 + 3;
    func_0x0001072b0568();
  }
  func_0x00010785f1f4();
  uStack_88 = (ulong)ppppuStack_d8;
  ppppuStack_90 = ppppuStack_e0;
  if (ppppuStack_d8 != (undefined8 ****)0x0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_01 != 0);
  }
  ppppuStack_78 = ppppuStack_e8;
  ppppuStack_80 = ppppuStack_f0;
  if ((undefined8 *****)ppppuStack_e8 != (undefined8 *****)0x0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_02 != 0);
  }
  pppuStack_110 = (undefined8 ****)0x0;
  puStack_108 = (undefined8 *)0x0;
  appuStack_100[0] = (undefined8 ***)0x0;
  pppuStack_d0 = &pppuStack_110;
  uStack_c8 = 0;
  FUN_1072aea34(&pppuStack_110,2);
  ppppuStack_c0 = (undefined8 ****)appuStack_100;
  puStack_a0 = puStack_108;
  ppppuStack_b8 = (undefined8 ****)&puStack_a0;
  ppuStack_b0 = &puStack_98;
  puVar10 = puStack_108;
  for (lVar11 = 0; lVar11 != 0x20; lVar11 = lVar11 + 0x10) {
    lVar8 = *(long *)((long)&uStack_88 + lVar11);
    uVar9 = *(undefined8 *)((long)&ppppuStack_90 + lVar11);
    puVar10[1] = *(undefined8 *)((long)&uStack_88 + lVar11);
    *puVar10 = uVar9;
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar10 = puVar10 + 2;
  }
  uStack_a8 = 1;
  puStack_98 = puVar10;
  FUN_1072aeab0(&ppppuStack_c0);
  uStack_c8 = 1;
  ppppuVar12 = &pppuStack_d0;
  puStack_108 = puVar10;
  func_0x0001072aeb18();
  func_0x0001072afc1c();
  ppppuStack_b8 = (undefined8 ****)puStack_108;
  ppppuStack_c0 = (undefined8 ****)pppuStack_110;
  ppuStack_b0 = appuStack_100[0];
  puStack_108 = (undefined8 *)0x0;
  appuStack_100[0] = (undefined8 ***)0x0;
  pppuStack_110 = (undefined8 ***)0x0;
  func_0x0001078a0218();
  func_0x0001072aeba4(&ppppuStack_c0);
  func_0x0001072aeba4(&pppuStack_110);
  lVar11 = 0x10;
  do {
    func_0x00010724bd50((long)&ppppuStack_90 + lVar11);
    lVar11 = lVar11 + -0x10;
    uVar5 = lVar11 == -0x10;
  } while (!(bool)uVar5);
  func_0x00010724bd50(&ppppuStack_f0);
  func_0x00010724bd50(&ppppuStack_e0);
  *unaff_x19 = (long)ppppuVar12;
  func_0x0001072af6ec(uStack_68);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    func_0x0001072b02a0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010724bd50(&ppppuStack_e0);
    func_0x0001072afaac();
    func_0x0001072afbfc();
    func_0x0001072afbbc();
    func_0x0001072af7e4();
    return;
  }
  return;
}



/* Entry: 1072ae7f8; end: 1072ae81f;  */

void FUN_1072ae7f8(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_110999f08);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072ae820; end: 1072ae893;  */

undefined ** FUN_1072ae820(void)

{
  return &PTR_DAT_110999f08;
}



/* Entry: 1072ae894; end: 1072ae8cf;  */

void FUN_1072ae894(void)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x0001072b02ac();
  lVar1 = unaff_x19[1];
  uVar2 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 2);
  return;
}



/* Entry: 1072ae8d0; end: 1072ae9a3;  */

void FUN_1072ae8d0(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 auStack_b8 [2];
  undefined4 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined4 auStack_90 [6];
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  auStack_90[0] = 0x118;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x0001072afe50();
  uStack_68 = 0;
  uStack_48 = 0;
  uStack_44 = 1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_a8);
  puVar1 = auStack_90;
  FUN_10726e300(puVar1,&DAT_10f6389e8,auStack_a8);
  auStack_b8[0] = 1;
  uStack_b0 = 0;
  uStack_c8 = *param_1;
  uStack_c0 = 3;
  func_0x0001072b0474(param_1,puVar1,auStack_b8,&uStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  FUN_107262330(auStack_90);
  return;
}



/* Entry: 1072ae9a4; end: 1072ae9a7;  */

void FUN_1072ae9a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110999e28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072ae9a8; end: 1072ae9bb;  */

void FUN_1072ae9a8(void)

{
  func_0x0001072ae9c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ae9bc; end: 1072ae9d7;  */

long FUN_1072ae9bc(long param_1)

{
  FUN_1072fbf54(param_1 + 0x20,0);
  return param_1 + 0x20;
}



/* Entry: 1072ae9d8; end: 1072ae9eb;  */

void FUN_1072ae9d8(void)

{
  func_0x0001072ae9f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072ae9ec; end: 1072aea07;  */

long FUN_1072ae9ec(long param_1)

{
  func_0x000107527fb4(param_1 + 0x20,0);
  return param_1 + 0x20;
}



/* Entry: 1072aea08; end: 1072aea1b;  */

void FUN_1072aea08(void)

{
  func_0x0001072aea28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072aea1c; end: 1072aea33;  */

long FUN_1072aea1c(long param_1)

{
  FUN_1072fdb88(param_1 + 0x20,0);
  return param_1 + 0x20;
}



/* Entry: 1072aea34; end: 1072aea67;  */

void FUN_1072aea34(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3c == 0) {
    func_0x0001072b0654();
    FUN_1072aea74();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x10;
    return;
  }
  FUN_1072aea68();
  func_0x0001072af800();
  FUN_1072aea94();
  return;
}



/* Entry: 1072aea68; end: 1072aea73;  */

void FUN_1072aea68(void)

{
  func_0x0001072af800();
  FUN_1072aea94();
  return;
}



/* Entry: 1072aea74; end: 1072aea93;  */

void FUN_1072aea74(void)

{
  FUN_1072aea94();
  return;
}



/* Entry: 1072aea94; end: 1072aeaaf;  */

void FUN_1072aea94(undefined8 param_1,ulong param_2)

{
  ulong extraout_x8;
  
  if (param_2 >> 0x3c == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 4);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072b012c();
  if ((extraout_x8 & 1) == 0) {
    FUN_1072aeadc();
  }
  return;
}



/* Entry: 1072aeab0; end: 1072aeadb;  */

void FUN_1072aeab0(void)

{
  uint extraout_w8;
  
  func_0x0001072b012c();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072aeadc();
  }
  return;
}



/* Entry: 1072aeadc; end: 1072aeaeb;  */

void FUN_1072aeadc(long param_1)

{
  long unaff_x19;
  
  func_0x0001072afc8c();
  func_0x0001072b0148();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x10;
    func_0x00010724bd50();
  }
  return;
}



/* Entry: 1072aeaec; end: 1072aeb6b;  */

void FUN_1072aeaec(long param_1)

{
  long unaff_x19;
  
  func_0x0001072b0148();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x10;
    func_0x00010724bd50();
  }
  return;
}



/* Entry: 1072aeb6c; end: 1072aeb73;  */

void FUN_1072aeb6c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -2;
    func_0x00010724bd50();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072aeb74; end: 1072aec4b;  */

void FUN_1072aeb74(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x10;
    func_0x00010724bd50();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072aec4c; end: 1072aec5f;  */

void FUN_1072aec4c(void)

{
  func_0x0001072aec20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072aec60; end: 1072aec83;  */

void FUN_1072aec60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x0001072aff20();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_SUB_110999f28;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1072aec84; end: 1072aeca7;  */

void FUN_1072aec84(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_110999f28;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1072aeca8; end: 1072aee9f;  */

void FUN_1072aeca8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined8 **ppuVar8;
  long *plVar9;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puStack_80 = (undefined8 *)0x0;
  lStack_78 = 0;
  lVar6 = *(long *)(param_2 + 0x10);
  if (((lVar6 == 0) || (__ZNSt3__119__shared_weak_count4lockEv(), lStack_78 = lVar6, lVar6 == 0)) ||
     (puStack_80 = *(undefined8 **)(param_2 + 8), puStack_80 == (undefined8 *)0x0)) {
    ppuVar8 = (undefined8 **)0x0;
  }
  else {
    func_0x0001077f3c4c();
    func_0x0001077f3790();
    lVar5 = lStack_78;
    puVar4 = puStack_80;
    puVar7 = (undefined8 *)0x168;
    __Znwm();
    plVar9 = puVar7 + 1;
    *plVar9 = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_DAT_110999f98;
    puVar1 = puVar7 + 3;
    puStack_58 = (undefined8 *)lVar5;
    puStack_60 = puVar4;
    if (lVar5 != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10 != 0);
    }
    puStack_68 = *(undefined8 **)(param_2 + 0x20);
    puStack_70 = *(undefined8 **)(param_2 + 0x18);
    if (*(long *)(param_2 + 0x20) != 0) {
      do {
        func_0x0001072af838();
      } while (extraout_w10_00 != 0);
    }
    FUN_1073149ac(puVar1,lVar6 + 8,&puStack_60,&puStack_70,0x3200000);
    func_0x00010726eedc(&puStack_70);
    ppuVar8 = &puStack_60;
    func_0x0001072ac970();
    puStack_90 = puVar1;
    puStack_88 = puVar7;
    if ((puVar7[8] == 0) || (*(long *)(puVar7[8] + 8) == -1)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = *plVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        puStack_70 = puVar1;
        puStack_68 = puVar7;
      } while (cVar2 != '\0');
      do {
        func_0x0001072afaec();
      } while (extraout_w11 != 0);
      puStack_60 = (undefined8 *)puVar7[7];
      puVar7[7] = puVar1;
      puVar7[8] = puVar7;
      puStack_58 = (undefined8 *)extraout_x8;
      FUN_1072aef58(&puStack_60);
      ppuVar8 = &puStack_70;
      func_0x0001072aefa0();
    }
    func_0x0001072afe48();
    puStack_90 = (undefined8 *)0x0;
    puStack_88 = (undefined8 *)0x0;
    puStack_60 = puVar1;
    puStack_58 = puVar7;
    func_0x00010789b128();
    func_0x0001072aef7c(&puStack_60);
    func_0x0001072aefa0(&puStack_90);
  }
  func_0x0001072ac970(&puStack_80);
  *param_1 = (long)ppuVar8;
  return;
}



/* Entry: 1072aeea0; end: 1072aeec7;  */

void FUN_1072aeea0(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_110999fd8);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072aeec8; end: 1072aef2f;  */

undefined ** FUN_1072aeec8(void)

{
  return &PTR_DAT_110999fd8;
}



/* Entry: 1072aef30; end: 1072aef43;  */

void FUN_1072aef30(void)

{
  func_0x0001072aef4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072aef44; end: 1072aef57;  */

void FUN_1072aef44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001072af7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1072aef58; end: 1072aefc3;  */

void FUN_1072aef58(long param_1)

{
  func_0x0001072afb28();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 1072aefc4; end: 1072aefcb;  */

void FUN_1072aefc4(void)

{
  return;
}



/* Entry: 1072aefcc; end: 1072aeff7;  */

void FUN_1072aefcc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001072afc1c();
  uVar2 = param_1[1];
  *puVar1 = &PTR_FUN_110999ff8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1072aeff8; end: 1072af01b;  */

void FUN_1072aeff8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110999ff8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072af01c; end: 1072af097;  */

void FUN_1072af01c(long param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  ppuStack_48 = &PTR_DAT_11099a068;
  pppuStack_30 = &ppuStack_48;
  (**(code **)(*param_2 + 0x120))(param_2,&ppuStack_48);
  func_0x0001072af654(&ppuStack_48);
  func_0x0001072af6ec(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072afbb0();
  func_0x0001072af654();
  func_0x0001072afaac();
  func_0x0001072afbfc();
  func_0x0001072afbbc();
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072af098; end: 1072af0bf;  */

void FUN_1072af098(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_11099a0e8);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072af0c0; end: 1072af0d3;  */

undefined ** FUN_1072af0c0(void)

{
  return &PTR_DAT_11099a0e8;
}



/* Entry: 1072af0d4; end: 1072af0ff;  */

void FUN_1072af0d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  func_0x0001072afc1c();
  uVar2 = param_1[1];
  *puVar1 = &PTR_DAT_11099a068;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 1072af100; end: 1072af123;  */

void FUN_1072af100(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_11099a068;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072af124; end: 1072af43b;  */

void FUN_1072af124(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  (**(code **)(*(long *)**(undefined8 **)(param_2 + 8) + 0x18))(&lStack_80);
  puVar14 = (undefined8 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar10 = lStack_80;
  do {
    if (lVar10 == lStack_78) {
      func_0x0001072af598(&lStack_80);
      return;
    }
    func_0x00010b99f074(&plStack_98,lVar10 + 0x48);
    func_0x0001002a9c04(&uStack_f8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_e0,lVar10 + 0x18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&uStack_c8,lVar10 + 0x30);
    plVar4 = plStack_98;
    if (plStack_98 != (long *)0x0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
    }
    plStack_b0 = plVar4;
    uStack_a0 = uStack_88;
    uStack_a8 = uStack_90;
    if (puVar14 < (undefined8 *)param_1[2]) {
      puVar14[2] = uStack_e8;
      puVar14[1] = uStack_f0;
      *puVar14 = uStack_f8;
      uStack_f8 = 0;
      uStack_f0 = 0;
      puVar14[4] = uStack_d8;
      puVar14[3] = uStack_e0;
      puVar14[5] = uStack_d0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puVar14[8] = uStack_b8;
      puVar14[7] = uStack_c0;
      puVar14[6] = uStack_c8;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      puVar14[9] = plVar4;
      uStack_e8 = 0;
      plStack_b0 = (long *)0x0;
      puVar14[0xb] = uStack_88;
      puVar14[10] = uStack_90;
      puVar1 = puVar14;
    }
    else {
      puVar11 = (undefined8 *)*param_1;
      lVar13 = (long)puVar14 - (long)puVar11;
      uVar8 = lVar13 / 0x60 + 1;
      if (0x2aaaaaaaaaaaaaa < uVar8) {
        FUN_1072af4d0();
LAB_1072af3cc:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1072af3d0);
        (*pcVar5)();
      }
      uVar2 = ((long)param_1[2] - (long)puVar11) / 0x60;
      uVar9 = uVar2 * 2;
      if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
        uVar9 = uVar8;
      }
      if (0x155555555555554 < uVar2) {
        uVar9 = 0x2aaaaaaaaaaaaaa;
      }
      if (uVar9 == 0) {
        lVar6 = 0;
      }
      else {
        if (0x2aaaaaaaaaaaaaa < uVar9) {
          func_0x000104bd35f4();
          goto LAB_1072af3cc;
        }
        lVar6 = uVar9 * 0x60;
        __Znwm();
      }
      uVar3 = uStack_b8;
      puVar1 = (undefined8 *)(lVar6 + lVar13);
      puVar1[1] = uStack_f0;
      *puVar1 = uStack_f8;
      puVar1[2] = uStack_e8;
      uStack_f8 = 0;
      uStack_f0 = 0;
      puVar1[4] = uStack_d8;
      puVar1[3] = uStack_e0;
      puVar1[5] = uStack_d0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puVar1[7] = uStack_c0;
      puVar1[6] = uStack_c8;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      puVar1[8] = uVar3;
      puVar1[9] = plVar4;
      uStack_e8 = 0;
      plStack_b0 = (long *)0x0;
      puVar1[0xb] = uStack_88;
      puVar1[10] = uStack_90;
      puVar7 = puVar1 + (lVar13 / -0x60) * 0xc;
      for (puVar12 = puVar11; puVar12 != puVar14; puVar12 = puVar12 + 0xc) {
        func_0x0001072af470(puVar7,puVar12);
        puVar7 = puVar7 + 0xc;
      }
      for (; puVar11 != puVar14; puVar11 = puVar11 + 0xc) {
        FUN_1072af4dc(puVar11);
      }
      uVar8 = *param_1;
      *param_1 = (ulong)(puVar1 + (lVar13 / -0x60) * 0xc);
      param_1[2] = lVar6 + uVar9 * 0x60;
      if (uVar8 != 0) {
        __ZdlPv();
      }
    }
    puVar14 = puVar1 + 0xc;
    param_1[1] = (ulong)puVar14;
    FUN_1072af4dc(&uStack_f8);
    func_0x0001003adc18(&plStack_98);
    lVar10 = lVar10 + 0x58;
  } while( true );
}



/* Entry: 1072af43c; end: 1072af463;  */

void FUN_1072af43c(undefined8 param_1)

{
  func_0x0001072afbfc();
  func_0x0001072afbbc(param_1,&PTR_DAT_11099a0d8);
  func_0x0001072af7e4();
  return;
}



/* Entry: 1072af464; end: 1072af4cf;  */

undefined ** FUN_1072af464(void)

{
  return &PTR_DAT_11099a0d8;
}



/* Entry: 1072af4d0; end: 1072af4db;  */

void FUN_1072af4d0(long param_1)

{
  func_0x0001072af800();
  func_0x0001003adc18(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1072af4dc; end: 1072af55f;  */

void FUN_1072af4dc(long param_1)

{
  func_0x0001003adc18(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1072af560; end: 1072af567;  */

void FUN_1072af560(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xc;
    FUN_1072af4dc();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072af568; end: 1072af5e7;  */

void FUN_1072af568(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x60;
    FUN_1072af4dc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072af5e8; end: 1072af5ef;  */

void FUN_1072af5e8(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xb;
    func_0x0001072af620();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072af5f0; end: 1072af687;  */

void FUN_1072af5f0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072af9fc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x58;
    func_0x0001072af620();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072af688; end: 1072b0673;  */

void FUN_1072af688(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  
  unaff_x19[1] = unaff_x21;
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



/* Entry: 1072b0674; end: 1072b06b3;  */

void FUN_1072b0674(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1072b06b4(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1072b0d00(&uStack_30);
  return;
}



/* Entry: 1072b06b4; end: 1072b06cf;  */

void FUN_1072b06b4(void)

{
  undefined1 uStack_11;
  
  FUN_1072b09fc(&uStack_11);
  return;
}



/* Entry: 1072b06d0; end: 1072b06db;  */

void FUN_1072b06d0(void)

{
  return;
}



/* Entry: 1072b06dc; end: 1072b0817;  */

void FUN_1072b06dc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if ((undefined8 *)(param_1 + 0xd0) != param_2) {
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 4);
    plVar4 = (long *)param_2[2];
    lVar2 = *(long *)(param_1 + 0xd8);
    if (lVar2 != 0) {
      puVar1 = *(undefined8 **)(param_1 + 0xd0);
      for (; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
      plVar3 = *(long **)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      for (plVar5 = plVar4;
          (plVar4 = plVar5, plVar3 != (long *)0x0 && (plVar4 = (long *)0x0, plVar5 != (long *)0x0));
          plVar5 = (long *)*plVar5) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (plVar3 + 2,plVar5 + 2);
        FUN_1072aa8b4(plVar3 + 5,plVar5 + 5);
        plVar3 = (long *)*plVar3;
        func_0x0001072b11c4();
      }
      func_0x0001072b11d0();
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      puVar1 = (undefined8 *)0x38;
      __Znwm();
      uStack_48 = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puStack_58 = puVar1;
      lStack_50 = param_1 + 0xe0;
      FUN_1072b1164(puVar1 + 2,plVar4 + 2);
      uStack_48 = CONCAT71(uStack_48._1_7_,1);
      lVar2 = param_1 + 0xe8;
      func_0x000100102e7c(lVar2,puVar1 + 2);
      puVar1[1] = lVar2;
      func_0x0001072b11c4();
      puStack_58 = (undefined8 *)0x0;
      FUN_1072aac4c(&puStack_58);
    }
  }
  return;
}



/* Entry: 1072b0818; end: 1072b0827;  */

void FUN_1072b0818(long param_1)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x0001072afb0c(param_1 + 0xf8);
  if (extraout_x8 != 0) {
    do {
      func_0x0001072af838();
    } while (extraout_w10 != 0);
  }
  func_0x0001072af848();
  func_0x00010726ee28();
  return;
}



/* Entry: 1072b0828; end: 1072b089f;  */

void FUN_1072b0828(long param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  int extraout_w12;
  undefined1 auStack_20 [16];
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x0001072b11ac();
    } while (extraout_w12 != 0);
  }
  func_0x0001072b11dc();
  *(undefined8 *)(param_1 + 0x118) = extraout_x9;
  *(undefined8 *)(param_1 + 0x120) = extraout_x8;
  func_0x00010726ee4c(auStack_20);
  return;
}


