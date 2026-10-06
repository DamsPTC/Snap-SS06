/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fcb6c4; end: 106fcb73f; +[MLBSetContextAnimMessage descriptor] */

undefined * FUN_106fcb6c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57d30,
                        &PTR____CFConstantStringClassReference_110e95878,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7ac0,4,0x14,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9d50 = puVar1;
  }
  return puRam00000001136c9d50;
}



/* Entry: 106fcb740; end: 106fcb7a7; +[MLBSetRgbMessage descriptor] */

void FUN_106fcb740(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57d80,
                        &PTR____CFConstantStringClassReference_110e95898,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a78e0,3,0x10,0x1c);
    puRam00000001136c9d58 = puVar1;
  }
  return;
}



/* Entry: 106fcb7a8; end: 106fcb823; +[MLBSetSideEnabledMessage descriptor] */

undefined * FUN_106fcb7a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57dd0,
                        &PTR____CFConstantStringClassReference_110e958b8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7300,1,8,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9d60 = puVar1;
  }
  return puRam00000001136c9d60;
}



/* Entry: 106fcb824; end: 106fcb88b; +[MLBContextRequest descriptor] */

void FUN_106fcb824(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57e20,
                        &PTR____CFConstantStringClassReference_110e958d8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7620,2,0x10,0x1c);
    puRam00000001136c9d68 = puVar1;
  }
  return;
}



/* Entry: 106fcb88c; end: 106fcb907; +[MLBGuppyBatteryMessage descriptor] */

undefined * FUN_106fcb88c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c9d70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b57e70,
                        &PTR____CFConstantStringClassReference_110e958f8,&PTR_DAT_1131a70a8,
                        &PTR_DAT_1131a7660,2,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c9d70 = puVar1;
  }
  return puRam00000001136c9d70;
}



/* Entry: 106fcb908; end: 106fcb9df; -[SCSpectaclesNetworkChannel initWithUrl:wifiSSID:interpretNilSSIDAsUnknown:delegate:] */

undefined1 *
FUN_106fcb908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f81e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fcb9e0; end: 106fcba23; -[SCSpectaclesNetworkChannel dealloc] */

void FUN_106fcb9e0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3d9e0();
  puStack_28 = PTR_PTR_1126f81e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106fcba24; end: 106fcba63; -[SCSpectaclesNetworkChannel isOpen] */

