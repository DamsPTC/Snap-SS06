/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f1f1b8; end: 103f1f1d3; +[SCSpotlightPlaybackFeatureConfigKeys spotlightShareMetadataCacheTtlSeconds] */

void FUN_103f1f1b8(void)

{
  if (lRam00000001135eb7e8 != -1) {
    _swift_once(0x1135eb7e8,FUN_103f1f128);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812738);
  return;
}



/* Entry: 103f1f1d4; end: 103f1f223;  */

void FUN_103f1f1d4(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000036;
  func_0x000100442ccc(0xd000000000000036,0x800000010f1cf1c0,0);
  uRam0000000113812740 = uVar1;
  return;
}



/* Entry: 103f1f224; end: 103f1f23f; +[SCSpotlightPlaybackFeatureConfigKeys activePlaylistContentAvailabilityRefresh] */

void FUN_103f1f224(void)

{
  if (lRam00000001135eb7f0 != -1) {
    _swift_once(0x1135eb7f0,FUN_103f1f1d4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812740);
  return;
}



/* Entry: 103f1f240; end: 103f1f283;  */

void FUN_103f1f240(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    _swift_once(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 103f1f284; end: 103f1f2bf; -[SCSpotlightPlaybackFeatureConfigKeys init] */

void FUN_103f1f284(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f2c0; end: 103f1f2f3;  */

void FUN_103f1f2c0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f1f2f4; end: 103f1f30b; -[SCSpotlightPlaybackFeatureConfigKeys .cxx_destruct] */

void FUN_103f1f2f4(void)

{
  return;
}



/* Entry: 103f1f30c; end: 103f1f34b;  */

void FUN_103f1f30c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcab820;
  _swift_getWitnessTable(&UNK_10dcab820,&UNK_110721f38);
  puRam000000011302e910 = puVar1;
  return;
}



/* Entry: 103f1f34c; end: 103f1f35b;  */

undefined1  [16] FUN_103f1f34c(void)

{
  return ZEXT816(0x110721f38);
}



/* Entry: 103f1f35c; end: 103f1f37b;  */

void FUN_103f1f35c(void)

{
  _objc_opt_self(&PTR_PTR_1129665a0);
  return;
}



/* Entry: 103f1f37c; end: 103f1f387; -[SCStoriesExperimentServiceKey key] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f37c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302e940);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302e940))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f1f388; end: 103f1f3e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f388(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e940);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f3e4; end: 103f1f423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f3e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e940);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100442cac();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f424; end: 103f1f477; -[SCStoriesExperimentServiceKey initWithKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11302e940);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000100442cac();
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f478; end: 103f1f4a7;  */

void FUN_103f1f478(void)

{
  func_0x000100442cac();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f1f4a8; end: 103f1f4bb; -[SCStoriesExperimentServiceKey .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302e940 + 8))
  ;
  return;
}



/* Entry: 103f1f4bc; end: 103f1f4c7; -[SCStoriesStringExperimentServiceKey defaultValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f4bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302e948);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302e948))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f1f4c8; end: 103f1f50f;  */

void FUN_103f1f4c8(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f1f510; end: 103f1f593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e948);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e940);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100442cac();
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f594; end: 103f1f5e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e948);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e940);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100442cac();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f5e4; end: 103f1f663; -[SCStoriesStringExperimentServiceKey initWithKey:defaultValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f5e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar2 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_11302e948);
  *puVar1 = param_4;
  puVar1[1] = uVar2;
  puVar1 = (undefined8 *)(param_1 + _DAT_11302e940);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000100442cac();
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f664; end: 103f1f677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f664(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(unaff_x20 + _DAT_11302e948 + 8));
  return;
}



