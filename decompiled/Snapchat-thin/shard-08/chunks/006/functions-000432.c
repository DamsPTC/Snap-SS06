/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063fc588; end: 1063fc5db; -[SCAdCrossInventoryRuleTracker shouldEvaluate:] */

uint FUN_1063fc588(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  uVar2 = 0;
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071f40(lVar3,param_2,puVar1);
    uVar2 = (uint)lVar3 ^ 1;
    _objc_release(puVar1);
  }
  return uVar2;
}



/* Entry: 1063fc5dc; end: 1063fc5e3; -[SCAdCrossInventoryRuleTracker storiesViewed] */

undefined8 FUN_1063fc5dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1063fc5e4; end: 1063fc5eb; -[SCAdCrossInventoryRuleTracker snapsViewed] */

undefined8 FUN_1063fc5e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1063fc5ec; end: 1063fc617; -[SCAdCrossInventoryRuleTracker timeViewedSeconds] */

void FUN_1063fc5ec(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010bfc1ec0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010c0cd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_millisToSeconds__112610f38);
  return;
}



/* Entry: 1063fc618; end: 1063fc7f3; -[SCAdCrossInventoryRuleTracker _startViewingItemFromEvent:page:] */

undefined8
FUN_1063fc618(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b2340;
  if ((int)puVar2 == 0) {
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b2340;
    if ((int)puVar2 == 0) {
      puVar3 = PTR_PTR_1126b2338;
      func_0x00010c0c6900(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar3);
LAB_1063fc7b4:
      _objc_release(puVar3);
      if (((ulong)puVar2 & 1) == 0) goto LAB_1063fc7c8;
    }
    else {
      puVar3 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075040(puVar1,param_2,puVar3);
      puVar2 = PTR_PTR_1126ca2b0;
      if ((int)puVar1 == 0) {
        puVar1 = param_4;
        func_0x00010c118b40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06eec0(puVar2,param_2,puVar1);
        _objc_release(puVar1);
        goto LAB_1063fc7b4;
      }
      _objc_release(puVar3);
    }
    uVar4 = 1;
  }
  else {
    puVar2 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c079440(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2340;
    puVar3 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076c60(puVar2,param_2,puVar3);
    _objc_release(puVar3);
    uVar4 = 1;
    if ((((ulong)puVar2 & 1) != 0) || (((ulong)puVar1 & 1) != 0)) goto LAB_1063fc7cc;
LAB_1063fc7c8:
    uVar4 = 0;
  }
LAB_1063fc7cc:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1063fc7f4; end: 1063fc803; -[SCAdCrossInventoryRuleTracker _incrementStoriesViewed] */

void FUN_1063fc7f4(long param_1)

{
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
  return;
}



/* Entry: 1063fc804; end: 1063fc813; -[SCAdCrossInventoryRuleTracker _incrementSnapsViewed] */

void FUN_1063fc804(long param_1)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  return;
}



/* Entry: 1063fc814; end: 1063fc81b; -[SCAdCrossInventoryRuleTracker _startSessionAdTimer] */

void FUN_1063fc814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_start_112671080);
  return;
}



/* Entry: 1063fc81c; end: 1063fc823; -[SCAdCrossInventoryRuleTracker _stopSessionAdTimer] */

void FUN_1063fc81c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c255790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_stop_112673008);
  return;
}



/* Entry: 1063fc824; end: 1063fc82f; -[SCAdCrossInventoryRuleTracker _reset] */

