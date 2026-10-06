/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105c6716c; end: 105c67173; +[SCCSearchHistoryCreateClearSearchHistoryManager asyncStrictMode] */

undefined8 FUN_105c6716c(void)

{
  return 0;
}



/* Entry: 105c67174; end: 105c6721b; -[SCCSearchHistoryCreateClearSearchHistoryManager createClearSearchHistoryManagerWithUserInfoProvider:alertPresenter:notificationPresenter:grpcServiceFactory:] */

void FUN_105c67174(long param_1)

{
  long lVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  
  _objc_retain(in_x5);
  func_0x000105c674ec();
  func_0x000105c674dc();
  func_0x000105c674cc();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105c674f4();
  _objc_release(in_x4);
  func_0x000105c674e4();
  func_0x000105c674d4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105c6721c; end: 105c67353; +[SCCSearchHistoryCreateClearSearchHistoryManager invokeWithJSRuntimeProvider:userInfoProvider:alertPresenter:notificationPresenter:grpcServiceFactory:completionHandler:] */

void FUN_105c6721c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x000105c674ec();
  func_0x000105c674dc();
  func_0x000105c674cc();
  _objc_retain(param_8);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105c67354;
  puStack_78 = &UNK_110866740;
  lStack_70 = param_3;
  uStack_68 = param_4;
  uStack_60 = param_5;
  uStack_58 = param_6;
  uStack_50 = param_7;
  uStack_48 = param_8;
  _objc_retain(param_8);
  func_0x000105c674cc();
  func_0x000105c674dc();
  func_0x000105c674ec();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_90);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(lStack_70);
  _objc_release(param_8);
  func_0x000105c674d4();
  func_0x000105c674e4();
  _objc_release(param_5);
  func_0x000105c674f4();
  _objc_release(param_3);
  return;
}



/* Entry: 105c67354; end: 105c673db;  */

void FUN_105c67354(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c37a8;
  func_0x00010bfbc0e0(PTR_PTR_1126c37a8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),puVar2);
  func_0x000105c674d4();
  func_0x000105c674e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105c673dc; end: 105c6741f; +[SCCSearchHistoryCreateClearSearchHistoryManager valdiMarshallableObjectDescriptor] */

void FUN_105c673dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108e0fe8;
  param_1[1] = &PTR_DAT_1108e1018;
  param_1[2] = &PTR_DAT_1108e0fb8;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105c67420; end: 105c6749b;  */

void FUN_105c67420(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105c6749c;
  puStack_30 = &UNK_1108e1048;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x000105c674f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105c6749c; end: 105c674cb;  */

void FUN_105c6749c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105c674cc; end: 105c674fb;  */

void FUN_105c674cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 105c674fc; end: 105c6755f; -[SCCSearchHistoryINativeCompatClearSearchHistoryManager initWithPresentClearSearchHistoryDialog:] */

undefined8 * FUN_105c674fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retainBlock();
  puStack_28 = PTR_PTR_1126ec9e0;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105c67560; end: 105c67577; +[SCCSearchHistoryINativeCompatClearSearchHistoryManager valdiMarshallableObjectDescriptor] */

void FUN_105c67560(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108e1078;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105c67578; end: 105c675f3;  */

undefined * FUN_105c67578(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1ec0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e24d98,
                        &UNK_10ddcc840,&UNK_10ddcca30,0x19,FUN_105c675f4,0);
    do {
      if (puRam00000001136c1ec0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1ec0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1ec0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1ec0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1ec0;
}



/* Entry: 105c675f4; end: 105c6760f;  */

uint FUN_105c675f4(uint param_1)

{
  return (uint)(param_1 < 0x1a) & 0x3fffdffU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 105c67610; end: 105c6768b;  */

undefined * FUN_105c67610(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1ec8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e24db8,
                        &UNK_10ddcca94,&UNK_10ddccb50,0xd,FUN_105c6768c,0);
    do {
      if (puRam00000001136c1ec8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1ec8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1ec8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1ec8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1ec8;
}



/* Entry: 105c6768c; end: 105c67697;  */

bool FUN_105c6768c(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 105c67698; end: 105c67713;  */

undefined * FUN_105c67698(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1ed0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e24dd8,
                        &UNK_10ddccb84,&UNK_10ddccbbc,7,FUN_105c67714,0);
    do {
      if (puRam00000001136c1ed0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1ed0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1ed0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1ed0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1ed0;
}



/* Entry: 105c67714; end: 105c6771f;  */

bool FUN_105c67714(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 105c67720; end: 105c67787; +[SCSUPUserProfileRequest descriptor] */

void FUN_105c67720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ed8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95b68,
                        &PTR____CFConstantStringClassReference_110e24df8,&PTR_DAT_1131206c0,
                        &PTR_s_userId_113120b38,8,0x40,0x1c);
    puRam00000001136c1ed8 = puVar1;
  }
  return;
}



/* Entry: 105c67788; end: 105c6780b; +[SCSUPUserProfileRequest_FieldOverride descriptor] */

undefined * FUN_105c67788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ee0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95b90,
                        &PTR____CFConstantStringClassReference_110e24e18,&PTR_DAT_1131206c0,
                        &PTR_DAT_113120738,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c1ee0 = puVar1;
  }
  return puRam00000001136c1ee0;
}



/* Entry: 105c6780c; end: 105c6788f; +[SCSUPUserProfileRequest_FieldRequest descriptor] */

undefined * FUN_105c6780c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95bb8,
                        &PTR____CFConstantStringClassReference_110e24e38,&PTR_DAT_1131206c0,
                        &PTR_DAT_113120778,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c1ee8 = puVar1;
  }
  return puRam00000001136c1ee8;
}



/* Entry: 105c67890; end: 105c678f7; +[SCSUPUserProfileResponse descriptor] */

void FUN_105c67890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ef0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95758,
                        &PTR____CFConstantStringClassReference_110e24e58,&PTR_DAT_1131206c0,
                        &PTR_DAT_113120c38,0xe,0x78,0x1c);
    puRam00000001136c1ef0 = puVar1;
  }
  return;
}