/* Entry: 103f1f678; end: 103f1f68b; -[SCStoriesStringExperimentServiceKey .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302e948 + 8))
  ;
  return;
}



/* Entry: 103f1f68c; end: 103f1f69b; -[SCStoriesBoolExperimentServiceKey defaultValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f1f68c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e950);
}



/* Entry: 103f1f69c; end: 103f1f70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f69c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11302e950) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e940);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100442cac();
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f710; end: 103f1f773; -[SCStoriesBoolExperimentServiceKey initWithKey:defaultValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f710(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined1 *)(param_1 + _DAT_11302e950) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_11302e940);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000100442cac();
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f774; end: 103f1f78f; -[SCStoriesIntExperimentServiceKey defaultValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f1f774(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e958);
}



/* Entry: 103f1f790; end: 103f1f7f3; -[SCStoriesIntExperimentServiceKey initWithKey:defaultValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f790(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lStack_30;
  undefined8 uStack_28;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_1 + _DAT_11302e958) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_11302e940);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000100442cac();
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f7f4; end: 103f1f7f7;  */

void FUN_103f1f7f4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f1f7f8; end: 103f1f807; -[SCStoriesFloatExperimentServiceKey defaultValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f1f7f8(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302e960);
}



/* Entry: 103f1f808; end: 103f1f883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f808(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_11302e960) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e940);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000100442cac();
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f884; end: 103f1f8cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f884(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + _DAT_11302e960) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e940);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000100442cac();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f8d0; end: 103f1f93b; -[SCStoriesFloatExperimentServiceKey initWithKey:defaultValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f8d0(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lStack_40;
  undefined8 uStack_38;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined4 *)(param_2 + _DAT_11302e960) = param_1;
  puVar1 = (undefined8 *)(param_2 + _DAT_11302e940);
  *puVar1 = param_4;
  puVar1[1] = param_3;
  func_0x000100442cac();
  lStack_40 = param_2;
  uStack_38 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f93c; end: 103f1f957; -[SCStoriesProtoExperimentServiceKey defaultValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f93c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e968));
  return;
}



/* Entry: 103f1f958; end: 103f1f9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f958(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [16];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + *param_4) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e940);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100442cac();
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1f9d4; end: 103f1fa43; -[SCStoriesProtoExperimentServiceKey initWithKey:defaultValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1f9d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lStack_30;
  undefined8 uStack_28;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_1 + _DAT_11302e968) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_11302e940);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  func_0x000100442cac();
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_30,puVar2);
  return;
}



/* Entry: 103f1fa44; end: 103f1fa53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1fa44(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + _DAT_11302e968));
  return;
}



/* Entry: 103f1fa54; end: 103f1fa87;  */

void FUN_103f1fa54(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f1fa88; end: 103f1fa97; -[SCStoriesProtoExperimentServiceKey .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1fa88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302e968));
  return;
}



/* Entry: 103f1fa98; end: 103f1faf7;  */

void FUN_103f1fa98(void)

{
  _objc_opt_self(&PTR_PTR_112966710);
  return;
}



/* Entry: 103f1faf8; end: 103f1fb07;  */

void FUN_103f1faf8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f1fb08; end: 103f1fb17; -[_TtC23SCAvatarFactoryServices22SCAvatarFactoryService avatarFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1fb08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ea60));
  return;
}



/* Entry: 103f1fb18; end: 103f1fb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1fb18(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302ea60) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1fb64; end: 103f1fb9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1fb64(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11302ea60) = param_1;
  func_0x00010029447c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1fba0; end: 103f1fbf7; -[_TtC23SCAvatarFactoryServices22SCAvatarFactoryService initWithAvatarFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1fba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_11302ea60) = param_3;
  lVar2 = param_1;
  func_0x00010029447c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103f1fbf8; end: 103f1fc53; -[_TtC23SCAvatarFactoryServices22SCAvatarFactoryService init] */

void FUN_103f1fbf8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAvatarFactoryServices.SCAvatarFactoryService",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1fc24);
  (*pcVar1)();
}



/* Entry: 103f1fc54; end: 103f1fc6b; -[_TtC23SCAvatarFactoryServices22SCAvatarFactoryService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1fc54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302ea60));
  return;
}



/* Entry: 103f1fc6c; end: 103f1fd0b;  */

