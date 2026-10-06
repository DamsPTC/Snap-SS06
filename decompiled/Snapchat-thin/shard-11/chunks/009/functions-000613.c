/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bc17fc; end: 108bc182b; -[SCWeatherStickerInjectorServices .cxx_destruct] */

void FUN_108bc17fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc182c; end: 108bc1833; -[SCSnapchatStickerInjectorServices snapchatStickerInjector] */

undefined8 FUN_108bc182c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc1834; end: 108bc183b; -[SCSnapchatStickerInjectorServices snapchatStickerInjectorConfig] */

undefined8 FUN_108bc1834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc183c; end: 108bc186b; -[SCSnapchatStickerInjectorServices .cxx_destruct] */

void FUN_108bc183c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc186c; end: 108bc1937; -[SCCreativeToolsMetricsServices initWithMusicBlizzardLogger:stickerLogger:stickerBlizzardLogger:] */

undefined1 *
FUN_108bc186c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fdab8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc1938; end: 108bc193f; -[SCCreativeToolsMetricsServices musicBlizzardLogger] */

undefined8 FUN_108bc1938(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc1940; end: 108bc1947; -[SCCreativeToolsMetricsServices stickerBlizzardLogger] */

undefined8 FUN_108bc1940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc1948; end: 108bc194f; -[SCCreativeToolsMetricsServices stickerLogger] */

undefined8 FUN_108bc1948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bc1950; end: 108bc198b; -[SCCreativeToolsMetricsServices .cxx_destruct] */

void FUN_108bc1950(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc198c; end: 108bc1993; -[CTPPersistenceServices externalIdsPersistenceService] */

undefined8 FUN_108bc198c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bc1994; end: 108bc199b; -[CTPPersistenceServices searchSectionPersistenceService] */

undefined8 FUN_108bc1994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bc199c; end: 108bc19e3; -[CTPPersistenceServices .cxx_destruct] */

void FUN_108bc199c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc19e4; end: 108bc19f3;  */

undefined8 FUN_108bc19e4(void)

{
  return 0;
}



/* Entry: 108bc19f4; end: 108bc19fb; -[CTKmpStorageServices deltaForcePersistentService] */

undefined8 FUN_108bc19f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc19fc; end: 108bc1a2b; -[CTKmpStorageServices .cxx_destruct] */

void FUN_108bc19fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc1a2c; end: 108bc1a33; -[CTPNetworkServices searchClient] */

undefined8 FUN_108bc1a2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc1a34; end: 108bc1a3b; -[CTPNetworkServices feedsClient] */

undefined8 FUN_108bc1a34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bc1a3c; end: 108bc1a43; -[CTPNetworkServices forYouClient] */

undefined8 FUN_108bc1a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bc1a44; end: 108bc1a4b; -[CTPNetworkServices giphyClient] */

undefined8 FUN_108bc1a44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bc1a4c; end: 108bc1a53; -[CTPNetworkServices itemsLookupClient] */

undefined8 FUN_108bc1a4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108bc1a54; end: 108bc1a5b; -[CTPNetworkServices userDataClient] */

undefined8 FUN_108bc1a54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108bc1a5c; end: 108bc1a63; -[CTPNetworkServices customStickerClient] */

undefined8 FUN_108bc1a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108bc1a64; end: 108bc1a6b; -[CTPNetworkServices customojiClient] */

undefined8 FUN_108bc1a64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108bc1a6c; end: 108bc1afb; -[CTPNetworkServices .cxx_destruct] */

void FUN_108bc1a6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 108bc1afc; end: 108bc1b83; -[CTPNetworkSearchForYouSection initWithItems:spanCount:] */

undefined1 *
FUN_108bc1afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fdad8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc1b84; end: 108bc1ba7; -[CTPNetworkSearchForYouSection copyWithZone:] */

undefined8 FUN_108bc1b84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc1ba8; end: 108bc1c1b; -[CTPNetworkSearchForYouSection hash] */

undefined8 * FUN_108bc1ba8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108bc1ca0;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_108bc1ca0;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_108bc1ca0;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_108bc1ca0:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 108bc1c1c; end: 108bc1cbb; -[CTPNetworkSearchForYouSection isEqual:] */

long FUN_108bc1c1c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc1ca0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_108bc1ca0;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108bc1ca0;
    }
  }
  lVar3 = 1;
LAB_108bc1ca0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bc1cbc; end: 108bc1cc3; -[CTPNetworkSearchForYouSection items] */

undefined8 FUN_108bc1cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc1cc4; end: 108bc1ccb; -[CTPNetworkSearchForYouSection spanCount] */

