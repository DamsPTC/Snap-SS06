/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c6a800; end: 102c6a843;  */

void FUN_102c6a800(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c6a844; end: 102c6aa2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_102c6a844(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_380 [160];
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = PTR_PTR_1126afec0;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c51b38(puVar3);
  func_0x000107c61174();
  func_0x00010469c5e8(&uStack_190);
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_78 = uStack_118;
  uStack_80 = uStack_120;
  uStack_68 = uStack_108;
  uStack_70 = uStack_110;
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_e8 = uStack_188;
  uStack_f0 = uStack_190;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  uStack_d0 = uStack_170;
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uVar4 = 0;
  uStack_168 = param_1;
  uStack_c8 = param_1;
  func_0x00010469d938(0);
  func_0x000107c610f8();
  FUN_102c62cd4(&uStack_f0,&uStack_240);
  puVar5 = &uStack_f0;
  func_0x00010469d28c(puVar5);
  puVar6 = &uStack_190;
  func_0x000102c62d10();
  lVar8 = ((undefined8 *)(param_2 + _DAT_11308ca38))[1];
  if ((lVar8 == 0) ||
     ((puVar6 = *(undefined8 **)(param_2 + _DAT_11308ca38), puVar7 = puVar5,
      puVar6 != (undefined8 *)0xd000000000000013 || lVar8 != -0x7ffffffef10433b0 &&
      (func_0x000107c605b8(puVar6,lVar8,0xd000000000000013,0x800000010efbcc50,0),
      ((ulong)puVar6 & 1) == 0)))) {
    func_0x00010419eeac();
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    func_0x000107c61434(uVar2);
    func_0x000107c61174(puVar5);
    func_0x00010469c5e8(&uStack_240);
    uStack_198 = uStack_1a8;
    uStack_1a0 = uStack_1b0;
    func_0x000101994d34(&uStack_1a0);
    uStack_278 = uStack_1d8;
    uStack_280 = uStack_1e0;
    uStack_268 = uStack_1c8;
    uStack_270 = uStack_1d0;
    uStack_258 = uStack_1b8;
    uStack_260 = uStack_1c0;
    uStack_2b8 = uStack_218;
    uStack_2c0 = uStack_220;
    uStack_2a8 = uStack_208;
    uStack_2b0 = uStack_210;
    uStack_298 = uStack_1f8;
    uStack_2a0 = uStack_200;
    uStack_288 = uStack_1e8;
    uStack_290 = uStack_1f0;
    uStack_2d8 = uStack_238;
    uStack_2e0 = uStack_240;
    uStack_2c8 = uStack_228;
    uStack_2d0 = uStack_230;
    uStack_128 = uStack_1d8;
    uStack_130 = uStack_1e0;
    uStack_118 = uStack_1c8;
    uStack_120 = uStack_1d0;
    uStack_168 = uStack_218;
    uStack_170 = uStack_220;
    uStack_158 = uStack_208;
    uStack_160 = uStack_210;
    uStack_148 = uStack_1f8;
    uStack_150 = uStack_200;
    uStack_138 = uStack_1e8;
    uStack_140 = uStack_1f0;
    uStack_188 = uStack_238;
    uStack_190 = uStack_240;
    uStack_178 = uStack_228;
    uStack_180 = uStack_230;
    uStack_108 = uStack_1b8;
    uStack_110 = uStack_1c0;
    uStack_250 = uVar1;
    uStack_248 = uVar2;
    uStack_100 = uVar1;
    uStack_f8 = uVar2;
    func_0x000107c610f8(uVar4);
    FUN_102c62cd4(&uStack_190,auStack_380);
    puVar7 = &uStack_190;
    func_0x00010469d28c(puVar7);
    func_0x000107c61170(puVar5);
    func_0x000102c62d10(&uStack_2e0);
  }
  return puVar7;
}



/* Entry: 102c6aa2c; end: 102c6aa83; -[_TtC24AdPlaybackImplementation21AdTrackCommonProvider getTimeUpdatedTrackCommonFrom:] */

void FUN_102c6aa2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_102c6a844(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c6aa84; end: 102c6ad3f;  */

undefined8 FUN_102c6aa84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = PTR_PTR_1126afec0;
  uVar4 = param_3;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c51b38(puVar2);
  func_0x000107c30b1c();
  func_0x000107c30b20(param_2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  func_0x000107c30adc(param_3);
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c5faec();
  func_0x000107c61170(param_3);
  if (puVar2 == (undefined *)0x0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x1b);
    func_0x000107c5fb78(0xd000000000000013,0x800000010f09d460);
    func_0x000107c5fb78(uVar3,uVar4);
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar2);
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    func_0x000107c5fddc(param_1,&uStack_70,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  }
  else {
    func_0x000107c49820();
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x1e);
    func_0x000107c5fb78(0xd000000000000013,0x800000010f09d460);
    func_0x000107c5fb78(uVar3,uVar4);
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    puVar1 = PTR___sSiN_11034deb0;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    func_0x000107c6057c(puVar1,puVar6);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    func_0x000107c5fddc(param_1,&uStack_70,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c6142c(uVar4);
  uVar3 = uStack_68;
  uVar4 = uStack_70;
  FUN_102c79a74(param_1,uStack_70,uStack_68);
  func_0x000107c6142c(uVar3);
  return uVar4;
}



/* Entry: 102c6ad40; end: 102c6adb3; -[_TtC24AdPlaybackImplementation21AdTrackCommonProvider getTrackCommonWithLifecycleEvent:trackCommon:] */

void FUN_102c6ad40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_102c6aa84(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c6adb4; end: 102c6b217;  */

undefined * FUN_102c6adb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar2 = PTR_PTR_1126afec0;
  lVar8 = param_3;
  func_0x000107c61168(PTR_PTR_1126afec0);
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c51b38(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c466c0(param_1);
  lVar3 = param_3;
  func_0x000107c30adc(param_3);
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  func_0x000107c4223c(puVar2);
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c602fc(0x1b);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f09d460);
  func_0x000107c5fb78(lVar4,lVar8);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar9);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar9 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fddc(param_1,&uStack_88,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(lVar8);
  uVar1 = uStack_80;
  uVar5 = uStack_88;
  func_0x000107c61174();
  func_0x000107c4223c();
  func_0x000107c30b08();
  func_0x000107c61434(uVar1);
  lVar3 = param_3;
  func_0x000107c30adc();
  func_0x000107c61180();
  puVar6 = puVar9;
  if (lVar3 == 0) {
    func_0x000107c5faec();
    puVar6 = puVar9;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar9);
  }
  lVar4 = param_3;
  func_0x000107c30ae0();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lStack_e0 = 0;
    puVar11 = (undefined *)0x0;
    puVar9 = puVar6;
  }
  else {
    lStack_e0 = lVar4;
    func_0x000107c5faec();
    puVar9 = puVar6;
    func_0x000107c61170(lVar4);
    puVar11 = puVar6;
  }
  lVar4 = param_3;
  func_0x000107c30ae4();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lStack_e8 = 0;
    puVar10 = (undefined *)0x0;
    puVar6 = puVar9;
  }
  else {
    lStack_e8 = lVar4;
    func_0x000107c5faec();
    puVar6 = puVar9;
    func_0x000107c61170(lVar4);
    puVar10 = puVar9;
  }
  lVar4 = param_3;
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar4 == 0) {
    lStack_f0 = 0;
    puVar7 = (undefined *)0x0;
    puVar9 = puVar6;
  }
  else {
    lStack_f0 = lVar4;
    func_0x000107c5faec();
    puVar9 = puVar6;
    func_0x000107c61170(lVar4);
    puVar7 = puVar6;
  }
  func_0x000107c30aec();
  func_0x000107c30af0();
  func_0x000107c30af4();
  lVar4 = param_3;
  func_0x000107c30af8();
  func_0x000107c61180();
  func_0x000107c30afc();
  func_0x000107c30b00();
  func_0x000107c30b04();
  func_0x000107c30b0c();
  func_0x000107c30b14();
  func_0x000107c61180();
  if (param_3 == 0) {
    lVar8 = 0;
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar8 = param_3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
  }
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  if (puVar11 == (undefined *)0x0) {
    lStack_e0 = 0;
  }
  else {
    func_0x000107c5fadc(lStack_e0,puVar11);
    func_0x000107c6142c(puVar11);
  }
  if (puVar10 == (undefined *)0x0) {
    lStack_e8 = 0;
  }
  else {
    func_0x000107c5fadc(lStack_e8,puVar10);
    func_0x000107c6142c(puVar10);
  }
  if (puVar7 == (undefined *)0x0) {
    lStack_f0 = 0;
  }
  else {
    func_0x000107c5fadc(lStack_f0,puVar7);
    func_0x000107c6142c(puVar7);
  }
  if (puVar9 == (undefined *)0x0) {
    lVar8 = 0;
  }
  else {
    func_0x000107c5fadc(lVar8,puVar9);
    func_0x000107c6142c(puVar9);
  }
  puVar9 = PTR_PTR_1126b9150;
  func_0x000107c610f8(PTR_PTR_1126b9150);
  func_0x000107c30ad4(param_1);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lStack_e0);
  func_0x000107c61170(lStack_e8);
  func_0x000107c61170(lStack_f0);
  func_0x000107c61170(lVar8);
  return puVar9;
}



/* Entry: 102c6b218; end: 102c6b277; -[_TtC24AdPlaybackImplementation21AdTrackCommonProvider getTrackCommonWithEventType:trackCommon:] */

