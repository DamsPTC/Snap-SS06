/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052e2af8; end: 1052e2aff; -[SCNetworkActivityStatusChangeItem networkActivityAttributionIdentifier] */

undefined8 FUN_1052e2af8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1052e2b00; end: 1052e2b2f; -[SCNetworkActivityStatusChangeItem setNetworkActivityAttributionIdentifier:] */

void FUN_1052e2b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1052e2b30; end: 1052e2b37; -[SCNetworkActivityStatusChangeItem connectivityStatus] */

undefined8 FUN_1052e2b30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1052e2b38; end: 1052e2b3f; -[SCNetworkActivityStatusChangeItem setConnectivityStatus:] */

void FUN_1052e2b38(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 1052e2b40; end: 1052e2bdf; -[SCNetworkActivityStatusChangeItem .cxx_destruct] */

void FUN_1052e2b40(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052e2be0; end: 1052e2c27; -[SCBatteryNetworkMonitor dealloc] */

void FUN_1052e2be0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x88));
  puStack_28 = PTR_PTR_1126e7580;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1052e2c28; end: 1052e2d17; -[SCBatteryNetworkMonitor networkConnectivityStatusDidChange:] */

void FUN_1052e2c28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 1052e2d18; end: 1052e2d6b;  */

void FUN_1052e2d18(long param_1)

{
  FUN_1052e2d6c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),
                *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be629e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052e2d6c; end: 1052e2dc3;  */

bool FUN_1052e2d6c(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((param_1 == 0) && (param_2 != 0)) {
    bVar1 = true;
  }
  else {
    puVar2 = PTR_PTR_1126ae520;
    func_0x00010c22b6a0(PTR_PTR_1126ae520);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf07b60();
    bVar1 = puVar3 == (undefined *)0x2;
    _objc_release(puVar2);
  }
  return bVar1;
}



/* Entry: 1052e2dc4; end: 1052e2e67; -[SCBatteryNetworkMonitor _networkConnectivityStatusDidChange:atTime:inBackground:] */

void FUN_1052e2dc4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x78) == param_3) {
    return;
  }
  *(long *)(param_1 + 0x78) = param_3;
  puVar2 = PTR_PTR_1126b6f90;
  _objc_retain(param_4);
  _objc_alloc(puVar2);
  func_0x00010c052a20();
  _objc_release(param_4);
  lVar1 = 0x38;
  if (param_5 == 0) {
    lVar1 = 0x20;
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + lVar1),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1052e2e68; end: 1052e2e9f;  */

void FUN_1052e2e68(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be58f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052e2ea0; end: 1052e2f6f; -[SCBatteryNetworkMonitor _logStartedNetworkActivity:startTime:activityAttributionKey:activityAttributionInfo:] */

void FUN_1052e2ea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_1052e2d6c(uVar1,uVar2);
  puVar3 = PTR_PTR_1126b6e68;
  _objc_alloc(PTR_PTR_1126b6e68);
  func_0x00010c02f000();
  _objc_release(param_6);
  func_0x00010be007e0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1052e2f70; end: 1052e2fab;  */

void FUN_1052e2f70(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be537a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052e2fac; end: 1052e3083; -[SCBatteryNetworkMonitor _logFinishedNetworkActivity:endTime:activityAttributionKey:activityAttributionInfo:succeeded:] */

void FUN_1052e2fac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_1052e2d6c(uVar1,uVar2);
  puVar3 = PTR_PTR_1126b6e68;
  _objc_alloc(PTR_PTR_1126b6e68);
  func_0x00010c02f000();
  _objc_release(param_6);
  func_0x00010bdfe280(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1052e3084; end: 1052e321b; -[SCBatteryNetworkMonitor _didStartNetworkActivity:timestamp:activityAttributionKey:networkActivityAttributionIdentifier:inBackground:] */

void FUN_1052e3084(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  long lStack_130;
  undefined *puStack_128;
  undefined ***pppuStack_120;
  undefined8 *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined ***pppuStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b6f90;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc();
  iVar8 = (int)*(undefined8 *)(param_1 + 0x78);
  uVar10 = param_5;
  func_0x00010c052a20();
  _objc_release(param_6);
  _objc_release(param_5);
  lVar9 = 0x28;
  if (param_7 == 0) {
    lVar9 = 0x10;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar9));
  lVar9 = *(long *)(param_1 + 0x40);
  if (lVar9 == 0) {
    puVar2 = PTR_PTR_1126b6ec8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285020();
    _objc_release(puVar2);
    *(undefined1 *)(param_1 + 0x90) = 1;
    lVar9 = *(long *)(param_1 + 0x40);
  }
  *(long *)(param_1 + 0x40) = lVar9 + 1;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dd0078;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dae8f8;
  puVar5 = &uStack_68;
  pppuVar6 = &ppuStack_78;
  uVar7 = 2;
  uStack_68 = param_4;
  lStack_60 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_1052e321c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(pppuVar6);
  puVar1 = PTR_PTR_1126b6f90;
  _objc_retain(uVar10);
  _objc_retain(uVar7);
  _objc_alloc();
  func_0x00010c052a20();
  _objc_release(uVar10);
  _objc_release(uVar7);
  lVar9 = 0x30;
  if (iVar8 == 0) {
    lVar9 = 0x18;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_3 + lVar9));
  lVar9 = *(long *)(param_3 + 0x40);
  if (0 < lVar9) {
    *(long *)(param_3 + 0x40) = lVar9 + -1;
    lVar9 = lVar9 + -1;
  }
  if (lVar9 == 0) {
    *(undefined1 *)(param_3 + 0x90) = 0;
    puVar2 = PTR_PTR_1126b6ec8;
    func_0x00010c22b6a0(PTR_PTR_1126b6ec8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285020();
    _objc_release(puVar2);
  }
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110dd0098;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110dae8f8;
  pppuStack_e8 = pppuVar6;
  puStack_e0 = puVar5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  _objc_release(pppuVar6);
  puVar3 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_1052e33b4;
  puVar4 = puVar3;
  lStack_130 = param_3;
  puStack_128 = puVar1;
  pppuStack_120 = pppuVar6;
  puStack_118 = puVar5;
  ppuStack_110 = &puStack_90;
  func_0x00010beb3780();
  if ((int)puVar4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_138,puVar3);
    uVar10 = puVar3[1];
    _objc_copyWeak(auStack_140,auStack_138);
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar10);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_140);
    _objc_destroyWeak(auStack_138);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 1052e321c; end: 1052e33b3; -[SCBatteryNetworkMonitor _didFinishNetworkActivity:timestamp:activityAttributionKey:networkActivityAttributionIdentifier:succeeded:inBackground:] */

void FUN_1052e321c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b6f90;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc();
  func_0x00010c052a20();
  _objc_release(param_6);
  _objc_release(param_5);
  lVar4 = 0x30;
  if (param_8 == 0) {
    lVar4 = 0x18;
  }
  func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar4));
  lVar4 = *(long *)(param_1 + 0x40);
  if (0 < lVar4) {
    *(long *)(param_1 + 0x40) = lVar4 + -1;
    lVar4 = lVar4 + -1;
  }
  if (lVar4 == 0) {
    *(undefined1 *)(param_1 + 0x90) = 0;
    puVar2 = PTR_PTR_1126b6ec8;
    func_0x00010c22b6a0(PTR_PTR_1126b6ec8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c285020();
    _objc_release(puVar2);
  }
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dd0098;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110dae8f8;
  uStack_68 = param_4;
  lStack_60 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  _objc_release(param_4);
  lVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_1052e33b4;
  lVar3 = lVar4;
  lStack_b0 = param_1;
  puStack_a8 = puVar1;
  uStack_a0 = param_4;
  lStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010beb3780();
  if ((int)lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_b8,lVar4);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    _objc_copyWeak(auStack_c0,auStack_b8);
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 1052e33b4; end: 1052e349f; -[SCBatteryNetworkMonitor resetNetworkUsageRecordWhenAppOpen] */

void FUN_1052e33b4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010beb3780();
  if ((int)lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 1052e34a0; end: 1052e34d3;  */

void FUN_1052e34a0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be93520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052e34d4; end: 1052e354b; -[SCBatteryNetworkMonitor _resetNetworkUsageRecordWhenAppOpenWithTimestamp:] */

void FUN_1052e34d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be93510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetNetworkTrafficStatisticsDa_1125826e0);
  return;
}



/* Entry: 1052e354c; end: 1052e35b3; -[SCBatteryNetworkMonitor _didEnterBackgroundWithTimestamp:] */

void FUN_1052e354c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052e35b4; end: 1052e3717; -[SCBatteryNetworkMonitor networkUsageFromAppOpenUntilTimestamp:onAppBackground:] */