void FUN_1063fc824(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1063fc830; end: 1063fc847; -[SCAdCrossInventoryRuleTracker playlistItemController] */

void FUN_1063fc830(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063fc848; end: 1063fc853; -[SCAdCrossInventoryRuleTracker setPlaylistItemController:] */

void FUN_1063fc848(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1063fc854; end: 1063fc86b; -[SCAdCrossInventoryRuleTracker operaControlling] */

void FUN_1063fc854(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063fc86c; end: 1063fc877; -[SCAdCrossInventoryRuleTracker setOperaControlling:] */

void FUN_1063fc86c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 1063fc878; end: 1063fc8cf; -[SCAdCrossInventoryRuleTracker .cxx_destruct] */

void FUN_1063fc878(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1063fc8d0; end: 1063fc8db;  */

void FUN_1063fc8d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForKey__1125a56c8,
             &PTR____CFConstantStringClassReference_110e4e0f8);
  return;
}



/* Entry: 1063fc8dc; end: 1063fcaa3;  */

ulong FUN_1063fc8dc(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126b5bc0;
  uVar2 = param_1;
  if ((uVar3 & 1) == 0) {
    puVar1 = PTR_PTR_1126c9870;
    _objc_opt_class(PTR_PTR_1126c9870);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    puVar1 = PTR_PTR_1126c9870;
    if ((uVar3 & 1) != 0) goto LAB_1063fc93c;
    puVar1 = PTR_PTR_1126c9a80;
    _objc_opt_class(PTR_PTR_1126c9a80);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    puVar1 = PTR_PTR_1126c9a80;
    if ((uVar3 & 1) == 0) {
      uVar3 = 0;
      goto LAB_1063fc984;
    }
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0bebc0(uVar2);
    uVar3 = puStack_48[3];
    __Block_object_dispose(&uStack_50,8);
  }
  else {
LAB_1063fc93c:
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x00010bfbe4e0(uVar2);
  }
  _objc_release(uVar2);
LAB_1063fc984:
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 1063fcaa4; end: 1063fcb03;  */

void FUN_1063fcaa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bfbe4e0();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_4;
  return;
}



/* Entry: 1063fcb04; end: 1063fcbcf;  */

ulong FUN_1063fcb04(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126b5bc0;
  if ((uVar2 & 1) != 0) {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x00010bf829c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    if (uVar3 == 0) {
      uVar2 = 0;
      goto LAB_1063fcbac;
    }
  }
  uVar3 = param_1;
  FUN_1063fc8dc();
  uVar2 = 2;
  if (uVar3 != 0) {
    uVar2 = uVar3;
  }
LAB_1063fcbac:
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1063fcbd0; end: 1063fd367;  */

bool FUN_1063fcbd0(ulong param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b5bc0;
  _objc_opt_class(PTR_PTR_1126b5bc0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  puVar2 = PTR_PTR_1126b5bc0;
  uVar5 = param_2;
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR_PTR_1126c9870;
    _objc_opt_class(PTR_PTR_1126c9870);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    puVar2 = PTR_PTR_1126c9870;
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR_PTR_1126c9a80;
      _objc_opt_class(PTR_PTR_1126c9a80);
      uVar3 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar2);
      puVar2 = PTR_PTR_1126c9a80;
      bVar6 = true;
      if ((uVar3 & 1) == 0) goto LAB_1063fcf0c;
      _objc_retain(param_2);
      _objc_opt_class(puVar2);
      uVar3 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar2);
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(param_2);
      uVar3 = uVar5;
      FUN_1063fcb04();
      uVar4 = param_1;
      func_0x00010bf21060();
      bVar6 = uVar3 < 2;
      if (uVar4 != 3) {
        bVar6 = uVar3 < 4;
      }
      bVar1 = uVar3 < 3;
      if (uVar4 != 2) {
        bVar1 = bVar6;
      }
      bVar6 = uVar3 < 4;
      if (1 < uVar4) {
        bVar6 = bVar1;
      }
      uVar3 = uVar5;
      FUN_10640a74c(uVar5);
      _objc_retainAutoreleasedReturnValue();
      FUN_1063fc8dc(uVar5);
      func_0x00010c0a04a0(param_3);
    }
    else {
      _objc_retain(param_2);
      _objc_opt_class(puVar2);
      uVar3 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar2);
      if ((uVar3 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(param_2);
      uVar3 = uVar5;
      FUN_1063fcb04();
      uVar4 = param_1;
      func_0x00010bf21060();
      bVar6 = uVar3 < 2;
      if (uVar4 != 3) {
        bVar6 = uVar3 < 4;
      }
      bVar1 = uVar3 < 3;
      if (uVar4 != 2) {
        bVar1 = bVar6;
      }
      bVar6 = uVar3 < 4;
      if (1 < uVar4) {
        bVar6 = bVar1;
      }
      uVar3 = uVar5;
      func_0x00010bfe5ec0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      FUN_1063fc8dc(uVar5);
      func_0x00010c0a04a0(param_3);
    }
  }
  else {
    _objc_retain(param_2);
    _objc_opt_class(puVar2);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(param_2);
    uVar3 = uVar5;
    FUN_1063fcb04();
    uVar4 = param_1;
    func_0x00010bf21060();
    bVar6 = uVar3 < 2;
    if (uVar4 != 3) {
      bVar6 = uVar3 < 4;
    }
    bVar1 = uVar3 < 3;
    if (uVar4 != 2) {
      bVar1 = bVar6;
    }
    bVar6 = uVar3 < 4;
    if (1 < uVar4) {
      bVar6 = bVar1;
    }
    uVar3 = uVar5;
    func_0x00010c15f2e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010bf0e700(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108532b98();
    FUN_1063fc8dc(uVar5);
    func_0x00010bf20ec0(uVar5);
    func_0x00010c0a04a0(param_3);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar5);
LAB_1063fcf0c:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return bVar6;
}



/* Entry: 1063fd368; end: 1063fd407;  */

long FUN_1063fd368(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 == 0 && param_2 == 0) {
    lVar2 = 0;
  }
  else if (param_1 == 0) {
    lVar2 = param_2;
    FUN_1063fcb04(param_2);
  }
  else {
    lVar2 = param_1;
    FUN_1063fcb04();
    if ((param_2 != 0) && (lVar1 = param_2, FUN_1063fcb04(), lVar2 <= lVar1)) {
      lVar2 = lVar1;
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1063fd408; end: 1063fd90b;  */

bool FUN_1063fd408(double param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  
  dVar5 = param_1;
  _objc_retain();
  lVar2 = param_2;
  func_0x00010c0cdb80();
  lVar3 = param_2;
  func_0x00010c0cdae0(param_2);
  func_0x00010c0cdcc0(param_2);
  lVar4 = param_2;
  func_0x00010bf48240();
  _objc_release(param_2);
  bVar1 = dVar5 <= param_1 || (lVar2 <= param_3 || lVar3 <= param_4);
  if ((int)lVar4 != 0) {
    bVar1 = dVar5 <= param_1 && (lVar2 <= param_3 && lVar3 <= param_4);
  }
  return bVar1;
}



/* Entry: 1063fd90c; end: 1063fdab3;  */

byte FUN_1063fd90c(double param_1,double param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = param_1;
  _objc_retain();
  lVar3 = param_3;
  func_0x00010c0cdae0(param_3);
  func_0x00010c0cdcc0(param_3);
  lVar4 = param_3;
  dVar6 = dVar5;
  func_0x00010bf48240();
  bVar1 = dVar5 <= param_1 || lVar3 <= param_4;
  if ((int)lVar4 != 0) {
    bVar1 = dVar5 <= param_1 && lVar3 <= param_4;
  }
  lVar3 = param_3;
  func_0x00010c0cda80(param_3);
  func_0x00010c0cdc60(param_3);
  lVar4 = param_3;
  func_0x00010bf481e0();
  bVar2 = dVar6 <= param_2 || lVar3 <= param_5;
  if ((int)lVar4 != 0) {
    bVar2 = dVar6 <= param_2 && lVar3 <= param_5;
  }
  _objc_release(param_3);
  return bVar1 & bVar2;
}



/* Entry: 1063fdab4; end: 1063fdb37;  */

bool FUN_1063fdab4(double param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  dVar4 = param_1;
  _objc_retain();
  lVar2 = param_2;
  func_0x00010c0cdac0(param_2);
  func_0x00010c0cdc80(param_2);
  lVar3 = param_2;
  func_0x00010bf48220();
  _objc_release(param_2);
  bVar1 = dVar4 <= param_1 || lVar2 <= param_3;
  if ((int)lVar3 != 0) {
    bVar1 = dVar4 <= param_1 && lVar2 <= param_3;
  }
  return bVar1;
}



/* Entry: 1063fdb38; end: 1063fdc0f; -[SCAdMidrollTriggerPoint initWithTriggeringRadius:identifier:index:isDynamicInsertionTriggerPoint:adConfigProvider:] */

undefined1 *
FUN_1063fdb38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f1230;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
    *(undefined8 *)((long)puVar1 + 0x48) = param_2;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    *(undefined1 *)((long)puVar1 + 0x11) = param_7;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1063fdc10; end: 1063fdef3; -[SCAdMidrollTriggerPoint shouldTriggerForPlaybackInfo:] */

undefined8 FUN_1063fdc10(double param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf9a340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c9d08;
  func_0x00010befdf80(PTR_PTR_1126c9d08);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0720c0(lVar1,param_3,puVar2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar1 = param_4;
    func_0x00010c2a2680();
    if ((int)lVar1 != 0) {
      func_0x00010bf95340(param_4);
      dVar9 = param_1;
      func_0x00010c250780(param_4);
      dVar8 = dVar9;
      func_0x00010c250780(param_4);
      puVar2 = param_2;
      puVar4 = param_2;
      if (dVar9 <= param_1) {
        func_0x00010bde17a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf95340(param_4);
        func_0x00010bde17c0();
        _objc_retainAutoreleasedReturnValue();
        if ((puVar2 != (undefined *)0x0) && (puVar4 != (undefined *)0x0)) {
          puVar5 = puVar2;
          func_0x00010bfec9e0();
          puVar6 = puVar4;
          func_0x00010bfec9e0();
          if (((long)puVar5 <= (long)puVar6) && (puVar4 == param_2)) {
            puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
            func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c26f320();
            dVar9 = dVar8 - *(double *)(param_2 + 0x18);
            _objc_release(puVar5);
            _objc_release(puVar4);
            goto LAB_1063fde24;
          }
        }
      }
      else {
        func_0x00010bde17c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf95340(param_4);
        func_0x00010bde17a0();
        _objc_retainAutoreleasedReturnValue();
        if ((puVar2 != (undefined *)0x0) && (puVar4 != (undefined *)0x0)) {
          puVar5 = puVar4;
          func_0x00010bfec9e0();
          puVar6 = puVar2;
          func_0x00010bfec9e0();
          if (((long)puVar5 <= (long)puVar6) && (puVar4 == param_2)) {
            lVar1 = param_4;
            func_0x00010bf50080();
            _objc_release(puVar4);
            _objc_release(puVar2);
            if (lVar1 != 2) goto LAB_1063fde8c;
            goto LAB_1063fde38;
          }
        }
      }
      _objc_release(puVar4);
LAB_1063fde9c:
      uVar7 = 0;
LAB_1063fdea0:
      _objc_release(puVar2);
      goto LAB_1063fdea8;
    }
    if ((*(double *)(param_2 + 0x40) != 0.0) && (dVar9 = *(double *)(param_2 + 0x48), dVar9 != 0.0))
    {
      func_0x00010bf5fa40(param_4);
      dVar9 = ABS(dVar9 - *(double *)(param_2 + 0x40));
      if (dVar9 < *(double *)(param_2 + 0x48)) {
        puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        dVar9 = dVar9 - *(double *)(param_2 + 0x18);
LAB_1063fde24:
        _objc_release(puVar2);
        dVar8 = 1.0;
        if (1.0 <= dVar9) {
LAB_1063fde38:
          if (param_2[0x11] == '\x01') {
            puVar2 = param_2 + 0x38;
            _objc_loadWeakRetained();
            puVar4 = puVar2;
            func_0x00010c234f40();
            _objc_release(puVar2);
            if ((int)puVar4 == 0) goto LAB_1063fde8c;
          }
          if (param_2[0x10] == '\x01') {
            puVar2 = param_2 + 0x38;
            _objc_loadWeakRetained(puVar2);
            func_0x00010bf7dc00();
            goto LAB_1063fde9c;
          }
          puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
          func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          *(double *)(param_2 + 0x18) = dVar8;
          uVar7 = 1;
          goto LAB_1063fdea0;
        }
      }
    }
  }
LAB_1063fde8c:
  uVar7 = 0;
LAB_1063fdea8:
  _objc_release(param_4);
  return uVar7;
}



/* Entry: 1063fdef4; end: 1063fdef7; -[SCAdMidrollTriggerPoint willTriggerForPlaybackInfo:] */

void FUN_1063fdef4(void)

{
  return;
}



/* Entry: 1063fdef8; end: 1063fdefb; -[SCAdMidrollTriggerPoint didTriggerForPlaybackInfo:] */

void FUN_1063fdef8(void)

{
  return;
}



/* Entry: 1063fdefc; end: 1063fdf23; -[SCAdMidrollTriggerPoint triggerPointID] */

void FUN_1063fdefc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1063fdf24; end: 1063fe06b; -[SCAdMidrollTriggerPoint updateTriggerPointList:] */

void FUN_1063fdf24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar5 = 0xe0;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
  func_0x00010c2a2b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      func_0x00010befaaa0(puVar2,param_2,*(undefined8 *)(lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_3;
    uVar5 = 0xe0;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  uVar7 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar4;
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(param_3 + 0x10) = uVar5;
  return;
}



/* Entry: 1063fe06c; end: 1063fe073; -[SCAdMidrollTriggerPoint updateIsNoFill:] */

void FUN_1063fe06c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1063fe074; end: 1063fe153; -[SCAdMidrollTriggerPoint _closestTriggerPointPriorToTimestamp:] */

void FUN_1063fe074(double param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  
  lVar2 = *(long *)(param_2 + 8);
  dVar7 = param_1;
  func_0x00010bf529e0();
  if (lVar2 + -1 < 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      lVar2 = lVar2 + -1;
      uVar3 = *(ulong *)(param_2 + 8);
      func_0x00010c102e00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ca538;
      _objc_opt_class(PTR_PTR_1126ca538);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar1 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar3);
      if (uVar6 == 0) {
        func_0x00010c27c480(uVar1);
        if (dVar7 <= param_1) {
          _objc_retain(uVar1);
          uVar6 = uVar1;
        }
        else {
          uVar6 = 0;
        }
      }
      _objc_release(uVar1);
    } while (0 < lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1063fe154; end: 1063fe2af; -[SCAdMidrollTriggerPoint _closestTriggerPointNextToTimestamp:] */

ulong FUN_1063fe154(long param_1)

{
  bool bVar1;
  double dVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 in_b0;
  undefined1 uVar13;
  undefined1 in_register_00005001;
  undefined1 uVar14;
  undefined1 in_register_00005002;
  undefined1 uVar15;
  undefined1 in_register_00005003;
  undefined1 uVar16;
  undefined1 in_register_00005004;
  undefined1 uVar17;
  undefined1 in_register_00005005;
  undefined1 uVar18;
  undefined1 in_register_00005006;
  undefined1 uVar19;
  undefined1 in_register_00005007;
  undefined1 uVar20;
  
  dVar2 = (double)CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  lVar9 = *(long *)(param_1 + 8);
  _objc_retain(lVar9);
  lVar5 = lVar9;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar9);
      }
      puVar6 = PTR_PTR_1126ca538;
      uVar11 = *(ulong *)(lVar12 * 8);
      _objc_retain(uVar11);
      _objc_opt_class(puVar6);
      uVar7 = uVar11;
      _objc_opt_isKindOfClass(uVar11,puVar6);
      uVar10 = uVar11;
      if ((uVar7 & 1) == 0) {
        uVar10 = 0;
      }
      _objc_retain(uVar10);
      _objc_release(uVar11);
      func_0x00010c27c480(uVar10);
      bVar4 = false;
      bVar1 = NAN((double)CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(
                                                  uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)))))
                                                  )));
      if (!bVar1 && !NAN(dVar2)) {
        bVar4 = (double)CONCAT17(uVar20,CONCAT16(uVar19,CONCAT15(uVar18,CONCAT14(uVar17,CONCAT13(
                                                  uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13)))))
                                                )) < dVar2;
      }
      if (bVar4 == (bVar1 || NAN(dVar2))) goto LAB_1063fe268;
      _objc_release(uVar10);
      lVar12 = lVar12 + 1;
    } while (lVar5 != lVar12);
    lVar5 = lVar9;
    func_0x00010bf52a60();
  }
  uVar10 = 0;
