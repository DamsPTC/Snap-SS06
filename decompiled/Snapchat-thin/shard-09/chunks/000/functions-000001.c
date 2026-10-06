/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067ce93c; end: 1067ce9af;  */

void FUN_1067ce93c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (lVar1 != 0)) {
    if (param_2 != 0 || *(long *)(param_1 + 0x20) != 0) {
      func_0x00010be7dce0(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067ce9b0; end: 1067cebb3; -[SCComposerPeopleProfilePresenter _presentProfileWithSnapchatter:user:analyticsContext:expandBitmojiHeader:uiContainer:] */

void FUN_1067ce9b0(long param_1,undefined8 param_2,undefined *param_3,long param_4,ulong param_5,
                  undefined1 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  ulong uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  ulong uStack_70;
  undefined1 uStack_68;
  undefined4 uStack_67;
  undefined3 uStack_63;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010c0f1e60();
  if ((uint)uVar1 < 7) {
    uVar4 = *(undefined8 *)(&UNK_10dddf9e8 + (uVar1 & 0xffffffff) * 8);
  }
  else {
    uVar4 = 0;
  }
  uVar1 = param_5;
  func_0x00010c0f1e60();
  if ((uint)uVar1 < 7) {
    uStack_b0 = *(undefined8 *)(&UNK_10dddfa20 + (uVar1 & 0xffffffff) * 8);
  }
  else {
    uStack_b0 = 0;
  }
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0x22;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uVar1 = param_5;
  uStack_c0 = uVar4;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  uStack_67 = 0;
  uStack_63 = 0;
  uStack_70 = uVar1;
  uStack_68 = param_6;
  if (param_4 == 0) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    puVar2 = PTR_PTR_1126b15c8;
    _objc_alloc(PTR_PTR_1126b15c8);
    func_0x00010c040e60();
  }
  puVar3 = PTR_PTR_1126b3fa0;
  _objc_alloc();
  uStack_118 = CONCAT71(uStack_b7,uStack_b8);
  uStack_120 = uStack_c0;
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  uStack_f8 = CONCAT71(uStack_97,uStack_98);
  uStack_100 = uStack_a0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f0 = uStack_90;
  uStack_d8 = 0;
  _objc_retain(uVar1);
  uStack_d0 = uVar1;
  uStack_c8 = param_6;
  if (puVar3 == (undefined *)0x0) {
    _objc_release(uVar1);
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c032ec0(puVar3,param_2,&uStack_120,param_7,puVar2,param_1);
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067cebb4; end: 1067cebfb; -[SCComposerPeopleProfilePresenter friendProfileDidDismiss:] */

void FUN_1067cebb4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1067cebfc; end: 1067cec07; -[SCComposerPeopleProfilePresenter friendProfileDidDismiss:withRequestedChat:deeplinkType:] */

void FUN_1067cebfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentChat_deeplinkType__112620830,param_4,param_5);
  return;
}



/* Entry: 1067cec08; end: 1067ceca3; -[SCComposerPeopleProfilePresenter friendProfileDidDismiss:withRequestedCallInChat:media:] */

undefined8 FUN_1067cec08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24e080();
  _objc_release(param_4);
  _objc_release(uVar1);
  return 1;
}



/* Entry: 1067ceca4; end: 1067cee5b; -[SCComposerPeopleProfilePresenter presentChat:deeplinkType:] */

void FUN_1067ceca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1067ced4c;
  puStack_48 = &UNK_110847310;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1067cedd4;
  puStack_78 = &UNK_110847310;
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x00010c0c11e0(param_3,param_2,&puStack_60,&puStack_90);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067cee5c; end: 1067ceedf; -[SCComposerPeopleProfilePresenter .cxx_destruct] */

void FUN_1067cee5c(long param_1)

{
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



/* Entry: 1067ceee0; end: 1067cf003; -[SCComposerPeopleUserActionHandler initWithChatPresenter:conversationIdResolver:textSender:profilePresenter:friendActionSheetPresenter:] */

undefined1 *
FUN_1067ceee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f3360;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067cf004; end: 1067cf00f; -[SCComposerPeopleUserActionHandler pushToValdiMarshaller:] */

void FUN_1067cf004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 1067cf010; end: 1067cf463; -[SCComposerPeopleUserActionHandler openChatWithReq:] */

void FUN_1067cf010(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf02560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0f1e60();
  if ((uint)uVar4 < 7) {
    uVar10 = *(undefined8 *)(&UNK_10dddfa90 + (uVar4 & 0xffffffff) * 8);
  }
  else {
    uVar10 = 0xffffffffffffffff;
  }
  uVar4 = param_3;
  func_0x00010bf668c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10b8e0(uVar1,param_2,uVar2,uVar10,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar1);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b01c0;
    uVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260(puVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010bf50400(uVar10,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x1067cf278;
    puStack_68 = &UNK_11093d378;
    uStack_60 = uVar1;
    _objc_retain(param_3);
    uStack_58 = param_3;
    func_0x00010c25ff60(uVar7,param_2,&puStack_80);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar10);
    _objc_release(uStack_58);
    _objc_release(uVar1);
  }
  puVar5 = PTR_PTR_1126ae6b8;
  puVar8 = PTR_PTR_1126ce168;
  _objc_opt_new(PTR_PTR_1126ce168);
  func_0x00010c0860a0(puVar5,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1067cf464; end: 1067cf5f7; -[SCComposerPeopleUserActionHandler openProfileWithReq:] */

void FUN_1067cf464(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c290fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf02560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bf9bca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf668c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c230540(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10dd20(uVar10,param_2,lVar1,lVar2,lVar3,lVar4 != 0,lVar5,lVar6 != 0);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar10);
  puVar8 = PTR_PTR_1126ae6b8;
  puVar7 = PTR_PTR_1126ce170;
  _objc_opt_new(PTR_PTR_1126ce170);
  func_0x00010c0860a0(puVar8,param_2,puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1067cf5f8; end: 1067cf6e7; -[SCComposerPeopleUserActionHandler openActionSheetWithReq:] */

void FUN_1067cf5f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c290fa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf02560(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c10afa0(uVar6,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126ae6b8;
  puVar3 = PTR_PTR_1126ce178;
  _objc_opt_new(PTR_PTR_1126ce178);
  func_0x00010c0860a0(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067cf6e8; end: 1067cf6ef; -[SCComposerPeopleUserActionHandler chatPresenter] */

undefined8 FUN_1067cf6e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067cf6f0; end: 1067cf6f7; -[SCComposerPeopleUserActionHandler textSender] */

undefined8 FUN_1067cf6f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067cf6f8; end: 1067cf6ff; -[SCComposerPeopleUserActionHandler conversationIdResolver] */

undefined8 FUN_1067cf6f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1067cf700; end: 1067cf707; -[SCComposerPeopleUserActionHandler profilePresenter] */

undefined8 FUN_1067cf700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067cf708; end: 1067cf70f; -[SCComposerPeopleUserActionHandler friendActionSheetPresenter] */

undefined8 FUN_1067cf708(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1067cf710; end: 1067cf763; -[SCComposerPeopleUserActionHandler .cxx_destruct] */

void FUN_1067cf710(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067cf764; end: 1067cfa13; -[SCComposerPeopleUserActionHandlerFactoryImpl initWithConversationIdResolver:textSender:snapchattersDataFetcher:snapchatterPublicInfoFetcher:friendActionSheetScopeExposer:chatCameraScopeExposer:chatCameraScopeServices:friendProfileScopeExposer:callLauncher:circumstanceEngine:composerDeckConverter:chatNavigationService:] */

undefined8 *
FUN_1067cf764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f3368;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xc,param_14);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1067cfa14; end: 1067cfdf3; -[SCComposerPeopleUserActionHandlerFactoryImpl createUserActionHandlerWithPresentingViewController:] */

void FUN_1067cfa14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
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
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  uVar12 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar12);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  _objc_initWeak(auStack_80,param_3);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1067cfdf4;
  puStack_90 = &UNK_11093d3a8;
  puVar2 = PTR_PTR_1126ae720;
  lStack_88 = lVar1;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar16);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain();
  uVar15 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar15);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar9);
  uVar17 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar17);
  uVar14 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar14);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar10);
  puVar4 = PTR_PTR_1126ae720;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1067cfe24;
  puStack_f0 = &UNK_11093d3d8;
  _objc_copyWeak(auStack_b0,auStack_80);
  uStack_e8 = uVar15;
  uStack_e0 = uVar9;
  uStack_d8 = uVar17;
  puStack_d0 = puVar2;
  uStack_c8 = uVar14;
  uStack_c0 = uVar10;
  uStack_b8 = uVar12;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar11);
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar13);
  puVar5 = PTR_PTR_1126ae720;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x1067cfec0;
  puStack_128 = &UNK_11093d408;
  uStack_120 = uVar11;
  uStack_118 = uVar13;
  _objc_copyWeak(auStack_110,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  puVar6 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_148,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_148);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_110);
  _objc_release(uVar13);
  _objc_release(uVar11);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_b0);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(uVar17);
  _objc_release(uVar9);
  _objc_release(uVar15);
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar1);
  _objc_release(uVar12);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1067cfdf4; end: 1067cfe23;  */

