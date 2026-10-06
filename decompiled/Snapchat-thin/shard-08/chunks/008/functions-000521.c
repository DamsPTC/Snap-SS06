/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065c3b20; end: 1065c3c17; -[SCCTChatNewMessageProvider _shouldAllowMessageUpdateForUpdateEvent:] */

undefined8 FUN_1065c3b20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c28d4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = param_1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar1;
  func_0x00010c272380(lVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0720c0(uVar3,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
  uVar3 = 0;
  if (((int)uVar5 != 0) && (lVar2 != 0)) {
    func_0x00010be42380(param_1,param_2,lVar2);
    uVar3 = param_1;
  }
  _objc_release(lVar2);
  return uVar3;
}



/* Entry: 1065c3c18; end: 1065c3d63; -[SCCTChatNewMessageProvider _notifyAnnouncerWithMessage:] */

void FUN_1065c3c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0cb9a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b82a0(param_1);
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1065c3cfc;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065c3d64; end: 1065c3e27; -[SCCTChatNewMessageProvider _checkLastMessageInConversation:] */

void FUN_1065c3d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be46fe0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1065c3e28; end: 1065c3e8b;  */

void FUN_1065c3e28(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_2 != 0) && (param_1 != 0)) &&
     (lVar1 = param_1, func_0x00010be42380(), (int)lVar1 != 0)) {
    func_0x00010be64580(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065c3e8c; end: 1065c3f87; -[SCCTChatNewMessageProvider _lastMessageInConversation:completion:] */

void FUN_1065c3e8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1065c3f24;
  puStack_40 = &UNK_1109092f8;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bfa5f20(uVar1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1065c3f88; end: 1065c409b; -[SCCTChatNewMessageProvider _isNewTextMessage:] */

uint FUN_1065c3f88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be448e0(param_1,param_2,param_3);
  lVar2 = param_3;
  func_0x00010c07c1e0(param_3,param_2,*(undefined8 *)(param_1 + 0x38));
  lVar3 = param_3;
  func_0x00010c0cb8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c071ae0();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010c089620();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar7 = 1;
  }
  else {
    lVar5 = param_3;
    func_0x00010c0cb9a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c089620(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf433a0(lVar5,param_2,param_1);
    uVar7 = (uint)(lVar6 == 1);
    _objc_release(param_1);
    _objc_release(lVar5);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return (uint)lVar1 & (((uint)lVar4 | (uint)lVar2) ^ 0xffffffff) & uVar7;
}



/* Entry: 1065c409c; end: 1065c40df; -[SCCTChatNewMessageProvider _isTextMessage:] */

bool FUN_1065c409c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf4df40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4ce20();
  _objc_release(param_3);
  return (int)uVar1 == 2;
}



/* Entry: 1065c40e0; end: 1065c4157; -[SCCTChatNewMessageProvider .cxx_destruct] */

void FUN_1065c40e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065c4158; end: 1065c4223; -[SCCustomStickerManagerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c4158(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_1 = param_1 + _DAT_11274b394;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c254ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1065c4224;
  puStack_40 = &UNK_11092e208;
  puVar2 = PTR_PTR_1126ae720;
  lStack_38 = lVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cbd60;
  _objc_alloc(PTR_PTR_1126cbd60);
  func_0x00010c007d20();
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065c4224; end: 1065c4253;  */

void FUN_1065c4224(void)

{
  _objc_alloc(PTR_PTR_1126cbd58);
  func_0x00010c007ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065c4254; end: 1065c428b; -[SCCustomStickerManagerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c4254(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b394);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b398);
  return;
}



/* Entry: 1065c428c; end: 1065c42ff; -[SCCustomStickerManager initWithCustomStickerCTPService:] */

undefined1 * FUN_1065c428c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1ee8;
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



/* Entry: 1065c4300; end: 1065c454b; -[SCCustomStickerManager createStickerWithImageData:origin:isAnimated:completion:] */

void FUN_1065c4300(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_3 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0,0);
    }
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x3032000000;
    pcStack_70 = FUN_1065c454c;
    uStack_68 = 0x1065c455c;
    uStack_60 = 0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef7bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1065c4564;
    puStack_a8 = &UNK_1108916c0;
    _objc_retain(param_6);
    lStack_98 = param_6;
    _objc_retain(param_3);
    lStack_a0 = param_3;
    _objc_copyWeak(auStack_90,auStack_58);
    ppuVar5 = &puStack_c0;
    _objc_retainBlock(ppuVar5);
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_1065c4858;
    puStack_d0 = &UNK_110847658;
    puStack_c8 = &uStack_88;
    ppuVar6 = &puStack_e8;
    _objc_retainBlock(ppuVar6);
    uVar3 = uVar4;
    func_0x00010c25ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_80[5];
    puStack_80[5] = uVar3;
    _objc_release(uVar2);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_destroyWeak(auStack_90);
    _objc_release(lStack_a0);
    _objc_release(lStack_98);
    _objc_release(uVar4);
    __Block_object_dispose(&uStack_88,8);
    _objc_release(uStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1065c454c; end: 1065c4563;  */

void FUN_1065c454c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065c4564; end: 1065c4677;  */

void FUN_1065c4564(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 1065c4678; end: 1065c478b;  */

void FUN_1065c4678(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar1 = PTR_PTR_1126b2720;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1065c478c;
    puStack_58 = &UNK_110857fd0;
    _objc_copyWeak(auStack_38,param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    uStack_40 = uVar2;
    _objc_retain(param_2);
    uStack_50 = param_2;
    _objc_retain(puVar1);
    puStack_48 = puVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(puStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1065c478c; end: 1065c4843;  */

void FUN_1065c478c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065c4844; end: 1065c4857;  */

void FUN_1065c4844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001065c4854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1065c4858; end: 1065c4893;  */

void FUN_1065c4858(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065c4894; end: 1065c4a93; -[SCCustomStickerManager removeStickerItem:completion:] */

void FUN_1065c4894(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1065c454c;
    uStack_60 = 0x1065c455c;
    uStack_58 = 0;
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0844e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf6b9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(uVar2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1065c4a94;
    puStack_98 = &UNK_1108538e0;
    _objc_retain(param_3);
    lStack_90 = param_3;
    _objc_retain(param_4);
    ppuVar6 = &puStack_b0;
    uStack_88 = param_4;
    _objc_retainBlock(ppuVar6);
    puStack_d8 = puVar1;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1065c4b48;
    puStack_c0 = &UNK_110847658;
    puStack_b8 = &uStack_80;
    ppuVar7 = &puStack_d8;
    _objc_retainBlock(ppuVar7);
    uVar4 = uVar5;
    func_0x00010c25ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_78[5];
    puStack_78[5] = uVar4;
    _objc_release(uVar2);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(uStack_88);
    _objc_release(lStack_90);
    _objc_release(uVar5);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065c4a94; end: 1065c4b2f;  */

void FUN_1065c4a94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1065c4b30; end: 1065c4b47;  */

void FUN_1065c4b30(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001065c4b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1065c4b48; end: 1065c4b83;  */

void FUN_1065c4b48(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065c4b84; end: 1065c4c03; -[SCCustomStickerManager updateCustomStickerRankWithItem:] */

void FUN_1065c4b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0844e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c284d80(uVar2,param_2,uVar1,&PTR___NSConcreteGlobalBlock_11092e2b8);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1065c4c04; end: 1065c4c07;  */

void FUN_1065c4c04(void)

{
  return;
}



/* Entry: 1065c4c08; end: 1065c4c3b; -[SCCustomStickerManager triggerSyncJob] */

void FUN_1065c4c08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065c4c3c; end: 1065c4c43; -[SCCustomStickerManager recentlyCreatedCustomSticker] */

undefined8 FUN_1065c4c3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1065c4c44; end: 1065c4c73; -[SCCustomStickerManager setRecentlyCreatedCustomSticker:] */

void FUN_1065c4c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065c4c74; end: 1065c4ca3; -[SCCustomStickerManager .cxx_destruct] */

void FUN_1065c4c74(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065c4ca4; end: 1065c4d17; -[SCSmartReplyChatInputConfigurationFactoryImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1065c4ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1ef0;
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



/* Entry: 1065c4d18; end: 1065c4e37; -[SCSmartReplyChatInputConfigurationFactoryImpl createChatConfiguration] */

void FUN_1065c4d18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e54f78,0,0);
  puVar3 = (undefined *)0x0;
  if ((int)uVar1 != 0) {
    func_0x00010bf1f440(*(undefined8 *)(param_1 + 8),param_2,
                        &PTR____CFConstantStringClassReference_110e54fd8,0,0);
    func_0x00010bf1f440(*(undefined8 *)(param_1 + 8),param_2,
                        &PTR____CFConstantStringClassReference_110e54ff8,0,0);
    func_0x00010bf1f440(*(undefined8 *)(param_1 + 8),param_2,
                        &PTR____CFConstantStringClassReference_110e54f98,0,0);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110e54fb8,
                        &PTR____CFConstantStringClassReference_110daafd8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cbd68;
    _objc_alloc(PTR_PTR_1126cbd68);
    func_0x00010c01f9c0();
    puVar3 = PTR_PTR_1126cbd70;
    _objc_alloc(PTR_PTR_1126cbd70);
    func_0x00010c01f700();
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065c4e38; end: 1065c4f9f; -[SCSmartReplyChatInputConfigurationFactoryImpl createStoryReplyConfiguration] */

void FUN_1065c4e38(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lStack_48;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1195e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e55018,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cbd78;
  _objc_alloc(PTR_PTR_1126cbd78);
  uVar4 = uVar2;
  func_0x00010c296d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = 0;
  func_0x00010c008360(puVar3,param_2,uVar4,&lStack_48);
  lVar1 = lStack_48;
  _objc_release(uVar4);
  if (lVar1 == 0) {
    puVar7 = puVar3;
    func_0x00010c23ece0(puVar3);
    func_0x00010be60ee0(param_1,param_2,puVar7);
    puVar7 = (undefined *)0x0;
    if (param_1 != 0) {
      puVar5 = PTR_PTR_1126cbd68;
      _objc_alloc(PTR_PTR_1126cbd68);
      puVar7 = puVar3;
      func_0x00010c07e520(puVar3);
      puVar6 = puVar3;
      func_0x00010c23eca0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01f9c0(puVar5,param_2,puVar7,puVar6);
      _objc_release(puVar6);
      puVar7 = PTR_PTR_1126cbd70;
      _objc_alloc(PTR_PTR_1126cbd70);
      puVar6 = puVar3;
      func_0x00010c07e500(puVar3);
      func_0x00010c01f700(puVar7,param_2,1,1,puVar6,param_1,puVar5);
      _objc_release(puVar5);
    }
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1065c4fa0; end: 1065c4faf; -[SCSmartReplyChatInputConfigurationFactoryImpl _modeForSmartReplyStoriesType:] */

long FUN_1065c4fa0(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_3 - 1U < 3) {
    lVar1 = (ulong)(param_3 - 1U) + 1;
  }
  return lVar1;
}



/* Entry: 1065c4fb0; end: 1065c4fbb; -[SCSmartReplyChatInputConfigurationFactoryImpl .cxx_destruct] */

void FUN_1065c4fb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065c4fbc; end: 1065c509f; -[SCSmartReplyServiceProvider provide] */

void FUN_1065c4fbc(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cbd88;
  _objc_alloc(PTR_PTR_1126cbd88);
  func_0x00010bffd9e0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065c50a0; end: 1065c513f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c50a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cbd80;
  _objc_alloc(PTR_PTR_1126cbd80);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_11274b3ac;
    _objc_loadWeakRetained(lVar3);
  }
  lVar2 = lVar3;
  func_0x00010bf398e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065c5140; end: 1065c51f3; -[SCSmartReplyServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c5140(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b3ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b3a8);
  return;
}



/* Entry: 1065c51f4; end: 1065c51ff;  */

bool FUN_1065c51f4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1065c5200; end: 1065c527b; +[SmartReplyInStoriesConfiguration descriptor] */

undefined * FUN_1065c5200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3a58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ae7f80,
                        &PTR____CFConstantStringClassReference_110e55058,&PTR_DAT_113154088,
                        &PTR_DAT_1131540a0,5,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3a58 = puVar1;
  }
  return puRam00000001136c3a58;
}



/* Entry: 1065c527c; end: 1065c52ff;  */

void FUN_1065c527c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126be7e8;
  if (param_2 != 0) {
    _objc_retain();
    _objc_opt_new(puVar1);
    func_0x00010c1fc3e0();
    puVar2 = PTR_PTR_1126be7e0;
    _objc_opt_new(PTR_PTR_1126be7e0);
    func_0x00010c1fc0a0();
    func_0x00010c18a500(param_1);
    _objc_release(param_1);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1065c5300; end: 1065c534b;  */

void FUN_1065c5300(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c15ebe0(uVar2);
  func_0x00010c132800(uVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065c534c; end: 1065c546f; -[SCStickerSender initWithCoreMessageSender:externalMediaPreparer:itemTransformer:stickerLogger:creativeToolsABProvider:] */

undefined1 *
FUN_1065c534c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f1ef8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
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



/* Entry: 1065c5470; end: 1065c5573; -[SCStickerSender _shouldMarkItemInstanceAsExternalContent:] */

long FUN_1065c5470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf96ee0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 3) {
    uVar1 = param_3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf61ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0ed1a0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((((int)uVar4 == 4) || ((int)uVar4 == 2)) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0))
    {
      func_0x00010c075260();
      goto LAB_1065c5554;
    }
  }
  lVar5 = 0;
LAB_1065c5554:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 1065c5574; end: 1065c58eb; -[SCStickerSender sendSticker:quotedMessageId:sendContextSource:conversationIds:platformAnalytics:completionHandler:] */

void FUN_1065c5574(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
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
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 != 0) && (lVar1 = param_6, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    puVar3 = PTR_PTR_1126cbd90;
    _objc_retain(param_7);
    _objc_retain(param_3);
    _objc_alloc_init();
    lVar1 = param_3;
    func_0x00010c0f0a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7da0(puVar3);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c2540c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20b0e0(puVar3);
    _objc_release(lVar1);
    func_0x00010c06c000(param_3);
    func_0x00010c167e40(puVar3);
    func_0x00010c07bbc0(param_3);
    func_0x00010c1b3b80(puVar3);
    puVar12 = PTR_PTR_1126bac28;
    lVar1 = param_3;
    func_0x00010bfebca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bdc2420(puVar12);
    func_0x00010c20baa0(puVar3);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126cbd98;
    _objc_alloc_init();
    func_0x00010c1abde0();
    puVar5 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    func_0x00010c20a7e0();
    FUN_1065c527c(puVar5,param_5);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_4 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      func_0x00010c067fc0(param_4);
      func_0x00010c0df780(puVar12);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar6 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar7 = puVar6;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar8 = puVar5;
    func_0x00010bf63640(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar6);
    puVar10 = puVar6;
    func_0x00010c2b66c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar12);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_4);
    func_0x00010c15c280(uVar2);
    _objc_release(puVar11);
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065c58ec; end: 1065c5fb3; -[SCStickerSender sendCTPItemInstance:quotedMessageId:sendContextSource:conversationIds:platformAnalytics:completionHandler:] */

void FUN_1065c58ec(long param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puStack_e8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = param_3;
  lVar10 = param_4;
  uVar18 = param_5;
  lVar14 = param_6;
  uVar6 = param_7;
  uVar15 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 == (undefined *)0x0) || (lVar1 = param_6, func_0x00010bf529e0(), lVar1 == 0))
  goto LAB_1065c5e60;
  uVar2 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(uVar18);
  puVar20 = PTR_PTR_1126ba668;
  _objc_retain(uVar2);
  _objc_retain(param_7);
  _objc_alloc_init();
  func_0x00010c185940();
  FUN_1065c527c(puVar20,param_5);
  puVar3 = param_3;
  func_0x00010c0840e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c084460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar3);
  uVar5 = uVar4;
  func_0x00010bf96f00();
  if (uVar5 < 0x12) {
    ppuVar16 = (undefined **)(&PTR_PTR_11092e308)[uVar5];
  }
  else {
    ppuVar16 = &PTR____CFConstantStringClassReference_110e55078;
  }
  uVar6 = 0xffffffffffff8000;
  _dispatch_get_global_queue(0xffffffffffff8000,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1065c5300;
  puStack_98 = &UNK_110848ba8;
  _objc_retain(uVar18);
  uStack_90 = uVar18;
  _objc_retain(puVar20);
  puStack_88 = puVar20;
  ppuStack_80 = ppuVar16;
  func_0x00010007380c(uVar6,&puStack_b0);
  _objc_release(uVar6);
  puStack_e8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) {
    puStack_e8 = (undefined *)0x0;
  }
  else {
    func_0x00010c067fc0(param_4);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126b28f8;
  _objc_alloc(PTR_PTR_1126b28f8);
  func_0x00010c02b8e0();
  puVar7 = puVar3;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(puVar3);
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar8;
  func_0x00010bf96ee0();
  _objc_release(puVar8);
  _objc_release(puVar3);
  puVar3 = param_3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar17 == 3) {
    puVar19 = puVar8;
    func_0x00010bf61ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = (undefined *)0x0;
LAB_1065c5c18:
    _objc_release(puVar8);
    _objc_release(puVar3);
  }
  else {
    puVar17 = puVar8;
    func_0x00010bf96ee0();
    _objc_release(puVar8);
    _objc_release(puVar3);
    if ((int)puVar17 == 2) {
      puVar3 = param_3;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar8;
      func_0x00010bf1c2e0();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = (undefined *)0x0;
      goto LAB_1065c5c18;
    }
    puVar17 = (undefined *)0x0;
    puVar19 = (undefined *)0x0;
  }
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (puVar19 != (undefined *)0x0 || puVar17 != (undefined *)0x0) {
    uVar6 = 2;
    if (puVar19 == (undefined *)0x0) {
      uVar6 = 4;
    }
    else {
      puVar8 = puVar19;
      func_0x00010bfd8f20();
      puVar3 = PTR____NSArray0__struct_11034ab48;
      if (((ulong)puVar8 & 1) != 0) goto LAB_1065c5cc8;
    }
    if (puVar17 == (undefined *)0x0) {
LAB_1065c5ebc:
      puVar3 = param_3;
      func_0x00010c0840e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf15da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar3);
      puVar8 = PTR_PTR_1126c3108;
      _objc_alloc();
      puVar3 = param_3;
      func_0x00010bf63640(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02df60();
      _objc_release(puVar3);
      puVar12 = puVar8;
      func_0x000107d6ae14();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_78 = puVar12;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar8);
      _objc_release(puVar9);
      uVar15 = uVar6;
    }
    else {
      puVar8 = puVar17;
      func_0x00010bfd61c0();
      puVar3 = PTR____NSArray0__struct_11034ab48;
      if ((int)puVar8 != 0) {
        puVar3 = param_3;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010bf1c360();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bfd8f20();
        _objc_release(puVar8);
        _objc_release(puVar3);
        puVar3 = PTR____NSArray0__struct_11034ab48;
        if (((ulong)puVar9 & 1) == 0) goto LAB_1065c5ebc;
      }
    }
  }
LAB_1065c5cc8:
  _objc_release(puVar17);
  _objc_release(puVar19);
  _objc_release(param_3);
  puVar8 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar17 = puVar20;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002b60();
  puVar9 = puVar8;
  func_0x00010c2b66c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puStack_e8);
  _objc_release(puStack_88);
  _objc_release(uStack_90);
  _objc_release(uVar4);
  _objc_release(puVar20);
  _objc_release(uVar18);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  lVar10 = param_1;
  func_0x00010beb4720();
  if ((int)lVar10 != 0) {
    puVar20 = PTR_PTR_1126be7b0;
    _objc_alloc_init(PTR_PTR_1126be7b0);
    func_0x00010c1994c0(puVar12);
    _objc_release(puVar20);
  }
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = 0;
  lVar14 = 0;
  puVar20 = puVar12;
  lVar10 = param_6;
  uVar6 = param_8;
  func_0x00010c15c280();
  _objc_release(uVar11);
  _objc_release(puVar12);
LAB_1065c5e60:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    param_3 = puVar20;
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_retain(lVar10);
    _objc_retain(lVar14);
    _objc_retain(uVar6);
    _objc_retain(uVar15);
    puVar20 = param_3;
    func_0x00010c08fa60();
    if ((puVar20 != (undefined *)0x0) && (lVar1 = lVar14, func_0x00010bf529e0(), lVar1 != 0)) {
      _objc_retain(lVar10);
      puVar3 = PTR_PTR_1126cbd98;
      _objc_retain(uVar6);
      _objc_retain(param_3);
      _objc_alloc_init();
      func_0x00010c194460();
      _objc_release(param_3);
      puVar7 = PTR_PTR_1126ba668;
      _objc_alloc_init(PTR_PTR_1126ba668);
      func_0x00010c20a7e0();
      FUN_1065c527c(puVar7,uVar18);
      puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar10 == 0) {
        puVar20 = (undefined *)0x0;
      }
      else {
        func_0x00010c067fc0(lVar10);
        func_0x00010c0df780(puVar20);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar8 = PTR_PTR_1126b28f8;
      _objc_alloc();
      func_0x00010c02b8e0();
      puVar17 = puVar8;
      func_0x00010c2a82e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126be6d0;
      _objc_alloc();
      puVar19 = puVar7;
      func_0x00010bf63640(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar17;
      func_0x00010bf21f60(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c002bc0();
      puVar12 = puVar8;
      func_0x00010c2b66c0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar8);
      _objc_release(puVar9);
      _objc_release(puVar19);
      _objc_release(puVar17);
      _objc_release(puVar20);
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(lVar10);
      uVar18 = *(undefined8 *)(param_4 + 8);
      func_0x00010c269d40(uVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c280();
      _objc_release(uVar18);
      _objc_release(puVar13);
    }
    _objc_release(uVar15);
    _objc_release(uVar6);
    _objc_release(lVar14);
    _objc_release(lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065c5fb4; end: 1065c625b; -[SCStickerSender sendEmoji:quotedMessageId:sendContextSource:conversationIds:platformAnalytics:completionHandler:] */

void FUN_1065c5fb4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_6, func_0x00010bf529e0(), lVar1 != 0)) {
    _objc_retain(param_4);
    puVar2 = PTR_PTR_1126cbd98;
    _objc_retain(param_7);
    _objc_retain(param_3);
    _objc_alloc_init();
    func_0x00010c194460();
    _objc_release(param_3);
    puVar3 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    func_0x00010c20a7e0();
    FUN_1065c527c(puVar3,param_5);
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_4 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      func_0x00010c067fc0(param_4);
      func_0x00010c0df780(puVar11);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar4 = PTR_PTR_1126b28f8;
    _objc_alloc();
    func_0x00010c02b8e0();
    puVar5 = puVar4;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126be6d0;
    _objc_alloc();
    puVar6 = puVar3;
    func_0x00010bf63640(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0();
    puVar8 = puVar4;
    func_0x00010c2b66c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar11);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_4);
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c280();
    _objc_release(uVar10);
    _objc_release(puVar9);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065c625c; end: 1065c666b; -[SCStickerSender sendCustomSticker:quotedMessageId:conversationIds:platformAnalytics:completionHandler:isMemojiSticker:] */

void FUN_1065c625c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puStack_b8;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 != 0) && (lVar1 = param_5, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0c3fe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0c5900(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x00010c294d60(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10a360(uVar2);
    _objc_release(uVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_6);
    lVar1 = param_3;
    func_0x00010c0c5900();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x000107d6b30c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126cbda0;
    _objc_alloc_init();
    func_0x00010c20a7e0();
    puVar6 = PTR_PTR_1126cbd98;
    _objc_alloc_init();
    func_0x00010c188200();
    puVar7 = PTR_PTR_1126ba668;
    _objc_alloc_init();
    func_0x00010c20a7e0();
    lVar8 = lVar1;
    func_0x000107d6ad3c();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_4 == 0) {
      puStack_b8 = (undefined *)0x0;
    }
    else {
      func_0x00010c067fc0(param_4);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR_PTR_1126b28f8;
    _objc_alloc();
    func_0x00010c02b8e0();
    puVar10 = puVar9;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar11 = puVar7;
    func_0x00010bf63640(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf21f60(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002b60(puVar9);
    puVar14 = puVar9;
    func_0x00010c2b66c0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    _objc_release(puVar9);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puStack_b8);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_4);
    func_0x00010c15c280(uVar4);
    _objc_release(puVar15);
    _objc_release(uVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x28,0);
  _objc_storeStrong(param_4 + 0x20,0);
  _objc_storeStrong(param_4 + 0x18,0);
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 1065c666c; end: 1065c66bf; -[SCStickerSender .cxx_destruct] */

void FUN_1065c666c(long param_1)

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



/* Entry: 1065c66c0; end: 1065c67f3; -[SCStickerSendingServiceProvider _initializeStickerSenderWithItemTransformer:stickerLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c66c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126cbda8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_11274b3c4;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf523a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11274b3c8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf9e360();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274b3cc;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005d60(puVar1,param_2,lVar3,lVar5,param_3,param_4,lVar6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065c67f4; end: 1065c697b; -[SCStickerSendingServiceProvider provide] */

void FUN_1065c67f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1065c6998;
  puStack_68 = &UNK_1108b5a78;
  _objc_retain();
  puStack_60 = puVar1;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(puVar2);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cbdb0;
  _objc_alloc(PTR_PTR_1126cbdb0);
  func_0x00010c04c960();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar2);
  _objc_release(puStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1065c697c; end: 1065c6997;  */

void FUN_1065c697c(void)

{
  _objc_alloc_init(PTR_PTR_1126badf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065c6998; end: 1065c6aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c6998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126bae10;
  _objc_alloc();
  puVar6 = PTR_PTR_1126bae60;
  _objc_alloc();
  func_0x00010c029100();
  puVar2 = PTR_PTR_1126bae28;
  puStack_60 = puVar6;
  _objc_alloc();
  func_0x00010c029100();
  puVar3 = PTR_PTR_1126badf8;
  puStack_58 = puVar2;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0553c0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = puVar6 + 0x28;
    _objc_loadWeakRetained();
    uVar5 = *(undefined8 *)(puVar6 + 0x20);
    _objc_retain();
    if (puVar2 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = puVar2 + _DAT_11274b3d4;
      _objc_loadWeakRetained(puVar6);
    }
    puVar3 = puVar6;
    func_0x00010c254380(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010be3bc00(puVar2,param_2,uVar5,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065c6aa8; end: 1065c6b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c6aa8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar1 + _DAT_11274b3d4;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010c254380(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010be3bc00(lVar1,param_2,uVar4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1065c6b54; end: 1065c6baf; -[SCStickerSendingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c6b54(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b3cc);
  _objc_destroyWeak(param_1 + _DAT_11274b3d4);
  _objc_destroyWeak(param_1 + _DAT_11274b3c8);
  _objc_destroyWeak(param_1 + _DAT_11274b3c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b3d0);
  return;
}



/* Entry: 1065c6bb0; end: 1065c6c53; -[SCStickerQuickReplyCTPDataProvider initWithCTPFeed:withItemRepository:withItemPresentationModelProvider:withAvatarProvider:] */

undefined1 *
FUN_1065c6bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1f00;
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



/* Entry: 1065c6c54; end: 1065c6d4b; -[SCStickerQuickReplyCTPDataProvider items] */

void FUN_1065c6c54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0850a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065c6d4c; end: 1065c6e3b;  */

void FUN_1065c6d4c(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    puVar2 = param_2;
    func_0x00010c0b8600(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065c6e3c; end: 1065c6eef;  */

void FUN_1065c6e3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010bfb2660(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065c6ef0; end: 1065c6fa7;  */

void FUN_1065c6ef0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_2;
    func_0x00010c084fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010c084fc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010be5c940(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      goto LAB_1065c6f84;
    }
  }
  lVar2 = 0;
LAB_1065c6f84:
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1065c6fa8; end: 1065c7077; -[SCStickerQuickReplyCTPDataProvider _map:] */

void FUN_1065c6fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010bfb2660(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065c7078; end: 1065c70ff;  */

void FUN_1065c7078(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 == 0) ||
     ((lVar1 = param_2, func_0x00010bf96f00(), lVar1 != 1 &&
      (lVar1 = param_2, func_0x00010bf96f00(), lVar1 != 2)))) {
    lVar1 = 0;
  }
  else {
    _objc_retain(param_2);
    lVar1 = param_2;
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1065c7100; end: 1065c712f; -[SCStickerQuickReplyCTPDataProvider .cxx_destruct] */

void FUN_1065c7100(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065c7130; end: 1065c71a3; -[SCStickerQuickReplyCTPDataProviderConfigurationDefault initWithCTPExperiments:] */

undefined1 * FUN_1065c7130(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1f08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1065c71a4; end: 1065c7247;  */

void FUN_1065c71a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126be980;
  func_0x00010bf459e0(PTR_PTR_1126be980,param_2,&PTR____CFConstantStringClassReference_110e04718,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0cb0;
  _objc_alloc(PTR_PTR_1126b0cb0);
  func_0x00010c0559c0();
  puVar3 = PTR_PTR_1126be988;
  _objc_alloc(PTR_PTR_1126be988);
  func_0x00010c0124e0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065c7248; end: 1065c724f; -[SCStickerQuickReplyCTPDataProviderConfigurationDefault feed] */

void FUN_1065c7248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 1065c7250; end: 1065c725b; -[SCStickerQuickReplyCTPDataProviderConfigurationDefault .cxx_destruct] */

void FUN_1065c7250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065c725c; end: 1065c753b; -[SCStickerQuickReplyDataServiceProvider provide] */

void FUN_1065c725c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1065c753c;
  puStack_90 = &UNK_11092e488;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar5;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1065c7674;
  puStack_b8 = &UNK_11092e4b8;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  puStack_108 = puVar5;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1065c770c;
  puStack_f0 = &UNK_11092e4e8;
  _objc_copyWeak(auStack_d8,auStack_80);
  puStack_e8 = puVar2;
  puStack_e0 = puVar1;
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  puStack_130 = puVar5;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x1065c7838;
  puStack_118 = &UNK_11092e518;
  _objc_copyWeak(auStack_110,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_138,auStack_80);
  _objc_retain(puVar4);
  func_0x00010bf11fe0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126cbdd8;
  _objc_alloc(PTR_PTR_1126cbdd8);
  func_0x00010bffa480();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_110);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1065c753c; end: 1065c7673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c753c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126ba808;
    _objc_alloc(PTR_PTR_1126ba808);
    lVar2 = param_1 + _DAT_11274b3fc;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_11274b404;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf1c460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7e20(puVar1,param_2,lVar3,0,0xf,0,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126bb1d8;
    _objc_alloc_init(PTR_PTR_1126bb1d8);
    func_0x00010c1e12a0();
    puVar6 = PTR_PTR_1126bb1e8;
    _objc_alloc(PTR_PTR_1126bb1e8);
    func_0x00010c01ce40();
    func_0x00010c1e12a0(puVar7,param_2,puVar6,1);
    _objc_release(puVar6);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1065c7674; end: 1065c770b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c7674(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126cbdb8;
    _objc_alloc(PTR_PTR_1126cbdb8);
    lVar1 = param_1 + _DAT_11274b3ec;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffa4a0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1065c770c; end: 1065c7adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c770c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126cbdc0;
    _objc_alloc(PTR_PTR_1126cbdc0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa3620();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_11274b3ec;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c085260();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    lVar6 = lVar1 + _DAT_11274b3fc;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffa4c0(puVar9,param_2,uVar3,lVar5,uVar8,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1065c7ae0; end: 1065c7b6b; -[SCStickerQuickReplyDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c7ae0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274b404);
  _objc_destroyWeak(param_1 + _DAT_11274b400);
  _objc_destroyWeak(param_1 + _DAT_11274b3fc);
  _objc_destroyWeak(param_1 + _DAT_11274b3f8);
  _objc_destroyWeak(param_1 + _DAT_11274b3f4);
  _objc_destroyWeak(param_1 + _DAT_11274b3f0);
  _objc_destroyWeak(param_1 + _DAT_11274b3ec);
  _objc_destroyWeak(param_1 + _DAT_11274b3e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274b3e4);
  return;
}



/* Entry: 1065c7b6c; end: 1065c7c37; -[SCStickerQuickReplySmartReplyDataProvider initWithSmartReplyTagProvider:withStickerLocalSearch:withQueryFallbackEnabled:] */

undefined1 *
FUN_1065c7b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1f10;
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
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065c7c38; end: 1065c7d2b; -[SCStickerQuickReplySmartReplyDataProvider itemsForRequest:] */

void FUN_1065c7c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  func_0x00010bec0ce0(param_1);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065c7d2c; end: 1065c7ea3;  */

void FUN_1065c7d2c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26b3c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf19800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = uVar7;
    _objc_retain(uVar7);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1065c7ea4; end: 1065c8003;  */

void FUN_1065c7ea4(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    puVar1 = param_2;
    func_0x00010c086940();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    if ((puVar2 == (undefined *)0x0) && ((*(byte *)(*(long *)(param_1 + 0x28) + 0x18) & 1) != 0)) {
      puVar2 = *(undefined **)(param_1 + 0x30);
      func_0x00010c26b3c0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = param_2;
      func_0x00010c086940();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    puVar1 = puVar2;
    func_0x00010c08fa60();
    if (puVar1 == (undefined *)0x0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar3);
    }
    else {
      puVar1 = PTR_PTR_1126cbde0;
      _objc_alloc(PTR_PTR_1126cbde0);
      func_0x00010c0511a0();
      func_0x00010bdd00c0(*(undefined8 *)(param_1 + 0x28));
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c153600();
      _objc_release(uVar3);
    }
    _objc_release(puVar1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065c8004; end: 1065c8153; -[SCStickerQuickReplySmartReplyDataProvider _startObservingSearchIfNeeded] */

void FUN_1065c8004(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _os_unfair_lock_lock(param_1 + 0x30);
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar4);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c1540e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar3 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _os_unfair_lock_unlock(param_1 + 0x30);
  return;
}



/* Entry: 1065c8154; end: 1065c819b;  */

void FUN_1065c8154(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9c5c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065c819c; end: 1065c84bf; -[SCStickerQuickReplySmartReplyDataProvider _searchCompletedWithResult:] */

long FUN_1065c819c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = lVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(lVar3);
      }
      lVar4 = *(long *)(param_1 + 0x28);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = *(undefined **)(param_1 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf376a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR____NSArray0__struct_11034ab48;
      if (puVar6 != (undefined *)0x0) {
        puVar8 = puVar6;
      }
      _objc_retain(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_retain(lVar4);
      lVar7 = lVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar12 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar4);
          }
          uVar13 = *(undefined8 *)(lVar12 * 8);
          puVar6 = PTR_PTR_1126af5d0;
          func_0x00010c2619e0(PTR_PTR_1126af5d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0d9840(uVar13);
          _objc_release(puVar6);
          lVar12 = lVar12 + 1;
        } while (lVar7 != lVar12);
        lVar7 = lVar4;
        func_0x00010bf52a60();
      }
      _objc_release(lVar4);
      _objc_release(puVar8);
      _objc_release(lVar4);
      lVar11 = lVar11 + 1;
    } while (lVar11 != lVar2);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  func_0x00010c12d4a0(*(undefined8 *)(param_1 + 0x28));
  _objc_release(lVar3);
  _objc_release(param_3);
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return param_3;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x30);
  __Unwind_Resume();
  puVar8 = PTR_PTR_1126cbde8;
  func_0x00010c26b3c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c115860(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar9 = *(long *)(param_3 + 0x20);
  func_0x00010c154520(lVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar9;
  func_0x00010c0720c0();
  _objc_release(lVar9);
  _objc_release(puVar8);
  return lVar2;
}



/* Entry: 1065c84c0; end: 1065c8553;  */

undefined8 FUN_1065c84c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cbde8;
  func_0x00010c26b3c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c115860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c154520(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 1065c8554; end: 1065c8623; -[SCStickerQuickReplySmartReplyDataProvider _attach:for:] */

void FUN_1065c8554(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x30);
  puVar1 = *(undefined **)(param_1 + 0x28);
  func_0x00010c0e00e0(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
  }
  func_0x00010bf09f60(puVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x28),param_2,puVar2,param_4);
  _objc_release(puVar2);
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065c8624; end: 1065c866b; -[SCStickerQuickReplySmartReplyDataProvider .cxx_destruct] */

void FUN_1065c8624(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065c866c; end: 1065c86df; -[SCCreativeKitDeeplinkBlizzardLoggerImpl initWithBlizzardLogger:] */

undefined1 * FUN_1065c866c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1f18;
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



/* Entry: 1065c86e0; end: 1065c873b; -[SCCreativeKitDeeplinkBlizzardLoggerImpl logDeeplinkStart:] */

void FUN_1065c86e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000108eca2ac(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5840;
  _objc_alloc(PTR_PTR_1126b5840);
  func_0x00010c048220();
  func_0x00010c0a41c0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065c873c; end: 1065c8797; -[SCCreativeKitDeeplinkBlizzardLoggerImpl logDeeplinkProcessingStart:] */

void FUN_1065c873c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000108eca2ac(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5840;
  _objc_alloc(PTR_PTR_1126b5840);
  func_0x00010c048220();
  func_0x00010c0a4140();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065c8798; end: 1065c8807; -[SCCreativeKitDeeplinkBlizzardLoggerImpl logCreativeKitDeepLinkClientError:withMetadata:] */

void FUN_1065c8798(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  
  func_0x000108eca2ac(in_x3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5840;
  _objc_alloc(PTR_PTR_1126b5840);
  func_0x00010c048220();
  func_0x00010c0a40e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x3);
  return;
}



/* Entry: 1065c8808; end: 1065c887b; -[SCCreativeKitDeeplinkBlizzardLoggerImpl logCreativeKitDeepLinkServerError:withHttpStatusCode:metadata:] */

void FUN_1065c8808(void)

{
  undefined *puVar1;
  undefined8 in_x4;
  
  func_0x000108eca2ac(in_x4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b5840;
  _objc_alloc(PTR_PTR_1126b5840);
  func_0x00010c048220();
  func_0x00010c0a4160();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x4);
  return;
}



/* Entry: 1065c887c; end: 1065c8887; -[SCCreativeKitDeeplinkBlizzardLoggerImpl .cxx_destruct] */

void FUN_1065c887c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065c8888; end: 1065c88fb; -[SCCreativeKitDeeplinkGrapheneMetricsReporter initWithGraphene:] */

undefined1 * FUN_1065c8888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1f20;
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



/* Entry: 1065c88fc; end: 1065c899b; -[SCCreativeKitDeeplinkGrapheneMetricsReporter logCkLiteDeepLinkProcessorMetricWithDimension:andValue:] */

void FUN_1065c88fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cbdf0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf39a40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1065c899c; end: 1065c8a3b; -[SCCreativeKitDeeplinkGrapheneMetricsReporter logCkLiteDeepLinkRequestParserWithDimension:value:] */

void FUN_1065c899c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cbdf0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf39a20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1065c8a3c; end: 1065c8adb; -[SCCreativeKitDeeplinkGrapheneMetricsReporter logCkDeepLinkProcessorMetricWithDimension:value:] */

void FUN_1065c8a3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cbdf0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf399c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1065c8adc; end: 1065c8b7b; -[SCCreativeKitDeeplinkGrapheneMetricsReporter logCkDeepLinkRequestParserWithDimension:value:] */

void FUN_1065c8adc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cbdf0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf399a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1065c8b7c; end: 1065c8c1b; -[SCCreativeKitDeeplinkGrapheneMetricsReporter logCkDeepLinkRequestHandlerMetricWithDimension:value:] */

void FUN_1065c8b7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cbdf0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf39980(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1065c8c1c; end: 1065c8c57; -[SCCreativeKitDeeplinkGrapheneMetricsReporter logCreativeKitDeepLinkClientError:productType:shareType:] */

void FUN_1065c8c1c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be0b0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065c8c58; end: 1065c8d33; -[SCCreativeKitDeeplinkGrapheneMetricsReporter logCreativeKitDeepLinkServerError:withHttpStatusCode:productType:shareType:] */

void FUN_1065c8c58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010be0b0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110dc4658);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c2ac460(lVar1,param_2,&PTR____CFConstantStringClassReference_110e55258,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1065c8d34; end: 1065c8dbb; -[SCCreativeKitDeeplinkGrapheneMetricsReporter logCkPasteControlModalAction:] */

void FUN_1065c8d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cbdf0;
  _objc_retain(param_3);
  func_0x00010c241b40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1065c8dbc; end: 1065c8ec3; -[SCCreativeKitDeeplinkGrapheneMetricsReporter _errorMetric:productType:shareType:] */

void FUN_1065c8dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cbdf0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf39a60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108ecd140(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd6078,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110e41a18,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110e55278,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065c8ec4; end: 1065c8ecf; -[SCCreativeKitDeeplinkGrapheneMetricsReporter .cxx_destruct] */

void FUN_1065c8ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065c8ed0; end: 1065c91f7; -[SCCreativeKitWebModalViewController initWithDeepLink:navigationDelegate:snapTokenProvider:safeBrowsingAPI:snapProProfilesProvider:creatorSettingsService:businessProfilesPresenterScopeLauncher:legacySendToScopeLauncher:conversationDestinationParser:httpMetadataService:httpRequestModifier:urlPreviewProvider:simpleContentFetcher:imageSourceProvider:textSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1065c8ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f1f28;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274b428;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274b42c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274b430;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274b434;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274b438;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274b43c;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274b440;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274b444;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_16;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cbdf8;
    _objc_alloc();
    func_0x00010c02e7a0();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274b448);
    *(undefined **)((long)puVar1 + (long)_DAT_11274b448) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
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



/* Entry: 1065c91f8; end: 1065c94ef; -[SCCreativeKitWebModalViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065c91f8(long param_1,undefined8 param_2)

{
  double *pdVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar7 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  dVar10 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar7,uVar8,uVar9,dVar10);
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(uVar7,uVar8,uVar9,dVar10);
  lVar6 = (long)_DAT_11274b44c;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar3;
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6),param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010befbb60(puVar2,param_2,*(undefined8 *)(param_1 + lVar6));
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1065c94f0;
  puStack_90 = &UNK_1108471b0;
  _objc_retain(puVar2);
  puStack_88 = puVar2;
  func_0x00010c0bbfc0(uVar5,param_2,&puStack_a8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc();
  func_0x00010c014e80(uVar7,uVar8,uVar9);
  lVar6 = (long)_DAT_11274b450;
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar4;
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar6),param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c1fce40(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c167740(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
  func_0x00010c2026e0(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar6),param_2,0);
  func_0x00010c167a20(*(undefined8 *)(param_1 + lVar6),param_2,0);
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  puVar4 = PTR_PTR_1126cbe00;
  _objc_opt_class(PTR_PTR_1126cbe00);
  func_0x00010c125fe0(uVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_110e552b8);
  func_0x00010befbb60(puVar2,param_2,*(undefined8 *)(param_1 + lVar6));
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x1065c95a8;
  puStack_b8 = &UNK_1108471b0;
  puStack_b0 = puVar2;
  _objc_retain(puVar2);
  func_0x00010c0bbfc0(uVar5,param_2,&puStack_d0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  dVar10 = (double)(float)(int)(dVar10 * 0.3499999940395355);
  _objc_release(puVar3);
  pdVar1 = (double *)(param_1 + _DAT_11274b454);
  *pdVar1 = dVar10;
  pdVar1[1] = 0.0;
  pdVar1[2] = dVar10;
  pdVar1[3] = 0.0;
  func_0x00010c181f80(dVar10,0,dVar10,0,*(undefined8 *)(param_1 + lVar6));
  func_0x00010c222380(param_1,param_2,puVar2);
  _objc_release(puStack_b0);
  _objc_release(puStack_88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}