LAB_1063fe268:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return uVar10;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar9 + 0x28);
}



/* Entry: 1063fe2b0; end: 1063fe2b7; -[SCAdMidrollTriggerPoint identifier] */

undefined8 FUN_1063fe2b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1063fe2b8; end: 1063fe2bf; -[SCAdMidrollTriggerPoint triggeringRadius] */

undefined1  [16] FUN_1063fe2b8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x40);
}



/* Entry: 1063fe2c0; end: 1063fe2c7; -[SCAdMidrollTriggerPoint index] */

undefined8 FUN_1063fe2c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1063fe2c8; end: 1063fe2df; -[SCAdMidrollTriggerPoint delegate] */

void FUN_1063fe2c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063fe2e0; end: 1063fe2eb; -[SCAdMidrollTriggerPoint setDelegate:] */

void FUN_1063fe2e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1063fe2ec; end: 1063fe32f; -[SCAdMidrollTriggerPoint .cxx_destruct] */

void FUN_1063fe2ec(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063fe330; end: 1063fe3eb; -[SCLongformAdInsertionRuleTracker initWithAdConfigProvider:adInsertionMetricsManaging:crossInventoryInsertionRuleTracker:] */

undefined8
FUN_1063fe330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b46f0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b46f0;
  _objc_opt_new(PTR_PTR_1126b46f0);
  func_0x00010bff1180(param_1,param_2,param_3,param_4,param_5,puVar1,puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1063fe3ec; end: 1063fe533; -[SCLongformAdInsertionRuleTracker initWithAdConfigProvider:adInsertionMetricsManaging:crossInventoryInsertionRuleTracker:timeSinceLastAdInCurrentLongform:timeSinceCurrentLongformStart:] */

undefined1 *
FUN_1063fe3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f1238;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063fe534; end: 1063fe563; -[SCLongformAdInsertionRuleTracker updateInsertionRuleConfiguration:] */

void FUN_1063fe534(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1063fe564; end: 1063fe5a3; -[SCLongformAdInsertionRuleTracker reset] */

void FUN_1063fe564(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 1063fe5a4; end: 1063fe5ab; -[SCLongformAdInsertionRuleTracker didHitNoFillAd] */

void FUN_1063fe5a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c138170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_resetAndStart_11262ba78);
  return;
}



/* Entry: 1063fe5ac; end: 1063fe687; -[SCLongformAdInsertionRuleTracker didEndViewingAdWithSnapIndex:] */

void FUN_1063fe5ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  func_0x00010c138160(*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (param_3 <= lVar3) {
      return;
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar4,*(undefined8 *)(param_1 + 0x30)
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1063fe688; end: 1063fe6ff; -[SCLongformAdInsertionRuleTracker didStartViewingLongformWithLongformId:duration:snapsCount:firstSnapIndex:] */

void FUN_1063fe688(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  *(undefined8 *)(param_2 + 0x38) = param_1;
  *(undefined8 *)(param_2 + 0x40) = param_5;
  *(undefined8 *)(param_2 + 0x48) = param_6;
  func_0x00010c138160(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063fe700; end: 1063fe993; -[SCLongformAdInsertionRuleTracker triggerPointMeetInsertionRule:triggerPointSnapIndex:isOptionalAdSlot:timestamp:adResponse:adIndexPos:] */

ulong FUN_1063fe700(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                   undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar8 = param_1;
  _objc_retain(param_7);
  uVar2 = *(ulong *)(param_2 + 0x20);
  func_0x00010c07cd60();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_2 + 0x48);
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x28));
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    dVar11 = dVar8;
    func_0x0001063fd90c(uVar6,param_5 + ~uVar2,0x7fffffffffffffff);
    uVar7 = (uint)uVar6;
  }
  else {
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x20));
    dVar9 = dVar8;
    func_0x00010c0cd860(*(undefined8 *)(param_2 + 0x50));
    uVar3 = *(ulong *)(param_2 + 0x18);
    dVar10 = dVar9;
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c067fc0();
    _objc_release(uVar3);
    func_0x00010beed820(*(undefined8 *)(param_2 + 0x20));
    dVar11 = dVar10;
    if (dVar8 < dVar9) {
      uVar7 = 0;
      dVar8 = dVar10;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x50);
      func_0x0001063fd9e0(dVar10,*(double *)(param_2 + 0x38) - param_1,uVar6,param_5 + ~uVar2);
      uVar7 = (uint)uVar6;
      dVar8 = dVar10;
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_7);
  uVar6 = uVar4;
  func_0x00010c230360();
  _objc_release(uVar4);
  uVar1 = (uint)uVar6 ^ 1;
  uVar2 = (ulong)(uVar1 & uVar7);
  if (((uVar1 & 1) == 0) && (uVar7 != 0)) {
    uVar2 = *(ulong *)(param_2 + 0x50);
    uVar6 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c245cc0();
    uVar5 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26fc20();
    FUN_1063fdab4(uVar2,uVar4);
    _objc_release(uVar5);
    _objc_release(uVar6);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240(param_7);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c245cc0();
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26fc20();
  func_0x00010c0a05c0(dVar8,dVar11,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(param_7);
  return uVar2;
}



/* Entry: 1063fe994; end: 1063fe9f3; -[SCLongformAdInsertionRuleTracker timeGapFromNextAdInSec] */

double FUN_1063fe994(double param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  double dVar3;
  
  puVar2 = (ulong *)(param_2 + 0x20);
  uVar1 = *puVar2;
  func_0x00010c07cd60();
  if ((uVar1 & 1) == 0) {
    func_0x00010c0cdcc0(*(undefined8 *)(param_2 + 0x50));
    puVar2 = (ulong *)(param_2 + 0x28);
  }
  else {
    func_0x00010c0cd860();
  }
  dVar3 = param_1;
  func_0x00010beed820(*puVar2);
  return param_1 - dVar3;
}



/* Entry: 1063fe9f4; end: 1063fea5f; -[SCLongformAdInsertionRuleTracker snapsViewedSinceLastAdForTriggerPointSnapIndex:] */

long FUN_1063fe9f4(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c07cd60();
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x48);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c067fc0();
    _objc_release(uVar2);
  }
  return param_3 + ~uVar1;
}



