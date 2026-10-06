/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af83fdc; end: 10af84017; -[SCSpectaclesWiFiNetworksControllerFactoryImplementation .cxx_destruct] */

void FUN_10af83fdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af84018; end: 10af840fb; -[SCSpectaclesWiFiNetworksControllerServiceProvider provide] */

void FUN_10af84018(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ded58;
  _objc_alloc(PTR_PTR_1126ded58);
  func_0x00010c063020();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10af840fc; end: 10af8420f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af840fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126ded50;
    _objc_alloc(PTR_PTR_1126ded50);
    lVar1 = param_1 + _DAT_11278774c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0d79c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112787750;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112787748;
    _objc_loadWeakRetained(lVar6);
    func_0x00010c02f180(puVar7,param_2,lVar3,lVar5,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10af84210; end: 10af8424b; -[SCSpectaclesWiFiNetworksControllerServiceProvider end] */

void FUN_10af84210(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112702fa8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af8424c; end: 10af8429f; -[SCSpectaclesWiFiNetworksControllerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10af8424c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112787750);
  _objc_destroyWeak(param_1 + _DAT_11278774c);
  _objc_destroyWeak(param_1 + _DAT_112787748);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112787754,0);
  return;
}



/* Entry: 10af842a0; end: 10af84417; -[SCGCDBlockTimer initWithTimeInterval:callbackQueue:callbackBlock:repeats:] */

undefined8 *
FUN_10af842a0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_112702fb0;
  puVar1 = &uStack_60;
  uStack_60 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR___dispatch_source_type_timer_11034be38;
    _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,param_4);
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    uVar4 = puVar1[1];
    uVar3 = 0;
    _dispatch_time(0,(long)(param_1 * 1000000000.0));
    _dispatch_source_set_timer(uVar4,uVar3,(long)(param_1 * 1000000000.0),0);
    _objc_initWeak(auStack_68,puVar1);
    uVar3 = puVar1[1];
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10af84418;
    puStack_88 = &UNK_1108511c8;
    uStack_70 = param_6;
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_5);
    uStack_80 = param_5;
    _dispatch_source_set_event_handler(uVar3,&puStack_a0);
    _dispatch_resume(puVar1[1]);
    _objc_release(uStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 10af84418; end: 10af8446b;  */

void FUN_10af84418(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c069d00();
    _objc_release(lVar1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010af8445c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10af8446c; end: 10af844af; -[SCGCDBlockTimer dealloc] */

void FUN_10af8446c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00();
  puStack_28 = PTR_PTR_112702fb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10af844b0; end: 10af844b7; -[SCGCDBlockTimer invalidate] */

void FUN_10af844b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_source_cancel_11034c160)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10af844b8; end: 10af844c3; -[SCGCDBlockTimer .cxx_destruct] */

void FUN_10af844b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af844c4; end: 10af84507; -[SCGCDTimer dealloc] */

void FUN_10af844c4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00();
  puStack_28 = PTR_PTR_112702fb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10af84508; end: 10af84587;  */

void FUN_10af84508(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  
  pcVar1 = (code *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  uVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((pcVar1 != (code *)0x0) && (uVar3 = uVar2, func_0x00010c075c60(), (uVar3 & 1) == 0)) {
    pcVar4 = pcVar1;
    func_0x00010c0cc960();
    (*pcVar4)(pcVar1,*(undefined8 *)(param_1 + 0x30),uVar2);
    func_0x00010c069d00(uVar2);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 10af84588; end: 10af845a3; -[SCGCDTimer testAndSetInvalid] */

byte FUN_10af84588(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  
  pbVar1 = (byte *)(param_1 + 8);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar2 | 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return bVar2 & 1;
}



/* Entry: 10af845a4; end: 10af845af; -[SCGCDTimer isInvalid] */

undefined1 FUN_10af845a4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af845b0; end: 10af8465f; -[SCGCDTimer invalidate] */

void FUN_10af845b0(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  
  uVar1 = param_1;
  func_0x00010c26b600();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c2705e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11de00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10af84660;
    puStack_30 = &UNK_110842e18;
    uStack_28 = uVar1;
    _objc_retain(uVar1);
    func_0x000107c27d8c(param_1,&puStack_48);
    _objc_release(param_1);
    _objc_release(uStack_28);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 10af84660; end: 10af84667;  */

void FUN_10af84660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_source_cancel_11034c160)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10af84668; end: 10af8466f; -[SCGCDTimer userInfo] */

undefined8 FUN_10af84668(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af84670; end: 10af84677; -[SCGCDTimer scheduledDate] */

undefined8 FUN_10af84670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af84678; end: 10af8467f; -[SCGCDTimer timer] */

undefined8 FUN_10af84678(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af84680; end: 10af84687; -[SCGCDTimer queue] */

undefined8 FUN_10af84680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af84688; end: 10af846cf; -[SCGCDTimer .cxx_destruct] */

void FUN_10af84688(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af846d0; end: 10af84713; -[SCThrottleTimer dealloc] */

void FUN_10af846d0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf2dba0();
  puStack_28 = PTR_PTR_112702fc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10af84714; end: 10af8474f; -[SCThrottleTimer _onThrottleTargetDidTrigger:] */

void FUN_10af84714(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be8dac0();
  uVar1 = param_1;
  func_0x00010c07d320();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfb0070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fire_1125c99c0);
    return;
  }
  return;
}



/* Entry: 10af84750; end: 10af84777; -[SCThrottleTimer reschedule] */

void FUN_10af84750(undefined8 param_1)

{
  func_0x00010bdf4c60();
                    /* WARNING: Could not recover jumptable at 0x00010c1b4190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsScheduled__11264aa88,1);
  return;
}



/* Entry: 10af84778; end: 10af84783; -[SCThrottleTimer isScheduled] */

byte FUN_10af84778(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 10af84784; end: 10af847d7; -[SCThrottleTimer .cxx_destruct] */

void FUN_10af84784(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af847d8; end: 10af8480f; -[SCThrottleTarget onTimer:] */

void FUN_10af847d8(undefined8 param_1)

{
  func_0x00010c26d6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6bfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af84810; end: 10af84837; -[SCThrottleTarget .cxx_destruct] */

void FUN_10af84810(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10af84838; end: 10af848cb;  */

void FUN_10af84838(long param_1)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    pcVar2 = (code *)(param_1 + 0x30);
    _objc_loadWeakRetained();
    if (pcVar2 == (code *)0x0) {
      func_0x00010c069d00(lVar1);
    }
    else {
      pcVar3 = pcVar2;
      func_0x00010c0cc960();
      if (pcVar3 != (code *)0x0) {
        if (*(long *)(param_1 + 0x40) == 3) {
          (*pcVar3)(pcVar2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20));
        }
        else {
          (*pcVar3)(pcVar2,*(undefined8 *)(param_1 + 0x38));
        }
      }
    }
    _objc_release(pcVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10af848cc; end: 10af8490f; -[SCWeakTimer dealloc] */

void FUN_10af848cc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00();
  puStack_28 = PTR_PTR_112702fd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10af84910; end: 10af849b7; -[SCWeakTimer invalidate] */

void FUN_10af84910(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 8);
  _objc_retain(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
  if (lVar2 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10af849b8;
    puStack_30 = &UNK_110842e18;
    _objc_retain(lVar2);
    lStack_28 = lVar2;
    func_0x000107c312d0("APPSTORE",&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10af849b8; end: 10af849bf;  */

void FUN_10af849b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_invalidate_1125f8150)
  ;
  return;
}



/* Entry: 10af849c0; end: 10af84a0f; -[SCWeakTimer isValid] */

undefined8 FUN_10af849c0(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c082b20(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
  return uVar1;
}



/* Entry: 10af84a10; end: 10af84a67; -[SCWeakTimer fireDate] */

void FUN_10af84a10(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfb0120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af84a68; end: 10af84ac3; -[SCWeakTimer setFireDate:] */

void FUN_10af84a68(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c19cd20(*(undefined8 *)(param_1 + 8),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af84ac4; end: 10af84acf; -[SCWeakTimer .cxx_destruct] */

void FUN_10af84ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af84ad0; end: 10af84b43; -[SCSpectaclesWiFiNetworksServices initWithWiFiNetworksControllerFactory:] */

undefined1 * FUN_10af84ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702fd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af84b44; end: 10af84b4b; -[SCSpectaclesWiFiNetworksServices wiFiNetworksControllerFactory] */

undefined8 FUN_10af84b44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af84b4c; end: 10af84b57; -[SCSpectaclesWiFiNetworksServices .cxx_destruct] */

void FUN_10af84b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af84b58; end: 10af84c2b; -[SCStateMachine _printAvailableTransitions] */

ulong FUN_10af84b58(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [128];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  plStack_f0 = (long *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uVar2 = *(ulong *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010bf52a60(uVar2,param_2,&uStack_100,auStack_b8,0x10);
  if (uVar1 != 0) {
    lVar3 = *plStack_f0;
    do {
      if (*plStack_f0 != lVar3) {
        _objc_enumerationMutation(uVar2);
      }
      uVar1 = uVar1 - 1;
    } while ((uVar1 != 0) ||
            (uVar1 = uVar2, func_0x00010bf52a60(uVar2,param_2,&uStack_100,auStack_b8,0x10),
            uVar1 != 0));
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar2;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar2 + 0xc);
}



/* Entry: 10af84c2c; end: 10af84c33; -[SCStateMachine assertUnhandledEvents] */

undefined1 FUN_10af84c2c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10af84c34; end: 10af84c3b; -[SCStateMachine setAssertUnhandledEvents:] */

void FUN_10af84c34(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10af84c3c; end: 10af84c43; -[SCStateMachine reentryEnabled] */

undefined1 FUN_10af84c3c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10af84c44; end: 10af84c4b; -[SCStateMachine setReentryEnabled:] */

void FUN_10af84c44(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xd) = param_3;
  return;
}



/* Entry: 10af84c4c; end: 10af84c53; -[SCStateMachine initialState] */

undefined8 FUN_10af84c4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af84c54; end: 10af84c5b; -[SCStateMachine name] */

undefined8 FUN_10af84c54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af84c5c; end: 10af84c63; -[SCStateMachine transitionTable] */

undefined8 FUN_10af84c5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af84c64; end: 10af84c93; -[SCStateMachine .cxx_destruct] */

void FUN_10af84c64(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10af84c94; end: 10af84d17; +[SCStateMachineToUMLConverter convertStateMachineToUML:nameProvider:] */

void FUN_10af84c94(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x00010bde9540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f3e4b8;
  func_0x00010c25cde0(&PTR____CFConstantStringClassReference_110f3e4b8,param_2,
                      &PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  ppuVar2 = ppuVar1;
  func_0x00010c25ce40(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110f3e4d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10af84d18; end: 10af85387; +[SCStateMachineToUMLConverter _convertStateMachineToUML:nameProvider:] */

undefined ** FUN_10af84d18(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lStack_228;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c064480(param_3);
  puVar3 = param_4;
  func_0x00010c0d50a0(param_4,param_2,lVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c25cde0(&PTR____CFConstantStringClassReference_110daafd8,param_2,
                      &PTR____CFConstantStringClassReference_110f3e4f8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar2 = param_3;
  func_0x00010c27aac0();
  _objc_retainAutoreleasedReturnValue();
  lStack_228 = lVar2;
  func_0x00010bf52a60();
  if (lStack_228 != 0) {
    lVar11 = *plStack_1a0;
    do {
      lVar13 = 0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(lVar2);
        }
        uVar14 = *(undefined8 *)(lStack_1a8 + lVar13 * 8);
        lVar12 = param_3;
        func_0x00010c27aac0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar12;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        _objc_retain(lVar5);
        lStack_1f8 = lVar5;
        func_0x00010bf52a60(lVar5,param_2,&uStack_1f0,auStack_170,0x10);
        if (lStack_1f8 != 0) {
          lVar12 = *plStack_1e0;
          do {
            lVar15 = 0;
            do {
              if (*plStack_1e0 != lVar12) {
                _objc_enumerationMutation(lVar5);
              }
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              uVar16 = *(undefined8 *)(lStack_1e8 + lVar15 * 8);
              uVar6 = uVar16;
              func_0x00010bfbb000(uVar16);
              func_0x00010c0df780(puVar3,param_2,uVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar1;
              func_0x00010bf4b900(puVar1,param_2,puVar3);
              if (((ulong)puVar7 & 1) == 0) {
                uVar6 = uVar16;
                func_0x00010bfbb000(uVar16);
                puVar7 = param_4;
                func_0x00010c2526a0(param_4,param_2,uVar6,param_3);
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(puVar3);
                puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                ppuVar8 = ppuVar4;
                if (puVar7 != (undefined *)0x0) {
                  uVar6 = uVar16;
                  func_0x00010bfbb000(uVar16);
                  func_0x00010c0df780(puVar3,param_2,uVar6);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar1,param_2,puVar3);
                  _objc_release(puVar3);
                  uVar6 = uVar16;
                  func_0x00010bfbb000(uVar16);
                  puVar3 = param_4;
                  func_0x00010c2526a0(param_4,param_2,uVar6,param_3);
                  _objc_retainAutoreleasedReturnValue();
                  uVar6 = uVar16;
                  func_0x00010bfbb000(uVar16);
                  puVar7 = param_4;
                  func_0x00010c0d50a0(param_4,param_2,uVar6,param_3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c25cde0(ppuVar4,param_2,
                                      &PTR____CFConstantStringClassReference_110f3e518);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar4);
                  _objc_release(puVar7);
                  uVar6 = param_1;
                  func_0x00010bde9540(param_1,param_2,puVar3,param_4);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar9 = ppuVar8;
                  func_0x00010c25cde0(ppuVar8,param_2,
                                      &PTR____CFConstantStringClassReference_110dc4658);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar8);
                  _objc_release(uVar6);
                  ppuVar4 = ppuVar9;
                  func_0x00010c25ce40(ppuVar9,param_2,
                                      &PTR____CFConstantStringClassReference_110e59558);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar9);
                  goto LAB_10af85068;
                }
              }
              else {
LAB_10af85068:
                _objc_release(puVar3);
                ppuVar8 = ppuVar4;
              }
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              uVar6 = uVar16;
              func_0x00010c272340(uVar16);
              func_0x00010c0df780(puVar3,param_2,uVar6);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar1;
              func_0x00010bf4b900(puVar1,param_2,puVar3);
              if (((ulong)puVar7 & 1) == 0) {
                uVar6 = uVar16;
                func_0x00010c272340(uVar16);
                puVar7 = param_4;
                func_0x00010c2526a0(param_4,param_2,uVar6,param_3);
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(puVar3);
                if (puVar7 != (undefined *)0x0) {
                  uVar6 = uVar16;
                  func_0x00010c272340(uVar16);
                  puVar3 = param_4;
                  func_0x00010c2526a0(param_4,param_2,uVar6,param_3);
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  uVar6 = uVar16;
                  func_0x00010c272340(uVar16);
                  func_0x00010c0df780(puVar7,param_2,uVar6);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar1,param_2,puVar7);
                  _objc_release(puVar7);
                  uVar6 = uVar16;
                  func_0x00010c272340(uVar16);
                  puVar7 = param_4;
                  func_0x00010c0d50a0(param_4,param_2,uVar6,param_3);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar4 = ppuVar8;
                  func_0x00010c25cde0(ppuVar8,param_2,
                                      &PTR____CFConstantStringClassReference_110f3e518);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar8);
                  _objc_release(puVar7);
                  uVar6 = param_1;
                  func_0x00010bde9540(param_1,param_2,puVar3,param_4);
                  _objc_retainAutoreleasedReturnValue();
                  ppuVar9 = ppuVar4;
                  func_0x00010c25cde0(ppuVar4,param_2,
                                      &PTR____CFConstantStringClassReference_110db2698);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar4);
                  _objc_release(uVar6);
                  ppuVar8 = ppuVar9;
                  func_0x00010c25ce40(ppuVar9,param_2,
                                      &PTR____CFConstantStringClassReference_110e59558);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(ppuVar9);
                  goto LAB_10af85200;
                }
              }
              else {
LAB_10af85200:
                _objc_release(puVar3);
              }
              uVar6 = uVar16;
              func_0x00010bfbb000(uVar16);
              puVar3 = param_4;
              func_0x00010c0d50a0(param_4,param_2,uVar6,param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c272340(uVar16);
              puVar7 = param_4;
              func_0x00010c0d50a0(param_4,param_2,uVar16,param_3);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar14;
              func_0x00010c067fc0(uVar14);
              puVar10 = param_4;
              func_0x00010c0d5080(param_4,param_2,uVar6,param_3);
              _objc_retainAutoreleasedReturnValue();
              ppuVar4 = ppuVar8;
              func_0x00010c25cde0(ppuVar8,param_2,&PTR____CFConstantStringClassReference_110f3e538);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar8);
              _objc_release(puVar10);
              _objc_release(puVar7);
              _objc_release(puVar3);
              lVar15 = lVar15 + 1;
            } while (lStack_1f8 != lVar15);
            lStack_1f8 = lVar5;
            func_0x00010bf52a60(lVar5,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lStack_1f8 != 0);
        }
        _objc_release(lVar5);
        _objc_release(lVar5);
        lVar13 = lVar13 + 1;
      } while (lVar13 != lStack_228);
      lStack_228 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lStack_228 != 0);
  }
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
    return ppuVar4;
  }
  ___stack_chk_fail();
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  lVar2 = param_3;
  func_0x00010c0cca80();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010c0dea80();
  _objc_release(lVar2);
  _objc_release(param_3);
  return (undefined **)(ulong)(lVar11 == 3);
}



/* Entry: 10af85388; end: 10af853eb; -[SCStateMachineTransition canHandleData] */

bool FUN_10af85388(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cca80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dea80();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 == 3;
}



/* Entry: 10af853ec; end: 10af853f3; -[SCStateMachineTransition .cxx_destruct] */

void FUN_10af853ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x28);
  return;
}



/* Entry: 10af853f4; end: 10af8559f;  */

void FUN_10af853f4(double param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = param_2;
  func_0x00010bf9a060();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    func_0x00010c1d0640(puVar1,param_3,&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110dd1b78);
  }
  else {
    uVar3 = param_2;
    func_0x00010bf9a060(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_3,uVar3,&PTR____CFConstantStringClassReference_110dd1b78);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c0ccbc0();
  if (uVar2 < 4) {
    func_0x00010c1d0640(puVar1,param_3,(&PTR_PTR_110c9b6f8)[uVar2],
                        &PTR____CFConstantStringClassReference_110e10118);
  }
  uVar2 = param_2;
  func_0x00010c0ccbe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,uVar2,&PTR____CFConstantStringClassReference_110f3e558);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c0f3900(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,uVar2,&PTR____CFConstantStringClassReference_110de1858);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c27d080(param_2);
  func_0x00010c0df7c0(puVar4,param_3,(long)param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_3,puVar4,&PTR____CFConstantStringClassReference_110e02378);
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar1,param_3,&PTR____CFConstantStringClassReference_110f3e598,
                      &PTR____CFConstantStringClassReference_110f3e578);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10af855a0; end: 10af8571f; -[SCPerfLogger _metricValuesToProtoDict:] */

void FUN_10af855a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ded68;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0(puVar1,param_2,lVar2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(undefined8 *)(lStack_128 + lVar11 * 8);
        lVar3 = param_3;
        func_0x00010c0dff20(param_3,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf6e340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        func_0x00010c191020(puVar1,param_2,uVar9);
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_3;
      puVar8 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126ded70;
    _objc_retain(puVar8);
    _objc_alloc_init(puVar1);
    puVar5 = (undefined1 *)puVar8;
    func_0x00010bf9a060(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c197940(puVar1,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = (undefined1 *)puVar8;
    func_0x00010c0ccbe0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be603c0(param_3,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c7740(puVar1,param_2,param_3);
    _objc_release(param_3);
    _objc_release(puVar5);
    puVar6 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf60700();
    func_0x00010c215e40(puVar1,param_2,(long)puVar7 / 1000);
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar5 = (undefined1 *)puVar8;
    func_0x00010c0f3900(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c00c560(puVar6,param_2,puVar5);
    func_0x00010c1d8f80(puVar1,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af85720; end: 10af85877; -[SCPerfLogger _metricTransform:] */

void FUN_10af85720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ded70;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010bf9a060(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c197940(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0ccbe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be603c0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7740(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf60700();
  func_0x00010c215e40(puVar1,param_2,(long)puVar4 / 1000);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = param_3;
  func_0x00010c0f3900(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c00c560(puVar3,param_2,uVar2);
  func_0x00010c1d8f80(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af85878; end: 10af859a3; -[SCPerfLogger logMetric:] */

void FUN_10af85878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c081620();
  _objc_release(puVar1);
  if ((int)puVar2 != 0) {
    uVar3 = param_3;
    FUN_10af853f4(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_48 = (undefined *)0x0;
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,uVar3,2,&puStack_48)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_48;
    _objc_retain(puStack_48);
    if ((puVar1 == (undefined *)0x0) && (puVar2 != (undefined *)0x0)) {
      puVar4 = PTR_PTR_1126ded78;
      func_0x00010c22bda0(PTR_PTR_1126ded78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be603a0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aa440(puVar4,param_2,param_1);
      _objc_release(param_1);
      puVar1 = puVar2;
      puVar2 = puVar4;
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10af859a4; end: 10af85a63; -[SCPerfMetric initWithEventName:metricType:value:] */

undefined *
FUN_10af859a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  if (param_4 < 4) {
    func_0x00010c1d0640(puVar1,param_2,param_5,(&PTR_PTR_110c9b738)[param_4]);
  }
  puVar2 = PTR_PTR_1126b15f8;
  _objc_alloc(PTR_PTR_1126b15f8);
  func_0x00010c010c60();
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 10af85a64; end: 10af85b0f; -[SCPerfMetric initWithEventName:metricType:metricValue:] */

undefined *
FUN_10af85a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b15f8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010c010c80(puVar1,param_2,param_3,param_4,param_5,puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 10af85b10; end: 10af85be3; -[SCPerfMetric initWithEventName:metricType:metricValue:params:] */

undefined *
FUN_10af85b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b15f8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c010ca0(puVar1,param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_1);
  return puVar1;
}



/* Entry: 10af85be4; end: 10af85cdb; -[SCPerfMetric initWithEventName:metricType:metricValue:params:ts:] */

undefined1 *
FUN_10af85be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112702ff0;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af85cdc; end: 10af85cff; -[SCPerfMetric copyWithZone:] */

undefined8 FUN_10af85cdc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af85d00; end: 10af85daf; -[SCPerfMetric hash] */

undefined8 * FUN_10af85d00(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af85e8c:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af85e98;
    puVar7 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      dVar9 = ABS(*(double *)((long)puVar3 + 0x28) - *(double *)(param_3 + 0x28));
      dVar8 = ABS(*(double *)((long)puVar3 + 0x28) + *(double *)(param_3 + 0x28)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar1 = dVar9 < dVar8;
      }
      if (((bVar1) &&
          ((lVar5 = *(long *)((long)puVar3 + 8), lVar5 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
         ((lVar5 = *(long *)((long)puVar3 + 0x18), lVar5 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        puVar7 = *(undefined1 **)((long)puVar3 + 0x20);
        if (puVar7 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10af85e98;
        }
        goto LAB_10af85e8c;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_10af85e98:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 10af85db0; end: 10af85eb3; -[SCPerfMetric isEqual:] */

long FUN_10af85db0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af85e8c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af85e98;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((bVar1) &&
          ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10af85e98;
        }
        goto LAB_10af85e8c;
      }
    }
    lVar4 = 0;
  }
LAB_10af85e98:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af85eb4; end: 10af85ebb; -[SCPerfMetric eventName] */

undefined8 FUN_10af85eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af85ebc; end: 10af85ec3; -[SCPerfMetric metricType] */

undefined8 FUN_10af85ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af85ec4; end: 10af85ecb; -[SCPerfMetric metricValue] */

undefined8 FUN_10af85ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af85ecc; end: 10af85ed3; -[SCPerfMetric params] */

undefined8 FUN_10af85ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af85ed4; end: 10af85edb; -[SCPerfMetric ts] */

undefined8 FUN_10af85ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af85edc; end: 10af85f17; -[SCPerfMetric .cxx_destruct] */

void FUN_10af85edc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af85f18; end: 10af85fd3; +[SCTracingServicesBatteryDataProducer sharedBatteryDPWithBatteryLogger:] */

void FUN_10af85f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar2 = lRam00000001137f0e98;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10af85fd4;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar3 = param_3;
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x1137f0e98,&puStack_58);
    uVar3 = uStack_38;
  }
  uVar1 = uRam00000001137f0e90;
  _objc_retain(uRam00000001137f0e90);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af85fd4; end: 10af86013;  */

void FUN_10af85fd4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ded80;
  _objc_alloc();
  func_0x00010bff75e0();
  uVar1 = puRam00000001137f0e90;
  puRam00000001137f0e90 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af86014; end: 10af860cf; -[SCTracingServicesBatteryDataProducer initWithBatteryLogger:] */

undefined1 * FUN_10af86014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702ff8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = &UNK_10f6ee7ff;
    _dispatch_queue_create(&UNK_10f6ee7ff,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR___dispatch_source_type_timer_11034be38;
    _dispatch_source_create
              (PTR___dispatch_source_type_timer_11034be38,0,0,*(undefined8 *)((long)puVar1 + 0x10));
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af860d0; end: 10af860db; -[SCTracingServicesBatteryDataProducer dataProducerName] */

undefined ** FUN_10af860d0(void)

{
  return &PTR____CFConstantStringClassReference_110f3e678;
}



/* Entry: 10af860dc; end: 10af8614f; -[SCTracingServicesBatteryDataProducer traceGpuStats] */

void FUN_10af860dc(double param_1,long param_2)

{
  undefined *puVar1;
  
  func_0x00010bfcd820(*(undefined8 *)(param_2 + 8));
  if (param_1 != -1.0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10af86150; end: 10af861df; -[SCTracingServicesBatteryDataProducer willStart] */

void FUN_10af86150(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = 0;
  _dispatch_time(0,1000000000);
  _dispatch_source_set_timer(uVar2,uVar1,1000000000,1000000000);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10af861e0;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  _dispatch_source_set_event_handler(*(undefined8 *)(param_1 + 0x18),&puStack_48);
  return;
}



/* Entry: 10af861e0; end: 10af861e7;  */

void FUN_10af861e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c277690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_traceGpuStats_11267b7c8);
  return;
}



/* Entry: 10af861e8; end: 10af8635f; -[SCTracingServicesBatteryDataProducer start] */

void FUN_10af861e8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != 0) {
    func_0x00010c06df00();
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b6ed0;
    if ((int)lVar2 == 0) {
      func_0x00010bf2b100(PTR_PTR_1126b6ed0);
    }
    else {
      func_0x00010bf2b120();
    }
    func_0x00010c277620(puVar3,param_2,&PTR____CFConstantStringClassReference_110dcfed8,puVar4);
    _objc_release(puVar3);
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c074280();
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b6ed0;
    if (iVar1 == 0) {
      func_0x00010bfcd6e0(PTR_PTR_1126b6ed0);
    }
    else {
      func_0x00010bfcd700();
    }
    func_0x00010c277620(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd0058,puVar4);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c26d100(uVar5);
    uVar6 = uVar5;
    func_0x000107c2bc24();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0e00e0(uVar6,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277620();
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_resume_11034c118)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 10af86360; end: 10af86387; -[SCTracingServicesBatteryDataProducer stop] */

void FUN_10af86360(long param_1)

{
  _dispatch_suspend(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c277690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_traceGpuStats_11267b7c8);
  return;
}



/* Entry: 10af86388; end: 10af863c3; -[SCTracingServicesBatteryDataProducer .cxx_destruct] */

void FUN_10af86388(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af863c4; end: 10af86443; -[SCTracingServicesInitialPageDataProducer initWithAttributionServices:] */

undefined1 * FUN_10af863c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703000;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf5f860();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af86444; end: 10af86447; -[SCTracingServicesInitialPageDataProducer willStart] */

void FUN_10af86444(void)

{
  return;
}



/* Entry: 10af86448; end: 10af86453; -[SCTracingServicesInitialPageDataProducer dataProducerName] */

undefined ** FUN_10af86448(void)

{
  return &PTR____CFConstantStringClassReference_110f3e698;
}



/* Entry: 10af86454; end: 10af864ff; -[SCTracingServicesInitialPageDataProducer start] */

void FUN_10af86454(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126afdd8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfcbb00(uVar1);
  func_0x00010bfc8740(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f3e6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11c9a0();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10af86500; end: 10af86503; -[SCTracingServicesInitialPageDataProducer stop] */

void FUN_10af86500(void)

{
  return;
}



/* Entry: 10af86504; end: 10af8650f; -[SCTracingServicesInitialPageDataProducer .cxx_destruct] */

void FUN_10af86504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af86510; end: 10af865fb; +[SCTracingServicesMemoryDataProducer sharedMemoryDPWithMemoryPressureState:memoryUsageReporter:] */

void FUN_10af86510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = lRam00000001137f0ea8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10af865fc;
  puStack_58 = &UNK_110841f80;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar3 = param_3;
  uVar4 = param_4;
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x1137f0ea8,&puStack_70);
    uVar3 = uStack_50;
    uVar4 = uStack_48;
  }
  uVar1 = uRam00000001137f0ea0;
  _objc_retain(uRam00000001137f0ea0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af865fc; end: 10af8663b;  */

void FUN_10af865fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ded88;
  _objc_alloc();
  func_0x00010c02b0e0();
  uVar1 = puRam00000001137f0ea0;
  puRam00000001137f0ea0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af8663c; end: 10af866eb; -[SCTracingServicesMemoryDataProducer initWithMemoryPressureState:memoryUsageReporter:] */

undefined1 *
FUN_10af8663c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703008;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af866ec; end: 10af866f7; -[SCTracingServicesMemoryDataProducer dataProducerName] */

undefined ** FUN_10af866ec(void)

{
  return &PTR____CFConstantStringClassReference_110f3e6d8;
}



/* Entry: 10af866f8; end: 10af8682f; -[SCTracingServicesMemoryDataProducer start] */

void FUN_10af866f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf5f420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf100();
  _objc_release(uVar1);
  func_0x00010c25ff60(*(undefined8 *)(param_1 + 8),param_2,&PTR___NSConcreteGlobalBlock_110c9b7d8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10af86830; end: 10af8684f;  */

void FUN_10af86830(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bf110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_matchNormal_warning_critical__11260d658,
             &PTR___NSConcreteGlobalBlock_110c9b7f8,&PTR___NSConcreteGlobalBlock_110c9b818,
             &PTR___NSConcreteGlobalBlock_110c9b838);
  return;
}



/* Entry: 10af86850; end: 10af8691b;  */

void FUN_10af86850(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af8691c; end: 10af8691f; -[SCTracingServicesMemoryDataProducer stop] */

void FUN_10af8691c(void)

{
  return;
}



/* Entry: 10af86920; end: 10af86923; -[SCTracingServicesMemoryDataProducer willStart] */

void FUN_10af86920(void)

{
  return;
}



/* Entry: 10af86924; end: 10af86953; -[SCTracingServicesMemoryDataProducer .cxx_destruct] */

void FUN_10af86924(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af86954; end: 10af869bb; -[NativeTraceSDKImpl beginSyncTrace:] */

undefined * FUN_10af86954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf18ba0();
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10af869bc; end: 10af869fb; -[NativeTraceSDKImpl endSyncTrace:] */

void FUN_10af869bc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af869fc; end: 10af86a63; -[NativeTraceSDKImpl beginAsyncTrace:] */

undefined * FUN_10af869fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10af86a64; end: 10af86aa3; -[NativeTraceSDKImpl endAsyncTrace:] */

void FUN_10af86a64(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af86aa4; end: 10af86b07; -[NativeTraceSDKImpl traceCounter:count:] */

void FUN_10af86aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c277620();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