/* Entry: 105c678f8; end: 105c6795f; +[SCSUPGetSearchHistoryRequest descriptor] */

void FUN_105c678f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a957a8,
                        &PTR____CFConstantStringClassReference_110e24e78,&PTR_DAT_1131206c0,
                        &PTR_s_userId_1131206d8,1,0x10,0x1c);
    puRam00000001136c1ef8 = puVar1;
  }
  return;
}



/* Entry: 105c67960; end: 105c679c7; +[SCSUPGetSearchHistoryResponse descriptor] */

void FUN_105c67960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95be0,
                        &PTR____CFConstantStringClassReference_110e24e98,&PTR_DAT_1131206c0,
                        &PTR_s_userId_1131207b8,2,0x18,0x1c);
    puRam00000001136c1f00 = puVar1;
  }
  return;
}



/* Entry: 105c679c8; end: 105c67a4b; +[SCSUPGetSearchHistoryResponse_QueryInfo descriptor] */

undefined * FUN_105c679c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95c08,
                        &PTR____CFConstantStringClassReference_110e24eb8,&PTR_DAT_1131206c0,
                        &PTR_DAT_1131208f8,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c1f08 = puVar1;
  }
  return puRam00000001136c1f08;
}



/* Entry: 105c67a4c; end: 105c67ab3; +[SCSUPDeleteSearchHistoryRequest descriptor] */

void FUN_105c67a4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95848,
                        &PTR____CFConstantStringClassReference_110e24ed8,&PTR_DAT_1131206c0,
                        &PTR_s_userId_1131207f8,2,0x18,0x1c);
    puRam00000001136c1f10 = puVar1;
  }
  return;
}



/* Entry: 105c67ab4; end: 105c67b1b; +[SCSUPDeleteSearchHistoryResponse descriptor] */

void FUN_105c67ab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95898,
                        &PTR____CFConstantStringClassReference_110e24ef8,&PTR_DAT_1131206c0,0,0,4,
                        0x1c);
    puRam00000001136c1f18 = puVar1;
  }
  return;
}



/* Entry: 105c67b1c; end: 105c67b83; +[SCSUPGetFriendInteractionsHistoryRequest descriptor] */

void FUN_105c67b1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a958e8,
                        &PTR____CFConstantStringClassReference_110e24f18,&PTR_DAT_1131206c0,
                        &PTR_s_userId_113120958,3,0x18,0x1c);
    puRam00000001136c1f20 = puVar1;
  }
  return;
}



/* Entry: 105c67b84; end: 105c67beb; +[SCSUPFriendFeedInteractionType descriptor] */