/* Entry: 1063fea60; end: 1063fea97; -[SCLongformAdInsertionRuleTracker timeViewedSecondsSinceLastAd] */

void FUN_1063fea60(long param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c07cd60();
  lVar1 = 0x20;
  if (iVar2 == 0) {
    lVar1 = 0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beed830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_accumulatedTime_112598fb0);
  return;
}



/* Entry: 1063fea98; end: 1063feb0f; -[SCLongformAdInsertionRuleTracker .cxx_destruct] */

void FUN_1063fea98(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 1063feb10; end: 1063feb17; -[SCAdDataSource initWithDependencies:] */

void FUN_1063feb10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c00b670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithDependencies_pendingDisp_1125e0768,param_3,0);
  return;
}



/* Entry: 1063feb18; end: 1063fee83; -[SCAdDataSource initWithDependencies:pendingDisplayAdData:] */

undefined8
FUN_1063feb18(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c22bd00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar1 == (undefined *)0x0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1063fee84;
    puStack_78 = &UNK_1109212f8;
    _objc_retain(param_3);
    puStack_70 = param_3;
    func_0x00010bf11fe0(puVar2,param_2,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_70);
    puVar1 = puVar2;
  }
  puVar2 = PTR_PTR_1126ae720;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x1063feff0;
  puStack_a0 = &UNK_110921328;
  puStack_98 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_b8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca5c0;
  _objc_alloc();
  puVar4 = param_3;
  func_0x00010bef3de0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_3;
  func_0x00010bef42e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_3;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_3;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_3;
  func_0x00010bf89440();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_3;
  func_0x00010c29d360();
  puVar10 = param_3;
  func_0x00010c0ea840();
  puVar11 = param_3;
  func_0x00010c0c4e40();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_3;
  func_0x00010bef6440();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_3;
  func_0x00010bef6420();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_3;
  func_0x00010c0c5940();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_3;
  func_0x00010c0c4740();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_3;
  func_0x00010c0f0800();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = param_3;
  func_0x00010c23dc60();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = param_3;
  func_0x00010c098e80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1a40(puVar3,param_2,puVar4,puVar5,puVar6,puVar7,puVar8,puVar9,puVar10,puVar11,
                      puVar1,puVar12,puVar13,puVar14,puVar15,puVar16,puVar17,puVar2,puVar18);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010c00b680(param_1,param_2,param_3,param_4,puVar1,puVar3);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puStack_98);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1063fee84; end: 1063ff0eb;  */