undefined1 FUN_106fcba24(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106fcba64; end: 106fcbadf; -[SCSpectaclesNetworkChannel open] */

void FUN_106fcba64(long param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  func_0x00010beabea0(param_1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e8e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_open_112617da0);
  return;
}



/* Entry: 106fcbae0; end: 106fcbb4b; -[SCSpectaclesNetworkChannel writeData:] */

void FUN_106fcbae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  cVar1 = *(char *)(param_1 + 0x28);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (cVar1 == '\x01') {
    func_0x00010c2bda00(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fcbb4c; end: 106fcbb8b; -[SCSpectaclesNetworkChannel close] */

void FUN_106fcbb4c(long param_1)

{
  _objc_retain();
  _objc_sync_enter(param_1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bddf670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupDataChannel_112555738);
  return;
}



/* Entry: 106fcbb8c; end: 106fcbc1b; -[SCSpectaclesNetworkChannel channelDidOpen:] */

void FUN_106fcbb8c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_release(param_3);
  if (lVar1 == param_3) {
    *(undefined1 *)(param_1 + 0x28) = 1;
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf35620();
  }
  else {
    _objc_sync_exit(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fcbc1c; end: 106fcbcaf; -[SCSpectaclesNetworkChannel channel:didReadData:] */

void FUN_106fcbc1c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_release(param_3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 == param_3) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf35560();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106fcbcb0; end: 106fcbd37; -[SCSpectaclesNetworkChannel channelDidWriteData:] */

void FUN_106fcbcb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_release(param_3);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 != param_3) {
    return;
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf35640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fcbd38; end: 106fcbdf7; -[SCSpectaclesNetworkChannel channel:didError:] */

void FUN_106fcbd38(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == param_3) {
    func_0x00010c0791a0();
    *(char *)(param_1 + 0x28) = (char)lVar1;
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf35540();
  }
  else {
    _objc_sync_exit(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fcbdf8; end: 106fcbe83; -[SCSpectaclesNetworkChannel channelDidClose:] */

void FUN_106fcbdf8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_release(param_3);
  if (lVar1 == param_3) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    _objc_sync_exit(param_1);
    _objc_release(param_1);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf35600();
  }
  else {
    _objc_sync_exit(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fcbe84; end: 106fcbfc3; -[SCSpectaclesNetworkChannel _setupDataChannel] */

void FUN_106fcbe84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x25;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_1;
  func_0x00010bddf660();
  _objc_autoreleasePoolPush();
  puVar5 = PTR__OBJC_CLASS___NSStream_1126d3e68;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfe4420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c104060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar6 = 0x50;
  }
  else {
    unaff_x25 = *(undefined8 *)(param_1 + 8);
    func_0x00010c104060(unaff_x25);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = unaff_x25;
    func_0x00010c067fc0();
  }
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x00010bfcada0(puVar5,param_2,uVar3,uVar6,&uStack_58,&uStack_60);
  uVar1 = uStack_58;
  _objc_retain(uStack_58);
  uVar6 = uStack_60;
  _objc_retain(uStack_60);
  if (lVar4 != 0) {
    _objc_release(unaff_x25);
  }
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_autoreleasePoolPop(lVar2);
  puVar5 = PTR_PTR_1126d3aa8;
  _objc_alloc();
  func_0x00010c01e160();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar5;
  _objc_release(uVar3);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20),param_2,param_1);
  _objc_release(uVar6);
  _objc_release(uVar1);
  return;
}



/* Entry: 106fcbfc4; end: 106fcbffb; -[SCSpectaclesNetworkChannel _cleanupDataChannel] */

void FUN_106fcbfc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010bf3d9e0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcbffc; end: 106fcc013; -[SCSpectaclesNetworkChannel delegate] */

void FUN_106fcbffc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fcc014; end: 106fcc01f; -[SCSpectaclesNetworkChannel setDelegate:] */

void FUN_106fcc014(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 106fcc020; end: 106fcc063; -[SCSpectaclesNetworkChannel .cxx_destruct] */

void FUN_106fcc020(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fcc064; end: 106fcc0cb; -[SCSpectaclesSsidScanner setPollingInterval:] */

void FUN_106fcc064(long param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + 0x20) != param_3) {
    *(long *)(param_1 + 0x20) = param_3;
    puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_38 = 0xc2000000;
    pcStack_30 = FUN_106fcc0cc;
    puStack_28 = &UNK_110848c48;
    lStack_20 = param_1;
    lStack_18 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_40);
  }
  return;
}



/* Entry: 106fcc0cc; end: 106fcc17b;  */

/* WARNING: Possible PIC construction at 0x000106fcc15c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106fcc160) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_106fcc0cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = 0x4014000000000000;
  }
  else {
    if (lVar3 != 1) {
      if (lVar3 != 0) {
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = (undefined *)0x0;
      goto code_r0x00010c21c8a0;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = 0x3fb999999999999a;
  }
  puVar2 = PTR_PTR_1126bc890;
  func_0x00010c150380(uVar4,PTR_PTR_1126bc890,param_2,uVar1,PTR_s_forceUpdate_1125cade8,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
code_r0x00010c21c8a0:
                    /* WARNING: Could not recover jumptable at 0x00010c21c8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_setUpdateTimer__112664c50,puVar2);
  return;
}



/* Entry: 106fcc17c; end: 106fcc207; -[SCSpectaclesSsidScanner wifiConnectionStatusForDisplayName:] */

ulong FUN_106fcc17c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x00010bf601e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) {
      puVar1 = PTR_PTR_1126b6728;
      func_0x00010c083b60(PTR_PTR_1126b6728);
      uVar2 = (ulong)puVar1 & 0xffffffff;
    }
    else {
      uVar2 = 3;
    }
  }
  else {
    uVar2 = 2;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 106fcc208; end: 106fcc20f; -[SCSpectaclesSsidScanner pollingInterval] */

undefined8 FUN_106fcc208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106fcc210; end: 106fcc23f; -[SCSpectaclesSsidScanner setPerformer:] */

void FUN_106fcc210(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106fcc240; end: 106fcc247; -[SCSpectaclesSsidScanner updateTimer] */

undefined8 FUN_106fcc240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106fcc248; end: 106fcc277; -[SCSpectaclesSsidScanner setUpdateTimer:] */

void FUN_106fcc248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcc278; end: 106fcc27f; -[SCSpectaclesSsidScanner networkConnectivityMonitor] */

undefined8 FUN_106fcc278(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106fcc280; end: 106fcc2af; -[SCSpectaclesSsidScanner setNetworkConnectivityMonitor:] */

void FUN_106fcc280(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcc2b0; end: 106fcc2b7; -[SCSpectaclesSsidScanner circumstanceEngine] */

undefined8 FUN_106fcc2b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106fcc2b8; end: 106fcc2e7; -[SCSpectaclesSsidScanner setCircumstanceEngine:] */

void FUN_106fcc2b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcc2e8; end: 106fcc2ef; -[SCSpectaclesSsidScanner systemScope] */

undefined8 FUN_106fcc2e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106fcc2f0; end: 106fcc31f; -[SCSpectaclesSsidScanner setSystemScope:] */

void FUN_106fcc2f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcc320; end: 106fcc327; -[SCSpectaclesSsidScanner disposable] */

undefined8 FUN_106fcc320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106fcc328; end: 106fcc357; -[SCSpectaclesSsidScanner setDisposable:] */

void FUN_106fcc328(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcc358; end: 106fcc3cf; -[SCSpectaclesSsidScanner .cxx_destruct] */

void FUN_106fcc358(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fcc3d0; end: 106fcc3db; -[SCSpectaclesNetworkConnectivityServices .cxx_destruct] */

void FUN_106fcc3d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fcc3dc; end: 106fcc4fb; -[SCSpectaclesGenericDataChannel initWithInputStream:outputStream:label:] */

undefined1 *
FUN_106fcc3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f81f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fcc4fc; end: 106fcc553; -[SCSpectaclesGenericDataChannel open] */

void FUN_106fcc4fc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106fcc554;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_38);
  return;
}



/* Entry: 106fcc554; end: 106fcc60b;  */

void FUN_106fcc554(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x28) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  _objc_alloc();
  func_0x00010c050ac0();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x28) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),PTR_s_start_112671080);
  return;
}



/* Entry: 106fcc60c; end: 106fcc6db; -[SCSpectaclesGenericDataChannel writeData:] */

void FUN_106fcc60c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06fc80();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106fcc6dc;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
    _objc_release(uStack_38);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x28);
    if ((uVar1 != 0) && (func_0x00010c06e0e0(), (uVar1 & 1) == 0)) {
      func_0x00010c0f8ee0(param_1,param_2,PTR_s__writeData__1125368f0,
                          *(undefined8 *)(param_1 + 0x28),param_3,1);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106fcc6dc; end: 106fcc6e7;  */

void FUN_106fcc6dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2bda10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_writeData__11268d0a8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fcc6e8; end: 106fcc6ef; -[SCSpectaclesGenericDataChannel close] */

void FUN_106fcc6e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106fcc6f0; end: 106fcc717; -[SCSpectaclesGenericDataChannel _writeData:] */

void FUN_106fcc6f0(long param_1)

{
  func_0x00010bf06ae0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010beeb910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__writeDataInternal_1125987e8);
  return;
}