void FUN_105c67b84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95938,
                        &PTR____CFConstantStringClassReference_110e24f38,&PTR_DAT_1131206c0,0,0,4,
                        0x1c);
    puRam00000001136c1f28 = puVar1;
  }
  return;
}



/* Entry: 105c67bec; end: 105c67c53; +[SCSUPGetFriendInteractionsHistoryResponse descriptor] */

void FUN_105c67bec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95c30,
                        &PTR____CFConstantStringClassReference_110e24f58,&PTR_DAT_1131206c0,
                        &PTR_s_userId_1131209b8,4,0x28,0x1c);
    puRam00000001136c1f30 = puVar1;
  }
  return;
}



/* Entry: 105c67c54; end: 105c67cd7; +[SCSUPGetFriendInteractionsHistoryResponse_InteractionInfo descriptor] */

undefined * FUN_105c67c54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95c58,
                        &PTR____CFConstantStringClassReference_110e24f78,&PTR_DAT_1131206c0,
                        &PTR_s_correspondentId_113120a38,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c1f38 = puVar1;
  }
  return puRam00000001136c1f38;
}



/* Entry: 105c67cd8; end: 105c67d5b; +[SCSUPGetFriendInteractionsHistoryResponse_PosterInfo descriptor] */

undefined * FUN_105c67cd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95c80,
                        &PTR____CFConstantStringClassReference_110e24f98,&PTR_DAT_1131206c0,
                        &PTR_DAT_113120838,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c1f40 = puVar1;
  }
  return puRam00000001136c1f40;
}



/* Entry: 105c67d5c; end: 105c67dc3; +[SCSUPGetSpotlightInteractionsHistoryRequest descriptor] */

void FUN_105c67d5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95a00,
                        &PTR____CFConstantStringClassReference_110e24fb8,&PTR_DAT_1131206c0,
                        &PTR_s_userId_1131206f8,1,0x10,0x1c);
    puRam00000001136c1f48 = puVar1;
  }
  return;
}



/* Entry: 105c67dc4; end: 105c67e2b; +[SCSUPSpotlightFeedInteractionType descriptor] */

void FUN_105c67dc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95a50,
                        &PTR____CFConstantStringClassReference_110e24fd8,&PTR_DAT_1131206c0,0,0,4,
                        0x1c);
    puRam00000001136c1f50 = puVar1;
  }
  return;
}



/* Entry: 105c67e2c; end: 105c67e93; +[SCSUPGetSpotlightInteractionsHistoryResponse descriptor] */

void FUN_105c67e2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95ca8,
                        &PTR____CFConstantStringClassReference_110e24ff8,&PTR_DAT_1131206c0,
                        &PTR_s_userId_113120878,2,0x18,0x1c);
    puRam00000001136c1f58 = puVar1;
  }
  return;
}



/* Entry: 105c67e94; end: 105c67f27; +[SCSUPGetSpotlightInteractionsHistoryResponse_ActionInfo descriptor] */

undefined * FUN_105c67e94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95cd0,
                        &PTR____CFConstantStringClassReference_110e25018,&PTR_DAT_1131206c0,
                        &PTR_DAT_113120ab8,4,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a95ca8);
    puRam00000001136c1f60 = puVar1;
  }
  return puRam00000001136c1f60;
}



/* Entry: 105c67f28; end: 105c67f8f; +[SCSUPDiscoverSettingsRequest descriptor] */

void FUN_105c67f28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95af0,
                        &PTR____CFConstantStringClassReference_110e25038,&PTR_DAT_1131206c0,
                        &PTR_s_userId_113120718,1,0x10,0x1c);
    puRam00000001136c1f68 = puVar1;
  }
  return;
}



/* Entry: 105c67f90; end: 105c68073; +[SCSUPDiscoverSettingsResponse descriptor] */

void FUN_105c67f90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95b40,
                        &PTR____CFConstantStringClassReference_110e25058,&PTR_DAT_1131206c0,
                        &PTR_DAT_1131208b8,2,0x10,0x1c);
    puRam00000001136c1f70 = puVar1;
  }
  return;
}



/* Entry: 105c68074; end: 105c6807f;  */

bool FUN_105c68074(uint param_1)

{
  return param_1 < 0x1c;
}



/* Entry: 105c68080; end: 105c680fb;  */