void FUN_1067cfdf4(void)

{
  _objc_alloc(PTR_PTR_1126ce180);
  func_0x00010bffdc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067cfe24; end: 1067cffb3;  */

void FUN_1067cfe24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010c038f40(puVar1,param_2,param_1,1);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ce188;
  _objc_alloc(PTR_PTR_1126ce188);
  func_0x00010c049900();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067cffb4; end: 1067cffeb;  */

void FUN_1067cffb4(void)

{
  _objc_alloc(PTR_PTR_1126ce1a0);
  func_0x00010bffdd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067cffec; end: 1067d008f; -[SCComposerPeopleUserActionHandlerFactoryImpl .cxx_destruct] */

void FUN_1067cffec(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
  _objc_storeStrong(param_1 + 0x58,0);
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



/* Entry: 1067d0090; end: 1067d03c3; -[SCComposerPeopleUserActionHandlerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d0090(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar13 = param_1 + _DAT_11275090c;
  _objc_loadWeakRetained();
  lVar1 = lVar13;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = param_1 + _DAT_112750910;
  _objc_loadWeakRetained();
  lVar2 = lVar13;
  func_0x00010c26c760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  uVar14 = *(undefined8 *)(param_1 + _DAT_112750914);
  _objc_retain(uVar14);
  lVar12 = (long)_DAT_112750918;
  lVar13 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar3 = lVar13;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar12 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar4 = lVar12;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  lVar13 = param_1 + _DAT_11275091c;
  _objc_loadWeakRetained();
  lVar12 = lVar13;
  func_0x00010bf280c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112750920);
  _objc_retain(uVar15);
  uVar16 = *(undefined8 *)(param_1 + _DAT_112750924);
  _objc_retain(uVar16);
  lVar13 = param_1 + _DAT_112750928;
  _objc_loadWeakRetained();
  lVar5 = lVar13;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  lVar13 = param_1 + _DAT_11275092c;
  _objc_loadWeakRetained();
  lVar6 = lVar13;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf44a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar13);
  uVar8 = param_1 + _DAT_112750938;
  _objc_loadWeakRetained();
  uVar9 = uVar8;
  func_0x00010c072b80();
  _objc_release(uVar8);
  if ((uVar9 & 1) == 0) {
    param_1 = param_1 + _DAT_112750934;
    _objc_loadWeakRetained(param_1);
    lVar13 = param_1;
    func_0x00010bf37020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    lVar13 = 0;
  }
  _objc_initWeak(auStack_70,lVar13);
  puVar10 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ce1b0;
  _objc_alloc(PTR_PTR_1126ce1b0);
  func_0x00010c05a760();
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(lVar13);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(lVar12);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar14);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1067d03c4; end: 1067d04ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d03c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar9 = PTR_PTR_1126ce1a8;
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x50) + (long)_DAT_11275093c;
    _objc_loadWeakRetained();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar8 = *(undefined8 *)(param_1 + 0x70);
  param_1 = param_1 + 0x78;
  _objc_loadWeakRetained();
  func_0x00010c005660(puVar9,param_2,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,lVar10,uVar11,uVar12,uVar4,
                      uVar8,param_1);
  _objc_release(param_1);
  _objc_release(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1067d04ac; end: 1067d0573; -[SCComposerPeopleUserActionHandlerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d04ac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275093c);
  _objc_storeStrong(param_1 + _DAT_112750924,0);
  _objc_storeStrong(param_1 + _DAT_112750914,0);
  _objc_storeStrong(param_1 + _DAT_112750920,0);
  _objc_destroyWeak(param_1 + _DAT_112750938);
  _objc_destroyWeak(param_1 + _DAT_112750934);
  _objc_destroyWeak(param_1 + _DAT_11275092c);
  _objc_destroyWeak(param_1 + _DAT_112750910);
  _objc_destroyWeak(param_1 + _DAT_11275090c);
  _objc_destroyWeak(param_1 + _DAT_112750928);
  _objc_destroyWeak(param_1 + _DAT_11275091c);
  _objc_destroyWeak(param_1 + _DAT_112750918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750930);
  return;
}



/* Entry: 1067d0574; end: 1067d0617; -[SCComposerPeopleUserProvider initWithSnapchatterObservableRepository:userInfoServices:] */

undefined1 *
FUN_1067d0574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3370;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067d0618; end: 1067d07df; -[SCComposerPeopleUserProvider getUsersWithUserIds:source:] */

void FUN_1067d0618(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x10);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = *(undefined **)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar1);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_1067d07e0(param_4);
    uVar5 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c09dce0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(uVar1);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1067d07e0; end: 1067d090b;  */

undefined8 FUN_1067d07e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1133fad28;
  func_0x00010bf32ee0(PTR_PTR_1133fad28,param_2,param_1);
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 1;
  }
  else {
    puVar1 = PTR_PTR_1133fad30;
    func_0x00010bf32ee0(PTR_PTR_1133fad30,param_2,param_1);
    if (puVar1 == (undefined *)0x0) {
      uVar2 = 2;
    }
    else {
      puVar1 = PTR_PTR_1133fad48;
      func_0x00010bf32ee0(PTR_PTR_1133fad48,param_2,param_1);
      if (puVar1 == (undefined *)0x0) {
        uVar2 = 3;
      }
      else {
        puVar1 = PTR_PTR_1133fad50;
        func_0x00010bf32ee0(PTR_PTR_1133fad50,param_2,param_1);
        if (puVar1 == (undefined *)0x0) {
          uVar2 = 9;
        }
        else {
          puVar1 = PTR_PTR_1133fad40;
          func_0x00010bf32ee0(PTR_PTR_1133fad40,param_2,param_1);
          if (puVar1 == (undefined *)0x0) {
            uVar2 = 6;
          }
          else {
            puVar1 = PTR_PTR_1133fad58;
            func_0x00010bf32ee0(PTR_PTR_1133fad58,param_2,param_1);
            if (puVar1 == (undefined *)0x0) {
              uVar2 = 0xb;
            }
            else {
              puVar1 = PTR_PTR_1133fad20;
              func_0x00010bf32ee0(PTR_PTR_1133fad20,param_2,param_1);
              if (puVar1 == (undefined *)0x0) {
                uVar2 = 10;
              }
              else {
                puVar1 = PTR_PTR_1133fad38;
                func_0x00010bf32ee0(PTR_PTR_1133fad38,param_2,param_1);
                uVar2 = 0xd;
                if (puVar1 != (undefined *)0x0) {
                  uVar2 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1067d090c; end: 1067d0967;  */

void FUN_1067d090c(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1067d0968;
  puStack_28 = &UNK_11093d4c8;
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100504554(param_2,&puStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067d0968; end: 1067d0acb;  */

void FUN_1067d0968(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_2;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar1);
    if (uVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf1ad00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf1c0e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar6);
      puVar7 = PTR_PTR_1126b1440;
      _objc_alloc(PTR_PTR_1126b1440);
      func_0x00010c040f40();
      _objc_release(uVar3);
      _objc_release(uVar5);
      goto LAB_1067d0aac;
    }
  }
  puVar7 = PTR_PTR_1126b1440;
  _objc_alloc(PTR_PTR_1126b1440);
  func_0x00010c040f20();
LAB_1067d0aac:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1067d0acc; end: 1067d0c0b; -[SCComposerPeopleUserProvider getFriendsWithFriendIds:source:] */

void FUN_1067d0acc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_1067d07e0(param_4);
    uVar3 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c09dce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1067d0c0c; end: 1067d0c2b;  */

void FUN_1067d0c0c(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11093d518);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067d0c2c; end: 1067d0c77;  */

void FUN_1067d0c2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4c30;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c040f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067d0c78; end: 1067d0c83; -[SCComposerPeopleUserProvider pushToValdiMarshaller:] */

void FUN_1067d0c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 1067d0c84; end: 1067d0cb3; -[SCComposerPeopleUserProvider .cxx_destruct] */

void FUN_1067d0c84(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d0cb4; end: 1067d0d3b; -[SCMessageReportingPluginManager initWithPlugins:] */

undefined1 * FUN_1067d0cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3378;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067d0d3c; end: 1067d0d63;  */

void FUN_1067d0d3c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_11093d598,
                      &PTR___NSConcreteGlobalBlock_11093d5d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067d0d64; end: 1067d0d6b;  */

void FUN_1067d0d64(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 1067d0d6c; end: 1067d0d93;  */

void FUN_1067d0d6c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1067d0d94; end: 1067d0e4f; -[SCMessageReportingPluginManager reportedChatMessageContentForMessage:] */

void FUN_1067d0d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010be5fdc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1067d0e50;
  puStack_40 = &UNK_11093d5f8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfb2660(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067d0e50; end: 1067d0e9f;  */

void FUN_1067d0e50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c134140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067d0ea0; end: 1067d0f5b; -[SCMessageReportingPluginManager reportedChatMessageReplyToContentsForMessage:] */

void FUN_1067d0ea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010be5ff00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1067d0f5c;
  puStack_40 = &UNK_11093d5f8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfb2660(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067d0f5c; end: 1067d0fab;  */

void FUN_1067d0f5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c134160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067d0fac; end: 1067d10b7; -[SCMessageReportingPluginManager isReportableForCurrentUserId:senderUserId:isGroupConversation:conversationSubtype:message:] */

void FUN_1067d0fac(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_7);
  func_0x00010c0720c0(param_4,param_2,param_3);
  if (((int)param_4 == 0) && (param_6 != 6)) {
    func_0x00010be5fdc0(param_1,param_2,param_7);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1067d10b8;
    puStack_50 = &UNK_11093d628;
    _objc_retain(param_7);
    puVar1 = param_1;
    uStack_48 = param_7;
    func_0x00010c0b8600(param_1,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_48);
    _objc_release(param_1);
  }
  else {
    puVar1 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,PTR____kCFBooleanFalse_11034ab60);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067d10b8; end: 1067d1123;  */

void FUN_1067d10b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07c5c0();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067d1124; end: 1067d12a3; -[SCMessageReportingPluginManager _messageContentPluginForMessage:] */

void FUN_1067d1124(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = param_1;
  func_0x00010be754c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae558;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar3,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 8);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x1067d120c;
    puStack_40 = &UNK_110892440;
    _objc_retain(puVar1);
    puStack_38 = puVar1;
    func_0x00010c0b8600(puVar3,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puStack_38;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067d12a4; end: 1067d153b; -[SCMessageReportingPluginManager _pluginIdentifierForMessage:] */

void FUN_1067d12a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined **ppuVar6;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4ce20();
  puVar4 = (undefined *)0x0;
  ppuVar6 = &PTR_PTR_11093d6c8;
  switch((int)uVar1) {
  case 2:
    break;
  case 3:
code_r0x0001067d1300:
    ppuVar6 = &PTR_PTR_11093d6d0;
    break;
  default:
    goto LAB_1067d13fc;
  case 5:
    uVar1 = param_3;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c22ac80();
    _objc_release(uVar1);
    if ((int)uVar2 == 5) {
      ppuVar6 = &PTR_PTR_11093d700;
    }
    else {
      uVar1 = param_3;
      func_0x00010c22a700();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c22ac80();
      _objc_release(uVar1);
      if ((int)uVar2 == 0x10) {
        ppuVar6 = &PTR_PTR_11093d708;
      }
      else {
        uVar1 = param_3;
        func_0x00010c22a700();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c22ac80();
        _objc_release(uVar1);
        if ((int)uVar2 == 0x12) {
          ppuVar6 = &PTR_PTR_11093d718;
        }
        else {
          uVar1 = param_3;
          func_0x00010c22a700();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c22ac80();
          _objc_release(uVar1);
          if ((int)uVar2 == 0x25) {
            ppuVar6 = &PTR_PTR_11093d728;
          }
          else {
            uVar1 = param_3;
            func_0x00010c22a700();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c22ac80();
            _objc_release(uVar1);
            if ((int)uVar2 != 0x28) goto code_r0x0001067d1534;
            ppuVar6 = &PTR_PTR_11093d738;
          }
        }
      }
    }
    break;
  case 6:
    uVar1 = param_3;
    func_0x00010c0dba60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dbae0();
    _objc_release(uVar1);
    if ((int)uVar2 != 1) {
code_r0x0001067d1534:
      puVar4 = (undefined *)0x0;
      goto LAB_1067d13fc;
    }
code_r0x0001067d1380:
    ppuVar6 = &PTR_PTR_11093d6e0;
    break;
  case 7:
    uVar1 = param_3;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c131be0();
    _objc_release(uVar1);
    puVar4 = (undefined *)0x0;
    iVar5 = (int)uVar2;
    if (0xe < iVar5) {
      if (iVar5 == 0xf) {
        uVar1 = param_3;
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c131e00();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0dbae0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((int)uVar3 == 1) goto code_r0x0001067d1380;
        goto code_r0x0001067d1534;
      }
      if (iVar5 != 0x11) goto LAB_1067d13fc;
      goto code_r0x0001067d13ec;
    }
    ppuVar6 = &PTR_PTR_11093d6c8;
    if (iVar5 != 0xb) {
      if (iVar5 != 0xc) goto LAB_1067d13fc;
      goto code_r0x0001067d1300;
    }
    break;
  case 0xb:
code_r0x0001067d13ec:
    ppuVar6 = &PTR_PTR_11093d6d8;
    break;
  case 0xe:
    ppuVar6 = &PTR_PTR_11093d710;
    break;
  case 0x12:
    ppuVar6 = &PTR_PTR_11093d6f0;
    break;
  case 0x13:
    ppuVar6 = &PTR_PTR_11093d6e8;
    break;
  case 0x18:
    ppuVar6 = &PTR_PTR_11093d720;
    break;
  case 0x1a:
    ppuVar6 = &PTR_PTR_11093d730;
  }
  puVar4 = *ppuVar6;
  _objc_retain(puVar4);
LAB_1067d13fc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067d153c; end: 1067d170f; -[SCMessageReportingPluginManager _messageReplyToContentPluginForMessage:] */

void FUN_1067d153c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4ce20();
  if ((int)uVar1 == 7) {
    uVar1 = param_3;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0ed480();
    _objc_release(uVar1);
    if ((int)uVar2 == 3) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e5fa78;
      _objc_retain(&PTR____CFConstantStringClassReference_110e5fa78);
      puVar3 = *(undefined **)(param_1 + 8);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      uStack_48 = 0x1067d1678;
      puStack_40 = &UNK_110892440;
      ppuStack_38 = &PTR____CFConstantStringClassReference_110e5fa78;
      _objc_retain(&PTR____CFConstantStringClassReference_110e5fa78);
      func_0x00010c0b8600(puVar3,param_2,&puStack_58);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuStack_38);
      goto LAB_1067d1650;
    }
  }
  puVar3 = PTR_PTR_1126ae558;
  ppuVar4 = (undefined **)PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar3,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_1067d1650:
  _objc_release(ppuVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067d1710; end: 1067d171b; -[SCMessageReportingPluginManager .cxx_destruct] */

void FUN_1067d1710(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d171c; end: 1067d17ff; -[SCMessageReportingPluginServiceProvider provide] */

void FUN_1067d171c(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126ce1b8;
  _objc_alloc(PTR_PTR_1126ce1b8);
  func_0x00010c02b840();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067d1800; end: 1067d183f;  */

void FUN_1067d1800(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf1aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067d1840; end: 1067d196f; -[SCMessageReportingPluginServiceProvider _createPluginManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d1840(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_11275094c);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010bf9d5c0(uVar4);
  puVar2 = PTR_PTR_1126ce1c8;
  _objc_alloc(PTR_PTR_1126ce1c8);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037660(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067d1970; end: 1067d19bb;  */

void FUN_1067d1970(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce1c0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c037640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067d19bc; end: 1067d1a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d19bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar3 = param_2;
  func_0x00010c0d3c80(param_2);
  _objc_release(param_2);
  if (lVar2 != 0) {
    puVar4 = (undefined *)(lVar2 + _DAT_112750950);
    _objc_loadWeakRetained();
    puVar5 = puVar4;
    func_0x00010bf22660();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      puVar1 = puVar5;
    }
    _objc_retain(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010befa160(uVar3);
    _objc_release(puVar1);
  }
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1067d1a90; end: 1067d1ad7; -[SCMessageReportingPluginServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d1a90(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275094c,0);
  _objc_destroyWeak(param_1 + _DAT_112750950);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750954);
  return;
}



/* Entry: 1067d1ad8; end: 1067d1b4b; -[SCMessageReportingPluginScope initWithPluginRegistry:] */

undefined1 * FUN_1067d1ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3380;
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



/* Entry: 1067d1b4c; end: 1067d1b53; -[SCMessageReportingPluginScope pluginRegistry] */

undefined8 FUN_1067d1b4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067d1b54; end: 1067d1b5f; -[SCMessageReportingPluginScope .cxx_destruct] */

void FUN_1067d1b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d1b60; end: 1067d1c43; -[SCFamilyCenterServiceProvider provide] */

void FUN_1067d1b60(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126ce1d0;
  _objc_alloc(PTR_PTR_1126ce1d0);
  func_0x00010c011720();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067d1c44; end: 1067d1c83;  */

void FUN_1067d1c44(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bded980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067d1c84; end: 1067d1de3; -[SCFamilyCenterServiceProvider _createFamilyCenterService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d1c84(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112750964;
    _objc_loadWeakRetained(lVar6);
  }
  lVar1 = lVar6;
  func_0x00010c0f98e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  puVar4 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_112750960;
    _objc_loadWeakRetained(lVar6);
  }
  lVar1 = lVar6;
  func_0x00010bfcfa80(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1067d1de4; end: 1067d1e27; -[SCFamilyCenterServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d1de4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112750964);
  _objc_destroyWeak(param_1 + _DAT_112750960);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275095c);
  return;
}



/* Entry: 1067d1e28; end: 1067d1e9b; -[SCFamilyCenterServices initWithFamilyCenterComposerGrpcService:] */

undefined1 * FUN_1067d1e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3388;
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



/* Entry: 1067d1e9c; end: 1067d1ea3; -[SCFamilyCenterServices familyCenterComposerGrpcService] */

undefined8 FUN_1067d1e9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067d1ea4; end: 1067d1eaf; -[SCFamilyCenterServices .cxx_destruct] */

void FUN_1067d1ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d1eb0; end: 1067d1fa3; -[SCHermodDuplexServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d1eb0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275096c);
  *(undefined **)(param_1 + _DAT_11275096c) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126ce1d8;
  _objc_alloc(PTR_PTR_1126ce1d8);
  func_0x00010c01a440();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067d1fa4; end: 1067d1fe3;  */

void FUN_1067d1fa4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be35100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067d1fe4; end: 1067d205f; -[SCHermodDuplexServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d1fe4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_30;
  undefined *puStack_28;
  
  lVar3 = (long)_DAT_11275096c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf955c0();
    _objc_release(uVar2);
  }
  puStack_28 = PTR_PTR_1126f3390;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067d2060; end: 1067d218b; -[SCHermodDuplexServiceProvider _hermodDuplexService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d2060(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126ce1e0;
  _objc_alloc(PTR_PTR_1126ce1e0);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_112750974;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010bf8afc0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11275097c;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010c0f98e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112750978;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010bfcfa00(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e8e0(puVar1,param_2,lVar2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  func_0x00010bf18b40(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067d218c; end: 1067d21eb; -[SCHermodDuplexServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d218c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275097c);
  _objc_destroyWeak(param_1 + _DAT_112750978);
  _objc_destroyWeak(param_1 + _DAT_112750974);
  _objc_destroyWeak(param_1 + _DAT_112750970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275096c,0);
  return;
}



/* Entry: 1067d21ec; end: 1067d24a7; -[SCHermodDuplexServiceImplementation initWithDuplexClient:performerProvider:grpcClientFactory:] */

undefined ***
FUN_1067d21ec(undefined **param_1,undefined8 param_2,undefined **param_3,undefined ***param_4,
             undefined8 param_5)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  int iVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = param_3;
  pppuVar3 = param_4;
  _objc_retain(param_3);
  iVar9 = (int)ppuVar2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR_PTR_1126f3398;
  pppuVar1 = &ppuStack_78;
  ppuStack_78 = param_1;
  _objc_msgSendSuper2(pppuVar1,PTR_s_init_1125d9248);
  if (pppuVar1 != (undefined ***)0x0) {
    _objc_retain(param_3);
    ppuVar2 = pppuVar1[1];
    pppuVar1[1] = param_3;
    _objc_release(ppuVar2);
    _objc_retain(param_4);
    ppuVar2 = pppuVar1[2];
    pppuVar1[2] = (undefined **)param_4;
    _objc_release(ppuVar2);
    pppuVar3 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar3;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = pppuVar1[5];
    pppuVar1[5] = (undefined **)pppuVar4;
    _objc_release(ppuVar2);
    _objc_release(pppuVar3);
    pppuVar4 = (undefined ***)PTR_PTR_1126ae728;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(pppuVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(pppuVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    pppuVar3 = pppuVar4;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    ppuVar7 = (undefined **)PTR_PTR_1126ae748;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    func_0x00010c08fa60();
    if (ppuVar2 != (undefined **)0x0) {
      ppuStack_68 = &PTR____CFConstantStringClassReference_110dadcb8;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110daafd8;
      pppuVar3 = &ppuStack_68;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9140(ppuVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
    }
    ppuVar2 = pppuVar1[6];
    pppuVar1[6] = ppuVar7;
    _objc_retain(ppuVar7);
    _objc_release(ppuVar2);
    ppuVar2 = (undefined **)PTR_PTR_1126ce1e8;
    _objc_alloc();
    uVar5 = uVar6;
    func_0x00010c058f80();
    iVar9 = (int)uVar5;
    ppuVar10 = pppuVar1[4];
    pppuVar1[4] = ppuVar2;
    _objc_release(ppuVar10);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    ppuVar10 = pppuVar1[7];
    pppuVar1[7] = ppuVar2;
    _objc_release(ppuVar10);
    _objc_release(ppuVar7);
    *(undefined4 *)(pppuVar1 + 8) = 0;
    _objc_release(uVar6);
    _objc_release(pppuVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar3);
  if ((iVar9 != 0) && (pppuVar3 != (undefined ***)0x0)) {
    _os_unfair_lock_lock(param_3 + 8);
    puVar11 = param_3[7];
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar8);
    if (puVar11 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
      func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_3[7];
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar8);
    }
    puVar11 = param_3[7];
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar11);
    _objc_release(puVar8);
    _os_unfair_lock_unlock(param_3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pppuVar3);
  return pppuVar3;
}



/* Entry: 1067d24a8; end: 1067d2603; -[SCHermodDuplexServiceImplementation registerPayloadType:handler:] */

void FUN_1067d24a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  if (((int)param_3 != 0) && (param_4 != 0)) {
    _os_unfair_lock_lock(param_1 + 0x40);
    lVar3 = *(long *)(param_1 + 0x38);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(lVar3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (lVar3 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
      func_0x00010c2a2b60(PTR__OBJC_CLASS___NSHashTable_1126b4538);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar4,param_2,puVar1,puVar2);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar4,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(uVar4);
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067d2604; end: 1067d26b7; -[SCHermodDuplexServiceImplementation unregisterPayloadType:handler:] */

void FUN_1067d2604(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (((int)param_3 != 0) && (param_4 != 0)) {
    _os_unfair_lock_lock(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360();
    _objc_release(uVar2);
    _objc_release(puVar1);
    _os_unfair_lock_unlock(param_1 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067d26b8; end: 1067d27bf; -[SCHermodDuplexServiceImplementation sendHermodPayload:taskId:] */

void FUN_1067d26b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  uStack_48 = 0;
  _objc_retain(param_4);
  func_0x00010bf64b60(puVar2,param_2,param_3,0,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  puVar4 = PTR_PTR_1126ce1f0;
  _objc_opt_new(PTR_PTR_1126ce1f0);
  func_0x00010c212840();
  _objc_release(param_4);
  func_0x00010c1b69a0(puVar4,param_2,puVar3);
  func_0x00010c206c40(puVar4,param_2,1);
  func_0x00010c25f180(*(undefined8 *)(param_1 + 0x20),param_2,puVar4,*(undefined8 *)(param_1 + 0x30)
                      ,&PTR___NSConcreteGlobalBlock_11093d790);
  _objc_release(uVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 1067d27c0; end: 1067d27c3;  */

void FUN_1067d27c0(void)

{
  return;
}



/* Entry: 1067d27c4; end: 1067d2833; -[SCHermodDuplexServiceImplementation beginSubscribing] */

void FUN_1067d27c4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b4ec0;
  _objc_alloc(PTR_PTR_1126b4ec0);
  func_0x00010c034960();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126780();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067d2834; end: 1067d286f; -[SCHermodDuplexServiceImplementation endSubscribing] */

void FUN_1067d2834(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067d2870; end: 1067d2c7f; -[SCHermodDuplexServiceImplementation onReceive:] */

void FUN_1067d2870(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lStack_188;
  long alStack_180 [16];
  long alStack_100 [16];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar4);
  plVar5 = (long *)PTR_PTR_1126ce1f8;
  _objc_alloc();
  lStack_188 = 0;
  plVar11 = &lStack_188;
  func_0x00010c008360();
  lVar3 = lStack_188;
  _objc_retain(lStack_188);
  if (lVar3 == 0) {
    plVar6 = plVar5;
    func_0x00010c26a800(plVar5);
    _objc_retainAutoreleasedReturnValue();
    plVar11 = plVar6;
    func_0x00010be9f440(param_1);
    _objc_release(plVar6);
    plVar6 = plVar5;
    func_0x00010c0ebc00();
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar5;
      func_0x00010c0ebbe0();
      _objc_retainAutoreleasedReturnValue();
      plVar11 = alStack_100;
      plVar6 = plVar7;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (plVar6 != (long *)0x0) {
        plVar12 = (long *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(plVar7);
          }
          uVar14 = *(undefined8 *)((long)plVar12 * 8);
          func_0x00010c0eba80(uVar14);
          _os_unfair_lock_lock(param_1 + 0x40);
          lVar13 = *(long *)(param_1 + 0x38);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar4);
          if (lVar13 == 0) {
            _os_unfair_lock_unlock(param_1 + 0x40);
            goto LAB_1067d2be8;
          }
          puVar4 = PTR_PTR_1126ce200;
          func_0x00010bf6e760();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar4;
          func_0x00010bfac8c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010010e990(uVar14);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = *(long *)(param_1 + 0x38);
          puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar13;
          func_0x00010bf00560();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar13);
          _objc_release(puVar9);
          plVar11 = alStack_180;
          lVar13 = lVar10;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar13 != 0) {
            lVar16 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar10);
              }
              uVar15 = *(undefined8 *)(lVar16 * 8);
              plVar11 = plVar5;
              func_0x00010c26a800();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1150a0(uVar15);
              _objc_release(plVar11);
              lVar16 = lVar16 + 1;
            } while (lVar13 != lVar16);
            plVar11 = alStack_180;
            lVar13 = lVar10;
            func_0x00010bf52a60();
          }
          _objc_release(lVar10);
          _objc_release(uVar14);
          _objc_release(puVar8);
          _objc_release(puVar4);
          _os_unfair_lock_unlock(param_1 + 0x40);
          plVar12 = (long *)((long)plVar12 + 1);
        } while (plVar12 != plVar6);
        plVar11 = alStack_100;
        plVar6 = plVar7;
        func_0x00010bf52a60();
      }
LAB_1067d2be8:
      _objc_release(plVar7);
    }
  }
  _objc_release(plVar5);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x40);
  __Unwind_Resume();
  puVar4 = PTR_PTR_1126ce208;
  _objc_retain(plVar11);
  _objc_opt_new(puVar4);
  func_0x00010c212840();
  _objc_release(plVar11);
  func_0x00010c1e82e0(puVar4);
  func_0x00010c206c40(puVar4);
  func_0x00010beeda00(*(undefined8 *)(param_3 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1067d2c80; end: 1067d2d0b; -[SCHermodDuplexServiceImplementation _sendHermodAck:taskId:] */

void FUN_1067d2c80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ce208;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c212840();
  _objc_release(param_4);
  func_0x00010c1e82e0(puVar1,param_2,param_3);
  func_0x00010c206c40(puVar1,param_2,1);
  func_0x00010beeda00(*(undefined8 *)(param_1 + 0x20),param_2,puVar1,*(undefined8 *)(param_1 + 0x30)
                      ,&PTR___NSConcreteGlobalBlock_11093d7d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067d2d0c; end: 1067d2d0f;  */

void FUN_1067d2d0c(void)

{
  return;
}



/* Entry: 1067d2d10; end: 1067d2d7b; -[SCHermodDuplexServiceImplementation .cxx_destruct] */

void FUN_1067d2d10(long param_1)

{
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



/* Entry: 1067d2d7c; end: 1067d2faf; -[SCHermodDuplexEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d2d7c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_1127509bc;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(lVar8);
  if ((int)lVar2 != 0) {
    _objc_initWeak(auStack_68,param_1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127509a0);
    *(undefined **)(param_1 + _DAT_1127509a0) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ce210;
    _objc_alloc();
    lVar8 = param_1 + _DAT_1127509a4;
    _objc_loadWeakRetained(lVar8);
    lVar4 = lVar8;
    func_0x00010bfe0ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + _DAT_1127509a8;
    _objc_loadWeakRetained(lVar1);
    lVar5 = lVar1;
    func_0x00010bf70040();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + _DAT_1127509ac;
    _objc_loadWeakRetained(lVar2);
    lVar6 = lVar2;
    func_0x00010bf0dd00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01a460();
    lVar9 = (long)_DAT_1127509b0;
    uVar7 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar3;
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar8);
    func_0x00010bf18b40(*(undefined8 *)(param_1 + lVar9));
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  return;
}



/* Entry: 1067d2fb0; end: 1067d2fff;  */

void FUN_1067d2fb0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bded480(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067d3000; end: 1067d3097; -[SCHermodDuplexEntryPoint _createDuplexLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d3000(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ce218;
  _objc_alloc(PTR_PTR_1126ce218);
  param_1 = param_1 + _DAT_1127509b4;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ce220;
  _objc_alloc_init(PTR_PTR_1126ce220);
  func_0x00010c05f200(puVar1,param_2,lVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067d3098; end: 1067d30ef; -[SCHermodDuplexEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d3098(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf955c0(*(undefined8 *)(param_1 + _DAT_1127509b0));
  puStack_28 = PTR_PTR_1126f33a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067d30f0; end: 1067d3177; -[SCHermodDuplexEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d30f0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127509bc);
  _objc_destroyWeak(param_1 + _DAT_1127509b4);
  _objc_destroyWeak(param_1 + _DAT_1127509a4);
  _objc_destroyWeak(param_1 + _DAT_1127509a8);
  _objc_destroyWeak(param_1 + _DAT_1127509ac);
  _objc_destroyWeak(param_1 + _DAT_1127509b8);
  _objc_storeStrong(param_1 + _DAT_1127509a0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127509b0,0);
  return;
}



/* Entry: 1067d3178; end: 1067d3307; -[SCSecurityDuplexSyncTriggerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d3178(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126ce228;
  _objc_alloc();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127509c8;
    _objc_loadWeakRetained(lVar7);
  }
  lVar2 = lVar7;
  func_0x00010bf8b020(lVar7);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_1127509cc;
    _objc_loadWeakRetained(lVar8);
  }
  lVar3 = lVar8;
  func_0x00010c293920(lVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_1127509d4;
    _objc_loadWeakRetained(lVar10);
  }
  lVar4 = lVar10;
  func_0x00010c135640(lVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127509d0;
    _objc_loadWeakRetained(lVar11);
  }
  lVar5 = lVar11;
  func_0x00010c293740(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e940();
  lVar9 = (long)_DAT_1127509c0;
  uVar6 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar11);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bf18b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar9),PTR_s_beginSubscribing_1125a3c78);
  return;
}



/* Entry: 1067d3308; end: 1067d335f; -[SCSecurityDuplexSyncTriggerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d3308(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf955c0(*(undefined8 *)(param_1 + _DAT_1127509c0));
  puStack_28 = PTR_PTR_1126f33a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067d3360; end: 1067d33cb; -[SCSecurityDuplexSyncTriggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067d3360(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127509d4);
  _objc_destroyWeak(param_1 + _DAT_1127509d0);
  _objc_destroyWeak(param_1 + _DAT_1127509cc);
  _objc_destroyWeak(param_1 + _DAT_1127509c8);
  _objc_destroyWeak(param_1 + _DAT_1127509c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127509c0,0);
  return;
}



/* Entry: 1067d33cc; end: 1067d34c7; -[SCHermodDuplexHandler initWithHermodDuplexService:deviceCheckManager:attestationProvider:securityDuplexLogger:] */

undefined1 *
FUN_1067d33cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f33b0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067d34c8; end: 1067d352f; -[SCHermodDuplexHandler beginSubscribing] */

void FUN_1067d34c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126d80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067d3530; end: 1067d3597; -[SCHermodDuplexHandler endSubscribing] */

void FUN_1067d3530(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282120();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067d3598; end: 1067d36d3; -[SCHermodDuplexHandler processPayload:payload:taskId:] */

void FUN_1067d3598(long param_1,undefined8 param_2,int param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 2) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5b40();
    _objc_release(uVar2);
    func_0x00010be10e40(param_1);
  }
  else if (param_3 == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5b40();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ce230;
    _objc_retain(param_4);
    _objc_opt_class(puVar3);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    uVar1 = param_4;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    uVar4 = uVar1;
    func_0x00010bf09d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    func_0x00010be18780(param_1);
    _objc_release(uVar4);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067d36d4; end: 1067d3853; -[SCHermodDuplexHandler _forceArgosTokenRefresh:taskId:useCase:] */

void FUN_1067d36d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bfbefe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar6);
  lVar6 = lVar1;
  func_0x00010bf15da0(lVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e5fc58;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_60 = lVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_60,&ppuStack_68,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b13c0();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  uVar3 = param_4;
  func_0x00010c15bf80();
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(lVar6);
  lVar6 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1067d3854;
  uStack_a0 = param_5;
  uStack_98 = uVar4;
  lStack_90 = lVar1;
  uStack_88 = param_4;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  uVar4 = *(undefined8 *)(lVar6 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x1067d3904;
  puStack_c0 = &UNK_11093d820;
  lStack_b8 = lVar6;
  puStack_b0 = puVar5;
  uStack_a8 = uVar3;
  _objc_retain(puVar5);
  func_0x00010bfa6480(uVar4,param_2,&puStack_d8);
  _objc_release(uVar4);
  _objc_release(puStack_b0);
  _objc_release(puVar5);
  return;
}



/* Entry: 1067d3854; end: 1067d39ff; -[SCHermodDuplexHandler _fetchDeviceCheckToken:useCase:] */

void FUN_1067d3854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1067d3904;
  puStack_50 = &UNK_11093d820;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010bfa6480(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1067d3a00; end: 1067d3a47; -[SCHermodDuplexHandler .cxx_destruct] */

void FUN_1067d3a00(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067d3a48; end: 1067d3aeb; -[SCSecurityDuplexLoggerImpl initWithUserTrackedLogger:grapheneRegistry:] */

undefined1 *
FUN_1067d3a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f33b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067d3aec; end: 1067d3b77; -[SCSecurityDuplexLoggerImpl logAckEvent:] */

void FUN_1067d3aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ce238;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c212840();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  FUN_1067d4230(*(undefined8 *)(param_1 + 0x10),param_3,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


