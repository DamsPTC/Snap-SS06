/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b107d00; end: 10b107d3b;  */

void FUN_10b107d00(void)

{
  func_0x00010b107ed0();
  return;
}



/* Entry: 10b107d3c; end: 10b107dd3;  */

void FUN_10b107d3c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c27f28(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc7720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b107eb4();
  func_0x000108c46358(param_1,uVar2);
  func_0x00010b107ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b107dd4; end: 10b107e63;  */

long FUN_10b107dd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbb648;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010b107eb4();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b107e64; end: 10b107e73;  */

void FUN_10b107e64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb688;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b107e74; end: 10b107e9b;  */

long FUN_10b107e74(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b107e9c; end: 10b107ee3;  */

void FUN_10b107e9c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b107ee4; end: 10b107f5b; -[SCNContentResolutionBoltNetworkRulesProviderCallbackCppProxy initWithCpp:] */

undefined1 * FUN_10b107ee4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705da8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b108490();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052b2f08(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b107f5c; end: 10b10804b; -[SCNContentResolutionBoltNetworkRulesProviderCallbackCppProxy getNetworkRulesWithSignals:] */

void FUN_10b107f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x000107c28040(auStack_60,param_3);
  (**(code **)(*plVar2 + 0x10))(auStack_48,plVar2,auStack_60);
  func_0x000107c27914(auStack_60);
  puVar1 = auStack_48;
  func_0x000107c28044(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27914(auStack_48);
  func_0x00010b1084a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10804c; end: 10b10813f;  */

void FUN_10b10804c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126dfc50;
    _objc_opt_class(PTR_PTR_1126dfc50);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_110cbb748;
      uStack_40 = param_2;
      func_0x000107c316f4(&uStack_30,&ppuStack_38,&uStack_40,FUN_10b1081dc);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x000107c27d28(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_10b108468(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_10b108490();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x00010b1084a0();
  return;
}



/* Entry: 10b108140; end: 10b10819b; -[SCNContentResolutionBoltNetworkRulesProviderCallbackCppProxy .cxx_destruct] */

void FUN_10b108140(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb7f0;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052b2f08((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b10819c; end: 10b1081db; -[SCNContentResolutionBoltNetworkRulesProviderCallbackCppProxy .cxx_construct] */

undefined8 * FUN_10b10819c(undefined8 *param_1)

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
      FUN_10b108490();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b1081dc; end: 10b1082cf;  */

void FUN_10b1081dc(undefined8 *param_1,long *param_2)

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
  *puVar1 = &PTR_FUN_110cbb788;
  puVar1[3] = &PTR_DAT_110875230;
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
      FUN_10b108490();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  puVar1[6] = puVar5;
  _objc_autoreleasePoolPop(puVar2);
  func_0x00010b1084a8();
  puVar1[3] = &PTR_FUN_110cbb7d8;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10b108468(&uStack_50);
  return;
}



/* Entry: 10b1082d0; end: 10b1082d3;  */

void FUN_10b1082d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb788;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1082d4; end: 10b1082e7;  */

void FUN_10b1082d4(void)

{
  FUN_10b108458();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1082e8; end: 10b1082f3;  */

long FUN_10b1082e8(long param_1)

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
    ppuStack_38 = &PTR_DAT_110cbb748;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010b1084b8();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10b1082f4; end: 10b10832f;  */

void FUN_10b1082f4(void)

{
  func_0x00010b1084c0();
  return;
}



/* Entry: 10b108330; end: 10b1083c7;  */

void FUN_10b108330(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c28044(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc7fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b1084b8();
  func_0x000107c28040(param_1,uVar2);
  func_0x00010b1084a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10b1083c8; end: 10b108457;  */

long FUN_10b1083c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110cbb748;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010b1084b8();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10b108458; end: 10b108467;  */

void FUN_10b108458(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb788;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b108468; end: 10b10848f;  */

long FUN_10b108468(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10b108490; end: 10b1084cb;  */

void FUN_10b108490(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b1084cc; end: 10b108543; -[SCNContentResolutionContentBundle initWithCpp:] */

undefined1 * FUN_10b1084cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705db0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b108aec();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010529fde0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b108544; end: 10b1085d3; -[SCNContentResolutionContentBundle uniqueIdentifier] */

void FUN_10b108544(long param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_38);
  puVar1 = auStack_38;
  func_0x000107c27f28(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b108b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b1085d4; end: 10b10868b; -[SCNContentResolutionContentBundle withAdditionalSupportedStreamingProtocols:] */

void FUN_10b1085d4(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x00010b108b10();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10b0f417c(auStack_58);
  func_0x00010b108b28();
  func_0x0001052a92cc(auStack_58);
  FUN_10b108948(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b108ae0();
  func_0x00010b108b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b10868c; end: 10b10873b; -[SCNContentResolutionContentBundle withSHA256Validation:] */

void FUN_10b10868c(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  func_0x00010b108b10();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c27f20(auStack_58);
  func_0x00010b108b28();
  func_0x00010b108b20();
  FUN_10b108948(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b108ae0();
  func_0x00010b108b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b10873c; end: 10b108867; -[SCNContentResolutionContentBundle withEncryption:encryptionIv:] */

void FUN_10b10873c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x000107c27f20(auStack_58,param_3);
  func_0x000107c27f20(auStack_70,param_4);
  (**(code **)(*plVar1 + 0x28))(auStack_40,plVar1,auStack_58,auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  FUN_10b108948(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b108b68();
  _objc_release(param_4);
  func_0x00010b108b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar1);
  return;
}



/* Entry: 10b108868; end: 10b1088f7; -[SCNContentResolutionContentBundle storeAsSingleFile] */

void FUN_10b108868(long param_1)

{
  undefined1 auStack_30 [16];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))(auStack_30);
  FUN_10b108948(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b108afc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b1088f8; end: 10b108947;  */

void FUN_10b1088f8(undefined8 *param_1,long param_2)

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
        func_0x00010b108aec();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b108948; end: 10b108973;  */

void FUN_10b108948(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b108a0c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b108974; end: 10b1089c7; -[SCNContentResolutionContentBundle .cxx_destruct] */

void FUN_10b108974(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb800;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010529fde0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b1089c8; end: 10b108a0b; -[SCNContentResolutionContentBundle .cxx_construct] */

undefined8 * FUN_10b1089c8(undefined8 *param_1)

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
      func_0x00010b108aec();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b108a0c; end: 10b108a77;  */

void FUN_10b108a0c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbb800;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010b108aec();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b108a78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b108b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b108a78; end: 10b108adf;  */

void FUN_10b108a78(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfc58;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b108aec();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010529fde0(&uStack_30);
  return;
}



/* Entry: 10b108ae0; end: 10b108b8b;  */

void FUN_10b108ae0(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000020;
  func_0x0001005f1e70();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10b108b8c; end: 10b108c03; -[SCNContentResolutionContentBundleResolutionResult initWithCpp:] */

undefined1 * FUN_10b108b8c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705db8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b108fbc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052b4284(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b108c04; end: 10b108c93; -[SCNContentResolutionContentBundleResolutionResult contentLocation] */

void FUN_10b108c04(void)

{
  undefined1 auStack_30 [16];
  
  func_0x00010b108fec();
  FUN_10b109154(auStack_30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b108fcc();
  func_0x0001052b41d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b108c94; end: 10b108d23; -[SCNContentResolutionContentBundleResolutionResult videoMetadata] */

void FUN_10b108c94(void)

{
  undefined1 auStack_60 [64];
  
  func_0x00010b108fec();
  FUN_10b108d24(auStack_60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b108fcc();
  func_0x0001052b41f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b108d24; end: 10b108d4f;  */

void FUN_10b108d24(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10b10bcd4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b108d50; end: 10b108de7; -[SCNContentResolutionContentBundleResolutionResult selectedVariantInfo] */

void FUN_10b108d50(void)

{
  undefined1 auStack_120 [240];
  
  func_0x00010b108fec();
  FUN_10b108de8(auStack_120);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b108fcc();
  func_0x0001052b4218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b108de8; end: 10b108e3b;  */

void FUN_10b108de8(long param_1)

{
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    FUN_10b10ba10();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b108e3c; end: 10b108e8f; -[SCNContentResolutionContentBundleResolutionResult .cxx_destruct] */

void FUN_10b108e3c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb810;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052b4284((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b108e90; end: 10b108ed3; -[SCNContentResolutionContentBundleResolutionResult .cxx_construct] */

undefined8 * FUN_10b108e90(undefined8 *param_1)

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
      FUN_10b108fbc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b108ed4; end: 10b108f4f;  */

void FUN_10b108ed4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbb810;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b108fbc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b108f50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b108fcc();
  func_0x000107c27d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b108f50; end: 10b108fbb;  */

void FUN_10b108f50(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfc60;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b108fbc();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052b4284(&uStack_30);
  return;
}



/* Entry: 10b108fbc; end: 10b109003;  */

void FUN_10b108fbc(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b109004; end: 10b10907b; -[SCNContentResolutionContentLocation initWithCpp:] */

undefined1 * FUN_10b109004(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705dc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10b1092f4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052b41d0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b10907c; end: 10b109103; -[SCNContentResolutionContentLocation uniqueIdentifier] */

void FUN_10b10907c(long param_1)

{
  undefined1 auStack_38 [24];
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(auStack_38);
  func_0x000107c27f28(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b109310();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b109104; end: 10b109153;  */

void FUN_10b109104(undefined8 *param_1,long param_2)

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
        FUN_10b1092f4();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b109154; end: 10b10917f;  */

void FUN_10b109154(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b109218();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b109180; end: 10b1091d3; -[SCNContentResolutionContentLocation .cxx_destruct] */

void FUN_10b109180(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb820;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052b41d0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b1091d4; end: 10b109217; -[SCNContentResolutionContentLocation .cxx_construct] */

undefined8 * FUN_10b1091d4(undefined8 *param_1)

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
      FUN_10b1092f4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b109218; end: 10b109283;  */

void FUN_10b109218(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cbb820;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10b1092f4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10b109284);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10931c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b109284; end: 10b1092f3;  */

void FUN_10b109284(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dfc68;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10b1092f4();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052b41d0(&uStack_30);
  return;
}



/* Entry: 10b1092f4; end: 10b10933b;  */

void FUN_10b1092f4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10b10933c; end: 10b109883;  */

void FUN_10b10933c(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  undefined1 auStack_3d0 [32];
  ulong uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined1 auStack_388 [64];
  undefined1 uStack_348;
  undefined1 auStack_340 [232];
  undefined1 uStack_258;
  ulong uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_238;
  undefined1 auStack_228 [64];
  undefined1 auStack_1e8 [24];
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b0;
  ulong *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = param_2;
  func_0x00010bf4c700();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_1e8);
  puVar3 = param_2;
  func_0x00010c29a660();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0ffaa4(auStack_228);
  puVar4 = param_2;
  func_0x00010c156fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (puVar4 == (ulong *)0x0) {
    uStack_250 = uStack_250 & 0xffffffffffffff00;
    uStack_238 = 0;
  }
  else {
    _objc_retain(puVar4);
    uStack_1c0 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    puVar5 = puVar4;
    func_0x00010bf529e0();
    func_0x0001052b5040(&uStack_1d0);
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    puVar6 = puVar4;
    _objc_retain();
    func_0x00010b109b80();
    if (puVar6 != (ulong *)0x0) {
      lVar13 = *plStack_190;
      do {
        puVar14 = (ulong *)0x0;
        puVar8 = puVar5;
        do {
          if (*plStack_190 != lVar13) {
            _objc_enumerationMutation(puVar4);
          }
          uVar12 = *(ulong *)(lStack_198 + (long)puVar14 * 8);
          _objc_retain(uVar12);
          FUN_10b10b698();
          puVar7 = &uStack_1d0;
          puVar5 = &uStack_1b0;
          uStack_1b0 = uVar12;
          puStack_1a8 = puVar8;
          func_0x0001052b521c();
          func_0x00010b109b68();
          puVar14 = (ulong *)((long)puVar14 + 1);
          puVar8 = puVar5;
        } while (puVar14 < puVar6);
        func_0x00010b109b80();
        puVar6 = puVar7;
      } while (puVar7 != (ulong *)0x0);
    }
    func_0x00010b109b60();
    func_0x00010b109b60();
    uStack_248 = uStack_1c8;
    uStack_250 = uStack_1d0;
    uStack_240 = uStack_1c0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_238 = 1;
    func_0x0001052b4fd8(&uStack_1d0);
  }
  func_0x00010b109b60();
  puVar4 = param_2;
  func_0x00010c0795e0();
  puVar5 = param_2;
  func_0x00010c0edae0();
  puVar6 = param_2;
  func_0x00010c06d740();
  puVar14 = param_2;
  func_0x00010bf1ef60();
  puVar8 = param_2;
  func_0x00010c2a2660();
  puVar7 = param_2;
  func_0x00010c13ae80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28134();
  puVar9 = param_2;
  func_0x00010c15a360();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (puVar9 == (ulong *)0x0) {
    auStack_340[0] = 0;
    uStack_258 = 0;
  }
  else {
    FUN_10b10b72c(&uStack_160,puVar9);
    func_0x0001052b532c(auStack_340);
    func_0x0001052b4238(&uStack_160);
  }
  func_0x00010b109b94();
  puVar9 = param_2;
  func_0x00010befd4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (puVar9 == (ulong *)0x0) {
    auStack_388[0] = 0;
    uStack_348 = 0;
  }
  else {
    FUN_10b1073c0(&uStack_160,puVar9);
    func_0x0001052b5348(auStack_388);
    func_0x0001052b4f8c(&uStack_160);
  }
  func_0x00010b109b70();
  func_0x00010bf12b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (param_2 == (ulong *)0x0) {
    uStack_3b0 = uStack_3b0 & 0xffffffffffffff00;
    uStack_398 = 0;
  }
  else {
    func_0x000108619534(&uStack_160,param_2);
    uStack_3a8 = uStack_158;
    uStack_3b0 = uStack_160;
    uStack_3a0 = uStack_150;
    uStack_150 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_398 = 1;
    func_0x000107c27a18(&uStack_160);
  }
  func_0x00010b109b78();
  func_0x00010bf0b240();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_3d0);
  func_0x00010bf9c800();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28134();
  func_0x0001052b4adc(param_1,auStack_1e8,auStack_228,&uStack_250,(ulong)puVar4 & 0xffffffff,puVar5,
                      (ulong)puVar6 & 0xffffffff,puVar14,(char)puVar8);
  func_0x00010b109b68();
  func_0x000107c279a4(auStack_3d0);
  func_0x00010b109ba4();
  func_0x0001052b4f4c(&uStack_3b0);
  func_0x00010b109b78();
  func_0x0001052b4f6c(auStack_388);
  func_0x00010b109b70();
  func_0x0001052b4218(auStack_340);
  func_0x00010b109b94();
  _objc_release(puVar7);
  func_0x0001052b4fb8(&uStack_250);
  func_0x00010b109b60();
  func_0x0001052b41f8(auStack_228);
  _objc_release(puVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
  puVar4 = puVar2;
  _objc_release();
  func_0x00010b109b9c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010b109b78();
    func_0x00010b109b78();
    func_0x0001052b4f6c(auStack_388);
    func_0x00010b109b70();
    func_0x0001052b4218(auStack_340);
    func_0x00010b109b94();
    _objc_release(puVar7);
    func_0x0001052b4fb8(&uStack_250);
    func_0x00010b109b60();
    func_0x0001052b41f8(auStack_228);
    _objc_release(puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
    _objc_release(puVar2);
    func_0x00010b109b9c();
    __Unwind_Resume();
    puVar10 = PTR_PTR_1126dfc70;
    _objc_alloc(PTR_PTR_1126dfc70);
    func_0x000107c27f28();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4 + 3;
    FUN_10b108d24();
    _objc_retainAutoreleasedReturnValue();
    if ((char)puVar4[0xe] == '\x01') {
      puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = puVar4[0xc];
      for (uVar12 = puVar4[0xb]; uVar12 != uVar1; uVar12 = uVar12 + 0x10) {
        FUN_10b10b6fc(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar11);
        func_0x00010b109b68();
      }
      func_0x00010bf51e00();
      func_0x00010b109b9c();
    }
    puVar3 = puVar4 + 0x12;
    func_0x000107c28138();
    _objc_retainAutoreleasedReturnValue();
    FUN_10b108de8();
    _objc_retainAutoreleasedReturnValue();
    if ((char)puVar4[0x3a] == '\x01') {
      FUN_10b1074b0();
      _objc_retainAutoreleasedReturnValue();
    }
    if ((char)puVar4[0x3e] == '\x01') {
      func_0x000107c285a8();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x000107c27f68();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar4 + 0x43;
    func_0x000107c28138();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003640(puVar10);
    _objc_release(puVar4);
    func_0x00010b109b60();
    func_0x00010b109b94();
    func_0x00010b109b70();
    func_0x00010b109ba4();
    _objc_release(puVar3);
    func_0x00010b109b78();
    _objc_release(puVar2);
    func_0x00010b109b68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  return;
}



/* Entry: 10b109884; end: 10b109b5f;  */

void FUN_10b109884(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_78;
  
  puVar7 = PTR_PTR_1126dfc70;
  _objc_alloc(PTR_PTR_1126dfc70);
  lVar8 = param_1;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + 0x18;
  FUN_10b108d24();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x70) == '\x01') {
    puStack_78 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        *(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x60);
    for (lVar11 = *(long *)(param_1 + 0x58); lVar11 != lVar1; lVar11 = lVar11 + 0x10) {
      lVar10 = lVar11;
      FUN_10b10b6fc(lVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puStack_78,param_2,lVar10);
      func_0x00010b109b68();
    }
    func_0x00010bf51e00();
    func_0x00010b109b9c();
  }
  else {
    puStack_78 = (undefined *)0x0;
  }
  uVar2 = *(undefined1 *)(param_1 + 0x78);
  iVar5 = *(int *)(param_1 + 0x7c);
  uVar3 = *(undefined1 *)(param_1 + 0x80);
  iVar6 = *(int *)(param_1 + 0x84);
  uVar4 = *(undefined1 *)(param_1 + 0x88);
  lVar11 = param_1 + 0x90;
  func_0x000107c28138();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b108de8();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x1d0) == '\x01') {
    FUN_10b1074b0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (*(char *)(param_1 + 0x1f0) == '\x01') {
    func_0x000107c285a8();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x000107c27f68();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x218;
  func_0x000107c28138();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003640(puVar7,param_2,lVar8,lVar9,puStack_78,uVar2,(long)iVar5,uVar3,(long)iVar6,
                      uVar4);
  _objc_release(param_1);
  func_0x00010b109b60();
  func_0x00010b109b94();
  func_0x00010b109b70();
  func_0x00010b109ba4();
  _objc_release(lVar11);
  func_0x00010b109b78();
  _objc_release(lVar9);
  func_0x00010b109b68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b109b60; end: 10b109bab;  */

void FUN_10b109b60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b109bac; end: 10b109c23; -[SCNContentResolutionContentResolver initWithCpp:] */

undefined1 * FUN_10b109bac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_112705dc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010b10b2bc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001052a1398(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b109c24; end: 10b109d0f; +[SCNContentResolutionContentResolver createWithAllDependencies:blizzardLogger:emitContentResolve:] */

void FUN_10b109c24(void)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010b10b364();
  func_0x00010b10b2f8();
  func_0x00010b10b324();
  func_0x00010b10b498(auStack_50);
  FUN_10b107564(auStack_60);
  FUN_10b230590(&uStack_40,auStack_50,auStack_60,in_x4);
  func_0x00010b10b458();
  func_0x0001052b2f08(auStack_50);
  FUN_10b10ae80(uStack_40,uStack_38);
  uVar1 = uStack_40;
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a1398(&uStack_40);
  func_0x00010b10b2e4();
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b109d10; end: 10b109e4f; +[SCNContentResolutionContentResolver createWithAllDependenciesOnWeb:mediaVariantProvider:blizzardLogger:emitContentResolve:] */

void FUN_10b109d10(void)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b10b364();
  func_0x00010b10b2f8();
  func_0x00010b10b324();
  func_0x00010b10b4b8();
  func_0x00010b10b498(auStack_60);
  FUN_10b107a58(auStack_70);
  FUN_10b109e50(auStack_80,in_x4);
  FUN_10b2306cc(&uStack_50,auStack_60,auStack_70,auStack_80,in_x5);
  func_0x00010b10b458();
  func_0x0001052b243c(auStack_70);
  func_0x0001052b2f08(auStack_60);
  FUN_10b10ae80(uStack_50,uStack_48);
  uVar1 = uStack_50;
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a1398(&uStack_50);
  func_0x00010b10b3c0();
  func_0x00010b10b2e4();
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b109e50; end: 10b109e9f;  */

void FUN_10b109e50(undefined8 *param_1,long param_2)

{
  _objc_retain(param_2);
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10b107564(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b109ea0; end: 10b10a02b; +[SCNContentResolutionContentResolver create:mediaVariantProvider:blizzardLogger:fallbackServiceHost:emitContentResolve:] */

void FUN_10b109ea0(void)

{
  undefined8 uVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long unaff_x20;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010b10b364();
  func_0x00010b10b2f8();
  func_0x00010b10b324();
  func_0x00010b10b4b8();
  _objc_retain(in_x5);
  func_0x00010b10b498(auStack_60);
  func_0x00010b10b324();
  if (unaff_x20 == 0) {
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    FUN_10b107a58(&uStack_70);
  }
  func_0x00010b10b2e4();
  FUN_10b109e50(auStack_80,in_x4);
  func_0x000107c27f64(auStack_a0,in_x5);
  FUN_10b2305e8(&uStack_50,auStack_60,&uStack_70,auStack_80,auStack_a0,in_x6);
  func_0x000107c279a4(auStack_a0);
  func_0x0001052b61cc(auStack_80);
  func_0x0001052b243c(&uStack_70);
  func_0x0001052b2f08(auStack_60);
  FUN_10b10ae80(uStack_50,uStack_48);
  uVar1 = uStack_50;
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052a1398(&uStack_50);
  func_0x00010b10b35c();
  func_0x00010b10b3c0();
  func_0x00010b10b2e4();
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b10a02c; end: 10b10a0ff; -[SCNContentResolutionContentResolver resolveUrl:mediaId:] */

void FUN_10b10a02c(void)

{
  long unaff_x21;
  undefined8 uVar1;
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [576];
  
  FUN_10b10b298();
  func_0x00010b10b324();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x00010b10b3c8(auStack_298);
  func_0x00010b10b354(auStack_2b0);
  func_0x00010b10b32c(auStack_280);
  func_0x00010b10b33c();
  func_0x00010b10b3ec();
  FUN_10b10b4c0(auStack_280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10b30c();
  func_0x00010b10b2e4();
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b10a100; end: 10b10a1ef; -[SCNContentResolutionContentResolver resolveUrlAsync:mediaId:] */

void FUN_10b10a100(void)

{
  long unaff_x21;
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10b10b298();
  func_0x00010b10b324();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x00010b10b3c8(auStack_58);
  func_0x00010b10b354(auStack_70);
  func_0x00010b10b380(&uStack_40);
  func_0x00010b10b440();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  uStack_78 = uStack_38;
  uStack_80 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10b10a1f0(&uStack_80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10b318();
  func_0x00010b10b3b8();
  func_0x00010b10b2e4();
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b10a1f0; end: 10b10a41b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b10a1f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int extraout_w10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  long alStack_68 [7];
  
  puVar1 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar2 = puVar1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  alStack_68[5] = 0;
  alStack_68[6] = 0;
  alStack_68[1] = 0;
  alStack_68[2] = 0;
  func_0x0001052b5d54(alStack_68 + 3,param_1,alStack_68 + 1);
  func_0x0001052b5da8(alStack_68 + 5,alStack_68 + 3);
  func_0x0001052b5e30(alStack_68 + 3);
  func_0x0001052b5e30(alStack_68 + 1);
  func_0x000107c27b48(alStack_68);
  func_0x000107c27b4c(alStack_68 + 3,alStack_68[0]);
  lStack_78 = alStack_68[0];
  alStack_68[0] = 0;
  lStack_90 = 0;
  lStack_88 = 0;
  lStack_a0 = alStack_68[5] + 0x278;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  puStack_80 = puVar1;
  __ZNSt3__15mutex4lockEv();
  lVar3 = alStack_68[5];
  func_0x0001052b5de4();
  if ((int)lVar3 == 0) {
    puVar4 = (undefined8 *)0x18;
    __Znwm();
    lVar3 = lStack_78;
    puVar1 = puStack_80;
    *puVar4 = &PTR_FUN_110cbb850;
    puStack_80 = (undefined *)0x0;
    lStack_78 = 0;
    puVar4[2] = lVar3;
    puVar4[1] = puVar1;
    plVar5 = *(long **)(alStack_68[5] + 0x2c0);
    *(undefined8 **)(alStack_68[5] + 0x2c0) = puVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  else {
    func_0x0001052b5da8(&lStack_90,alStack_68 + 5);
  }
  func_0x000107c2798c(&lStack_a0);
  if (lStack_90 != 0) {
    lStack_a0 = lStack_90;
    lStack_98 = lStack_88;
    if (lStack_88 != 0) {
      do {
        func_0x00010b10b2bc();
      } while (extraout_w10 != 0);
    }
    FUN_10b10affc(&puStack_80);
    func_0x00010b10b448();
  }
  uStack_a8 = alStack_68[4];
  uStack_b0 = alStack_68[3];
  alStack_68[3] = 0;
  alStack_68[4] = 0;
  func_0x00010b10b478();
  func_0x00010b10b26c(&puStack_80);
  func_0x000107c27b58(alStack_68 + 3);
  lVar3 = alStack_68[0];
  alStack_68[0] = 0;
  if (lVar3 != 0) {
    func_0x00010b10b4ac();
  }
  func_0x00010b10b3b8();
  func_0x000107c27b58(&uStack_b0);
  _objc_release(0);
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b10a41c; end: 10b10a4eb; -[SCNContentResolutionContentResolver resolveContentBundle:debugInfo:] */

void FUN_10b10a41c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [16];
  
  FUN_10b10b298();
  func_0x00010b10b324();
  func_0x00010b10b40c();
  func_0x00010b10b354(auStack_68);
  func_0x00010b10b380(auStack_40);
  func_0x00010b10b3a8();
  func_0x00010b10b470();
  puVar1 = auStack_40;
  FUN_10b109154(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052b41d0(auStack_40);
  func_0x00010b10b2e4();
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10a4ec; end: 10b10a5bb; -[SCNContentResolutionContentResolver resolveContentBundleWithMetadata:debugInfo:] */

void FUN_10b10a4ec(void)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [16];
  
  FUN_10b10b298();
  func_0x00010b10b324();
  func_0x00010b10b40c();
  func_0x00010b10b354(auStack_68);
  func_0x00010b10b380(auStack_40);
  func_0x00010b10b3a8();
  func_0x00010b10b470();
  puVar1 = auStack_40;
  func_0x00010b108e14(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052b4284(auStack_40);
  func_0x00010b10b2e4();
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10a5bc; end: 10b10a683; -[SCNContentResolutionContentResolver resolveContentBundleAsPlatformResult:] */

void FUN_10b10a5bc(void)

{
  undefined1 *puVar1;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [576];
  
  func_0x00010b10b2ac();
  FUN_10b1088f8(auStack_280);
  func_0x00010b10b3e4(auStack_270);
  func_0x00010529fde0(auStack_280);
  puVar1 = auStack_270;
  FUN_10b10b4c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001052b5cdc(auStack_270);
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10a684; end: 10b10a7cf; -[SCNContentResolutionContentResolver extractAllContentLocationsFromContentBundle:] */

void FUN_10b10a684(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  long lStack_50;
  
  func_0x00010b10b2ac();
  FUN_10b1088f8(auStack_68);
  func_0x00010b10b3e4(&lStack_58);
  func_0x00010529fde0(auStack_68);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  for (lVar2 = lStack_58; lVar2 != lStack_50; lVar2 = lVar2 + 0x10) {
    FUN_10b109154(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    func_0x00010b10b35c();
  }
  func_0x00010bf51e00(puVar1);
  func_0x00010b10b2e4();
  func_0x0001052b60a4(&lStack_58);
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10a7d0; end: 10b10a8a3; -[SCNContentResolutionContentResolver resolveSerializedContentObject:mediaId:] */

void FUN_10b10a7d0(void)

{
  long unaff_x21;
  undefined8 uVar1;
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [576];
  
  FUN_10b10b298();
  func_0x00010b10b324();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x00010b10b42c(auStack_298);
  func_0x00010b10b354(auStack_2b0);
  func_0x00010b10b32c(auStack_280);
  func_0x00010b10b33c();
  func_0x00010b10b3f4();
  FUN_10b10b4c0(auStack_280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10b30c();
  func_0x00010b10b2e4();
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b10a8a4; end: 10b10a993; -[SCNContentResolutionContentResolver resolveSerializedContentObjectAsync:mediaId:] */

void FUN_10b10a8a4(void)

{
  long unaff_x21;
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10b10b298();
  func_0x00010b10b324();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  func_0x00010b10b42c(auStack_58);
  func_0x00010b10b354(auStack_70);
  func_0x00010b10b380(&uStack_40);
  func_0x00010b10b440();
  func_0x000107c27914(auStack_58);
  uStack_78 = uStack_38;
  uStack_80 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10b10a1f0(&uStack_80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10b318();
  func_0x00010b10b3b8();
  func_0x00010b10b2e4();
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b10a994; end: 10b10aa6f; -[SCNContentResolutionContentResolver resolveContentLocationToURLs:debugInfo:] */

void FUN_10b10a994(void)

{
  undefined1 *puVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  FUN_10b10b298();
  func_0x00010b10b324();
  FUN_10b109104(auStack_58);
  func_0x00010b10b354(auStack_70);
  func_0x00010b10b32c(auStack_48);
  func_0x00010b10b33c();
  func_0x0001052b41d0(auStack_58);
  puVar1 = auStack_48;
  func_0x000107c2824c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c278a8(auStack_48);
  func_0x00010b10b2e4();
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10aa70; end: 10b10ab03; -[SCNContentResolutionContentResolver updateNetworkMapping:] */

void FUN_10b10aa70(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x00010b10b2ac();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b10b42c(auStack_48);
  (**(code **)(*plVar1 + 0x58))(plVar1,auStack_48);
  func_0x00010b10b450();
  func_0x00010b10b2dc();
  return;
}



/* Entry: 10b10ab04; end: 10b10ac2b; -[SCNContentResolutionContentResolver getUrlForRelativePathWithinAssetGroup:desiredAssetRelativePath:currentAssetRelativePath:] */

void FUN_10b10ab04(long param_1)

{
  undefined1 *puVar1;
  undefined8 in_x4;
  long *plVar2;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x00010b10b364();
  func_0x00010b10b2f8();
  func_0x00010b10b324();
  func_0x00010b10b4b8();
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x00010b10b3c8(auStack_70);
  func_0x00010b10b354(auStack_88);
  func_0x000107c27f20(auStack_a0,in_x4);
  (**(code **)(*plVar2 + 0x60))(auStack_58,plVar2,auStack_70,auStack_88,auStack_a0);
  func_0x00010b10b33c();
  func_0x00010b10b3ec();
  func_0x00010b10b488();
  puVar1 = auStack_58;
  func_0x000107c27f28(puVar1);
  _objc_retainAutoreleasedReturnValue();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  func_0x00010b10b3c0();
  func_0x00010b10b2e4();
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10ac2c; end: 10b10ace3; -[SCNContentResolutionContentResolver getContentIdFromContentUrl:] */

void FUN_10b10ac2c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [32];
  
  func_0x00010b10b2ac();
  func_0x00010b10b3c8(auStack_68);
  func_0x00010b10b3e4(auStack_50);
  func_0x00010b10b3a8();
  puVar1 = auStack_50;
  func_0x000107c27f68(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c279a4(auStack_50);
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10ace4; end: 10b10ad7f; -[SCNContentResolutionContentResolver isContentObjectExpired:] */

long * FUN_10b10ace4(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x00010b10b2ac();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010b10b42c(auStack_48);
  (**(code **)(*plVar1 + 0x70))(plVar1,auStack_48);
  func_0x00010b10b450();
  func_0x00010b10b2dc();
  return plVar1;
}



/* Entry: 10b10ad80; end: 10b10ae2f; -[SCNContentResolutionContentResolver convertContentUrlToContentObject:] */

void FUN_10b10ad80(void)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x00010b10b2ac();
  func_0x00010b10b3c8(auStack_60);
  func_0x00010b10b3e4(auStack_48);
  func_0x00010b10b33c();
  puVar1 = auStack_48;
  func_0x000107c28044(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b10b3f4();
  func_0x00010b10b2dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10ae30; end: 10b10ae7f;  */

void FUN_10b10ae30(undefined8 *param_1,long param_2)

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
        func_0x00010b10b2bc();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b10ae80; end: 10b10aef7;  */

void FUN_10b10ae80(long param_1,long param_2)

{
  int extraout_w10;
  undefined8 unaff_x19;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  if (param_1 == 0) {
    unaff_x19 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_110cbb830;
    lStack_38 = param_1;
    lStack_30 = param_2;
    if (param_2 != 0) {
      do {
        func_0x00010b10b2bc();
      } while (extraout_w10 != 0);
    }
    func_0x000107c31700(&ppuStack_28,&lStack_38,FUN_10b10af8c);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b10b4a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10b10aef8; end: 10b10af4b; -[SCNContentResolutionContentResolver .cxx_destruct] */

void FUN_10b10aef8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cbb830;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001052a1398((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10b10af4c; end: 10b10af8b; -[SCNContentResolutionContentResolver .cxx_construct] */

undefined8 * FUN_10b10af4c(undefined8 *param_1)

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
      func_0x00010b10b2bc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10b10af8c; end: 10b10affb;  */

void FUN_10b10af8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126b7f78;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010b10b2bc();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001052a1398(&uStack_30);
  return;
}



/* Entry: 10b10affc; end: 10b10b1d7;  */

void FUN_10b10affc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar1;
  undefined8 uStack_290;
  long lStack_288;
  undefined1 auStack_280 [576];
  
  if (param_3 != 0) {
    do {
      func_0x00010b10b2bc();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b10b2bc();
    } while (extraout_w10_00 != 0);
  }
  uVar1 = *param_1;
  uStack_290 = param_2;
  lStack_288 = param_3;
  func_0x0001052b5e58(auStack_280,&uStack_290);
  FUN_10b10b4c0(auStack_280);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar1);
  func_0x00010b10b35c();
  func_0x00010b10b3a0();
  func_0x00010b10b478();
  func_0x00010b10b448();
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 10b10b1d8; end: 10b10b1db;  */

undefined8 * FUN_10b10b1d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb850;
  func_0x00010b10b26c(param_1 + 1);
  return param_1;
}



/* Entry: 10b10b1dc; end: 10b10b1ef;  */

void FUN_10b10b1dc(void)

{
  FUN_10b10b240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b10b1f0; end: 10b10b23f;  */

void FUN_10b10b1f0(long param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x00010b10b2bc();
    } while (extraout_w10 != 0);
  }
  FUN_10b10affc(param_1 + 8);
  func_0x00010b10b3b0();
  return;
}



/* Entry: 10b10b240; end: 10b10b297;  */

undefined8 * FUN_10b10b240(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbb850;
  func_0x00010b10b26c(param_1 + 1);
  return param_1;
}



/* Entry: 10b10b298; end: 10b10b4bf;  */

void FUN_10b10b298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b10b4c0; end: 10b10b557;  */

void FUN_10b10b4c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dfc78;
  _objc_alloc(PTR_PTR_1126dfc78);
  lVar2 = param_1;
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  FUN_10b109884(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a020(puVar1,param_2,lVar2,param_1);
  FUN_10b10b558();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10b558; end: 10b10b563;  */

void FUN_10b10b558(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b10b564; end: 10b10b61b;  */

void FUN_10b10b564(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c086360(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108619534(&uStack_50);
  func_0x00010c26fc60();
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[2] = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  *(int *)(param_1 + 3) = (int)param_2;
  func_0x000107c27a18(&uStack_50);
  _objc_release(uVar1);
  FUN_10b10b690();
  return;
}



/* Entry: 10b10b61c; end: 10b10b68f;  */

void FUN_10b10b61c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dfc80;
  _objc_alloc(PTR_PTR_1126dfc80);
  lVar2 = param_1;
  func_0x000107c285a8(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020a20(puVar1,param_2,lVar2,*(undefined4 *)(param_1 + 0x18));
  FUN_10b10b690();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b10b690; end: 10b10b697;  */

void FUN_10b10b690(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b10b698; end: 10b10b6fb;  */

undefined1  [16] FUN_10b10b698(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c270e60(param_1);
  uVar2 = param_1;
  func_0x00010bf25e40(param_1);
  _objc_release(param_1);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10b10b6fc; end: 10b10b72b;  */

void FUN_10b10b6fc(void)

{
  _objc_alloc(PTR_PTR_1126dfc88);
  func_0x00010c052b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b10b72c; end: 10b10ba0f;  */

void FUN_10b10b72c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c297440();
  uVar2 = param_3;
  func_0x00010c2a5040();
  uVar3 = param_3;
  func_0x00010bfe0640();
  uVar4 = param_3;
  func_0x00010bf3efc0();
  func_0x00010c2a11a0(param_3);
  uVar5 = param_3;
  uVar13 = param_2;
  func_0x00010bf1c860();
  uVar6 = param_3;
  func_0x00010bf8b340();
  func_0x00010c2a11c0(param_3);
  uVar7 = param_3;
  func_0x00010c297500();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_90);
  uVar8 = param_3;
  func_0x00010c297860();
  uVar9 = param_3;
  func_0x00010bfa1dc0();
  func_0x00010c11f960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f20(auStack_a8);
  uVar10 = param_3;
  func_0x00010c11f940();
  func_0x00010c11f980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_c8);
  uVar11 = param_3;
  func_0x00010c08ada0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_e8);
  uVar12 = param_3;
  func_0x00010bf27ce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_108);
  func_0x00010c2976c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_128);
  func_0x0001052b6df0(param_2,uVar13,param_1,uVar1 & 0xffffffff,uVar2 & 0xffffffff,
                      uVar3 & 0xffffffff,uVar4,uVar5 & 0xffffffff,uVar6,auStack_90,(int)uVar8,
                      (int)uVar9,auStack_a8,(int)uVar10);
  func_0x000107c279a4(auStack_128);
  _objc_release(param_3);
  func_0x000107c279a4(auStack_108);
  _objc_release(uVar12);
  func_0x000107c279a4(auStack_e8);
  _objc_release(uVar11);
  func_0x000107c279a4(auStack_c8);
  func_0x00010b10bbe8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  func_0x00010b10bbe0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  _objc_release(uVar7);
  func_0x00010b10bbd8();
  return;
}



/* Entry: 10b10ba10; end: 10b10bbd7;  */

void FUN_10b10ba10(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  puVar9 = PTR_PTR_1126dfc90;
  _objc_alloc();
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  iVar5 = param_1[3];
  uVar14 = param_1[4];
  uVar7 = param_1[5];
  uVar13 = *(undefined8 *)(param_1 + 6);
  uVar15 = param_1[8];
  puVar10 = param_1 + 10;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1[0x10];
  uVar6 = param_1[0x11];
  puVar11 = param_1 + 0x12;
  func_0x000107c27f28();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1[0x18];
  func_0x000107c27f68();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_1 + 0x22;
  func_0x000107c27f68();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x2a;
  func_0x000107c27f68();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0605e0(uVar14,uVar15,puVar9,param_2,uVar1,uVar4,uVar2,(long)iVar5,uVar7,uVar13,
                      puVar10,uVar3,uVar6,puVar11,uVar8);
  FUN_10b10bbd8();
  _objc_release(param_1);
  _objc_release(puVar12);
  func_0x00010b10bbe0();
  func_0x00010b10bbe8();
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b10bbd8; end: 10b10bbef;  */

void FUN_10b10bbd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b10bbf0; end: 10b10bcd3;  */

void FUN_10b10bbf0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_68 [40];
  
  _objc_retain();
  func_0x00010c1076a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b0ffe84(auStack_68);
  uVar1 = param_2;
  func_0x00010c072a20(param_2);
  func_0x00010c25c880(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010b0fb71c();
  func_0x0001052b70b0(param_1,auStack_68,uVar1,uVar2 & 0xffffffffff);
  _objc_release(param_2);
  func_0x0001052ac664(auStack_68);
  func_0x00010b10bd74();
  func_0x00010b10bd6c();
  return;
}



/* Entry: 10b10bcd4; end: 10b10bd6b;  */

void FUN_10b10bcd4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_PTR_1126dfc98;
  _objc_alloc(PTR_PTR_1126dfc98);
  lVar3 = param_1;
  FUN_10b100004(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  param_1 = param_1 + 0x2c;
  FUN_10b0faccc(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0384c0(puVar2,param_2,lVar3,uVar1,param_1);
  func_0x00010b10bd74();
  func_0x00010b10bd6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