undefined * FUN_105c68080(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1f80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e25098,
                        &UNK_10ddcce58,&UNK_10ddcced4,9,FUN_105c680fc,0);
    do {
      if (puRam00000001136c1f80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1f80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1f80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1f80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1f80;
}



/* Entry: 105c680fc; end: 105c68107;  */

bool FUN_105c680fc(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 105c68108; end: 105c68173; +[SCSCKViewerSCCEngagementFeatures descriptor] */

void FUN_105c68108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95d70,
                        &PTR____CFConstantStringClassReference_110e250b8,&PTR_DAT_113121e38,
                        &PTR_DAT_113120df8,0x40,0x208,0x1c);
    puRam00000001136c1f88 = puVar1;
  }
  return;
}



/* Entry: 105c68174; end: 105c681f3; +[SCSCKFriendStoryViewerEngagementFeatures descriptor] */

undefined * FUN_105c68174(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95dc0,
                        &PTR____CFConstantStringClassReference_110e250d8,&PTR_DAT_113121e38,
                        &PTR_DAT_113123610,0x2e,0x178,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1f90 = puVar1;
  }
  return puRam00000001136c1f90;
}



/* Entry: 105c681f4; end: 105c6826f; +[SCSCKFriendStoryPosterEngagementFeatures descriptor] */

undefined * FUN_105c681f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1f98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95e10,
                        &PTR____CFConstantStringClassReference_110e250f8,&PTR_DAT_113121e38,
                        &PTR_DAT_113122150,7,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1f98 = puVar1;
  }
  return puRam00000001136c1f98;
}



/* Entry: 105c68270; end: 105c682eb; +[SCSCKFriendStoryPosterFeatures descriptor] */

undefined * FUN_105c68270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1fa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95e60,
                        &PTR____CFConstantStringClassReference_110e25118,&PTR_DAT_113121e38,
                        &PTR_DAT_113122230,0xc,0x58,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1fa0 = puVar1;
  }
  return puRam00000001136c1fa0;
}



/* Entry: 105c682ec; end: 105c68353; +[SCSCKFriendStoryPosterMetadataFeatures descriptor] */

void FUN_105c682ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1fa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95eb0,
                        &PTR____CFConstantStringClassReference_110e25138,&PTR_DAT_113121e38,
                        &PTR_DAT_113121ed0,3,0x10,0x1c);
    puRam00000001136c1fa8 = puVar1;
  }
  return;
}



/* Entry: 105c68354; end: 105c683bf; +[SCSCKFriendStoryDerivedPosterEngagementFeatures descriptor] */

void FUN_105c68354(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1fb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95f00,
                        &PTR____CFConstantStringClassReference_110e25158,&PTR_DAT_113121e38,
                        &PTR_DAT_113122e10,0x14,0xa8,0x1c);
    puRam00000001136c1fb0 = puVar1;
  }
  return;
}



/* Entry: 105c683c0; end: 105c68427; +[SCSCKFriendStoryPosterContentFeatures descriptor] */

void FUN_105c683c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1fb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95f50,
                        &PTR____CFConstantStringClassReference_110e25178,&PTR_DAT_113121e38,
                        &PTR_DAT_113122730,0x12,0x98,0x1c);
    puRam00000001136c1fb8 = puVar1;
  }
  return;
}



/* Entry: 105c68428; end: 105c684a3; +[SCSCKFriendStoryMetadataFeatures descriptor] */

undefined * FUN_105c68428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1fc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96388,
                        &PTR____CFConstantStringClassReference_110e25198,&PTR_DAT_113121e38,
                        &PTR_DAT_113122bb0,0x13,0x58,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1fc0 = puVar1;
  }
  return puRam00000001136c1fc0;
}



/* Entry: 105c684a4; end: 105c68527; +[SCSCKFriendStoryMetadataFeatures_StoryType descriptor] */

undefined * FUN_105c684a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1fc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a963b0,
                        &PTR____CFConstantStringClassReference_110e251b8,&PTR_DAT_113121e38,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c1fc8 = puVar1;
  }
  return puRam00000001136c1fc8;
}



/* Entry: 105c68528; end: 105c6858f; +[SCSCKFriendStoryContentFeatures descriptor] */