void FUN_1063fee84(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f480();
  _objc_release(uVar4);
  _objc_release(uVar2);
  ppuVar1 = &PTR_PTR_1126ca5b0;
  if ((int)uVar5 == 0) {
    ppuVar1 = &PTR_PTR_1126ca5b8;
  }
  puVar3 = *ppuVar1;
  _objc_alloc(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0feea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef25a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1181e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef2520(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef2560(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf53fa0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036be0(puVar3,param_2,uVar4,uVar5,uVar2,uVar6,uVar7,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063ff0ec; end: 1063ff5e7; -[SCAdDataSource initWithDependencies:pendingDisplayAdData:adMediaManager:adPreparationManager:] */

undefined8 *
FUN_1063ff0ec(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_108;
  undefined *puStack_100;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_100 = PTR_PTR_1126f1240;
  puVar2 = &uStack_108;
  uStack_108 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[6];
    puVar2[6] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[1];
    puVar2[1] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[10];
    puVar2[10] = param_6;
    _objc_release(uVar3);
    func_0x00010c18b5e0(puVar2[10]);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0xe];
    puVar2[0xe] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x1b];
    puVar2[0x1b] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x1c];
    puVar2[0x1c] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0xf];
    puVar2[0xf] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x10];
    puVar2[0x10] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x14];
    puVar2[0x14] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar3 = puVar2[0x11];
    puVar2[0x11] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x16];
    puVar2[0x16] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x15];
    puVar2[0x15] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x12];
    puVar2[0x12] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = puVar2[0x17];
    puVar2[0x17] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = puVar2[0x13];
    puVar2[0x13] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar3 = puVar2[0xc];
    puVar2[0xc] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[3];
    puVar2[3] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[4];
    puVar2[4] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = puVar2[5];
    puVar2[5] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b0790;
    _objc_alloc();
    puVar5 = param_3;
    func_0x00010c0d8000(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010bfcdfa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02f5a0();
    uVar3 = puVar2[0x19];
    puVar2[0x19] = puVar4;
    _objc_release(uVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    if (param_4 != 0) {
      puVar4 = PTR_PTR_1126bdb78;
      _objc_alloc(PTR_PTR_1126bdb78);
      puVar7 = puVar4;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_78 = param_4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b480(puVar4);
      func_0x00010c1da300(puVar2[10]);
      _objc_release(puVar4);
      _objc_release(puVar8);
      _objc_release(puVar7);
      uVar3 = puVar2[10];
      func_0x00010c0f7700(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = puVar2[0xf];
      lVar9 = param_4;
      func_0x00010bfe5ec0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar12);
      _objc_release(lVar9);
      _objc_release(uVar3);
      lVar10 = param_4;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar10;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar9 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar10);
          }
          uVar3 = *(undefined8 *)(lVar11 * 8);
          uVar12 = puVar2[0x16];
          func_0x00010c280580(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar12);
          _objc_release(uVar3);
          lVar11 = lVar11 + 1;
        } while (lVar9 != lVar11);
        lVar9 = lVar10;
        func_0x00010bf52a60();
      }
      _objc_release(lVar10);
      lVar9 = param_4;
      func_0x00010bfe5ec0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2[0x14]);
      func_0x00010c1d0640(puVar2[0xe]);
      _objc_release(lVar9);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar2;
  }
  ___stack_chk_fail();
  return param_3;
}



/* Entry: 1063ff5e8; end: 1063ff5eb; -[SCAdDataSource updateCachedInsertionConfigIfNeeded] */

void FUN_1063ff5e8(void)

{
  return;
}



/* Entry: 1063ff5ec; end: 1063ff9ab; -[SCAdDataSource teardown] */