void FUN_1052e35b4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb3780();
  puVar2 = PTR____NSDictionary0__struct_11034ab58;
  if (((int)lVar1 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1052e3718;
    uStack_40 = 0x1052e3728;
    uStack_38 = 0;
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    uStack_70 = param_4;
    func_0x00010c0f8240(uVar3);
    puVar2 = (undefined *)puStack_58[5];
    _objc_retain(puVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052e3718; end: 1052e372f;  */

void FUN_1052e3718(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1052e3730; end: 1052e3787;  */

void FUN_1052e3730(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be62b20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052e3788; end: 1052e37f3; -[SCBatteryNetworkMonitor _networkUsageFromAppOpenUntilTimestamp:onAppBackground:] */

void FUN_1052e3788(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be62b40(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x78));
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    func_0x00010bdfd940(param_1,param_2,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1052e37f4; end: 1052e3b27; -[SCBatteryNetworkMonitor _networkUsageFromAppOpenUntilTimestamp:withConnectivityStatus:] */

void FUN_1052e37f4(long param_1,undefined8 param_2,undefined8 param_3,undefined ***param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined8 uVar19;
  long lVar20;
  undefined ***pppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined **ppuVar28;
  undefined8 uVar29;
  undefined ***pppuVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auStack_860 [8];
  undefined ***pppuStack_858;
  undefined ***pppuStack_850;
  undefined1 auStack_848 [8];
  undefined8 uStack_840;
  undefined8 *puStack_838;
  undefined8 uStack_830;
  code *pcStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined ***pppuStack_810;
  undefined *puStack_808;
  undefined ***pppuStack_800;
  undefined ***pppuStack_7f8;
  undefined ***pppuStack_7f0;
  undefined8 uStack_7e8;
  undefined ***pppuStack_7e0;
  undefined ***pppuStack_7d8;
  undefined1 **ppuStack_7d0;
  code *pcStack_7c8;
  undefined *puStack_7c0;
  undefined *puStack_7b8;
  undefined *puStack_7b0;
  undefined *puStack_7a8;
  undefined *puStack_7a0;
  undefined *puStack_798;
  undefined ***pppuStack_790;
  undefined *puStack_788;
  undefined ***pppuStack_780;
  undefined8 uStack_778;
  undefined *puStack_770;
  undefined ***pppuStack_768;
  undefined ***pppuStack_760;
  undefined ***pppuStack_758;
  undefined *puStack_750;
  undefined *puStack_748;
  undefined *puStack_740;
  undefined **ppuStack_738;
  undefined *puStack_730;
  long lStack_728;
  undefined *puStack_720;
  undefined ***pppuStack_718;
  undefined ***pppuStack_710;
  undefined ***pppuStack_708;
  undefined ***pppuStack_700;
  undefined ***pppuStack_6f8;
  undefined *puStack_6f0;
  undefined ***pppuStack_6e8;
  undefined ***pppuStack_6e0;
  undefined *puStack_6d8;
  undefined8 uStack_6d0;
  long lStack_6c8;
  long *plStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  long *plStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  long *plStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long *plStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined **ppuStack_550;
  undefined **ppuStack_548;
  undefined **ppuStack_540;
  undefined **ppuStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined ***pppuStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined ***pppuStack_490;
  undefined *puStack_488;
  undefined *puStack_480;
  undefined ***pppuStack_478;
  undefined ***pppuStack_470;
  undefined *puStack_468;
  long lStack_160;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = *(undefined8 *)(param_1 + 0x80);
  uVar29 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar2);
  pppuVar3 = *(undefined ****)(param_1 + 0x18);
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf51e00();
  pppuVar30 = pppuVar3;
  uVar19 = uVar4;
  FUN_1052e3b28(uVar27,param_4,uVar29,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(pppuVar3);
  _objc_release(uVar2);
  func_0x00010bef7f60(puVar1);
  puVar23 = PTR_PTR_1126b6f88;
  func_0x00010bf27800(PTR_PTR_1126b6f88);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar23;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(puVar22);
  puVar22 = puVar23;
  func_0x00010c0e00e0(puVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(puVar22);
  puVar22 = puVar23;
  func_0x00010c0e00e0(puVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(puVar22);
  puVar22 = puVar23;
  func_0x00010c0e00e0(puVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(puVar22);
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dd0298;
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110dd02b8;
  puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_88 = puVar22;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dd02d8;
  puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar26;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_90 = &PTR____CFConstantStringClassReference_110dd02f8;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar25;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = &ppuStack_a8;
  pppuVar16 = (undefined ***)0x4;
  pppuVar21 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar5;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar25);
  _objc_release(puVar26);
  _objc_release(puVar22);
  pppuVar6 = pppuVar21;
  func_0x00010bf51e00();
  _objc_release(pppuVar21);
  _objc_release(puVar23);
  pppuVar10 = pppuVar6;
  func_0x00010bef7f60(puVar1);
  puVar23 = puVar1;
  func_0x00010bf51e00();
  _objc_release(pppuVar6);
  _objc_release(uVar27);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_b8 = FUN_1052e3b28;
    lStack_160 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuVar8 = pppuVar10;
    pppuVar9 = pppuVar3;
    pppuVar17 = pppuVar16;
    pppuVar18 = pppuVar30;
    pppuStack_708 = param_4;
    puStack_6f0 = puVar1;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar10);
    _objc_retain(pppuVar3);
    pppuStack_6e0 = pppuVar16;
    _objc_retain(pppuVar16);
    pppuStack_6e8 = pppuVar30;
    _objc_retain(pppuVar30);
    _objc_retain(uVar19);
    puVar23 = PTR____NSDictionary0__struct_11034ab58;
    if (((pppuVar10 != (undefined ***)0x0) && (pppuVar3 != (undefined ***)0x0)) &&
       (pppuVar7 = pppuVar10, pppuVar8 = pppuVar3, func_0x00010bf433a0(),
       pppuVar7 == (undefined ***)0xffffffffffffffff)) {
      pppuVar30 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      uStack_778 = uVar19;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5b8 = 0;
      plStack_5c0 = (long *)0x0;
      uStack_5a8 = 0;
      uStack_5b0 = 0;
      uStack_598 = 0;
      uStack_5a0 = 0;
      pppuVar16 = pppuStack_6e0;
      pppuStack_780 = pppuVar30;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar30 = pppuVar16;
      func_0x00010bf52a60();
      if (pppuVar30 != (undefined ***)0x0) {
        lVar20 = *plStack_5c0;
        do {
          pppuVar21 = (undefined ***)0x0;
          do {
            if (*plStack_5c0 != lVar20) {
              _objc_enumerationMutation(pppuVar16);
            }
            pppuVar6 = pppuStack_6e0;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar8 = pppuVar6;
            func_0x00010c2709c0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar9 = pppuVar8;
            func_0x00010bf433a0();
            _objc_release(pppuVar8);
            if (pppuVar9 == (undefined ***)0x1) {
              func_0x00010c215dc0(pppuVar6);
            }
            pppuVar8 = pppuVar6;
            func_0x00010c2709c0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar9 = pppuVar8;
            func_0x00010bf433a0();
            _objc_release(pppuVar8);
            if (pppuVar9 == (undefined ***)0xffffffffffffffff) {
              func_0x00010c215dc0(pppuVar6);
            }
            _objc_release(pppuVar6);
            pppuVar21 = (undefined ***)((long)pppuVar21 + 1);
          } while (pppuVar30 != pppuVar21);
          pppuVar30 = pppuVar16;
          func_0x00010bf52a60();
        } while (pppuVar30 != (undefined ***)0x0);
      }
      _objc_release(pppuVar16);
      uStack_5e8 = 0;
      uStack_5f0 = 0;
      uStack_5d8 = 0;
      uStack_5e0 = 0;
      uStack_608 = 0;
      uStack_610 = 0;
      uStack_5f8 = 0;
      plStack_600 = (long *)0x0;
      pppuVar30 = pppuStack_6e8;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar16 = pppuVar30;
      func_0x00010bf52a60();
      if (pppuVar16 != (undefined ***)0x0) {
        lVar20 = *plStack_600;
        do {
          pppuVar21 = (undefined ***)0x0;
          do {
            if (*plStack_600 != lVar20) {
              _objc_enumerationMutation(pppuVar30);
            }
            pppuVar6 = pppuStack_6e8;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar8 = pppuVar6;
            func_0x00010c2709c0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar9 = pppuVar8;
            func_0x00010bf433a0();
            _objc_release(pppuVar8);
            if (pppuVar9 == (undefined ***)0xffffffffffffffff) {
              func_0x00010c215dc0(pppuVar6);
            }
            pppuVar8 = pppuVar6;
            func_0x00010c2709c0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar9 = pppuVar8;
            func_0x00010bf433a0();
            _objc_release(pppuVar8);
            if (pppuVar9 == (undefined ***)0x1) {
              func_0x00010c215dc0(pppuVar6);
            }
            _objc_release(pppuVar6);
            pppuVar21 = (undefined ***)((long)pppuVar21 + 1);
          } while (pppuVar16 != pppuVar21);
          pppuVar16 = pppuVar30;
          func_0x00010bf52a60();
        } while (pppuVar16 != (undefined ***)0x0);
      }
      _objc_release(pppuVar30);
      puVar23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf72020();
      _objc_retainAutoreleasedReturnValue();
      uStack_648 = 0;
      uStack_650 = 0;
      uStack_638 = 0;
      plStack_640 = (long *)0x0;
      uStack_628 = 0;
      uStack_630 = 0;
      uStack_618 = 0;
      uStack_620 = 0;
      pppuVar30 = pppuStack_6e8;
      puStack_6d8 = puVar23;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar16 = pppuVar30;
      func_0x00010bf52a60();
      pppuStack_700 = pppuVar10;
      pppuStack_6f8 = pppuVar3;
      if (pppuVar16 != (undefined ***)0x0) {
        lVar20 = *plStack_640;
        do {
          pppuVar3 = (undefined ***)0x0;
          do {
            if (*plStack_640 != lVar20) {
              _objc_enumerationMutation(pppuVar30);
            }
            puVar23 = puStack_6d8;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar23 == (undefined *)0x0) {
              pppuVar10 = pppuStack_6e8;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126b6f90;
              _objc_alloc(PTR_PTR_1126b6f90);
              pppuVar21 = pppuVar10;
              func_0x00010c0d77c0();
              _objc_retainAutoreleasedReturnValue();
              pppuVar6 = pppuVar10;
              func_0x00010c0d7740(pppuVar10);
              _objc_retainAutoreleasedReturnValue();
              pppuVar18 = pppuVar21;
              func_0x00010c052a20(puVar1);
              _objc_release(pppuVar6);
              _objc_release(pppuVar21);
              func_0x00010c1d0640(puStack_6d8);
              _objc_release(puVar1);
              _objc_release(pppuVar10);
            }
            _objc_release(puVar23);
            pppuVar3 = (undefined ***)((long)pppuVar3 + 1);
          } while (pppuVar16 != pppuVar3);
          pppuVar16 = pppuVar30;
          func_0x00010bf52a60();
        } while (pppuVar16 != (undefined ***)0x0);
      }
      _objc_release(pppuVar30);
      puVar23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf72020();
      _objc_retainAutoreleasedReturnValue();
      uStack_688 = 0;
      uStack_690 = 0;
      uStack_678 = 0;
      plStack_680 = (long *)0x0;
      uStack_668 = 0;
      uStack_670 = 0;
      uStack_658 = 0;
      uStack_660 = 0;
      pppuVar3 = pppuStack_6e0;
      puStack_6f0 = puVar23;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar30 = pppuVar3;
      func_0x00010bf52a60();
      if (pppuVar30 != (undefined ***)0x0) {
        lVar20 = *plStack_680;
        do {
          pppuVar16 = (undefined ***)0x0;
          do {
            if (*plStack_680 != lVar20) {
              _objc_enumerationMutation(pppuVar3);
            }
            puVar23 = puStack_6f0;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar23 == (undefined *)0x0) {
              pppuVar10 = pppuStack_6e0;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR_PTR_1126b6f90;
              _objc_alloc(PTR_PTR_1126b6f90);
              pppuVar21 = pppuVar10;
              func_0x00010c0d77c0();
              _objc_retainAutoreleasedReturnValue();
              pppuVar6 = pppuVar10;
              func_0x00010c0d7740(pppuVar10);
              _objc_retainAutoreleasedReturnValue();
              pppuVar18 = pppuVar21;
              func_0x00010c052a20(puVar1);
              _objc_release(pppuVar6);
              _objc_release(pppuVar21);
              func_0x00010c1d0640(puStack_6f0);
              _objc_release(puVar1);
              _objc_release(pppuVar10);
            }
            _objc_release(puVar23);
            pppuVar16 = (undefined ***)((long)pppuVar16 + 1);
          } while (pppuVar30 != pppuVar16);
          pppuVar30 = pppuVar3;
          func_0x00010bf52a60();
        } while (pppuVar30 != (undefined ***)0x0);
      }
      _objc_release(pppuVar3);
      dVar33 = 0.0;
      uStack_6a8 = 0;
      uStack_6b0 = 0;
      uStack_698 = 0;
      uStack_6a0 = 0;
      lStack_6c8 = 0;
      uStack_6d0 = 0;
      uStack_6b8 = 0;
      plStack_6c0 = (long *)0x0;
      puVar23 = puStack_6f0;
      func_0x00010bf00d20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar23;
      func_0x00010bf52a60();
      if (puVar1 != (undefined *)0x0) {
        lVar20 = *plStack_6c0;
        do {
          puVar22 = (undefined *)0x0;
          do {
            if (*plStack_6c0 != lVar20) {
              _objc_enumerationMutation(puVar23);
            }
            lVar24 = *(long *)(lStack_6c8 + (long)puVar22 * 8);
            lVar11 = lVar24;
            func_0x00010c0d7840(lVar24);
            _objc_retainAutoreleasedReturnValue();
            puVar26 = puStack_6d8;
            func_0x00010c0e00e0(puStack_6d8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar11);
            lVar11 = lVar24;
            func_0x00010c2709c0();
            _objc_retainAutoreleasedReturnValue();
            puVar25 = puVar26;
            func_0x00010c2709c0(puVar26);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar11;
            func_0x00010bf433a0();
            _objc_release(puVar25);
            _objc_release(lVar11);
            if (lVar12 == -1) {
              puVar25 = puVar26;
              func_0x00010c2709c0(puVar26);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c215dc0(lVar24);
              _objc_release(puVar25);
            }
            _objc_release(puVar26);
            puVar22 = puVar22 + 1;
          } while (puVar1 != puVar22);
          puVar1 = puVar23;
          func_0x00010bf52a60();
        } while (puVar1 != (undefined *)0x0);
      }
      _objc_release(puVar23);
      puVar23 = puStack_6d8;
      func_0x00010bf00d20(puStack_6d8);
      _objc_retainAutoreleasedReturnValue();
      pppuVar30 = pppuStack_780;
      func_0x00010befa160(pppuStack_780);
      _objc_release(puVar23);
      puVar23 = puStack_6f0;
      func_0x00010bf00d20(puStack_6f0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(pppuVar30);
      _objc_release(puVar23);
      func_0x00010befa160(pppuVar30);
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = (undefined ***)0x0;
      do {
        pppuVar16 = pppuVar30;
        func_0x00010bf529e0();
        if (pppuVar16 <= pppuVar3) break;
        pppuVar16 = pppuVar30;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        pppuVar10 = pppuVar16;
        func_0x00010c27dd80();
        pppuVar3 = (undefined ***)((long)pppuVar3 + 1);
        _objc_release(pppuVar16);
      } while (pppuVar10 == (undefined ***)0x2);
      pppuVar3 = pppuVar30;
      func_0x00010bf529e0();
      do {
        pppuVar3 = (undefined ***)((long)pppuVar3 - 1);
        if ((long)pppuVar3 < 0) break;
        pppuVar16 = pppuVar30;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        pppuVar10 = pppuVar16;
        func_0x00010c27dd80();
        _objc_release(pppuVar16);
      } while (pppuVar10 == (undefined ***)0x2);
      pppuVar3 = pppuVar30;
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puStack_730 = puVar23;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puStack_750 = puVar1;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puStack_770 = puVar23;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puStack_720 = puVar1;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      puStack_740 = puVar23;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      pppuVar16 = pppuVar3;
      puStack_748 = puVar1;
      func_0x00010bf529e0();
      pppuStack_790 = pppuVar30;
      pppuStack_760 = pppuVar3;
      if (pppuVar16 == (undefined ***)0x0) {
        pppuStack_710 = (undefined ***)0x0;
        puStack_7a0 = (undefined *)0x0;
        puStack_798 = (undefined *)0x0;
        lStack_728 = 0;
      }
      else {
        pppuVar30 = (undefined ***)0x0;
        lStack_728 = 0;
        pppuStack_710 = (undefined ***)0x0;
        pppuStack_708 = (undefined ***)0x0;
        pppuVar16 = (undefined ***)0x0;
        dVar35 = 0.0;
        dVar37 = 0.0;
        dVar34 = 0.0;
        pppuVar10 = pppuStack_6f8;
        do {
          pppuVar21 = pppuVar3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          pppuVar6 = pppuVar21;
          func_0x00010c27dd80();
          if (pppuVar6 == (undefined ***)0x0) {
            pppuVar10 = pppuVar21;
            func_0x00010c0d77c0(pppuVar21);
            _objc_retainAutoreleasedReturnValue();
            puVar23 = puStack_720;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            pppuStack_718 = pppuVar30;
            if (puVar23 != (undefined *)0x0) {
              func_0x00010c067fc0(puVar23);
            }
            puVar22 = puStack_740;
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_720);
            _objc_release(puVar1);
            pppuVar30 = pppuVar21;
            func_0x00010c0d7740(pppuVar21);
            _objc_retainAutoreleasedReturnValue();
            pppuVar6 = pppuVar30;
            func_0x00010bf6e340();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(pppuVar30);
            puVar26 = puVar22;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if (puVar26 == (undefined *)0x0) {
              func_0x00010c1d0640(puVar22);
            }
            else {
              func_0x00010c067fc0(puVar26);
              func_0x00010c0df780(puVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar22);
              _objc_release(puVar1);
            }
            puVar22 = puStack_748;
            puVar25 = puStack_748;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            if (puVar25 == (undefined *)0x0) {
              func_0x00010c1d0640(puVar22);
            }
            else {
              func_0x00010c067fc0(puVar25);
              func_0x00010c0df780(puVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar22);
              _objc_release(puVar1);
            }
            pppuVar30 = (undefined ***)((long)pppuStack_718 + 1);
            lStack_728 = lStack_728 + 1;
            pppuStack_708 = (undefined ***)((long)pppuStack_708 + 1);
            _objc_release(puVar25);
            _objc_release(puVar26);
            _objc_release(pppuVar6);
            _objc_release(puVar23);
            _objc_release(pppuVar10);
            pppuVar10 = pppuStack_6f8;
          }
          else {
            pppuVar6 = pppuVar21;
            func_0x00010c27dd80();
            pppuVar30 = (undefined ***)((long)pppuVar30 - (ulong)(pppuVar6 == (undefined ***)0x1));
          }
          dVar31 = dVar33;
          pppuVar6 = pppuStack_710;
          if ((pppuVar16 == (undefined ***)0x0) &&
             (pppuVar8 = pppuVar21, func_0x00010c27dd80(), dVar31 = dVar33, pppuVar6 = pppuStack_710
             , pppuVar8 == (undefined ***)0x0)) {
            _objc_retain(pppuVar21);
            _objc_release(pppuStack_710);
            pppuVar3 = pppuVar21;
            func_0x00010c2709c0(pppuVar21);
            _objc_retainAutoreleasedReturnValue();
            pppuVar8 = pppuStack_700;
            func_0x00010bf433a0();
            _objc_release(pppuVar3);
            pppuVar3 = pppuStack_760;
            dVar31 = dVar33;
            pppuVar6 = pppuVar21;
            if (pppuVar8 == (undefined ***)0xffffffffffffffff) {
              pppuVar3 = pppuVar21;
              func_0x00010c2709c0(pppuVar21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f380();
              dVar31 = dVar33;
              _objc_release(pppuVar3);
              dVar35 = dVar35 + dVar33;
              pppuVar3 = pppuStack_760;
            }
          }
          pppuStack_710 = pppuVar6;
          pppuVar6 = pppuVar3;
          func_0x00010bf529e0();
          dVar32 = dVar31;
          if (pppuVar16 < (undefined ***)((long)pppuVar6 - 1U)) {
            if (pppuVar30 == (undefined ***)0x1) {
              pppuVar6 = pppuVar21;
              func_0x00010c27dd80();
              dVar32 = dVar31;
              if (pppuVar6 != (undefined ***)0x0) goto LAB_1052e481c;
              _objc_retain(pppuVar21);
              pppuVar10 = pppuStack_710;
              dVar32 = dVar31;
              pppuStack_710 = pppuVar21;
LAB_1052e4878:
              _objc_release(pppuVar10);
              pppuVar10 = pppuStack_6f8;
            }
            else if (pppuVar30 == (undefined ***)0x0) {
              pppuVar6 = pppuVar21;
              func_0x00010c27dd80();
              dVar32 = dVar31;
              if (pppuVar6 == (undefined ***)0x1) {
                pppuVar10 = pppuVar21;
                func_0x00010c2709c0(pppuVar21);
                _objc_retainAutoreleasedReturnValue();
                FUN_1052e5d20(pppuStack_710,pppuVar10,puStack_730);
                _objc_release(pppuVar10);
                pppuVar10 = pppuVar3;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                pppuVar6 = pppuVar10;
                func_0x00010c27dd80();
                dVar32 = dVar31;
                if (pppuVar6 == (undefined ***)0x0) {
                  pppuVar6 = pppuVar10;
                  func_0x00010c2709c0(pppuVar10);
                  _objc_retainAutoreleasedReturnValue();
                  pppuVar8 = pppuVar21;
                  func_0x00010c2709c0(pppuVar21);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c26f380(pppuVar6);
                  dVar32 = dVar31;
                  _objc_release(pppuVar8);
                  _objc_release(pppuVar6);
                  if (0.0 < dVar31) {
                    dVar32 = dVar35 + dVar31 + -10.0;
                    dVar36 = dVar32;
                    dVar33 = 10.0;
                    if (dVar31 <= 10.0) {
                      dVar36 = dVar35;
                      dVar33 = dVar31;
                    }
                    pppuVar6 = pppuVar21;
                    func_0x00010bf48f60();
                    if (pppuVar6 == (undefined ***)0x2) {
                      dVar37 = dVar37 + dVar33;
                      dVar35 = dVar34;
                    }
                    else {
                      pppuVar6 = pppuVar21;
                      func_0x00010bf48f60();
                      dVar32 = dVar34 + dVar33;
                      dVar35 = dVar32;
                      if (pppuVar6 != (undefined ***)0x1) {
                        dVar35 = dVar34;
                      }
                    }
                    puVar23 = puStack_750;
                    pppuVar8 = pppuVar21;
                    func_0x00010bf48f60();
                    pppuVar6 = pppuStack_708;
                    if (pppuVar8 == (undefined ***)0x1) {
                      FUN_1052e5e48(dVar33,pppuStack_708,puStack_720,puVar23);
                      FUN_1052e5e48(pppuVar6,puStack_740,puStack_770);
                      dVar32 = dVar33;
                    }
                    func_0x00010c12adc0(puStack_720);
                    func_0x00010c12adc0(puStack_740);
                    pppuStack_708 = (undefined ***)0x0;
                    dVar34 = dVar35;
                    dVar35 = dVar36;
                  }
                }
                goto LAB_1052e4878;
              }
            }
            else {
LAB_1052e481c:
              pppuVar6 = pppuVar21;
              func_0x00010c27dd80();
              if (pppuVar6 == (undefined ***)0x2) {
                pppuVar6 = pppuVar21;
                func_0x00010c2709c0(pppuVar21);
                _objc_retainAutoreleasedReturnValue();
                pppuVar10 = pppuStack_710;
                FUN_1052e5d20(pppuStack_710,pppuVar6,puStack_730);
                _objc_release(pppuVar6);
                _objc_retain(pppuVar21);
                pppuStack_710 = pppuVar21;
                goto LAB_1052e4878;
              }
            }
          }
          pppuVar6 = pppuVar3;
          func_0x00010bf529e0();
          dVar33 = dVar32;
          if (pppuVar16 == (undefined ***)((long)pppuVar6 - 1U)) {
            if (pppuVar30 == (undefined ***)0x1) {
              pppuVar6 = pppuVar21;
              func_0x00010c27dd80();
              dVar33 = dVar32;
              if (pppuVar6 == (undefined ***)0x0) {
                _objc_retain(pppuVar21);
                _objc_release(pppuStack_710);
                dVar33 = dVar32;
                pppuStack_710 = pppuVar21;
              }
            }
            else if (pppuVar30 == (undefined ***)0x0) {
              pppuVar6 = pppuVar21;
              func_0x00010c27dd80();
              dVar33 = dVar32;
              if (pppuVar6 == (undefined ***)0x1) {
                pppuVar6 = pppuVar21;
                func_0x00010c2709c0(pppuVar21);
                _objc_retainAutoreleasedReturnValue();
                FUN_1052e5d20(pppuStack_710,pppuVar6,puStack_730);
                _objc_release(pppuVar6);
                pppuVar6 = pppuVar21;
                func_0x00010c2709c0(pppuVar21);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f380(pppuVar10);
                dVar33 = dVar32;
                _objc_release(pppuVar6);
                if (0.0 < dVar32) {
                  dVar33 = dVar35 + dVar32 + -10.0;
                  dVar36 = dVar33;
                  dVar31 = 10.0;
                  if (dVar32 <= 10.0) {
                    dVar36 = dVar35;
                    dVar31 = dVar32;
                  }
                  pppuVar6 = pppuVar21;
                  func_0x00010bf48f60();
                  if (pppuVar6 == (undefined ***)0x2) {
                    dVar37 = dVar37 + dVar31;
                    dVar35 = dVar34;
                  }
                  else {
                    pppuVar6 = pppuVar21;
                    func_0x00010bf48f60();
                    dVar33 = dVar34 + dVar31;
                    dVar35 = dVar33;
                    if (pppuVar6 != (undefined ***)0x1) {
                      dVar35 = dVar34;
                    }
                  }
                  pppuVar8 = pppuVar21;
                  func_0x00010bf48f60();
                  pppuVar6 = pppuStack_708;
                  if (pppuVar8 == (undefined ***)0x1) {
                    FUN_1052e5e48(dVar31,pppuStack_708,puStack_720,puStack_750);
                    FUN_1052e5e48(pppuVar6,puStack_740,puStack_770);
                    dVar33 = dVar31;
                  }
                  func_0x00010c12adc0(puStack_720);
                  func_0x00010c12adc0(puStack_740);
                  pppuStack_708 = (undefined ***)0x0;
                  dVar34 = dVar35;
                  dVar35 = dVar36;
                }
              }
              goto LAB_1052e4970;
            }
            FUN_1052e5d20(pppuStack_710,pppuVar10,puStack_730);
          }
LAB_1052e4970:
          _objc_release(pppuVar21);
          pppuVar16 = (undefined ***)((long)pppuVar16 + 1);
          pppuVar21 = pppuVar3;
          func_0x00010bf529e0();
        } while (pppuVar16 < pppuVar21);
        puStack_7a0 = (undefined *)(long)(dVar37 * 1000.0);
        dVar33 = dVar34 * 1000.0;
        puStack_798 = (undefined *)(long)dVar33;
      }
      func_0x00010bf51e00();
      _objc_retain();
      puVar23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      pppuVar30 = pppuVar3;
      ppuStack_738 = (undefined **)puVar1;
      func_0x00010bf529e0();
      pppuVar16 = (undefined ***)0x0;
      puVar1 = puStack_750;
      pppuStack_768 = pppuVar3;
      if (pppuVar30 != (undefined ***)0x0) {
        pppuVar30 = (undefined ***)0x0;
        do {
          pppuVar10 = pppuVar3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          pppuVar21 = pppuVar10;
          func_0x00010c27dd80();
          if (pppuVar21 != (undefined ***)0x2) {
            pppuVar21 = pppuVar16;
            pppuStack_718 = pppuVar30;
            pppuStack_708 = pppuVar10;
            if (pppuVar16 != (undefined ***)0x0) {
              func_0x00010c2709c0(pppuVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f380();
              pppuVar30 = pppuStack_708;
              _objc_release(pppuVar10);
              dVar33 = dVar33 * 1000.0;
              pppuVar10 = pppuVar30;
              if (((long)dVar33 != 0) &&
                 (ppuVar13 = ppuStack_738, func_0x00010bf529e0(), ppuVar28 = ppuStack_738,
                 ppuVar13 != (undefined **)0x0)) {
                pppuStack_758 = pppuVar16;
                func_0x00010bf529e0();
                dVar33 = 0.0;
                uStack_588 = 0;
                uStack_590 = 0;
                uStack_578 = 0;
                plStack_580 = (long *)0x0;
                uStack_568 = 0;
                uStack_570 = 0;
                uStack_558 = 0;
                uStack_560 = 0;
                func_0x00010bf00d20();
                _objc_retainAutoreleasedReturnValue();
                puVar1 = (undefined *)ppuVar28;
                func_0x00010bf52a60();
                if (puVar1 != (undefined *)0x0) {
                  lVar20 = *plStack_580;
                  do {
                    puVar22 = (undefined *)0x0;
                    do {
                      if (*plStack_580 != lVar20) {
                        _objc_enumerationMutation(ppuVar28);
                      }
                      puVar25 = puVar23;
                      func_0x00010c0e00e0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      if (puVar25 == (undefined *)0x0) {
                        puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0640(puVar23);
                      }
                      else {
                        puVar25 = puVar23;
                        func_0x00010c0e00e0(puVar23);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c067fc0();
                        func_0x00010c0df840(puVar26);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0640(puVar23);
                        _objc_release(puVar26);
                      }
                      _objc_release(puVar25);
                      puVar22 = puVar22 + 1;
                    } while (puVar1 != puVar22);
                    puVar1 = (undefined *)ppuVar28;
                    func_0x00010bf52a60();
                  } while (puVar1 != (undefined *)0x0);
                }
                _objc_release(ppuVar28);
                puVar1 = puStack_750;
                pppuVar10 = pppuStack_708;
                pppuVar3 = pppuStack_768;
                pppuVar21 = pppuStack_758;
              }
            }
            pppuVar30 = pppuVar10;
            func_0x00010c27dd80();
            if (pppuVar30 == (undefined ***)0x0) {
              pppuVar16 = pppuVar10;
              func_0x00010c0d77c0(pppuVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0d7840(pppuVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(ppuStack_738);
              _objc_release(pppuVar10);
              pppuVar30 = pppuStack_718;
LAB_1052e4d60:
              _objc_release(pppuVar16);
              pppuVar16 = pppuStack_708;
            }
            else {
              pppuVar6 = pppuVar10;
              func_0x00010c27dd80();
              pppuVar30 = pppuStack_718;
              pppuVar16 = pppuVar10;
              if (pppuVar6 == (undefined ***)0x1) {
                func_0x00010c0d7840(pppuVar10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c12d3e0(ppuStack_738);
                pppuVar16 = pppuVar10;
                goto LAB_1052e4d60;
              }
            }
            func_0x00010c2709c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(pppuVar21);
            pppuVar10 = pppuStack_708;
          }
          _objc_release(pppuVar10);
          pppuVar30 = (undefined ***)((long)pppuVar30 + 1);
          pppuVar10 = pppuVar3;
          func_0x00010bf529e0();
        } while (pppuVar30 < pppuVar10);
      }
      puVar22 = puVar23;
      func_0x00010c086f00();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar22;
      func_0x00010bf529e0();
      if (puVar25 != (undefined *)0x0) {
        puVar25 = (undefined *)0x0;
        do {
          puVar5 = puVar22;
          func_0x00010c0dfd40(puVar22);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar23;
          func_0x00010c0e00e0(puVar23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar26);
          _objc_release(puVar14);
          _objc_release(puVar5);
          puVar25 = puVar25 + 1;
          puVar5 = puVar22;
          func_0x00010bf529e0();
          if ((undefined *)0x1d < puVar5) {
            puVar5 = (undefined *)0x1e;
          }
        } while (puVar25 < puVar5);
      }
      puStack_788 = puVar26;
      _objc_release(puVar22);
      _objc_release(pppuVar16);
      _objc_release(ppuStack_738);
      _objc_release(puVar23);
      pppuVar3 = pppuStack_768;
      _objc_release(pppuStack_768);
      _objc_release(pppuVar3);
      pppuVar3 = pppuStack_760;
      func_0x00010bf51e00();
      _objc_retain();
      puVar23 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      pppuVar30 = pppuVar3;
      ppuStack_738 = (undefined **)puVar22;
      func_0x00010bf529e0();
      pppuVar16 = (undefined ***)0x0;
      pppuStack_768 = pppuVar3;
      if (pppuVar30 != (undefined ***)0x0) {
        pppuVar30 = (undefined ***)0x0;
        do {
          pppuVar10 = pppuVar3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          pppuVar21 = pppuVar10;
          func_0x00010c27dd80();
          if (pppuVar21 != (undefined ***)0x2) {
            pppuVar21 = pppuVar16;
            pppuStack_718 = pppuVar30;
            pppuStack_708 = pppuVar10;
            if (pppuVar16 != (undefined ***)0x0) {
              func_0x00010c2709c0(pppuVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f380();
              pppuVar30 = pppuStack_708;
              _objc_release(pppuVar10);
              dVar33 = dVar33 * 1000.0;
              pppuVar10 = pppuVar30;
              if (((long)dVar33 != 0) &&
                 (ppuVar13 = ppuStack_738, func_0x00010bf529e0(), ppuVar28 = ppuStack_738,
                 ppuVar13 != (undefined **)0x0)) {
                pppuStack_758 = pppuVar16;
                func_0x00010bf529e0();
                dVar33 = 0.0;
                uStack_588 = 0;
                uStack_590 = 0;
                uStack_578 = 0;
                plStack_580 = (long *)0x0;
                uStack_568 = 0;
                uStack_570 = 0;
                uStack_558 = 0;
                uStack_560 = 0;
                func_0x00010bf00d20();
                _objc_retainAutoreleasedReturnValue();
                puVar1 = (undefined *)ppuVar28;
                func_0x00010bf52a60();
                if (puVar1 != (undefined *)0x0) {
                  lVar20 = *plStack_580;
                  do {
                    puVar22 = (undefined *)0x0;
                    do {
                      if (*plStack_580 != lVar20) {
                        _objc_enumerationMutation(ppuVar28);
                      }
                      puVar25 = puVar23;
                      func_0x00010c0e00e0();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      if (puVar25 == (undefined *)0x0) {
                        puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0640(puVar23);
                      }
                      else {
                        puVar25 = puVar23;
                        func_0x00010c0e00e0(puVar23);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c067fc0();
                        func_0x00010c0df840(puVar26);
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010c1d0640(puVar23);
                        _objc_release(puVar26);
                      }
                      _objc_release(puVar25);
                      puVar22 = puVar22 + 1;
                    } while (puVar1 != puVar22);
                    puVar1 = (undefined *)ppuVar28;
                    func_0x00010bf52a60();
                  } while (puVar1 != (undefined *)0x0);
                }
                _objc_release(ppuVar28);
                puVar1 = puStack_750;
                pppuVar21 = pppuStack_758;
                pppuVar10 = pppuStack_708;
                pppuVar3 = pppuStack_768;
              }
            }
            pppuVar30 = pppuVar10;
            func_0x00010c27dd80();
            if (pppuVar30 == (undefined ***)0x0) {
              pppuVar16 = pppuVar10;
              func_0x00010c0d7740(pppuVar10);
              _objc_retainAutoreleasedReturnValue();
              pppuVar30 = pppuVar16;
              func_0x00010bf6e340();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0d7840(pppuVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(ppuStack_738);
              _objc_release(pppuVar10);
              _objc_release(pppuVar30);
              pppuVar30 = pppuStack_718;
LAB_1052e5170:
              _objc_release(pppuVar16);
              pppuVar16 = pppuStack_708;
            }
            else {
              pppuVar6 = pppuVar10;
              func_0x00010c27dd80();
              pppuVar30 = pppuStack_718;
              pppuVar16 = pppuVar10;
              if (pppuVar6 == (undefined ***)0x1) {
                func_0x00010c0d7840(pppuVar10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c12d3e0(ppuStack_738);
                pppuVar16 = pppuVar10;
                goto LAB_1052e5170;
              }
            }
            func_0x00010c2709c0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(pppuVar21);
            pppuVar10 = pppuStack_708;
          }
          _objc_release(pppuVar10);
          pppuVar30 = (undefined ***)((long)pppuVar30 + 1);
          pppuVar10 = pppuVar3;
          func_0x00010bf529e0();
        } while (pppuVar30 < pppuVar10);
      }
      puVar22 = puVar23;
      pppuStack_758 = pppuVar16;
      func_0x00010c086f00();
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = (undefined ***)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar22;
      func_0x00010bf529e0();
      if (puVar26 != (undefined *)0x0) {
        puVar26 = (undefined *)0x0;
        do {
          puVar25 = puVar22;
          func_0x00010c0dfd40(puVar22);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar23;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar5;
          func_0x00010c067fc0();
          _objc_release(puVar5);
          if (0 < (long)puVar14) {
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(pppuVar3);
            _objc_release(puVar5);
          }
          _objc_release(puVar25);
          puVar26 = puVar26 + 1;
          puVar25 = puVar22;
          func_0x00010bf529e0();
          if ((undefined *)0x63 < puVar25) {
            puVar25 = (undefined *)0x64;
          }
        } while (puVar26 < puVar25);
      }
      pppuStack_708 = pppuVar3;
      _objc_release(puVar22);
      _objc_release(pppuStack_758);
      _objc_release(ppuStack_738);
      _objc_release(puVar23);
      pppuVar3 = pppuStack_768;
      _objc_release(pppuStack_768);
      _objc_release(pppuVar3);
      puVar22 = puVar1;
      func_0x00010c086f00();
      _objc_retainAutoreleasedReturnValue();
      pppuVar3 = (undefined ***)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar22;
      func_0x00010bf529e0();
      if (puVar23 != (undefined *)0x0) {
        puVar23 = (undefined *)0x0;
        do {
          puVar26 = puVar22;
          func_0x00010c0dfd40(puVar22);
          _objc_retainAutoreleasedReturnValue();
          puVar25 = puVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar25;
          func_0x00010c067fc0();
          _objc_release(puVar25);
          if (0 < (long)puVar5) {
            puVar25 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(pppuVar3);
            _objc_release(puVar25);
          }
          _objc_release(puVar26);
          puVar23 = puVar23 + 1;
          puVar26 = puVar22;
          func_0x00010bf529e0();
          if ((undefined *)0x1d < puVar26) {
            puVar26 = (undefined *)0x1e;
          }
        } while (puVar23 < puVar26);
      }
      puVar23 = puStack_770;
      puVar1 = puStack_770;
      pppuStack_718 = pppuVar3;
      func_0x00010c086f00();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar1;
      func_0x00010bf529e0();
      if (puVar26 != (undefined *)0x0) {
        puVar26 = (undefined *)0x0;
        do {
          puVar5 = puVar1;
          func_0x00010c0dfd40(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar23;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010c067fc0();
          _objc_release(puVar14);
          if (0 < (long)puVar15) {
            puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar25);
            _objc_release(puVar14);
          }
          _objc_release(puVar5);
          puVar26 = puVar26 + 1;
          puVar5 = puVar1;
          func_0x00010bf529e0();
          if ((undefined *)0x63 < puVar5) {
            puVar5 = (undefined *)0x64;
          }
        } while (puVar26 < puVar5);
      }
      func_0x00010c26f380(pppuStack_6f8);
      puVar23 = puStack_730;
      puVar26 = puStack_730;
      func_0x00010c0e00e0(puStack_730);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(puVar26);
      puVar26 = puVar23;
      func_0x00010c0e00e0(puVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(puVar26);
      func_0x00010c0e00e0(puVar23);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(puVar23);
      ppuStack_550 = &PTR____CFConstantStringClassReference_110dd0258;
      ppuVar28 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_548 = &PTR____CFConstantStringClassReference_110dd0358;
      pppuVar3 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_738 = ppuVar28;
      ppuStack_4d8 = ppuVar28;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_540 = &PTR____CFConstantStringClassReference_110dcfd18;
      puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      pppuStack_758 = pppuVar3;
      pppuStack_4d0 = pppuVar3;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_538 = &PTR____CFConstantStringClassReference_110dcfd38;
      puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      pppuStack_768 = (undefined ***)puVar23;
      puStack_4c8 = puVar23;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_530 = &PTR____CFConstantStringClassReference_110dcfd58;
      puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_7a0 = puVar26;
      puStack_4c0 = puVar26;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_528 = &PTR____CFConstantStringClassReference_110dcfcb8;
      puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_798 = puVar23;
      puStack_4b8 = puVar23;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_520 = &PTR____CFConstantStringClassReference_110dcfcd8;
      puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_7a8 = puVar26;
      puStack_4b0 = puVar26;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_518 = &PTR____CFConstantStringClassReference_110dcfcf8;
      puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_7b0 = puVar23;
      puStack_4a8 = puVar23;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_510 = &PTR____CFConstantStringClassReference_110dd0278;
      puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_7b8 = puVar26;
      puStack_4a0 = puVar26;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_508 = &PTR____CFConstantStringClassReference_110dcfd78;
      pppuVar6 = (undefined ***)PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_7c0 = puVar23;
      puStack_498 = puVar23;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_500 = &PTR____CFConstantStringClassReference_110dcfd98;
      puVar26 = puStack_748;
      pppuStack_490 = pppuVar6;
      func_0x00010bf51e00();
      pppuVar16 = pppuStack_708;
      pppuVar30 = pppuStack_718;
      puStack_480 = puStack_788;
      ppuStack_4f8 = &PTR____CFConstantStringClassReference_110dcfb78;
      ppuStack_4f0 = &PTR____CFConstantStringClassReference_110dcfb98;
      pppuStack_478 = pppuStack_718;
      ppuStack_4e8 = &PTR____CFConstantStringClassReference_110dcfdb8;
      pppuVar21 = pppuStack_708;
      puStack_488 = puVar26;
      func_0x00010bf51e00();
      ppuStack_4e0 = &PTR____CFConstantStringClassReference_110dcfdd8;
      puVar23 = puVar25;
      pppuStack_470 = pppuVar21;
      func_0x00010bf51e00();
      pppuVar8 = &ppuStack_4d8;
      pppuVar9 = &ppuStack_550;
      pppuVar17 = (undefined ***)0xf;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_468 = puVar23;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      _objc_release(pppuVar21);
      _objc_release(puVar26);
      _objc_release(pppuVar6);
      _objc_release(puStack_7c0);
      _objc_release(puStack_7b8);
      _objc_release(puStack_7b0);
      _objc_release(puStack_7a8);
      _objc_release(puStack_798);
      _objc_release(puStack_7a0);
      _objc_release(pppuStack_768);
      _objc_release(pppuStack_758);
      _objc_release(ppuStack_738);
      puVar23 = puVar5;
      func_0x00010bf51e00(puVar5);
      _objc_release(puVar5);
      pppuVar10 = pppuStack_700;
      _objc_release(puVar25);
      pppuVar3 = pppuStack_6f8;
      _objc_release(puVar1);
      _objc_release(pppuVar30);
      _objc_release(puVar22);
      _objc_release(pppuVar16);
      _objc_release(puStack_788);
      _objc_release(puStack_748);
      _objc_release(puStack_740);
      _objc_release(puStack_720);
      _objc_release(puStack_770);
      _objc_release(puStack_750);
      _objc_release(pppuStack_710);
      _objc_release(puStack_730);
      _objc_release(pppuStack_760);
      _objc_release(pppuStack_790);
      _objc_release(puStack_6f0);
      _objc_release(puStack_6d8);
      _objc_release(pppuStack_780);
      uVar19 = uStack_778;
    }
    _objc_release(uVar19);
    _objc_release(pppuStack_6e8);
    _objc_release(pppuStack_6e0);
    _objc_release(pppuVar3);
    pppuVar7 = pppuVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_160) {
      ___stack_chk_fail();
      pcStack_7c8 = FUN_1052e5938;
      pppuStack_810 = pppuVar21;
      puStack_808 = puVar26;
      pppuStack_800 = pppuVar10;
      pppuStack_7f8 = pppuVar3;
      pppuStack_7f0 = pppuVar6;
      uStack_7e8 = uVar19;
      pppuStack_7e0 = pppuVar30;
      pppuStack_7d8 = pppuVar16;
      ppuStack_7d0 = &puStack_c0;
      _objc_retain(pppuVar8);
      _objc_retain(pppuVar9);
      pppuVar3 = pppuVar7;
      func_0x00010beb3780();
      puVar23 = PTR____NSDictionary0__struct_11034ab58;
      if ((((int)pppuVar3 != 0) && (pppuVar8 != (undefined ***)0x0)) &&
         (pppuVar9 != (undefined ***)0x0)) {
        puStack_838 = &uStack_840;
        uStack_840 = 0;
        uStack_830 = 0x3032000000;
        pcStack_828 = FUN_1052e3718;
        uStack_820 = 0x1052e3728;
        uStack_818 = 0;
        _objc_initWeak(auStack_848,pppuVar7);
        ppuVar28 = pppuVar7[1];
        _objc_copyWeak(auStack_860,auStack_848);
        _objc_retain(pppuVar8);
        _objc_retain(pppuVar9);
        pppuStack_858 = pppuVar17;
        pppuStack_850 = pppuVar18;
        func_0x00010c0f8240(ppuVar28);
        puVar23 = (undefined *)puStack_838[5];
        _objc_retain(puVar23);
        _objc_release(pppuVar9);
        _objc_release(pppuVar8);
        _objc_destroyWeak(auStack_860);
        _objc_destroyWeak(auStack_848);
        __Block_object_dispose(&uStack_840,8);
        _objc_release(uStack_818);
      }
      _objc_release(pppuVar9);
      _objc_release(pppuVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 1052e3b28; end: 1052e5937;  */

void FUN_1052e3b28(undefined *param_1,undefined *param_2,undefined ***param_3,undefined ***param_4,
                  undefined *param_5,undefined *param_6,undefined8 param_7)

{
  undefined ***pppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *unaff_x22;
  long lVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *unaff_x25;
  undefined *puVar20;
  undefined *unaff_x26;
  undefined *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_7b0 [8];
  undefined *puStack_7a8;
  undefined *puStack_7a0;
  undefined1 auStack_798 [8];
  undefined8 uStack_790;
  undefined8 *puStack_788;
  undefined8 uStack_780;
  code *pcStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined ***pppuStack_750;
  undefined ***pppuStack_748;
  undefined *puStack_740;
  undefined8 uStack_738;
  undefined *puStack_730;
  undefined *puStack_728;
  undefined1 *puStack_720;
  code *pcStack_718;
  undefined *puStack_710;
  undefined *puStack_708;
  undefined *puStack_700;
  undefined *puStack_6f8;
  undefined *puStack_6f0;
  undefined *puStack_6e8;
  undefined *puStack_6e0;
  undefined *puStack_6d8;
  undefined *puStack_6d0;
  undefined8 uStack_6c8;
  undefined *puStack_6c0;
  undefined *puStack_6b8;
  undefined *puStack_6b0;
  undefined *puStack_6a8;
  undefined *puStack_6a0;
  undefined *puStack_698;
  undefined *puStack_690;
  undefined **ppuStack_688;
  undefined *puStack_680;
  long lStack_678;
  undefined *puStack_670;
  undefined *puStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined ***pppuStack_650;
  undefined ***pppuStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined8 uStack_620;
  long lStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  long *plStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long *plStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long *plStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
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
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar11 = param_3;
  pppuVar8 = param_4;
  puVar20 = param_5;
  puVar12 = param_6;
  puStack_658 = param_2;
  puStack_640 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_630 = param_5;
  _objc_retain(param_5);
  puStack_638 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar14 = PTR____NSDictionary0__struct_11034ab58;
  if (((param_3 != (undefined ***)0x0) && (param_4 != (undefined ***)0x0)) &&
     (pppuVar1 = param_3, pppuVar11 = param_4, func_0x00010bf433a0(),
     pppuVar1 == (undefined ***)0xffffffffffffffff)) {
    puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uStack_6c8 = param_7;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    plStack_510 = (long *)0x0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    puVar20 = puStack_630;
    puStack_6d0 = puVar14;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar20;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      lVar13 = *plStack_510;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_510 != lVar13) {
            _objc_enumerationMutation(puVar20);
          }
          puVar15 = puStack_630;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar15;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar21;
          func_0x00010bf433a0();
          _objc_release(puVar21);
          if (puVar18 == (undefined *)0x1) {
            func_0x00010c215dc0(puVar15);
          }
          puVar21 = puVar15;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar21;
          func_0x00010bf433a0();
          _objc_release(puVar21);
          if (puVar18 == (undefined *)0xffffffffffffffff) {
            func_0x00010c215dc0(puVar15);
          }
          _objc_release(puVar15);
          puVar16 = puVar16 + 1;
        } while (puVar14 != puVar16);
        puVar14 = puVar20;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(puVar20);
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    plStack_550 = (long *)0x0;
    puVar14 = puStack_638;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar14;
    func_0x00010bf52a60();
    if (puVar20 != (undefined *)0x0) {
      lVar13 = *plStack_550;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_550 != lVar13) {
            _objc_enumerationMutation(puVar14);
          }
          puVar15 = puStack_638;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar15;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar21;
          func_0x00010bf433a0();
          _objc_release(puVar21);
          if (puVar18 == (undefined *)0xffffffffffffffff) {
            func_0x00010c215dc0(puVar15);
          }
          puVar21 = puVar15;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar21;
          func_0x00010bf433a0();
          _objc_release(puVar21);
          if (puVar18 == (undefined *)0x1) {
            func_0x00010c215dc0(puVar15);
          }
          _objc_release(puVar15);
          puVar16 = puVar16 + 1;
        } while (puVar20 != puVar16);
        puVar20 = puVar14;
        func_0x00010bf52a60();
      } while (puVar20 != (undefined *)0x0);
    }
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    plStack_590 = (long *)0x0;
    uStack_578 = 0;
    uStack_580 = 0;
    uStack_568 = 0;
    uStack_570 = 0;
    puVar20 = puStack_638;
    puStack_628 = puVar14;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar20;
    func_0x00010bf52a60();
    pppuStack_650 = param_3;
    pppuStack_648 = param_4;
    if (puVar14 != (undefined *)0x0) {
      lVar13 = *plStack_590;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_590 != lVar13) {
            _objc_enumerationMutation(puVar20);
          }
          puVar15 = puStack_628;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar15 == (undefined *)0x0) {
            puVar21 = puStack_638;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = PTR_PTR_1126b6f90;
            _objc_alloc(PTR_PTR_1126b6f90);
            puVar2 = puVar21;
            func_0x00010c0d77c0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar21;
            func_0x00010c0d7740(puVar21);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar2;
            func_0x00010c052a20(puVar18);
            _objc_release(puVar3);
            _objc_release(puVar2);
            func_0x00010c1d0640(puStack_628);
            _objc_release(puVar18);
            _objc_release(puVar21);
          }
          _objc_release(puVar15);
          puVar16 = puVar16 + 1;
        } while (puVar14 != puVar16);
        puVar14 = puVar20;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(puVar20);
    puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020();
    _objc_retainAutoreleasedReturnValue();
    uStack_5d8 = 0;
    uStack_5e0 = 0;
    uStack_5c8 = 0;
    plStack_5d0 = (long *)0x0;
    uStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    uStack_5b0 = 0;
    puVar20 = puStack_630;
    puStack_640 = puVar14;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar20;
    func_0x00010bf52a60();
    if (puVar14 != (undefined *)0x0) {
      lVar13 = *plStack_5d0;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_5d0 != lVar13) {
            _objc_enumerationMutation(puVar20);
          }
          puVar15 = puStack_640;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar15 == (undefined *)0x0) {
            puVar21 = puStack_630;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = PTR_PTR_1126b6f90;
            _objc_alloc(PTR_PTR_1126b6f90);
            puVar2 = puVar21;
            func_0x00010c0d77c0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar21;
            func_0x00010c0d7740(puVar21);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar2;
            func_0x00010c052a20(puVar18);
            _objc_release(puVar3);
            _objc_release(puVar2);
            func_0x00010c1d0640(puStack_640);
            _objc_release(puVar18);
            _objc_release(puVar21);
          }
          _objc_release(puVar15);
          puVar16 = puVar16 + 1;
        } while (puVar14 != puVar16);
        puVar14 = puVar20;
        func_0x00010bf52a60();
      } while (puVar14 != (undefined *)0x0);
    }
    _objc_release(puVar20);
    dVar24 = 0.0;
    uStack_5f8 = 0;
    uStack_600 = 0;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    lStack_618 = 0;
    uStack_620 = 0;
    uStack_608 = 0;
    plStack_610 = (long *)0x0;
    puVar14 = puStack_640;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar14;
    func_0x00010bf52a60();
    if (puVar20 != (undefined *)0x0) {
      lVar13 = *plStack_610;
      do {
        puVar16 = (undefined *)0x0;
        do {
          if (*plStack_610 != lVar13) {
            _objc_enumerationMutation(puVar14);
          }
          lVar17 = *(long *)(lStack_618 + (long)puVar16 * 8);
          lVar4 = lVar17;
          func_0x00010c0d7840(lVar17);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puStack_628;
          func_0x00010c0e00e0(puStack_628);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          lVar4 = lVar17;
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar15;
          func_0x00010c2709c0(puVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf433a0();
          _objc_release(puVar21);
          _objc_release(lVar4);
          if (lVar5 == -1) {
            puVar21 = puVar15;
            func_0x00010c2709c0(puVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c215dc0(lVar17);
            _objc_release(puVar21);
          }
          _objc_release(puVar15);
          puVar16 = puVar16 + 1;
        } while (puVar20 != puVar16);
        puVar20 = puVar14;
        func_0x00010bf52a60();
      } while (puVar20 != (undefined *)0x0);
    }
    _objc_release(puVar14);
    puVar14 = puStack_628;
    func_0x00010bf00d20(puStack_628);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puStack_6d0;
    func_0x00010befa160(puStack_6d0);
    _objc_release(puVar14);
    puVar14 = puStack_640;
    func_0x00010bf00d20(puStack_640);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar20);
    _objc_release(puVar14);
    func_0x00010befa160(puVar20);
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)0x0;
    do {
      puVar16 = puVar20;
      func_0x00010bf529e0();
      if (puVar16 <= puVar14) break;
      puVar16 = puVar20;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar16;
      func_0x00010c27dd80();
      puVar14 = puVar14 + 1;
      _objc_release(puVar16);
    } while (puVar15 == (undefined *)0x2);
    puVar14 = puVar20;
    func_0x00010bf529e0();
    do {
      puVar14 = puVar14 + -1;
      if ((long)puVar14 < 0) break;
      puVar16 = puVar20;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar16;
      func_0x00010c27dd80();
      _objc_release(puVar16);
    } while (puVar15 == (undefined *)0x2);
    puVar14 = puVar20;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_680 = puVar16;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_6a0 = puVar15;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_6c0 = puVar16;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_670 = puVar15;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puStack_690 = puVar16;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    puStack_698 = puVar15;
    func_0x00010bf529e0();
    puStack_6e0 = puVar20;
    puStack_6b0 = puVar14;
    if (puVar16 == (undefined *)0x0) {
      puStack_660 = (undefined *)0x0;
      puStack_6f0 = (undefined *)0x0;
      puStack_6e8 = (undefined *)0x0;
      lStack_678 = 0;
    }
    else {
      puVar20 = (undefined *)0x0;
      lStack_678 = 0;
      puStack_660 = (undefined *)0x0;
      puStack_658 = (undefined *)0x0;
      puVar16 = (undefined *)0x0;
      dVar26 = 0.0;
      dVar28 = 0.0;
      dVar25 = 0.0;
      pppuVar11 = pppuStack_648;
      do {
        puVar15 = puVar14;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar15;
        func_0x00010c27dd80();
        if (puVar21 == (undefined *)0x0) {
          puVar21 = puVar15;
          func_0x00010c0d77c0(puVar15);
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puStack_670;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puStack_668 = puVar20;
          if (puVar18 != (undefined *)0x0) {
            func_0x00010c067fc0(puVar18);
          }
          puVar2 = puStack_690;
          puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puStack_670);
          _objc_release(puVar20);
          puVar20 = puVar15;
          func_0x00010c0d7740(puVar15);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar20;
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar20);
          puVar6 = puVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (puVar6 == (undefined *)0x0) {
            func_0x00010c1d0640(puVar2);
          }
          else {
            func_0x00010c067fc0(puVar6);
            func_0x00010c0df780(puVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(puVar20);
          }
          puVar2 = puStack_698;
          puVar7 = puStack_698;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (puVar7 == (undefined *)0x0) {
            func_0x00010c1d0640(puVar2);
          }
          else {
            func_0x00010c067fc0(puVar7);
            func_0x00010c0df780(puVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar2);
            _objc_release(puVar20);
          }
          puVar20 = puStack_668 + 1;
          lStack_678 = lStack_678 + 1;
          puStack_658 = puStack_658 + 1;
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar3);
          _objc_release(puVar18);
          _objc_release(puVar21);
          pppuVar11 = pppuStack_648;
        }
        else {
          puVar21 = puVar15;
          func_0x00010c27dd80();
          puVar20 = puVar20 + -(ulong)(puVar21 == (undefined *)0x1);
        }
        dVar22 = dVar24;
        puVar21 = puStack_660;
        if ((puVar16 == (undefined *)0x0) &&
           (puVar18 = puVar15, func_0x00010c27dd80(), dVar22 = dVar24, puVar21 = puStack_660,
           puVar18 == (undefined *)0x0)) {
          _objc_retain(puVar15);
          _objc_release(puStack_660);
          puVar14 = puVar15;
          func_0x00010c2709c0(puVar15);
          _objc_retainAutoreleasedReturnValue();
          pppuVar8 = pppuStack_650;
          func_0x00010bf433a0();
          _objc_release(puVar14);
          puVar14 = puStack_6b0;
          dVar22 = dVar24;
          puVar21 = puVar15;
          if (pppuVar8 == (undefined ***)0xffffffffffffffff) {
            puVar14 = puVar15;
            func_0x00010c2709c0(puVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f380();
            dVar22 = dVar24;
            _objc_release(puVar14);
            dVar26 = dVar26 + dVar24;
            puVar14 = puStack_6b0;
          }
        }
        puStack_660 = puVar21;
        puVar21 = puVar14;
        func_0x00010bf529e0();
        dVar23 = dVar22;
        if (puVar16 < puVar21 + -1) {
          if (puVar20 == (undefined *)0x1) {
            puVar21 = puVar15;
            func_0x00010c27dd80();
            dVar23 = dVar22;
            if (puVar21 != (undefined *)0x0) goto LAB_1052e481c;
            _objc_retain(puVar15);
            puVar21 = puStack_660;
            dVar23 = dVar22;
            puStack_660 = puVar15;
LAB_1052e4878:
            _objc_release(puVar21);
            pppuVar11 = pppuStack_648;
          }
          else if (puVar20 == (undefined *)0x0) {
            puVar21 = puVar15;
            func_0x00010c27dd80();
            dVar23 = dVar22;
            if (puVar21 == (undefined *)0x1) {
              puVar21 = puVar15;
              func_0x00010c2709c0(puVar15);
              _objc_retainAutoreleasedReturnValue();
              FUN_1052e5d20(puStack_660,puVar21,puStack_680);
              _objc_release(puVar21);
              puVar21 = puVar14;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar21;
              func_0x00010c27dd80();
              dVar23 = dVar22;
              if (puVar18 == (undefined *)0x0) {
                puVar18 = puVar21;
                func_0x00010c2709c0(puVar21);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = puVar15;
                func_0x00010c2709c0(puVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c26f380(puVar18);
                dVar23 = dVar22;
                _objc_release(puVar2);
                _objc_release(puVar18);
                if (0.0 < dVar22) {
                  dVar23 = dVar26 + dVar22 + -10.0;
                  dVar27 = dVar23;
                  dVar24 = 10.0;
                  if (dVar22 <= 10.0) {
                    dVar27 = dVar26;
                    dVar24 = dVar22;
                  }
                  puVar18 = puVar15;
                  func_0x00010bf48f60();
                  if (puVar18 == (undefined *)0x2) {
                    dVar28 = dVar28 + dVar24;
                    dVar26 = dVar25;
                  }
                  else {
                    puVar18 = puVar15;
                    func_0x00010bf48f60();
                    dVar23 = dVar25 + dVar24;
                    dVar26 = dVar23;
                    if (puVar18 != (undefined *)0x1) {
                      dVar26 = dVar25;
                    }
                  }
                  puVar18 = puStack_6a0;
                  puVar3 = puVar15;
                  func_0x00010bf48f60();
                  puVar2 = puStack_658;
                  if (puVar3 == (undefined *)0x1) {
                    FUN_1052e5e48(dVar24,puStack_658,puStack_670,puVar18);
                    FUN_1052e5e48(puVar2,puStack_690,puStack_6c0);
                    dVar23 = dVar24;
                  }
                  func_0x00010c12adc0(puStack_670);
                  func_0x00010c12adc0(puStack_690);
                  puStack_658 = (undefined *)0x0;
                  dVar25 = dVar26;
                  dVar26 = dVar27;
                }
              }
              goto LAB_1052e4878;
            }
          }
          else {
LAB_1052e481c:
            puVar21 = puVar15;
            func_0x00010c27dd80();
            if (puVar21 == (undefined *)0x2) {
              puVar18 = puVar15;
              func_0x00010c2709c0(puVar15);
              _objc_retainAutoreleasedReturnValue();
              puVar21 = puStack_660;
              FUN_1052e5d20(puStack_660,puVar18,puStack_680);
              _objc_release(puVar18);
              _objc_retain(puVar15);
              puStack_660 = puVar15;
              goto LAB_1052e4878;
            }
          }
        }
        puVar21 = puVar14;
        func_0x00010bf529e0();
        dVar24 = dVar23;
        if (puVar16 == puVar21 + -1) {
          if (puVar20 == (undefined *)0x1) {
            puVar21 = puVar15;
            func_0x00010c27dd80();
            dVar24 = dVar23;
            if (puVar21 == (undefined *)0x0) {
              _objc_retain(puVar15);
              _objc_release(puStack_660);
              dVar24 = dVar23;
              puStack_660 = puVar15;
            }
          }
          else if (puVar20 == (undefined *)0x0) {
            puVar21 = puVar15;
            func_0x00010c27dd80();
            dVar24 = dVar23;
            if (puVar21 == (undefined *)0x1) {
              puVar21 = puVar15;
              func_0x00010c2709c0(puVar15);
              _objc_retainAutoreleasedReturnValue();
              FUN_1052e5d20(puStack_660,puVar21,puStack_680);
              _objc_release(puVar21);
              puVar21 = puVar15;
              func_0x00010c2709c0(puVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f380(pppuVar11);
              dVar24 = dVar23;
              _objc_release(puVar21);
              if (0.0 < dVar23) {
                dVar24 = dVar26 + dVar23 + -10.0;
                dVar27 = dVar24;
                dVar22 = 10.0;
                if (dVar23 <= 10.0) {
                  dVar27 = dVar26;
                  dVar22 = dVar23;
                }
                puVar21 = puVar15;
                func_0x00010bf48f60();
                if (puVar21 == (undefined *)0x2) {
                  dVar28 = dVar28 + dVar22;
                  dVar26 = dVar25;
                }
                else {
                  puVar21 = puVar15;
                  func_0x00010bf48f60();
                  dVar24 = dVar25 + dVar22;
                  dVar26 = dVar24;
                  if (puVar21 != (undefined *)0x1) {
                    dVar26 = dVar25;
                  }
                }
                puVar18 = puVar15;
                func_0x00010bf48f60();
                puVar21 = puStack_658;
                if (puVar18 == (undefined *)0x1) {
                  FUN_1052e5e48(dVar22,puStack_658,puStack_670,puStack_6a0);
                  FUN_1052e5e48(puVar21,puStack_690,puStack_6c0);
                  dVar24 = dVar22;
                }
                func_0x00010c12adc0(puStack_670);
                func_0x00010c12adc0(puStack_690);
                puStack_658 = (undefined *)0x0;
                dVar25 = dVar26;
                dVar26 = dVar27;
              }
            }
            goto LAB_1052e4970;
          }
          FUN_1052e5d20(puStack_660,pppuVar11,puStack_680);
        }
LAB_1052e4970:
        _objc_release(puVar15);
        puVar16 = puVar16 + 1;
        puVar15 = puVar14;
        func_0x00010bf529e0();
      } while (puVar16 < puVar15);
      puStack_6f0 = (undefined *)(long)(dVar28 * 1000.0);
      dVar24 = dVar25 * 1000.0;
      puStack_6e8 = (undefined *)(long)dVar24;
    }
    func_0x00010bf51e00();
    _objc_retain();
    puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    ppuStack_688 = (undefined **)puVar16;
    func_0x00010bf529e0();
    puVar21 = (undefined *)0x0;
    puVar16 = puStack_6a0;
    puStack_6b8 = puVar14;
    if (puVar15 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        puVar18 = puVar14;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar18;
        func_0x00010c27dd80();
        if (puVar2 != (undefined *)0x2) {
          puVar2 = puVar21;
          puStack_668 = puVar15;
          puStack_658 = puVar18;
          if (puVar21 != (undefined *)0x0) {
            func_0x00010c2709c0(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f380();
            puVar15 = puStack_658;
            _objc_release(puVar18);
            dVar24 = dVar24 * 1000.0;
            puVar18 = puVar15;
            if (((long)dVar24 != 0) &&
               (ppuVar9 = ppuStack_688, func_0x00010bf529e0(), ppuVar19 = ppuStack_688,
               ppuVar9 != (undefined **)0x0)) {
              puStack_6a8 = puVar21;
              func_0x00010bf529e0();
              dVar24 = 0.0;
              uStack_4d8 = 0;
              uStack_4e0 = 0;
              uStack_4c8 = 0;
              plStack_4d0 = (long *)0x0;
              uStack_4b8 = 0;
              uStack_4c0 = 0;
              uStack_4a8 = 0;
              uStack_4b0 = 0;
              func_0x00010bf00d20();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = (undefined *)ppuVar19;
              func_0x00010bf52a60();
              if (puVar14 != (undefined *)0x0) {
                lVar13 = *plStack_4d0;
                do {
                  puVar16 = (undefined *)0x0;
                  do {
                    if (*plStack_4d0 != lVar13) {
                      _objc_enumerationMutation(ppuVar19);
                    }
                    puVar21 = puVar20;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    if (puVar21 == (undefined *)0x0) {
                      puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar20);
                    }
                    else {
                      puVar21 = puVar20;
                      func_0x00010c0e00e0(puVar20);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c067fc0();
                      func_0x00010c0df840(puVar15);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar20);
                      _objc_release(puVar15);
                    }
                    _objc_release(puVar21);
                    puVar16 = puVar16 + 1;
                  } while (puVar14 != puVar16);
                  puVar14 = (undefined *)ppuVar19;
                  func_0x00010bf52a60();
                } while (puVar14 != (undefined *)0x0);
              }
              _objc_release(ppuVar19);
              puVar16 = puStack_6a0;
              puVar18 = puStack_658;
              puVar14 = puStack_6b8;
              puVar2 = puStack_6a8;
            }
          }
          puVar15 = puVar18;
          func_0x00010c27dd80();
          if (puVar15 == (undefined *)0x0) {
            puVar21 = puVar18;
            func_0x00010c0d77c0(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d7840(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuStack_688);
            _objc_release(puVar18);
            puVar15 = puStack_668;
LAB_1052e4d60:
            _objc_release(puVar21);
            puVar21 = puStack_658;
          }
          else {
            puVar3 = puVar18;
            func_0x00010c27dd80();
            puVar15 = puStack_668;
            puVar21 = puVar18;
            if (puVar3 == (undefined *)0x1) {
              func_0x00010c0d7840(puVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d3e0(ppuStack_688);
              puVar21 = puVar18;
              goto LAB_1052e4d60;
            }
          }
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar18 = puStack_658;
        }
        _objc_release(puVar18);
        puVar15 = puVar15 + 1;
        puVar18 = puVar14;
        func_0x00010bf529e0();
      } while (puVar15 < puVar18);
    }
    puVar14 = puVar20;
    func_0x00010c086f00();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar14;
    func_0x00010bf529e0();
    if (puVar18 != (undefined *)0x0) {
      puVar18 = (undefined *)0x0;
      do {
        puVar2 = puVar14;
        func_0x00010c0dfd40(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar20;
        func_0x00010c0e00e0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar15);
        _objc_release(puVar3);
        _objc_release(puVar2);
        puVar18 = puVar18 + 1;
        puVar2 = puVar14;
        func_0x00010bf529e0();
        if ((undefined *)0x1d < puVar2) {
          puVar2 = (undefined *)0x1e;
        }
      } while (puVar18 < puVar2);
    }
    puStack_6d8 = puVar15;
    _objc_release(puVar14);
    _objc_release(puVar21);
    _objc_release(ppuStack_688);
    _objc_release(puVar20);
    puVar14 = puStack_6b8;
    _objc_release(puStack_6b8);
    _objc_release(puVar14);
    puVar14 = puStack_6b0;
    func_0x00010bf51e00();
    _objc_retain();
    puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar14;
    ppuStack_688 = (undefined **)puVar15;
    func_0x00010bf529e0();
    puVar15 = (undefined *)0x0;
    puStack_6b8 = puVar14;
    if (puVar21 != (undefined *)0x0) {
      puVar21 = (undefined *)0x0;
      do {
        puVar18 = puVar14;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar18;
        func_0x00010c27dd80();
        if (puVar2 != (undefined *)0x2) {
          puVar2 = puVar15;
          puStack_668 = puVar21;
          puStack_658 = puVar18;
          if (puVar15 != (undefined *)0x0) {
            func_0x00010c2709c0(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f380();
            puVar21 = puStack_658;
            _objc_release(puVar18);
            dVar24 = dVar24 * 1000.0;
            puVar18 = puVar21;
            if (((long)dVar24 != 0) &&
               (ppuVar9 = ppuStack_688, func_0x00010bf529e0(), ppuVar19 = ppuStack_688,
               ppuVar9 != (undefined **)0x0)) {
              puStack_6a8 = puVar15;
              func_0x00010bf529e0();
              dVar24 = 0.0;
              uStack_4d8 = 0;
              uStack_4e0 = 0;
              uStack_4c8 = 0;
              plStack_4d0 = (long *)0x0;
              uStack_4b8 = 0;
              uStack_4c0 = 0;
              uStack_4a8 = 0;
              uStack_4b0 = 0;
              func_0x00010bf00d20();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = (undefined *)ppuVar19;
              func_0x00010bf52a60();
              if (puVar14 != (undefined *)0x0) {
                lVar13 = *plStack_4d0;
                do {
                  puVar16 = (undefined *)0x0;
                  do {
                    if (*plStack_4d0 != lVar13) {
                      _objc_enumerationMutation(ppuVar19);
                    }
                    puVar21 = puVar20;
                    func_0x00010c0e00e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                    if (puVar21 == (undefined *)0x0) {
                      puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar20);
                    }
                    else {
                      puVar21 = puVar20;
                      func_0x00010c0e00e0(puVar20);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c067fc0();
                      func_0x00010c0df840(puVar15);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(puVar20);
                      _objc_release(puVar15);
                    }
                    _objc_release(puVar21);
                    puVar16 = puVar16 + 1;
                  } while (puVar14 != puVar16);
                  puVar14 = (undefined *)ppuVar19;
                  func_0x00010bf52a60();
                } while (puVar14 != (undefined *)0x0);
              }
              _objc_release(ppuVar19);
              puVar16 = puStack_6a0;
              puVar2 = puStack_6a8;
              puVar18 = puStack_658;
              puVar14 = puStack_6b8;
            }
          }
          puVar15 = puVar18;
          func_0x00010c27dd80();
          if (puVar15 == (undefined *)0x0) {
            puVar15 = puVar18;
            func_0x00010c0d7740(puVar18);
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar15;
            func_0x00010bf6e340();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d7840(puVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuStack_688);
            _objc_release(puVar18);
            _objc_release(puVar21);
            puVar21 = puStack_668;
LAB_1052e5170:
            _objc_release(puVar15);
            puVar15 = puStack_658;
          }
          else {
            puVar3 = puVar18;
            func_0x00010c27dd80();
            puVar21 = puStack_668;
            puVar15 = puVar18;
            if (puVar3 == (undefined *)0x1) {
              func_0x00010c0d7840(puVar18);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c12d3e0(ppuStack_688);
              puVar15 = puVar18;
              goto LAB_1052e5170;
            }
          }
          func_0x00010c2709c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar18 = puStack_658;
        }
        _objc_release(puVar18);
        puVar21 = puVar21 + 1;
        puVar18 = puVar14;
        func_0x00010bf529e0();
      } while (puVar21 < puVar18);
    }
    puVar14 = puVar20;
    puStack_6a8 = puVar15;
    func_0x00010c086f00();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar14;
    func_0x00010bf529e0();
    if (puVar21 != (undefined *)0x0) {
      puVar21 = (undefined *)0x0;
      do {
        puVar18 = puVar14;
        func_0x00010c0dfd40(puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar20;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c067fc0();
        _objc_release(puVar2);
        if (0 < (long)puVar3) {
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar15);
          _objc_release(puVar2);
        }
        _objc_release(puVar18);
        puVar21 = puVar21 + 1;
        puVar18 = puVar14;
        func_0x00010bf529e0();
        if ((undefined *)0x63 < puVar18) {
          puVar18 = (undefined *)0x64;
        }
      } while (puVar21 < puVar18);
    }
    puStack_658 = puVar15;
    _objc_release(puVar14);
    _objc_release(puStack_6a8);
    _objc_release(ppuStack_688);
    _objc_release(puVar20);
    puVar14 = puStack_6b8;
    _objc_release(puStack_6b8);
    _objc_release(puVar14);
    puVar15 = puVar16;
    func_0x00010c086f00();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar15;
    func_0x00010bf529e0();
    if (puVar20 != (undefined *)0x0) {
      puVar20 = (undefined *)0x0;
      do {
        puVar21 = puVar15;
        func_0x00010c0dfd40(puVar15);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar16;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar18;
        func_0x00010c067fc0();
        _objc_release(puVar18);
        if (0 < (long)puVar2) {
          puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar14);
          _objc_release(puVar18);
        }
        _objc_release(puVar21);
        puVar20 = puVar20 + 1;
        puVar21 = puVar15;
        func_0x00010bf529e0();
        if ((undefined *)0x1d < puVar21) {
          puVar21 = (undefined *)0x1e;
        }
      } while (puVar20 < puVar21);
    }
    puVar20 = puStack_6c0;
    puVar16 = puStack_6c0;
    puStack_668 = puVar14;
    func_0x00010c086f00();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar16;
    func_0x00010bf529e0();
    if (puVar14 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        puVar18 = puVar16;
        func_0x00010c0dfd40(puVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar20;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c067fc0();
        _objc_release(puVar2);
        if (0 < (long)puVar3) {
          puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar21);
          _objc_release(puVar2);
        }
        _objc_release(puVar18);
        puVar14 = puVar14 + 1;
        puVar18 = puVar16;
        func_0x00010bf529e0();
        if ((undefined *)0x63 < puVar18) {
          puVar18 = (undefined *)0x64;
        }
      } while (puVar14 < puVar18);
    }
    func_0x00010c26f380(pppuStack_648);
    puVar14 = puStack_680;
    puVar20 = puStack_680;
    func_0x00010c0e00e0(puStack_680);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(puVar20);
    puVar20 = puVar14;
    func_0x00010c0e00e0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(puVar20);
    func_0x00010c0e00e0(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(puVar14);
    ppuStack_4a0 = &PTR____CFConstantStringClassReference_110dd0258;
    ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_498 = &PTR____CFConstantStringClassReference_110dd0358;
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_688 = ppuVar19;
    ppuStack_428 = ppuVar19;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_490 = &PTR____CFConstantStringClassReference_110dcfd18;
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6a8 = puVar14;
    puStack_420 = puVar14;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_488 = &PTR____CFConstantStringClassReference_110dcfd38;
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6b8 = puVar20;
    puStack_418 = puVar20;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_480 = &PTR____CFConstantStringClassReference_110dcfd58;
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6f0 = puVar14;
    puStack_410 = puVar14;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_478 = &PTR____CFConstantStringClassReference_110dcfcb8;
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6e8 = puVar20;
    puStack_408 = puVar20;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_470 = &PTR____CFConstantStringClassReference_110dcfcd8;
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_6f8 = puVar14;
    puStack_400 = puVar14;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_468 = &PTR____CFConstantStringClassReference_110dcfcf8;
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_700 = puVar20;
    puStack_3f8 = puVar20;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_460 = &PTR____CFConstantStringClassReference_110dd0278;
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_708 = puVar14;
    puStack_3f0 = puVar14;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_458 = &PTR____CFConstantStringClassReference_110dcfd78;
    unaff_x22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_710 = puVar20;
    puStack_3e8 = puVar20;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_450 = &PTR____CFConstantStringClassReference_110dcfd98;
    unaff_x25 = puStack_698;
    puStack_3e0 = unaff_x22;
    func_0x00010bf51e00();
    param_5 = puStack_658;
    param_6 = puStack_668;
    puStack_3d0 = puStack_6d8;
    ppuStack_448 = &PTR____CFConstantStringClassReference_110dcfb78;
    ppuStack_440 = &PTR____CFConstantStringClassReference_110dcfb98;
    puStack_3c8 = puStack_668;
    ppuStack_438 = &PTR____CFConstantStringClassReference_110dcfdb8;
    unaff_x26 = puStack_658;
    puStack_3d8 = unaff_x25;
    func_0x00010bf51e00();
    ppuStack_430 = &PTR____CFConstantStringClassReference_110dcfdd8;
    puVar14 = puVar21;
    puStack_3c0 = unaff_x26;
    func_0x00010bf51e00();
    pppuVar11 = &ppuStack_428;
    pppuVar8 = &ppuStack_4a0;
    puVar20 = (undefined *)0xf;
    puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_3b8 = puVar14;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x22);
    _objc_release(puStack_710);
    _objc_release(puStack_708);
    _objc_release(puStack_700);
    _objc_release(puStack_6f8);
    _objc_release(puStack_6e8);
    _objc_release(puStack_6f0);
    _objc_release(puStack_6b8);
    _objc_release(puStack_6a8);
    _objc_release(ppuStack_688);
    puVar14 = puVar18;
    func_0x00010bf51e00(puVar18);
    _objc_release(puVar18);
    param_3 = pppuStack_650;
    _objc_release(puVar21);
    param_4 = pppuStack_648;
    _objc_release(puVar16);
    _objc_release(param_6);
    _objc_release(puVar15);
    _objc_release(param_5);
    _objc_release(puStack_6d8);
    _objc_release(puStack_698);
    _objc_release(puStack_690);
    _objc_release(puStack_670);
    _objc_release(puStack_6c0);
    _objc_release(puStack_6a0);
    _objc_release(puStack_660);
    _objc_release(puStack_680);
    _objc_release(puStack_6b0);
    _objc_release(puStack_6e0);
    _objc_release(puStack_640);
    _objc_release(puStack_628);
    _objc_release(puStack_6d0);
    param_7 = uStack_6c8;
  }
  _objc_release(param_7);
  _objc_release(puStack_638);
  _objc_release(puStack_630);
  _objc_release(param_4);
  pppuVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b0) {
    ___stack_chk_fail();
    pcStack_718 = FUN_1052e5938;
    puStack_760 = unaff_x26;
    puStack_758 = unaff_x25;
    pppuStack_750 = param_3;
    pppuStack_748 = param_4;
    puStack_740 = unaff_x22;
    uStack_738 = param_7;
    puStack_730 = param_6;
    puStack_728 = param_5;
    puStack_720 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar11);
    _objc_retain(pppuVar8);
    pppuVar10 = pppuVar1;
    func_0x00010beb3780();
    puVar14 = PTR____NSDictionary0__struct_11034ab58;
    if ((((int)pppuVar10 != 0) && (pppuVar11 != (undefined ***)0x0)) &&
       (pppuVar8 != (undefined ***)0x0)) {
      puStack_788 = &uStack_790;
      uStack_790 = 0;
      uStack_780 = 0x3032000000;
      pcStack_778 = FUN_1052e3718;
      uStack_770 = 0x1052e3728;
      uStack_768 = 0;
      _objc_initWeak(auStack_798,pppuVar1);
      ppuVar19 = pppuVar1[1];
      _objc_copyWeak(auStack_7b0,auStack_798);
      _objc_retain(pppuVar11);
      _objc_retain(pppuVar8);
      puStack_7a8 = puVar20;
      puStack_7a0 = puVar12;
      func_0x00010c0f8240(ppuVar19);
      puVar14 = (undefined *)puStack_788[5];
      _objc_retain(puVar14);
      _objc_release(pppuVar8);
      _objc_release(pppuVar11);
      _objc_destroyWeak(auStack_7b0);
      _objc_destroyWeak(auStack_798);
      __Block_object_dispose(&uStack_790,8);
      _objc_release(uStack_768);
    }
    _objc_release(pppuVar8);
    _objc_release(pppuVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1052e5938; end: 1052e5ad3; -[SCBatteryNetworkMonitor backgroundAppSessionNetworkUsageWithStartTime:endTime:startNetworkConnectivity:endNetworkConnectivity:] */

void FUN_1052e5938(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010beb3780();
  puVar3 = PTR____NSDictionary0__struct_11034ab58;
  if ((((int)lVar1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1052e3718;
    uStack_60 = 0x1052e3728;
    uStack_58 = 0;
    _objc_initWeak(auStack_88,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_a0,auStack_88);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_98 = param_5;
    uStack_90 = param_6;
    func_0x00010c0f8240(uVar2);
    puVar3 = (undefined *)puStack_78[5];
    _objc_retain(puVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_88);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1052e5ad4; end: 1052e5b2b;  */

void FUN_1052e5ad4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bdd2180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052e5b2c; end: 1052e5c0f; -[SCBatteryNetworkMonitor _backgroundAppSessionNetworkUsageWithStartTime:endTime:startNetworkConnectivity:endNetworkConnectivity:] */

void FUN_1052e5b2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf51e00(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf51e00(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar2);
  FUN_1052e3b28(param_5,param_6,param_3,param_4,uVar3,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 1052e5c10; end: 1052e5d1f;  */

ulong FUN_1052e5c10(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2709c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2709c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar3 = param_3;
    func_0x00010c2709c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf433a0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar2 = param_2;
    func_0x00010c27dd80();
    _objc_release(param_2);
    uVar3 = param_3;
    func_0x00010c27dd80();
    uVar1 = 1;
    if (uVar2 < uVar3) {
      uVar1 = 0xffffffffffffffff;
    }
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1052e5d20; end: 1052e5e47;  */

void FUN_1052e5d20(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c2709c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(param_3);
  dVar4 = param_1;
  _objc_release(param_3);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf48f60();
  if (lVar1 != 2) {
    func_0x00010bf48f60();
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_4;
  func_0x00010c0e00e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c0df720(param_1 + dVar4,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1052e5e48; end: 1052e6037;  */

void FUN_1052e5e48(double param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  puVar7 = &uStack_150;
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar8 = *plStack_140;
    do {
      lVar9 = 0;
      do {
        if (*plStack_140 != lVar8) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = param_3;
        func_0x00010c0e00e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c067fc0();
        _objc_release(lVar3);
        dVar10 = (double)(long)(param_1 * 1000.0) * (double)lVar4;
        dVar11 = dVar10 / (double)param_2;
        lVar3 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010bf885a0(lVar3);
          dVar11 = dVar11 + dVar10;
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(dVar11,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(puVar5);
        _objc_release(lVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      puVar7 = &uStack_150;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar7,PTR_s_compare__1125ae690,lVar6);
  return;
}



/* Entry: 1052e6038; end: 1052e6067;  */

void FUN_1052e6038(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_compare__1125ae690,param_2);
  return;
}



/* Entry: 1052e6068; end: 1052e6073; -[SCBatteryNetworkMonitor hasOngoingNetworkActivity] */

byte FUN_1052e6068(long param_1)

{
  return *(byte *)(param_1 + 0x90) & 1;
}



/* Entry: 1052e6074; end: 1052e607b; -[SCBatteryNetworkMonitor setHasOngoingNetworkActivity:] */

void FUN_1052e6074(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 1052e607c; end: 1052e610b; -[SCBatteryNetworkMonitor .cxx_destruct] */

void FUN_1052e607c(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052e610c; end: 1052e635f; -[SCBatteryNonFatalReporter initWithCrashLogger:blizzardLogger:batteryLogger:appStartExperimentReader:applicationLifecycleEvents:] */

undefined8
FUN_1052e610c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  func_0x00010c021520();
  puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c26d100();
  _objc_release(puVar2);
  FUN_1052ecf04(param_7);
  uVar4 = param_7;
  uVar9 = param_1;
  FUN_1052ecf18();
  uVar5 = param_7;
  FUN_1052ecfec();
  FUN_1052ed0c0();
  FUN_1052ed194();
  FUN_1052ed268(param_7);
  FUN_1052ed280();
  func_0x0001052ed2a8();
  _objc_release(param_7);
  puVar2 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006500(param_1,uVar9,param_2,param_3,param_4,param_5,param_6,puVar1,puVar3,
                      uVar4 & 0xffffffff,(char)uVar5);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_2;
}



/* Entry: 1052e6360; end: 1052e637b;  */

void FUN_1052e6360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2762f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae4f0,PTR_s_totalCpuTime_11267b2e0);
  return;
}



/* Entry: 1052e637c; end: 1052e680b; -[SCBatteryNonFatalReporter initWithCrashLogger:blizzardLogger:batteryLogger:queuePerformer:thermalState:nonFatalReportingDeviceSamplingPercentage:batteryHotPhoneNonFatalEnabled:logAllThreadsEnabled:highCpuUsageNonFatalEnabled:cpuUsageNormalizeEnabled:highCpuUsageThreshold:cpuPullFrequencyInSecond:movingTimeWindowInSecond:highCpuNonFatalRateLimitInSecond:applicationState:notificationCenter:cpuTimeProvider:deviceSamplingResultProvider:processInfo:currentDevice:applicationLifecycleEvents:] */

undefined8 *
FUN_1052e637c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined4 param_12,
             long param_13,long param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17
             ,undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
             undefined8 param_22)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_80 = PTR_PTR_1126e7588;
  puVar2 = &uStack_88;
  uStack_88 = param_3;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar3 = puVar2[1];
    puVar2[1] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[2];
    puVar2[2] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[3];
    puVar2[3] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[4];
    puVar2[4] = param_7;
    _objc_release(uVar3);
    *(undefined4 *)(puVar2 + 6) = param_1;
    *(undefined1 *)((long)puVar2 + 0x34) = param_10;
    *(undefined1 *)((long)puVar2 + 0x35) = (undefined1)param_11;
    *(undefined1 *)(puVar2 + 0xf) = param_11._1_1_;
    *(undefined1 *)(puVar2 + 0x10) = param_11._2_1_;
    *(undefined4 *)((long)puVar2 + 0x7c) = param_2;
    puVar2[0x11] = param_13;
    puVar2[0x12] = param_14;
    puVar2[0x1b] = param_15;
    lVar1 = 0;
    if (param_13 != 0) {
      lVar1 = param_14 / param_13;
    }
    puVar2[0x14] = lVar1;
    _objc_retain(param_16);
    uVar3 = puVar2[8];
    puVar2[8] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar2[9];
    puVar2[9] = param_17;
    _objc_release(uVar3);
    _objc_retain(param_21);
    uVar3 = puVar2[10];
    puVar2[10] = param_21;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_20;
    _objc_release(uVar3);
    uVar3 = param_18;
    _objc_retainBlock();
    uVar6 = puVar2[0xd];
    puVar2[0xd] = uVar3;
    _objc_release(uVar6);
    uVar3 = param_19;
    _objc_retainBlock();
    uVar6 = puVar2[0xe];
    puVar2[0xe] = uVar3;
    _objc_release(uVar6);
    puVar4 = puVar2;
    func_0x00010bdccb80();
    if (((ulong)puVar4 & 1) == 0) {
      puVar2[5] = param_9;
      func_0x00010c24f7c0(puVar2);
      if (*(char *)(puVar2 + 0xf) == '\x01') {
        func_0x00010bec05e0(puVar2);
        puVar5 = PTR_PTR_1126b6f98;
        _objc_alloc(PTR_PTR_1126b6f98);
        func_0x00010c01a760();
        func_0x00010bf7bc60(puVar2[4]);
        _objc_release(puVar5);
      }
    }
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar2[7];
    puVar2[7] = puVar5;
    _objc_release(uVar3);
    _objc_initWeak(auStack_90,puVar2);
    uVar3 = param_22;
    func_0x00010bf75dc0(param_22);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1052e680c;
    puStack_a0 = &UNK_110846510;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar6 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar3);
    uVar3 = param_22;
    func_0x00010c2a6420(param_22);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c0,auStack_90);
    uVar6 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar2;
}



/* Entry: 1052e680c; end: 1052e6873;  */

void FUN_1052e680c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf75dc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052e6874; end: 1052e6897; -[SCBatteryNonFatalReporter startObserveThermalStateChange] */

void FUN_1052e6874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_addObserver_selector_name_object_11259c238,
             param_1,PTR_s_thermalStateDidChange_112528af0,
             *(undefined8 *)PTR__NSProcessInfoThermalStateDidChangeNotification_1103455b0,0);
  return;
}



/* Entry: 1052e6898; end: 1052e68b3; -[SCBatteryNonFatalReporter stopObserveThermalStateChange] */

void FUN_1052e6898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_removeObserver_name_object__112628f90,param_1,
             *(undefined8 *)PTR__NSProcessInfoThermalStateDidChangeNotification_1103455b0,0);
  return;
}



/* Entry: 1052e68b4; end: 1052e6943; -[SCBatteryNonFatalReporter thermalStateDidChange] */

void FUN_1052e68b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d100();
  _objc_release(puVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1052e6944;
  puStack_48 = &UNK_110848c48;
  lStack_40 = param_1;
  puStack_38 = puVar2;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_60);
  return;
}



/* Entry: 1052e6944; end: 1052e694f;  */

void FUN_1052e6944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_thermalStateDidChangeToThermal__112678e78,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1052e6950; end: 1052e69a7; -[SCBatteryNonFatalReporter thermalStateDidChangeToThermal:] */

void FUN_1052e6950(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  if (param_3 != *(long *)(param_1 + 0x28)) {
    if (((*(long *)(param_1 + 0x28) < param_3) &&
        (uVar1 = param_1, func_0x00010be3e1e0(), (int)uVar1 != 0)) &&
       (uVar1 = param_1, func_0x00010be3e640(), (uVar1 & 1) == 0)) {
      func_0x00010c1326e0(param_1,param_2,param_3);
    }
    *(long *)(param_1 + 0x28) = param_3;
  }
  return;
}



/* Entry: 1052e69a8; end: 1052e6ad7; -[SCBatteryNonFatalReporter reportBatteryNonFatalHotPhoneErrorWithCurrentThermal:] */

void FUN_1052e69a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x34) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x70);
    (**(code **)(lVar1 + 0x10))(*(undefined4 *)(param_1 + 0x30));
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd0398);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b3e90;
      _objc_opt_new(PTR_PTR_1126b3e90);
      func_0x00010c16f9a0();
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      puVar4 = PTR_PTR_1126b3e98;
      if (*(char *)(param_1 + 0x35) == '\x01') {
        func_0x00010bf00c00(PTR_PTR_1126b3e98,param_2,1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf60460(PTR_PTR_1126b3e98);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c133420(uVar5,param_2,puVar2,0,puVar3,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 1052e6ad8; end: 1052e6b2f; -[SCBatteryNonFatalReporter willEnterForeground] */

void FUN_1052e6ad8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1052e6b30;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1052e6b30; end: 1052e6b37;  */

void FUN_1052e6b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeb050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__willEnterForeground_1125985b8);
  return;
}



/* Entry: 1052e6b38; end: 1052e6bb3; -[SCBatteryNonFatalReporter _willEnterForeground] */

void FUN_1052e6b38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c2563a0();
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d100();
  _objc_release(puVar1);
  *(undefined **)(param_1 + 0x28) = puVar2;
  func_0x00010c24f7c0(param_1);
  if (*(char *)(param_1 + 0x78) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bec05f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startMonitoringCpuUsage_11258db20);
    return;
  }
  return;
}



/* Entry: 1052e6bb4; end: 1052e6c0b; -[SCBatteryNonFatalReporter didEnterBackground] */

void FUN_1052e6bb4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1052e6c0c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 1052e6c0c; end: 1052e6c13;  */

void FUN_1052e6c0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfd8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__didEnterBackground_11255cfd8);
  return;
}



/* Entry: 1052e6c14; end: 1052e6c37; -[SCBatteryNonFatalReporter _didEnterBackground] */

void FUN_1052e6c14(undefined8 param_1)

{
  func_0x00010c2563a0();
                    /* WARNING: Could not recover jumptable at 0x00010bec3230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopMonitoringCpuUsage_11258e630);
  return;
}



/* Entry: 1052e6c38; end: 1052e6c57; -[SCBatteryNonFatalReporter _isAppActive] */

bool FUN_1052e6c38(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010bf07b60(lVar1);
  return lVar1 == 0;
}



/* Entry: 1052e6c58; end: 1052e6c9b; -[SCBatteryNonFatalReporter _appLaunchedToBackground] */

bool FUN_1052e6c58(long param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bf07b60();
  if (lVar2 == 2) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c0d9860(lVar2);
    bVar1 = lVar2 == 2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1052e6c9c; end: 1052e6cbf; -[SCBatteryNonFatalReporter _isBatteryCharging] */

bool FUN_1052e6c9c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010bf176e0(uVar1);
  return (uVar1 & 0xfffffffffffffffe) == 2;
}



/* Entry: 1052e6cc0; end: 1052e6cff; -[SCBatteryNonFatalReporter _startMonitoringCpuUsage] */

void FUN_1052e6cc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    return;
  }
  lVar1 = param_1;
  func_0x00010bdec880();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(long *)(param_1 + 0x60) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052e6d00; end: 1052e6d0f; -[SCBatteryNonFatalReporter _stopMonitoringCpuUsage] */

void FUN_1052e6d00(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010becaf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__teardownCpuMonitorTimer_112590578);
    return;
  }
  return;
}