void FUN_103f1fc6c(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103f1fd0c; end: 103f1fd1b;  */

void FUN_103f1fd0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103f1fd1c; end: 103f1fd57; -[SCSnapchatterNameExtractor init] */

void FUN_103f1fd1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1fd58; end: 103f1fd6b;  */

void FUN_103f1fd58(void)

{
  FUN_103f1fed4();
  return;
}



/* Entry: 103f1fd6c; end: 103f1fe1f; +[SCSnapchatterNameExtractor firstNameFromDisplayName:error:] */

/* WARNING: Removing unreachable block (ram,0x000103f1fdb0) */
/* WARNING: Removing unreachable block (ram,0x000103f1fdfc) */
/* WARNING: Removing unreachable block (ram,0x000103f1fdb4) */

void FUN_103f1fd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  FUN_103f1fed4();
  _swift_bridgeObjectRelease(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103f1fe20; end: 103f1fe9f; +[SCSnapchatterNameExtractor firstNameOrNilFromDisplayName:] */

/* WARNING: Removing unreachable block (ram,0x000103f1fe4c) */

void FUN_103f1fe20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  FUN_103f1fed4();
  _swift_bridgeObjectRelease(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103f1fea0; end: 103f1fed3;  */

void FUN_103f1fea0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f1fed4; end: 103f2001f;  */

void FUN_103f1fed4(ulong param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar6 = param_2 >> 0x38 & 0xf;
  }
  if (uVar6 == 0) {
    func_0x000103f20170();
    _swift_allocError(&UNK_110722110,param_1,0,0);
    _swift_willThrow();
  }
  else {
    uVar3 = param_2;
    uVar5 = param_2;
    _swift_bridgeObjectRetain();
    uVar6 = 0;
    while (__sSS8IteratorV4nextSJSgyF(), uVar4 = uVar3, uVar3 = uVar5, uVar5 != 0) {
      while (((uVar4 == 0x20 && (uVar3 == 0xe100000000000000)) ||
             (uVar5 = uVar4,
             __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                       (), (uVar5 & 1) != 0))) {
        if (2 < uVar6) {
          _swift_bridgeObjectRelease(uVar3);
          goto LAB_103f1fff8;
        }
        uVar5 = uVar3;
        __sSS6appendyySJF();
        _swift_bridgeObjectRelease();
        __sSS8IteratorV4nextSJSgyF();
        uVar4 = uVar3;
        uVar3 = uVar5;
        if (uVar5 == 0) goto LAB_103f1fff8;
      }
      uVar5 = uVar3;
      __sSS6appendyySJF(uVar4);
      _swift_bridgeObjectRelease();
      bVar2 = SCARRY8(uVar6,1);
      uVar6 = uVar6 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1ffb8);
        (*pcVar1)();
      }
    }
LAB_103f1fff8:
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 103f20020; end: 103f20023;  */

void FUN_103f20020(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ea90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaba70;
  _swift_getWitnessTable(&UNK_10dcaba70,&UNK_110722110);
  puRam000000011302ea90 = puVar1;
  return;
}



/* Entry: 103f20024; end: 103f20063;  */

void FUN_103f20024(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ea90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaba70;
  _swift_getWitnessTable(&UNK_10dcaba70,&UNK_110722110);
  puRam000000011302ea90 = puVar1;
  return;
}



/* Entry: 103f20064; end: 103f2014f;  */

uint FUN_103f20064(uint *param_1,int param_2)

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



/* Entry: 103f20150; end: 103f201af;  */

void FUN_103f20150(void)

{
  _objc_opt_self(&PTR_PTR_112966be0);
  return;
}



/* Entry: 103f201b0; end: 103f201bf; -[_TtC32SCBasemapPersonalizationServices32SCBasemapPersonalizationServices basemapPersonalization] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f201b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302eac8));
  return;
}



/* Entry: 103f201c0; end: 103f2020b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f201c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302eac8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f2020c; end: 103f2026b; -[_TtC32SCBasemapPersonalizationServices32SCBasemapPersonalizationServices init] */

void FUN_103f2020c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBasemapPersonalizationServices.SCBasemapPersonalizationServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f20238);
  (*pcVar1)();
}