void FUN_102c6b218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_102c6adb4(param_3,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102c6b278; end: 102c6b35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c6b278(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000104191a9c();
  uVar3 = 4;
  switch(lVar2) {
  case 1:
    if (*(long *)(param_1 + _DAT_113067d28) != 0) {
      if (*(int *)(*(long *)(param_1 + _DAT_113067d28) + _DAT_113813190) == 1) {
        return 9;
      }
      return 3;
    }
  case 0:
    uVar3 = 0;
    break;
  case 2:
    break;
  case 3:
    uVar3 = 5;
    break;
  case 4:
    uVar3 = 6;
    break;
  case 5:
    uVar3 = 8;
    break;
  case 6:
    uVar3 = 0xd;
    break;
  case 7:
    uVar3 = 0xb;
    break;
  case 8:
    uVar3 = 3;
    break;
  case 9:
    uVar3 = 0xf;
    break;
  default:
    lStack_28 = lVar2;
    func_0x000107c60614(&UNK_11074f6a8,&lStack_28,&UNK_11074f6a8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c6b360);
    (*pcVar1)();
  }
  return uVar3;
}



/* Entry: 102c6b360; end: 102c6b3ef;  */

void FUN_102c6b360(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    pcVar3 = *(code **)(param_2 + 0x40);
    if (pcVar3 == (code *)0x0) {
      func_0x000107c61574();
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x48);
      func_0x000102c6b9d0(pcVar3,uVar2);
      func_0x000107c61574(param_2);
      (*pcVar3)(uVar1);
      func_0x000102c6b9b8(pcVar3,uVar2);
    }
  }
  return;
}



/* Entry: 102c6b3f0; end: 102c6b41f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102c6b3f0(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + _DAT_11308c0c8);
  func_0x000107c30b1c(uVar1);
  return (int)uVar1 == 1;
}



/* Entry: 102c6b420; end: 102c6b4d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6b420(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_11308c0c0;
  lVar1 = *param_2;
  puVar4 = auStack_58;
  func_0x000107c61428(lVar1 + _DAT_11308c0c0,puVar4,0x20,0);
  lVar2 = *(long *)(lVar1 + lVar2);
  func_0x000107c61174(lVar1);
  func_0x000107c30ae8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar3 = 0;
    puVar4 = (undefined1 *)0x0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
  }
  *param_1 = lVar3;
  param_1[1] = (long)puVar4;
  func_0x000107c614a8(auStack_58);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 102c6b4d4; end: 102c6b5e7;  */

void FUN_102c6b4d4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102c6b5e8();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102c6b5e8; end: 102c6b66b;  */

/* WARNING: Possible PIC construction at 0x000102c6b640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c6b644) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6b5e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f06f88);
  if (lVar2 == 0) {
    lVar2 = 0;
    *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f06f88) = 0;
  }
  else {
    func_0x0001000295c4(0);
    func_0x000107c61174(lVar2);
    lVar1 = lVar2;
    func_0x000107c5ffdc();
    func_0x000107c53fd0(lVar2,param_2,0,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102c6b66c; end: 102c6b6d7;  */