/* Entry: 1052e6d10; end: 1052e6e1f; -[SCBatteryNonFatalReporter _createCpuMonitorTimer] */

void FUN_1052e6d10(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,uVar1);
  _objc_release(uVar1);
  if (puVar2 != (undefined *)0x0) {
    (**(code **)(*(long *)(param_2 + 0x68) + 0x10))();
    *(undefined8 *)(param_2 + 200) = param_1;
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0xd0) = param_1;
    func_0x00010be92de0(param_2);
    lVar3 = *(long *)(param_2 + 0x88) * 1000000000;
    uVar1 = 0;
    _dispatch_time(0,lVar3);
    _dispatch_source_set_timer(puVar2,uVar1,lVar3,0);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1052e6e20;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_2;
    _dispatch_source_set_event_handler(puVar2,&puStack_58);
    _dispatch_resume(puVar2);
    _objc_retain(puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052e6e20; end: 1052e6e57;  */

void FUN_1052e6e20(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be3e1e0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bedbcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__updateMovingAverageCpuUsage_1125948e0);
    return;
  }
  return;
}



/* Entry: 1052e6e58; end: 1052e6e93; -[SCBatteryNonFatalReporter _teardownCpuMonitorTimer] */

void FUN_1052e6e58(long param_1)

{
  undefined8 uVar1;
  
  _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 200) = 0xbff0000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010be92df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetHighCpuUsageMeasurement_112582518);
  return;
}