void FUN_1063ff5ec(ulong param_1,undefined **param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_1;
  func_0x00010c282d20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bef4820();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar10 = 0;
    do {
      param_2 = &PTR___NSConcreteGlobalBlock_110921358;
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar11);
      }
      uVar4 = param_1;
      func_0x00010bef4820(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      uVar6 = *(ulong *)(param_1 + 0x50);
      func_0x00010c0f7700();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bef4c60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x000100504554();
      _objc_release(uVar4);
      _objc_release(uVar6);
      uVar4 = uVar2;
      func_0x00010bf4b900();
      if (((uVar4 & 1) == 0) && (uVar4 = uVar7, func_0x00010bf4b900(), (uVar4 & 1) == 0)) {
        uVar4 = param_1;
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        func_0x00010bef42e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3a240();
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(uVar4);
        uVar4 = param_1;
        func_0x00010bef4820(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0();
        _objc_release(uVar4);
        uVar4 = param_1;
        func_0x00010bef4b40(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0();
        _objc_release(uVar4);
      }
      _objc_release(uVar7);
      _objc_release(uVar5);
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
    uVar3 = uVar11;
    func_0x00010bf52a60();
  }
  _objc_release(uVar11);
  func_0x00010c138d80(param_1);
  _objc_retain(uVar2);
  uVar3 = uVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar2);
      }
      uVar10 = param_1;
      func_0x00010bf6d940(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bef42e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf26e00();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar10);
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
    uVar3 = uVar2;
    func_0x00010bf52a60();
  }
  _objc_release(uVar2);
  func_0x00010bef3680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ab80();
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 1063ff9ac; end: 1063ff9b3;  */

void FUN_1063ff9ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 1063ff9b4; end: 1063ffa3f; -[SCAdDataSource dataModelFor:] */

void FUN_1063ff9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c067280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063ffa40; end: 1063ffb27; -[SCAdDataSource insertEndCardForPrimaryGroupId:] */