undefined8 FUN_108bc1cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc1ccc; end: 108bc1cd7; -[CTPNetworkSearchForYouSection .cxx_destruct] */

void FUN_108bc1ccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc1cd8; end: 108bc1d5f; -[CTPNetworkSearchGiphySection initWithItems:spanCount:] */

undefined1 *
FUN_108bc1cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fdae0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc1d60; end: 108bc1d83; -[CTPNetworkSearchGiphySection copyWithZone:] */

undefined8 FUN_108bc1d60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc1d84; end: 108bc1df7; -[CTPNetworkSearchGiphySection hash] */

undefined8 * FUN_108bc1d84(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108bc1e7c;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[2] != param_3[2])) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_108bc1e7c;
    }
    puVar5 = (undefined8 *)puVar2[1];
    if (puVar5 != (undefined8 *)param_3[1]) {
      func_0x00010c071ae0();
      goto LAB_108bc1e7c;
    }
  }
  puVar5 = (undefined8 *)0x1;
LAB_108bc1e7c:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 108bc1df8; end: 108bc1e97; -[CTPNetworkSearchGiphySection isEqual:] */

long FUN_108bc1df8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc1e7c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) {
      lVar3 = 0;
      goto LAB_108bc1e7c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_108bc1e7c;
    }
  }
  lVar3 = 1;
LAB_108bc1e7c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bc1e98; end: 108bc1e9f; -[CTPNetworkSearchGiphySection items] */

undefined8 FUN_108bc1e98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc1ea0; end: 108bc1ea7; -[CTPNetworkSearchGiphySection spanCount] */

undefined8 FUN_108bc1ea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc1ea8; end: 108bc1eb3; -[CTPNetworkSearchGiphySection .cxx_destruct] */

void FUN_108bc1ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc1eb4; end: 108bc1f67; -[CTPNetworkSearchQuery initWithText:identifier:startTime:] */

undefined1 *
FUN_108bc1eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fdae8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc1f68; end: 108bc1f8b; -[CTPNetworkSearchQuery copyWithZone:] */

undefined8 FUN_108bc1f68(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc1f8c; end: 108bc200b; -[CTPNetworkSearchQuery hash] */

undefined8 * FUN_108bc1f8c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x00010bfde980();
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (undefined8 *)param_3) {
LAB_108bc209c:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108bc20a8;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) && (*(long *)((long)puVar2 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar4 = *(long *)((long)puVar2 + 8);
      if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = *(undefined1 **)((long)puVar2 + 0x18);
        if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108bc20a8;
        }
        goto LAB_108bc209c;
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_108bc20a8:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 108bc200c; end: 108bc20c3; -[CTPNetworkSearchQuery isEqual:] */

long FUN_108bc200c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bc209c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc20a8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_108bc20a8;
        }
        goto LAB_108bc209c;
      }
    }
    lVar3 = 0;
  }
LAB_108bc20a8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bc20c4; end: 108bc20cb; -[CTPNetworkSearchQuery text] */

undefined8 FUN_108bc20c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc20cc; end: 108bc20d3; -[CTPNetworkSearchQuery identifier] */

undefined8 FUN_108bc20cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc20d4; end: 108bc20db; -[CTPNetworkSearchQuery startTime] */

undefined8 FUN_108bc20d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bc20dc; end: 108bc210b; -[CTPNetworkSearchQuery .cxx_destruct] */

void FUN_108bc20dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc210c; end: 108bc21e3; -[CTPNetworkSearchResult initWithResult:query:debugHTML:] */

undefined1 *
FUN_108bc210c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fdaf0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc21e4; end: 108bc2207; -[CTPNetworkSearchResult copyWithZone:] */

undefined8 FUN_108bc21e4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc2208; end: 108bc2287; -[CTPNetworkSearchResult hash] */

undefined8 * FUN_108bc2208(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108bc2320:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108bc232c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108bc232c;
          }
          goto LAB_108bc2320;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108bc232c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108bc2288; end: 108bc2347; -[CTPNetworkSearchResult isEqual:] */

long FUN_108bc2288(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bc2320:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc232c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108bc232c;
          }
          goto LAB_108bc2320;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108bc232c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bc2348; end: 108bc234f; -[CTPNetworkSearchResult result] */