/* Entry: 1052e6e94; end: 1052e6ef7; -[SCBatteryNonFatalReporter _resetHighCpuUsageMeasurement] */

void FUN_1052e6e94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined **)(param_1 + 0xb0) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1052e6ef8; end: 1052e6faf; -[SCBatteryNonFatalReporter _updateMovingAverageCpuUsage] */

void FUN_1052e6ef8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  (**(code **)(*(long *)(param_2 + 0x68) + 0x10))();
  dVar2 = param_1;
  _CACurrentMediaTime();
  if ((param_1 == -1.0) || (dVar4 = *(double *)(param_2 + 200), dVar4 == -1.0)) {
    func_0x00010be92de0(param_2);
  }
  else {
    dVar3 = *(double *)(param_2 + 0xd0);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bedbd00(param_1 - dVar4,(dVar2 - dVar3) * 1000.0,param_2,param_3,puVar1);
    _objc_release(puVar1);
  }
  *(double *)(param_2 + 200) = param_1;
  *(double *)(param_2 + 0xd0) = dVar2;
  return;
}



/* Entry: 1052e6fb0; end: 1052e734b; -[SCBatteryNonFatalReporter _updateMovingAverageCpuUsageWithCpuTimeSampleInMS:clockTimeSampleInMS:currentTime:] */