void FUN_105c68528(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1fd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a95ff0,
                        &PTR____CFConstantStringClassReference_110e251d8,&PTR_DAT_113121e38,
                        &PTR_DAT_113121e90,2,0x18,0x1c);
    puRam00000001136c1fd0 = puVar1;
  }
  return;
}



/* Entry: 105c68590; end: 105c685fb; +[SCSCKFriendStoryStoryContentFeatures descriptor] */

void FUN_105c68590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1fd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96040,
                        &PTR____CFConstantStringClassReference_110e251f8,&PTR_DAT_113121e38,
                        &PTR_DAT_1131215f8,0x42,0x140,0x1c);
    puRam00000001136c1fd8 = puVar1;
  }
  return;
}



/* Entry: 105c685fc; end: 105c6867b; +[SCSCKFriendStorySnapContentFeatures descriptor] */

undefined * FUN_105c685fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1fe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96090,
                        &PTR____CFConstantStringClassReference_110e25218,&PTR_DAT_113121e38,
                        &PTR_DAT_113123090,0x2c,0xa8,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1fe0 = puVar1;
  }
  return puRam00000001136c1fe0;
}



/* Entry: 105c6867c; end: 105c686f7; +[SCSCKFriendStoryClientEngagementFeatures descriptor] */

undefined * FUN_105c6867c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1fe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a960e0,
                        &PTR____CFConstantStringClassReference_110e25238,&PTR_DAT_113121e38,
                        &PTR_DAT_1131223b0,0xd,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1fe8 = puVar1;
  }
  return puRam00000001136c1fe8;
}



/* Entry: 105c686f8; end: 105c6875f; +[SCSCKFriendStoryClientInteractionFeatures descriptor] */

void FUN_105c686f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ff0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96130,
                        &PTR____CFConstantStringClassReference_110e25258,&PTR_DAT_113121e38,
                        &PTR_DAT_113121f90,4,0x10,0x1c);
    puRam00000001136c1ff0 = puVar1;
  }
  return;
}



/* Entry: 105c68760; end: 105c687c7; +[SCSCKFriendStoryClientRankingSignals descriptor] */

void FUN_105c68760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96180,
                        &PTR____CFConstantStringClassReference_110e25278,&PTR_DAT_113121e38,
                        &PTR_DAT_113121e50,1,0x10,0x1c);
    puRam00000001136c1ff8 = puVar1;
  }
  return;
}



/* Entry: 105c687c8; end: 105c6882f; +[SCSCKFriendStoryDerivedEngagementFeatures descriptor] */

void FUN_105c687c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2000 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a961d0,
                        &PTR____CFConstantStringClassReference_110e25298,&PTR_DAT_113121e38,
                        &PTR_DAT_113122970,0x12,0x98,0x1c);
    puRam00000001136c2000 = puVar1;
  }
  return;
}



/* Entry: 105c68830; end: 105c68897; +[SCSCKFriendStoryNotificationFeatures descriptor] */

void FUN_105c68830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96220,
                        &PTR____CFConstantStringClassReference_110e252b8,&PTR_DAT_113121e38,
                        &PTR_DAT_113121e70,1,4,0x1c);
    puRam00000001136c2008 = puVar1;
  }
  return;
}



/* Entry: 105c68898; end: 105c688ff; +[SCSCKFriendLinkFeatures descriptor] */

void FUN_105c68898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96270,
                        &PTR____CFConstantStringClassReference_110e252d8,&PTR_DAT_113121e38,
                        &PTR_DAT_113122090,6,0x18,0x1c);
    puRam00000001136c2010 = puVar1;
  }
  return;
}



/* Entry: 105c68900; end: 105c68967; +[SCSCKFriendStoryReverseEngagementFeatures descriptor] */

void FUN_105c68900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a962c0,
                        &PTR____CFConstantStringClassReference_110e252f8,&PTR_DAT_113121e38,
                        &PTR_DAT_113121f30,3,0x20,0x1c);
    puRam00000001136c2018 = puVar1;
  }
  return;
}



/* Entry: 105c68968; end: 105c689cf; +[SCSCKFriendOfFriendFeatures descriptor] */

void FUN_105c68968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96310,
                        &PTR____CFConstantStringClassReference_110e25318,&PTR_DAT_113121e38,
                        &PTR_DAT_113122010,4,0x10,0x1c);
    puRam00000001136c2020 = puVar1;
  }
  return;
}



/* Entry: 105c689d0; end: 105c68a37; +[SCSCKFriendStoryFeatures descriptor] */