undefined8 FUN_108bc2348(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc2350; end: 108bc2357; -[CTPNetworkSearchResult query] */

undefined8 FUN_108bc2350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc2358; end: 108bc235f; -[CTPNetworkSearchResult debugHTML] */

undefined8 FUN_108bc2358(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bc2360; end: 108bc239b; -[CTPNetworkSearchResult .cxx_destruct] */

void FUN_108bc2360(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc239c; end: 108bc242b; -[CTPNetworkSearchSection initWithSection:items:spanCount:] */

undefined1 *
FUN_108bc239c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fdaf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc242c; end: 108bc244f; -[CTPNetworkSearchSection copyWithZone:] */

undefined8 FUN_108bc242c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc2450; end: 108bc24c7; -[CTPNetworkSearchSection hash] */

undefined8 * FUN_108bc2450(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar4;
  if (-1 < lVar4) {
    lStack_30 = lVar4;
  }
  uStack_38 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108bc255c;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_108bc255c;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar5 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108bc255c;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_108bc255c:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 108bc24c8; end: 108bc2577; -[CTPNetworkSearchSection isEqual:] */

long FUN_108bc24c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc255c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_108bc255c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108bc255c;
    }
  }
  lVar3 = 1;
LAB_108bc255c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bc2578; end: 108bc257f; -[CTPNetworkSearchSection section] */

undefined8 FUN_108bc2578(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc2580; end: 108bc2587; -[CTPNetworkSearchSection items] */

undefined8 FUN_108bc2580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc2588; end: 108bc258f; -[CTPNetworkSearchSection spanCount] */

undefined8 FUN_108bc2588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bc2590; end: 108bc259b; -[CTPNetworkSearchSection .cxx_destruct] */

void FUN_108bc2590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bc259c; end: 108bc266b; +[CTPNetworkResultItem cachedResultWithCachedId:clientCacheTtlMinutes:requestId:sectionName:] */

void FUN_108bc259c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126bafd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  *(undefined8 *)(puVar2 + 0x48) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bc266c; end: 108bc2743; +[CTPNetworkResultItem networkResultWithItemData:version:clientCacheTtlMinutes:requestId:sectionName:] */

void FUN_108bc266c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126bafd0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bc2744; end: 108bc2767; -[CTPNetworkResultItem copyWithZone:] */

undefined8 FUN_108bc2744(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc2768; end: 108bc2827; -[CTPNetworkResultItem hash] */

void FUN_108bc2768(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x40);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  lStack_40 = -lVar1;
  if (-1 < lVar1) {
    lStack_40 = lVar1;
  }
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfde980();
  puVar4 = &uStack_78;
  uStack_30 = uVar3;
  func_0x000107c3191c(puVar4,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_a8 = PTR_PTR_1126fdb00;
  puStack_b0 = puVar4;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bc2828; end: 108bc286b; -[CTPNetworkResultItem internalInit] */

void FUN_108bc2828(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fdb00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bc286c; end: 108bc29b3; -[CTPNetworkResultItem isEqual:] */

long FUN_108bc286c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bc298c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc2998;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x48);
              if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if (lVar3 != *(long *)(param_3 + 0x50)) {
                  func_0x00010c071ae0();
                  goto LAB_108bc2998;
                }
                goto LAB_108bc298c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108bc2998:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bc29b4; end: 108bc2a47; -[CTPNetworkResultItem matchNetworkResult:cachedResult:] */

void FUN_108bc29b4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bc2a48; end: 108bc2aa7; -[CTPNetworkResultItem .cxx_destruct] */

void FUN_108bc2a48(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bc2aa8; end: 108bc2b43; -[CTPNetworkResultSection initWithDirection:type:items:displayCount:] */

undefined1 *
FUN_108bc2aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fdb08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc2b44; end: 108bc2b67; -[CTPNetworkResultSection copyWithZone:] */

undefined8 FUN_108bc2b44(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc2b68; end: 108bc2be3; -[CTPNetworkResultSection hash] */

undefined8 * FUN_108bc2b68(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x20);
  lStack_38 = -lVar4;
  if (-1 < lVar4) {
    lStack_38 = lVar4;
  }
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_50,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar5 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108bc2c88;
    puVar5 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((*(long *)((long)puVar2 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)((long)puVar2 + 0x20) != *(long *)(param_3 + 0x20))))) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_108bc2c88;
    }
    puVar5 = *(undefined1 **)((long)puVar2 + 0x18);
    if (puVar5 != *(undefined1 **)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_108bc2c88;
    }
  }
  puVar5 = (undefined1 *)0x1;
LAB_108bc2c88:
  _objc_release(param_3);
  return (undefined8 *)puVar5;
}



/* Entry: 108bc2be4; end: 108bc2ca3; -[CTPNetworkResultSection isEqual:] */

long FUN_108bc2be4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc2c88;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
         (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
        (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))))) {
      lVar3 = 0;
      goto LAB_108bc2c88;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_108bc2c88;
    }
  }
  lVar3 = 1;
