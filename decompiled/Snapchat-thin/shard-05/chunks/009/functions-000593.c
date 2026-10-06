/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10430e868; end: 10430e887; -[_TtC21SCPhoneCodeSaberScope24SCPhoneCodeScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306d360));
  return;
}



/* Entry: 10430e888; end: 10430e8f7;  */

void FUN_10430e888(void)

{
  _objc_opt_self(&PTR_PTR_112998d70);
  return;
}



/* Entry: 10430e8f8; end: 10430e8fb;  */

void FUN_10430e8f8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430e8fc; end: 10430e943; -[_TtC24SCRegistrationSaberScope19SCRegistrationScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e8fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d3c0;
  _swift_beginAccess(param_1 + _DAT_11306d3c0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430e944; end: 10430e99b; -[_TtC24SCRegistrationSaberScope19SCRegistrationScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e944(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d3c0;
  _swift_beginAccess(param_1 + _DAT_11306d3c0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10430e99c; end: 10430e9bb; -[_TtC24SCRegistrationSaberScope19SCRegistrationScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e99c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306d3c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430e9bc; end: 10430e9cf; -[_TtC24SCRegistrationSaberScope19SCRegistrationScope registrationContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e9bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306d3d0));
  return;
}



/* Entry: 10430e9d0; end: 10430ea87; -[_TtC24SCRegistrationSaberScope19SCRegistrationScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430e9d0(long param_1)

{
  func_0x00010430ea18(param_1 + _DAT_11306d3c0);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d3c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306d3d0));
  return;
}



/* Entry: 10430ea88; end: 10430eaef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430ea88(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10430ed50();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306d3e0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10430eaf0; end: 10430eb3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430eaf0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306d3e0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430eb3c; end: 10430ec43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10430eb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  FUN_10430ecdc();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306d3c0;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306d3c0,0);
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_1);
  *(undefined8 *)(lVar4 + _DAT_11306d3c8) = param_2;
  *(undefined8 *)(lVar4 + _DAT_11306d3d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_2);
  _objc_retain(param_3);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 10430ec44; end: 10430ecdb; -[_TtC24SCRegistrationSaberScope27SCRegistrationScopeServices buildWithDelegate:uiContainer:registrationContext:] */

void FUN_10430ec44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10430eb3c(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10430ecdc; end: 10430ed2f;  */

void FUN_10430ecdc(void)

{
  _objc_opt_self(&PTR_PTR_112998e30);
  return;
}



/* Entry: 10430ed30; end: 10430ed4f; -[_TtC24SCRegistrationSaberScope27SCRegistrationScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430ed30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306d3e0));
  return;
}



/* Entry: 10430ed50; end: 10430ed6f;  */

void FUN_10430ed50(void)

{
  _objc_opt_self(&PTR_PTR_112998f00);
  return;
}



/* Entry: 10430ed70; end: 10430ed73;  */

void FUN_10430ed70(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430ed74; end: 10430ed93; -[SCCountryCodePickerScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430ed74(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306d438));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430ed94; end: 10430eddb; -[SCCountryCodePickerScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430ed94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d440;
  _swift_beginAccess(param_1 + _DAT_11306d440,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430eddc; end: 10430ee33; -[SCCountryCodePickerScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430eddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d440;
  _swift_beginAccess(param_1 + _DAT_11306d440,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10430ee34; end: 10430ee43; -[SCCountryCodePickerScope shouldShowDefaultCountryCodeOnTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10430ee34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306d448);
}



/* Entry: 10430ee44; end: 10430ee57; -[SCCountryCodePickerScope countryCodeShouldUseBetterSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10430ee44(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306d450);
}



/* Entry: 10430ee58; end: 10430eeb3; -[SCCountryCodePickerScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10430ee58(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d438));
  param_1 = param_1 + _DAT_11306d440;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10430eeb4; end: 10430ef1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430eeb4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010009aa38();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306d460) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10430ef1c; end: 10430ef67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430ef1c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306d460) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430ef68; end: 10430f077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10430ef68(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x00010009a170();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306d440;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306d440,0);
  *(long *)(lVar4 + _DAT_11306d438) = param_1;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_2);
  *(undefined1 *)(lVar4 + _DAT_11306d448) = param_3;
  *(undefined1 *)(lVar4 + _DAT_11306d450) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 10430f078; end: 10430f107; -[_TtC29SCCountryCodePickerSaberScope32SCCountryCodePickerScopeServices buildWithUIContainer:delegate:shouldShowDefaultCountryCodeOnTop:countryCodeShouldUseBetterSource:] */

void FUN_10430f078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10430ef68(param_3,param_4,param_5,param_6);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10430f108; end: 10430f13b;  */

void FUN_10430f108(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430f13c; end: 10430f15f; -[_TtC29SCCountryCodePickerSaberScope32SCCountryCodePickerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f13c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306d460));
  return;
}



/* Entry: 10430f160; end: 10430f1a7; -[_TtC23SCUserVerificationScope23SCUserVerificationScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f160(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d4b8;
  _swift_beginAccess(param_1 + _DAT_11306d4b8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430f1a8; end: 10430f1ff; -[_TtC23SCUserVerificationScope23SCUserVerificationScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f1a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d4b8;
  _swift_beginAccess(param_1 + _DAT_11306d4b8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10430f200; end: 10430f20f; -[_TtC23SCUserVerificationScope23SCUserVerificationScope context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f200(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306d4c0));
  return;
}



/* Entry: 10430f210; end: 10430f22f; -[_TtC23SCUserVerificationScope23SCUserVerificationScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f210(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306d4c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430f230; end: 10430f23b; -[_TtC23SCUserVerificationScope23SCUserVerificationScope userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f230(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306d4d0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306d4d0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10430f23c; end: 10430f247; -[_TtC23SCUserVerificationScope23SCUserVerificationScope username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f23c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306d4d8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306d4d8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10430f248; end: 10430f253; -[_TtC23SCUserVerificationScope23SCUserVerificationScope authToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f248(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306d4e0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306d4e0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10430f254; end: 10430f29b;  */

void FUN_10430f254(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10430f29c; end: 10430f2ab; -[_TtC23SCUserVerificationScope23SCUserVerificationScope verificationFlowMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10430f29c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d4e8);
}



/* Entry: 10430f2ac; end: 10430f39f; -[_TtC23SCUserVerificationScope23SCUserVerificationScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f2ac(long param_1)

{
  func_0x00010430f330(param_1 + _DAT_11306d4b8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d4c0));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d4c8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d4d0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d4d8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306d4e0 + 8))
  ;
  return;
}



/* Entry: 10430f3a0; end: 10430f407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f3a0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10430f784();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306d4f8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10430f408; end: 10430f453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f408(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306d4f8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430f454; end: 10430f5e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10430f454(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  FUN_10430f70c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_11306d4b8;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306d4b8,0);
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_3);
  *(undefined8 *)(lVar5 + _DAT_11306d4c0) = param_2;
  *(long *)(lVar5 + _DAT_11306d4c8) = param_1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d4d0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d4d8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(lVar5 + _DAT_11306d4e0);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(lVar5 + _DAT_11306d4e8) = param_10;
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(param_9);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 10430f5e4; end: 10430f70b; -[_TtC23SCUserVerificationScope31SCUserVerificationScopeServices buildWithUIContainer:context:delegate:userId:username:authToken:verificationFlowMethod:] */

void FUN_10430f5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  uVar2 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  uVar3 = uVar2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10430f454(param_3,param_4,param_5,param_6,param_2,param_7,uVar2,param_8,uVar3,param_9);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10430f70c; end: 10430f72b;  */

void FUN_10430f70c(void)

{
  _objc_opt_self(&PTR_PTR_112999158);
  return;
}



/* Entry: 10430f72c; end: 10430f72f;  */

void FUN_10430f72c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430f730; end: 10430f763;  */

void FUN_10430f730(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430f764; end: 10430f783; -[_TtC23SCUserVerificationScope31SCUserVerificationScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306d4f8));
  return;
}



/* Entry: 10430f784; end: 10430f7a3;  */

void FUN_10430f784(void)

{
  _objc_opt_self(&PTR_PTR_112999248);
  return;
}



/* Entry: 10430f7a4; end: 10430f7a7;  */

void FUN_10430f7a4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430f7a8; end: 10430f7ef; -[_TtC22SCUnauthenticatedScope22SCUnauthenticatedScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f7a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d550;
  _swift_beginAccess(param_1 + _DAT_11306d550,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430f7f0; end: 10430f8d7; -[_TtC22SCUnauthenticatedScope22SCUnauthenticatedScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f7f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d550;
  _swift_beginAccess(param_1 + _DAT_11306d550,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10430f8d8; end: 10430f957; -[_TtC22SCUnauthenticatedScope22SCUnauthenticatedScope initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f8d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar1 = _DAT_11306d550;
  _swift_unknownObjectWeakInit(param_1 + _DAT_11306d550,0);
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  lStack_58 = param_1;
  lStack_50 = lVar2;
  _objc_msgSendSuper2(&lStack_58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430f958; end: 10430f983; -[_TtC22SCUnauthenticatedScope22SCUnauthenticatedScope init] */

void FUN_10430f958(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCUnauthenticatedScope.SCUnauthenticatedScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10430f984);
  (*pcVar1)();
}



/* Entry: 10430f984; end: 10430f993; -[_TtC22SCUnauthenticatedScope22SCUnauthenticatedScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10430f984(long param_1)

{
  param_1 = param_1 + _DAT_11306d550;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10430f994; end: 10430f9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430f994(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306d560) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430f9e0; end: 10430faab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10430f9e0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1;
  func_0x0001000a1ccc();
  lVar3 = lVar2;
  _objc_allocWithZone();
  lVar1 = _DAT_11306d550;
  _swift_unknownObjectWeakInit(lVar3 + _DAT_11306d550,0);
  _swift_beginAccess(lVar3 + lVar1,auStack_58,1,0);
  _swift_unknownObjectWeakAssign(lVar3 + lVar1,param_1);
  plVar4 = &lStack_68;
  lStack_68 = lVar3;
  lStack_60 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  aplStack_80[0] = plVar4;
  func_0x00010008a7c8(&uStack_70,aplStack_80);
  func_0x000100083b20(aplStack_80);
  _swift_release(uStack_70);
  _swift_unknownObjectRelease(aplStack_80[0]);
  return plVar4;
}



/* Entry: 10430faac; end: 10430fb07; -[_TtC22SCUnauthenticatedScope30SCUnauthenticatedScopeServices buildWithDelegate:] */

void FUN_10430faac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10430f9e0(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10430fb08; end: 10430fb33; -[_TtC22SCUnauthenticatedScope30SCUnauthenticatedScopeServices init] */

void FUN_10430fb08(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCUnauthenticatedScope.SCUnauthenticatedScopeServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10430fb34);
  (*pcVar1)();
}



/* Entry: 10430fb34; end: 10430fb37;  */

void FUN_10430fb34(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430fb38; end: 10430fb6b;  */

void FUN_10430fb38(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430fb6c; end: 10430fb8b; -[_TtC22SCUnauthenticatedScope30SCUnauthenticatedScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430fb6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306d560));
  return;
}



/* Entry: 10430fb8c; end: 10430fbaf;  */

undefined8 FUN_10430fb8c(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10430fbb0; end: 10430fbb3;  */

void FUN_10430fbb0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10430fbb4; end: 10430fbc3; -[_TtC31SCBitmojiAvatarBuilderLensScope31SCBitmojiAvatarBuilderLensScope renderTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430fbb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306d5b8));
  return;
}



/* Entry: 10430fbc4; end: 10430fc0b; -[_TtC31SCBitmojiAvatarBuilderLensScope31SCBitmojiAvatarBuilderLensScope gestureRecognizerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430fbc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d5c0;
  _swift_beginAccess(param_1 + _DAT_11306d5c0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430fc0c; end: 10430fc63; -[_TtC31SCBitmojiAvatarBuilderLensScope31SCBitmojiAvatarBuilderLensScope setGestureRecognizerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430fc0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d5c0;
  _swift_beginAccess(param_1 + _DAT_11306d5c0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10430fc64; end: 10430fc73; -[_TtC31SCBitmojiAvatarBuilderLensScope31SCBitmojiAvatarBuilderLensScope viewControllerLifecycleObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430fc64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306d5c8));
  return;
}



/* Entry: 10430fc74; end: 10430fc83; -[_TtC31SCBitmojiAvatarBuilderLensScope31SCBitmojiAvatarBuilderLensScope avatarBuilderAvatarConfigObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430fc74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306d5d0));
  return;
}



/* Entry: 10430fc84; end: 10430fccb; -[_TtC31SCBitmojiAvatarBuilderLensScope31SCBitmojiAvatarBuilderLensScope uriHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430fc84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d5d8;
  _swift_beginAccess(param_1 + _DAT_11306d5d8,auStack_38,0,0);
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10430fccc; end: 10430fd2f; -[_TtC31SCBitmojiAvatarBuilderLensScope31SCBitmojiAvatarBuilderLensScope setUriHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430fccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d5d8;
  _swift_beginAccess(param_1 + _DAT_11306d5d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRelease(uVar2);
  return;
}



/* Entry: 10430fd30; end: 10430fd3f; -[_TtC31SCBitmojiAvatarBuilderLensScope31SCBitmojiAvatarBuilderLensScope framesPerSecond] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10430fd30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d5e0);
}



/* Entry: 10430fd40; end: 10430fda7; -[_TtC31SCBitmojiAvatarBuilderLensScope31SCBitmojiAvatarBuilderLensScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430fd40(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d5b8));
  func_0x00010169b47c(param_1 + _DAT_11306d5c0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d5c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d5d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11306d5d8));
  return;
}



/* Entry: 10430fda8; end: 10430fe0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430fda8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010023c048();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11306d5f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10430fe10; end: 10430fe5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10430fe10(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306d5f0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10430fe5c; end: 10430ffb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10430fe5c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_b0 [2];
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = param_2;
  func_0x00010023bd70();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_11306d5c0;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_11306d5c0,0);
  *(long *)(lVar4 + _DAT_11306d5b8) = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_88,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  *(undefined8 *)(lVar4 + _DAT_11306d5c8) = param_4;
  *(undefined8 *)(lVar4 + _DAT_11306d5d0) = param_5;
  *(undefined8 *)(lVar4 + _DAT_11306d5d8) = param_6;
  *(undefined8 *)(lVar4 + _DAT_11306d5e0) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_98 = lVar4;
  lStack_90 = lVar3;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _swift_unknownObjectRetain(param_6);
  plVar5 = &lStack_98;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_b0[0] = plVar5;
  func_0x00010008a7c8(&uStack_a0,aplStack_b0);
  func_0x000100083b20(aplStack_b0);
  _swift_release(uStack_a0);
  _swift_unknownObjectRelease(aplStack_b0[0]);
  return plVar5;
}



/* Entry: 10430ffb4; end: 104310097; -[_TtC31SCBitmojiAvatarBuilderLensScope39SCBitmojiAvatarBuilderLensScopeServices buildWithRenderTarget:gestureRecognizerDelegate:viewControllerLifecycleObservable:avatarBuilderAvatarConfigObservable:uriHandler:framesPerSecond:] */

void FUN_10430ffb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _swift_unknownObjectRetain(param_8);
  _objc_retain(param_2);
  uVar1 = param_4;
  FUN_10430fe5c(param_1,param_4,param_5,param_6,param_7,param_8);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_6);
  _objc_release(param_7);
  _swift_unknownObjectRelease(param_8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104310098; end: 10431009b;  */

void FUN_104310098(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10431009c; end: 1043100cf;  */

void FUN_10431009c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043100d0; end: 1043100f3; -[_TtC31SCBitmojiAvatarBuilderLensScope39SCBitmojiAvatarBuilderLensScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043100d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11306d5f0));
  return;
}



/* Entry: 1043100f4; end: 1043101eb;  */

long FUN_1043100f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1043101ec; end: 10431049b;  */

undefined8 * FUN_1043101ec(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  cVar1 = *(char *)(param_2 + 6);
  if (cVar1 == -1) {
    uVar3 = param_2[2];
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  else {
    uVar3 = param_2[2];
    uVar5 = param_2[3];
    uVar4 = param_2[4];
    uVar2 = param_2[5];
    func_0x000104310120(uVar3,uVar5,uVar4,uVar2,cVar1);
    param_1[2] = uVar3;
    param_1[3] = uVar5;
    param_1[4] = uVar4;
    param_1[5] = uVar2;
    *(char *)(param_1 + 6) = cVar1;
  }
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  uVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar3;
  uVar5 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar5;
  uVar3 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar3;
  uVar3 = param_2[0xf];
  uVar4 = param_2[0x10];
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar4;
  uVar4 = param_2[0x11];
  uVar2 = param_2[0x12];
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar2;
  uVar2 = param_2[0x13];
  param_1[0x13] = uVar2;
  _objc_retain();
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 10431049c; end: 1043104cf;  */

undefined8 FUN_10431049c(undefined8 param_1)

{
  (*(code *)(undefined *)0x104310ed8)();
  return param_1;
}



/* Entry: 1043104d0; end: 1043105b3;  */

undefined8 * FUN_1043104d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  if (*(char *)(param_1 + 6) != -1) {
    cVar2 = *(char *)(param_2 + 6);
    if (cVar2 != -1) {
      uVar4 = param_1[2];
      uVar8 = param_1[3];
      uVar3 = param_1[4];
      uVar1 = param_1[5];
      uVar5 = param_2[2];
      uVar7 = param_2[5];
      uVar6 = param_2[4];
      param_1[3] = param_2[3];
      param_1[2] = uVar5;
      param_1[5] = uVar7;
      param_1[4] = uVar6;
      *(char *)(param_1 + 6) = cVar2;
      func_0x0001043101ac(uVar4,uVar8,uVar3,uVar1);
      goto LAB_104310540;
    }
    FUN_10431049c(param_1 + 2);
  }
  uVar4 = param_2[2];
  uVar8 = param_2[5];
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  param_1[5] = uVar8;
  param_1[4] = uVar3;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
LAB_104310540:
  uVar3 = param_1[8];
  uVar4 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar4;
  _objc_release(uVar3);
  uVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar4;
  uVar4 = param_2[0xc];
  uVar3 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar4;
  uVar4 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[0x11];
  uVar3 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[0x13];
  uVar3 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Entry: 1043105b4; end: 104310713;  */

int FUN_1043105b4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104310714; end: 104310757;  */

void FUN_104310714(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 104310758; end: 10431079f;  */

void FUN_104310758(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1043107a0; end: 1043107bf; -[_TtC31SCBitmojiEditAvatarBuilderScope31SCBitmojiEditAvatarBuilderScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043107a0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11306d678));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043107c0; end: 1043107cf; -[_TtC31SCBitmojiEditAvatarBuilderScope31SCBitmojiEditAvatarBuilderScope context] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043107c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306d680));
  return;
}



/* Entry: 1043107d0; end: 104310817; -[_TtC31SCBitmojiEditAvatarBuilderScope31SCBitmojiEditAvatarBuilderScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043107d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11306d688;
  _swift_beginAccess(param_1 + _DAT_11306d688,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104310818; end: 10431086f; -[_TtC31SCBitmojiEditAvatarBuilderScope31SCBitmojiEditAvatarBuilderScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104310818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11306d688;
  _swift_beginAccess(param_1 + _DAT_11306d688,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104310870; end: 10431087f; -[_TtC31SCBitmojiEditAvatarBuilderScope31SCBitmojiEditAvatarBuilderScope pageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104310870(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306d690);
}



/* Entry: 104310880; end: 104310917; -[_TtC31SCBitmojiEditAvatarBuilderScope31SCBitmojiEditAvatarBuilderScope sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104310880(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_1138133c8,lVar1);
  __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104310918; end: 104310973; -[_TtC31SCBitmojiEditAvatarBuilderScope31SCBitmojiEditAvatarBuilderScope profileSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104310918(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1138133d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1138133d0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104310974; end: 10431099f; -[_TtC31SCBitmojiEditAvatarBuilderScope31SCBitmojiEditAvatarBuilderScope init] */

void FUN_104310974(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiEditAvatarBuilderScope.SCBitmojiEditAvatarBuilderScope",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043109a0);
  (*pcVar1)();
}



/* Entry: 1043109a0; end: 104310a8f; -[_TtC31SCBitmojiEditAvatarBuilderScope31SCBitmojiEditAvatarBuilderScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043109a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11306d678));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306d680));
  func_0x000104310a20(param_1 + _DAT_11306d688);
  lVar1 = _DAT_1138133c8;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1138133d0 + 8))
  ;
  return;
}



/* Entry: 104310a90; end: 104310ae3;  */

void FUN_104310a90(void)

{
  undefined8 in_x3;
  
  func_0x00010afa7be8(in_x3);
  func_0x00010bf23c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 104310ae4; end: 104310b9b; -[_TtC31SCBitmojiEditAvatarBuilderScope39SCBitmojiEditAvatarBuilderScopeServices buildWithUIContainer:context:delegate:linkPage:] */

void FUN_104310ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  func_0x00010afa7be8(param_6);
  uVar1 = param_1;
  func_0x00010bf23c40(param_1,param_2,param_3,param_4,param_5,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104310b9c; end: 104310d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104310b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long extraout_x8;
  long lVar7;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  uStack_b8 = param_4;
  uStack_b0 = param_5;
  __s10Foundation4UUIDVMa();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar4 = 0;
  func_0x0001002a7688();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_11306d688;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_11306d688,0);
  *(undefined8 *)(lVar5 + _DAT_11306d678) = param_1;
  *(undefined8 *)(lVar5 + _DAT_11306d680) = param_2;
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_3);
  *(undefined8 *)(lVar5 + _DAT_11306d690) = uStack_b8;
  puVar1 = (undefined8 *)(lVar5 + _DAT_1138133d0);
  *puVar1 = uStack_b0;
  puVar1[1] = param_6;
  _swift_bridgeObjectRetain(param_6);
  _swift_unknownObjectRetain(param_1);
  _objc_retain(param_2);
  __s10Foundation4UUIDVACycfC(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar7 + 0x20))
            (lVar5 + _DAT_1138133c8,auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  plVar6 = &lStack_88;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 104310d40; end: 104310e1b; -[_TtC31SCBitmojiEditAvatarBuilderScope39SCBitmojiEditAvatarBuilderScopeServices buildWithUIContainer:context:delegate:pageType:profileSessionId:] */

void FUN_104310d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  
  if (param_7 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  }
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104310b9c(param_3,param_4,param_5,param_6,param_7,param_2);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104310e1c; end: 104310e47; -[_TtC31SCBitmojiEditAvatarBuilderScope39SCBitmojiEditAvatarBuilderScopeServices init] */

void FUN_104310e1c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBitmojiEditAvatarBuilderScope.SCBitmojiEditAvatarBuilderScopeServices",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104310e48);
  (*pcVar1)();
}



/* Entry: 104310e48; end: 104310e4b;  */

void FUN_104310e48(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