long FUN_1063ffa40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
LAB_1063ffb04:
    param_1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c067200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = param_1;
      func_0x00010bef4820();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar1);
      if (lVar2 == 0) goto LAB_1063ffb04;
    }
    else {
      _objc_release(lVar1);
    }
    func_0x00010be3c3c0(param_1,param_2,param_3,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1063ffb28; end: 1063ffe33; -[SCAdDataSource _insertEndCardForPrimaryGroupId:adData:] */

long FUN_1063ffb28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = param_4;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  puVar2 = PTR_PTR_1126ca220;
  if (lVar1 == 0) {
    lVar7 = 0;
    goto LAB_1063ffe00;
  }
  lVar7 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94400(puVar2,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c1014c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar7);
  if (lVar1 == 0) {
    lVar7 = param_1;
    func_0x00010c1013e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar7;
    func_0x00010c1014c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar3 = param_1;
      func_0x00010c1013e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c101420();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010bfce400();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar7);
      if (lVar1 == 0) goto LAB_1063ffc00;
    }
    else {
      _objc_release(lVar7);
    }
    lVar7 = param_1;
    func_0x00010c067200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(lVar7);
    lVar7 = param_4;
    func_0x00010bef52c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = param_1;
    func_0x00010c067280(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ca220;
    lVar4 = lVar3;
    func_0x00010c280580(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94400(puVar5,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar7,param_2,lVar3,puVar5);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar7);
    puVar5 = PTR_PTR_1126b23e8;
    _objc_alloc(PTR_PTR_1126b23e8);
    puVar6 = PTR_PTR_1126c9a78;
    func_0x00010c101520(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ade0(puVar5,param_2,puVar2,puVar6,1,1,1);
    _objc_release(puVar6);
    func_0x00010c1013e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c066c00();
    _objc_release(param_1);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  else {
LAB_1063ffc00:
    lVar7 = 0;
  }
  _objc_release(puVar2);
LAB_1063ffe00:
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar7;
}



/* Entry: 1063ffe34; end: 1063ffebf; -[SCAdDataSource dataModelForGroup:] */

void FUN_1063ffe34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c067200(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010c0e00e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1063ffec0; end: 1063fff87; -[SCAdDataSource canResolvePlaylistItemGroupDataModel:] */

bool FUN_1063ffec0(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b8e08;
  _objc_opt_class(PTR_PTR_1126b8e08);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain(param_3);
    func_0x00010c067200(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar4 = param_1;
    func_0x00010c0dff20(param_1);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != 0;
    _objc_release();
    _objc_release(uVar3);
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1063fff88; end: 106400063; -[SCAdDataSource playlistItemGroupModelForDataModel:] */

void FUN_1063fff88(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b8e08;
  _objc_opt_class(PTR_PTR_1126b8e08);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  puVar3 = PTR_PTR_1126b23e8;
  if ((uVar1 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar3);
    uVar1 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126c9a78;
    func_0x00010c101520(PTR_PTR_1126c9a78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ade0(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106400064; end: 10640006b; -[SCAdDataSource needToPrepareMediaBeforeDisplay] */

undefined8 FUN_106400064(void)

{
  return 1;
}



/* Entry: 10640006c; end: 10640044f; -[SCAdDataSource resolvePlaylistItemGroupWithMutator:] */

void FUN_10640006c(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c067200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfce400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0e00e0(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  if (puVar4 == (undefined *)0x0) goto LAB_106400404;
  uVar2 = param_3;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfdcf80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar5 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf529e0();
    if (uVar6 == 0) {
      func_0x00010c063b80(param_1,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      puStack_138 = param_1;
    }
    else {
      puStack_138 = (undefined *)0x0;
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    puStack_138 = (undefined *)0x0;
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar7 = puVar4;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf52a60();
  if (puVar8 == (undefined *)0x0) {
    _objc_release(puVar7);
LAB_1064003cc:
    puVar14 = puVar1;
    func_0x00010bf51e00(puVar1);
    func_0x00010c13a9c0(param_3,param_2,puVar14);
  }
  else {
    puVar14 = (undefined *)0x0;
    lVar13 = *plStack_120;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(puVar7);
        }
        puVar10 = PTR_PTR_1126ca220;
        puVar15 = *(undefined **)(lStack_128 + (long)puVar12 * 8);
        if ((uVar5 & 1) == 0) {
          puVar10 = puVar15;
          func_0x00010c280580(puVar15);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar9 = puVar15;
          func_0x00010c280580(puVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf94400(puVar10,param_2,puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar9);
        }
        puVar9 = PTR_PTR_1126b23d8;
        _objc_alloc();
        puVar11 = PTR_PTR_1126c9a78;
        func_0x00010c1015e0(PTR_PTR_1126c9a78);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0558c0(puVar9,param_2,puVar11,puVar10,0);
        _objc_release(puVar11);
        func_0x00010befa120(puVar1,param_2,puVar9);
        if (puVar15 == puStack_138) {
          _objc_retain(puVar9);
          _objc_release(puVar14);
          puVar14 = puVar9;
        }
        _objc_release(puVar9);
        _objc_release(puVar10);
        puVar12 = puVar12 + 1;
      } while (puVar8 != puVar12);
      puVar8 = puVar7;
      func_0x00010bf52a60(puVar7,param_2,&uStack_130,auStack_f0,0x10);
    } while (puVar8 != (undefined *)0x0);
    _objc_release(puVar7);
    if (puVar14 == (undefined *)0x0) goto LAB_1064003cc;
    puVar7 = puVar1;
    func_0x00010bf51e00(puVar1);
    puVar8 = puVar14;
    func_0x00010bdc1720(puVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13a9e0(param_3,param_2,puVar7,puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar14);
  _objc_release(puVar1);
  _objc_release(puStack_138);
LAB_106400404:
  _objc_release(puVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106400450; end: 106400453; -[SCAdDataSource postResolvePlaylistItemGroupWithResolver:] */

void FUN_106400450(void)

{
  return;
}



/* Entry: 106400454; end: 106400457; -[SCAdDataSource loadMediaForPlaylistItemGroup:] */

void FUN_106400454(void)

{
  return;
}



/* Entry: 106400458; end: 10640089f; -[SCAdDataSource pageDataForDataModel:completion:] */

void FUN_106400458(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
    goto LAB_106400874;
  }
  puVar3 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((uVar4 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    lVar5 = param_1 + 0x40;
    _objc_loadWeakRetained();
    uVar4 = param_3;
    func_0x00010c280580(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c101420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar5);
    lVar5 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c29d360();
    lVar11 = lVar8;
    FUN_106433ea8(lVar8,param_3,lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar5);
    if ((int)lVar11 == 0) {
LAB_1064006b4:
      bVar2 = param_4 != 0;
    }
    else {
      lVar5 = param_1;
      func_0x00010be43bc0();
      if ((int)lVar5 != 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x60);
        uVar4 = param_3;
        func_0x00010c280580(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar13);
        _objc_release(uVar4);
      }
      if (lVar6 == 0) goto LAB_1064006b4;
      lVar5 = param_1 + 0x40;
      _objc_loadWeakRetained();
      lVar7 = lVar5;
      func_0x00010c0778a0();
      _objc_release(lVar5);
      bVar2 = param_4 != 0;
      if ((param_4 != 0) && ((int)lVar7 == 0)) {
        puVar3 = PTR_PTR_1126b23e0;
        _objc_alloc(PTR_PTR_1126b23e0);
        uVar4 = param_3;
        func_0x00010c280580(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_1;
        func_0x00010bef4240(param_1);
        uVar12 = uVar4;
        func_0x00010640afec(uVar4,lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c033240(puVar3);
        (**(code **)(param_4 + 0x10))(param_4,puVar3);
        _objc_release(puVar3);
        _objc_release(uVar12);
        _objc_release(uVar4);
        bVar2 = true;
      }
    }
    lVar5 = param_1;
    func_0x00010bef4ac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bef3da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bef6440();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf5ac40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c13ee00(lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010be6dba0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
    else if (bVar2) {
      uVar4 = param_3;
      func_0x00010c280580(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be6f0a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,param_1);
      _objc_release(param_1);
      _objc_release(uVar4);
    }
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar11);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  _objc_release(uVar1);
LAB_106400874:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064008a0; end: 106400a2b; -[SCAdDataSource _pageDataPreservingSingleSnapPlayerIfNeeded:forItemId:] */

void FUN_1064008a0(ulong param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be43bc0();
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x60);
    func_0x00010bf4b900();
    if ((uVar1 & 1) != 0) {
      puVar2 = param_3;
      func_0x00010c0f1980();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar2);
      if (puVar3 == (undefined *)0x0) {
        puVar2 = param_3;
        func_0x00010c0f1980(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0d3c80();
        _objc_release(puVar2);
        func_0x00010bf6d940(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        FUN_106434118();
        FUN_10642aa60(puVar3,uVar5);
        _objc_release(uVar4);
        _objc_release(uVar1);
        _objc_release(param_1);
        puVar2 = PTR_PTR_1126b23e0;
        _objc_alloc(PTR_PTR_1126b23e0);
        puVar6 = param_3;
        func_0x00010bf0d180(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c033240(puVar2);
        _objc_release(puVar6);
        _objc_release(puVar3);
        goto LAB_106400938;
      }
    }
  }
  _objc_retain(param_3);
  puVar2 = param_3;
LAB_106400938:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106400a2c; end: 106400aff; -[SCAdDataSource _isSingleSnapPlayerPreservationEnabled] */

undefined8 FUN_106400a2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  _objc_release(uVar1);
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f480();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 106400b00; end: 106401063; -[SCAdDataSource _operaPageDataForAdSnap:adResponse:adPod:dataModel:webViewAdPrefetchHints:contextSessionId:indexCookieName:] */

void FUN_106400b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298f80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ca5c8;
  _objc_alloc();
  uVar1 = param_1;
  func_0x00010bef3680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf9e9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bef3680();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0c5940();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf925a0();
  uVar14 = param_3;
  func_0x0001084c4f90(param_3,uVar9,uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar6;
  func_0x00010c10a4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06b840();
  uVar15 = param_1;
  func_0x00010bf9eb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar16 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ea840();
  uVar17 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  uVar18 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bef3de0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010bf9be80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9bec0();
  uVar22 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar22;
  func_0x00010bef3c60();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_1;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010c0ea360();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_1;
  func_0x00010c0ea260();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1f80();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = param_1;
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0ed000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d6340(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010befe040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0ea940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106401064; end: 1064011a7; -[SCAdDataSource profileInfoForItem:] */

void FUN_106401064(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bef4ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf1f480();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_1);
  uVar4 = uVar1;
  if ((int)uVar5 != 0) {
    uVar3 = uVar1;
    func_0x00010bf5b640();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      func_0x00010bf5b640(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      goto LAB_106401188;
    }
  }
  func_0x00010bf20fa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_106401188:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1064011a8; end: 106401423; -[SCAdDataSource prepareProfileIconForItem:completion:] */

void FUN_1064011a8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bef4ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c116c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (uVar2 != 0 && uVar4 != 0) {
    uVar5 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c5940();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf925a0();
    uVar12 = uVar1;
    func_0x0001084c4f90(uVar1,uVar7,uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = param_1;
    func_0x00010bef3680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5660(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c109e00(uVar6);
    _objc_release(param_1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_release(uVar12);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 106401424; end: 10640142f;  */

void FUN_106401424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010640142c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106401430; end: 10640161b; -[SCAdDataSource removeProfileIconForItem:] */

void FUN_106401430(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bef4ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c116c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (uVar2 != 0 && uVar4 != 0) {
    uVar5 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c5940();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf925a0();
    uVar12 = uVar1;
    func_0x0001084c4f90(uVar1,uVar7,uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    func_0x00010bef3680(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12dd60();
    _objc_release(uVar5);
    _objc_release(param_1);
    _objc_release(uVar12);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10640161c; end: 1064018df; -[SCAdDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_10640161c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bef4ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c116c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (uVar2 != 0) {
    uVar5 = param_1;
    func_0x00010bef3680();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0c5940();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf925a0();
    uVar15 = uVar1;
    func_0x0001084c4f90(uVar1,uVar10,uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c5660(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    _objc_retain(uVar1);
    func_0x00010c10a220(uVar6);
    _objc_release(param_1);
    _objc_release(uVar15);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(param_5);
  }
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 1064018e0; end: 106401953;  */

void FUN_1064018e0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c242040(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010640b1e0();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 0,param_3,uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106401954; end: 106401b77; -[SCAdDataSource removeMediaForItem:] */

void FUN_106401954(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf63e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bef3680();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bf6d940();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c5940();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010bf6d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bef2520();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf925a0();
    uVar12 = uVar1;
    func_0x0001084c4f90(uVar1,uVar7,uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12dc60(uVar4);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  uVar2 = param_1;
  func_0x00010c0771e0();
  if ((int)uVar2 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_106401b78;
    puStack_78 = &UNK_110841f80;
    uStack_70 = param_1;
    _objc_retain(param_3);
    uStack_68 = param_3;
    func_0x000100162d98("APPSTORE",&puStack_90);
    _objc_release(uStack_68);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106401b78; end: 106401bd3;  */

void FUN_106401b78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1013e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c101400(uVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106401bd4; end: 106401d2b; -[SCAdDataSource preparedMediaForAdSnap:] */

void FUN_106401bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c5940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf925a0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x0001084c4f90(param_3,uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bef3680(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c10a4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106401d2c; end: 106401d37; -[SCAdDataSource extraPagePropertiesForDataModel:] */

void FUN_106401d2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf71e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSDictionary_1126ae670,PTR_s_dictionary_1125ba130);
  return;
}



/* Entry: 106401d38; end: 106401e7f; -[SCAdDataSource extraTopPageBasePropertiesForDataModel:] */

void FUN_106401d38(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = param_1;
  func_0x00010bef4820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf9be80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  uVar7 = uVar6;
  func_0x00010bf9e9a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 106401e80; end: 106401f87; -[SCAdDataSource isAdContentLoopingForDataModel:] */

long FUN_106401e80(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bef4820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar4 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_1);
  lVar6 = lVar4;
  func_0x00010bef60a0();
  if (lVar6 == 5) {
    lVar5 = lVar4;
    func_0x00010c258fc0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2318c0();
    _objc_release(lVar5);
  }
  else {
    lVar6 = 1;
  }
  _objc_release(lVar4);
  _objc_release(param_3);
  return lVar6;
}



/* Entry: 106401f88; end: 106401ff7; -[SCAdDataSource didCompleteFetchingAdResponse:] */

void FUN_106401f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,uVar1);
  _objc_release(uVar1);
  func_0x00010be77500(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106401ff8; end: 1064020ef; -[SCAdDataSource _prefetchOrganicEngagementForAdResponse:] */

void FUN_106401ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126ca5d0;
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c0ed000();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c108100(puVar1,param_2,param_3,uVar4,uVar6);
  _objc_release(param_3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064020f0; end: 106402153; -[SCAdDataSource didCompleteFetchingAdPod:adResponse:] */

void FUN_1064020f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_3);
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1,param_2,param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106402154; end: 10640215b; -[SCAdDataSource adOrganicSignals] */

undefined8 FUN_106402154(void)

{
  return 0;
}



/* Entry: 10640215c; end: 106402163; -[SCAdDataSource brandSafetyInventoryType] */

undefined8 FUN_10640215c(void)

{
  return 0;
}



/* Entry: 106402164; end: 10640216b; -[SCAdDataSource upcomingStoriesContext] */

undefined8 FUN_106402164(void)

{
  return 0;
}



/* Entry: 10640216c; end: 10640216f; -[SCAdDataSource adRequestId] */

void FUN_10640216c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c3ac50(PTR__OBJC_CLASS___NSUUID_1126b0270);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106402170; end: 106402177; -[SCAdDataSource targetingParameters] */

undefined8 FUN_106402170(void)

{
  return 0;
}



/* Entry: 106402178; end: 10640217f; -[SCAdDataSource adProductType] */

undefined8 FUN_106402178(void)

{
  return 3;
}



/* Entry: 106402180; end: 106402187; -[SCAdDataSource isLongformShowAd] */

undefined8 FUN_106402180(void)

{
  return 0;
}



/* Entry: 106402188; end: 10640218f; -[SCAdDataSource shouldCachePendingAdAfterTearDown] */

undefined8 FUN_106402188(void)

{
  return 0;
}



/* Entry: 106402190; end: 10640220b; -[SCAdDataSource adsPreferences] */

void FUN_106402190(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf6d940();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef3f20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13e1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10640220c; end: 1064022d7; -[SCAdDataSource adServeLoggingContext] */

void FUN_10640220c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126afeb0;
  _objc_alloc(PTR_PTR_1126afeb0);
  uVar2 = param_1;
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0eb3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6d940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c29d360();
  func_0x000108534aa8();
  func_0x00010c04e0a0(puVar1,param_2,uVar4,uVar5,0,0);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064022d8; end: 1064022e3; -[SCAdDataSource mediaLoadContexts] */

void FUN_1064022d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSArray_1126ae530,PTR_s_array_1125a0168);
  return;
}



/* Entry: 1064022e4; end: 1064022eb; -[SCAdDataSource storyAdMediaLoadStatusSnapCount] */

undefined8 FUN_1064022e4(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 1064022ec; end: 1064022ef; -[SCAdDataSource _requiredSnapCountForAdResponse:] */

void FUN_1064022ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c258ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_storyAdMediaLoadStatusSnapCount_112673e20);
  return;
}