/* Entry: 106fcc718; end: 106fcc8a3; -[SCSpectaclesGenericDataChannel _threadMain] */

void FUN_106fcc718(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  puVar2 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010bf5fe80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10),param_2,param_1);
  uVar6 = *(undefined8 *)PTR__NSDefaultRunLoopMode_11034aa38;
  func_0x00010c14fde0(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,uVar6);
  func_0x00010c0e8e20(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,param_1);
  func_0x00010c14fde0(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,uVar6);
  func_0x00010c0e8e20(*(undefined8 *)(param_1 + 0x18));
  do {
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010c06e0e0();
    if ((uVar3 & 1) != 0) break;
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x3ff0000000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c1428e0(puVar2,param_2,uVar6,puVar4);
    _objc_release(puVar4);
  } while (((ulong)puVar5 & 1) != 0);
  func_0x00010bf3d9e0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c12c900(*(undefined8 *)(param_1 + 0x10),param_2,puVar2,uVar6);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10),param_2,0);
  func_0x00010bf3d9e0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c12c900(*(undefined8 *)(param_1 + 0x18),param_2,puVar2,uVar6);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x18),param_2,0);
  _objc_release(puVar2);
  _objc_autoreleasePoolPop(lVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106fcc8a4;
  puStack_60 = &UNK_110842e18;
  lStack_58 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_78);
  return;
}



/* Entry: 106fcc8a4; end: 106fcc8b3;  */

void FUN_106fcc8a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcc8b4; end: 106fcc9eb; -[SCSpectaclesGenericDataChannel _readDataInternal] */

