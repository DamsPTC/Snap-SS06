/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c6d4ac; end: 100c6d56b; -[SCPageLoadMetricReporter logPageLoadMetric:customSplits:] */

void FUN_100c6d4ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_100c6d574;
    puStack_50 = &UNK_110848ba8;
    lStack_48 = param_1;
    func_0x000107c61174(param_3);
    lStack_40 = param_3;
    func_0x000107c61174(param_4);
    uStack_38 = param_4;
    func_0x000100a0df38(uVar1,&puStack_68);
    func_0x000107c61170(uStack_38);
    func_0x000107c61170(lStack_40);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c6d56c; end: 100c6d573; -[_TtC28SCFeatureStartupSignalerImpl26FeatureStartupSignalerImpl onFeatureStartupCompleteOn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6d56c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c6106c();
  uStack_40 = 0;
  uStack_38 = 2;
  uStack_50 = param_3;
  uStack_48 = uVar1;
  func_0x0001002a64a8(&uStack_50);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c6d574; end: 100c6d5a3;  */

void FUN_100c6d574(long param_1,undefined8 param_2)

{
  func_0x000107c3be4c(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be50bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logBlizzardMetrics_customSplits_112571c88,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 100c6d5a4; end: 100c6d5ef;  */

undefined1  [16] FUN_100c6d5a4(undefined8 param_1,char param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  
  bVar2 = (param_3[3] & 0xe0000000000000ff) != 0x8000000000000002;
  bVar3 = (int)param_1 != (int)*param_3;
  uVar1 = *param_3;
  if (bVar3) {
    uVar1 = param_1;
  }
  if (bVar2 || param_2 != '\x01') {
    uVar1 = 0;
  }
  uVar4 = 3;
  if ((bVar2 || param_2 != '\x01') || bVar3) {
    uVar4 = 1;
  }
  auVar5._8_4_ = uVar4;
  auVar5._0_8_ = uVar1;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 100c6d5f0; end: 100c6d7c3; -[SCPageLoadMetricReporter _logGrapheneMetrics:] */

/* WARNING: Possible PIC construction at 0x000100c6d67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6d6c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6d6f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6d750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6d788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6d7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6d78c) */
/* WARNING: Removing unreachable block (ram,0x000100c6d754) */
/* WARNING: Removing unreachable block (ram,0x000100c6d6f8) */
/* WARNING: Removing unreachable block (ram,0x000100c6d6c4) */
/* WARNING: Removing unreachable block (ram,0x000100c6d680) */
/* WARNING: Removing unreachable block (ram,0x000100c6d7a4) */

void FUN_100c6d5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c9f00;
  func_0x000107c61174(param_3);
  func_0x000107c4e280(puVar1);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c49d94(param_3);
  func_0x000107c5c1ec(puVar2,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c5e508(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4c418,puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c6d7c4; end: 100c6d7ef; +[SCGraphenePageLoadSplitLatencyMetric pageLoadLatency] */

void FUN_100c6d7c4(void)

{
  func_0x000107c610f4(PTR_PTR_1126c9f00);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c6d7f0; end: 100c6d84f;  */

void FUN_100c6d7f0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(lVar1 + 0x70,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 0x70) = param_2;
  *(undefined1 *)(lVar1 + 0x78) = 0;
  *(undefined1 *)(lVar1 + 0x88) = 0;
  *(undefined8 *)(lVar1 + 0x80) = param_3;
  return;
}



/* Entry: 100c6d850; end: 100c6d867;  */

void FUN_100c6d850(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100c6d7f0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100c6d868; end: 100c6d86b;  */

void FUN_100c6d868(long param_1,long param_2)

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



/* Entry: 100c6d86c; end: 100c6d8eb;  */

void FUN_100c6d86c(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100c816e8;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_1;
  func_0x000107c61174(param_1);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100c6d8ec; end: 100c6d8f3; -[SCPageLoadMetricDataModel isFirstLoad] */

undefined1 FUN_100c6d8ec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100c6d8f4; end: 100c6d903; -[SCPageLoadMetricDataModel page] */

undefined8 FUN_100c6d8f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c6d904; end: 100c6da83; -[SCGrapheneRegistry pageLoadSplitLatencyGraphene] */

void FUN_100c6d904(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x100c6d98c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c3850 != -1) {
    func_0x00010002a2fc(0x1136c3850,&puStack_48);
  }
  uVar1 = uRam00000001136c3848;
  func_0x000107c61174(uRam00000001136c3848);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c6da84; end: 100c6dab3; -[SCPageLoadMetricDataModel latencyInMicroseconds] */

undefined8 FUN_100c6da84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c6dab4; end: 100c6dbeb; -[SIGNavigationBarView endInternalTransition:enableDarkModeAlways:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6dab4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c61174(param_3);
  puVar2 = PTR_PTR_1126ce598;
  func_0x000107c61158(PTR_PTR_1126ce598);
  uVar3 = param_3;
  func_0x000107c6115c(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  if (uVar1 != 0) {
    func_0x000107c550d8(*(undefined8 *)(param_1 + _DAT_1127950f0));
    if ((*(byte *)(param_1 + _DAT_112795118) & 1) == 0) {
      func_0x000107c3cb94(param_1);
      func_0x000107c3e108(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x000107c52730(PTR__OBJC_CLASS___UIView_1126aec20);
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c61174(param_3);
      func_0x000107c3dccc(0x3fb999999999999a,puVar2);
      func_0x000107c52730(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x000107c61170(uVar1);
    }
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c6dbec; end: 100c6dbf3; -[SCPageLoadMetricDataModel splits] */

undefined8 FUN_100c6dbec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c6dbf4; end: 100c6de4b; -[SCPageLoadMetricReporter _logGrapheneSubSteps:page:] */

/* WARNING: Possible PIC construction at 0x000100c6dda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6ddb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6ddc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6de00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6deb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6df18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6df2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6df60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6df74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6dfa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6df78) */
/* WARNING: Removing unreachable block (ram,0x000100c6df64) */
/* WARNING: Removing unreachable block (ram,0x000100c6df30) */
/* WARNING: Removing unreachable block (ram,0x000100c6df1c) */
/* WARNING: Removing unreachable block (ram,0x000100c6deb8) */
/* WARNING: Removing unreachable block (ram,0x000100c6de04) */
/* WARNING: Removing unreachable block (ram,0x000100c6de48) */
/* WARNING: Removing unreachable block (ram,0x000100c6de24) */
/* WARNING: Removing unreachable block (ram,0x000100c6ddcc) */
/* WARNING: Removing unreachable block (ram,0x000100c6dde0) */
/* WARNING: Removing unreachable block (ram,0x000100c6ddbc) */
/* WARNING: Removing unreachable block (ram,0x000100c6ddac) */
/* WARNING: Removing unreachable block (ram,0x000100c6dfa8) */

void FUN_100c6dbf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  undefined8 uStack_80;
  
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_138 = (undefined8 *)0x0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar2 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_140,auStack_100,0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    if (*plStack_130 != *plStack_130) {
      func_0x000107c61128(param_3);
    }
    uVar3 = *puStack_138;
    puStack_170 = puVar1;
    uStack_168 = 0xc2000000;
    puStack_160 = &UNK_106373fe8;
    puStack_158 = &UNK_11091f2c8;
    func_0x000107c61174(param_4);
    puStack_1a0 = puVar1;
    uStack_198 = 0xc2000000;
    puStack_190 = &UNK_106374108;
    puStack_188 = &UNK_11091f2c8;
    uStack_150 = param_4;
    uStack_148 = param_1;
    func_0x000107c61174(param_4);
    puStack_1d0 = puVar1;
    uStack_1c8 = 0xc2000000;
    puStack_1c0 = &UNK_106374228;
    puStack_1b8 = &UNK_11091f2c8;
    uStack_180 = param_4;
    uStack_178 = param_1;
    func_0x000107c61174(param_4);
    puStack_200 = puVar1;
    uStack_1f8 = 0xc2000000;
    puStack_1f0 = &UNK_106374348;
    puStack_1e8 = &UNK_11091f2c8;
    uStack_1b0 = param_4;
    uStack_1a8 = param_1;
    func_0x000107c61174(param_4);
    puStack_230 = puVar1;
    uStack_228 = 0xc2000000;
    puStack_220 = &UNK_106374468;
    puStack_218 = &UNK_1108529c0;
    uStack_1e0 = param_4;
    uStack_1d8 = param_1;
    func_0x000107c61174(param_4);
    puStack_260 = puVar1;
    uStack_258 = 0xc2000000;
    puStack_250 = &UNK_10637452c;
    puStack_248 = &UNK_11091f2f8;
    uStack_210 = param_4;
    uStack_208 = param_1;
    func_0x000107c61174(param_4);
    uStack_240 = param_4;
    uStack_238 = param_1;
    func_0x000107c4c5c8(uVar3,param_2,&puStack_170,&puStack_1a0,&puStack_1d0,&puStack_200,
                        &puStack_230,&puStack_260);
    param_4 = uStack_240;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100c6de4c; end: 100c6dfbf; -[SCPageLoadMetricReporter _logBlizzardMetrics:customSplits:] */

/* WARNING: Possible PIC construction at 0x000100c6deb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6df18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6df2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6df60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6df74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6dfa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6df78) */
/* WARNING: Removing unreachable block (ram,0x000100c6df64) */
/* WARNING: Removing unreachable block (ram,0x000100c6df30) */
/* WARNING: Removing unreachable block (ram,0x000100c6df1c) */
/* WARNING: Removing unreachable block (ram,0x000100c6deb8) */
/* WARNING: Removing unreachable block (ram,0x000100c6dfa8) */

void FUN_100c6de4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9f08;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61160(puVar1);
  func_0x000107c4e230(param_3);
  func_0x000107c61180();
  func_0x000107c529d8(puVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c6dfc0; end: 100c6dfd7; -[SCAAppPageLoad setAttribution:] */

void FUN_100c6dfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110de1118,2,param_3,0);
  return;
}



/* Entry: 100c6dfd8; end: 100c6e02f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6dfd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c526c0(0x3ff0000000000000,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127950f0));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c51c70(uVar2);
  func_0x000107c61180();
  func_0x000107c3cb8c(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100c6e030; end: 100c6e083; -[SCAAppPageLoad setLatencyMs:] */

void FUN_100c6e030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2198,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c6e084; end: 100c6e377; -[SCPageLoadMetricReporter _pageLoadSplits:customSplits:] */

void FUN_100c6e084(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  func_0x000107c61174(param_3);
  lVar3 = param_3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_3);
      }
      uVar6 = *(undefined8 *)(lVar8 * 8);
      func_0x000107c61174(puVar2);
      func_0x000107c61174(puVar2);
      func_0x000107c61174(puVar2);
      func_0x000107c61174(puVar2);
      func_0x000107c61174(puVar2);
      func_0x000107c61174(puVar2);
      func_0x000107c4c5c8(uVar6);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_3;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_3);
  if (param_4 != 0) {
    func_0x000107c3d66c(puVar2);
  }
  puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c41300();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c46368();
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100c6e378; end: 100c6e38f; -[SCAAppPageLoad setSplits:] */

void FUN_100c6e378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb9818,8,param_3,0);
  return;
}



/* Entry: 100c6e390; end: 100c6e487;  */

/* WARNING: Possible PIC construction at 0x000100c6e40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6e440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6e46c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6e410) */
/* WARNING: Removing unreachable block (ram,0x000100c6e444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6e390(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if ((lVar1 != 0) && (*(long *)(lVar1 + _DAT_112740fb8) != 0)) {
    lVar1 = *(long *)(lVar1 + _DAT_112740f74);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c5bcc0();
    func_0x000107c61180();
    lVar2 = lVar1;
    if (lVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x20);
    }
    func_0x000107c61174(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c6e488; end: 100c6e48f; -[SCPageLoadMetricDataModel source] */

undefined8 FUN_100c6e488(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100c6e490; end: 100c6e527;  */

long FUN_100c6e490(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  if (lRam00000001137f3f48 != -1) {
    func_0x00010002a2fc(0x1137f3f48,&PTR___NSConcreteGlobalBlock_110cb6a10);
  }
  lVar1 = lRam00000001137f3f40;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = -1;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49820(lVar1);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  return lVar2;
}



/* Entry: 100c6e528; end: 100c6e5ff;  */

undefined8 FUN_100c6e528(long param_1)

{
  FUN_100c6e490();
  if (param_1 < 0x33) {
    if (param_1 < 0x13) {
      if (param_1 == 4) {
        return 1;
      }
      if (param_1 == 9) {
        return 3;
      }
    }
    else {
      if (param_1 == 0x13) {
        return 2;
      }
      if (param_1 == 0x16) {
        return 0x29;
      }
      if (param_1 == 0x17) {
        return 0;
      }
    }
  }
  else if (param_1 < 0x53) {
    if (param_1 == 0x33) {
      return 9;
    }
    if (param_1 == 0x36) {
      return 0x22;
    }
    if (param_1 == 0x4c) {
      return 0x3a;
    }
  }
  else {
    if (param_1 == 0x53) {
      return 9;
    }
    if (param_1 == 0x5c) {
      return 0x67;
    }
    if (param_1 == 0x6a) {
      return 0x4b;
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 100c6e600; end: 100c6e603; -[SCFeatureNightModeImpl _didChangeLowLightCondition:] */

void FUN_100c6e600(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedc2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateNightModeButtonWithState__112594a58);
  return;
}



/* Entry: 100c6e604; end: 100c6e6a3;  */

void FUN_100c6e604(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3ae4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c6e6a4; end: 100c6e6af; -[SCFeatureAutoEnableFlashInLowLightHandler _beginCameraSession] */

void FUN_100c6e6a4(long param_1)

{
  *(undefined2 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  return;
}



/* Entry: 100c6e6b0; end: 100c6e6db; -[SCFeatureAutoEnableFlashInLowLightHandler _followCurrentLightingCondition] */

void FUN_100c6e6b0(undefined8 param_1)

{
  func_0x000107c3b654();
  func_0x000107c3ae48(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdd1670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__autoDisableFlash_112551f38);
  return;
}



/* Entry: 100c6e6dc; end: 100c6e727; -[SCFeatureAutoEnableFlashInLowLightHandler _exposeTreatmentIfNeeded] */

void FUN_100c6e6dc(long param_1)

{
  long lVar1;
  
  if (((*(byte *)(param_1 + 0x3b) & 1) == 0) &&
     (lVar1 = param_1, func_0x000107c3bb28(), (int)lVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x3b) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf9d750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126c8670,PTR_s_exposeWithCircumstanceEngine__1125c4f78,
               *(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



/* Entry: 100c6e728; end: 100c6e7bf; -[SCFeatureAutoEnableFlashInLowLightHandler _isInEligibleDarkSession] */

bool FUN_100c6e728(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar2 = *(undefined **)(param_1 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = puVar3;
    func_0x000107c3e0d8();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = puVar3;
      func_0x000107c51b1c(puVar3);
      puVar4 = PTR_PTR_1126afed0;
      func_0x000107c4d73c(PTR_PTR_1126afed0);
      bVar1 = puVar2 == puVar4;
    }
    else {
      bVar1 = false;
    }
    func_0x000107c61170(puVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 100c6e7c0; end: 100c6e843; -[SCFeatureAutoEnableFlashInLowLightHandler _autoEnableFlash] */

void FUN_100c6e7c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c3c718();
  if ((int)lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x39) = 1;
    func_0x000107c3cae4(param_1);
    lVar1 = param_1 + 0x20;
    func_0x000107c61148();
    lVar2 = lVar1;
    func_0x000107c3e4bc();
    func_0x000107c61170(lVar1);
    *(bool *)(param_1 + 0x48) = lVar2 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010be0c430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__expectFlashStateWeRequested__112560aa8,lVar2);
    return;
  }
  return;
}



/* Entry: 100c6e844; end: 100c6e8ab; -[SCFeatureAutoEnableFlashInLowLightHandler _shouldAutoEnableFlash] */

ulong FUN_100c6e844(ulong param_1)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    return 0;
  }
  uVar1 = param_1;
  func_0x000107c3bb28();
  if ((int)uVar1 != 0) {
    if ((((*(byte *)(param_1 + 0x3a) & 1) == 0) && ((*(byte *)(param_1 + 0x39) & 1) == 0)) &&
       (uVar1 = param_1, func_0x000107c3b590(), uVar1 == 0)) {
      func_0x000107c3cae4(param_1);
      uVar1 = (ulong)(param_1 != 0);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 100c6e8ac; end: 100c6e8df; -[SCFeatureAutoEnableFlashInLowLightHandler _autoDisableFlash] */

void FUN_100c6e8ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c3c714();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010beca670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__takeBackAutoEnabledFlash_112590340);
    return;
  }
  return;
}



/* Entry: 100c6e8e0; end: 100c6e977; -[SCFeatureAutoEnableFlashInLowLightHandler _shouldAutoDisableFlash] */

bool FUN_100c6e8e0(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    return false;
  }
  if ((((*(byte *)(param_1 + 0x38) & 1) == 0) && (*(char *)(param_1 + 0x48) == '\x01')) &&
     (uVar2 = param_1, func_0x000107c3ba98(), (uVar2 & 1) == 0)) {
    func_0x000107c3b590(param_1);
    bVar1 = param_1 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 100c6e978; end: 100c6efab;  */

/* WARNING: Possible PIC construction at 0x000100c6ef7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6ef80) */
/* WARNING: Removing unreachable block (ram,0x000100c6efa8) */
/* WARNING: Removing unreachable block (ram,0x000100c6ef98) */

void FUN_100c6e978(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined **ppuStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined **ppuStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_478 = &PTR____CFConstantStringClassReference_110f59ad8;
  ppuStack_470 = &PTR____CFConstantStringClassReference_110f59b38;
  ppuStack_250 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2988;
  ppuStack_248 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29a0;
  ppuStack_468 = &PTR____CFConstantStringClassReference_110f59b58;
  ppuStack_460 = &PTR____CFConstantStringClassReference_110f59b78;
  ppuStack_240 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29b8;
  ppuStack_238 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29d0;
  ppuStack_458 = &PTR____CFConstantStringClassReference_110e36118;
  ppuStack_450 = &PTR____CFConstantStringClassReference_110e44958;
  ppuStack_230 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29e8;
  ppuStack_228 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29a0;
  ppuStack_448 = &PTR____CFConstantStringClassReference_110f59bb8;
  ppuStack_440 = &PTR____CFConstantStringClassReference_110f59bd8;
  ppuStack_220 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a00;
  ppuStack_218 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a18;
  ppuStack_438 = &PTR____CFConstantStringClassReference_110f59bf8;
  ppuStack_430 = &PTR____CFConstantStringClassReference_110eb57b8;
  ppuStack_210 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29e8;
  ppuStack_208 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a30;
  ppuStack_428 = &PTR____CFConstantStringClassReference_110f59cd8;
  ppuStack_420 = &PTR____CFConstantStringClassReference_110f59cf8;
  ppuStack_200 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a48;
  ppuStack_1f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a60;
  ppuStack_418 = &PTR____CFConstantStringClassReference_110f59e78;
  ppuStack_410 = &PTR____CFConstantStringClassReference_110f59eb8;
  ppuStack_1f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_1e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_408 = &PTR____CFConstantStringClassReference_110f59ed8;
  ppuStack_400 = &PTR____CFConstantStringClassReference_110f59f18;
  ppuStack_1e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_1d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_3f8 = &PTR____CFConstantStringClassReference_110f59f38;
  ppuStack_3f0 = &PTR____CFConstantStringClassReference_110f59f58;
  ppuStack_1d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_1c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_3e8 = &PTR____CFConstantStringClassReference_110f59f78;
  ppuStack_3e0 = &PTR____CFConstantStringClassReference_110f59f98;
  ppuStack_1c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_1b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_3d8 = &PTR____CFConstantStringClassReference_110f59fb8;
  ppuStack_3d0 = &PTR____CFConstantStringClassReference_110f59fd8;
  ppuStack_1b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_1a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_3c8 = &PTR____CFConstantStringClassReference_110f59ff8;
  ppuStack_3c0 = &PTR____CFConstantStringClassReference_110f5a058;
  ppuStack_1a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_198 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_3b8 = &PTR____CFConstantStringClassReference_110f5a078;
  ppuStack_3b0 = &PTR____CFConstantStringClassReference_110f5a098;
  ppuStack_190 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_188 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_3a8 = &PTR____CFConstantStringClassReference_110f5a0b8;
  ppuStack_3a0 = &PTR____CFConstantStringClassReference_110dbf098;
  ppuStack_180 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a78;
  ppuStack_178 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a90;
  ppuStack_398 = &PTR____CFConstantStringClassReference_110f5a0f8;
  ppuStack_390 = &PTR____CFConstantStringClassReference_110f5a118;
  ppuStack_170 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a90;
  ppuStack_168 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a90;
  ppuStack_388 = &PTR____CFConstantStringClassReference_110f5a138;
  ppuStack_380 = &PTR____CFConstantStringClassReference_110f5a178;
  ppuStack_160 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a90;
  ppuStack_158 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a90;
  ppuStack_378 = &PTR____CFConstantStringClassReference_110f5a198;
  ppuStack_370 = &PTR____CFConstantStringClassReference_110f5a1b8;
  ppuStack_150 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a90;
  ppuStack_148 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2a90;
  ppuStack_368 = &PTR____CFConstantStringClassReference_110db9d58;
  ppuStack_360 = &PTR____CFConstantStringClassReference_110e30ab8;
  ppuStack_140 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2aa8;
  ppuStack_138 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ac0;
  ppuStack_358 = &PTR____CFConstantStringClassReference_110f5a358;
  ppuStack_350 = &PTR____CFConstantStringClassReference_110f5a378;
  ppuStack_130 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ac0;
  ppuStack_128 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_348 = &PTR____CFConstantStringClassReference_110f5a398;
  ppuStack_340 = &PTR____CFConstantStringClassReference_110f5a3b8;
  ppuStack_120 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_118 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_338 = &PTR____CFConstantStringClassReference_110f5a3d8;
  ppuStack_330 = &PTR____CFConstantStringClassReference_110f5a3f8;
  ppuStack_110 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_108 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_328 = &PTR____CFConstantStringClassReference_110f5a418;
  ppuStack_320 = &PTR____CFConstantStringClassReference_110f5a458;
  ppuStack_100 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_318 = &PTR____CFConstantStringClassReference_110f5a478;
  ppuStack_310 = &PTR____CFConstantStringClassReference_110f5a498;
  ppuStack_f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_308 = &PTR____CFConstantStringClassReference_110f5a4b8;
  ppuStack_300 = &PTR____CFConstantStringClassReference_110f5a4d8;
  ppuStack_e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_2f8 = &PTR____CFConstantStringClassReference_110f5a4f8;
  ppuStack_2f0 = &PTR____CFConstantStringClassReference_110db9e78;
  ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2ad8;
  ppuStack_2e8 = &PTR____CFConstantStringClassReference_110eb5718;
  ppuStack_2e0 = &PTR____CFConstantStringClassReference_110f5a538;
  ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2af0;
  ppuStack_2d8 = &PTR____CFConstantStringClassReference_110dd50f8;
  ppuStack_2d0 = &PTR____CFConstantStringClassReference_110db9d78;
  ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29e8;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2b08;
  ppuStack_2c8 = &PTR____CFConstantStringClassReference_110f5a5d8;
  ppuStack_2c0 = &PTR____CFConstantStringClassReference_110f5a5f8;
  ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2b20;
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29e8;
  ppuStack_2b8 = &PTR____CFConstantStringClassReference_110f5a618;
  ppuStack_2b0 = &PTR____CFConstantStringClassReference_110f5a658;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d29e8;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2b38;
  ppuStack_2a8 = &PTR____CFConstantStringClassReference_110f5a678;
  ppuStack_2a0 = &PTR____CFConstantStringClassReference_110f5a698;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2b38;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2b38;
  ppuStack_298 = &PTR____CFConstantStringClassReference_110f5a6b8;
  ppuStack_290 = &PTR____CFConstantStringClassReference_110f5a898;
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2b38;
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2b50;
  ppuStack_288 = &PTR____CFConstantStringClassReference_110f5adf8;
  ppuStack_280 = &PTR____CFConstantStringClassReference_110f5ad78;
  ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2b68;
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2b80;
  ppuStack_278 = &PTR____CFConstantStringClassReference_110f5ad58;
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2b98;
  ppuStack_270 = &PTR____CFConstantStringClassReference_110f5ad98;
  ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2bb0;
  ppuStack_268 = &PTR____CFConstantStringClassReference_110f5adb8;
  ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2bc8;
  ppuStack_260 = &PTR____CFConstantStringClassReference_110eb4a98;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2be0;
  ppuStack_258 = &PTR____CFConstantStringClassReference_110f5acb8;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2b50;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_250,&ppuStack_478,
                      0x45);
  func_0x000107c61180();
  uVar1 = puRam00000001137f3f40;
  puRam00000001137f3f40 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c6efac; end: 100c6efcb;  */

void FUN_100c6efac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c6efcc; end: 100c6f023;  */

/* WARNING: Possible PIC construction at 0x000100c6f010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6f014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6efcc(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c4ff80(*(undefined8 *)(param_1 + _DAT_11278c718));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c6f024; end: 100c6f0db; -[SCPresentationInteractionControllerImplementation dealloc] */

void FUN_100c6f024(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = &UNK_10f726c5c;
  func_0x0001000ba800(&UNK_10f726c5c);
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c5bcc0();
  if (lVar2 == 1) {
    func_0x000107c5be08(*(undefined8 *)(param_1 + 8));
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x000107c5bcc0();
  if (lVar2 == 2) {
    func_0x000107c43590(*(undefined8 *)(param_1 + 8));
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61170(uVar3);
  func_0x0001000e2a84(puVar1);
  puStack_28 = PTR_PTR_112705600;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100c6f0dc; end: 100c6f123; -[SCPresentationInteractionControllerImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c6f0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6f10c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6f0f8) */
/* WARNING: Removing unreachable block (ram,0x000100c6f110) */

void FUN_100c6f0dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100c6f124; end: 100c6f183; -[SCPresentationContextImplementation .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c6f168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6f16c) */

void FUN_100c6f124(long param_1)

{
  func_0x000107c6119c(param_1 + 0x70,0);
  func_0x000107c6119c(param_1 + 0x68,0);
  func_0x000107c6119c(param_1 + 0x60,0);
  func_0x000107c6119c(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 100c6f184; end: 100c6f213;  */

/* WARNING: Possible PIC construction at 0x000100c6f1e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6f1fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6f1e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6f184(long param_1)

{
  param_1 = param_1 + 0x28;
  func_0x000107c61148();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112761354;
    func_0x000107c61148(param_1);
    func_0x000107c3ed84();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c6f214; end: 100c6f293; -[SCAAppPageLoad setSourceType:] */

/* WARNING: Possible PIC construction at 0x000100c6f27c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6f280) */

void FUN_100c6f214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_100c6f294(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2a38,7,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c6f294; end: 100c6f2b3;  */

undefined * FUN_100c6f294(ulong param_1)

{
  if (param_1 < 0x105) {
    return (&PTR_PTR_110d97980)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 100c6f2b4; end: 100c6f307; -[SCAAppPageLoad setIsFirstLoad:] */

void FUN_100c6f2b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_1110157f8,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c6f308; end: 100c6f313; -[SCAAppPageLoad getEventName] */

undefined ** FUN_100c6f308(void)

{
  return &PTR____CFConstantStringClassReference_110fc4bd8;
}



/* Entry: 100c6f314; end: 100c6f31f; -[SCAAppPageLoad getPerUserSamplingRateV2] */

undefined8 FUN_100c6f314(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 100c6f320; end: 100c6f35b; -[SCPageLoadMetricDataModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c6f338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6f33c) */

void FUN_100c6f320(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 100c6f35c; end: 100c6f363; -[SCMemoriesSnapRendererQCServices performer] */

undefined8 FUN_100c6f35c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c6f364; end: 100c6f36b; -[SCMemoriesSnapRendererQCServices memoriesSnapRenderer] */

undefined8 FUN_100c6f364(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c6f36c; end: 100c6f3e7;  */

void FUN_100c6f36c(undefined8 *param_1)

{
  undefined1 auStack_a0 [16];
  undefined8 *puStack_90;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined1 auStack_60 [16];
  undefined8 *puStack_50;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  *param_1 = 0;
  puStack_90 = param_1;
  puStack_70 = param_1;
  puStack_50 = param_1;
  puStack_30 = param_1;
  func_0x0001008546f4(&UNK_102b539f0,0,FUN_100c6f444,auStack_40,FUN_100c6f3e8,auStack_60,
                      &UNK_102b55254,auStack_80,&UNK_102b55284,auStack_a0);
  return;
}



/* Entry: 100c6f3e8; end: 100c6f3eb;  */

void FUN_100c6f3e8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100c6f3ec(param_1,*(undefined8 *)(unaff_x20 + 0x10),1);
  return;
}



/* Entry: 100c6f3ec; end: 100c6f443;  */

void FUN_100c6f3ec(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c6010c();
  uVar1 = *param_2;
  *param_2 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c6f444; end: 100c6f45f;  */

void FUN_100c6f444(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100c6f3ec(param_1,*(undefined8 *)(unaff_x20 + 0x10),1);
  return;
}



/* Entry: 100c6f460; end: 100c6f467;  */

void FUN_100c6f460(undefined8 *param_1)

{
  undefined1 auStack_a0 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_40 [16];
  
  *param_1 = 0;
  func_0x0001008546f4(&UNK_102b539f4,0,FUN_100c72568,auStack_40,FUN_100c6f628,auStack_60,
                      &UNK_102b55278,auStack_80,&UNK_102b5527c,auStack_a0);
  return;
}



/* Entry: 100c6f468; end: 100c6f4e3;  */

void FUN_100c6f468(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 *puStack_28;
  
  *param_1 = 0;
  uStack_90 = param_3;
  puStack_88 = param_1;
  uStack_70 = param_3;
  puStack_68 = param_1;
  uStack_50 = param_3;
  puStack_48 = param_1;
  uStack_30 = param_3;
  puStack_28 = param_1;
  func_0x0001008546f4(&UNK_102b539f4,0,FUN_100c72568,auStack_40,FUN_100c6f628,auStack_60,
                      &UNK_102b55278,auStack_80,&UNK_102b5527c,auStack_a0);
  return;
}



/* Entry: 100c6f4e4; end: 100c6f627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6f4e4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar5 = *(ulong *)(param_2 + _DAT_112ef66f0);
    if (uVar5 == 0) {
      func_0x000100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar3 = 0;
      func_0x000107c6010c();
      func_0x000107c61170(param_2);
    }
    else {
      uVar1 = uVar5;
      func_0x000107c615f0();
      func_0x000107c4a214();
      if ((uVar1 & 1) == 0) {
        func_0x000100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar3 = 0;
      }
      else {
        lVar2 = *(long *)(param_2 + _DAT_112ef66c0);
        if (lVar2 != 0) {
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar2 != 0) {
            func_0x000107c5d548();
            func_0x000107c615e8(lVar2);
          }
        }
        func_0x000100b650a0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar3 = 1;
      }
      func_0x000107c6010c();
      func_0x000107c61170(param_2);
      func_0x000107c615e8(uVar5);
    }
    uVar4 = *param_3;
    *param_3 = uVar3;
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 100c6f628; end: 100c6f63f;  */

void FUN_100c6f628(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100c6f4e4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100c6f640; end: 100c6f67b; -[SCMemoriesNavigationServiceImpl isPresenting] */

undefined8 FUN_100c6f640(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3bf08();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c4a214();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100c6f67c; end: 100c6f6c3; -[SCFeatureMemoriesImpl isPresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c6f67c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112762a2c);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4a214();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100c6f6c4; end: 100c6f6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6f6c4(ulong *param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 auStack_a0 [24];
  ulong uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar11 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(lVar3 + _DAT_112ef66c8) == 0) goto LAB_100c6f9c8;
  if ((uVar11 & 0xc000000000000001) == 0) {
    uVar15 = uVar11 & 0xffffffffffffff8;
    if (*(long *)(uVar15 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6f9f4);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(uVar11 + 0x20);
    func_0x000107c61174();
    uVar8 = uVar4;
    func_0x000107c3ebcc();
    iVar13 = (int)uVar8;
    func_0x000107c61170(uVar4);
    if (*(ulong *)(uVar15 + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6f9f8);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(uVar11 + 0x28);
    func_0x000107c61174();
    uVar8 = uVar4;
    func_0x000107c3ebcc();
    iVar2 = (int)uVar8;
    func_0x000107c61170(uVar4);
    if (*(ulong *)(uVar15 + 0x10) < 3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6f9fc);
      (*pcVar1)();
    }
    uVar5 = *(ulong *)(uVar11 + 0x30);
    func_0x000107c61174(uVar5);
    uVar9 = uVar5;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar5);
    if (*(ulong *)(uVar15 + 0x10) < 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6fa00);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(uVar11 + 0x38);
    func_0x000107c61174();
    uVar8 = uVar4;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar4);
    if (*(ulong *)(uVar15 + 0x10) < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6fa04);
      (*pcVar1)();
    }
    uVar6 = *(undefined8 *)(uVar11 + 0x40);
    func_0x000107c61174(uVar6);
    uVar4 = uVar6;
    func_0x000107c3ebcc();
    uVar14 = (uint)uVar4;
    func_0x000107c61170(uVar6);
    if ((int)uVar8 != 0) goto LAB_100c6f7fc;
LAB_100c6f944:
    uVar10 = 2;
    if (iVar13 == 0) {
      uVar10 = 4;
    }
    uVar11 = (ulong)uVar10;
    if (((iVar13 != 0) && (iVar2 == 0)) &&
       (lVar7 = *(long *)(lVar3 + _DAT_112ef6730), uVar11 = uVar9, lVar7 != 0)) {
      func_0x000107c6157c(lVar7);
      func_0x0001000d224c(auStack_a0);
      func_0x000107c61574(lVar7);
      func_0x0001000a8868(auStack_a0,uStack_88);
      uVar11 = uStack_88;
      (**(code **)(lStack_80 + 0x120))(uStack_88,lStack_80);
      func_0x0001000834e4(auStack_a0);
      if ((uVar11 & 1) == 0) {
        uVar14 = (uint)uVar9;
      }
      uVar11 = (ulong)uVar14;
    }
  }
  else {
    uVar4 = 0;
    func_0x000102b546c4(0,uVar11,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    uVar8 = uVar4;
    func_0x000107c3ebcc();
    iVar13 = (int)uVar8;
    func_0x000107c61170(uVar4);
    uVar4 = 1;
    func_0x000102b546c4(1,uVar11,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    uVar8 = uVar4;
    func_0x000107c3ebcc();
    iVar2 = (int)uVar8;
    func_0x000107c61170(uVar4);
    uVar15 = 2;
    func_0x000102b546c4(2,uVar11,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    uVar9 = uVar15;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar15);
    uVar5 = 3;
    func_0x000102b546c4(3,uVar11,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    uVar15 = uVar5;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar5);
    uVar4 = 4;
    func_0x000102b546c4(4,uVar11,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    uVar8 = uVar4;
    func_0x000107c3ebcc();
    uVar14 = (uint)uVar8;
    func_0x000107c61170(uVar4);
    if ((uVar15 & 1) == 0) goto LAB_100c6f944;
LAB_100c6f7fc:
    *(undefined1 *)(lVar3 + _DAT_112ef6738) = 1;
    lVar7 = *(long *)(lVar3 + _DAT_112ef6720);
    if (lVar7 == 0) {
LAB_100c6f844:
      lVar12 = 0;
    }
    else {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar7 == 0) goto LAB_100c6f844;
      lVar12 = lVar7;
      func_0x000107c41f18();
      func_0x000107c615e8(lVar7);
    }
    func_0x000102b532c0(0,1,lVar12);
    func_0x000102b53500();
    uVar11 = 0;
  }
  FUN_100c6fa04(uVar11);
LAB_100c6f9c8:
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 100c6f6cc; end: 100c6fa03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6f6cc(ulong *param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 auStack_a0 [24];
  ulong uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar10 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_2 + _DAT_112ef66c8) == 0) goto LAB_100c6f9c8;
  if ((uVar10 & 0xc000000000000001) == 0) {
    uVar14 = uVar10 & 0xffffffffffffff8;
    if (*(long *)(uVar14 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6f9f4);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(uVar10 + 0x20);
    func_0x000107c61174();
    uVar7 = uVar3;
    func_0x000107c3ebcc();
    iVar12 = (int)uVar7;
    func_0x000107c61170(uVar3);
    if (*(ulong *)(uVar14 + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6f9f8);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(uVar10 + 0x28);
    func_0x000107c61174();
    uVar7 = uVar3;
    func_0x000107c3ebcc();
    iVar2 = (int)uVar7;
    func_0x000107c61170(uVar3);
    if (*(ulong *)(uVar14 + 0x10) < 3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6f9fc);
      (*pcVar1)();
    }
    uVar4 = *(ulong *)(uVar10 + 0x30);
    func_0x000107c61174(uVar4);
    uVar8 = uVar4;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar4);
    if (*(ulong *)(uVar14 + 0x10) < 4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6fa00);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(uVar10 + 0x38);
    func_0x000107c61174();
    uVar7 = uVar3;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar3);
    if (*(ulong *)(uVar14 + 0x10) < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c6fa04);
      (*pcVar1)();
    }
    uVar5 = *(undefined8 *)(uVar10 + 0x40);
    func_0x000107c61174(uVar5);
    uVar3 = uVar5;
    func_0x000107c3ebcc();
    uVar13 = (uint)uVar3;
    func_0x000107c61170(uVar5);
    if ((int)uVar7 != 0) goto LAB_100c6f7fc;
LAB_100c6f944:
    uVar9 = 2;
    if (iVar12 == 0) {
      uVar9 = 4;
    }
    uVar10 = (ulong)uVar9;
    if (((iVar12 != 0) && (iVar2 == 0)) &&
       (lVar6 = *(long *)(param_2 + _DAT_112ef6730), uVar10 = uVar8, lVar6 != 0)) {
      func_0x000107c6157c(lVar6);
      func_0x0001000d224c(auStack_a0);
      func_0x000107c61574(lVar6);
      func_0x0001000a8868(auStack_a0,uStack_88);
      uVar10 = uStack_88;
      (**(code **)(lStack_80 + 0x120))(uStack_88,lStack_80);
      func_0x0001000834e4(auStack_a0);
      if ((uVar10 & 1) == 0) {
        uVar13 = (uint)uVar8;
      }
      uVar10 = (ulong)uVar13;
    }
  }
  else {
    uVar3 = 0;
    func_0x000102b546c4(0,uVar10,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    uVar7 = uVar3;
    func_0x000107c3ebcc();
    iVar12 = (int)uVar7;
    func_0x000107c61170(uVar3);
    uVar3 = 1;
    func_0x000102b546c4(1,uVar10,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    uVar7 = uVar3;
    func_0x000107c3ebcc();
    iVar2 = (int)uVar7;
    func_0x000107c61170(uVar3);
    uVar14 = 2;
    func_0x000102b546c4(2,uVar10,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    uVar8 = uVar14;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar14);
    uVar4 = 3;
    func_0x000102b546c4(3,uVar10,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    uVar14 = uVar4;
    func_0x000107c3ebcc();
    func_0x000107c61170(uVar4);
    uVar3 = 4;
    func_0x000102b546c4(4,uVar10,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    uVar7 = uVar3;
    func_0x000107c3ebcc();
    uVar13 = (uint)uVar7;
    func_0x000107c61170(uVar3);
    if ((uVar14 & 1) == 0) goto LAB_100c6f944;
LAB_100c6f7fc:
    *(undefined1 *)(param_2 + _DAT_112ef6738) = 1;
    lVar6 = *(long *)(param_2 + _DAT_112ef6720);
    if (lVar6 == 0) {
LAB_100c6f844:
      lVar11 = 0;
    }
    else {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar6 == 0) goto LAB_100c6f844;
      lVar11 = lVar6;
      func_0x000107c41f18();
      func_0x000107c615e8(lVar6);
    }
    func_0x000102b532c0(0,1,lVar11);
    func_0x000102b53500();
    uVar10 = 0;
  }
  FUN_100c6fa04(uVar10);
LAB_100c6f9c8:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c6fa04; end: 100c6fa6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6fa04(uint param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
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
  undefined1 auStack_198 [24];
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
  undefined8 uStack_50;
  
  uVar1 = param_1 & 0xff;
  if (uVar1 == 3) {
    return;
  }
  if (uVar1 == 4) {
    if (*(char *)(unaff_x20 + _DAT_112ef6680) == '\x04') {
      return;
    }
    *(undefined1 *)(unaff_x20 + _DAT_112ef6680) = 4;
  }
  else {
    if (*(byte *)(unaff_x20 + _DAT_112ef6680) == uVar1 &&
        *(byte *)(unaff_x20 + _DAT_112ef6680) - 5 < 0xfffffffe) {
      return;
    }
    *(char *)(unaff_x20 + _DAT_112ef6680) = (char)param_1;
  }
  bVar2 = *(byte *)(unaff_x20 + _DAT_112ef6680);
  uVar6 = (ulong)bVar2;
  if (bVar2 == 3) {
    return;
  }
  if (bVar2 == 4) {
    func_0x000100b667b0();
    puVar4 = (undefined8 *)(unaff_x20 + _DAT_112ef6678);
    func_0x000107c61428(puVar4,&uStack_230,0,0);
    uStack_78 = puVar4[0xd];
    uStack_80 = puVar4[0xc];
    uStack_68 = puVar4[0xf];
    uStack_70 = puVar4[0xe];
    uStack_58 = puVar4[0x11];
    uStack_60 = puVar4[0x10];
    uStack_50 = puVar4[0x12];
    uStack_b8 = puVar4[5];
    uStack_c0 = puVar4[4];
    uStack_a8 = puVar4[7];
    uStack_b0 = puVar4[6];
    uStack_98 = puVar4[9];
    uStack_a0 = puVar4[8];
    uStack_88 = puVar4[0xb];
    uStack_90 = puVar4[10];
    uStack_d8 = puVar4[1];
    uStack_e0 = *puVar4;
    uStack_c8 = puVar4[3];
    uStack_d0 = puVar4[2];
    func_0x000100b63f80(&uStack_e0,&uStack_180,0x112ef67a8,&UNK_10db24e58);
    func_0x000100b63afc(&uStack_e0);
    puVar4 = &uStack_e0;
    goto code_r0x000100b62784;
  }
  func_0x000100b627a0(uVar6);
  lVar5 = _DAT_112ef6670;
  puVar3 = auStack_198;
  func_0x000107c61428(unaff_x20 + _DAT_112ef6670,puVar3,0x20,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (*(long *)(lVar5 + 0x10) == 0) {
code_r0x000100b62724:
    func_0x000100b6250c(&uStack_180);
  }
  else {
    func_0x000107c61434(lVar5);
    func_0x000100b6334c();
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000107c6142c(lVar5);
      goto code_r0x000100b62724;
    }
    puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 0x98);
    uStack_228 = puVar4[1];
    uStack_230 = *puVar4;
    uStack_218 = puVar4[3];
    uStack_220 = puVar4[2];
    uStack_1e8 = puVar4[9];
    uStack_1f0 = puVar4[8];
    uStack_1d8 = puVar4[0xb];
    uStack_1e0 = puVar4[10];
    uStack_208 = puVar4[5];
    uStack_210 = puVar4[4];
    uStack_1f8 = puVar4[7];
    uStack_200 = puVar4[6];
    uStack_1c8 = puVar4[0xd];
    uStack_1d0 = puVar4[0xc];
    uStack_1b8 = puVar4[0xf];
    uStack_1c0 = puVar4[0xe];
    uStack_1a8 = puVar4[0x11];
    uStack_1b0 = puVar4[0x10];
    uStack_1a0 = puVar4[0x12];
    uStack_d8 = puVar4[1];
    uStack_e0 = *puVar4;
    uStack_c8 = puVar4[3];
    uStack_d0 = puVar4[2];
    uStack_b8 = puVar4[5];
    uStack_c0 = puVar4[4];
    uStack_a8 = puVar4[7];
    uStack_b0 = puVar4[6];
    uStack_98 = puVar4[9];
    uStack_a0 = puVar4[8];
    uStack_88 = puVar4[0xb];
    uStack_90 = puVar4[10];
    uStack_78 = puVar4[0xd];
    uStack_80 = puVar4[0xc];
    uStack_68 = puVar4[0xf];
    uStack_70 = puVar4[0xe];
    uStack_58 = puVar4[0x11];
    uStack_60 = puVar4[0x10];
    uStack_50 = puVar4[0x12];
    func_0x000100b63ad4(&uStack_e0);
    func_0x000100b63318(&uStack_230,&uStack_180);
    func_0x000107c6142c(lVar5);
    uStack_118 = uStack_78;
    uStack_120 = uStack_80;
    uStack_108 = uStack_68;
    uStack_110 = uStack_70;
    uStack_f8 = uStack_58;
    uStack_100 = uStack_60;
    uStack_f0 = uStack_50;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_148 = uStack_a8;
    uStack_150 = uStack_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    uStack_128 = uStack_88;
    uStack_130 = uStack_90;
    uStack_178 = uStack_d8;
    uStack_180 = uStack_e0;
    uStack_168 = uStack_c8;
    uStack_170 = uStack_d0;
  }
  uStack_78 = uStack_118;
  uStack_80 = uStack_120;
  uStack_68 = uStack_108;
  uStack_70 = uStack_110;
  uStack_58 = uStack_f8;
  uStack_60 = uStack_100;
  uStack_50 = uStack_f0;
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  func_0x000107c614a8(auStack_198);
  func_0x000100b63afc(&uStack_e0);
  puVar4 = &uStack_180;
code_r0x000100b62784:
  func_0x000100b64ce4(puVar4,0x112ef67a8,&UNK_10db24e58);
  return;
}



/* Entry: 100c6fa6c; end: 100c6fadb;  */

/* WARNING: Possible PIC construction at 0x000100c6fabc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6fac0) */

void FUN_100c6fa6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c3c9b0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c6fadc; end: 100c6fca3; -[SCCameraViewController _subscribeOnLensCarouselUpdates:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6fadc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if ((param_3 != 0) && (param_4 == 0)) {
    lVar7 = (long)_DAT_112762598;
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar7);
    *(long *)(param_1 + lVar7) = param_3;
    func_0x000107c61170(uVar1);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c610fc();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112762600);
    *(undefined **)(param_1 + _DAT_112762600) = puVar2;
    func_0x000107c61170(uVar1);
    func_0x000107c61144(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    uVar1 = uVar3;
    func_0x000107c3d1a0();
    func_0x000107c61180();
    uVar4 = uVar1;
    func_0x000100078e94();
    func_0x000107c61180();
    uVar5 = uVar1;
    func_0x000107c4da8c(uVar1);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar6 = uVar5;
    func_0x000107c5c320(uVar5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c6fca4; end: 100c6fcfb;  */

/* WARNING: Possible PIC construction at 0x000100c6fce8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6fcec) */

void FUN_100c6fca4(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c3ebcc(param_2);
    func_0x000107c41df0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c6fcfc; end: 100c6fde3; -[SCMainCameraViewController didUpdateCarouselVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6fcfc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f8338;
  lStack_50 = param_1;
  func_0x000107c61154(&lStack_50,PTR_s_didUpdateCarouselVisibility__1125bd1d8);
  lVar4 = (long)_DAT_11276230c;
  lVar1 = param_1 + lVar4;
  func_0x000107c61148();
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = param_1 + lVar4;
    func_0x000107c61148();
    lVar2 = lVar4;
    func_0x000107c49e48();
    uVar5 = (uint)lVar2 ^ 1;
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar1);
  if (((param_3 & 1) == 0) && ((uVar5 & 1) == 0)) {
    uVar3 = *(ulong *)(param_1 + _DAT_11276233c);
    func_0x0001008cc9ec();
    if ((uVar3 & 1) == 0) {
      lVar1 = param_1;
      func_0x000107c40fb0(param_1);
      func_0x000107c61180();
      func_0x000107c4e2ec(param_1);
      func_0x000107c5bb50(lVar1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 100c6fde4; end: 100c6fdf7; -[SCCameraViewController didUpdateCarouselVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6fde4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127624cc),PTR_s_resetButtons__11262bae8,param_1);
  return;
}



/* Entry: 100c6fdf8; end: 100c6fe07; -[SCCameraViewController currentPageTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c6fdf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276262c);
}



/* Entry: 100c6fe08; end: 100c6fe57;  */

void FUN_100c6fe08(long param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x28);
  bVar1 = *(byte *)(*(long *)(param_1 + 0x20) + 0xb0);
  func_0x000107c49c88();
  if (bVar1 == uVar3) {
    return;
  }
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x28);
  func_0x000107c49c88();
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xb0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdd16f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__autoEnableRingFlashIfNeeded_112551f58);
  return;
}



/* Entry: 100c6fe58; end: 100c6fffb;  */

/* WARNING: Possible PIC construction at 0x000100c6fe84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6fea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6febc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6fef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6ff1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6ff38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6ff88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c6ffb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c6ff8c) */
/* WARNING: Removing unreachable block (ram,0x000100c6ff3c) */
/* WARNING: Removing unreachable block (ram,0x000100c6ff20) */
/* WARNING: Removing unreachable block (ram,0x000100c6fefc) */
/* WARNING: Removing unreachable block (ram,0x000100c6fec0) */
/* WARNING: Removing unreachable block (ram,0x000100c6fea4) */
/* WARNING: Removing unreachable block (ram,0x000100c6fe88) */
/* WARNING: Removing unreachable block (ram,0x000100c6ffb8) */

void FUN_100c6fe58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c40794();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100c6fffc; end: 100c70077; +[_TtC23SCMemoriesSnapFeedUtils21MemoriesSnapFeedUtils sortedSnapFeedItems:] */

void FUN_100c6fffc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0) {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  }
  lVar2 = param_3;
  FUN_100c70078(param_3);
  func_0x000107c6142c(param_3);
  lVar3 = lVar2;
  func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
  func_0x000107c6142c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100c70078; end: 100c701e3;  */

/* WARNING: Removing unreachable block (ram,0x000100c701d8) */

undefined8 *** FUN_100c70078(long param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined *puVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  pppuVar11 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    ppppuVar10 = *(undefined8 *****)(param_1 + 0x10);
    ppppuVar8 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (ppppuVar10 != (undefined8 ****)0x0) {
      func_0x000107c61434();
      ppppuVar8 = ppppuVar10;
      func_0x0001038e687c(ppppuVar10,0);
      ppppuVar9 = &pppuStack_88;
      func_0x0001038e6908(ppppuVar9,ppppuVar8 + 4,ppppuVar10,param_1);
      FUN_101316148(pppuStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
      if (ppppuVar9 != ppppuVar10) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100c700f8);
        (*pcVar7)();
      }
    }
    pppuStack_88 = ppppuVar8;
    FUN_100c701e4(&pppuStack_88);
    pppuVar6 = pppuStack_88;
    pppuVar12 = (undefined8 ***)pppuStack_88[2];
    if (pppuVar12 == (undefined8 ***)0x0) {
      func_0x000107c61574(pppuStack_88);
      pppuVar11 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      pppuStack_88 = (undefined8 ***)puVar5;
      func_0x000100403514(0,pppuVar12,0);
      ppppuVar8 = (undefined8 ****)(pppuVar6 + 5);
      pppuVar11 = pppuStack_88;
      do {
        pppuVar1 = ppppuVar8[-1];
        pppuVar3 = *ppppuVar8;
        ppuVar2 = pppuVar11[2];
        ppuVar4 = pppuVar11[3];
        pppuStack_88 = pppuVar11;
        func_0x000107c61434(pppuVar3);
        if ((undefined8 **)((ulong)ppuVar4 >> 1) <= ppuVar2) {
          func_0x000100403514((undefined8 **)0x1 < ppuVar4,(undefined8 **)((long)ppuVar2 + 1U),1);
          pppuVar11 = pppuStack_88;
        }
        ppppuVar8 = ppppuVar8 + 3;
        pppuVar11[2] = (undefined8 **)((long)ppuVar2 + 1U);
        pppuVar11[(long)ppuVar2 * 2 + 4] = pppuVar1;
        pppuVar11[(long)ppuVar2 * 2 + 5] = pppuVar3;
        pppuVar12 = (undefined8 ***)((long)pppuVar12 + -1);
      } while (pppuVar12 != (undefined8 ***)0x0);
      func_0x000107c61574(pppuVar6);
    }
  }
  return pppuVar11;
}



/* Entry: 100c701e4; end: 100c702ef;  */

void FUN_100c701e4(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_100c702f0();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112facfa0;
      func_0x0001000285a8(0x112facfa0,&UNK_10dc1fed0);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    func_0x0001038e5edc(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    func_0x0001038e62e0(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 100c702f0; end: 100c70303;  */

/* WARNING: Removing unreachable block (ram,0x000100c70324) */
/* WARNING: Removing unreachable block (ram,0x000100c70334) */
/* WARNING: Removing unreachable block (ram,0x000100c70444) */
/* WARNING: Removing unreachable block (ram,0x000100c70340) */
/* WARNING: Removing unreachable block (ram,0x000100c70348) */
/* WARNING: Removing unreachable block (ram,0x000100c703cc) */
/* WARNING: Removing unreachable block (ram,0x000100c703d8) */
/* WARNING: Removing unreachable block (ram,0x000100c703dc) */
/* WARNING: Removing unreachable block (ram,0x000100c703e0) */
/* WARNING: Removing unreachable block (ram,0x000100c703f4) */

undefined * FUN_100c702f0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112facfa8;
    func_0x0001000285a8(0x112facfa8,&UNK_10dc1fee0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  uVar4 = 0x112facfa0;
  func_0x0001000285a8(0x112facfa0,&UNK_10dc1fed0);
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar5,uVar4);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 100c70304; end: 100c70447;  */

undefined * FUN_100c70304(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100c70448);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112facfa8;
    func_0x0001000285a8(0x112facfa8,&UNK_10dc1fee0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112facfa0;
    func_0x0001000285a8(0x112facfa0,&UNK_10dc1fed0);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100c70448; end: 100c704af; +[SCPair pairWithFirst:second:] */

void FUN_100c70448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c46964();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100c704b0; end: 100c70553; -[SCPair initWithFirst:second:] */

undefined1 *
FUN_100c704b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270a4c8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c70554; end: 100c705c7;  */

void FUN_100c70554(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3aed4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c705c8; end: 100c7071b; -[SCLensDataProviderV2 filterRemovedLensIds:] */

/* WARNING: Possible PIC construction at 0x000100c70628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c70690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c706a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c706dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c706fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c706e0) */
/* WARNING: Removing unreachable block (ram,0x000100c706e4) */
/* WARNING: Removing unreachable block (ram,0x000100c706f0) */
/* WARNING: Removing unreachable block (ram,0x000100c706f8) */
/* WARNING: Removing unreachable block (ram,0x000100c706a4) */
/* WARNING: Removing unreachable block (ram,0x000100c706a8) */
/* WARNING: Removing unreachable block (ram,0x000100c70694) */
/* WARNING: Removing unreachable block (ram,0x000100c7062c) */
/* WARNING: Removing unreachable block (ram,0x000100c706b4) */
/* WARNING: Removing unreachable block (ram,0x000100c70654) */
/* WARNING: Removing unreachable block (ram,0x000100c70700) */

void FUN_100c705c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126ddd68;
  func_0x000107c4ce38(param_1);
  func_0x000107c61180();
  func_0x000107c4b278(puVar1,param_2,param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c7071c; end: 100c7078b; -[SCLensMetadataProviderSettingsBuilder withRemovedLensIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c7071c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fe10(param_3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_113082e08);
  *(long *)(param_1 + _DAT_113082e08) = param_3;
  func_0x000107c61174();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100c7078c; end: 100c707b3; -[SCLensDataProviderV2 selectedLens] */

void FUN_100c7078c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c707b4; end: 100c707bb;  */

void FUN_100c707b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed27d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateActiveBadgeStatus_112592398);
  return;
}



/* Entry: 100c707bc; end: 100c7088f; -[SCSpotlightBadgeProvider _updateActiveBadgeStatus] */

void FUN_100c707bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5bf34();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c446d0();
  func_0x000107c61170(uVar1);
  func_0x000107c61144(auStack_38,param_1);
  func_0x000107c6111c(auStack_48,auStack_38);
  uStack_40 = (undefined1)uVar2;
  func_0x000107c3b050(param_1);
  func_0x000107c61120(auStack_48);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100c70890; end: 100c708af; -[_TtC24SCStoriesBadgingServices24SCStoriesBadgingServices storiesBadgingCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c70890(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fe66b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c708b0; end: 100c708b3; -[SCStoriesClientSideBadgingCoordinator hasActiveBadge] */

void FUN_100c708b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hasActiveBadgePersisted_11256a850);
  return;
}



/* Entry: 100c708b4; end: 100c70937; -[SCStoriesClientSideBadgingCoordinator _hasActiveBadgePersisted] */

ulong FUN_100c708b4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x000107c4d9c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e15cd8);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  func_0x000107c6115c(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  uVar4 = uVar1;
  func_0x000107c3ebcc(uVar1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return uVar4;
}



/* Entry: 100c70938; end: 100c70a5b; -[SCSpotlightBadgeProvider _checkInAppBadgeForSpotlightNotifications:] */

void FUN_100c70938(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    func_0x000107c61144(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c61174(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c61174(uVar2);
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c61174(param_3);
    func_0x000107c4e524(uVar1);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_40);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c70a5c; end: 100c70a77;  */

void FUN_100c70a5c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f9930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_performerWithLabel_qualityOfServ_11261c068,
             &PTR____CFConstantStringClassReference_110e1e438,2,0,10);
  return;
}



/* Entry: 100c70a78; end: 100c70aef;  */

void FUN_100c70a78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x28);
  }
  lVar2 = *(long *)(param_1 + 0x20) + 0x40;
  func_0x000107c61148();
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
  }
  func_0x000107c41e0c(uVar4,param_2,puVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100c70af0; end: 100c70b9b;  */

void FUN_100c70af0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c6111c(auStack_38,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar1);
  func_0x000107c4401c(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100c70b9c; end: 100c70ba7; -[SCLensMetadataStoreListenerAnnouncer didUpdateLenses:lensMetadataStore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c70b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  FUN_100c70ba8(0);
  func_0x000107c5fc54(param_3,uVar1);
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5f1ec(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_4);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 100c70ba8; end: 100c70beb;  */

void FUN_100c70ba8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4d630 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ae6a8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4d630 = puVar1;
  return;
}



/* Entry: 100c70bec; end: 100c70c83;  */

void FUN_100c70bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  FUN_100c70ba8(0);
  func_0x000107c5fc54(param_3,uVar1);
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5f1ec(&uStack_50);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_4);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 100c70c84; end: 100c70e33;  */

/* WARNING: Possible PIC construction at 0x000100c70cd8: Changing call to branch */

void FUN_100c70c84(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    ppuVar3 = *(undefined ***)(param_1 + 0x80);
    ppuVar2 = ppuVar3;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c27b8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar1 = ppuVar2;
    }
    func_0x000107c4d664(ppuVar3,param_2,ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 100c70e34; end: 100c70e7f; -[SCCameraHardwareStartOperation publishState:] */

/* WARNING: Possible PIC construction at 0x000100c70e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c70e6c) */

void FUN_100c70e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100c70e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c70e80; end: 100c70f1b;  */

/* WARNING: Possible PIC construction at 0x000100c70eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c70efc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c70ebc) */
/* WARNING: Removing unreachable block (ram,0x000100c70edc) */
/* WARNING: Removing unreachable block (ram,0x000100c70f00) */
/* WARNING: Removing unreachable block (ram,0x000100c70ef0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c70e80(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112dd8860;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4c238();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 100c70f1c; end: 100c70f27; -[SCManagedCapturerSessionStateManagerImpl capturerDidStartRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c70f1c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0890);
  puVar1 = &UNK_1103be638;
  func_0x000107c613fc(&UNK_1103be638,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  FUN_100c70fac(0,0,uVar2,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