void FUN_105c689d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96360,
                        &PTR____CFConstantStringClassReference_110e25338,&PTR_DAT_113121e38,
                        &PTR_DAT_113122550,0xf,0x80,0x1c);
    puRam00000001136c2028 = puVar1;
  }
  return;
}



/* Entry: 105c68a38; end: 105c68a9f; +[SCSIDXFriendStoryPosterEngagementFeatures descriptor] */

void FUN_105c68a38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96450,
                        &PTR____CFConstantStringClassReference_110e250f8,&PTR_DAT_113123bd0,
                        &PTR_DAT_113123be8,0x11,0x90,0x1c);
    puRam00000001136c2030 = puVar1;
  }
  return;
}



/* Entry: 105c68aa0; end: 105c68b07; +[SCSNTFOptInNotification descriptor] */

void FUN_105c68aa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a964f0,
                        &PTR____CFConstantStringClassReference_110e25358,&PTR_DAT_113123e08,
                        &PTR_s_id_p_113123e20,4,0x20,0x1c);
    puRam00000001136c2038 = puVar1;
  }
  return;
}



/* Entry: 105c68b08; end: 105c68b6f; +[SCSNTFUserOptInNotifications descriptor] */

void FUN_105c68b08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96540,
                        &PTR____CFConstantStringClassReference_110e25378,&PTR_DAT_113123e08,
                        &PTR_DAT_113123ea0,4,0x28,0x1c);
    puRam00000001136c2040 = puVar1;
  }
  return;
}



/* Entry: 105c68b70; end: 105c68bd7; +[SCSUPStoryPreferenceSetting descriptor] */

void FUN_105c68b70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a965e0,
                        &PTR____CFConstantStringClassReference_110e25398,&PTR_DAT_113123f20,
                        &PTR_s_itemId_113123f58,5,0x10,0x1c);
    puRam00000001136c2048 = puVar1;
  }
  return;
}



/* Entry: 105c68bd8; end: 105c68c3f; +[SCSUPStoryPreferenceSettings descriptor] */

void FUN_105c68bd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96630,
                        &PTR____CFConstantStringClassReference_110e253b8,&PTR_DAT_113123f20,
                        &PTR_DAT_113123f38,1,0x10,0x1c);
    puRam00000001136c2050 = puVar1;
  }
  return;
}



/* Entry: 105c68c40; end: 105c68ca7; +[SCSUPImpressionEntry descriptor] */

void FUN_105c68c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a966d0,
                        &PTR____CFConstantStringClassReference_110e253d8,&PTR_DAT_113123ff8,
                        &PTR_DAT_113124010,4,0x20,0x1c);
    puRam00000001136c2058 = puVar1;
  }
  return;
}



/* Entry: 105c68ca8; end: 105c68d23; +[SCSUPImpressionStats descriptor] */

undefined * FUN_105c68ca8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96720,
                        &PTR____CFConstantStringClassReference_110e253f8,&PTR_DAT_113123ff8,
                        &PTR_DAT_113124110,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2060 = puVar1;
  }
  return puRam00000001136c2060;
}



/* Entry: 105c68d24; end: 105c68d8b; +[SCSUPFeedsImpressions descriptor] */

void FUN_105c68d24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96770,
                        &PTR____CFConstantStringClassReference_110e25418,&PTR_DAT_113123ff8,
                        &PTR_DAT_113124090,4,0x28,0x1c);
    puRam00000001136c2068 = puVar1;
  }
  return;
}



/* Entry: 105c68d8c; end: 105c68e07; +[SCSUPFriendStoryFeatures descriptor] */

undefined * FUN_105c68d8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96810,
                        &PTR____CFConstantStringClassReference_110e25338,&PTR_DAT_1131241b0,
                        &PTR_DAT_1131242a8,0x30,200,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c2070 = puVar1;
  }
  return puRam00000001136c2070;
}



/* Entry: 105c68e08; end: 105c68e6f; +[SCSUPFriendFeature descriptor] */

void FUN_105c68e08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96860,
                        &PTR____CFConstantStringClassReference_110e25438,&PTR_DAT_1131241b0,
                        &PTR_DAT_1131241e8,2,0x18,0x1c);
    puRam00000001136c2078 = puVar1;
  }
  return;
}