void FUN_1052e6fb0(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_5);
  if ((0.0 < param_1) && (0.0 < param_2)) {
    uVar1 = *(ulong *)(param_3 + 0xa8);
    dVar7 = param_1;
    func_0x00010bf529e0();
    uVar6 = *(undefined8 *)(param_3 + 0xa8);
    if (uVar1 < *(ulong *)(param_3 + 0xa0)) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar6,param_4,puVar2);
      _objc_release(puVar2);
      uVar6 = *(undefined8 *)(param_3 + 0xb0);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar6,param_4,puVar2);
      _objc_release(puVar2);
      dVar7 = param_1 + *(double *)(param_3 + 0xb8);
      *(double *)(param_3 + 0xc0) = param_2 + *(double *)(param_3 + 0xc0);
      *(double *)(param_3 + 0xb8) = dVar7;
    }
    else {
      func_0x00010bfb1920(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar8 = dVar7;
      _objc_release(uVar6);
      uVar6 = *(undefined8 *)(param_3 + 0xb0);
      func_0x00010bfb1920(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(uVar6);
      func_0x00010c12d3c0(*(undefined8 *)(param_3 + 0xa8),param_4,0);
      uVar6 = *(undefined8 *)(param_3 + 0xa8);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar6,param_4,puVar2);
      _objc_release(puVar2);
      func_0x00010c12d3c0(*(undefined8 *)(param_3 + 0xb0),param_4,0);
      uVar6 = *(undefined8 *)(param_3 + 0xb0);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar6,param_4,puVar2);
      _objc_release(puVar2);
      dVar7 = param_1 + (*(double *)(param_3 + 0xb8) - dVar7);
      *(double *)(param_3 + 0xb8) = dVar7;
      *(double *)(param_3 + 0xc0) = param_2 + (*(double *)(param_3 + 0xc0) - dVar8);
    }
    func_0x00010bdd8420(dVar7,(double)(*(long *)(param_3 + 0x90) * 1000),param_3);
    *(float *)(param_3 + 0x98) = (float)dVar7;
    func_0x00010bdd8420(param_1,param_2,param_3);
    if ((*(float *)(param_3 + 0x7c) <= *(float *)(param_3 + 0x98)) &&
       ((double)*(float *)(param_3 + 0x7c) <= param_1)) {
      func_0x00010bf77420(*(undefined8 *)(param_3 + 0x20));
      puVar3 = PTR_PTR_1126b6fa0;
      _objc_opt_new(PTR_PTR_1126b6fa0);
      puVar4 = PTR_PTR_1126b6f78;
      _objc_opt_new(PTR_PTR_1126b6f78);
      func_0x00010c1a8620();
      func_0x00010c184d20(puVar4,param_4,*(undefined8 *)(param_3 + 0x88));
      func_0x00010c1c9260(puVar4,param_4,*(undefined8 *)(param_3 + 0x90));
      func_0x00010c1b02e0(puVar4,param_4,*(undefined1 *)(param_3 + 0x80));
      func_0x00010c1a85c0(puVar3,param_4,puVar4);
      func_0x00010c1c9240((double)*(float *)(param_3 + 0x98),puVar3);
      func_0x00010c218200(puVar3,param_4,(long)*(double *)(param_3 + 0xb8));
      func_0x00010c218c20(puVar3,param_4,(long)*(double *)(param_3 + 0xc0));
      func_0x00010c0b29e0(*(undefined8 *)(param_3 + 0x18),param_4,puVar3);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c115b20();
      func_0x00010c14de00(puVar2,param_4,&PTR____CFConstantStringClassReference_110dd03b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd8420(*(undefined8 *)(param_3 + 0xb8),*(undefined8 *)(param_3 + 0xc0),param_3);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_4,
                          &PTR____CFConstantStringClassReference_110dd0418);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be8f3c0(param_3,param_4,puVar5,param_5);
      func_0x00010be92de0(param_3);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1052e734c; end: 1052e7393; -[SCBatteryNonFatalReporter _calculateAverageCpuUsageWithCpuTimeInMS:clockTimeInMS:] */

double FUN_1052e734c(double param_1,double param_2,long param_3)

{
  long lVar1;
  
  param_2 = (param_1 * 100.0) / param_2;
  if (*(char *)(param_3 + 0x80) == '\x01') {
    lVar1 = *(long *)(param_3 + 0x58);
    func_0x00010c115b20(lVar1);
    param_2 = param_2 / (double)lVar1;
  }
  return param_2;
}



/* Entry: 1052e7394; end: 1052e73f3; -[SCBatteryNonFatalReporter _shouldTriggerRateLimitForHighCpuNonFatalReportingWithTimestamp:] */

undefined8 FUN_1052e7394(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if ((*(long *)(param_2 + 0xe0) == 0) ||
     (func_0x00010c26f380(param_4), (double)*(long *)(param_2 + 0xd8) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 1052e73f4; end: 1052e7503; -[SCBatteryNonFatalReporter _reportBatteryHighCpuUsageNonFatalErrorWithErrorMessage:timestamp:] */

void FUN_1052e73f4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x70);
    (**(code **)(lVar1 + 0x10))(*(undefined4 *)(param_1 + 0x30));
    if (((int)lVar1 != 0) &&
       (uVar2 = param_1, func_0x00010beb6d80(param_1,param_2,param_4), (uVar2 & 1) == 0)) {
      puVar3 = PTR_PTR_1126b3e90;
      _objc_opt_new(PTR_PTR_1126b3e90);
      func_0x00010c16f9a0();
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      puVar4 = PTR_PTR_1126b3e98;
      if (*(char *)(param_1 + 0x35) == '\x01') {
        func_0x00010bf00c00(PTR_PTR_1126b3e98,param_2,1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf60460(PTR_PTR_1126b3e98);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c133420(uVar5,param_2,puVar3,0,param_3,puVar4);
      _objc_release(puVar4);
      _objc_retain(param_4);
      uVar5 = *(undefined8 *)(param_1 + 0xe0);
      *(undefined8 *)(param_1 + 0xe0) = param_4;
      _objc_release(uVar5);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052e7504; end: 1052e75cf; -[SCBatteryNonFatalReporter .cxx_destruct] */

void FUN_1052e7504(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052e75d0; end: 1052e76f3; -[SCBatteryPageViewLoggingItem didPageViewEndAtTime:isFrontCameraOn:isBackCameraOn:endBatteryLevel:isBatteryCharging:pageViewEndCpuTime:] */

void FUN_1052e75d0(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,int param_6,int param_7,int param_8)

{
  undefined *puVar1;
  long lVar2;
  
  *(undefined8 *)(param_4 + 0x20) = param_1;
  *(undefined4 *)(param_4 + 0x10) = param_2;
  if (param_8 != 0) {
    *(undefined1 *)(param_4 + 8) = 1;
  }
  if (param_6 != 0) {
    lVar2 = *(long *)(param_4 + 0x60);
    func_0x00010c0e00e0(lVar2,param_5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf200);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar1 = PTR_PTR_1126b6ed8;
      _objc_alloc(PTR_PTR_1126b6ed8);
      func_0x00010c0528a0(param_1);
      func_0x00010befa120(lVar2);
      _objc_release(puVar1);
    }
    _objc_release(lVar2);
  }
  if (param_7 != 0) {
    lVar2 = *(long *)(param_4 + 0x60);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar1 = PTR_PTR_1126b6ed8;
      _objc_alloc(PTR_PTR_1126b6ed8);
      func_0x00010c0528a0(param_1);
      func_0x00010befa120(lVar2);
      _objc_release(puVar1);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf78d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,param_1,param_4,PTR_s_didPullCpuTime_atTimestamp__1125bbcf8);
  return;
}



/* Entry: 1052e76f4; end: 1052e76ff; -[SCBatteryPageViewLoggingItem didBatteryChargingStart] */

void FUN_1052e76f4(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 1052e7700; end: 1052e7763; -[SCBatteryPageViewLoggingItem didThermalStateChange:] */

void FUN_1052e7700(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c067fc0();
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010c067fc0();
  if (lVar2 < lVar1) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = param_3;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052e7764; end: 1052e7887; -[SCBatteryPageViewLoggingItem didCameraStartRunningAtTime:cameraPosition:] */

void FUN_1052e7764(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  if (param_4 == 1) {
    puVar1 = *(undefined **)(param_2 + 0x60);
    func_0x00010c0e00e0(puVar1,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf218);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) goto LAB_1052e783c;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf218;
  }
  else {
    if (param_4 != 2) {
      return;
    }
    puVar1 = *(undefined **)(param_2 + 0x60);
    func_0x00010c0e00e0(puVar1,param_3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf200);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) goto LAB_1052e783c;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf200;
  }
  func_0x00010c1d0640(uVar2,param_3,puVar1,ppuVar4);
LAB_1052e783c:
  puVar3 = PTR_PTR_1126b6ed8;
  _objc_alloc(PTR_PTR_1126b6ed8);
  func_0x00010c0528a0(param_1);
  func_0x00010befa120(puVar1,param_3,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1052e7888; end: 1052e7937; -[SCBatteryPageViewLoggingItem didCameraStopRunningAtTime:cameraPosition:] */

void FUN_1052e7888(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  if (param_4 == 1) {
    lVar1 = *(long *)(param_2 + 0x60);
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf218;
  }
  else {
    if (param_4 != 2) {
      return;
    }
    lVar1 = *(long *)(param_2 + 0x60);
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf200;
  }
  func_0x00010c0e00e0(lVar1,param_3,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b6ed8;
    _objc_alloc(PTR_PTR_1126b6ed8);
    func_0x00010c0528a0(param_1);
    func_0x00010befa120(lVar1,param_3,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1052e7938; end: 1052e79af; -[SCBatteryPageViewLoggingItem calculateCameraUsage] */

void FUN_1052e7938(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  uVar3 = uVar2;
  FUN_1052d9b30(uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1052e79b0; end: 1052e7b2f; -[SCBatteryPageViewLoggingItem didPullCpuTime:atTimestamp:] */

void FUN_1052e79b0(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  
  if (param_1 != -1.0) {
    if (*(double *)(param_3 + 0x40) != -1.0) {
      dVar7 = param_1 - *(double *)(param_3 + 0x40);
      uVar5 = (ulong)((param_2 - *(double *)(param_3 + 0x48)) * 1000.0);
      if (0.0 < dVar7 && 0 < (long)uVar5) {
        dVar6 = (dVar7 * 100.0) / (double)uVar5;
        lVar4 = (long)(dVar6 / 10.0) * 10;
        lVar2 = lVar4 + 10;
        if ((dVar6 * 10.0) / 10.0 <= (double)lVar4) {
          lVar2 = lVar4;
        }
        if (0 < lVar2) {
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
          func_0x00010c013ce0();
          lVar2 = *(long *)(param_3 + 0x58);
          func_0x00010c0e00e0(lVar2,param_4,puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (lVar2 != 0) {
            lVar4 = lVar2;
            func_0x00010c0b4fe0(lVar2);
            uVar5 = lVar4 + uVar5;
          }
          func_0x00010c0df7a0(puVar3,param_4,uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x58),param_4,puVar3,puVar1);
          _objc_release(puVar3);
          _objc_release(lVar2);
          _objc_release(puVar1);
        }
      }
      dVar6 = 0.0;
      if (0.0 <= dVar7) {
        dVar6 = dVar7;
      }
      *(double *)(param_3 + 0x50) = dVar6 + *(double *)(param_3 + 0x50);
    }
    *(double *)(param_3 + 0x40) = param_1;
    *(double *)(param_3 + 0x48) = param_2;
  }
  return;
}



/* Entry: 1052e7b30; end: 1052e7b37; -[SCBatteryPageViewLoggingItem pageStartTime] */

undefined8 FUN_1052e7b30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052e7b38; end: 1052e7b3f; -[SCBatteryPageViewLoggingItem setPageStartTime:] */

void FUN_1052e7b38(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 1052e7b40; end: 1052e7b47; -[SCBatteryPageViewLoggingItem pageEndTime] */

undefined8 FUN_1052e7b40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1052e7b48; end: 1052e7b4f; -[SCBatteryPageViewLoggingItem setPageEndTime:] */

void FUN_1052e7b48(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 1052e7b50; end: 1052e7b57; -[SCBatteryPageViewLoggingItem previousPageName] */

undefined8 FUN_1052e7b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1052e7b58; end: 1052e7b5f; -[SCBatteryPageViewLoggingItem setPreviousPageName:] */

void FUN_1052e7b58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052e7b60; end: 1052e7b67; -[SCBatteryPageViewLoggingItem startBatteryLevel] */

undefined4 FUN_1052e7b60(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 1052e7b68; end: 1052e7b6f; -[SCBatteryPageViewLoggingItem setStartBatteryLevel:] */

void FUN_1052e7b68(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}



/* Entry: 1052e7b70; end: 1052e7b77; -[SCBatteryPageViewLoggingItem endBatteryLevel] */

undefined4 FUN_1052e7b70(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1052e7b78; end: 1052e7b7f; -[SCBatteryPageViewLoggingItem setEndBatteryLevel:] */

void FUN_1052e7b78(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 1052e7b80; end: 1052e7b87; -[SCBatteryPageViewLoggingItem pageStartThermalState] */

undefined8 FUN_1052e7b80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1052e7b88; end: 1052e7b8f; -[SCBatteryPageViewLoggingItem setPageStartThermalState:] */

void FUN_1052e7b88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052e7b90; end: 1052e7b97; -[SCBatteryPageViewLoggingItem pageMaxThermalState] */

undefined8 FUN_1052e7b90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1052e7b98; end: 1052e7b9f; -[SCBatteryPageViewLoggingItem setPageMaxThermalState:] */

void FUN_1052e7b98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052e7ba0; end: 1052e7ba7; -[SCBatteryPageViewLoggingItem batteryChargedDuringPageView] */

undefined1 FUN_1052e7ba0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1052e7ba8; end: 1052e7baf; -[SCBatteryPageViewLoggingItem setBatteryChargedDuringPageView:] */

void FUN_1052e7ba8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1052e7bb0; end: 1052e7bb7; -[SCBatteryPageViewLoggingItem previousPulledCpuTime] */

undefined8 FUN_1052e7bb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1052e7bb8; end: 1052e7bbf; -[SCBatteryPageViewLoggingItem setPreviousPulledCpuTime:] */

void FUN_1052e7bb8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 1052e7bc0; end: 1052e7bc7; -[SCBatteryPageViewLoggingItem previousCpuPullTimestamp] */

undefined8 FUN_1052e7bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1052e7bc8; end: 1052e7bcf; -[SCBatteryPageViewLoggingItem setPreviousCpuPullTimestamp:] */

void FUN_1052e7bc8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 1052e7bd0; end: 1052e7bd7; -[SCBatteryPageViewLoggingItem totalCpuTimeMs] */

undefined8 FUN_1052e7bd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1052e7bd8; end: 1052e7bdf; -[SCBatteryPageViewLoggingItem setTotalCpuTimeMs:] */

void FUN_1052e7bd8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x50) = param_1;
  return;
}



/* Entry: 1052e7be0; end: 1052e7be7; -[SCBatteryPageViewLoggingItem cpuUsageDict] */

undefined8 FUN_1052e7be0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1052e7be8; end: 1052e7bef; -[SCBatteryPageViewLoggingItem setCpuUsageDict:] */

void FUN_1052e7be8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1052e7bf0; end: 1052e7bf7; -[SCBatteryPageViewLoggingItem camerasOpenStatusChangeActivitiesRecordsDict] */

undefined8 FUN_1052e7bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1052e7bf8; end: 1052e7bff; -[SCBatteryPageViewLoggingItem setCamerasOpenStatusChangeActivitiesRecordsDict:] */

void FUN_1052e7bf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