LAB_108bc2c88:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bc2ca4; end: 108bc2cab; -[CTPNetworkResultSection direction] */

undefined8 FUN_108bc2ca4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc2cac; end: 108bc2cb3; -[CTPNetworkResultSection type] */

undefined8 FUN_108bc2cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc2cb4; end: 108bc2cbb; -[CTPNetworkResultSection items] */

undefined8 FUN_108bc2cb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bc2cbc; end: 108bc2cc3; -[CTPNetworkResultSection displayCount] */

undefined8 FUN_108bc2cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bc2cc4; end: 108bc2ccf; -[CTPNetworkResultSection .cxx_destruct] */

void FUN_108bc2cc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108bc2cd0; end: 108bc2d5f; +[CTPNetworkComputationResult flatResultWithItems:pageToken:] */

void FUN_108bc2cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bafd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bc2d60; end: 108bc2dcb; +[CTPNetworkComputationResult sectionedResultWithSections:] */

void FUN_108bc2d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bafd8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bc2dcc; end: 108bc2def; -[CTPNetworkComputationResult copyWithZone:] */

undefined8 FUN_108bc2dcc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bc2df0; end: 108bc2e73; -[CTPNetworkComputationResult hash] */

void FUN_108bc2df0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126fdb10;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bc2e74; end: 108bc2eb7; -[CTPNetworkComputationResult internalInit] */

void FUN_108bc2e74(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fdb10;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bc2eb8; end: 108bc2f87; -[CTPNetworkComputationResult isEqual:] */

long FUN_108bc2eb8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bc2f60:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bc2f6c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_108bc2f6c;
          }
          goto LAB_108bc2f60;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108bc2f6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bc2f88; end: 108bc300f; -[CTPNetworkComputationResult matchFlatResult:sectionedResult:] */

void FUN_108bc2f88(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bc3010; end: 108bc304b; -[CTPNetworkComputationResult .cxx_destruct] */

void FUN_108bc3010(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bc304c; end: 108bc3097; -[CTPStickerContentManagerServices initWithStickerContentManager:] */

long FUN_108bc304c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 108bc3098; end: 108bc30a3; -[CTPStickerContentManagerServices .cxx_destruct] */

void FUN_108bc3098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc30a4; end: 108bc30ab; -[SCImpalaBusinessProfileManagerService businessProfileManager] */

undefined8 FUN_108bc30a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bc30ac; end: 108bc30b7; -[SCImpalaBusinessProfileManagerService .cxx_destruct] */

void FUN_108bc30ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bc30b8; end: 108bc31ab; -[SCCContactAddressBookEntryStoringFactoryConfig initWithCallbackTrigger:inviteContactPresentingUIContainer:contactsAvailableSubject:enableTwilioInvites:shouldFilterOutIneligibleContacts:inviteFeatureSource:] */

undefined1 *
FUN_108bc30b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fdb20;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined4 *)((long)puVar1 + 0xc) = param_8;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bc31ac; end: 108bc31b3; -[SCCContactAddressBookEntryStoringFactoryConfig callbackTrigger] */

undefined8 FUN_108bc31ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bc31b4; end: 108bc31bb; -[SCCContactAddressBookEntryStoringFactoryConfig inviteContactPresentingUIContainer] */

undefined8 FUN_108bc31b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bc31bc; end: 108bc31c3; -[SCCContactAddressBookEntryStoringFactoryConfig contactsAvailableSubject] */

undefined8 FUN_108bc31bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bc31c4; end: 108bc31cb; -[SCCContactAddressBookEntryStoringFactoryConfig enableTwilioInvites] */

undefined1 FUN_108bc31c4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bc31cc; end: 108bc31d3; -[SCCContactAddressBookEntryStoringFactoryConfig setEnableTwilioInvites:] */

void FUN_108bc31cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108bc31d4; end: 108bc31db; -[SCCContactAddressBookEntryStoringFactoryConfig shouldFilterOutIneligibleContacts] */

undefined1 FUN_108bc31d4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108bc31dc; end: 108bc31e3; -[SCCContactAddressBookEntryStoringFactoryConfig setShouldFilterOutIneligibleContacts:] */

void FUN_108bc31dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 108bc31e4; end: 108bc31eb; -[SCCContactAddressBookEntryStoringFactoryConfig inviteFeatureSource] */

undefined4 FUN_108bc31e4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