/* Entry: 105c68e70; end: 105c68ed7; +[SCSUPFriendFeatures descriptor] */

void FUN_105c68e70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a968b0,
                        &PTR____CFConstantStringClassReference_110e25458,&PTR_DAT_1131241b0,
                        &PTR_s_userId_113124228,2,0x18,0x1c);
    puRam00000001136c2080 = puVar1;
  }
  return;
}



/* Entry: 105c68ed8; end: 105c68f3f; +[SCSUPFriendScore descriptor] */

void FUN_105c68ed8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96900,
                        &PTR____CFConstantStringClassReference_110e25478,&PTR_DAT_1131241b0,
                        &PTR_DAT_1131241c8,1,8,0x1c);
    puRam00000001136c2088 = puVar1;
  }
  return;
}



/* Entry: 105c68f40; end: 105c68fa7; +[SCSUPFriendScores descriptor] */

void FUN_105c68f40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96950,
                        &PTR____CFConstantStringClassReference_110e25498,&PTR_DAT_1131241b0,
                        &PTR_s_userId_113124268,2,0x18,0x1c);
    puRam00000001136c2090 = puVar1;
  }
  return;
}



/* Entry: 105c68fa8; end: 105c6900f; +[FriendMetadataFeatures descriptor] */

void FUN_105c68fa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a969f0,
                        &PTR____CFConstantStringClassReference_110e254b8,&PTR_DAT_1131248a8,
                        &PTR_s_friendId_113124900,3,0x18,0x1c);
    puRam00000001136c2098 = puVar1;
  }
  return;
}



/* Entry: 105c69010; end: 105c69077; +[UserMetadataFeatures descriptor] */

void FUN_105c69010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c20a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96a40,
                        &PTR____CFConstantStringClassReference_110e254d8,&PTR_DAT_1131248a8,
                        &PTR_s_userId_1131248c0,2,0x18,0x1c);
    puRam00000001136c20a0 = puVar1;
  }
  return;
}



/* Entry: 105c69078; end: 105c690df; +[SCSUPScoredInterest descriptor] */

void FUN_105c69078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c20a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96ae0,
                        &PTR____CFConstantStringClassReference_110e254f8,&PTR_DAT_113124960,
                        &PTR_DAT_113124a78,6,0x20,0x1c);
    puRam00000001136c20a8 = puVar1;
  }
  return;
}



/* Entry: 105c690e0; end: 105c69147; +[SCSUPScoredInterestGroup descriptor] */

void FUN_105c690e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c20b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96b30,
                        &PTR____CFConstantStringClassReference_110e25518,&PTR_DAT_113124960,
                        &PTR_DAT_1131249f8,4,0x14,0x1c);
    puRam00000001136c20b0 = puVar1;
  }
  return;
}



/* Entry: 105c69148; end: 105c691af; +[SCSUPScoredScc descriptor] */

void FUN_105c69148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c20b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96b80,
                        &PTR____CFConstantStringClassReference_110e25538,&PTR_DAT_113124960,
                        &PTR_DAT_113124b38,8,0x24,0x1c);
    puRam00000001136c20b8 = puVar1;
  }
  return;
}



/* Entry: 105c691b0; end: 105c69217; +[SCSUPWindowedScoredScc descriptor] */

void FUN_105c691b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c20c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96bd0,
                        &PTR____CFConstantStringClassReference_110e25558,&PTR_DAT_113124960,
                        &PTR_DAT_113124978,2,0x18,0x1c);
    puRam00000001136c20c0 = puVar1;
  }
  return;
}



/* Entry: 105c69218; end: 105c6927f; +[SCSUPSuggestiveContentEngagement descriptor] */

void FUN_105c69218(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c20c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96c20,
                        &PTR____CFConstantStringClassReference_110e25578,&PTR_DAT_113124960,
                        &PTR_s_version_1131249b8,2,0x10,0x1c);
    puRam00000001136c20c8 = puVar1;
  }
  return;
}



/* Entry: 105c69280; end: 105c692fb; +[SCSUPInterests descriptor] */

undefined * FUN_105c69280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c20d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96c70,
                        &PTR____CFConstantStringClassReference_110e25598,&PTR_DAT_113124960,
                        &PTR_s_userId_113124d78,0x1d,0xf0,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c20d0 = puVar1;
  }
  return puRam00000001136c20d0;
}