/* Entry: 103f2026c; end: 103f2028f; -[_TtC32SCBasemapPersonalizationServices32SCBasemapPersonalizationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2026c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302eac8));
  return;
}



/* Entry: 103f20290; end: 103f202a3; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView frameForButtonItemType:inView:] */

undefined8 FUN_103f20290(void)

{
  return 0;
}



/* Entry: 103f202a4; end: 103f202c3; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView initWithFrame:] */

void FUN_103f202a4(void)

{
  FUN_103f2656c();
  return;
}



/* Entry: 103f202c4; end: 103f203a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f202c4(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [24];
  
  FUN_103f26754();
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_layoutSubviews_112600e60);
  lVar2 = _DAT_11302eaf8;
  _swift_beginAccess(unaff_x20 + _DAT_11302eaf8,auStack_68,0,0);
  if (*(long *)(unaff_x20 + lVar2) != 0) {
    FUN_103f22064();
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302eb00);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  uVar3 = unaff_x20;
  func_0x000107c438d4();
  _CGRectEqualToRect();
  if ((uVar3 & 1) == 0) {
    func_0x000107c438d4();
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302eb08);
    _swift_bridgeObjectRetain(uVar4);
    FUN_103f243ac();
    _swift_bridgeObjectRelease(uVar4);
  }
  return;
}



/* Entry: 103f203a8; end: 103f203cf; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView layoutSubviews] */

void FUN_103f203a8(undefined8 param_1)