void FUN_102c6b66c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000102c6b9b8(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c6b6d8; end: 102c6b74b;  */

void FUN_102c6b6d8(byte param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *(byte *)(param_2 + 0x38) = param_1 & 1;
    if ((param_1 & 1) != 0) {
      func_0x000107c41c58(*(undefined8 *)(param_2 + 0x28));
      FUN_102c7959c();
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102c6b74c; end: 102c6b87b;  */

void FUN_102c6b74c(byte param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar3,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((param_1 < 2) && (param_1 != 0)) {
      uVar1 = param_3;
      func_0x000107c30adc();
      func_0x000107c61180();
      puVar4 = puVar3;
      uVar2 = uVar1;
      if (uVar1 == 0) {
        func_0x000107c5faec();
        puVar4 = puVar3;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar3);
      }
      func_0x000107c5faec();
      func_0x000107c30afc(param_3);
      uVar1 = uVar1 & 0xffffffffffff;
      if (((ulong)puVar4 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar4 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        if (*(long *)(param_2 + 0x20) != 0) {
          func_0x000107c4db3c(*(long *)(param_2 + 0x20));
        }
        func_0x000107c61574(param_2);
        func_0x000107c61170(uVar2);
        func_0x000107c6142c(puVar4);
        return;
      }
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(puVar4);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102c6b87c; end: 102c6b913;  */

undefined8 FUN_102c6b87c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  puVar1 = &UNK_1105b96a8;
  func_0x000107c613fc(&UNK_1105b96a8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar3);
  func_0x00010418c7a4(0);
  func_0x000107c610f8();
  uVar3 = 0x102c6b9c8;
  func_0x00010418c64c(0x102c6b9c8,puVar1);
  func_0x0001041c57dc(0);
  uVar2 = uVar3;
  func_0x0001041c4dc0(uVar3);
  func_0x000107c61170(uVar3);
  return uVar2;
}



/* Entry: 102c6b914; end: 102c6b9af;  */

void FUN_102c6b914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  puVar3 = &UNK_1105b96a8;
  func_0x000107c613fc(&UNK_1105b96a8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,lVar5);
  puVar4 = &UNK_1105b96d0;
  func_0x000107c613fc(&UNK_1105b96d0,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  uVar1 = *(undefined8 *)(lVar5 + 0x40);
  uVar2 = *(undefined8 *)(lVar5 + 0x48);
  *(undefined8 *)(lVar5 + 0x40) = 0x102c6b9b0;
  *(undefined **)(lVar5 + 0x48) = puVar4;
  func_0x000107c6157c(puVar3);
  func_0x000107c61174(param_3);
  func_0x000102c6b9b8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 102c6b9b0; end: 102c6b9df;  */

void FUN_102c6b9b0(byte param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  puVar5 = auStack_58;
  func_0x000107c61428(lVar2 + 0x10,puVar5,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if ((param_1 < 2) && (param_1 != 0)) {
      uVar3 = uVar1;
      func_0x000107c30adc();
      func_0x000107c61180();
      puVar6 = puVar5;
      uVar4 = uVar3;
      if (uVar3 == 0) {
        func_0x000107c5faec();
        puVar6 = puVar5;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar5);
      }
      func_0x000107c5faec();
      func_0x000107c30afc(uVar1);
      uVar1 = uVar3 & 0xffffffffffff;
      if (((ulong)puVar6 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar6 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        if (*(long *)(lVar2 + 0x20) != 0) {
          func_0x000107c4db3c(*(long *)(lVar2 + 0x20));
        }
        func_0x000107c61574(lVar2);
        func_0x000107c61170(uVar4);
        func_0x000107c6142c(puVar6);
        return;
      }
      func_0x000107c61170(uVar4);
      func_0x000107c6142c(puVar6);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 102c6b9e0; end: 102c6ba23;  */

void FUN_102c6b9e0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c6ba24; end: 102c6ba97;  */

void FUN_102c6ba24(undefined8 param_1,long param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c5cd60(*(undefined8 *)(param_2 + 0x10));
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102c6ba98; end: 102c6bb5b;  */

code * FUN_102c6ba98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *unaff_x20;
  puVar1 = &UNK_1105b9758;
  func_0x000107c613fc(&UNK_1105b9758,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,uVar5);
  puVar2 = &UNK_1105b9780;
  func_0x000107c613fc(&UNK_1105b9780,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x00010418d02c(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  pcVar3 = FUN_102c6bba8;
  func_0x00010418ced4(FUN_102c6bba8,puVar2);
  func_0x0001041c57dc(0);
  pcVar4 = pcVar3;
  func_0x0001041c4e44(pcVar3);
  func_0x000107c61170(pcVar3);
  return pcVar4;
}



/* Entry: 102c6bb5c; end: 102c6bba7;  */

void FUN_102c6bb5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(param_1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 102c6bba8; end: 102c6bbaf;  */

void FUN_102c6bba8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c5cd60(*(undefined8 *)(lVar1 + 0x10));
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102c6bbb0; end: 102c6bbf3;  */

void FUN_102c6bbb0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c6bbf4; end: 102c6bd13;  */

void FUN_102c6bbf4(undefined8 param_1,uint param_2,uint param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_88,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    uVar4 = *(undefined8 *)(param_4 + 0x10);
    uVar1 = 0;
    func_0x0001002ed07c(0);
    func_0x000107c60108(param_1);
    puVar2 = PTR_PTR_1126b8fd0;
    func_0x000107c610f8(PTR_PTR_1126b8fd0);
    uVar3 = 0xd00000000000001b;
    func_0x000107c5fadc(0xd00000000000001b,0x800000010f103dc0);
    func_0x000107c30b58(puVar2,uVar3,param_6,uVar1,param_3 & 1,param_2 & 1);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c5cd68(uVar4);
    func_0x000107c61574(param_4);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102c6bd14; end: 102c6bd37;  */

void FUN_102c6bd14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_102c6bdf4(param_3);
  return;
}



/* Entry: 102c6bd38; end: 102c6bd4f;  */

/* WARNING: Possible PIC construction at 0x000102c6bdc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c6bdcc) */

void FUN_102c6bd38(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b8fd0;
  func_0x000107c610f8(PTR_PTR_1126b8fd0);
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f103dc0);
  func_0x000107c30b58(puVar1,uVar2,4,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102c6bd50; end: 102c6bdf3;  */

/* WARNING: Possible PIC construction at 0x000102c6bdc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c6bdcc) */

void FUN_102c6bd50(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x4;
  
  puVar1 = PTR_PTR_1126b8fd0;
  func_0x000107c610f8(PTR_PTR_1126b8fd0);
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f103dc0);
  func_0x000107c30b58(puVar1,uVar2,in_x4,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102c6bdf4; end: 102c6bf27;  */

undefined8 FUN_102c6bdf4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = &UNK_1105b9808;
  puVar1 = puVar3;
  func_0x000107c613fc(&UNK_1105b9808,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1105b9830;
  func_0x000107c613fc(&UNK_1105b9830,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c613fc(&UNK_1105b9808,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = &UNK_1105b9858;
  func_0x000107c613fc(&UNK_1105b9858,0x20,7);
  *(undefined **)(puVar1 + 0x10) = puVar3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x00010418f308(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c6157c(puVar2);
  uVar4 = 0;
  func_0x00010418f2a8(0,0,FUN_102c6bf28,puVar2,0x102c6bf70,puVar1);
  func_0x0001041c57dc(0);
  uVar5 = uVar4;
  func_0x0001041c4d38(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar4);
  return uVar5;
}



/* Entry: 102c6bf28; end: 102c6bf8b;  */

void FUN_102c6bf28(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_102c6bbf4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                5);
  return;
}



/* Entry: 102c6bf8c; end: 102c6bfeb; -[_TtC24AdPlaybackImplementation32AdAttachmentCommercePdpPresenter init] */

void FUN_102c6bf8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdAttachmentCommercePdpPresenter",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c6bfb8);
  (*pcVar1)();
}



/* Entry: 102c6bfec; end: 102c6c047; -[_TtC24AdPlaybackImplementation32AdAttachmentCommercePdpPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6bfec(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f067c0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f067c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f067d0));
  if (*(long *)(param_1 + _DAT_112f067d8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f067d8))[1]);
    return;
  }
  return;
}



/* Entry: 102c6c048; end: 102c6c067;  */

void FUN_102c6c048(void)

{
  func_0x000107c61168(&PTR_PTR_11289a740);
  return;
}



/* Entry: 102c6c068; end: 102c6c6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102c6c068(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x20;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uVar23;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar15 = *(long *)(param_1 + _DAT_113068f40);
  lVar22 = *(long *)(lVar15 + _DAT_1138152c8);
  if (lVar22 == 0) goto LAB_102c6c6c0;
  lVar17 = *(long *)(param_1 + _DAT_113068f48);
  lVar3 = lVar22;
  func_0x000107c61174();
  uVar5 = param_3;
  func_0x000107c30af8(param_3);
  func_0x000107c61180();
  func_0x000107c5e228();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  if (lVar17 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = *(long *)(lVar17 + _DAT_113091340);
    func_0x000107c61174(lVar19);
    func_0x000107c61170(lVar17);
  }
  uVar5 = *(undefined8 *)(lVar3 + _DAT_113090b60);
  uVar21 = ((undefined8 *)(lVar3 + _DAT_113090b60))[1];
  func_0x000107c61434(uVar21);
  func_0x000107c5fadc(uVar5,uVar21);
  func_0x000107c6142c(uVar21);
  if ((lVar19 != 0) && (*(long *)(lVar19 + _DAT_113090b28) < 0)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102c6c184);
    (*pcVar2)();
  }
  lVar17 = ((undefined8 *)(lVar3 + _DAT_113090b68))[1];
  if (lVar17 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(lVar3 + _DAT_113090b68);
    func_0x000107c61434(lVar17);
    func_0x000107c5fadc(uVar21,lVar17);
    func_0x000107c6142c(lVar17);
  }
  puVar4 = PTR_PTR_1126b0518;
  func_0x000107c61168();
  func_0x000107c422a0();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar21);
  lVar17 = ((undefined8 *)(lVar15 + _DAT_11308f138))[1];
  if (lVar17 == 0) {
    uVar5 = 0;
    lVar17 = -0x2000000000000000;
  }
  else {
    uVar5 = *(undefined8 *)(lVar15 + _DAT_11308f138);
    func_0x000107c5fb1c(uVar5);
  }
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar17);
  lVar17 = ((undefined8 *)(lVar15 + _DAT_11308f158))[1];
  if (lVar17 == 0) {
    uVar21 = 0;
    lVar17 = -0x2000000000000000;
  }
  else {
    uVar21 = *(undefined8 *)(lVar15 + _DAT_11308f158);
  }
  func_0x000107c61434();
  func_0x000107c5fadc(uVar21,lVar17);
  func_0x000107c6142c(lVar17);
  lVar17 = ((undefined8 *)(lVar15 + _DAT_11308f140))[1];
  if (lVar17 == 0) {
    uVar20 = 0;
    lVar17 = -0x2000000000000000;
  }
  else {
    uVar20 = *(undefined8 *)(lVar15 + _DAT_11308f140);
  }
  func_0x000107c61434();
  func_0x000107c5fadc(uVar20,lVar17);
  func_0x000107c6142c(lVar17);
  uVar6 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  if (lVar19 == 0) {
LAB_102c6c31c:
    uVar18 = 0;
  }
  else {
    uVar23 = ((undefined8 *)(lVar19 + _DAT_113090b30))[1];
    if (0xe < uVar23 >> 0x3c) goto LAB_102c6c31c;
    uVar16 = *(undefined8 *)(lVar19 + _DAT_113090b30);
    func_0x00010006c00c(uVar16,uVar23);
    uVar18 = uVar16;
    func_0x000107c5ee20(uVar16,uVar23);
    func_0x0001000b44c0(uVar16,uVar23);
  }
  puVar7 = PTR_PTR_1126b0528;
  func_0x000107c61168();
  func_0x000107c4229c();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar18);
  puVar8 = PTR_PTR_1126b0520;
  func_0x000107c610f8(PTR_PTR_1126b0520);
  func_0x000107c4710c();
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112f067c0);
  puVar14 = &UNK_1105b9888;
  puVar9 = puVar14;
  func_0x000107c613fc(&UNK_1105b9888,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar10 = &UNK_1105b98b0;
  func_0x000107c613fc(&UNK_1105b98b0,0x20,7);
  *(undefined **)(puVar10 + 0x10) = puVar9;
  *(undefined8 *)(puVar10 + 0x18) = param_3;
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102c6c96c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1105b98c8;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar10 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar10);
  puVar12 = puVar14;
  func_0x000107c613fc(&UNK_1105b9888,0x18,7);
  func_0x000107c61614(puVar12 + 0x10);
  puVar10 = &UNK_1105b9900;
  func_0x000107c613fc(&UNK_1105b9900,0x20,7);
  *(undefined **)(puVar10 + 0x10) = puVar12;
  *(undefined8 *)(puVar10 + 0x18) = param_3;
  pcStack_80 = FUN_102c6c9a8;
  puStack_a0 = puVar9;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1105b9918;
  ppuVar13 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar13);
  puVar10 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar10);
  func_0x000107c5d188(uVar20);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar11);
  uVar5 = param_3;
  func_0x000107c30af8(param_3);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f067c8);
  puVar10 = PTR_PTR_1126b8fa8;
  func_0x000107c610f8(PTR_PTR_1126b8fa8);
  uVar21 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
  func_0x000107c30b18(puVar10,uVar21,4,0xffffffffffffffff,0xffffffffffffffff,0,0,0,0);
  func_0x000107c61170(uVar21);
  func_0x000107c5cdc0(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar10);
  func_0x000107c613fc(&UNK_1105b9888,0x18,7);
  func_0x000107c61614(puVar14 + 0x10);
  puVar10 = &UNK_1105b9950;
  func_0x000107c613fc(&UNK_1105b9950,0x20,7);
  *(undefined **)(puVar10 + 0x10) = puVar14;
  *(undefined8 *)(puVar10 + 0x18) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f067d8);
  uVar5 = *puVar1;
  uVar21 = puVar1[1];
  *puVar1 = 0x102c6c9f4;
  puVar1[1] = puVar10;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar14);
  func_0x00010058d43c(uVar5,uVar21);
  func_0x000107c61574(puVar14);
  puVar14 = PTR_PTR_1126b0530;
  func_0x000107c610f8(PTR_PTR_1126b0530);
  func_0x000107c46020();
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112f067d0));
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar14);
  func_0x000107c615e8(uVar20);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar19);
LAB_102c6c6c0:
  return lVar22 != 0;
}



/* Entry: 102c6c6ec; end: 102c6c7f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6c6ec(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112f067c8);
    puVar1 = PTR_PTR_1126b8fa8;
    func_0x000107c610f8(PTR_PTR_1126b8fa8);
    uVar2 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
    func_0x000107c30b18(puVar1,uVar2,param_3,0xffffffffffffffff,0xffffffffffffffff,param_4 & 1,0,0,0
                       );
    func_0x000107c61170(uVar2);
    func_0x000107c5cdc0(uVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102c6c7f4; end: 102c6c877; -[_TtC24AdPlaybackImplementation32AdAttachmentCommercePdpPresenter presentCommercePdpAttachmentV2WithMetadata:triggerType:adTrackCommon:] */

uint FUN_102c6c7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102c6c068(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102c6c878; end: 102c6c8e7; -[_TtC24AdPlaybackImplementation32AdAttachmentCommercePdpPresenter commerceBrowserWillPresent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6c878(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112f067d8);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112f067d8))[1];
  func_0x000107c61174();
  func_0x000100b64c10(pcVar1,uVar2);
  (*pcVar1)();
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c6c8e8; end: 102c6c96b; -[_TtC24AdPlaybackImplementation32AdAttachmentCommercePdpPresenter commerceBrowserWillDismiss] */

/* WARNING: Possible PIC construction at 0x000102c6c924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c6c940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c6c928) */
/* WARNING: Removing unreachable block (ram,0x000102c6c944) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6c8e8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102c6c96c; end: 102c6c98b;  */

void FUN_102c6c96c(void)

{
  long unaff_x20;
  
  FUN_102c6c6ec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),7,1);
  return;
}



/* Entry: 102c6c98c; end: 102c6c9a7;  */

void FUN_102c6c98c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102c6c9a8; end: 102c6ca13;  */

void FUN_102c6c9a8(void)

{
  long unaff_x20;
  
  FUN_102c6c6ec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),8,0);
  return;
}



/* Entry: 102c6ca14; end: 102c6ca1b;  */

void FUN_102c6ca14(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102c6ca1c; end: 102c6cacf;  */

void FUN_102c6ca1c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000100d21040(*(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000100d21040(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 102c6cad0; end: 102c6ce07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_102c6cad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  char cStack_51;
  
  uVar11 = *unaff_x20;
  func_0x0001000d224c(&uStack_70);
  uVar13 = uStack_70;
  func_0x000107c614f0(uStack_70);
  uStack_88 = 0xd00000000000002c;
  uStack_80 = 0x800000010f103ee0;
  uStack_78 = 0;
  (**(code **)(lStack_68 + 8))
            (&cStack_51,&uStack_88,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar13,lStack_68);
  func_0x000107c615e8(uStack_70);
  if (cStack_51 == '\x01') {
    uVar3 = *(ulong *)(param_1 + _DAT_113068f48);
    func_0x000107c4de8c();
    if ((uVar3 & 1) != 0) {
      uVar13 = param_3;
      func_0x000107c30b0c();
      bVar2 = (int)uVar13 != 0x16;
      goto LAB_102c6cbb0;
    }
  }
  bVar2 = false;
LAB_102c6cbb0:
  uVar1 = *(undefined1 *)(unaff_x20 + 0x15);
  lVar4 = 0;
  FUN_102c6e884();
  func_0x000107c613fc();
  *(undefined1 *)(lVar4 + 0x10) = 0;
  puVar8 = &UNK_1105b9a60;
  puVar5 = puVar8;
  func_0x000107c613fc(&UNK_1105b9a60,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar6 = &UNK_1105b9a88;
  func_0x000107c613fc(&UNK_1105b9a88,0x31,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(long *)(puVar6 + 0x20) = param_1;
  *(undefined8 *)(puVar6 + 0x28) = param_2;
  puVar6[0x30] = uVar1;
  puVar7 = puVar8;
  func_0x000107c613fc(&UNK_1105b9a60,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puVar5 = &UNK_1105b9ab0;
  func_0x000107c613fc(&UNK_1105b9ab0,0x40,7);
  *(undefined **)(puVar5 + 0x10) = puVar7;
  puVar5[0x18] = bVar2;
  *(long *)(puVar5 + 0x20) = lVar4;
  *(undefined8 *)(puVar5 + 0x28) = param_3;
  *(long *)(puVar5 + 0x30) = param_1;
  *(undefined8 *)(puVar5 + 0x38) = param_2;
  func_0x000107c613fc(&UNK_1105b9a60,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  puVar7 = &UNK_1105b9ad8;
  func_0x000107c613fc(&UNK_1105b9ad8,0x20,7);
  uVar13 = 0;
  puVar12 = (undefined *)0x0;
  *(undefined **)(puVar7 + 0x10) = puVar8;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  if (bVar2) {
    puVar8 = &UNK_1105b9a60;
    func_0x000107c613fc(&UNK_1105b9a60,0x18,7);
    func_0x000107c61644(puVar8 + 0x10);
    puVar12 = &UNK_1105b9b00;
    func_0x000107c613fc(&UNK_1105b9b00,0x40,7);
    *(undefined **)(puVar12 + 0x10) = puVar8;
    *(long *)(puVar12 + 0x18) = lVar4;
    *(long *)(puVar12 + 0x20) = param_1;
    *(undefined8 *)(puVar12 + 0x28) = param_2;
    *(undefined8 *)(puVar12 + 0x30) = param_3;
    *(undefined8 *)(puVar12 + 0x38) = uVar11;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(lVar4);
    uVar13 = 0x102c6ebf4;
  }
  func_0x0001041a4f40(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(lVar4);
  pcVar9 = FUN_102c6ebc8;
  func_0x0001041a49d8(FUN_102c6ebc8,puVar6,0x102c6ebd8,puVar5,0x102c6ebec,puVar7,uVar13,puVar12);
  func_0x0001041c57dc(0);
  pcVar10 = pcVar9;
  func_0x0001041c4d7c(pcVar9);
  func_0x000107c61574(lVar4);
  func_0x000107c61170(pcVar9);
  return pcVar10;
}



/* Entry: 102c6ce08; end: 102c6d523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6ce08(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  uint param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  uStack_80 = param_3;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar7 = auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar9 = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = lVar10 - extraout_x12;
  bVar1 = param_1 == 0;
  if (bVar1) {
    func_0x000100b91acc();
  }
  else {
    func_0x000107c61174();
    func_0x0001041c25dc(lVar2);
    param_1 = 0;
    func_0x000100b91acc();
  }
  lVar5 = *(long *)(param_1 + -8);
  (**(code **)(lVar5 + 0x38))(lVar2,bVar1,1,param_1);
  func_0x00010191b8b4(lVar2,lVar10);
  func_0x000100b91acc(0);
  lVar3 = lVar10;
  (**(code **)(lVar5 + 0x30))(lVar10,1,param_1);
  if ((int)lVar3 != 1) {
    lVar3 = lVar10;
    func_0x000107c614c4(lVar10,param_1);
    if ((int)lVar3 == 1) {
      func_0x000102c6ec70(lVar10,puVar7,&SUB_100b91790);
      func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61648();
      if (param_2 != 0) {
        lVar10 = *(long *)(param_4 + _DAT_113068f48);
        func_0x000107c414c4();
        func_0x000107c61180();
        if (lVar10 == 0) {
          uVar6 = 0;
          uVar8 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(lVar10 + _DAT_11308fe10);
          uVar8 = ((undefined8 *)(lVar10 + _DAT_11308fe10))[1];
          func_0x000107c61434(uVar8);
          func_0x000107c61170(lVar10);
        }
        FUN_102c6d524(puVar7,uStack_80,uVar6,uVar8);
        func_0x000107c61574(param_2);
        func_0x000107c6142c(uVar8);
      }
      puVar4 = &SUB_100b91790;
      puVar9 = puVar7;
    }
    else {
      func_0x000102c6ec70(lVar10,puVar9,&SUB_100b915bc);
      func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61648();
      if (param_2 != 0) {
        func_0x000102c6d0f0(puVar9,uStack_80,param_4,param_5,param_6 & 1);
        func_0x000107c61574(param_2);
      }
      puVar4 = &SUB_100b915bc;
    }
    func_0x000102c6ecb4(puVar9,puVar4);
  }
  func_0x000102c6ec28(lVar2);
  return;
}



/* Entry: 102c6d524; end: 102c6d623;  */

/* WARNING: Possible PIC construction at 0x000102c6d5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c6d604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c6d5d8) */
/* WARNING: Removing unreachable block (ram,0x000102c6d608) */

void FUN_102c6d524(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0xa0) = 2;
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c5fb5c(*(undefined8 *)(param_1 + 8));
  }
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f103ec0);
  if (param_4 != 0) {
    func_0x000107c5fadc(param_3,param_4);
  }
  func_0x000107c610f8(PTR_PTR_1126b8fc0);
  func_0x000107c30b44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c6d624; end: 102c6dcf7;  */

void FUN_102c6d624(ulong param_1,uint param_2,long param_3,ulong param_4,long param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    func_0x0001000d224c(&puStack_a8);
    puVar1 = puStack_a8;
    func_0x000107c614f0(puStack_a8);
    uVar2 = 0;
    func_0x00010403c628(0xd00000000000003a,0x800000010f103f80,puVar1,uStack_a0);
    func_0x000107c615e8(puStack_a8);
    if (((uVar2 & 1) != 0) && (pcVar6 = *(code **)(param_3 + 0x78), pcVar6 != (code *)0x0)) {
      uVar5 = *(undefined8 *)(param_3 + 0x80);
      func_0x000107c6157c(uVar5);
      (*pcVar6)(0);
      func_0x000100d21040(pcVar6,uVar5);
    }
    if ((param_1 & 1) == 0) goto LAB_102c6d938;
    if (((param_4 & 1) == 0) || (*(char *)(param_5 + 0x10) == '\0')) {
      func_0x000102c6d960(param_7,param_8,param_6,0);
    }
    else if (*(char *)(param_5 + 0x10) == '\x01') {
      uVar4 = *(undefined8 *)(param_3 + 0x48);
      puVar1 = PTR_PTR_1126b8fc0;
      func_0x000107c610f8(PTR_PTR_1126b8fc0);
      func_0x000107c615f0(uVar4);
      uVar5 = 0xd000000000000018;
      func_0x000107c5fadc(0xd000000000000018,0x800000010f103ec0);
      func_0x000107c30b44(puVar1,uVar5,9,0,0,1);
      func_0x000107c61170(uVar5);
      func_0x000107c5cd94(uVar4);
      func_0x000107c615e8(uVar4);
      func_0x000107c61170(puVar1);
    }
    uVar4 = *(undefined8 *)(param_3 + 0x50);
    func_0x000107c615f0(uVar4);
    puVar1 = PTR_PTR_1126b8fa8;
    func_0x000107c610f8(PTR_PTR_1126b8fa8);
    uVar5 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
    func_0x000107c30b18(puVar1,uVar5,8,0xffffffffffffffff,0xffffffffffffffff,0,0,0,0);
    func_0x000107c61170(uVar5);
    func_0x000107c5cdc0(uVar4);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(puVar1);
  }
  else {
    if ((param_1 & 1) == 0) goto LAB_102c6d938;
    func_0x000102c6d960(param_7,param_8,param_6,1);
  }
  FUN_102c6dcf8(param_7,param_2 & 1);
  if ((param_7 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x98);
    puVar1 = &UNK_1105b9a60;
    func_0x000107c613fc(&UNK_1105b9a60,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,param_3);
    uStack_88 = 0x102c6ec04;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105b9b18;
    ppuVar3 = &puStack_a8;
    puStack_80 = puVar1;
    func_0x000107c60bc4(ppuVar3);
    puVar1 = puStack_80;
    func_0x000107c615f0(uVar5);
    func_0x000107c61574(puVar1);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(param_3);
    func_0x000107c615e8(uVar5);
    return;
  }
LAB_102c6d938:
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 102c6dcf8; end: 102c6de4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c6dcf8(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(int *)(*(long *)(param_1 + _DAT_113068f40) + _DAT_11308f128) == 0x16) &&
     (*(int *)(*(long *)(param_1 + _DAT_113068f48) + _DAT_11308f1e0) == 6)) {
    func_0x0001000d224c(&uStack_40);
    uVar1 = uStack_40;
    func_0x000107c614f0(uStack_40);
    uVar2 = 0;
    func_0x00010403c628(0xd00000000000002c,0x800000010f103fc0,uVar1,uStack_38);
    func_0x000107c615e8(uStack_40);
    if (((uVar2 & 1) != 0) && ((param_2 & 1) == 0)) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 102c6de4c; end: 102c6e46b;  */

void FUN_102c6de4c(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((param_1 & 1) == 0) {
      func_0x0001000d224c(&uStack_68);
      uVar3 = uStack_68;
      func_0x000107c614f0(uStack_68);
      uVar1 = 0;
      func_0x00010403c628(0xd00000000000003a,0x800000010f103f80,uVar3,uStack_60);
      func_0x000107c615e8(uStack_68);
      if (((uVar1 & 1) != 0) && (pcVar5 = *(code **)(param_2 + 0x78), pcVar5 != (code *)0x0)) {
        uVar3 = *(undefined8 *)(param_2 + 0x80);
        func_0x000107c6157c(uVar3);
        (*pcVar5)(1);
        func_0x000100d21040(pcVar5,uVar3);
      }
      uVar4 = *(undefined8 *)(param_2 + 0x50);
      func_0x000107c615f0(uVar4);
      puVar2 = PTR_PTR_1126b8fa8;
      func_0x000107c610f8(PTR_PTR_1126b8fa8);
      uVar3 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
      func_0x000107c30b18(puVar2,uVar3,7,0xffffffffffffffff,0xffffffffffffffff,1,0,0,0);
      func_0x000107c61170(uVar3);
      func_0x000107c5cdc0(uVar4);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(uVar4);
      func_0x000107c61170(puVar2);
    }
    else {
      func_0x000107c61574();
    }
  }
  return;
}



/* Entry: 102c6e46c; end: 102c6e48b;  */

void FUN_102c6e46c(void)

{
  FUN_102c6cad0();
  return;
}



/* Entry: 102c6e48c; end: 102c6e4ef;  */

void FUN_102c6e48c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_102c6eaa8(param_1,param_3);
  return;
}



/* Entry: 102c6e4f0; end: 102c6e4fb;  */

void FUN_102c6e4f0(void)

{
  long *unaff_x20;
  
  *(undefined8 *)(*unaff_x20 + 0xa0) = 0;
  return;
}



/* Entry: 102c6e4fc; end: 102c6e7b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6e4fc(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_b0 [40];
  long alStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  puVar2 = *(undefined1 **)(param_1 + _DAT_113068f48);
  uVar5 = param_2;
  func_0x000107c414c4();
  func_0x000107c61180();
  if (puVar2 == (undefined1 *)0x0) {
    FUN_102c6ecf0();
    func_0x000107c613f8(&UNK_1105b9f30,puVar2,0,0);
    *puVar2 = 2;
    func_0x000107c61654();
    return;
  }
  alStack_88[0] = *(long *)(puVar2 + _DAT_11308fe30);
  if (alStack_88[0] < 2) {
    if (alStack_88[0] != 0) {
      if (alStack_88[0] != 1) {
LAB_102c6e790:
        func_0x000107c60614(&UNK_110797578,alStack_88,&UNK_110797578,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102c6e7b4);
        (*pcVar1)();
      }
      if ((*(char *)(unaff_x20 + 0xa8) == '\x01') &&
         (lVar6 = *(long *)(unaff_x20 + 0x38), *(long *)(lVar6 + 0x10) != 0)) {
        func_0x000107c61434(lVar6);
        lVar3 = 1;
        func_0x000101c785a8(1);
        if ((uVar5 & 1) == 0) goto LAB_102c6e758;
        FUN_102c6ea4c(*(long *)(lVar6 + 0x38) + lVar3 * 0x28,auStack_b0);
        func_0x000107c6142c(lVar6);
        FUN_102c6ea90(auStack_b0,alStack_88);
        func_0x0001000a8868(alStack_88,uStack_70);
        uVar4 = 3;
        goto LAB_102c6e6f4;
      }
    }
  }
  else if (alStack_88[0] == 2) {
    lVar6 = *(long *)(unaff_x20 + 0x38);
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x000107c61434(lVar6);
      lVar3 = 2;
      func_0x000101c785a8(2);
      if ((uVar5 & 1) == 0) {
LAB_102c6e758:
        func_0x000107c61170(puVar2);
        func_0x000107c6142c(lVar6);
        return;
      }
      FUN_102c6ea4c(*(long *)(lVar6 + 0x38) + lVar3 * 0x28,auStack_b0);
      func_0x000107c6142c(lVar6);
      FUN_102c6ea90(auStack_b0,alStack_88);
      func_0x0001000a8868(alStack_88,uStack_70);
      uVar4 = 4;
LAB_102c6e6f4:
      func_0x000102c79dc0(uVar4);
      (**(code **)(lStack_68 + 8))(param_1,param_2,uVar4,uStack_70,lStack_68);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar2);
      func_0x0001000834e4(alStack_88);
      return;
    }
  }
  else {
    if (alStack_88[0] != 3) goto LAB_102c6e790;
    lVar6 = *(long *)(unaff_x20 + 0x38);
    if (*(long *)(lVar6 + 0x10) != 0) {
      func_0x000107c61434(lVar6);
      lVar3 = 1;
      func_0x000101c785a8(1);
      if ((uVar5 & 1) == 0) goto LAB_102c6e758;
      FUN_102c6ea4c(*(long *)(lVar6 + 0x38) + lVar3 * 0x28,auStack_b0);
      func_0x000107c6142c(lVar6);
      FUN_102c6ea90(auStack_b0,alStack_88);
      func_0x0001000a8868(alStack_88,uStack_70);
      uVar4 = 9;
      goto LAB_102c6e6f4;
    }
  }
  func_0x000107c61170();
  return;
}



/* Entry: 102c6e7b4; end: 102c6e7c7;  */

bool FUN_102c6e7b4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102c6e7c8; end: 102c6e873;  */

void FUN_102c6e7c8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102c6e874; end: 102c6e883;  */

void FUN_102c6e874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c6e884; end: 102c6e8a3;  */

void FUN_102c6e884(void)

{
  func_0x000107c61168(&PTR_PTR_112f06950);
  return;
}



/* Entry: 102c6e8a4; end: 102c6ea0b;  */

int FUN_102c6e8a4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102c6e920;
        goto LAB_102c6e904;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102c6e904:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102c6e920:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102c6ea0c; end: 102c6ea4b;  */

void FUN_102c6ea0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f069b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3a204;
  func_0x000107c61520(&UNK_10db3a204,&UNK_1105b99e8);
  puRam0000000112f069b0 = puVar1;
  return;
}



/* Entry: 102c6ea4c; end: 102c6ea8f;  */

long FUN_102c6ea4c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c6ea90; end: 102c6eaa7;  */

undefined8 * FUN_102c6ea90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102c6eaa8; end: 102c6ebc7;  */

/* WARNING: Possible PIC construction at 0x000102c6eb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c6eb90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c6eb74) */
/* WARNING: Removing unreachable block (ram,0x000102c6eb94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6eaa8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_113067d38);
  if (lVar3 != 0) {
    func_0x000107c61174(lVar3);
    func_0x000107c5ed70();
    puVar1 = PTR_PTR_1126b8fc0;
    func_0x000107c610f8(PTR_PTR_1126b8fc0);
    uVar2 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f103ec0);
    func_0x000107c5fadc(lVar3,param_2);
    func_0x000107c30b44(puVar1,uVar2,1,lVar3,0,0);
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 102c6ebc8; end: 102c6ec27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6ebc8(long param_1)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  bVar2 = *(byte *)(unaff_x20 + 0x30);
  lVar3 = 0;
  func_0x000100b91790();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar10 = auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar12 = puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar13 = (long)puVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar13 - extraout_x12;
  bVar1 = param_1 == 0;
  if (bVar1) {
    func_0x000100b91acc();
  }
  else {
    func_0x000107c61174();
    func_0x0001041c25dc(lVar3);
    param_1 = 0;
    func_0x000100b91acc();
  }
  lVar8 = *(long *)(param_1 + -8);
  (**(code **)(lVar8 + 0x38))(lVar3,bVar1,1,param_1);
  func_0x00010191b8b4(lVar3,lVar13);
  func_0x000100b91acc(0);
  lVar4 = lVar13;
  (**(code **)(lVar8 + 0x30))(lVar13,1,param_1);
  if ((int)lVar4 != 1) {
    lVar4 = lVar13;
    func_0x000107c614c4(lVar13,param_1);
    if ((int)lVar4 == 1) {
      func_0x000102c6ec70(lVar13,puVar10,&SUB_100b91790);
      func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
      lVar6 = lVar6 + 0x10;
      func_0x000107c61648();
      if (lVar6 != 0) {
        lVar5 = *(long *)(lVar5 + _DAT_113068f48);
        func_0x000107c414c4();
        func_0x000107c61180();
        if (lVar5 == 0) {
          uVar9 = 0;
          uVar11 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar5 + _DAT_11308fe10);
          uVar11 = ((undefined8 *)(lVar5 + _DAT_11308fe10))[1];
          func_0x000107c61434(uVar11);
          func_0x000107c61170(lVar5);
        }
        FUN_102c6d524(puVar10,uStack_80,uVar9,uVar11);
        func_0x000107c61574(lVar6);
        func_0x000107c6142c(uVar11);
      }
      puVar7 = &SUB_100b91790;
      puVar12 = puVar10;
    }
    else {
      func_0x000102c6ec70(lVar13,puVar12,&SUB_100b915bc);
      func_0x000107c61428(lVar6 + 0x10,auStack_78,0,0);
      lVar6 = lVar6 + 0x10;
      func_0x000107c61648();
      if (lVar6 != 0) {
        func_0x000102c6d0f0(puVar12,uStack_80,lVar5,uVar9,bVar2 & 1);
        func_0x000107c61574(lVar6);
      }
      puVar7 = &SUB_100b915bc;
    }
    func_0x000102c6ecb4(puVar12,puVar7);
  }
  func_0x000102c6ec28(lVar3);
  return;
}



/* Entry: 102c6ec28; end: 102c6ecef;  */

undefined8 FUN_102c6ec28(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d3b128;
  func_0x0001000285a8(0x112d3b128,&UNK_10d996bb0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102c6ecf0; end: 102c6ed7b;  */

void FUN_102c6ecf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f069b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3a5b8;
  func_0x000107c61520(&UNK_10db3a5b8,&UNK_1105b9f30);
  puRam0000000112f069b8 = puVar1;
  return;
}



/* Entry: 102c6ed7c; end: 102c6ef93;  */

void FUN_102c6ed7c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c44344(uVar1,param_2,param_1,param_2);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c30ad8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  lVar5 = param_2;
  func_0x000107c61170(uVar2);
  func_0x000107c30b1c(param_1);
  func_0x000107c30b38();
  func_0x000107c30b3c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar6 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(uVar3,param_2);
  func_0x000107c6142c(param_2);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c5fadc(lVar6,lVar5);
  }
  puVar4 = PTR_PTR_1126b8fa8;
  func_0x000107c610f8(PTR_PTR_1126b8fa8);
  func_0x000107c30b18();
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar6);
  func_0x00010468506c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(puVar4);
  uVar2 = uVar1;
  func_0x000104684b9c(uVar1,puVar4,0);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    lVar5 = lStack_68;
    func_0x000107c3d328(lStack_68);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    func_0x000107c4d664(lVar5);
    func_0x000107c61170(lVar5);
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102c6ef94; end: 102c6ef9f; -[_TtC24AdPlaybackImplementation24AdAttachmentEventTracker trackLifecycleEventV2:adTrackCommon:] */

void FUN_102c6ef94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_102c6ed7c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102c6efa0; end: 102c6f0d7;  */

void FUN_102c6efa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c30c30();
  func_0x000107c44340(uVar4);
  func_0x000107c61180();
  uVar1 = uVar4;
  func_0x000107c30ad8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  FUN_102c78958(uVar2,param_2);
  func_0x000107c6142c(param_2);
  func_0x0001046a9c0c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar2);
  uVar1 = uVar4;
  func_0x0001046a9818(uVar4,uVar2);
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    lVar3 = lStack_48;
    func_0x000107c3d554(lStack_48);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    func_0x000107c4d664(lVar3);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102c6f0d8; end: 102c6f0e3; -[_TtC24AdPlaybackImplementation24AdAttachmentEventTracker trackAdWebViewEventV2:adTrackCommon:] */

void FUN_102c6f0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_102c6efa0(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102c6f0e4; end: 102c6f27f;  */

void FUN_102c6f0e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c30b5c();
  func_0x000107c44340();
  func_0x000107c61180();
  lVar1 = lVar5;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c30b5c(param_1);
  uVar2 = param_1;
  func_0x000107c30b60(param_1);
  func_0x000107c61180();
  func_0x000107c30b64(param_1);
  func_0x000107c30b68(param_1);
  puVar3 = PTR_PTR_1126b8fd0;
  func_0x000107c610f8(PTR_PTR_1126b8fd0);
  func_0x000107c30b58();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
  func_0x00010467de68(0);
  func_0x000107c610f8();
  func_0x000107c61174(lVar5);
  func_0x000107c61174(puVar3);
  lVar1 = lVar5;
  func_0x00010467da74(lVar5,puVar3);
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    lVar4 = lStack_58;
    func_0x000107c3d204(lStack_58);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_58);
    func_0x000107c4d664(lVar4);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 102c6f280; end: 102c6f28b; -[_TtC24AdPlaybackImplementation24AdAttachmentEventTracker trackAppInstallEventV2:adTrackCommon:] */

void FUN_102c6f280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_102c6f0e4(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102c6f28c; end: 102c6f3c7;  */

void FUN_102c6f28c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c44340(lVar1,param_2,param_1,param_2);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c30ad8();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar3 = PTR_PTR_1126b8fe0;
  func_0x000107c610f8(PTR_PTR_1126b8fe0);
  func_0x000107c30b6c();
  func_0x000107c61170(lVar2);
  func_0x00010467bcfc(0);
  func_0x000107c610f8();
  func_0x000107c61174(lVar1);
  func_0x000107c61174(puVar3);
  lVar2 = lVar1;
  func_0x00010467b908(lVar1,puVar3);
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    lVar4 = lStack_48;
    func_0x000107c3d1fc(lStack_48);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    func_0x000107c4d664(lVar4);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 102c6f3c8; end: 102c6f41b; -[_TtC24AdPlaybackImplementation24AdAttachmentEventTracker trackAdToMessageEventV2:adTrackCommon:] */

void FUN_102c6f3c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_102c6f28c(param_3,param_4);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102c6f41c; end: 102c6f553;  */

void FUN_102c6f41c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c30b48();
  func_0x000107c44340(uVar4);
  func_0x000107c61180();
  uVar1 = uVar4;
  func_0x000107c30ad8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  FUN_102c7996c(uVar2,param_2);
  func_0x000107c6142c(param_2);
  func_0x000104681c70(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar2);
  uVar1 = uVar4;
  func_0x00010468187c(uVar4,uVar2);
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    lVar3 = lStack_48;
    func_0x000107c3d2b8(lStack_48);
    func_0x000107c61180();
    func_0x000107c615e8(lStack_48);
    func_0x000107c4d664(lVar3);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102c6f554; end: 102c6f55f; -[_TtC24AdPlaybackImplementation24AdAttachmentEventTracker trackDeepLinkEventV2:adTrackCommon:] */

void FUN_102c6f554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  FUN_102c6f41c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102c6f560; end: 102c6f5d7;  */

void FUN_102c6f560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  (*param_5)(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102c6f5d8; end: 102c6f77f;  */

void FUN_102c6f5d8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&uStack_68);
  if (param_2 == 0) {
    param_1 = 0;
    uVar4 = 0;
    lVar5 = -0x2000000000000000;
  }
  else {
    uVar4 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    lVar5 = param_2;
  }
  func_0x000102458e14(0);
  uVar1 = 0x19;
  func_0x000103dec308(0x19);
  func_0x000107c602fc(0x41);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  uVar3 = 0;
  func_0x000107c60714(*unaff_x20,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0xd00000000000003c,0x800000010f104070);
  func_0x000107c61434(param_2);
  func_0x000107c5fb78(param_1,lVar5);
  func_0x000107c6142c(lVar5);
  uVar3 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
  uVar2 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f1040b0);
  func_0x000107c3e200(uStack_68);
  func_0x000107c615e8(uStack_68);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102c6f780; end: 102c6f7eb;  */

void FUN_102c6f780(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c6f7ec; end: 102c6fadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102c6f7ec(ulong param_1,ulong param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6,long param_7)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uStack_68;
  
  uVar7 = *(ulong *)(param_1 + _DAT_113068f48);
  FUN_102c70510();
  param_1 = param_1 & 0xffffffff;
  if (param_1 == 1) {
    if (param_7 == 0) {
LAB_102c6f874:
      if (param_4 == 0) {
        uVar4 = uVar7;
        func_0x000107c425d8();
        iVar8 = (int)uVar4;
        goto LAB_102c6f8f4;
      }
      func_0x0001000d224c(&uStack_68);
      uVar4 = uStack_68;
      uVar3 = uStack_68;
      func_0x000107c426c8();
      func_0x000107c615e8(uVar4);
      if ((uVar3 & 1) == 0) goto LAB_102c6f8a0;
    }
    else {
      func_0x000107c6157c(param_7);
      FUN_102c702a0(param_5,param_6,param_7);
      func_0x000107c61574(param_7);
      if ((param_5 & 1) == 0) goto LAB_102c6f874;
    }
LAB_102c6fa6c:
    uVar6 = 0;
    goto LAB_102c6fa98;
  }
LAB_102c6f8a0:
  uVar4 = uVar7;
  func_0x000107c425d8();
  if ((uVar4 & 1) == 0) {
    if (param_4 == 0) {
      iVar8 = 0;
    }
    else {
      func_0x0001000d224c(&uStack_68);
      uVar4 = uStack_68;
      uVar3 = uStack_68;
      func_0x000107c437f8();
      iVar8 = (int)uVar3;
      func_0x000107c615e8(uVar4);
    }
  }
  else {
    iVar8 = 1;
  }
LAB_102c6f8f4:
  uVar4 = uVar7;
  func_0x000107c5e224();
  func_0x000107c61180();
  if (uVar4 == 0) {
LAB_102c6f95c:
    uVar4 = uVar7;
    func_0x000107c5e224();
    func_0x000107c61180();
    uVar3 = param_2;
    if (uVar4 != 0) {
      lVar9 = *(long *)(uVar4 + _DAT_113091378);
      lVar5 = lVar9;
      func_0x000107c61174();
      func_0x000107c61170(uVar4);
      if (lVar9 != 0) {
        iVar1 = *(int *)(lVar5 + _DAT_113091478);
        func_0x000107c61170(lVar5);
        uVar3 = 3;
        if (iVar1 != 3) {
          uVar3 = param_2;
        }
      }
    }
  }
  else {
    lVar9 = *(long *)(uVar4 + _DAT_113091378);
    lVar5 = lVar9;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    if ((lVar9 == 0) ||
       (iVar1 = *(int *)(lVar5 + _DAT_113091478), func_0x000107c61170(lVar5), iVar1 != 2))
    goto LAB_102c6f95c;
    uVar3 = 3;
  }
  if (param_4 == 0) {
LAB_102c6fa08:
    func_0x000107c5e224();
    func_0x000107c61180();
    if (uVar7 == 0) goto LAB_102c6fa74;
LAB_102c6fa1c:
    lVar9 = *(long *)(uVar7 + _DAT_1130913c0);
    lVar5 = lVar9;
    func_0x000107c61174(lVar9);
    func_0x000107c61170(uVar7);
    if (lVar9 == 0) goto LAB_102c6fa74;
    func_0x000107c61170(lVar5);
    uStack_68 = 9;
    if (iVar8 == 0) {
      uStack_68 = uVar3;
    }
    if (param_1 != 1) {
      uStack_68 = param_2;
    }
    if ((int)uStack_68 == 3) goto LAB_102c6fa6c;
  }
  else {
    func_0x0001000d224c(&uStack_68);
    uVar4 = uStack_68;
    func_0x000107c42604();
    func_0x000107c615e8(uStack_68);
    if ((int)uVar4 == 0) goto LAB_102c6fa08;
    func_0x000107c5e228();
    func_0x000107c61180();
    if (uVar7 != 0) goto LAB_102c6fa1c;
LAB_102c6fa74:
    uStack_68 = 9;
    if (iVar8 == 0) {
      uStack_68 = uVar3;
    }
    if (param_1 != 1) {
      uStack_68 = param_2;
    }
  }
  if (0xf < uStack_68) {
    func_0x000107c60614(&UNK_110796f88,&uStack_68,&UNK_110796f88,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102c6fae0);
    (*pcVar2)();
  }
  uVar6 = 0x1488 >> (ulong)((uint)uStack_68 & 0x1f);
LAB_102c6fa98:
  return uVar6 & 1;
}



/* Entry: 102c6fae0; end: 102c6fe07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6fae0(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar5;
  code *pcVar6;
  undefined *unaff_x21;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined *unaff_x27;
  long lVar10;
  long alStack_f0 [6];
  long alStack_c0 [4];
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar7 = puVar3 + -extraout_x12;
  lVar8 = *(long *)(param_1 + _DAT_113068f48);
  puVar1 = param_2;
  FUN_102c6fe08(puVar7);
  lVar9 = lVar8;
  lVar2 = lVar8;
  if (unaff_x21 == (undefined *)0x0) {
    puVar1 = param_2;
    func_0x000107c30b00();
    if ((int)puVar1 != 0x16) {
      func_0x000107c30b00();
    }
    unaff_x27 = *(undefined **)(unaff_x20 + 0x10);
    func_0x000100029394(puVar7,puVar3);
    lVar2 = 0;
    func_0x000107c5ede0();
    lVar9 = *(long *)(lVar2 + -8);
    puVar1 = puVar3;
    (**(code **)(lVar9 + 0x30))(puVar3,1,lVar2);
    puVar5 = (undefined1 *)0x0;
    if ((int)puVar1 != 1) {
      func_0x000107c5ed90();
      (**(code **)(lVar9 + 8))(puVar3,lVar2);
      puVar5 = puVar1;
    }
    puVar3 = param_2;
    func_0x000107c30af8();
    func_0x000107c61180();
    func_0x000107c3fd70();
    func_0x000107c61180();
    lStack_70 = 0;
    unaff_x21 = unaff_x27;
    func_0x000107c4eeac();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar8);
    lVar2 = lStack_70;
    puVar1 = puVar7;
    if (((ulong)unaff_x21 & 1) == 0) {
      lVar9 = lStack_70;
      func_0x000107c61174(lStack_70);
      func_0x000107c5ed30();
      func_0x000107c61170(lVar9);
      func_0x000107c61654();
      unaff_x20 = *(long *)(unaff_x20 + 0x20);
      func_0x000107c614cc(lVar2,auStack_78,auStack_90);
      lVar9 = lStack_88;
      puVar3 = puStack_80;
      func_0x000107c60640();
      unaff_x21 = PTR_PTR_1126b8fa8;
      func_0x000107c610f8();
      unaff_x27 = (undefined *)0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
      func_0x000107c5fadc(lVar9,puVar3);
      *(long *)(puVar7 + -0x10) = lVar9;
      *(undefined8 *)(puVar7 + -8) = 0;
      *(undefined8 *)(puVar7 + -0x18) = 0;
      puVar7[-0x20] = 0;
      func_0x000107c30b18(unaff_x21,unaff_x27,5,0xffffffffffffffff,0xffffffffffffffff,0,0,0);
      func_0x000107c6142c(puVar3);
      func_0x000107c61170(unaff_x27);
      func_0x000107c61170(lVar9);
      func_0x000107c5cdc0(unaff_x20);
      func_0x000107c61170(unaff_x21);
      func_0x000107c61654();
      func_0x0001000293e4();
    }
    else {
      func_0x000107c61174(lStack_70);
      func_0x0001000293e4();
      lVar9 = lVar2;
      lVar2 = lVar8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    *(undefined **)(puVar7 + -0x50) = unaff_x27;
    *(undefined **)(puVar7 + -0x48) = unaff_x21;
    *(undefined1 **)(puVar7 + -0x40) = puVar3;
    *(long *)(puVar7 + -0x38) = lVar2;
    *(long *)(puVar7 + -0x30) = unaff_x20;
    *(undefined1 **)(puVar7 + -0x28) = puVar7;
    *(long *)(puVar7 + -0x20) = lVar9;
    *(undefined1 **)(puVar7 + -0x18) = param_2;
    *(undefined1 **)(puVar7 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(puVar7 + -8) = FUN_102c6fe08;
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar7 + (-0x50 - extraout_x8_01);
    lVar2 = 0;
    func_0x000107c5ede0();
    lVar10 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
    lVar8 = (long)puVar7 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar1;
    func_0x000107c30b00();
    if (((int)puVar3 == 10) || (*(int *)(lVar9 + _DAT_11308f1e0) == 10)) {
      func_0x000107c30af8(puVar1);
      func_0x000107c61180();
      FUN_102c6ffa8(puVar7);
      func_0x000107c61170(puVar1);
      puVar1 = puVar7;
      (**(code **)(lVar10 + 0x30))(puVar7,1,lVar2);
      if ((int)puVar1 == 1) {
        func_0x0001000293e4(puVar7);
        FUN_102c70260();
        func_0x000107c613f8(&UNK_1105b9c20,puVar7,0,0);
        func_0x000107c61654();
        return;
      }
      pcVar6 = *(code **)(lVar10 + 0x20);
      (*pcVar6)(lVar8,puVar7,lVar2);
      (*pcVar6)(extraout_x8_00,lVar8,lVar2);
      pcVar6 = *(code **)(lVar10 + 0x38);
      uVar4 = 0;
    }
    else {
      pcVar6 = *(code **)(lVar10 + 0x38);
      uVar4 = 1;
    }
    (*pcVar6)(extraout_x8_00,uVar4,1,lVar2);
    return;
  }
  return;
}



/* Entry: 102c6fe08; end: 102c6ffa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6fe08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar4 = param_2;
  func_0x000107c30b00();
  if (((int)uVar4 == 10) || (*(int *)(unaff_x20 + _DAT_11308f1e0) == 10)) {
    func_0x000107c30af8(param_2);
    func_0x000107c61180();
    FUN_102c6ffa8(puVar3);
    func_0x000107c61170(param_2);
    puVar2 = puVar3;
    (**(code **)(lVar7 + 0x30))(puVar3,1,lVar1);
    if ((int)puVar2 == 1) {
      func_0x0001000293e4(puVar3);
      FUN_102c70260();
      func_0x000107c613f8(&UNK_1105b9c20,puVar3,0,0);
      func_0x000107c61654();
      return;
    }
    pcVar5 = *(code **)(lVar7 + 0x20);
    (*pcVar5)(lVar6,puVar3,lVar1);
    (*pcVar5)(param_1,lVar6,lVar1);
    pcVar5 = *(code **)(lVar7 + 0x38);
    uVar4 = 0;
  }
  else {
    pcVar5 = *(code **)(lVar7 + 0x38);
    uVar4 = 1;
  }
  (*pcVar5)(param_1,uVar4,1,lVar1);
  return;
}



/* Entry: 102c6ffa8; end: 102c7025f;  */

/* WARNING: Possible PIC construction at 0x000102c70014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c70228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c700a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c70144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c701ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c701d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c701f0) */
/* WARNING: Removing unreachable block (ram,0x000102c70148) */
/* WARNING: Removing unreachable block (ram,0x000102c700a8) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102c70018) */
/* WARNING: Removing unreachable block (ram,0x000102c701d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6ffa8(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = unaff_x20;
  func_0x000107c3fd64();
  if ((int)lVar1 == 3) {
    func_0x000107c5e228();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      func_0x000107c5d7e8();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        func_0x000107c5edb4(param_1);
      }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  else {
    lVar1 = unaff_x20;
    func_0x000107c3fd64();
    if ((int)lVar1 == 6) {
      func_0x000107c414cc();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        lVar1 = ((undefined8 *)(unaff_x20 + _DAT_11308fe28))[1];
        if (lVar1 == 0) {
          lVar1 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
        }
        else {
          uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308fe28);
          func_0x000107c61434(lVar1);
          func_0x000107c5edd0(param_1,uVar3,lVar1);
        }
        goto code_r0x000107c61170;
      }
    }
    else {
      lVar1 = unaff_x20;
      func_0x000107c3fd64();
      if ((int)lVar1 == 0x11) {
        func_0x000107c5af08();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          lVar1 = *(long *)(unaff_x20 + _DAT_113090f88);
          if (lVar1 == 0) {
            lVar1 = *(long *)(unaff_x20 + _DAT_113090f90);
            if (lVar1 != 0) {
              func_0x000107c61174();
              func_0x000107c5d7e8();
              func_0x000107c61180();
              if (lVar1 == 0) {
                func_0x000107c61170(unaff_x20);
              }
              else {
                func_0x000107c5edb4(param_1);
              }
            }
          }
          else {
            lVar2 = ((undefined8 *)(lVar1 + _DAT_11308fe28))[1];
            if (lVar2 == 0) {
              func_0x000107c61174(lVar1);
            }
            else {
              uVar3 = *(undefined8 *)(lVar1 + _DAT_11308fe28);
              func_0x000107c61174(lVar1);
              func_0x000107c61434(lVar2);
              func_0x000107c5edd0(param_1,uVar3,lVar2);
            }
          }
          goto code_r0x000107c61170;
        }
      }
    }
  }
  lVar1 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000102c7025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,1,1,lVar1);
  return;
}



/* Entry: 102c70260; end: 102c7029f;  */

void FUN_102c70260(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f06b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3a38c;
  func_0x000107c61520(&UNK_10db3a38c,&UNK_1105b9c20);
  puRam0000000112f06b30 = puVar1;
  return;
}



/* Entry: 102c702a0; end: 102c70327;  */

uint FUN_102c702a0(ulong param_1,char param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_2 == '\x01' || (param_1 & 0xfffffffe) != 0x10) {
    uVar2 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_30);
    uVar1 = uStack_30;
    func_0x000107c614f0(uStack_30);
    uVar2 = 0x33;
    func_0x00010403c628(0xd000000000000033,0x800000010f104030,uVar1,uStack_28);
    func_0x000107c615e8(uStack_30);
  }
  return uVar2 & 1;
}



/* Entry: 102c70328; end: 102c70417;  */

uint FUN_102c70328(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102c70418; end: 102c70457;  */

void FUN_102c70418(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f06b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3a364;
  func_0x000107c61520(&UNK_10db3a364,&UNK_1105b9c20);
  puRam0000000112f06b38 = puVar1;
  return;
}



/* Entry: 102c70458; end: 102c7045f;  */

undefined8 FUN_102c70458(void)

{
  return 1;
}



/* Entry: 102c70460; end: 102c704ff;  */

void FUN_102c70460(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102c70500; end: 102c7050f;  */

void FUN_102c70500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102c70510; end: 102c70747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c70510(void)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long unaff_x20;
  
  lVar4 = 0;
  func_0x0001046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  iVar3 = *(int *)(unaff_x20 + _DAT_11308f1e0);
  if ((iVar3 == 1) || (lVar6 = unaff_x20, func_0x000107c3fd64(), (int)lVar6 == 1)) {
    uVar5 = 2;
  }
  else if ((iVar3 == 3) || (lVar6 = unaff_x20, func_0x000107c3fd64(), (int)lVar6 == 3)) {
    func_0x000107c49f38();
    uVar5 = 8;
    if ((int)unaff_x20 == 0) {
      uVar5 = 1;
    }
  }
  else if ((iVar3 == 6) || (lVar6 = unaff_x20, func_0x000107c3fd64(), (int)lVar6 == 6)) {
    uVar5 = 3;
  }
  else {
    if (iVar3 < 0x10) {
      if (iVar3 == 0xd) {
        return 4;
      }
      if (iVar3 == 0xe) {
        return 5;
      }
    }
    else {
      if (iVar3 == 0x10) {
        return 7;
      }
      if (iVar3 == 0x13) {
        return 6;
      }
      if (iVar3 == 0x14) {
        func_0x000107c61174();
        func_0x0001047c15e8(puVar8);
        if ((((*(int *)(puVar8 + (long)*(int *)(lVar4 + 0x70) + 0x48) == 4) &&
             (*(long *)(unaff_x20 + _DAT_11308f208) != 0)) &&
            (lVar4 = *(long *)(*(long *)(unaff_x20 + _DAT_11308f208) + _DAT_113091070), lVar4 != 0))
           && (lVar4 = *(long *)(lVar4 + _DAT_113091020), lVar4 != 0)) {
          lVar4 = *(long *)(lVar4 + _DAT_113090ca8);
          lVar6 = *(long *)(lVar4 + _DAT_113090ce8);
          if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + _DAT_113091338), lVar6 != 0)) {
            puVar1 = (ulong *)(lVar6 + _DAT_113090a70);
            uVar7 = puVar1[1];
            if (uVar7 != 0) {
              uVar2 = *puVar1 & 0xffffffffffff;
              if ((uVar7 & 0x2000000000000000) != 0) {
                uVar2 = uVar7 >> 0x38 & 0xf;
              }
              if (uVar2 != 0) {
                func_0x0001018abbc4(puVar8);
                return 1;
              }
            }
          }
          if (*(long *)(lVar4 + _DAT_113090ce0) != 0) {
            func_0x0001018abbc4(puVar8);
            return 3;
          }
        }
        func_0x0001018abbc4(puVar8);
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 102c70748; end: 102c70883;  */

undefined1  [16] FUN_102c70748(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_18;
  
  uVar3 = 0xe400000000000000;
  uVar2 = 0x656e6f4e;
  switch(param_1) {
  case 1:
    uVar3 = 0xe700000000000000;
    uVar2 = 0x77656956626557;
  case 0:
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  case 2:
    auVar7._8_8_ = 0xea00000000006c6c;
    auVar7._0_8_ = 0x6174736e49707041;
    return auVar7;
  case 3:
    auVar8._8_8_ = 0xe800000000000000;
    auVar8._0_8_ = 0x6b6e694c70656544;
    return auVar8;
  case 4:
    auVar5._8_8_ = 0xe800000000000000;
    auVar5._0_8_ = 0x6c6c61436f546441;
    return auVar5;
  case 5:
    uVar2 = 0x7373654d6f546441;
    break;
  case 6:
    auVar10._8_8_ = 0xe600000000000000;
    auVar10._0_8_ = 0x796576727553;
    return auVar10;
  case 7:
    auVar9._8_8_ = 0xe700000000000000;
    auVar9._0_8_ = 0x6e65476461654c;
    return auVar9;
  case 8:
    uVar2 = 0x50746e6174736e49;
    break;
  case 9:
    auVar6._8_8_ = 0xe800000000000000;
    auVar6._0_8_ = 0x656c626179616c50;
    return auVar6;
  default:
    uStack_18 = param_1;
    func_0x000107c60614(&UNK_11074f6a8,&uStack_18,&UNK_11074f6a8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c70884);
    (*pcVar1)();
  }
  auVar11._8_8_ = 0xeb00000000656761;
  auVar11._0_8_ = uVar2;
  return auVar11;
}



/* Entry: 102c70884; end: 102c7088b;  */

undefined1  [16] FUN_102c70884(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uStack_18;
  
  uStack_18 = *unaff_x20;
  uVar3 = 0xe400000000000000;
  uVar2 = 0x656e6f4e;
  switch(uStack_18) {
  case 1:
    uVar3 = 0xe700000000000000;
    uVar2 = 0x77656956626557;
  case 0:
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  case 2:
    auVar7._8_8_ = 0xea00000000006c6c;
    auVar7._0_8_ = 0x6174736e49707041;
    return auVar7;
  case 3:
    auVar8._8_8_ = 0xe800000000000000;
    auVar8._0_8_ = 0x6b6e694c70656544;
    return auVar8;
  case 4:
    auVar5._8_8_ = 0xe800000000000000;
    auVar5._0_8_ = 0x6c6c61436f546441;
    return auVar5;
  case 5:
    uVar2 = 0x7373654d6f546441;
    break;
  case 6:
    auVar10._8_8_ = 0xe600000000000000;
    auVar10._0_8_ = 0x796576727553;
    return auVar10;
  case 7:
    auVar9._8_8_ = 0xe700000000000000;
    auVar9._0_8_ = 0x6e65476461654c;
    return auVar9;
  case 8:
    uVar2 = 0x50746e6174736e49;
    break;
  case 9:
    auVar6._8_8_ = 0xe800000000000000;
    auVar6._0_8_ = 0x656c626179616c50;
    return auVar6;
  default:
    func_0x000107c60614(&UNK_11074f6a8,&uStack_18,&UNK_11074f6a8,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c70884);
    (*pcVar1)();
  }
  auVar11._8_8_ = 0xeb00000000656761;
  auVar11._0_8_ = uVar2;
  return auVar11;
}



/* Entry: 102c7088c; end: 102c708e7;  */

void FUN_102c7088c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c708e8; end: 102c709db;  */

void FUN_102c708e8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_2 + 0x10,puVar3,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x18);
    func_0x000107c615f0(lVar4);
    func_0x000107c61574(param_2);
    if (lVar4 != 0) {
      lVar1 = param_3;
      func_0x000107c30af8(param_3);
      func_0x000107c61180();
      lVar2 = param_3;
      func_0x000107c30adc();
      func_0x000107c61180();
      if (lVar2 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar3);
      }
      func_0x000107c30afc(param_3);
      func_0x000107c4dc34(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 102c709dc; end: 102c70bbb;  */

void FUN_102c709dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [264];
  
  puVar4 = auStack_170;
  func_0x000107c61428(param_3 + 0x10,puVar4,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    uVar1 = param_4;
    func_0x000107c30adc(param_4);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    uVar1 = param_4;
    func_0x000107c30af8(param_4);
    func_0x000107c61180();
    func_0x000107c30afc(param_4);
    func_0x000107c61434(param_2);
    func_0x00010425f244(auStack_158,0,1,0,1,0,1,0,1,0,0x201);
    lVar5 = *(long *)(param_3 + 0x18);
    if (lVar5 == 0) {
      func_0x000107c61574(param_3);
      func_0x000107c6142c(puVar4);
      func_0x000107c61170(uVar1);
      func_0x0001017e2180(auStack_158);
    }
    else {
      func_0x0001042cdfd8(0);
      func_0x000107c610f8();
      puVar3 = auStack_158;
      func_0x0001042cbdbc(puVar3);
      func_0x000107c5fadc(uVar2,puVar4);
      func_0x000107c4dc38(lVar5);
      func_0x000107c61574(param_3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(puVar4);
      func_0x000107c61170(uVar1);
    }
  }
  return;
}



/* Entry: 102c70bbc; end: 102c70c17;  */

void FUN_102c70bbc(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_102c70c18(param_2);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102c70c18; end: 102c70cc7;  */

/* WARNING: Possible PIC construction at 0x000102c70c9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c70ca0) */

void FUN_102c70c18(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b8fa8;
  func_0x000107c610f8(PTR_PTR_1126b8fa8);
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f103de0);
  func_0x000107c30b18(puVar1,uVar2,10,0xffffffffffffffff,0xffffffffffffffff,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102c70cc8; end: 102c70ceb;  */

void FUN_102c70cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_102c70e9c(param_3);
  return;
}



/* Entry: 102c70cec; end: 102c70d0f;  */

void FUN_102c70cec(undefined8 param_1,undefined8 param_2)

{
  FUN_102c70dc4(param_2);
  return;
}