/* Entry: 105c692fc; end: 105c693df; +[SCSUPFriendStoryWindowedEngagementStats descriptor] */

void FUN_105c692fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c20d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96cc0,
                        &PTR____CFConstantStringClassReference_110e255b8,&PTR_DAT_113124960,
                        &PTR_DAT_113124c38,10,0x58,0x1c);
    puRam00000001136c20d8 = puVar1;
  }
  return;
}



/* Entry: 105c693e0; end: 105c693eb;  */

bool FUN_105c693e0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 105c693ec; end: 105c694cf; +[PsuggestiveScore descriptor] */

void FUN_105c693ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c20e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96d60,
                        &PTR____CFConstantStringClassReference_110e255f8,&PTR_DAT_113125118,
                        &PTR_s_score_113125130,2,0xc,0x1c);
    puRam00000001136c20e8 = puVar1;
  }
  return;
}



/* Entry: 105c694d0; end: 105c694db;  */

bool FUN_105c694d0(uint param_1)

{
  return param_1 < 0x179;
}



/* Entry: 105c694dc; end: 105c695bf; +[SCSUPInferredInterestCategoryType descriptor] */

void FUN_105c694dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c20f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96e00,
                        &PTR____CFConstantStringClassReference_110e25638,&PTR_DAT_113125170,0,0,4,
                        0x1c);
    puRam00000001136c20f8 = puVar1;
  }
  return;
}



/* Entry: 105c695c0; end: 105c695cb;  */

bool FUN_105c695c0(uint param_1)

{
  return param_1 < 0x1c;
}



/* Entry: 105c695cc; end: 105c69633; +[InterestGroupType descriptor] */

void FUN_105c695cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96ea0,
                        &PTR____CFConstantStringClassReference_110e25678,&PTR_DAT_113125188,0,0,4,
                        0x1c);
    puRam00000001136c2108 = puVar1;
  }
  return;
}



/* Entry: 105c69634; end: 105c69717; +[InterestGroup descriptor] */

void FUN_105c69634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a96ef0,
                        &PTR____CFConstantStringClassReference_110e25698,&PTR_DAT_113125188,
                        &PTR_DAT_1131251a0,2,0xc,0x1c);
    puRam00000001136c2110 = puVar1;
  }
  return;
}



/* Entry: 105c69718; end: 105c69723;  */

bool FUN_105c69718(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 105c69724; end: 105c6979f;  */

undefined * FUN_105c69724(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2120 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e256d8,
                        &UNK_10ddcf8c4,&UNK_10ddcf8f4,3,FUN_105c697a0,0);
    do {
      if (puRam00000001136c2120 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2120;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2120,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2120 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2120;
}



/* Entry: 105c697a0; end: 105c697ab;  */

bool FUN_105c697a0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105c697ac; end: 105c69827;  */

undefined * FUN_105c697ac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2128 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e256f8,
                        &UNK_10ddcf900,&UNK_10ddcf928,3,FUN_105c69828,0);
    do {
      if (puRam00000001136c2128 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2128;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2128,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2128 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2128;
}



/* Entry: 105c69828; end: 105c69833;  */

bool FUN_105c69828(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105c69834; end: 105c698af;  */

undefined * FUN_105c69834(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2130 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e25718,
                        &UNK_10ddcf934,&UNK_10ddcf96c,3,FUN_105c698b0,0);
    do {
      if (puRam00000001136c2130 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2130;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2130,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2130 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2130;
}



/* Entry: 105c698b0; end: 105c698bb;  */

bool FUN_105c698b0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105c698bc; end: 105c69937;  */

undefined * FUN_105c698bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2138 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e25738,
                        &UNK_10ddcf8c4,&UNK_10ddcf978,3,FUN_105c69938,0);
    do {
      if (puRam00000001136c2138 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2138;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2138,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2138 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2138;
}



/* Entry: 105c69938; end: 105c69943;  */

bool FUN_105c69938(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105c69944; end: 105c699bf;  */

undefined * FUN_105c69944(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2140 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e25758,
                        &UNK_10ddcf900,&UNK_10ddcf984,3,FUN_105c699c0,0);
    do {
      if (puRam00000001136c2140 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2140;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2140,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2140 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2140;
}



/* Entry: 105c699c0; end: 105c699cb;  */

bool FUN_105c699c0(uint param_1)

{
  return param_1 < 3;
}