{
  _objc_retain();
  FUN_103f202c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103f203d0; end: 103f203d3;  */

void FUN_103f203d0(void)

{
  return;
}



/* Entry: 103f203d4; end: 103f203d7; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView addSubviewToScrollView:] */

void FUN_103f203d4(void)

{
  return;
}



/* Entry: 103f203d8; end: 103f203ef; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f203d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302eb10;
  _swift_beginAccess(param_1 + _DAT_11302eb10,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f203f0; end: 103f203fb; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f203f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302eb10;
  _swift_beginAccess(param_1 + _DAT_11302eb10,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f203fc; end: 103f20547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f203fc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302eb10;
  _swift_beginAccess(unaff_x20 + _DAT_11302eb10,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Entry: 103f20548; end: 103f20607; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView items] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f20548(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302eb18;
  _swift_beginAccess(param_1 + _DAT_11302eb18,auStack_38,0,0);
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  _swift_bridgeObjectRetain(uVar4);
  uVar2 = 0x11302ec50;
  func_0x0001000285a8(0x11302ec50,&UNK_10dcabc58);
  uVar3 = uVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar4,uVar2);
  _swift_bridgeObjectRelease(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103f20608; end: 103f206d7; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView setItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f20608(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0x11302ec50;
  func_0x0001000285a8(0x11302ec50,&UNK_10dcabc58);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  lVar1 = _DAT_11302eb18;
  _swift_beginAccess(param_1 + _DAT_11302eb18,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 103f206d8; end: 103f20717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f206d8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302eb18;
  _swift_beginAccess(unaff_x20 + _DAT_11302eb18,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103f27c5c;
  return auVar2;
}



/* Entry: 103f20718; end: 103f2071b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f20718(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302eaf8;
  _swift_beginAccess(unaff_x20 + _DAT_11302eaf8,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 103f2071c; end: 103f207d3; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView setSelectedItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2071c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302eaf8;
  _swift_beginAccess(param_1 + _DAT_11302eaf8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 103f207d4; end: 103f20813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f207d4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302eaf8;
  _swift_beginAccess(unaff_x20 + _DAT_11302eaf8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103f20814;
  return auVar2;
}



/* Entry: 103f20814; end: 103f20817;  */

void FUN_103f20814(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103f20818; end: 103f2089b; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f20818(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302eb20;
  _swift_beginAccess(param_1 + _DAT_11302eb20,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 103f2089c; end: 103f20937; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView setEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f2089c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302eb20;
  _swift_beginAccess(param_1 + _DAT_11302eb20,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 103f20938; end: 103f20977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f20938(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302eb20;
  _swift_beginAccess(unaff_x20 + _DAT_11302eb20,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103f27c60;
  return auVar2;
}



/* Entry: 103f20978; end: 103f20983; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView view] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f20978(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302eb28;
  _swift_beginAccess(param_1 + _DAT_11302eb28,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f20984; end: 103f209c7;  */

void FUN_103f20984(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f209c8; end: 103f209d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f209c8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302eb28;
  _swift_beginAccess(unaff_x20 + _DAT_11302eb28,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 103f209d4; end: 103f20a13;  */

void FUN_103f209d4(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + lVar1);
  return;
}



/* Entry: 103f20a14; end: 103f20a1f; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView setView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f20a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302eb28;
  _swift_beginAccess(param_1 + _DAT_11302eb28,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f20a20; end: 103f20bbf;  */

void FUN_103f20a20(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103f20bc0; end: 103f20bdf; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView shouldHideItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f20bc0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_11302eb30);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_103f20be0;
    puStack_60 = &UNK_110722500;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103f20be0; end: 103f20c33;  */

uint FUN_103f20be0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  uVar4 = param_2;
  _swift_unknownObjectRetain(param_2);
  uVar3 = (uint)uVar4;
  (*pcVar1)();
  _swift_release(uVar2);
  _swift_unknownObjectRelease(param_2);
  return uVar3 & 1;
}



/* Entry: 103f20c34; end: 103f20cef; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView setShouldHideItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f20c34(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  __Block_copy();
  if (param_3 == 0) {
    uVar5 = 0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1107224e8;
    _swift_allocObject(&UNK_1107224e8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    uVar5 = 0x103f27c58;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11302eb30);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = puVar4;
  _objc_retain(param_1);
  func_0x000100d72700(uVar2,uVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 103f20cf0; end: 103f20cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f20cf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302eb30);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100d72700(uVar2,uVar3);
  return;
}



/* Entry: 103f20cfc; end: 103f20d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f20cfc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11302eb30;
  _swift_beginAccess(unaff_x20 + _DAT_11302eb30,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x103f27c64;
  return auVar2;
}



/* Entry: 103f20d3c; end: 103f20d4f; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView shouldDisableItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f20d3c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + _DAT_11302eb38);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_103f20be0;
    puStack_60 = &UNK_1107224b0;
    ppuVar3 = &puStack_78;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103f20d50; end: 103f20df7;  */

void FUN_103f20d50(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(param_1 + *param_3);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  if (*plVar1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    lVar4 = plVar1[1];
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_103f20be0;
    ppuVar3 = &puStack_78;
    uStack_60 = param_4;
    lStack_58 = *plVar1;
    lStack_50 = lVar4;
    __Block_copy(ppuVar3);
    lVar2 = lStack_50;
    _swift_retain(lVar4);
    _swift_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 103f20df8; end: 103f20e03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103f20df8(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_11302eb38);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  FUN_103f26774(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 103f20e04; end: 103f20e57;  */

undefined1  [16] FUN_103f20e04(long *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_1);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  FUN_103f26774(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 103f20e58; end: 103f20f13; -[_TtC18UnifiedToolbarImpl33UnifiedPreviewVerticalToolbarView setShouldDisableItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f20e58(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  __Block_copy();
  if (param_3 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_110722498;
    _swift_allocObject(&UNK_110722498,0x18,7);
    *(long *)(puVar4 + 0x10) = param_3;
    pcVar5 = FUN_103f27a0c;
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11302eb38);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = pcVar5;
  puVar1[1] = puVar4;
  _objc_retain(param_1);
  func_0x000100d72700(uVar2,uVar3);
  _objc_release(param_1);
  return;
}



/* Entry: 103f20f14; end: 103f20f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f20f14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302eb38);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100d72700(uVar2,uVar3);
  return;
}



/* Entry: 103f20f20; end: 103f20f77;  */

void FUN_103f20f20(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000100d72700(uVar2,uVar3);
  return;
}