void FUN_106fcc8b4(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_10068;
  undefined8 uStack_10060;
  code *pcStack_10058;
  undefined *puStack_10050;
  long lStack_10048;
  undefined *puStack_10040;
  undefined1 auStack_10038 [65544];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_alloc_init();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010bfd4e40();
  if (iVar1 != 0) {
    do {
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00010c121160(lVar3,param_2,auStack_10038,0x10000);
      if (lVar3 < 0) {
        func_0x00010be9f0c0(param_1,param_2,*(undefined8 *)(param_1 + 0x10));
        goto LAB_106fcc9b0;
      }
      func_0x00010bf06a40(puVar2,param_2,auStack_10038,lVar3);
      uVar4 = *(ulong *)(param_1 + 0x10);
      func_0x00010bfd4e40();
    } while ((uVar4 & 1) != 0);
  }
  puVar5 = puVar2;
  func_0x00010c08fa60();
  if (puVar5 != (undefined *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puStack_10068 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_10060 = 0xc2000000;
    pcStack_10058 = FUN_106fcc9ec;
    puStack_10050 = &UNK_110841f80;
    lStack_10048 = param_1;
    _objc_retain(puVar2);
    puStack_10040 = puVar2;
    func_0x00010c0f7fc0(uVar7,param_2,&puStack_10068);
    _objc_release(puStack_10040);
  }
LAB_106fcc9b0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(puVar2 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bf35560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 106fcc9ec; end: 106fcca23;  */

void FUN_106fcc9ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf35560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106fcca24; end: 106fccb33; -[SCSpectaclesGenericDataChannel _writeDataInternal] */

void FUN_106fcca24(long param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c08fa60(*(undefined8 *)(param_1 + 8));
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      bVar3 = false;
      do {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
        func_0x00010bfdc780();
        if (iVar1 == 0) break;
        lVar2 = *(long *)(param_1 + 0x18);
        func_0x00010bf25f00(*(undefined8 *)(param_1 + 8));
        func_0x00010c08fa60(*(undefined8 *)(param_1 + 8));
        func_0x00010c2bd840();
        if (lVar2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be9f0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_1,PTR_s__sendErrorForStream__1125855d8,*(undefined8 *)(param_1 + 0x18));
          return;
        }
        if (lVar2 != 0) {
          func_0x00010c130ce0(*(undefined8 *)(param_1 + 8));
          bVar3 = true;
        }
        lVar2 = *(long *)(param_1 + 8);
        func_0x00010c08fa60();
      } while (lVar2 != 0);
      if (bVar3) {
        func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
  return;
}



/* Entry: 106fccb34; end: 106fccb6b;  */

void FUN_106fccb34(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf35640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106fccb6c; end: 106fccc83; -[SCSpectaclesGenericDataChannel _sendErrorForStream:] */

void FUN_106fccb6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106fccbfc;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106fccc84; end: 106fccd1f; -[SCSpectaclesGenericDataChannel _areBothStreamsOpen] */

/* WARNING: Possible PIC construction at 0x000106fccc98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106fccc9c) */
/* WARNING: Removing unreachable block (ram,0x000106fcccb0) */
/* WARNING: Removing unreachable block (ram,0x000106fccca0) */

bool FUN_106fccc84(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  _objc_retain();
  lVar3 = lVar2;
  func_0x00010c25c680();
  if ((lVar3 == 2) || (lVar3 = lVar2, func_0x00010c25c680(), lVar3 == 3)) {
    bVar1 = true;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c25c680(lVar2);
    bVar1 = lVar3 == 4;
  }
  _objc_release(lVar2);
  return bVar1;
}



/* Entry: 106fccd20; end: 106fcce2f; -[SCSpectaclesGenericDataChannel stream:handleEvent:] */

void FUN_106fccd20(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (((param_4 & 1) != 0) && (lVar1 = param_1, func_0x00010bdcf260(), (int)lVar1 != 0)) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106fcce30;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_58);
  }
  if (((param_4 >> 1 & 1) != 0) && (lVar1 = param_1, func_0x00010bdcf260(), (int)lVar1 != 0)) {
    func_0x00010be86440(param_1);
  }
  if (((param_4 >> 2 & 1) != 0) && (lVar1 = param_1, func_0x00010bdcf260(), (int)lVar1 != 0)) {
    func_0x00010beeb900(param_1);
  }
  if ((param_4 >> 3 & 1) != 0) {
    func_0x00010be9f0c0(param_1,param_2,param_3);
  }
  if ((param_4 >> 4 & 1) != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x106fcceb8;
    puStack_68 = &UNK_110842e18;
    lStack_60 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_80);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106fcce30; end: 106fccf1b;  */

/* WARNING: Possible PIC construction at 0x000106fcce90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106fcce94) */

void FUN_106fcce30(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x38) & 1) != 0) {
    return;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x38) = 1;
  lVar1 = *(long *)(param_1 + 0x20) + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf35620();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0f8ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s_performSelector_onThread_withObj_11261bdd8,
             PTR_s__readDataInternal_11257f2b0,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),0,0
            );
  return;
}



/* Entry: 106fccf1c; end: 106fccf33; -[SCSpectaclesGenericDataChannel delegate] */

void FUN_106fccf1c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fccf34; end: 106fccf3f; -[SCSpectaclesGenericDataChannel setDelegate:] */

void FUN_106fccf34(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 106fccf40; end: 106fccf47; -[SCSpectaclesGenericDataChannel isOpen] */

undefined1 FUN_106fccf40(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 106fccf48; end: 106fccf4f; -[SCSpectaclesGenericDataChannel logPackets] */

undefined1 FUN_106fccf48(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}



/* Entry: 106fccf50; end: 106fccf57; -[SCSpectaclesGenericDataChannel setLogPackets:] */

void FUN_106fccf50(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x39) = param_3;
  return;
}



/* Entry: 106fccf58; end: 106fccfbf; -[SCSpectaclesGenericDataChannel .cxx_destruct] */

void FUN_106fccf58(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
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



/* Entry: 106fccfc0; end: 106fcd0bb; -[SCSpectaclesCrashReport initWithCrashDate:crashParameters:commonDescription:] */

undefined1 *
FUN_106fccfc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f8200;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fcd0bc; end: 106fcd0ef; -[SCSpectaclesCrashReport controllerTypeName] */

void FUN_106fcd0bc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf4ff20();
                    /* WARNING: Could not recover jumptable at 0x00010c25da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_stringWithUTF8String__1126750c8,(&PTR_DAT_110987360)[param_1]);
  return;
}



/* Entry: 106fcd0f0; end: 106fcd117; -[SCSpectaclesCrashReport crashDescription] */

void FUN_106fcd0f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fcd118; end: 106fcd123; -[SCSpectaclesCrashReport crashGroupingIdentifier] */

undefined ** FUN_106fcd118(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 106fcd124; end: 106fcd12f; -[SCSpectaclesCrashReport crashReason] */

undefined ** FUN_106fcd124(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 106fcd130; end: 106fcd137; -[SCSpectaclesCrashReport controllerType] */

undefined8 FUN_106fcd130(void)

{
  return 2;
}



/* Entry: 106fcd138; end: 106fcd13f; -[SCSpectaclesCrashReport crashId] */

undefined8 FUN_106fcd138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106fcd140; end: 106fcd147; -[SCSpectaclesCrashReport crashDate] */

undefined8 FUN_106fcd140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106fcd148; end: 106fcd14f; -[SCSpectaclesCrashReport setCrashDate:] */

void FUN_106fcd148(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106fcd150; end: 106fcd157; -[SCSpectaclesCrashReport crashParameters] */

undefined8 FUN_106fcd150(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106fcd158; end: 106fcd187; -[SCSpectaclesCrashReport setCrashParameters:] */

void FUN_106fcd158(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcd188; end: 106fcd18f; -[SCSpectaclesCrashReport attachmentFilePaths] */

undefined8 FUN_106fcd188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106fcd190; end: 106fcd1bf; -[SCSpectaclesCrashReport setAttachmentFilePaths:] */

void FUN_106fcd190(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106fcd1c0; end: 106fcd1c7; -[SCSpectaclesCrashReport firmwareVersion] */

undefined8 FUN_106fcd1c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106fcd1c8; end: 106fcd1f7; -[SCSpectaclesCrashReport setFirmwareVersion:] */

void FUN_106fcd1c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fcd1f8; end: 106fcd1ff; -[SCSpectaclesCrashReport skuNumber] */

undefined8 FUN_106fcd1f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106fcd200; end: 106fcd207; -[SCSpectaclesCrashReport setSkuNumber:] */

void FUN_106fcd200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106fcd208; end: 106fcd20f; -[SCSpectaclesCrashReport serialNumber] */

undefined8 FUN_106fcd208(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106fcd210; end: 106fcd217; -[SCSpectaclesCrashReport setSerialNumber:] */

void FUN_106fcd210(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106fcd218; end: 106fcd28f; -[SCSpectaclesCrashReport .cxx_destruct] */

void FUN_106fcd218(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 106fcd290; end: 106fcd33b; -[SCSpectaclesCrashAppError crashGroupingIdentifier] */

void FUN_106fcd290(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bf54020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110e8fcd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e8fcf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106fcd33c; end: 106fcd347; -[SCSpectaclesCrashAppError crashReason] */

undefined ** FUN_106fcd33c(void)

{
  return &PTR____CFConstantStringClassReference_110e17c78;
}



/* Entry: 106fcd348; end: 106fcd34f; -[SCSpectaclesCrashAppError controllerType] */

undefined8 FUN_106fcd348(void)

{
  return 1;
}



/* Entry: 106fcd350; end: 106fcd3ff; -[SCSpectaclesCrashSoftDeviceError crashGroupingIdentifier] */

void FUN_106fcd350(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bf54020();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e704f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e95998);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106fcd400; end: 106fcd40b; -[SCSpectaclesCrashSoftDeviceError crashReason] */

undefined ** FUN_106fcd400(void)

{
  return &PTR____CFConstantStringClassReference_110e17d18;
}



/* Entry: 106fcd40c; end: 106fcd413; -[SCSpectaclesCrashSoftDeviceError controllerType] */

undefined8 FUN_106fcd40c(void)

{
  return 1;
}



/* Entry: 106fcd414; end: 106fcd49b; -[SCSpectaclesCrashHardfaultError crashGroupingIdentifier] */

void FUN_106fcd414(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf54020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e959b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106fcd49c; end: 106fcd4a7; -[SCSpectaclesCrashHardfaultError crashReason] */

undefined ** FUN_106fcd49c(void)

{
  return &PTR____CFConstantStringClassReference_110e17d38;
}



/* Entry: 106fcd4a8; end: 106fcd4af; -[SCSpectaclesCrashHardfaultError controllerType] */

undefined8 FUN_106fcd4a8(void)

{
  return 1;
}



/* Entry: 106fcd4b0; end: 106fcd537; -[SCSpectaclesCrashWatchdogTimeoutError crashGroupingIdentifier] */

void FUN_106fcd4b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf54020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e959d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106fcd538; end: 106fcd543; -[SCSpectaclesCrashWatchdogTimeoutError crashReason] */

undefined ** FUN_106fcd538(void)

{
  return &PTR____CFConstantStringClassReference_110e17cf8;
}



/* Entry: 106fcd544; end: 106fcd54b; -[SCSpectaclesCrashWatchdogTimeoutError controllerType] */

undefined8 FUN_106fcd544(void)

{
  return 1;
}



/* Entry: 106fcd54c; end: 106fcd557; -[SCSpectaclesCrashAmbaUnknownError crashGroupingIdentifier] */

undefined ** FUN_106fcd54c(void)

{
  return &PTR____CFConstantStringClassReference_110e959f8;
}



/* Entry: 106fcd558; end: 106fcd563; -[SCSpectaclesCrashAmbaUnknownError crashReason] */

undefined ** FUN_106fcd558(void)

{
  return &PTR____CFConstantStringClassReference_110e17c98;
}



/* Entry: 106fcd564; end: 106fcd56b; -[SCSpectaclesCrashAmbaUnknownError controllerType] */

undefined8 FUN_106fcd564(void)

{
  return 0;
}



/* Entry: 106fcd56c; end: 106fcd5f3; -[SCSpectaclesCrashAmbaKernelError crashGroupingIdentifier] */

void FUN_106fcd56c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010bf54020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e95a18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106fcd5f4; end: 106fcd5ff; -[SCSpectaclesCrashAmbaKernelError crashReason] */

undefined ** FUN_106fcd5f4(void)

{
  return &PTR____CFConstantStringClassReference_110e17cb8;
}



/* Entry: 106fcd600; end: 106fcd607; -[SCSpectaclesCrashAmbaKernelError controllerType] */

undefined8 FUN_106fcd600(void)

{
  return 0;
}



/* Entry: 106fcd608; end: 106fcd6b3; -[SCSpectaclesCrashAmbaAssertError crashGroupingIdentifier] */

void FUN_106fcd608(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bf54020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110e8fcd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e95a38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


