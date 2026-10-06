/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107094a58; end: 107094b6f; -[SCArroyoChatLogger _logGallerySnapSendForMemoriesSnapIfNeededWithSnapSendInfo:requiresSnapEditor:] */

void FUN_107094a58(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c9b80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c23f880();
  _objc_retainAutoreleasedReturnValue();
  if ((((uVar1 != 0) && (uVar2 != 0)) &&
      ((param_4 == 0 || (uVar3 = uVar2, func_0x00010c240640(), (int)uVar3 != 0)))) &&
     (uVar3 = uVar1, func_0x00010c15cb80(), uVar3 < 2)) {
    uVar3 = param_3;
    func_0x00010bf6eca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_10708ffd0();
    uVar5 = uVar2;
    func_0x000107fda568(uVar2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar5 != 0) {
      func_0x00010c1fc1a0(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107094b70; end: 107094d43; -[SCArroyoChatLogger didSendComplete:] */

void FUN_107094b70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c0af1e0(param_1,param_2,param_3);
  lVar1 = param_3;
  func_0x00010bf50640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf43ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0 && lVar3 == 0) {
    lVar2 = param_3;
    func_0x00010bf43f60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 == 0) goto LAB_107094c98;
    lVar2 = param_3;
    func_0x00010bf43e40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 == 0) {
      lVar3 = param_3;
      func_0x00010bf43ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf529e0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar4 != 0) goto LAB_107094c98;
      lVar2 = param_1;
      func_0x00010bebd200(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be53e80(param_1,param_2,lVar2,1);
    }
  }
  else {
    lVar3 = param_3;
    func_0x00010bf4bc60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c0fe1c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c0ccde0();
    switch(lVar3) {
    case 3:
      func_0x00010be58c20(param_1,param_2,param_3);
      break;
    case 5:
    case 6:
    case 0x17:
      func_0x00010c0a2f00(param_1,param_2,param_3);
    case 0:
    case 1:
    case 2:
    case 4:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
      func_0x00010c0a2e00(param_1,param_2,param_3);
      break;
    case 0xe:
    case 0xf:
      func_0x00010c0a2de0(param_1,param_2,param_3);
    }
  }
  _objc_release(lVar2);
LAB_107094c98:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107094d44; end: 107094d47; -[SCArroyoChatLogger didConfirmConversationServerCreation:] */

void FUN_107094d44(void)

{
  return;
}



/* Entry: 107094d48; end: 107094d4b; -[SCArroyoChatLogger didConversationReset:messages:] */

void FUN_107094d48(void)

{
  return;
}



/* Entry: 107094d4c; end: 107094d7f; -[SCArroyoChatLogger logSCAChatCreateOneOnOneWithSource:conversationId:recipientUsername:navigationAction:previewSize:cellState:wallpaperSource:] */

void FUN_107094d4c(void)

{
  func_0x00010be58060();
  return;
}



/* Entry: 107094d80; end: 107094db7; -[SCArroyoChatLogger logSCAChatCreateOneOnOneWithSource:conversationId:recipientUserId:navigationAction:previewSize:cellState:wallpaperSource:] */

void FUN_107094d80(void)

{
  func_0x00010be58060();
  return;
}



/* Entry: 107094db8; end: 107094e9b; -[SCArroyoChatLogger logSCAChatCreateGroupWithMischiefId:communityId:navigationAction:source:previewSize:cellState:wallpaperSource:] */

void FUN_107094db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107094e9c;
  puStack_98 = &UNK_11098afc8;
  uStack_58 = param_9;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_80 = param_1;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  uStack_60 = param_8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be111e0(param_1,param_2,param_3,&puStack_b0);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107094e9c; end: 107094f23;  */

void FUN_107094e9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4570;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c1c8600();
  func_0x00010c17f780(puVar1);
  func_0x00010be51d00(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107094f24; end: 1070950cf; -[SCArroyoChatLogger _logSCAChatCreateOneOnOneWithSource:conversationId:recipientUsername:recipientUserId:navigationAction:previewSize:cellState:wallpaperSource:] */

void FUN_107094f24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uStack_90 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_78 = param_9;
  uStack_70 = param_10;
  uStack_88 = param_7;
  uStack_80 = param_8;
  func_0x00010c2448c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1070950d0; end: 10709513f;  */

void FUN_1070950d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be58000();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107095140; end: 1070952cf; -[SCArroyoChatLogger _logSCAChatCreateOneOnOneWithSource:conversationId:recipientUsername:recipientUserId:navigationAction:previewSize:cellState:snapchatter:wallpaperSource:] */

void FUN_107095140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_98,auStack_68);
  uStack_90 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_78 = param_9;
  uStack_88 = param_7;
  uStack_80 = param_8;
  _objc_retain(param_10);
  uStack_70 = param_11;
  func_0x00010be111e0(param_1);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1070952d0; end: 10709533f;  */

void FUN_1070952d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be58020();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107095340; end: 107095523; -[SCArroyoChatLogger _logSCAChatCreateOneOnOneWithSource:conversationId:recipientUsername:recipientUserId:navigationAction:previewSize:cellState:snapchatter:wallpaperSource:friendsFeedMetadata:] */

void FUN_107095340(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_12);
  _objc_initWeak(auStack_70,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_70);
  uStack_98 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_80 = param_9;
  uStack_90 = param_7;
  uStack_88 = param_8;
  _objc_retain(param_10);
  uStack_78 = param_11;
  _objc_retain(param_12);
  func_0x00010bfa5f80(uVar1);
  _objc_release(uVar1);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_12);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107095524; end: 10709559b;  */

void FUN_107095524(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be58040();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10709559c; end: 10709583f; -[SCArroyoChatLogger _logSCAChatCreateOneOnOneWithSource:conversationId:recipientUsername:recipientUserId:navigationAction:previewSize:cellState:snapchatter:wallpaperSource:friendsFeedMetadata:conversation:] */

void FUN_10709559c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,undefined8 param_11,undefined8 param_12,
                  long param_13)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_13);
  puVar1 = PTR_PTR_1126d4570;
  _objc_retain(param_12);
  _objc_alloc_init(puVar1);
  lVar2 = param_13;
  func_0x00010c06e040();
  if ((int)lVar2 != 0) {
    lVar2 = param_13;
    func_0x00010bf50900();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf2c1e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bef4a80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_13;
      func_0x00010bf50900(param_13);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf2c1e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bef4a80();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c0f3e20(uVar6,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(uVar6);
      uVar6 = uVar7;
      func_0x00010c15ed20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fd4c0(puVar1,param_2,uVar6);
      _objc_release(uVar6);
      uVar6 = uVar7;
      func_0x00010bef2c20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163720(puVar1,param_2,uVar6);
      _objc_release(uVar6);
      _objc_release(uVar7);
    }
  }
  if (param_10 != 0) {
    uVar8 = param_10;
    func_0x00010795e2c8(param_10);
    func_0x00010c1a0ce0(puVar1,param_2,uVar8);
    uVar8 = param_10;
    func_0x00010c07a6a0(param_10);
    func_0x00010c184500(puVar1,param_2,uVar8 & 0xffffffff);
    uVar8 = param_10;
    func_0x00010bf4a3a0(param_10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c1aba60(puVar1,param_2,uVar8 != 0);
  }
  func_0x00010c184460(puVar1,param_2,param_6);
  func_0x00010be51d00(param_1,param_2,puVar1,param_7,param_3,param_8,param_9,param_12,param_11);
  _objc_release(param_12);
  _objc_release(puVar1);
  _objc_release(param_13);
  _objc_release(param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107095840; end: 107095a83; -[SCArroyoChatLogger _logCommonSCAChatChatCreate:navigationAction:source:previewSize:cellState:feedMetadata:wallpaperSource:] */

void FUN_107095840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  func_0x00010c206c40(param_3,param_2,param_5);
  lVar3 = param_8;
  func_0x00010bf33fe0(param_8);
  func_0x00010c17a580(param_3,param_2,lVar3);
  func_0x00010c1cb6c0(param_3,param_2,param_4);
  func_0x00010c1e2200(param_3,param_2,param_6);
  func_0x00010c17a480(param_3,param_2,param_7);
  func_0x00010c2246e0(param_3,param_2,param_9);
  lVar3 = param_8;
  func_0x00010c22d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_8;
    func_0x00010c22d760(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19fd00(param_3,param_2,lVar3);
    _objc_release(lVar3);
  }
  lVar3 = param_8;
  func_0x00010bfd8d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_8;
    func_0x00010bfd8d80(param_8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    func_0x00010c2266c0(param_3,param_2,lVar4);
    _objc_release(lVar3);
  }
  lVar3 = param_8;
  func_0x00010bfdb620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_8;
    func_0x00010bfdb620(param_8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    func_0x00010c1a6980(param_3,param_2,lVar4);
    _objc_release(lVar3);
  }
  lVar3 = param_8;
  func_0x00010c24d580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_8;
    func_0x00010c24d580(param_8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c067fc0();
    func_0x00010c1a0a40(param_3,param_2,lVar4);
    _objc_release(lVar3);
  }
  _os_unfair_lock_lock(param_1 + 0x90);
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  bVar1 = *(byte *)(param_1 + 0xb0);
  bVar2 = *(byte *)(param_1 + 0xb1);
  *(undefined2 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  _os_unfair_lock_unlock(param_1 + 0x90);
  func_0x00010c1cca20(param_3,param_2,bVar1 & 1);
  func_0x00010c1e7ce0(param_3,param_2,bVar2 & 1);
  func_0x00010c21bee0(param_3,param_2,uVar5);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107095a84; end: 107095acb; -[SCArroyoChatLogger setChatCreatePillState:reactionPillDisplayed:unreadMessageCount:] */

void FUN_107095a84(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  _os_unfair_lock_lock(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0xb0) = param_3;
  *(undefined1 *)(param_1 + 0xb1) = param_4;
  *(undefined8 *)(param_1 + 0xb8) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x90);
  return;
}



/* Entry: 107095acc; end: 107095b6f; -[SCArroyoChatLogger logUnreadMessagePillActionWithPillType:unreadMessageCount:correspondentId:] */

void FUN_107095acc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d4578;
  _objc_opt_new(PTR_PTR_1126d4578);
  func_0x00010c1db980();
  func_0x00010c21bee0(puVar1,param_2,param_4);
  if (param_5 != 0) {
    func_0x00010c1844c0(puVar1,param_2,param_5);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107095b70; end: 107095b9f; -[SCArroyoChatLogger markNextChatViewsAsTriggeredByPillTap] */

void FUN_107095b70(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0xc0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x90);
  return;
}



/* Entry: 107095ba0; end: 107095bcb; -[SCArroyoChatLogger clearTriggeredByPillTap] */

void FUN_107095ba0(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0xc0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x90);
  return;
}



/* Entry: 107095bcc; end: 107095d27; -[SCArroyoChatLogger logChatPageChatCreateView:viewTimeUntilChatStartSec:exitEvent:sectionsAvailable:sectionsFriendsSelected:isGroupChat:isGroupButtonTapped:isGroupNamed:source:createButtonType:] */

void FUN_107095bcc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126b2868;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_opt_new(puVar3);
  func_0x00010c222d20(param_1);
  func_0x00010c222d60(param_2,puVar3);
  func_0x00010c198340(puVar3,param_4,param_5);
  func_0x00010c1f97c0(puVar3,param_4,param_6);
  _objc_release(param_6);
  func_0x00010c1f98e0(puVar3,param_4,param_7);
  _objc_release(param_7);
  func_0x00010c1b1920(puVar3,param_4,param_8);
  func_0x00010c1b1900(puVar3,param_4,param_9);
  func_0x00010c1b1960(puVar3,param_4,param_10);
  func_0x00010c206c40(puVar3,param_4,param_11);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbb7d8;
  if (param_12 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbb7b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110db6c78;
  if (param_12 != 0) {
    ppuVar2 = ppuVar1;
  }
  func_0x00010c17b0c0(puVar3,param_4,ppuVar2);
  uVar4 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107095d28; end: 107095e7f; -[SCArroyoChatLogger _logChatMischiefCreateWithConversation:isCommunity:communityId:] */

void FUN_107095d28(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d4580;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8600(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0f4aa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  func_0x00010c1e88a0(puVar1,param_2,lVar3 + -1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c247980();
  _objc_release(param_3);
  if (lVar2 - 1U < 10) {
    uVar4 = *(undefined8 *)(&UNK_10de1ef00 + (lVar2 - 1U) * 8);
  }
  else {
    uVar4 = 0;
  }
  func_0x00010c17be20(puVar1,param_2,uVar4);
  func_0x00010c1b00c0(puVar1,param_2,param_4);
  if (param_5 != 0) {
    func_0x00010c17f780(puVar1,param_2,param_5);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107095e80; end: 10709604f; -[SCArroyoChatLogger logSCAChatPageViewOneOnOneWithTime:recipientId:storyViewType:conversationId:exitEvent:conversationSubtype:conversationSubtypeMetadata:chatOpenTimestampMs:chatCloseTimestampMs:chatConversationSessionId:newUnreadChatViewed:newUnreadSnapViewed:] */

void FUN_107095e80(undefined8 param_1,double param_2,double param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,long param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_6);
  lVar1 = param_11;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126d4588;
    _objc_opt_new();
  }
  else {
    puVar2 = param_4;
    func_0x00010bebec00(param_4,param_5,param_11);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c183b80();
  func_0x00010c1e88e0(puVar2,param_5,param_6);
  func_0x00010c20e040(puVar2,param_5,param_7);
  func_0x00010c184460(puVar2,param_5,param_6);
  _objc_release(param_6);
  func_0x00010c198340(puVar2,param_5,param_9);
  func_0x00010c17b9e0(puVar2,param_5,(long)param_2);
  func_0x00010c17b000(puVar2,param_5,(long)param_3);
  if (param_12 != 0) {
    func_0x00010c17b080(puVar2,param_5,param_12);
  }
  func_0x00010bea8ce0(param_4,param_5,puVar2,param_13,param_14);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107096050;
  puStack_a0 = &UNK_1108951c0;
  puStack_98 = param_4;
  puStack_90 = puVar2;
  uStack_88 = param_1;
  _objc_retain(puVar2);
  func_0x00010be10480(param_4,param_5,param_8,&puStack_b8);
  _objc_release(puStack_90);
  _objc_release(puVar2);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  return;
}



/* Entry: 107096050; end: 107096063;  */

void FUN_107096050(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__logSCAChatPageViewWithEvent_vie_1125739c0,*(undefined8 *)(param_1 + 0x28),
             param_2);
  return;
}



/* Entry: 107096064; end: 10709618f; -[SCArroyoChatLogger logSCAChatPageViewGroupWithTime:conversationId:exitEvent:chatConversationSessionId:newUnreadChatViewed:newUnreadSnapViewed:] */

void FUN_107096064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d4588;
  _objc_opt_new();
  func_0x00010c183b80();
  func_0x00010c1c8600(puVar1,param_3,param_4);
  func_0x00010c198340(puVar1,param_3,param_5);
  if (param_6 != 0) {
    func_0x00010c17b080(puVar1,param_3,param_6);
  }
  func_0x00010bea8ce0(param_2,param_3,puVar1,param_7,param_8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107096190;
  puStack_80 = &UNK_1108951c0;
  uStack_78 = param_2;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  _objc_retain(puVar1);
  func_0x00010be10480(param_2,param_3,param_4,&puStack_98);
  _objc_release(puStack_70);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 107096190; end: 1070961a3;  */

void FUN_107096190(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__logSCAChatPageViewWithEvent_vie_1125739c0,*(undefined8 *)(param_1 + 0x28),
             param_2);
  return;
}



/* Entry: 1070961a4; end: 10709622f; -[SCArroyoChatLogger _logSCAChatPageViewWithEvent:viewTime:cellViewPosition:] */

void FUN_1070961a4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c222d20((double)(long)(param_1 * 10.0) / 10.0,param_4);
  func_0x00010c17a580(param_4,param_3,param_5);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107096230; end: 10709628b; -[SCArroyoChatLogger _setUnreadViewedOnEvent:chatViewed:snapViewed:] */

void FUN_107096230(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  _objc_retain(param_3);
  func_0x00010c1ccb80(param_3,param_2,param_4);
  func_0x00010c1ccbc0(param_3,param_2,param_5);
  func_0x00010c1ccbe0(param_3,param_2,param_5 + param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10709628c; end: 1070963eb; -[SCArroyoChatLogger _sponsoredSnapChatPageViewEvent:] */

void FUN_10709628c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126d4590;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_3;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf2be20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar2;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if ((lVar3 != 0) && (lVar4 != 0)) {
    lVar2 = lVar3;
    func_0x00010c15ed20(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    FUN_1070916dc(lVar3,lVar2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208260(puVar1);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf36600(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06b340();
    func_0x00010c1aefa0(puVar1);
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1070963ec; end: 10709669f; -[SCArroyoChatLogger logSendMessageWithStartEvent:] */

void FUN_1070963ec(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  puVar2 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea60();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c1ec620(puVar1);
  puVar3 = puVar1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d4598;
  _objc_opt_class(PTR_PTR_1126d4598);
  puVar4 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar2);
  puVar2 = puVar3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  puVar5 = puVar2;
  func_0x00010bf6eca0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3300;
  if (puVar5 == (undefined *)0x0) {
    _objc_retain(puVar3);
    _objc_opt_class(puVar4);
    puVar6 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    puVar4 = puVar3;
    if (((ulong)puVar6 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar3);
    puVar6 = puVar4;
    func_0x00010bf6eca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    if (puVar6 != (undefined *)0x0) goto LAB_107096568;
    puVar2 = param_3;
    func_0x00010bf4bc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0fe1c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c1c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  puVar6 = puVar5;
LAB_107096568:
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c15c1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf1f3c0();
  puVar10 = param_3;
  FUN_1070a32f0(param_3,puVar3,1,puVar5,uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60(uVar7);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070966a0; end: 107096def; -[SCArroyoChatLogger logSendMessageWithMessageResult:] */

void FUN_1070966a0(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined8 in_x6;
  int iVar26;
  long in_x7;
  undefined *puVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  undefined *puVar32;
  double dVar33;
  double dVar34;
  undefined *puStack_410;
  undefined8 uStack_408;
  code *pcStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  undefined8 uStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [8];
  undefined8 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined1 uStack_367;
  undefined1 uStack_366;
  undefined1 auStack_360 [16];
  double dStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  ulong uStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_210;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar8 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  puVar27 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar27;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar29;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea60();
  _objc_release(puVar9);
  _objc_release(puVar29);
  _objc_release(puVar27);
  func_0x00010c1ec620(puVar8);
  puVar29 = puVar8;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126d4598;
  puStack_160 = puVar29;
  _objc_opt_class(PTR_PTR_1126d4598);
  puVar9 = puVar29;
  _objc_opt_isKindOfClass(puVar29,puVar27);
  puVar27 = puVar29;
  if (((ulong)puVar9 & 1) == 0) {
    puVar27 = (undefined *)0x0;
  }
  _objc_retain(puVar27);
  puVar9 = PTR_PTR_1126c3300;
  _objc_retain(puVar29);
  _objc_opt_class(puVar9);
  puVar30 = puVar29;
  _objc_opt_isKindOfClass(puVar29,puVar9);
  puVar9 = puVar29;
  if (((ulong)puVar30 & 1) == 0) {
    puVar9 = (undefined *)0x0;
  }
  _objc_retain(puVar9);
  _objc_release(puVar29);
  FUN_1070a4ac4(param_3,*(undefined8 *)(param_1 + 0x20));
  puVar30 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar30;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar32;
  func_0x00010c15c1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar11;
  func_0x00010bf1f3c0();
  puVar12 = param_3;
  FUN_1070a3dc4(param_3,puVar29,1,puVar10,uVar24);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  _objc_release(puVar10);
  _objc_release(puVar32);
  _objc_release(puVar30);
  puStack_148 = puVar27;
  func_0x00010bf6eca0();
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = puVar8;
  puStack_158 = puVar12;
  puStack_150 = puVar9;
  if (puVar27 == (undefined *)0x0) {
    func_0x00010bf6eca0();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar9;
    if (puVar9 == (undefined *)0x0) {
      puVar27 = param_3;
      func_0x00010bf4bc60(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar27;
      func_0x00010c0fe1c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15c1c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar8);
      _objc_release(puVar27);
      puStack_170 = param_3;
      func_0x00010bf50640();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar27 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar29 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puStack_138 = puVar27;
      _objc_opt_new();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      puStack_140 = puVar29;
      _objc_retain(param_3);
      puVar27 = param_3;
      func_0x00010bf52a60();
      lStack_178 = param_1;
      if (puVar27 == (undefined *)0x0) {
        in_x7 = 0;
      }
      else {
        in_x7 = 0;
        lVar31 = *plStack_120;
        do {
          puVar29 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar31) {
              _objc_enumerationMutation(param_3);
            }
            lVar28 = *(long *)(lStack_128 + (long)puVar29 * 8);
            lVar14 = lVar28;
            func_0x00010c27dd80();
            if (lVar14 == 0) {
              lVar14 = lVar28;
              func_0x00010c0e8a20(lVar28);
              _objc_retainAutoreleasedReturnValue();
              lVar15 = lVar14;
              func_0x00010c122b80();
              _objc_retainAutoreleasedReturnValue();
              lVar16 = lVar15;
              func_0x00010c272380();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puStack_138);
              _objc_release(lVar16);
              _objc_release(lVar15);
              _objc_release(lVar14);
              func_0x00010bf50280(lVar28);
              _objc_retainAutoreleasedReturnValue();
              lVar14 = lVar28;
              func_0x00010c272380();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puStack_140);
              _objc_release(lVar14);
              _objc_release(lVar28);
              in_x7 = in_x7 + 1;
            }
            else {
              lVar14 = lVar28;
              func_0x00010bf50280(lVar28);
              _objc_retainAutoreleasedReturnValue();
              lVar15 = lVar14;
              func_0x00010c272380();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar8);
              _objc_release(lVar15);
              _objc_release(lVar14);
              func_0x00010bfcef00();
              _objc_retainAutoreleasedReturnValue();
              lVar14 = lVar28;
              func_0x00010c122b20();
              in_x7 = in_x7 + (int)lVar14;
              _objc_release(lVar28);
            }
            puVar29 = puVar29 + 1;
          } while (puVar27 != puVar29);
          puVar27 = param_3;
          func_0x00010bf52a60();
        } while (puVar27 != (undefined *)0x0);
      }
      _objc_release(param_3);
      puVar27 = PTR_PTR_1126b5be8;
      _objc_alloc();
      puVar30 = puVar8;
      func_0x00010bf51e00(puVar8);
      puVar9 = puStack_138;
      puVar32 = puStack_138;
      func_0x00010bf51e00(puStack_138);
      puVar29 = puStack_140;
      puVar10 = puStack_140;
      func_0x00010bf51e00(puStack_140);
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      in_x6 = 0;
      func_0x00010bff40a0();
      _objc_release(puVar10);
      _objc_release(puVar32);
      _objc_release(puVar30);
      _objc_release(puVar29);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(param_3);
      _objc_release(param_3);
      param_3 = puStack_170;
      param_1 = lStack_178;
    }
  }
  uVar13 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  puVar8 = param_3;
  func_0x00010bf43e60();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar8;
  func_0x00010c258040();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar29;
  func_0x00010bf529e0();
  if (puVar9 == (undefined *)0x0) {
    puVar9 = param_3;
    func_0x00010bf9fc20();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar9;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar30;
    func_0x00010bf529e0();
    if (puVar32 != (undefined *)0x0) {
      _objc_release(puVar30);
      _objc_release(puVar9);
      goto LAB_107096940;
    }
    puVar10 = param_3;
    func_0x00010bf43f60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf529e0();
    puVar32 = puStack_160;
    _objc_release(puVar10);
    _objc_release(puVar30);
    _objc_release(puVar9);
    _objc_release(puVar29);
    _objc_release(puVar8);
    if (puVar12 == (undefined *)0x0) goto LAB_107096a24;
  }
  else {
LAB_107096940:
    _objc_release(puVar29);
    _objc_release(puVar8);
  }
  puVar29 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar29;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf0d920();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar9;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  if (puVar32 == (undefined *)0x0) {
    puVar10 = param_3;
    func_0x00010c15c1e0();
    _objc_retainAutoreleasedReturnValue();
    puVar30 = puVar10;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
  }
  else {
    _objc_retain(puVar32);
    puVar30 = puVar32;
  }
  _objc_release(puVar32);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar29);
  puVar32 = puStack_160;
  FUN_1070a31c8(puStack_160);
  func_0x00010be58620(param_1);
  _objc_release(puVar30);
LAB_107096a24:
  puVar10 = param_3;
  func_0x00010be58600(param_1);
  _objc_release(uVar13);
  _objc_release(puVar27);
  _objc_release(puStack_158);
  _objc_release(puStack_150);
  _objc_release(puStack_148);
  _objc_release(puVar32);
  puVar29 = puStack_168;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_107096df0;
  lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2e0 = puVar29;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  puVar29 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  puStack_2c0 = (undefined8 *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  puVar12 = puVar10;
  puStack_2d8 = puVar29;
  func_0x00010c270960();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar12;
  func_0x00010bf52a60();
  iVar26 = (int)in_x7;
  dVar34 = 0.0;
  if (puVar29 != (undefined *)0x0) {
    puVar30 = (undefined *)*puStack_2c0;
    puVar32 = (undefined *)0x1;
    do {
      puVar27 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_2c0 != puVar30) {
          _objc_enumerationMutation(puVar12);
        }
        uVar13 = *(ulong *)(lStack_2c8 + (long)puVar27 * 8);
        puVar9 = puVar10;
        func_0x00010c270960();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar9;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        uVar17 = uVar13;
        func_0x00010c067fc0();
        if (uVar17 < 0x1c && (1L << (uVar17 & 0x3f) & 0x8b43010U) != 0) {
          puVar18 = puVar8;
          func_0x00010c067fc0();
          dVar34 = dVar34 + (double)(long)puVar18;
        }
        else {
          FUN_1070a3154();
          func_0x00010ba990a8();
          _objc_retainAutoreleasedReturnValue();
          if (uVar13 != 0) {
            func_0x00010c1d0640(puStack_2d8);
          }
          _objc_release(uVar13);
        }
        _objc_release(puVar8);
        puVar27 = puVar27 + 1;
      } while (puVar29 != puVar27);
      puVar29 = puVar12;
      func_0x00010bf52a60();
      iVar26 = (int)in_x7;
    } while (puVar29 != (undefined *)0x0);
  }
  _objc_release(puVar12);
  puVar29 = puVar10;
  func_0x00010bf957e0();
  puVar12 = puVar10;
  func_0x00010c2510e0();
  dVar33 = (double)((long)puVar29 - (long)puVar12) - dVar34;
  if (dVar33 <= 0.0) {
    dVar33 = 0.0;
  }
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar33,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puStack_2d8;
  func_0x00010c1d0640(puStack_2d8);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126b15f8;
  _objc_alloc();
  puVar18 = puVar29;
  func_0x00010bf51e00();
  uVar24 = 0;
  uVar11 = 0;
  puVar25 = puVar18;
  func_0x00010c010c80();
  _objc_release(puVar18);
  puVar23 = puVar12;
  func_0x00010c0aa440(*(undefined8 *)(puStack_2e0 + 0x80));
  _objc_release(puVar12);
  _objc_release(puVar29);
  puVar19 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = uStack_2a0;
  uVar5 = uStack_2a8;
  uVar22 = uStack_2b0;
  puVar3 = puStack_2c0;
  lVar31 = lStack_2c8;
  uVar21 = uStack_2d0;
  puVar2 = puStack_2d8;
  puVar1 = puStack_2e0;
  uStack_348 = 0;
  puStack_300 = puVar29;
  pcStack_2e8 = FUN_107097094;
  uVar7 = (undefined1)uStack_298;
  uVar4 = (undefined1)uStack_2b8;
  dStack_350 = dVar34;
  puStack_340 = puVar32;
  puStack_338 = puVar30;
  puStack_330 = puVar9;
  uStack_328 = uVar13;
  puStack_320 = puVar8;
  puStack_318 = puVar18;
  puStack_310 = puVar12;
  puStack_308 = puVar27;
  puStack_2f8 = puVar10;
  ppuStack_2f0 = &puStack_1a0;
  _objc_retain(puVar23);
  _objc_retain(uVar24);
  _objc_retain(puVar25);
  _objc_retain(uVar11);
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _objc_retain(uStack_288);
  _objc_retain(uStack_280);
  _objc_initWeak(auStack_360,puVar19);
  puStack_410 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_408 = 0xc2000000;
  pcStack_400 = FUN_107097454;
  puStack_3f8 = &UNK_11098b088;
  _objc_copyWeak(auStack_3a0,auStack_360);
  _objc_retain(puVar23);
  puStack_3f0 = puVar23;
  _objc_retain(uVar24);
  uStack_3e8 = uVar24;
  _objc_retain(puVar25);
  puStack_3e0 = puVar25;
  _objc_retain(uVar11);
  uStack_368 = (undefined1)iVar26;
  uStack_3d8 = uVar11;
  uStack_398 = in_x6;
  _objc_retain(puVar1);
  puStack_3d0 = puVar1;
  _objc_retain(puVar2);
  puStack_3c8 = puVar2;
  lStack_388 = lVar31;
  uStack_390 = uVar21;
  uStack_367 = uVar4;
  puStack_380 = puVar3;
  uStack_378 = uVar22;
  _objc_retain(uVar5);
  uStack_3c0 = uVar5;
  _objc_retain(uVar6);
  uStack_366 = uVar7;
  uStack_3b8 = uVar6;
  uStack_370 = uStack_290;
  _objc_retain(uStack_288);
  uStack_3b0 = uStack_288;
  _objc_retain(uStack_280);
  uStack_3a8 = uStack_280;
  ppuVar20 = &puStack_410;
  _objc_retainBlock();
  if (iVar26 == 0) {
    uVar21 = *(undefined8 *)(puVar19 + 0x30);
    func_0x00010c269d40(uVar21);
    _objc_retainAutoreleasedReturnValue();
    uVar22 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar20);
    func_0x00010c244e80(uVar21);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(ppuVar20);
  }
  else {
    (*(code *)ppuVar20[2])(ppuVar20,PTR____NSArray0__struct_11034ab48);
  }
  _objc_release(ppuVar20);
  _objc_release(uStack_3a8);
  _objc_release(uStack_3b0);
  _objc_release(uStack_3b8);
  _objc_release(uStack_3c0);
  _objc_release(puStack_3c8);
  _objc_release(puStack_3d0);
  _objc_release(uStack_3d8);
  _objc_release(puStack_3e0);
  _objc_release(uStack_3e8);
  _objc_release(puStack_3f0);
  _objc_destroyWeak(auStack_3a0);
  _objc_destroyWeak(auStack_360);
  _objc_release(uStack_280);
  _objc_release(uStack_288);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(puVar25);
  _objc_release(uVar24);
  _objc_release(puVar23);
  return;
}



/* Entry: 107096df0; end: 107097093; -[SCArroyoChatLogger _logSendMessagePerformanceWithMessageResult:] */

void FUN_107096df0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 in_x6;
  int in_w7;
  long unaff_x21;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  double dVar21;
  double dVar22;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [8];
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined1 uStack_1d7;
  undefined1 uStack_1d6;
  undefined1 auStack_1d0 [16];
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_150 = param_1;
  _objc_retain(param_3);
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar8 = param_3;
  puStack_148 = puVar7;
  func_0x00010c270960();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf52a60();
  dVar22 = 0.0;
  if (lVar9 != 0) {
    unaff_x27 = *plStack_130;
    unaff_x28 = 1;
    do {
      unaff_x21 = 0;
      do {
        if (*plStack_130 != unaff_x27) {
          _objc_enumerationMutation(lVar8);
        }
        unaff_x25 = *(ulong *)(lStack_138 + unaff_x21 * 8);
        unaff_x26 = param_3;
        func_0x00010c270960();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x26;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(unaff_x26);
        uVar10 = unaff_x25;
        func_0x00010c067fc0();
        if (uVar10 < 0x1c && (1L << (uVar10 & 0x3f) & 0x8b43010U) != 0) {
          lVar11 = unaff_x24;
          func_0x00010c067fc0();
          dVar22 = dVar22 + (double)lVar11;
        }
        else {
          FUN_1070a3154();
          func_0x00010ba990a8();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x25 != 0) {
            func_0x00010c1d0640(puStack_148);
          }
          _objc_release(unaff_x25);
        }
        _objc_release(unaff_x24);
        unaff_x21 = unaff_x21 + 1;
      } while (lVar9 != unaff_x21);
      lVar9 = lVar8;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lVar8);
  lVar8 = param_3;
  func_0x00010bf957e0();
  lVar9 = param_3;
  func_0x00010c2510e0();
  dVar21 = (double)(lVar8 - lVar9) - dVar22;
  if (dVar21 <= 0.0) {
    dVar21 = 0.0;
  }
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar21,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puStack_148;
  func_0x00010c1d0640(puStack_148);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126b15f8;
  _objc_alloc();
  puVar13 = puVar7;
  func_0x00010bf51e00();
  uVar18 = 0;
  uVar20 = 0;
  puVar19 = puVar13;
  func_0x00010c010c80();
  _objc_release(puVar13);
  puVar17 = puVar12;
  func_0x00010c0aa440(*(undefined8 *)(lStack_150 + 0x80));
  _objc_release(puVar12);
  _objc_release(puVar7);
  lVar8 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = uStack_110;
  uVar4 = uStack_118;
  uVar16 = uStack_120;
  plVar2 = plStack_130;
  lVar11 = lStack_138;
  uVar15 = uStack_140;
  puVar1 = puStack_148;
  lVar9 = lStack_150;
  uStack_1b8 = 0;
  puStack_170 = puVar7;
  pcStack_158 = FUN_107097094;
  uVar6 = (undefined1)uStack_108;
  uVar3 = (undefined1)uStack_128;
  dStack_1c0 = dVar22;
  uStack_1b0 = unaff_x28;
  lStack_1a8 = unaff_x27;
  lStack_1a0 = unaff_x26;
  uStack_198 = unaff_x25;
  lStack_190 = unaff_x24;
  puStack_188 = puVar13;
  puStack_180 = puVar12;
  lStack_178 = unaff_x21;
  lStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar17);
  _objc_retain(uVar18);
  _objc_retain(puVar19);
  _objc_retain(uVar20);
  _objc_retain(lVar9);
  _objc_retain(puVar1);
  _objc_retain(uVar4);
  _objc_retain(uVar5);
  _objc_retain(uStack_f8);
  _objc_retain(uStack_f0);
  _objc_initWeak(auStack_1d0,lVar8);
  puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_278 = 0xc2000000;
  pcStack_270 = FUN_107097454;
  puStack_268 = &UNK_11098b088;
  _objc_copyWeak(auStack_210,auStack_1d0);
  _objc_retain(puVar17);
  puStack_260 = puVar17;
  _objc_retain(uVar18);
  uStack_258 = uVar18;
  _objc_retain(puVar19);
  puStack_250 = puVar19;
  _objc_retain(uVar20);
  uStack_1d8 = (undefined1)in_w7;
  uStack_248 = uVar20;
  uStack_208 = in_x6;
  _objc_retain(lVar9);
  lStack_240 = lVar9;
  _objc_retain(puVar1);
  puStack_238 = puVar1;
  lStack_1f8 = lVar11;
  uStack_200 = uVar15;
  uStack_1d7 = uVar3;
  plStack_1f0 = plVar2;
  uStack_1e8 = uVar16;
  _objc_retain(uVar4);
  uStack_230 = uVar4;
  _objc_retain(uVar5);
  uStack_1d6 = uVar6;
  uStack_228 = uVar5;
  uStack_1e0 = uStack_100;
  _objc_retain(uStack_f8);
  uStack_220 = uStack_f8;
  _objc_retain(uStack_f0);
  uStack_218 = uStack_f0;
  ppuVar14 = &puStack_280;
  _objc_retainBlock();
  if (in_w7 == 0) {
    uVar15 = *(undefined8 *)(lVar8 + 0x30);
    func_0x00010c269d40(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar14);
    func_0x00010c244e80(uVar15);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(ppuVar14);
  }
  else {
    (*(code *)ppuVar14[2])(ppuVar14,PTR____NSArray0__struct_11034ab48);
  }
  _objc_release(ppuVar14);
  _objc_release(uStack_218);
  _objc_release(uStack_220);
  _objc_release(uStack_228);
  _objc_release(uStack_230);
  _objc_release(puStack_238);
  _objc_release(lStack_240);
  _objc_release(uStack_248);
  _objc_release(puStack_250);
  _objc_release(uStack_258);
  _objc_release(puStack_260);
  _objc_destroyWeak(auStack_210);
  _objc_destroyWeak(auStack_1d0);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(lVar9);
  _objc_release(uVar20);
  _objc_release(puVar19);
  _objc_release(uVar18);
  _objc_release(puVar17);
  return;
}



/* Entry: 107097094; end: 107097453; -[SCArroyoChatLogger logChatChatViewWithUnseenMessageContent:createdAt:analyticsMessageId:recipientIds:messageRetentionInMinutes:isGroupConversation:communityId:conversationId:chatPageSource:quotedMessageId:quotedMessageAvailabilityStatus:isReencrypted:messageEncryption:quotedAnalyticsMessageId:reactionIntentId:isEmojiReaction:gallerySource:sponsoredSnapAdResponse:sponsoredSnapServeItemId:] */

void FUN_107097094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined1 param_19,undefined4 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_initWeak(auStack_80,param_1);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_107097454;
  puStack_118 = &UNK_11098b088;
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_3);
  uStack_110 = param_3;
  _objc_retain(param_4);
  uStack_108 = param_4;
  _objc_retain(param_5);
  uStack_100 = param_5;
  _objc_retain(param_6);
  uStack_88 = (undefined1)param_8;
  uStack_f8 = param_6;
  uStack_b8 = param_7;
  _objc_retain(param_9);
  uStack_f0 = param_9;
  _objc_retain(param_10);
  uStack_e8 = param_10;
  uStack_a8 = param_12;
  uStack_b0 = param_11;
  uStack_87 = param_14;
  uStack_a0 = param_13;
  uStack_98 = param_16;
  _objc_retain(param_17);
  uStack_e0 = param_17;
  _objc_retain(param_18);
  uStack_86 = param_19;
  uStack_d8 = param_18;
  uStack_90 = param_21;
  _objc_retain(param_22);
  uStack_d0 = param_22;
  _objc_retain(param_23);
  uStack_c8 = param_23;
  ppuVar1 = &puStack_130;
  _objc_retainBlock();
  if (param_8 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar1);
    func_0x00010c244e80(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(ppuVar1);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1,PTR____NSArray0__struct_11034ab48);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107097454; end: 107097503;  */

void FUN_107097454(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010be51800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107097504; end: 10709750f;  */

void FUN_107097504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010709750c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107097510; end: 107097853; -[SCArroyoChatLogger _logChatChatViewWithUnseenMessageContent:createdAt:analyticsMessageId:recipientIds:snapchatters:messageRetentionInMinutes:isGroupConversation:communityId:conversationId:chatPageSource:quotedMessageId:quotedMessageAvailabilityStatus:isReencrypted:messageEncryption:quotedAnalyticsMessageId:reactionIntentId:isEmojiReaction:gallerySource:sponsoredSnapAdResponse:sponsoredSnapServeItemId:] */

void FUN_107097510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
                  undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined1 param_21,undefined4 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_initWeak(auStack_70,param_1);
  _objc_copyWeak(auStack_b0,auStack_70);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_78 = param_9;
  uStack_a8 = param_8;
  _objc_retain(param_11);
  _objc_retain(param_12);
  uStack_98 = param_14;
  uStack_a0 = param_13;
  uStack_77 = param_16;
  uStack_90 = param_15;
  uStack_88 = param_18;
  _objc_retain(param_19);
  _objc_retain(param_20);
  uStack_76 = param_21;
  uStack_80 = param_23;
  _objc_retain(param_24);
  _objc_retain(param_25);
  func_0x00010be10480(param_1);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107097854; end: 1070978f3;  */

void FUN_107097854(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be517e0(lVar1,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x80),*(undefined1 *)(param_1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1070978f4; end: 107098497; -[SCArroyoChatLogger _logChatChatViewWithUnseenMessageContent:createdAt:analyticsMessageId:recipientIds:snapchatters:messageRetentionInMinutes:isGroupConversation:communityId:cellPosition:conversationId:chatPageSource:quotedMessageId:quotedMessageAvailabilityStatus:isReencrypted:messageEncryption:quotedAnalyticsMessageId:reactionIntentId:isEmojiReaction:gallerySource:sponsoredSnapAdResponse:sponsoredSnapServeItemId:] */

void FUN_1070978f4(double param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  long param_6,undefined8 param_7,long param_8,undefined8 param_9,byte param_10,
                  undefined4 param_11,long param_12,undefined4 param_13,undefined4 param_14,
                  undefined8 param_15,undefined4 param_16,undefined4 param_17,long param_18,
                  undefined8 param_19,undefined1 param_20,undefined4 param_21,undefined8 param_22,
                  long param_23,long param_24,byte param_25)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  long lStack_e0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(in_stack_00000068);
  _objc_retain(in_stack_00000070);
  lVar1 = param_6;
  func_0x00010c08fa60();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    lStack_e0 = in_stack_00000068;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c08fa60(param_12);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c08fa60(param_23);
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010bf529e0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar14);
    _objc_release(puVar3);
    func_0x00010c1325c0(uRam00000001138473b0);
    _objc_release(puVar6);
  }
  else {
    uVar2 = param_4;
    func_0x000100bc5a10();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf4ce20();
    if ((0x19 < (uint)uVar7) || ((1 << (ulong)((uint)uVar7 & 0x1f) & 0x2020901U) == 0)) {
      _os_unfair_lock_lock(param_2 + 0x90);
      uVar7 = *(ulong *)(param_2 + 0x78);
      func_0x00010bf4b900();
      if ((uVar7 & 1) == 0) {
        func_0x00010befa120(*(undefined8 *)(param_2 + 0x78));
        puVar6 = PTR_PTR_1126d45a0;
        _objc_alloc_init();
        if (param_5 != 0) {
          func_0x00010c26f3a0(param_5);
          func_0x00010c161580(-param_1,puVar6);
        }
        if ((param_25 & 1) == 0) {
          if (param_24 == 0) {
            FUN_10708f360();
            FUN_10708f988(uVar2);
          }
          else {
            lVar1 = param_24;
            func_0x00010c25d700(param_24);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1e7c60(puVar6);
            _objc_release(lVar1);
          }
        }
        func_0x00010c17b600(puVar6);
        func_0x00010c206c40(puVar6);
        FUN_107098498(uVar2,puVar6);
        FUN_1070985dc(puVar6,param_10,param_15,param_7);
        lVar1 = param_8;
        func_0x00010bf529e0();
        if (lVar1 != 0) {
          lVar1 = param_8;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010795e2c8();
          func_0x00010c1a0ce0(puVar6);
          func_0x00010bf4a3a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x00010c1aba60(puVar6);
          _objc_release(lVar1);
        }
        func_0x00010c17a580(puVar6);
        func_0x00010c1c7160(puVar6);
        func_0x00010c1c5440(puVar6);
        if ((param_10 & 1) == 0) {
          func_0x00010c17b2a0(puVar6);
        }
        uVar7 = uVar2;
        func_0x00010c0dba60();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0dbae0();
        _objc_release(uVar7);
        if ((int)uVar8 == 1) {
          uVar7 = uVar2;
          func_0x00010c0dba60(uVar2);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010bf0ed00();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c0dba60();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c0c4bc0();
          func_0x00010c1cdda0((double)(uVar10 & 0xffffffff) / 1000.0,puVar6);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
        }
        uVar7 = uVar2;
        func_0x00010bf4ce20();
        if ((int)uVar7 == 3) {
          uVar7 = uVar2;
          func_0x00010bf9e280();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c245400();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010bfdc7e0();
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          if ((int)uVar10 != 0) {
            func_0x00010c176040(puVar6);
          }
        }
        uVar7 = uVar2;
        func_0x00010bf4ce20();
        if ((int)uVar7 == 3) {
          uVar7 = uVar2;
          func_0x00010bf9e280();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c245400();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x000107d61ef0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x000107d621f4();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          uVar7 = uVar10;
          func_0x00010c08fa60();
          if (uVar7 != 0) {
            uVar11 = 2;
            func_0x00010ba403e4();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a25a0(puVar6);
            _objc_release(puVar14);
            _objc_release(uVar11);
            func_0x00010c166880(puVar6);
          }
          _objc_release(uVar10);
        }
        uVar7 = uVar2;
        func_0x00010bf4ce20();
        if ((int)uVar7 == 0xe) {
          uVar7 = uVar2;
          func_0x00010bf5ae40();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010bf61ca0();
          _objc_retainAutoreleasedReturnValue();
          uVar12 = uVar10;
          func_0x00010c0ed1a0();
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          if ((int)uVar12 == 5) {
            uVar11 = *(undefined8 *)(param_2 + 0x50);
            func_0x00010c269d40(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0a8c60();
            _objc_release(uVar11);
            uVar11 = 3;
            func_0x00010ba403e4();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1a25a0(puVar6);
            _objc_release(puVar14);
            _objc_release(uVar11);
          }
        }
        func_0x00010c1a5b00(puVar6);
        uVar7 = uVar2;
        func_0x00010bf4ce20();
        if ((int)uVar7 == 5) {
          uVar7 = uVar2;
          func_0x00010c22a700();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          uVar8 = uVar7;
          func_0x00010c22ac80();
          if ((int)uVar8 == 0x16) {
            uVar8 = uVar7;
            func_0x00010bf1e300(uVar7);
            _objc_retainAutoreleasedReturnValue();
            puVar14 = PTR_PTR_1126d4550;
            _objc_opt_new(PTR_PTR_1126d4550);
            uVar9 = uVar8;
            func_0x00010bf454e0(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20d1a0(puVar14);
            _objc_release(uVar9);
            uVar9 = uVar8;
            func_0x00010c241220(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c20db00(puVar14);
            _objc_release(uVar9);
            _objc_release(uVar8);
          }
          else {
            puVar14 = (undefined *)0x0;
          }
          _objc_release(uVar7);
          func_0x00010c20d240(puVar6);
          _objc_release(puVar14);
          _objc_release(uVar7);
          uVar7 = uVar2;
          func_0x00010c22a700();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          uVar8 = uVar7;
          func_0x00010c22ac80();
          if ((int)uVar8 == 0x16) {
            uVar8 = uVar7;
            func_0x00010bf1e300();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c070ba0();
            _objc_release(uVar8);
          }
          _objc_release(uVar7);
          func_0x00010c20ddc0(puVar6);
          _objc_release(uVar7);
        }
        if (param_18 != 0) {
          puVar14 = PTR_PTR_1126d45a8;
          _objc_opt_new(PTR_PTR_1126d45a8);
          func_0x00010c17bc60();
          func_0x00010709145c(param_19);
          func_0x00010c17bc40(puVar14);
          if (param_23 != 0) {
            func_0x00010c17bc20(puVar14);
          }
          func_0x00010c17bc00(puVar6);
          _objc_release(puVar14);
        }
        FUN_1070986e4(puVar6,uVar2);
        func_0x000107098760(puVar6,uVar2);
        FUN_1070987dc(puVar6,param_20,1,param_22);
        FUN_107098880(uVar2);
        func_0x00010c17ae60(puVar6);
        FUN_107098a4c(puVar6,uVar2);
        lVar1 = param_12;
        func_0x00010c08fa60();
        if (lVar1 != 0) {
          func_0x00010c1b00c0(puVar6);
          func_0x00010c17f780(puVar6);
        }
        uVar7 = uVar2;
        func_0x00010c22a700();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c22ab40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        uVar10 = uVar9;
        func_0x00010bf25f00();
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        if (uVar10 != 0) {
          uVar7 = uVar2;
          func_0x00010c22a700();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c22ab40();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar8;
          func_0x00010c272380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1feca0(puVar6);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
        }
        func_0x00010c1a1d20(puVar6);
        uVar11 = *(undefined8 *)(param_2 + 0xa0);
        func_0x00010c269d40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = in_stack_00000068;
        param_3 = in_stack_00000070;
        FUN_1070916dc(in_stack_00000068,in_stack_00000070,uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c208260(puVar6);
        _objc_release(lVar1);
        _objc_release(uVar11);
        func_0x00010c21a3c0(puVar6);
        uVar11 = *(undefined8 *)(param_2 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b2e60();
        _objc_release(uVar11);
        uVar7 = *(ulong *)(param_2 + 0x78);
        func_0x00010bf529e0();
        if (999 < uVar7) {
          func_0x00010c12d520(*(undefined8 *)(param_2 + 0x78));
        }
        _objc_release(puVar6);
      }
      _os_unfair_lock_unlock(param_2 + 0x90);
    }
    _objc_release(uVar2);
    lStack_e0 = param_2;
  }
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000068);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lStack_e0 + 0x90);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(param_3);
  uVar2 = param_4;
  func_0x00010bf4ce20();
  if ((int)uVar2 == 4) {
    uVar2 = param_4;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c2544c0();
    _objc_release(uVar2);
    if ((int)uVar7 == 1) {
      uVar2 = param_4;
      func_0x00010c253880();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010bfebc60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar7;
      func_0x00010c2551e0();
      if ((int)uVar2 == 1) {
        uVar2 = uVar7;
        func_0x00010c2540c0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b5938;
        func_0x00010bfbab60(PTR_PTR_1126b5938);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar6;
        func_0x00010c130220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        _objc_release(puVar14);
        func_0x00010c20a8e0(param_3);
        _objc_release(puVar6);
        _objc_release(uVar2);
      }
      _objc_release(uVar7);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107098498; end: 1070985db;  */

void FUN_107098498(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010bf4ce20();
  if ((int)uVar1 == 4) {
    uVar1 = param_1;
    func_0x00010c253880();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2544c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 1) {
      uVar1 = param_1;
      func_0x00010c253880();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfebc60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = uVar2;
      func_0x00010c2551e0();
      if ((int)uVar1 == 1) {
        uVar1 = uVar2;
        func_0x00010c2540c0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126b5938;
        func_0x00010bfbab60(PTR_PTR_1126b5938);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c130220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        _objc_release(puVar4);
        func_0x00010c20a8e0(param_2);
        _objc_release(puVar3);
        _objc_release(uVar1);
      }
      _objc_release(uVar2);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070985dc; end: 1070986e3;  */

void FUN_1070985dc(ulong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 == 0) {
    uVar1 = param_1;
    _objc_opt_respondsToSelector(param_1,PTR_s_setCorrespondentGuid__11263eb38);
    if ((uVar1 & 1) != 0) {
      uVar2 = param_4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c184460(param_1);
      uVar1 = param_1;
      _objc_opt_respondsToSelector(param_1,PTR_s_setTeamsnapId__1126624d0);
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar2;
        func_0x00010c0720c0();
        if ((int)uVar3 != 0) {
          func_0x00010c212aa0(param_1);
        }
      }
      _objc_release(uVar2);
    }
  }
  else {
    uVar1 = param_1;
    _objc_opt_respondsToSelector(param_1,PTR_s_setMischiefId__11264fba8);
    if ((uVar1 & 1) != 0) {
      func_0x00010c0f8f20(param_1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070986e4; end: 1070987db;  */

void FUN_1070986e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf4ce20();
  if ((int)uVar1 == 2) {
    puVar2 = PTR_PTR_1126d4680;
    _objc_alloc_init(PTR_PTR_1126d4680);
    FUN_107099368();
    func_0x00010c17b880(param_1);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070987dc; end: 10709887f;  */

void FUN_1070987dc(undefined8 param_1,int param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d4690;
  _objc_opt_new(PTR_PTR_1126d4690);
  if ((param_2 != 0) && (param_3 != 0)) {
    func_0x00010c1a5cc0(puVar1);
  }
  if (param_4 == 1) {
    func_0x00010c193cc0(puVar1);
  }
  else if (param_4 == 3) {
    func_0x00010c19b720(puVar1);
  }
  func_0x00010c193d00(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107098880; end: 107098a4b;  */

undefined ** FUN_107098880(undefined **param_1,undefined **param_2,undefined **param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **unaff_x22;
  ulong uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined **ppuVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  ppuVar4 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar10 = param_1;
  func_0x00010bf4ce20();
  if ((int)ppuVar10 == 2) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    ppuVar10 = param_1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar10;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar10);
    ppuVar10 = ppuVar8;
    func_0x00010bf52a60();
    if (ppuVar10 != (undefined **)0x0) {
      lVar9 = *plStack_120;
      unaff_x22 = ppuVar10;
      do {
        ppuVar10 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(ppuVar8);
          }
          uVar6 = *(ulong *)(lStack_128 + (long)ppuVar10 * 8);
          uVar1 = uVar6;
          func_0x00010bf0dec0();
          if ((int)uVar1 == 5) {
            func_0x00010c0ca400();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar6;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c272380();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            ppuVar4 = &PTR____CFConstantStringClassReference_110e12b58;
            func_0x00010c0720c0();
            _objc_release(uVar2);
            _objc_release(uVar1);
            _objc_release(uVar6);
            if ((uVar3 & 1) != 0) {
              ppuVar10 = (undefined **)0x1;
              goto LAB_1070989fc;
            }
          }
          ppuVar10 = (undefined **)((long)ppuVar10 + 1);
        } while (unaff_x22 != ppuVar10);
        unaff_x22 = ppuVar8;
        ppuVar4 = &puStack_130;
        func_0x00010bf52a60();
      } while (unaff_x22 != (undefined **)0x0);
    }
    ppuVar10 = (undefined **)0x0;
LAB_1070989fc:
    _objc_release(ppuVar8);
    param_3 = ppuVar4;
  }
  else {
    ppuVar10 = (undefined **)0x0;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar10;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_260;
  pcStack_138 = FUN_107098a4c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(param_2);
  ppuVar4 = param_2;
  func_0x00010bf4ce20();
  if ((int)ppuVar4 == 2) {
    dVar11 = 0.0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    puStack_260 = (undefined *)0x0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    unaff_x22 = param_2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = unaff_x22;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    ppuVar4 = ppuVar10;
    func_0x00010bf52a60();
    if (ppuVar4 == (undefined **)0x0) {
      _objc_release(ppuVar10);
      param_3 = ppuVar8;
    }
    else {
      lVar9 = *plStack_250;
      dVar13 = 0.0;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          dVar12 = dVar11;
          if (*plStack_250 != lVar9) {
            _objc_enumerationMutation(ppuVar10);
            dVar12 = dVar11;
          }
          uVar7 = *(undefined8 *)(lStack_258 + (long)ppuVar8 * 8);
          uVar5 = uVar7;
          func_0x00010bf0dec0();
          dVar11 = dVar12;
          if ((int)uVar5 == 6) {
            func_0x00010c14e140(uVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14e120();
            dVar11 = dVar12;
            _objc_release(uVar7);
            dVar13 = dVar12;
          }
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar4 != ppuVar8);
        ppuVar4 = ppuVar10;
        param_3 = &puStack_260;
        func_0x00010bf52a60();
      } while (ppuVar4 != (undefined **)0x0);
      _objc_release(ppuVar10);
      unaff_x22 = (undefined **)0x0;
      if ((0.0 < dVar13) && (dVar13 != 1.0)) {
        func_0x00010c213680(dVar13,param_1);
      }
    }
  }
  _objc_release(param_2);
  ppuVar4 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_107098c00;
  ppuStack_290 = unaff_x22;
  ppuStack_288 = ppuVar10;
  ppuStack_280 = param_2;
  ppuStack_278 = param_1;
  ppuStack_270 = &puStack_140;
  _objc_retain(param_3);
  ppuVar10 = param_3;
  func_0x00010bf43e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar10;
  FUN_107098d0c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar10);
  _objc_initWeak(auStack_298,ppuVar4);
  _objc_copyWeak(auStack_2a0,auStack_298);
  _objc_retain(param_3);
  func_0x00010be10480(ppuVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_2a0);
  _objc_destroyWeak(auStack_298);
  _objc_release(ppuVar8);
  _objc_release(param_3);
  return param_3;
}



/* Entry: 107098a4c; end: 107098bff;  */

void FUN_107098a4c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf4ce20();
  if ((int)lVar1 == 2) {
    dVar9 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x22 = param_2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x22;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    lVar1 = unaff_x21;
    func_0x00010bf52a60();
    if (lVar1 == 0) {
      _objc_release(unaff_x21);
      param_3 = puVar5;
    }
    else {
      lVar7 = *plStack_120;
      dVar11 = 0.0;
      do {
        lVar8 = 0;
        do {
          dVar10 = dVar9;
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(unaff_x21);
            dVar10 = dVar9;
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar2 = uVar6;
          func_0x00010bf0dec0();
          dVar9 = dVar10;
          if ((int)uVar2 == 6) {
            func_0x00010c14e140(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14e120();
            dVar9 = dVar10;
            _objc_release(uVar6);
            dVar11 = dVar10;
          }
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = unaff_x21;
        param_3 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
      _objc_release(unaff_x21);
      unaff_x22 = 0;
      if ((0.0 < dVar11) && (dVar11 != 1.0)) {
        func_0x00010c213680(dVar11,param_1);
      }
    }
  }
  _objc_release(param_2);
  uVar2 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_107098c00;
  lStack_160 = unaff_x22;
  lStack_158 = unaff_x21;
  lStack_150 = param_2;
  uStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puVar3 = (undefined1 *)param_3;
  func_0x00010bf43e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  FUN_107098d0c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_initWeak(auStack_168,uVar2);
  _objc_copyWeak(auStack_170,auStack_168);
  _objc_retain(param_3);
  func_0x00010be10480(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release(puVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 107098c00; end: 107098d0b; -[SCArroyoChatLogger logChatChatScreenshotWithResult:] */

void FUN_107098c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf43e60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107098d0c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be10480(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 107098d0c; end: 107098dfb;  */

void FUN_107098d0c(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf50b20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf50b20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c272380(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107098dfc; end: 107098ff3; -[SCArroyoChatLogger _logChatChatScreenshotWithResult:cellPosition:] */

void FUN_107098dfc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x25;
  long unaff_x26;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126d45b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc_init();
  lVar2 = param_3;
  func_0x00010bf43e60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_107098d0c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf50640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar5 = lVar4;
  func_0x00010c27dd80();
  if (lVar5 == 1) {
    puVar11 = PTR____NSArray0__struct_11034ab48;
    FUN_1070985dc(puVar1,1,lVar3);
  }
  else {
    lVar2 = lVar4;
    func_0x00010c0e8a20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = lVar2;
    func_0x00010c122b80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = unaff_x25;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_70 = unaff_x26;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar6;
    FUN_1070985dc(puVar1,0,lVar3);
    _objc_release(puVar6);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(lVar2);
  }
  func_0x00010c17a580(puVar1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar1;
  func_0x00010c0b2e60();
  _objc_release(uVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar6 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_107098ff4;
  lStack_c0 = unaff_x26;
  lStack_b8 = unaff_x25;
  lStack_b0 = lVar2;
  lStack_a8 = lVar4;
  lStack_a0 = lVar3;
  uStack_98 = param_4;
  uStack_90 = uVar7;
  puStack_88 = puVar1;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_initWeak(auStack_c8,puVar6);
  puVar1 = puVar10;
  func_0x00010bf6e760(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d8,auStack_c8);
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  uStack_d0 = param_5;
  func_0x00010be10480(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_c8);
  _objc_release(puVar11);
  _objc_release(puVar10);
  return;
}



/* Entry: 107098ff4; end: 10709915f; -[SCArroyoChatLogger logChatChatReport:reportedUser:messageRetentionInMinutes:] */

void FUN_107098ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_3;
  func_0x00010bf6e760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = param_5;
  func_0x00010be10480(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107099160; end: 1070991a7;  */

void FUN_107099160(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be516a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070991a8; end: 107099367; -[SCArroyoChatLogger _logChatChatReport:reportedUser:messageRetentionInMinutes:cellPosition:] */

void FUN_1070991a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_3;
      func_0x00010c0cb200(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf026e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar4 = PTR_PTR_1126d45b8;
      _objc_alloc_init(PTR_PTR_1126d45b8);
      func_0x00010c17a580();
      func_0x00010c17b2a0(puVar4);
      func_0x00010c17b600(puVar4);
      uVar5 = param_4;
      func_0x00010c2923e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c184460(puVar4);
      _objc_release(uVar5);
      func_0x00010c07a6a0(param_4);
      func_0x00010c184500(puVar4);
      func_0x00010795e2c8(param_4);
      func_0x00010c1a0ce0(puVar4);
      FUN_10708f988(lVar1);
      func_0x00010c1c5440(puVar4);
      lVar2 = param_3;
      func_0x00010c120dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c1e7bc0(puVar4);
      _objc_release(lVar2);
      FUN_107099368(puVar4,lVar1);
      func_0x00010709957c(puVar4,lVar1);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107099368; end: 10709978f;  */

void FUN_107099368(long param_1,long param_2,undefined *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined1 auStack_348 [8];
  undefined1 uStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  code *pcStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined1 *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined1 uStack_2d7;
  undefined1 auStack_2d0 [16];
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  long lStack_280;
  long lStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
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
  lVar14 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf4ce20();
  if ((int)lVar2 == 2) {
    lVar2 = param_2;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar3 = lVar2;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_f0;
    param_5 = 0x10;
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      unaff_x27 = *plStack_120;
      do {
        unaff_x28 = 0;
        do {
          if (*plStack_120 != unaff_x27) {
            _objc_enumerationMutation(lVar3);
          }
          unaff_x25 = *(undefined8 *)(lStack_128 + unaff_x28 * 8);
          uVar5 = unaff_x25;
          func_0x00010bf0dec0();
          if ((int)uVar5 == 5) {
            func_0x00010c0ca400();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(unaff_x22);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
          }
          unaff_x28 = unaff_x28 + 1;
        } while (lVar4 != unaff_x28);
        param_4 = auStack_f0;
        param_5 = 0x10;
        lVar4 = lVar3;
        func_0x00010bf52a60();
        unaff_x24 = 0;
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
    unaff_x23 = unaff_x22;
    func_0x00010bf51e00();
    _objc_release(unaff_x22);
    _objc_release(lVar2);
    func_0x00010bf529e0(unaff_x23);
    func_0x00010c1c68c0(param_1);
    unaff_x21 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    param_3 = unaff_x21;
    func_0x00010bf529e0();
    func_0x00010c21b780(param_1);
    _objc_release(unaff_x21);
    _objc_release(unaff_x23);
  }
  _objc_release(param_2);
  lVar2 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_138 = 0x10709957c;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  lStack_150 = param_2;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(lVar14);
  lVar3 = lVar14;
  func_0x00010bf4ce20();
  uVar15 = (undefined1)param_7;
  if ((int)lVar3 == 2) {
    lVar3 = lVar14;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lVar4 = lVar3;
    func_0x00010bf0e720();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_220;
    param_5 = 0x10;
    lVar6 = lVar4;
    func_0x00010bf52a60();
    uVar15 = (undefined1)param_7;
    if (lVar6 != 0) {
      unaff_x27 = *plStack_250;
      do {
        unaff_x28 = 0;
        do {
          if (*plStack_250 != unaff_x27) {
            _objc_enumerationMutation(lVar4);
          }
          unaff_x25 = *(undefined8 *)(lStack_258 + unaff_x28 * 8);
          uVar5 = unaff_x25;
          func_0x00010bf0dec0();
          if ((int)uVar5 == 7) {
            func_0x00010c0dae20();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(unaff_x22);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
          }
          unaff_x28 = unaff_x28 + 1;
        } while (lVar6 != unaff_x28);
        param_4 = auStack_220;
        param_5 = 0x10;
        lVar6 = lVar4;
        func_0x00010bf52a60();
        uVar15 = (undefined1)param_7;
        unaff_x24 = 0;
      } while (lVar6 != 0);
    }
    _objc_release(lVar4);
    unaff_x23 = unaff_x22;
    func_0x00010bf51e00();
    _objc_release(unaff_x22);
    _objc_release(lVar3);
    func_0x00010bf529e0(unaff_x23);
    func_0x00010c1cda20(lVar2);
    unaff_x21 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    param_3 = unaff_x21;
    func_0x00010bf529e0();
    func_0x00010c21b7e0(lVar2);
    _objc_release(unaff_x21);
    _objc_release(unaff_x23);
  }
  _objc_release(lVar14);
  lVar3 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_107099790;
  lStack_2c0 = unaff_x28;
  lStack_2b8 = unaff_x27;
  uStack_2b0 = unaff_x26;
  uStack_2a8 = unaff_x25;
  uStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = unaff_x22;
  puStack_288 = unaff_x21;
  lStack_280 = lVar14;
  lStack_278 = lVar2;
  ppuStack_270 = &puStack_140;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puVar7 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    FUN_1070a4fd8(*(undefined8 *)(lVar3 + 0x98),&PTR____CFConstantStringClassReference_110e9c038,1);
    goto LAB_10709995c;
  }
  puVar8 = param_3;
  func_0x00010bf6e760(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  uVar11 = param_5;
  func_0x00010c06b1e0();
  puVar8 = puVar7;
  func_0x00010bf4ce20();
  uVar5 = uStack_260;
  uVar1 = (uint)puVar8;
  if (uVar1 < 0x15) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x180058U) == 0) {
      if (uVar1 != 0xb) goto LAB_10709993c;
      uVar16 = *(undefined8 *)(lVar3 + 0x98);
      uVar13 = param_5;
      func_0x00010c247520(param_5);
      func_0x000100c6f294();
      _objc_retainAutoreleasedReturnValue();
      FUN_1070a5338(uVar16,uVar13,1);
      _objc_release(uVar13);
      _objc_initWeak(auStack_2d0,lVar3);
      puStack_338 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_330 = 0xc2000000;
      pcStack_328 = FUN_107099ae4;
      puStack_320 = &UNK_11098b118;
      _objc_copyWeak(auStack_2f0,auStack_2d0);
      _objc_retain(param_5);
      uStack_2d8 = (undefined1)uVar11;
      uStack_318 = param_5;
      _objc_retain(param_3);
      puStack_310 = param_3;
      _objc_retain(param_4);
      puStack_308 = param_4;
      _objc_retain(puVar7);
      puStack_300 = puVar7;
      uStack_2d7 = uVar15;
      _objc_retain(param_8);
      uStack_2e8 = uVar5;
      uStack_2f8 = param_8;
      uStack_2e0 = param_6;
      func_0x00010be10480(lVar3);
      _objc_release(uStack_2f8);
      _objc_release(puStack_300);
      _objc_release(puStack_308);
      _objc_release(puStack_310);
      _objc_release(uStack_318);
      puVar12 = auStack_2f0;
    }
    else {
      _objc_initWeak(auStack_2d0,lVar3);
      _objc_copyWeak(auStack_348,auStack_2d0);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(puVar7);
      _objc_retain(param_5);
      uStack_340 = uVar15;
      func_0x00010be10480(lVar3);
      _objc_release(param_5);
      _objc_release(puVar7);
      _objc_release(param_4);
      _objc_release(param_3);
      puVar12 = auStack_348;
    }
    _objc_destroyWeak(puVar12);
    _objc_destroyWeak(auStack_2d0);
  }
LAB_10709993c:
  _objc_release(puVar10);
LAB_10709995c:
  _objc_release(puVar7);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107099790; end: 107099ae3; -[SCArroyoChatLogger logMediaViewWithMessage:recipientIds:mediaViewInfo:replayCountForCurrentUser:isGroupConversation:communityId:messageRetentionInMinutes:] */

void FUN_107099790(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_e8 [8];
  undefined1 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  lVar2 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    FUN_1070a4fd8(*(undefined8 *)(param_1 + 0x98),&PTR____CFConstantStringClassReference_110e9c038,1
                 );
    goto LAB_10709995c;
  }
  lVar3 = param_3;
  func_0x00010bf6e760(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar6 = param_5;
  func_0x00010c06b1e0();
  lVar3 = lVar2;
  func_0x00010bf4ce20();
  uVar1 = (uint)lVar3;
  if (uVar1 < 0x15) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x180058U) == 0) {
      if (uVar1 != 0xb) goto LAB_10709993c;
      uVar9 = *(undefined8 *)(param_1 + 0x98);
      uVar8 = param_5;
      func_0x00010c247520(param_5);
      func_0x000100c6f294();
      _objc_retainAutoreleasedReturnValue();
      FUN_1070a5338(uVar9,uVar8,1);
      _objc_release(uVar8);
      _objc_initWeak(auStack_70,param_1);
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_107099ae4;
      puStack_c0 = &UNK_11098b118;
      _objc_copyWeak(auStack_90,auStack_70);
      _objc_retain(param_5);
      uStack_78 = (undefined1)uVar6;
      uStack_b8 = param_5;
      _objc_retain(param_3);
      lStack_b0 = param_3;
      _objc_retain(param_4);
      uStack_a8 = param_4;
      _objc_retain(lVar2);
      lStack_a0 = lVar2;
      uStack_77 = param_7;
      _objc_retain(param_8);
      uStack_88 = param_9;
      uStack_98 = param_8;
      uStack_80 = param_6;
      func_0x00010be10480(param_1);
      _objc_release(uStack_98);
      _objc_release(lStack_a0);
      _objc_release(uStack_a8);
      _objc_release(lStack_b0);
      _objc_release(uStack_b8);
      puVar7 = auStack_90;
    }
    else {
      _objc_initWeak(auStack_70,param_1);
      _objc_copyWeak(auStack_e8,auStack_70);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(lVar2);
      _objc_retain(param_5);
      uStack_e0 = param_7;
      func_0x00010be10480(param_1);
      _objc_release(param_5);
      _objc_release(lVar2);
      _objc_release(param_4);
      _objc_release(param_3);
      puVar7 = auStack_e8;
    }
    _objc_destroyWeak(puVar7);
    _objc_destroyWeak(auStack_70);
  }
LAB_10709993c:
  _objc_release(lVar5);
LAB_10709995c:
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107099ae4; end: 107099c5f;  */

void FUN_107099ae4(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bfd4a20();
    if (iVar1 != 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      func_0x00010c07d160();
      if (((uVar3 & 1) != 0) || ((*(byte *)(param_1 + 0x60) & 1) != 0)) {
        func_0x00010c247520();
        func_0x00010be519e0(lVar2);
        goto LAB_107099bb8;
      }
    }
    func_0x00010be525c0(lVar2);
    if (*(long *)(param_1 + 0x58) != 0) {
      func_0x00010be52500(lVar2);
    }
  }
LAB_107099bb8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107099c60; end: 107099d6b; -[SCArroyoChatLogger logSCAChatMediaSaveToCameraRollWithConversationId:messageBodyType:messageMediaType:source:is24HourSnap:] */

void FUN_107099c60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d45c0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be9a7e0(param_1);
  func_0x00010c1c5440(puVar1);
  lVar2 = param_1;
  func_0x00010be9a800(param_1);
  func_0x00010c1c7160(puVar1);
  func_0x00010c206c40(puVar1);
  func_0x00010c1c8600(puVar1);
  _objc_release(param_3);
  func_0x00010c1f5ac0(puVar1);
  func_0x00010c2044c0(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  func_0x0001070a5d70(*(undefined8 *)(param_1 + 0x20),lVar2,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107099d6c; end: 107099d8f; -[SCArroyoChatLogger _scaMessageTypeForMessageBodyType:] */

undefined8 FUN_107099d6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x25) {
    return *(undefined8 *)(&UNK_10de1ef50 + (param_3 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 107099d90; end: 107099e2f; -[SCArroyoChatLogger _scaMediaTypeForMessageBodyType:messageMediaType:] */

undefined8 FUN_107099d90(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 < 9) {
    if (param_3 < 4) {
      if (param_3 == 1) {
        return 3;
      }
      if (param_3 != 2) {
        return 0xffffffffffffffff;
      }
    }
    else if (param_3 != 4) {
      if (param_3 == 7) {
        return 2;
      }
      if (param_3 != 8) {
        return 0xffffffffffffffff;
      }
      return 9;
    }
  }
  else if (3 < param_3 - 10U) {
    if (param_3 == 9) {
      return 1;
    }
    if (param_3 != 0x14) {
      return 0xffffffffffffffff;
    }
  }
  if (param_4 + 1U < 0x17) {
    return *(undefined8 *)(&UNK_10de1f078 + (param_4 + 1U) * 8);
  }
  return 5;
}



/* Entry: 107099e30; end: 107099ef3; -[SCArroyoChatLogger logSCAChatMediaCardActionWithMediaType:correspondentId:mediaActionType:actionResponse:] */

void FUN_107099e30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d44c8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc_init(puVar1);
  func_0x00010c1c5440();
  func_0x00010c1c4080(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c161cc0(puVar1,param_2,param_6);
  func_0x00010c184460(puVar1,param_2,param_4);
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107099ef4; end: 107099f7b; -[SCArroyoChatLogger logSCAChatMediaCardActionForMapPinID:] */

void FUN_107099ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d44c8;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1c5440();
  func_0x00010c1c23e0(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107099f7c; end: 10709a03f; -[SCArroyoChatLogger logSCAChatMediaItemSelect:withDrawerViewMode:withDrawerPosition:withEdit:] */

void FUN_107099f7c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d45c8;
  _objc_alloc_init(PTR_PTR_1126d45c8);
  func_0x00010c191940();
  func_0x00010c1deee0(puVar1,param_2,param_5);
  func_0x00010c1c7160(puVar1,param_2,0);
  if (param_3 < 3) {
    uVar2 = *(undefined8 *)(&UNK_10de1f130 + param_3 * 8);
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  func_0x00010c1c5440(puVar1,param_2,uVar2);
  func_0x00010c2261e0(puVar1,param_2,param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10709a040; end: 10709a043; -[SCArroyoChatLogger logChatMediaLoadLifeCycle:stepName:] */

void FUN_10709a040(void)

{
  return;
}



/* Entry: 10709a044; end: 10709a437; -[SCArroyoChatLogger _logChatSnapViewWithMessage:recipientIds:contents:mediaViewInfo:isGroupConversation:cellPosition:source:] */

void FUN_10709a044(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_7;
  func_0x00010c247520(param_7);
  func_0x000100c6f294();
  _objc_retainAutoreleasedReturnValue();
  FUN_1070a54ac(uVar6,uVar1,1);
  _objc_release(uVar1);
  uVar1 = param_6;
  FUN_10708f360(param_6);
  uVar6 = param_4;
  func_0x00010bf6e760(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar6);
  puVar3 = PTR_PTR_1126d45d0;
  _objc_opt_new(PTR_PTR_1126d45d0);
  func_0x00010c1c7160();
  FUN_10708f988(param_6);
  func_0x00010c1c5440(puVar3);
  uVar6 = param_7;
  func_0x00010c0c5180(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4880(puVar3);
  _objc_release(uVar6);
  FUN_10708efbc(param_6);
  func_0x00010c226fa0(puVar3);
  uVar6 = param_4;
  func_0x00010c0cc0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10709a438();
  func_0x00010c161580(puVar3);
  _objc_release(uVar6);
  func_0x00010c206c40(puVar3);
  func_0x00010c17a580(puVar3);
  uVar6 = param_4;
  func_0x00010c0cb200(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17b600(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar6);
  FUN_10708f07c();
  _objc_release(param_6);
  func_0x00010c176040(puVar3);
  func_0x00010c141460(param_7);
  func_0x00010c1ee600(puVar3);
  func_0x00010c141440(param_7);
  func_0x00010c1ee5e0(puVar3);
  func_0x00010c0fc320(param_7);
  func_0x00010c1dbbc0((double)(long)((param_1 / 1000.0) * 10.0) / 10.0,puVar3);
  uVar6 = param_7;
  func_0x00010bf4f180(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c095380();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19c240(puVar3);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar6);
  uVar6 = param_7;
  func_0x00010bf4f180(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar5 = uVar6;
  func_0x00010bf4f080(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar3);
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x00010c26e8e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d600(puVar3);
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x00010c26e8c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d5e0(puVar3);
  _objc_release(uVar5);
  FUN_1070985dc(puVar3,param_8,uVar2,param_5);
  _objc_release(param_5);
  _objc_retain(param_4);
  func_0x00010c27dd80(param_4);
  func_0x00010c083520(param_4);
  _objc_release(param_4);
  func_0x00010c2044c0(puVar3);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar5);
  func_0x0001070a5d00(*(undefined8 *)(param_2 + 0x20),uVar1,param_10);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10709a438; end: 10709a48f;  */

double FUN_10709a438(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf5a4a0();
  func_0x00010bf651a0(puVar1,param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  _objc_release(puVar1);
  return -param_1;
}



/* Entry: 10709a490; end: 10709b54f; -[SCArroyoChatLogger _logDirectSnapViewWithMessage:recipientIds:contents:mediaViewInfo:isGroupConversation:communityId:cellPosition:messageRetentionInMinutes:] */

void FUN_10709a490(float param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  ulong param_6,long param_7,undefined8 param_8,long param_9)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  uVar20 = *(undefined8 *)(param_2 + 0x98);
  _objc_retain(param_6);
  lVar1 = param_7;
  func_0x00010c247520(param_7);
  func_0x000100c6f294();
  _objc_retainAutoreleasedReturnValue();
  FUN_1070a5620(uVar20,lVar1,1);
  _objc_release(lVar1);
  uVar2 = param_6;
  FUN_10708f308();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  if (uVar2 == 0) {
    FUN_1070a4fd8(*(undefined8 *)(param_2 + 0x98),&PTR____CFConstantStringClassReference_110e9c058,1
                 );
    goto LAB_10709b4f0;
  }
  lVar1 = param_7;
  func_0x00010c247520();
  if ((lVar1 != 0) &&
     (lVar1 = param_7, func_0x00010c247520(), puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570,
     puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0, lVar1 != 0x29)) {
    func_0x00010c247520(param_7);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    FUN_1070a4fd8(*(undefined8 *)(param_2 + 0x98),puVar4,1);
    _objc_release(puVar4);
  }
  uVar5 = uVar2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf6e760();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126d45d8;
  _objc_opt_new(PTR_PTR_1126d45d8);
  FUN_1070985dc();
  FUN_10709b550(puVar4,uVar5,param_7);
  lVar1 = param_4;
  func_0x00010c0cb200(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c07c0c0();
  lVar8 = param_4;
  func_0x00010c0cb200(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0cb480();
  FUN_1070987dc(puVar4,lVar6,1,lVar9);
  _objc_release(lVar8);
  _objc_release(lVar1);
  FUN_10708f7ec(uVar2);
  func_0x00010c1c5440(puVar4);
  uVar10 = uVar2;
  func_0x00010bf5aee0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b5a0();
  func_0x00010c225be0(puVar4);
  _objc_release(uVar10);
  lVar1 = param_4;
  func_0x00010c0cb200(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar4);
  _objc_release(lVar6);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e720();
  func_0x000108442d68();
  func_0x00010c16ef20(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef220();
  func_0x00010c1dda00((double)param_1,puVar4);
  _objc_release(puVar3);
  lVar1 = param_4;
  func_0x00010c0cc0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10709a438();
  func_0x00010c161580(puVar4);
  _objc_release(lVar1);
  func_0x00010c247520(param_7);
  func_0x00010c206c40(puVar4);
  FUN_10709b6fc(uVar2);
  func_0x00010c225c80(puVar4);
  uVar10 = uVar2;
  func_0x00010709b770(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf4e420();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269920();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf8d2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  func_0x00010c1a7140(puVar4);
  func_0x00010c17a580(puVar4);
  lVar1 = param_7;
  func_0x00010bf4f180();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1833c0(puVar4);
  _objc_release(lVar6);
  lVar6 = lVar1;
  func_0x00010c26e8e0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d600(puVar4);
  _objc_release(lVar6);
  lVar6 = lVar1;
  func_0x00010c26e8c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d5e0(puVar4);
  _objc_release(lVar6);
  lVar6 = lVar1;
  func_0x00010c26e900(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182e00(puVar4);
  _objc_release(lVar6);
  func_0x00010c0835a0(lVar1);
  func_0x00010c223120(puVar4);
  func_0x00010bdc1220(lVar1);
  func_0x00010c182ea0(puVar4);
  lVar6 = lVar1;
  func_0x00010c129a00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea120(puVar4);
  _objc_release(lVar6);
  lVar6 = lVar1;
  func_0x00010c1343c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eb7e0(puVar4);
  _objc_release(lVar6);
  func_0x00010c17b2a0(puVar4);
  _objc_retain(param_4);
  func_0x00010c27dd80(param_4);
  func_0x00010c083520(param_4);
  _objc_release(param_4);
  func_0x00010c2044c0(puVar4);
  func_0x00010c243140(param_7);
  func_0x00010c205540(puVar4);
  lVar6 = param_4;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c0bc380();
  _objc_retainAutoreleasedReturnValue();
  if (lVar8 != 0) {
    lVar9 = param_4;
    func_0x00010c0cb340(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar9;
    func_0x00010c0bc380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27dd80();
    _objc_release(lVar14);
    _objc_release(lVar9);
  }
  _objc_release(lVar8);
  _objc_release(lVar6);
  func_0x00010c1b0de0(puVar4);
  lVar6 = param_9;
  func_0x00010c08fa60();
  if (lVar6 != 0) {
    func_0x00010c1b00c0(puVar4);
    func_0x00010c17f780(puVar4);
  }
  uVar10 = uVar2;
  func_0x00010bfd84e0();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar10 != 0) {
    uVar10 = uVar2;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5ea0();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c240(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar10);
    lVar6 = lVar1;
    func_0x00010c095380();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar10);
    if (uVar11 != 0 || lVar6 != 0) {
      puVar3 = PTR_PTR_1126c4718;
      _objc_opt_new(PTR_PTR_1126c4718);
      uVar10 = uVar2;
      func_0x00010c08fb40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c11fae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e74c0(puVar3);
      _objc_release(uVar11);
      _objc_release(uVar10);
      lVar8 = lVar6;
      func_0x00010c1185e0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4da0(puVar3);
      _objc_release(lVar8);
      lVar8 = lVar6;
      func_0x00010bf62d20(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189040(puVar3);
      _objc_release(lVar8);
      lVar8 = lVar6;
      func_0x00010c1185e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c08fa60();
      _objc_release(lVar8);
      if (lVar9 != 0) {
        puVar15 = PTR_PTR_1126d45e0;
        _objc_opt_new(PTR_PTR_1126d45e0);
        lVar8 = lVar6;
        func_0x00010c06eda0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b00e0(puVar15);
        _objc_release(lVar8);
        lVar8 = lVar6;
        func_0x00010c27d520(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        func_0x00010c21aaa0(puVar15);
        _objc_release(lVar8);
        func_0x00010c165ac0(puVar3);
        _objc_release(puVar15);
      }
      func_0x00010c1bb300(puVar4);
      lVar8 = lVar6;
      func_0x00010c0b5c60(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1160(puVar4);
      _objc_release(lVar8);
      lVar8 = lVar6;
      func_0x00010c247400(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c206b60(puVar4);
      _objc_release(lVar8);
      _objc_release(puVar3);
    }
    _objc_release(lVar6);
  }
  lVar6 = lVar1;
  func_0x00010c0d30a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar6 != 0) {
    lVar6 = lVar1;
    func_0x00010c0d30a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277e80();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ca440(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar6);
    lVar6 = lVar1;
    func_0x00010c0d30a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d560();
    func_0x00010c1ca420(puVar4);
    _objc_release(lVar6);
    lVar6 = lVar1;
    func_0x00010c0d30a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c0d3040();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c9ee0(puVar4);
    _objc_release(lVar8);
    _objc_release(lVar6);
  }
  lVar6 = lVar1;
  func_0x00010bfd6ba0();
  if ((int)lVar6 != 0) {
    func_0x00010c0dad20(lVar1);
    func_0x00010c1cd9e0(puVar4);
    func_0x00010c27fd60(lVar1);
    func_0x00010c21b5c0(puVar4);
    func_0x00010bf19c00(lVar1);
    func_0x00010c170040(puVar4);
  }
  lVar6 = lVar1;
  func_0x00010bfcebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar8 != 0) {
    lVar6 = lVar1;
    func_0x00010bfcebc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bdc2560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aeb20(puVar4);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar6);
  }
  lVar6 = lVar1;
  func_0x00010c259e20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010c08fa60();
  _objc_release(lVar6);
  if (lVar8 != 0) {
    lVar6 = lVar1;
    func_0x00010c259e20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bdc2560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d2e0(puVar4);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar6);
  }
  uVar10 = uVar2;
  func_0x00010bfd84a0();
  if ((int)uVar10 != 0) {
    uVar10 = uVar2;
    func_0x00010c08f220(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x000107d618c4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    func_0x00010c1581e0(uVar11);
    func_0x00010c1c9740(puVar4);
    func_0x00010c158380(uVar11);
    func_0x00010c1c9820(puVar4);
    _objc_release(uVar11);
  }
  uVar10 = uVar2;
  func_0x00010c1197a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bfdc3a0();
  _objc_release(uVar10);
  if ((int)uVar11 != 0) {
    uVar10 = uVar2;
    func_0x00010c1197a0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c241c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    uVar10 = uVar11;
    func_0x00010c2475a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar10 != 0) {
      uVar12 = uVar10;
      func_0x00010bfe2ee0(uVar10);
      uVar13 = uVar10;
      func_0x00010c0b5940(uVar10);
      func_0x000100c4a928(uVar12,uVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b5870;
      _objc_opt_new(PTR_PTR_1126b5870);
      func_0x00010c1d03e0();
      func_0x00010c185860(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar12);
    }
    _objc_release(uVar10);
    _objc_release(uVar11);
  }
  uVar10 = uVar2;
  func_0x00010bfddcc0();
  if ((int)uVar10 != 0) {
    uVar10 = uVar2;
    func_0x00010c2814e0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bfddce0();
    _objc_release(uVar10);
    if ((int)uVar11 != 0) {
      uVar10 = uVar2;
      func_0x00010c2814e0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c281680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      uVar10 = uVar11;
      func_0x00010c08bdc0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar10 != 0) {
        func_0x00010c1b9760(puVar4);
      }
      _objc_release(uVar10);
      _objc_release(uVar11);
    }
  }
  uVar20 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar20);
  uVar10 = uVar2;
  func_0x00010709b770();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c297e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  uVar10 = uVar2;
  func_0x00010bfddcc0();
  if (((uVar10 & 1) != 0) || (uVar10 = uVar11, func_0x00010c08fa60(), uVar10 != 0)) {
    uVar10 = uVar2;
    func_0x00010c2814e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf93ae0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c08fa60();
    if ((uVar13 == 0) && (uVar13 = uVar10, func_0x00010bfddce0(), (uVar13 & 1) == 0)) {
      uVar13 = uVar11;
      func_0x00010c08fa60();
      _objc_release(uVar12);
      if (uVar13 != 0) goto LAB_10709b214;
    }
    else {
      _objc_release(uVar12);
LAB_10709b214:
      func_0x00010be53fc0(param_2);
    }
    _objc_release(uVar10);
  }
  uVar10 = uVar2;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf0d820();
  _objc_release(uVar10);
  if (uVar12 != 0) {
    uVar10 = uVar2;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(uVar10);
    uVar10 = uVar13;
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar10;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar12;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bf08d40();
    _objc_release(uVar16);
    _objc_release(uVar12);
    _objc_release(uVar10);
    if (uVar17 != 0) {
      uVar10 = uVar13;
      func_0x00010bf4e080();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar10;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar12;
      func_0x00010c27f9c0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010bf08d20();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar18;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(uVar12);
      _objc_release(uVar10);
      _objc_retain(uVar19);
      uVar10 = uVar19;
      func_0x00010bfe2ee0();
      uVar12 = uVar19;
      func_0x00010c0b5940(uVar19);
      _objc_release(uVar19);
      func_0x000100c4a928(uVar10,uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar10;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      if (uVar12 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        func_0x00010c1d0640();
        func_0x00010c1d0640(puVar3);
        func_0x00010bfd84e0();
        func_0x00010c1d0640(puVar3);
        uVar20 = *(undefined8 *)(param_2 + 8);
        func_0x00010c269d40(uVar20);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar3;
        func_0x00010bf51e00(puVar3);
        func_0x0001070adbc8(uVar20,&PTR____CFConstantStringClassReference_110e9cff8,puVar15);
        _objc_release(puVar15);
        _objc_release(uVar20);
        _objc_release(puVar3);
      }
      _objc_release(uVar12);
      _objc_release(uVar19);
    }
    _objc_release(uVar13);
  }
  _objc_release(uVar11);
  _objc_release(lVar1);
  _objc_release(puVar4);
  _objc_release(lVar7);
  _objc_release(uVar5);
LAB_10709b4f0:
  _objc_release(uVar2);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10709b550; end: 10709b6fb;  */

void FUN_10709b550(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c29ee40(param_3);
    puVar1 = PTR_PTR_1126d45d8;
    _objc_opt_class(PTR_PTR_1126d45d8);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126d45e8;
      _objc_opt_class(PTR_PTR_1126d45e8);
      uVar2 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      if ((uVar2 & 1) == 0) {
        puVar1 = PTR_PTR_1126d45f0;
        _objc_opt_class(PTR_PTR_1126d45f0);
        uVar2 = param_1;
        _objc_opt_isKindOfClass(param_1,puVar1);
        if ((uVar2 & 1) == 0) {
          puVar1 = PTR_PTR_1126d45f8;
          _objc_opt_class(PTR_PTR_1126d45f8);
          uVar2 = param_1;
          _objc_opt_isKindOfClass(param_1,puVar1);
          if ((uVar2 & 1) == 0) goto LAB_10709b628;
        }
      }
    }
    func_0x00010c222d20(param_1);
  }
LAB_10709b628:
  uVar2 = param_1;
  _objc_opt_respondsToSelector(param_1,PTR_s_setSnapTimeIsLoop__11265f038);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = param_1, _objc_opt_respondsToSelector(param_1,PTR_s_setSnapTimeSec__11265f048),
     (uVar2 & 1) != 0)) {
    uVar3 = param_2;
    func_0x00010c0fef80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf85640();
    _objc_release(uVar3);
    if ((int)uVar4 == 6) {
      func_0x00010c205840(param_1);
    }
    else {
      FUN_10709bf28(param_2);
      func_0x00010c205880(param_1);
      uVar2 = param_1;
      _objc_opt_respondsToSelector(param_1,PTR_s_setFullView__112645fd8);
      if ((uVar2 & 1) != 0) {
        func_0x00010c1a16e0(param_1);
      }
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10709b6fc; end: 10709b7f3;  */

bool FUN_10709b6fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2 != 0;
}



/* Entry: 10709b7f4; end: 10709ba63; -[SCArroyoChatLogger _logDirectSnapReplayView:recipientIds:contents:mediaViewInfo:isGroupConversation:cellPosition:replayCount:] */

void FUN_10709b7f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  ulong param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  FUN_10708f308();
  _objc_retainAutoreleasedReturnValue();
  if (param_5 != 0) {
    uVar5 = param_3;
    func_0x00010bf6e760(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126d45e8;
    _objc_opt_new(PTR_PTR_1126d45e8);
    FUN_10708f7ec(param_5);
    func_0x00010c1c5440(puVar3);
    uVar5 = param_3;
    func_0x00010c0cb200(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar3);
    _objc_release(uVar1);
    _objc_release(uVar5);
    lVar4 = param_5;
    func_0x00010c0fee00(param_5);
    _objc_retainAutoreleasedReturnValue();
    FUN_10709b550(puVar3,lVar4,param_6);
    _objc_release(lVar4);
    uVar5 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_10709a438();
    func_0x00010c161580(puVar3);
    _objc_release(uVar5);
    func_0x00010c247520(param_6);
    func_0x00010c206c40(puVar3);
    func_0x00010c17a580(puVar3);
    func_0x00010c1eada0((double)param_9,puVar3);
    FUN_1070985dc(puVar3,param_7,uVar2,param_4);
    uVar5 = param_3;
    func_0x00010c15de20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    func_0x00010c1b4360(puVar3);
    _objc_release(uVar1);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10709ba64; end: 10709bf27; -[SCArroyoChatLogger _logGeofilterDirectSnapViewWithMessage:mediaViewInfo:venueId:] */

void FUN_10709ba64(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_10708f308();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) goto LAB_10709bea0;
  lVar3 = lVar2;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bfddcc0();
  if ((int)lVar11 == 0) {
    uStack_80 = 0;
LAB_10709bc30:
    uStack_88 = 0;
    lVar12 = 0;
    lVar11 = 0;
  }
  else {
    lVar11 = lVar2;
    func_0x00010c2814e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf93ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar12;
    func_0x00010c08fa60();
    _objc_release(lVar12);
    _objc_release(lVar11);
    if (lVar4 == 0) {
      uStack_80 = 0;
    }
    else {
      lVar11 = lVar2;
      func_0x00010c2814e0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010bf93ae0();
      _objc_retainAutoreleasedReturnValue();
      uStack_80 = lVar12;
      func_0x00010bf15dc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar12);
      _objc_release(lVar11);
    }
    lVar11 = lVar2;
    func_0x00010c2814e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bfddce0();
    _objc_release(lVar11);
    if ((int)lVar12 == 0) goto LAB_10709bc30;
    lVar12 = lVar2;
    func_0x00010c2814e0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar12;
    func_0x00010c281680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    lVar4 = lVar11;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar4;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    uStack_88 = lVar11;
    func_0x00010c08bdc0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = lVar11;
  func_0x00010bfaddc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  if (lVar5 == 0) {
    lVar5 = lVar11;
    func_0x00010bfae4e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    if (lVar6 != 0) {
      _objc_release(lVar5);
      goto LAB_10709bc78;
    }
    lVar6 = lVar11;
    func_0x00010bfade60();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar10 == 0) goto LAB_10709bc80;
  }
  else {
LAB_10709bc78:
    _objc_release(lVar4);
LAB_10709bc80:
    puVar7 = PTR_PTR_1126d45f0;
    _objc_opt_new(PTR_PTR_1126d45f0);
    func_0x00010c19c6c0();
    FUN_10708f7ec(lVar2);
    func_0x00010c1c5440(puVar7);
    lVar4 = param_4;
    func_0x00010c0cc0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_10709a438();
    func_0x00010c161580(puVar7);
    _objc_release(lVar4);
    FUN_10709b6fc(lVar2);
    func_0x00010c225c80(puVar7);
    lVar4 = param_4;
    func_0x00010c0cb200(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    FUN_10709b550(puVar7,lVar3,param_5);
    if (uStack_80 != 0) {
      func_0x00010c1955e0(puVar7);
    }
    if (lVar12 != 0) {
      func_0x00010c21bd60(puVar7);
      FUN_107094674(puVar7,lVar11);
    }
    if (uStack_88 != 0) {
      func_0x00010c1b9760(puVar7);
    }
    uVar8 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar8);
    _objc_release(puVar7);
  }
  func_0x00010c29ee40(param_5);
  dVar13 = (double)(long)(param_1 * 10.0);
  dVar14 = dVar13 / 10.0;
  FUN_10709bf28(lVar3);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar14,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar13,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06a5a0(param_5);
  func_0x00010bfb07e0(uVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar8);
  _objc_release(uStack_88);
  _objc_release(lVar12);
  _objc_release(uStack_80);
  _objc_release(lVar11);
  _objc_release(lVar3);
LAB_10709bea0:
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10709bf28; end: 10709bfb7;  */

double FUN_10709bf28(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf85640();
  _objc_release(uVar1);
  dVar3 = -1.0;
  if ((int)uVar2 != 6) {
    uVar1 = param_1;
    func_0x00010c0fef80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf8b420();
    dVar3 = (double)(uVar2 & 0xffffffff);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  return dVar3;
}



/* Entry: 10709bfb8; end: 10709c133; -[SCArroyoChatLogger logDirectSnapScreenshotWithMessage:recipientIds:updateType:isGroupConversation:] */

void FUN_10709bfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_3;
  func_0x00010bf6e760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_78 = param_5;
  uStack_70 = param_6;
  func_0x00010be10480(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10709c134; end: 10709c17f;  */

void FUN_10709c134(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be52520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10709c180; end: 10709c36b; -[SCArroyoChatLogger _logDirectSnapScreenshotWithMessage:recipientIds:updateType:cellPosition:isGroupConversation:] */

void FUN_10709c180(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_10708f308();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d45f8;
    _objc_opt_new(PTR_PTR_1126d45f8);
    FUN_10708f988(lVar1);
    func_0x00010c1c5440(puVar3);
    lVar4 = param_3;
    func_0x00010c0cb200(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar3);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = lVar2;
    func_0x00010c0fee00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10709b550(puVar3,lVar4,0);
    _objc_release(lVar4);
    func_0x00010c226380(puVar3);
    func_0x00010c17a580(puVar3);
    lVar4 = param_3;
    func_0x00010bf6e760(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    FUN_1070985dc(puVar3,param_7,lVar6,param_4);
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10709c36c; end: 10709c43f; -[SCArroyoChatLogger _logSnapSendWithMessageSendResult:] */

void FUN_10709c36c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4dac0();
  _objc_release(lVar1);
  if (lVar2 == 3) {
    uVar3 = param_1;
    func_0x00010bebd200(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c23f880();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c240640();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      func_0x00010be53e80(param_1,param_2,uVar3,1);
      _objc_release(uVar3);
      goto LAB_10709c428;
    }
    _objc_release(uVar3);
  }
  func_0x00010c0a5180(param_1,param_2,param_3);
LAB_10709c428:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10709c440; end: 10709c5a7; -[SCArroyoChatLogger logDirectSnapSendWithMessageSendResult:] */

void FUN_10709c440(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea60(puVar1,param_2,uVar4,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1ec620(puVar1,param_2,0);
  puVar5 = puVar1;
  func_0x00010bf67000(puVar1,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x00010bf6eca0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf0a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010bf529e0();
    if ((puVar6 == (undefined *)0x0) || (uVar8 = param_1, func_0x00010beb6920(), (uVar8 & 1) != 0))
    {
      func_0x00010be52560(param_1,param_2,param_3,puVar5,PTR____NSArray0__struct_11034ab48);
    }
    else {
      func_0x00010be52540(param_1,param_2,param_3,puVar5,puVar7);
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10709c5a8; end: 10709c70b; -[SCArroyoChatLogger _logDirectSnapSendWithMessageSendResult:snapSendInfo:recipientUserIds:] */

void FUN_10709c5a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c244e80(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10709c70c; end: 10709c75f;  */

void FUN_10709c70c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be52560();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10709c760; end: 10709c8df; -[SCArroyoChatLogger _logDirectSnapSendWithMessageSendResult:snapSendInfo:snapchatters:] */

void FUN_10709c760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf43e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_107098d0c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(uVar2);
  func_0x00010be111e0(param_1);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10709c8e0; end: 10709c967;  */

void FUN_10709c8e0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf33fe0(param_2);
  _objc_release(param_2);
  func_0x00010be525a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10709c968; end: 10709cb27; -[SCArroyoChatLogger _logDirectSnapSendWithMessageSendResult:snapSendInfo:snapchatters:feedCellPosition:conversationId:] */

void FUN_10709c968(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010bf43ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    uStack_60 = param_6;
    func_0x00010bfa5f80(uVar3);
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  else {
    func_0x00010be52580(param_1);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10709cb28; end: 10709cb83;  */

void FUN_10709cb28(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be52580();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10709cb84; end: 10709ddcf; -[SCArroyoChatLogger _logDirectSnapSendWithMessageSendResult:snapSendInfo:snapchatters:feedCellPosition:conversation:] */

void FUN_10709cb84(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000100bc5a10();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c23f880();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010bf6eca0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bf50640();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = lVar5;
  func_0x00010bf529e0();
  if (lVar26 == 0) {
    lVar26 = 0;
  }
  else {
    lVar26 = lVar5;
    func_0x000100504554(lVar5,&PTR___NSConcreteGlobalBlock_11098b388);
  }
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf6eca0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  FUN_10708ffd0();
  ppuVar1 = &PTR_PTR_1126d4600;
  if ((int)lVar6 == 0) {
    ppuVar1 = &PTR_PTR_1126d4608;
  }
  puVar7 = *ppuVar1;
  _objc_opt_new();
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c294d60(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_107093910(puVar7,lVar2,lVar3,lVar26,0,lVar5);
  _objc_release(lVar5);
  lVar5 = lVar2;
  func_0x00010c254340();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c2553e0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf31200(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010c243340(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c123a00(uVar17);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(uVar17);
  _objc_release(uVar8);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar6 = lVar2;
  FUN_10709ddd0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010c096b60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar8;
    func_0x00010bfc81a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(uVar8);
    func_0x00010c1ce180(lVar6);
    func_0x00010c1bb300(puVar7);
    func_0x00010befa120(puVar10);
    _objc_release(uVar17);
  }
  lVar11 = lVar2;
  func_0x00010c091c60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar11;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar28 = 0;
    do {
      if (lRam0000000000000000 != lVar13) {
        _objc_enumerationMutation(lVar11);
      }
      uVar27 = *(ulong *)(lVar28 * 8);
      uVar25 = uVar27;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar2;
      func_0x00010c094540(lVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar25;
      func_0x00010c0720c0();
      _objc_release(lVar21);
      _objc_release(uVar25);
      if ((uVar12 & 1) == 0) {
        func_0x00010709005c();
        _objc_retainAutoreleasedReturnValue();
        if (uVar27 != 0) {
          func_0x00010befa120(puVar10);
        }
        _objc_release(uVar27);
      }
      lVar28 = lVar28 + 1;
    } while (lVar9 != lVar28);
    lVar9 = lVar11;
    func_0x00010bf52a60();
  }
  _objc_release(lVar11);
  lVar9 = lVar2;
  func_0x00010c1188c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 != 0) {
    puVar23 = PTR_PTR_1126c4718;
    _objc_opt_new(PTR_PTR_1126c4718);
    lVar9 = lVar2;
    func_0x00010c1188c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4ea0(puVar23);
    _objc_release(lVar9);
    func_0x00010befa120(puVar10);
    _objc_release(puVar23);
  }
  puVar23 = puVar10;
  func_0x00010bf529e0();
  if (puVar23 != (undefined *)0x0) {
    puVar23 = puVar10;
    func_0x00010bf51e00(puVar10);
    func_0x00010c1bb320(puVar7);
    _objc_release(puVar23);
  }
  func_0x00010c1a5b00(puVar7);
  lVar9 = param_4;
  func_0x00010c063ac0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fc0(puVar7);
  _objc_release(lVar9);
  lVar9 = lVar2;
  func_0x00010c091c60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar9;
  func_0x00010b06ffa4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6380(puVar7);
  _objc_release(lVar13);
  _objc_release(lVar9);
  lVar9 = lVar2;
  func_0x00010c091c60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar9;
  func_0x00010b06fbfc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6400(puVar7);
  _objc_release(lVar13);
  _objc_release(lVar9);
  lVar9 = lVar2;
  func_0x00010c091c60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar9;
  func_0x00010b06fe6c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f63c0(puVar7);
  _objc_release(lVar13);
  _objc_release(lVar9);
  lVar9 = lVar2;
  func_0x00010c091c60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar9;
  func_0x00010b06fd34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f64e0(puVar7);
  _objc_release(lVar13);
  _objc_release(lVar9);
  lVar9 = lVar2;
  func_0x00010c091c60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar9;
  func_0x00010b0700dc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f62c0(puVar7);
  _objc_release(lVar13);
  _objc_release(lVar9);
  lVar9 = lVar2;
  func_0x00010c091c60(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b070214();
  func_0x00010c1f63e0(puVar7);
  _objc_release(lVar9);
  lVar9 = param_3;
  func_0x00010bf50640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  _objc_retain(lVar9);
  lVar13 = lVar9;
  func_0x00010bf529e0();
  if (lVar13 == 0) {
LAB_10709d380:
    puVar23 = (undefined *)0x0;
  }
  else {
    lVar13 = lVar3;
    func_0x00010bf0a380();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar13;
    func_0x00010bf529e0();
    _objc_release(lVar13);
    if (lVar11 == 0) goto LAB_10709d380;
    lVar28 = lVar9;
    FUN_1070a2f5c();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar21 = lVar3;
    func_0x00010bf0a380();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar21;
    func_0x00010bf52a60();
    lVar11 = lRam0000000000000000;
    while (lVar13 != 0) {
      lVar29 = 0;
      do {
        if (lRam0000000000000000 != lVar11) {
          _objc_enumerationMutation(lVar21);
        }
        lVar14 = lVar28;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar14;
        FUN_1070a3020();
        func_0x00010baef5ec();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar24);
        _objc_release(lVar15);
        _objc_release(lVar14);
        lVar29 = lVar29 + 1;
      } while (lVar13 != lVar29);
      lVar13 = lVar21;
      func_0x00010bf52a60();
    }
    _objc_release(lVar21);
    puVar23 = puVar24;
    func_0x00010bf446e0(puVar24);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_release(lVar28);
  }
  _objc_release(lVar9);
  _objc_release(lVar3);
  func_0x00010c17b2c0(puVar7);
  _objc_release(puVar23);
  _objc_release(lVar9);
  lVar9 = param_3;
  func_0x00010bf50640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  _objc_retain(lVar9);
  lVar13 = lVar9;
  func_0x00010bf529e0();
  if (lVar13 != 0) {
    lVar13 = lVar3;
    func_0x00010bf0a380();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar13;
    func_0x00010bf529e0();
    _objc_release(lVar13);
    if (lVar11 != 0) {
      lVar28 = lVar9;
      FUN_1070a2f5c();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar21 = lVar3;
      func_0x00010bf0a380();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar21;
      func_0x00010bf52a60();
      lVar11 = lRam0000000000000000;
      while (lVar13 != 0) {
        lVar29 = 0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(lVar21);
          }
          lVar14 = lVar28;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar15 = lVar14;
          func_0x00010c0e8a20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar15 == 0) {
            uVar25 = 0xffffffffffffffff;
          }
          else {
            lVar15 = lVar14;
            func_0x00010c0e8a20();
            _objc_retainAutoreleasedReturnValue();
            lVar16 = lVar15;
            func_0x00010c2425e0();
            uVar25 = (ulong)(lVar16 == 1);
            _objc_release(lVar15);
          }
          func_0x00010bb10878();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar23);
          _objc_release(uVar25);
          _objc_release(lVar14);
          lVar29 = lVar29 + 1;
        } while (lVar13 != lVar29);
        lVar13 = lVar21;
        func_0x00010bf52a60();
      }
      _objc_release(lVar21);
      puVar24 = puVar23;
      func_0x00010bf446e0(puVar23);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      _objc_release(lVar28);
      goto LAB_10709d5a8;
    }
  }
  puVar24 = (undefined *)0x0;
LAB_10709d5a8:
  _objc_release(lVar9);
  _objc_release(lVar3);
  func_0x00010c2044e0(puVar7);
  _objc_release(puVar24);
  _objc_release(lVar9);
  lVar9 = param_3;
  func_0x00010bf43ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c1b0de0(puVar7);
  _objc_release(lVar9);
  lVar9 = param_5;
  func_0x00010bf529e0();
  if (lVar9 != 0) {
    lVar9 = param_5;
    func_0x00010bfb1920(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010795e2c8();
    func_0x00010c1a0ce0(puVar7);
    _objc_release(lVar9);
  }
  uVar17 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010b06f544();
  if ((int)lVar9 != 0) {
    lVar9 = lVar2;
    FUN_107093a1c(lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar9 != 0) {
      func_0x00010c0b2e60(uVar17);
    }
    lVar13 = lVar2;
    func_0x00010bfadd80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar23 = PTR_PTR_1126c02c8;
    if (lVar13 != 0) {
      puVar24 = PTR_PTR_1126c02b8;
      func_0x00010bdc2100(PTR_PTR_1126c02b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec560(puVar23);
      _objc_release(puVar24);
    }
    _objc_release(lVar9);
  }
  func_0x00010c07fe80(lVar2);
  func_0x00010c1b4b80(puVar7);
  func_0x00010bf9ca80(lVar2);
  func_0x00010c198d00(puVar7);
  func_0x00010c124200(lVar2);
  func_0x00010c1e9060(puVar7);
  func_0x00010bf4ca00(lVar2);
  func_0x00010c182160(puVar7);
  func_0x00010c19afe0(puVar7);
  lVar9 = lVar2;
  func_0x00010c2736c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar9;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar13;
  func_0x000108ee0cac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar9);
  lVar9 = lVar11;
  func_0x00010c0976a0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c2260c0(puVar7);
  _objc_release(lVar9);
  func_0x00010bfd8c80(lVar11);
  func_0x00010c226620(puVar7);
  lVar9 = lVar11;
  func_0x00010c0976a0(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bd0c0(puVar7);
  _objc_release(lVar9);
  lVar9 = lVar2;
  func_0x00010c15d5c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fc880(puVar7);
  _objc_release(lVar9);
  lVar9 = lVar2;
  func_0x00010c11fc40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7520(puVar7);
  _objc_release(lVar9);
  lVar9 = param_3;
  func_0x00010c0cb480(param_3);
  FUN_1070987dc(puVar7,0,0,lVar9);
  lVar9 = param_3;
  func_0x00010bf50640();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar9;
  func_0x00010709e0bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = lVar13;
  func_0x00010c08fa60();
  if (lVar9 != 0) {
    func_0x00010c1b00c0(puVar7);
    func_0x00010c17f780(puVar7);
  }
  func_0x00010c243140(param_4);
  func_0x00010c205540(puVar7);
  func_0x00010c131c40(lVar2);
  func_0x00010c1eb000(puVar7);
  func_0x00010bfeb440(lVar2);
  func_0x00010c1ab800(puVar7);
  lVar9 = param_4;
  func_0x00010c0c9b80();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar9;
  func_0x00010bf171e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar28 == 0) {
    lVar21 = lVar28;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1c40(puVar7);
    _objc_release(lVar21);
  }
  else {
    func_0x00010c1a1c40(puVar7);
  }
  _objc_release(lVar28);
  _objc_release(lVar9);
  lVar9 = param_4;
  func_0x00010c0c9b80(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar9;
  func_0x00010bf171e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1af780(puVar7);
  _objc_release(lVar28);
  _objc_release(lVar9);
  lVar9 = param_4;
  func_0x00010c0c9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 != 0) {
    lVar9 = param_4;
    func_0x00010c0c9b80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cb80();
    _objc_release(lVar9);
    func_0x00010c1c6440(puVar7);
    func_0x00010be53e80(param_1);
  }
  lVar9 = lVar2;
  func_0x00010c102520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 != 0) {
    puVar23 = PTR_PTR_1126c4740;
    _objc_opt_new(PTR_PTR_1126c4740);
    lVar9 = lVar2;
    func_0x00010c102520(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cfda0();
    func_0x00010c1c8cc0(puVar23);
    _objc_release(lVar9);
    lVar9 = lVar2;
    func_0x00010c102520();
    _objc_retainAutoreleasedReturnValue();
    lVar28 = lVar9;
    func_0x00010c29f900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar9);
    if (lVar28 != 0) {
      lVar9 = lVar2;
      func_0x00010c102520(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar28 = lVar9;
      func_0x00010c29f900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c222600(puVar23);
      _objc_release(lVar28);
      _objc_release(lVar9);
    }
    func_0x00010c1de4e0(puVar7);
    _objc_release(puVar23);
  }
  func_0x00010c26b120(lVar2);
  func_0x00010c212cc0(puVar7);
  lVar9 = param_7;
  func_0x00010bf50900();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar9;
  func_0x00010bf2c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  lVar9 = param_7;
  func_0x00010c06e040();
  if ((int)lVar9 != 0) {
    lVar9 = lVar28;
    func_0x00010bef4a80();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar9;
    func_0x00010c08fa60();
    _objc_release(lVar9);
    if (lVar21 != 0) {
      uVar18 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar18);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_7;
      func_0x00010bf50900(param_7);
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar9;
      func_0x00010bf2c1e0();
      _objc_retainAutoreleasedReturnValue();
      lVar29 = lVar21;
      func_0x00010bef4a80();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar18;
      func_0x00010c0f3e20(uVar18);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar29);
      _objc_release(lVar21);
      _objc_release(lVar9);
      _objc_release(uVar18);
      uVar18 = uVar8;
      func_0x00010c15ed20(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = *(undefined8 *)(param_1 + 0xa0);
      func_0x00010c269d40(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar8;
      FUN_1070916dc(uVar8,uVar18,uVar19);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c208260(puVar7);
      _objc_release(uVar20);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(uVar8);
    }
  }
  lVar21 = *(long *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar21;
  func_0x00010bef1020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar21);
  if (lVar9 != 0) {
    func_0x00010c067fc0(lVar9);
    func_0x00010c206c40(puVar7);
  }
  func_0x00010c0b2e60(uVar17);
  lVar21 = param_4;
  func_0x00010c294d60();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_4;
  func_0x00010c063ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be524c0(param_1);
  _objc_release(lVar29);
  _objc_release(lVar21);
  _objc_release(lVar9);
  _objc_release(lVar28);
  _objc_release(lVar13);
  _objc_release(lVar11);
  _objc_release(uVar17);
  _objc_release(lVar6);
  _objc_release(puVar10);
  _objc_release(lVar5);
  _objc_release(puVar7);
  _objc_release(lVar26);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar2 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar10 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar10 = PTR_PTR_1126c4718;
    _objc_opt_new(PTR_PTR_1126c4718);
    lVar2 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar10);
    _objc_release(lVar2);
    func_0x00010c095a80(param_3);
    func_0x00010c1bc4a0(puVar10);
    func_0x00010c096ca0(param_3);
    func_0x00010c1bccc0(puVar10);
    lVar2 = param_3;
    func_0x00010c095800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc400(puVar10);
    _objc_release(lVar2);
    func_0x00010c094800(param_3);
    func_0x00010c1bbec0(puVar10);
    lVar2 = param_3;
    func_0x00010c092b80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = param_3;
      func_0x00010bf09160(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17a100(puVar10);
      _objc_release(lVar3);
    }
    else {
      func_0x00010c17a100(puVar10);
    }
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c096520(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4da0(puVar10);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c096580();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = param_3;
      func_0x00010c0965a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (lVar3 != 0) {
        puVar7 = PTR_PTR_1126d45e0;
        _objc_opt_new(PTR_PTR_1126d45e0);
        lVar2 = param_3;
        func_0x00010c096580(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        func_0x00010c1b00e0(puVar7);
        _objc_release(lVar2);
        lVar2 = param_3;
        func_0x00010c0965a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b4ca0();
        func_0x00010c21aaa0(puVar7);
        _objc_release(lVar2);
        func_0x00010c165ac0(puVar10);
        _objc_release(puVar7);
      }
    }
    lVar2 = param_3;
    func_0x00010c1188c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4ea0(puVar10);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0922a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189040(puVar10);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c11fae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74c0(puVar10);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c11fa40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74e0(puVar10);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0972c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcec0(puVar10);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10709ddd0; end: 10709e147;  */

void FUN_10709ddd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c4718;
    _objc_opt_new(PTR_PTR_1126c4718);
    lVar1 = param_1;
    func_0x00010c094540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c095a80(param_1);
    func_0x00010c1bc4a0(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c096ca0(param_1);
    func_0x00010c1bccc0(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c095800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc400(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c094800(param_1);
    func_0x00010c1bbec0(puVar2,param_2,lVar1);
    lVar1 = param_1;
    func_0x00010c092b80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar3 = param_1;
      func_0x00010bf09160(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17a100(puVar2,param_2,lVar3);
      _objc_release(lVar3);
    }
    else {
      func_0x00010c17a100(puVar2,param_2,lVar1);
    }
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c096520(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4da0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c096580();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar3 = param_1;
      func_0x00010c0965a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126d45e0;
        _objc_opt_new(PTR_PTR_1126d45e0);
        lVar1 = param_1;
        func_0x00010c096580(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010bf1f3c0();
        func_0x00010c1b00e0(puVar4,param_2,lVar3);
        _objc_release(lVar1);
        lVar1 = param_1;
        func_0x00010c0965a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar1;
        func_0x00010c0b4ca0();
        func_0x00010c21aaa0(puVar4,param_2,lVar3);
        _objc_release(lVar1);
        func_0x00010c165ac0(puVar2,param_2,puVar4);
        _objc_release(puVar4);
      }
    }
    lVar1 = param_1;
    func_0x00010c1188c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4ea0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0922a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189040(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c11fae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74c0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c11fa40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e74e0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c0972c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcec0(puVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10709e148; end: 10709e633; -[SCArroyoChatLogger _logDirectSegmentSendIfNeededWithCommonLoggingParams:destinationInfo:allSnapIds:clientMessageId:actionTs:] */

void FUN_10709e148(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = param_3;
  func_0x00010c158420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puVar1 = param_3;
    func_0x00010c158420();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = &uStack_130;
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined8 *)0x0) {
      lVar13 = *plStack_120;
      do {
        puVar14 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(puVar1);
          }
          uVar12 = *(undefined8 *)(lStack_128 + (long)puVar14 * 8);
          puVar4 = PTR_PTR_1126d4610;
          _objc_opt_new(PTR_PTR_1126d4610);
          uVar5 = uVar12;
          func_0x00010bf429e0();
          _objc_retainAutoreleasedReturnValue();
          FUN_107093910(puVar4,uVar5,param_4,param_5,0,param_6);
          uVar6 = uVar5;
          func_0x00010bef0520(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c176a60(puVar4);
          _objc_release(uVar6);
          uVar6 = uVar5;
          FUN_10709ddd0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bb300(puVar4);
          _objc_release(uVar6);
          func_0x00010c1a5b00(puVar4);
          func_0x00010c161fc0(puVar4);
          uVar6 = uVar5;
          func_0x00010c091c60(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010b06ffa4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f6380(puVar4);
          _objc_release(uVar7);
          _objc_release(uVar6);
          uVar6 = uVar5;
          func_0x00010c091c60(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010b06fbfc();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f6400(puVar4);
          _objc_release(uVar7);
          _objc_release(uVar6);
          uVar6 = uVar5;
          func_0x00010c091c60(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010b06fe6c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f63c0(puVar4);
          _objc_release(uVar7);
          _objc_release(uVar6);
          uVar6 = uVar5;
          func_0x00010c091c60(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010b06fd34();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f64e0(puVar4);
          _objc_release(uVar7);
          _objc_release(uVar6);
          uVar6 = uVar5;
          func_0x00010c091c60();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010b0700dc();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1f62c0(puVar4);
          _objc_release(uVar7);
          _objc_release(uVar6);
          uVar6 = uVar5;
          func_0x00010c091c60(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010b070214();
          func_0x00010c1f63e0(puVar4);
          _objc_release(uVar6);
          func_0x00010c158380(uVar12);
          func_0x00010c1faa60(puVar4);
          func_0x00010c27c8a0(uVar12);
          func_0x00010c21a5a0(puVar4);
          func_0x00010c27c980(uVar12);
          func_0x00010c21a600(puVar4);
          uVar6 = uVar12;
          func_0x00010bf429e0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf89ea0();
          func_0x00010c191960(puVar4);
          _objc_release(uVar6);
          uVar6 = uVar12;
          func_0x00010bf429e0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf5c920();
          func_0x00010c226060(puVar4);
          _objc_release(uVar6);
          uVar6 = uVar12;
          func_0x00010bf429e0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf30860();
          func_0x00010c178bc0(puVar4);
          _objc_release(uVar6);
          func_0x00010bf429e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c253c00();
          func_0x00010c20abc0(puVar4);
          _objc_release(uVar12);
          func_0x00010c124200(uVar5);
          func_0x00010c1e9060(puVar4);
          func_0x00010c0b2e60(uVar3);
          _objc_release(uVar5);
          _objc_release(puVar4);
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar2 != puVar14);
        puVar14 = &uStack_130;
        puVar2 = puVar1;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined8 *)0x0);
    }
    _objc_release(puVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar14);
  puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  puVar1 = puVar14;
  func_0x00010bf4bc60(puVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea60();
  _objc_release(puVar8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c1ec620(puVar4);
  puVar9 = puVar4;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar14;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c15c1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar9 != (undefined *)0x0 || puVar8 != (undefined8 *)0x0) {
    puVar10 = puVar9;
    func_0x00010bf6eca0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf0a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = puVar11;
    func_0x00010bf529e0();
    if (puVar10 == (undefined *)0x0) {
      func_0x00010be517a0(param_3);
    }
    else {
      func_0x00010be51740(param_3);
    }
    _objc_release(puVar11);
  }
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar14);
  return;
}



/* Entry: 10709e634; end: 10709e7ef; -[SCArroyoChatLogger logChatChatSendWithMessageSendResult:] */

void FUN_10709e634(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010bf4bc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea60(puVar1,param_2,lVar4,0);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c1ec620(puVar1,param_2,0);
  puVar5 = puVar1;
  func_0x00010bf67000(puVar1,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c15c1c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (puVar5 != (undefined *)0x0 || lVar4 != 0) {
    puVar6 = puVar5;
    func_0x00010bf6eca0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf0a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010bf529e0();
    if (puVar6 == (undefined *)0x0) {
      func_0x00010be517a0(param_1,param_2,param_3,puVar5,PTR____NSArray0__struct_11034ab48,lVar4);
    }
    else {
      func_0x00010be51740(param_1,param_2,param_3,puVar5,puVar7,lVar4);
    }
    _objc_release(puVar7);
  }
  _objc_release(lVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10709e7f0; end: 10709e983; -[SCArroyoChatLogger _logChatChatSendWithMessageSendResult:analyticsDataModel:recipientUserIds:sendMessageAnalytics:] */

void FUN_10709e7f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c244e80(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10709e984; end: 10709e9db;  */

void FUN_10709e984(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be517a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10709e9dc; end: 10709eccb; -[SCArroyoChatLogger _logChatChatSendWithMessageSendResult:analyticsDataModel:snapchatters:sendMessageAnalytics:] */

void FUN_10709e9dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar5 = param_3;
  func_0x00010bf43e60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  FUN_107098d0c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar2 = param_4;
  func_0x00010bf374a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c11ecc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b4ca0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  if (lVar4 == 0) {
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = auStack_c0;
    _objc_copyWeak(puVar6,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(uVar1);
    _objc_retain(param_6);
    func_0x00010bfa5f80(uVar5);
    _objc_release(uVar5);
    _objc_release(param_6);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    uVar5 = param_3;
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10709eccc;
    puStack_a0 = &UNK_11098b208;
    puVar6 = auStack_70;
    _objc_copyWeak(puVar6,auStack_68);
    _objc_retain(param_3);
    uStack_98 = param_3;
    _objc_retain(param_4);
    lStack_90 = param_4;
    _objc_retain(param_5);
    uStack_88 = param_5;
    _objc_retain(uVar1);
    uStack_80 = uVar1;
    _objc_retain(param_6);
    uStack_78 = param_6;
    func_0x00010bfa8960(uVar5);
    _objc_release(uVar5);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(lStack_90);
    uVar5 = uStack_98;
  }
  _objc_release(uVar5);
  _objc_destroyWeak(puVar6);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10709eccc; end: 10709edb7;  */

void FUN_10709eccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be51780();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10709edb8; end: 10709ef97; -[SCArroyoChatLogger _logChatChatSendWithMessageSendResult:analyticsDataModel:snapchatters:conversation:conversationId:quotedMessage:sendMessageAnalytics:] */

void FUN_10709edb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010be111e0(param_1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10709ef98; end: 10709f0b7;  */

void FUN_10709ef98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf33fe0(param_2);
  uVar2 = param_2;
  func_0x00010c22d760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bfd8d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be51760(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x58;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf33fe0(param_2);
  _objc_release(param_2);
  func_0x00010be51700(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10709f0b8; end: 1070a0523; -[SCArroyoChatLogger _logChatChatSendWithMessageSendResult:analyticsDataModel:snapchatters:conversation:conversationId:cellPosition:friendsFeedShortcutType:withMapIcon:quotedMessage:sendMessageAnalytics:] */

void FUN_10709f0b8(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9,long param_10,
                  long param_11,long param_12)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puStack_1a8;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar20 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar20;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000100bc5a10();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar20);
  lVar5 = param_4;
  func_0x00010bf6eca0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  FUN_10708ffd0();
  _objc_release(lVar5);
  ppuVar1 = &PTR_PTR_1126d4618;
  if ((int)lVar6 == 0) {
    ppuVar1 = &PTR_PTR_1126c06a0;
  }
  puVar7 = *ppuVar1;
  _objc_opt_new(puVar7);
  puVar20 = param_3;
  FUN_10708f778();
  puVar3 = param_3;
  func_0x00010bf50640();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c063ac0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fc0(puVar7);
  _objc_release(lVar5);
  puVar8 = puVar3;
  FUN_1070a0524(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17b600(puVar7);
  _objc_release(puVar8);
  lVar5 = param_4;
  func_0x00010c294d60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cda0(puVar7);
  _objc_release(lVar5);
  func_0x00010bf37780(param_4);
  func_0x00010c17be20(puVar7);
  FUN_10708f360(puVar4);
  func_0x00010c1c7160(puVar7);
  FUN_10708f988(puVar4);
  func_0x00010c1c5440(puVar7);
  lVar5 = param_4;
  func_0x00010c15d5c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcc00(puVar7);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c11fc40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e7520(puVar7);
  _objc_release(lVar5);
  uVar9 = *(ulong *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf1f3c0();
  if ((uVar10 & 1) == 0) {
    lVar5 = param_4;
    func_0x00010c15d860();
    _objc_release(uVar9);
    if (lVar5 != 0) {
      func_0x00010c15d860(param_4);
      func_0x00010c1fca00(puVar7);
    }
  }
  else {
    _objc_release(uVar9);
  }
  FUN_107098498(puVar4,puVar7);
  func_0x00010bf529e0(param_5);
  func_0x00010c184440(puVar7);
  puVar8 = puVar4;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar8;
  func_0x00010c22ab40();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar22;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  _objc_release(puVar11);
  _objc_release(puVar22);
  _objc_release(puVar8);
  if (puVar12 != (undefined *)0x0) {
    puVar8 = puVar4;
    func_0x00010c22a700(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar8;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar22;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1feca0(puVar7);
    _objc_release(puVar11);
    _objc_release(puVar22);
    _objc_release(puVar8);
  }
  lVar5 = param_4;
  func_0x00010c073e80();
  if ((int)lVar5 != 0) {
    func_0x00010c169400(puVar7);
  }
  if (puVar20 != (undefined *)0x0) {
    func_0x00010c188a20(puVar7);
  }
  lVar5 = param_12;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar6 == 0) {
    lVar5 = param_4;
    func_0x00010c247520();
    if (lVar5 == -1) {
      func_0x0001070a0598(puVar4);
    }
    else {
      func_0x00010c247520(param_4);
    }
    func_0x00010c206c40(puVar7);
  }
  else {
    lVar5 = param_12;
    func_0x00010c247520(param_12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bc92e28();
    func_0x00010c206c40(puVar7);
    _objc_release(lVar5);
  }
  lVar5 = param_11;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0bc380();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    _objc_release(lVar5);
  }
  else {
    lVar21 = param_11;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar21;
    func_0x00010c0bc380();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c27dd80();
    _objc_release(lVar13);
    _objc_release(lVar21);
    _objc_release(lVar6);
    _objc_release(lVar5);
    if (lVar14 == 0) {
      func_0x00010c206c40(puVar7);
    }
  }
  func_0x00010c1fc3e0(puVar7);
  lVar5 = param_4;
  func_0x00010bfbea60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_4;
    func_0x00010bfbea60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfbeac0();
    func_0x00010ba403e4();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a25a0(puVar7);
    _objc_release(puVar20);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  puVar20 = puVar4;
  func_0x00010bf4ce20();
  if ((int)puVar20 == 3) {
    puVar20 = puVar4;
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar20;
    func_0x00010c245400();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar8;
    func_0x000107d61ef0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar22;
    func_0x000107d621f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    _objc_release(puVar8);
    _objc_release(puVar20);
    puVar20 = puVar11;
    func_0x00010c08fa60();
    if (puVar20 != (undefined *)0x0) {
      uVar15 = 2;
      func_0x00010ba403e4();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a25a0(puVar7);
      _objc_release(puVar20);
      _objc_release(uVar15);
      func_0x00010c166880(puVar7);
    }
    _objc_release(puVar11);
  }
  puVar20 = puVar4;
  func_0x00010bf4ce20();
  if ((int)puVar20 == 0xe) {
    puVar20 = puVar4;
    func_0x00010bf5ae40();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar20;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar8;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar22;
    func_0x00010bf61ca0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c0ed1a0();
    _objc_release(puVar11);
    _objc_release(puVar22);
    _objc_release(puVar8);
    _objc_release(puVar20);
    if ((int)puVar12 == 5) {
      func_0x00010c188a20(puVar7);
      uVar15 = 3;
      func_0x00010ba403e4();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a25a0(puVar7);
      _objc_release(puVar20);
      _objc_release(uVar15);
    }
  }
  lVar5 = param_5;
  func_0x00010bf529e0();
  if (lVar5 != 0) {
    lVar5 = param_5;
    func_0x00010bfb1920(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010795e2c8();
    func_0x00010c1a0ce0(puVar7);
    func_0x00010bf4a3a0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c1aba60(puVar7);
    _objc_release(lVar5);
  }
  lVar5 = param_4;
  func_0x00010bf89e00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar16;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar15;
  func_0x00010c080120();
  FUN_10709034c(puVar7,lVar5,uVar17);
  _objc_release(uVar15);
  _objc_release(uVar16);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf5aca0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107090b20(puVar7,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf6eca0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107090a58(puVar7,lVar5,param_12);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf4eb40(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_107090c0c(puVar7,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf63260(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107090c64(puVar7,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf4d560(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_107090ca8(puVar7,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c25a540(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107090fa4(puVar7,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c0b8f40(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_107091094(puVar7,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c0fd4e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070910ec(puVar7,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010bf2a760(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_107091144(puVar7,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c24a480(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070911f8(puVar7,lVar5);
  _objc_release(lVar5);
  lVar5 = param_4;
  func_0x00010c094820(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_107091294(puVar7,lVar5);
  _objc_release(lVar5);
  FUN_107091480(puVar7,param_7,param_12);
  puVar20 = param_3;
  func_0x00010bf50640();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar20;
  func_0x00010bf529e0();
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puVar20;
    func_0x00010bfb1920(puVar20);
    _objc_retainAutoreleasedReturnValue();
    FUN_1070a3020();
    _objc_release(puVar8);
  }
  func_0x00010c17b2a0(puVar7);
  _objc_release(puVar20);
  func_0x00010c17a580(puVar7);
  if (param_9 != 0) {
    func_0x00010c19fd00(puVar7);
  }
  puVar20 = puVar4;
  func_0x00010bf4ce20();
  iVar2 = (int)puVar20;
  puVar20 = puVar4;
  if (iVar2 < 6) {
    if (iVar2 == 2) {
      func_0x00010c26b700(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar7);
      puVar8 = puVar20;
      func_0x00010c26b700(puVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x00010c17ac60(puVar7);
      _objc_release(puVar7);
      goto LAB_10709fc58;
    }
    if (iVar2 != 3) goto LAB_10709fc8c;
    func_0x00010bf9e280(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001070a06fc(puVar7,puVar20);
  }
  else if (iVar2 == 6) {
    func_0x00010c0dba60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001070a065c(puVar7,puVar20);
  }
  else {
    if (iVar2 != 7) goto LAB_10709fc8c;
    puVar8 = puVar4;
    func_0x00010c242c40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar8;
    func_0x00010c131be0();
    _objc_release(puVar8);
    iVar2 = (int)puVar22;
    if (iVar2 == 0xf) {
      func_0x00010c242c40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar20;
      func_0x00010c131e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001070a065c(puVar7,puVar8);
    }
    else {
      if (iVar2 != 0xc) {
        if (iVar2 != 0xb) goto LAB_10709fc8c;
        _objc_retain(puVar7);
        _objc_retain(puVar4);
        func_0x00010c242c40();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar20;
        func_0x00010c132180();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar8;
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        if (puVar22 == (undefined *)0x0) {
          puVar11 = puVar4;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          puStack_1a8 = puVar11;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
        }
        else {
          _objc_retain(puVar22);
          puStack_1a8 = puVar22;
        }
        _objc_release(puVar22);
        _objc_release(puVar8);
        _objc_release(puVar20);
        puVar8 = puVar4;
        func_0x000107d67c94();
        puVar20 = puVar4;
        func_0x000107d67bb4();
        _objc_retainAutoreleasedReturnValue();
        puVar22 = puVar20;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar22;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar22);
        _objc_release(puVar20);
        _objc_retain(puVar11);
        puVar20 = puVar11;
        func_0x00010bf52a60();
        lVar5 = lRam0000000000000000;
        while (puVar20 != (undefined *)0x0) {
          puVar22 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar5) {
              _objc_enumerationMutation(puVar11);
            }
            lVar21 = *(long *)((long)puVar22 * 8);
            lVar6 = lVar21;
            func_0x00010c08c3a0();
            if ((int)lVar6 == 4) {
              func_0x00010bf5cc00();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar21;
              func_0x00010c0cc0c0();
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar6;
              func_0x00010bfedf20();
              _objc_retainAutoreleasedReturnValue();
              lVar14 = lVar13;
              func_0x00010c11dd60();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(lVar13);
              _objc_release(lVar6);
              _objc_release(lVar21);
              if (lVar14 != 0) {
                _objc_release(puVar11);
                _objc_release(puVar11);
                func_0x00010c08fa60(puStack_1a8);
                func_0x00010c17ac60(puVar7);
                goto LAB_1070a0500;
              }
            }
            puVar22 = puVar22 + 1;
          } while (puVar20 != puVar22);
          puVar20 = puVar11;
          func_0x00010bf52a60();
        }
        _objc_release(puVar11);
        _objc_release(puVar11);
        func_0x00010c08fa60(puStack_1a8);
        func_0x00010c17ac60(puVar7);
        if ((int)puVar8 != 0) {
LAB_1070a0500:
          func_0x00010c1c7180(puVar7);
        }
        _objc_release(puStack_1a8);
        _objc_release(puVar4);
        puVar20 = puVar7;
        goto LAB_10709fc84;
      }
      func_0x00010c242c40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar20;
      func_0x00010c131ce0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001070a06fc(puVar7,puVar8);
    }
LAB_10709fc58:
    _objc_release(puVar8);
  }
LAB_10709fc84:
  _objc_release(puVar20);
LAB_10709fc8c:
  puVar20 = PTR_PTR_1126d4620;
  _objc_opt_new(PTR_PTR_1126d4620);
  FUN_1070986e4();
  func_0x000107098760(puVar20,puVar4);
  _objc_retain(puVar20);
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010bf36ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_4;
    func_0x00010bf36ea0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf85fa0();
    func_0x00010c18fce0(puVar20);
    func_0x00010bf85fc0(lVar5);
    func_0x00010c18fd00(puVar20);
    func_0x00010c294700(lVar5);
    func_0x00010c21f820(puVar20);
    func_0x00010c154a00(lVar5);
    func_0x00010c1f8d00(puVar20);
    func_0x00010c1548e0(lVar5);
    func_0x00010c1f8ce0(puVar20);
    _objc_release(lVar5);
  }
  _objc_release(param_4);
  _objc_release(puVar20);
  func_0x00010c17b8a0(puVar7);
  FUN_107098880(puVar4);
  func_0x00010c17ae60(puVar7);
  FUN_107098a4c(puVar7,puVar4);
  lVar21 = *(long *)(param_1 + 0x40);
  _objc_retain(puVar7);
  _objc_retain(lVar21);
  lVar5 = param_6;
  func_0x00010bef4a80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  if (lVar6 != 0) {
    lVar6 = lVar21;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar6;
    func_0x00010c0f3e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if (lVar13 != 0) {
      lVar6 = lVar13;
      func_0x00010c15ed20(lVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2083e0(puVar7);
      _objc_release(lVar6);
      lVar6 = lVar13;
      func_0x00010bef2c20(lVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c208220(puVar7);
      _objc_release(lVar6);
    }
    _objc_release(lVar13);
  }
  _objc_release(lVar5);
  _objc_release(lVar21);
  _objc_release(puVar7);
  puVar8 = PTR_PTR_1126d45a8;
  _objc_opt_new(PTR_PTR_1126d45a8);
  _objc_retain();
  _objc_retain(param_4);
  lVar5 = param_4;
  func_0x00010bf374a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_4;
    func_0x00010bf374a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c11ecc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c17bc60(puVar8);
    _objc_release(lVar6);
    func_0x00010c064f00(lVar5);
    func_0x00010c17bbe0(puVar8);
    lVar6 = lVar5;
    func_0x00010c11eb80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17bc20(puVar8);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(param_4);
  _objc_release(puVar8);
  func_0x00010c17bc00(puVar7);
  func_0x00010c1a5b00(puVar7);
  puVar22 = param_3;
  func_0x00010c0cb480(param_3);
  FUN_1070987dc(puVar7,0,0,puVar22);
  puVar22 = param_3;
  func_0x00010bf50640();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar22;
  func_0x00010709e0bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  puVar22 = puVar11;
  func_0x00010c08fa60();
  if (puVar22 != (undefined *)0x0) {
    func_0x00010c1b00c0(puVar7);
    func_0x00010c17f780(puVar7);
  }
  lVar5 = param_4;
  func_0x00010c0c8ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c242160();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  if (lVar21 != 0) {
    func_0x00010bfbda00(lVar21);
    func_0x00010c1a1d20(puVar7);
  }
  puVar22 = PTR_PTR_1126b2e50;
  func_0x00010c247520(param_4);
  func_0x00010c0c97c0(puVar22);
  func_0x00010c1c6440(puVar7);
  if (param_10 != 0) {
    func_0x00010bf1f3c0(param_10);
    func_0x00010c2266c0(puVar7);
  }
  lVar5 = param_6;
  func_0x00010bf50900(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf2c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = param_6;
  func_0x00010c06e040();
  if ((int)lVar5 != 0) {
    uVar17 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar17);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    func_0x00010bef4a80(lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar17;
    func_0x00010c0f3e20(uVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(uVar17);
    uVar17 = uVar15;
    func_0x00010c15ed20(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar15;
    FUN_1070916dc(uVar15,uVar17,uVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208260(puVar7);
    _objc_release(uVar16);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar15);
  }
  lVar5 = param_4;
  func_0x00010bfdb620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_4;
    func_0x00010bfdb620(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1a6980(puVar7);
    _objc_release(lVar5);
  }
  uVar15 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar15);
  _objc_release(lVar6);
  _objc_release(lVar21);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar20);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar20 = param_3;
  func_0x00010bf529e0();
  if (puVar20 == (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
  }
  else {
    puVar3 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar3;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 1070a0524; end: 1070a07bf;  */

void FUN_1070a0524(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bfb1920(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf026e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1070a07c0; end: 1070a094f; -[SCArroyoChatLogger logChatChatSave:recipientIds:isGroupConversation:messageRetentionInMinutes:source:isSender:] */

void FUN_1070a07c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_3;
  func_0x00010bf6e760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_80 = param_6;
  uStack_78 = param_7;
  uStack_70 = param_5;
  uStack_6f = param_8;
  func_0x00010be10480(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1070a0950; end: 1070a09ab;  */

void FUN_1070a0950(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be516e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070a09ac; end: 1070a0c6b; -[SCArroyoChatLogger _logChatChatSaveIfNecessary:analyticsDataModel:cellPosition:] */

void FUN_1070a09ac(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100bc5a10();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x000100be58bc();
  if ((0x23 < uVar2) && (7 < uVar2 - 0x25)) {
    uVar2 = param_4;
    func_0x00010bf6eca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c247520();
    if (uVar2 == 0xffffffffffffffff) {
      uVar2 = uVar4;
      func_0x0001070a0598();
    }
    uVar5 = param_3;
    func_0x00010bf50640();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x0001070a0524();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bf43e60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    FUN_107098d0c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_retain(uVar5);
    uVar7 = uVar5;
    func_0x00010bf529e0();
    if (uVar7 == 0) {
      bVar1 = false;
    }
    else {
      uVar7 = uVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c27dd80();
      bVar1 = uVar9 == 1;
      _objc_release(uVar7);
    }
    _objc_release(uVar5);
    _objc_retain(uVar5);
    uVar7 = uVar5;
    func_0x00010bf529e0();
    lVar12 = 0;
    if ((bVar1 == false) && (uVar7 != 0)) {
      uVar7 = uVar5;
      func_0x00010bfb1920(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar7;
      func_0x00010c0e8a20();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar9;
      func_0x00010c13e040();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c1218e0();
      lVar12 = (long)uVar11 / 0x3c;
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar7);
    }
    _objc_release(uVar5);
    func_0x00010be516c0(param_1,param_2,uVar4,uVar3,uVar8,uVar6,bVar1,lVar12,param_5,uVar2,1);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a0c6c; end: 1070a0e03; -[SCArroyoChatLogger _logChatChatSave:recipientIds:isGroupConversation:messageRetentionInMinutes:cellPosition:source:isSender:] */

void FUN_1070a0c6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_3;
      func_0x00010bf6e760();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = param_3;
      func_0x00010c0cb200();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf026e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_retain(param_3);
      func_0x00010c27dd80(param_3);
      func_0x00010c083520();
      _objc_release(param_3);
      func_0x00010c0deb00();
      func_0x00010c0dece0();
      func_0x00010be516c0(param_1,param_2,lVar1,param_4,lVar4,lVar3,param_5,param_6,param_7,param_8,
                          param_9);
      _objc_release(lVar3);
      _objc_release(lVar4);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a0e04; end: 1070a0fdf; -[SCArroyoChatLogger _logChatChatSave:recipientIds:conversationId:chatId:isGroupConversation:messageRetentionInMinutes:cellPosition:source:isSender:bitmojiReactionCount:emojiReactionCount:snapEraseMode:] */

void FUN_1070a0e04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000008;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_10708f360(param_3);
  puVar2 = PTR_PTR_1126d4628;
  _objc_alloc_init(PTR_PTR_1126d4628);
  FUN_10708f988(param_3);
  func_0x00010c1c5440(puVar2);
  func_0x00010c1c7160(puVar2);
  func_0x00010c206c40(puVar2);
  func_0x00010c17a580(puVar2);
  func_0x00010c1b4340(puVar2);
  func_0x00010c17b600(puVar2);
  _objc_release(param_6);
  func_0x00010c1e7bc0(puVar2);
  func_0x00010c1e7c00(puVar2);
  func_0x00010c2044c0(puVar2);
  FUN_1070985dc(puVar2,param_7,param_5,param_4);
  _objc_release(param_5);
  _objc_release(param_4);
  if ((param_7 & 1) == 0) {
    func_0x00010c17b2a0(puVar2);
  }
  FUN_107099368(puVar2,param_3);
  func_0x00010709957c(puVar2,param_3);
  FUN_107098a4c(puVar2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  FUN_1070a59d0(*(undefined8 *)(param_1 + 0x20),uVar1,in_stack_00000008);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a0fe0; end: 1070a1163; -[SCArroyoChatLogger logChatChatUnsave:recipientIds:isGroupConversation:source:isSender:] */

void FUN_1070a0fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_3;
  func_0x00010bf6e760(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_78 = param_6;
  uStack_70 = param_5;
  uStack_6f = param_7;
  func_0x00010be10480(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1070a1164; end: 1070a11b3;  */

void FUN_1070a1164(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be517c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1070a11b4; end: 1070a13eb; -[SCArroyoChatLogger _logChatChatUnsave:recipientIds:isGroupConversation:cellPosition:source:isSender:] */

void FUN_1070a11b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      FUN_10708f360();
      lVar3 = param_3;
      func_0x00010bf6e760();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c272380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010c0cb200(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf026e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      puVar6 = PTR_PTR_1126d4630;
      _objc_alloc_init(PTR_PTR_1126d4630);
      FUN_10708f988(lVar1);
      func_0x00010c1c5440(puVar6);
      func_0x00010c1c7160(puVar6);
      func_0x00010c206c40(puVar6);
      func_0x00010c17a580(puVar6);
      func_0x00010c1b4340(puVar6);
      func_0x00010c17b600(puVar6);
      _objc_retain(param_3);
      func_0x00010c27dd80(param_3);
      func_0x00010c083520(param_3);
      _objc_release(param_3);
      func_0x00010c2044c0(puVar6);
      FUN_1070985dc(puVar6,param_5,lVar5,param_4);
      FUN_107099368(puVar6,lVar1);
      func_0x00010709957c(puVar6,lVar1);
      FUN_107098a4c(puVar6,lVar1);
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar7);
      FUN_1070a5c20(*(undefined8 *)(param_1 + 0x20),lVar2,param_7);
      _objc_release(puVar6);
      _objc_release(lVar4);
      _objc_release(lVar5);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1070a13ec; end: 1070a1693; -[SCArroyoChatLogger logChatMediaSendWithMessageSendResult:] */

void FUN_1070a13ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  long lVar13;
  long lVar14;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 auStack_1c8 [8];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 auStack_1a8 [8];
  long lStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
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
  lVar1 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  lVar3 = lVar1;
  func_0x00010c0fe1c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = (undefined1 *)0x0;
  func_0x00010bfeea60();
  _objc_release(lVar13);
  _objc_release(lVar3);
  func_0x00010c1ec620(puVar2);
  puVar10 = *(undefined8 **)PTR__NSKeyedArchiveRootObjectKey_110345518;
  puVar4 = puVar2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0c8ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar12 = (undefined1)param_6;
  lVar3 = 0;
  if (puVar5 != (undefined *)0x0) {
    unaff_x25 = puVar4;
    puStack_140 = puVar2;
    lStack_138 = lVar1;
    func_0x00010c0c8ec0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = puVar4;
    func_0x00010bf6eca0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = unaff_x26;
    FUN_10708ffd0();
    lVar3 = param_3;
    FUN_10709187c(param_3,unaff_x25,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar3);
    puVar10 = &uStack_130;
    puVar11 = auStack_f0;
    param_5 = 0x10;
    lVar1 = lVar3;
    func_0x00010bf52a60();
    uVar12 = (undefined1)param_6;
    if (lVar1 != 0) {
      lVar13 = *plStack_120;
      do {
        lVar14 = 0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(lVar3);
          }
          unaff_x26 = *(undefined **)(lStack_128 + lVar14 * 8);
          lVar6 = param_3;
          func_0x00010bf50640();
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = lVar6;
          FUN_1070a0524();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17b600(unaff_x26);
          _objc_release(unaff_x28);
          _objc_release(lVar6);
          unaff_x27 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b2e60();
          _objc_release(unaff_x27);
          lVar14 = lVar14 + 1;
        } while (lVar1 != lVar14);
        puVar10 = &uStack_130;
        puVar11 = auStack_f0;
        param_5 = 0x10;
        lVar1 = lVar3;
        func_0x00010bf52a60();
        uVar12 = (undefined1)param_6;
        unaff_x25 = (undefined *)0x0;
      } while (lVar1 != 0);
    }
    _objc_release(lVar3);
    _objc_release(lVar3);
    lVar1 = lStack_138;
    puVar2 = puStack_140;
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar13 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1070a1694;
  lStack_1a0 = unaff_x28;
  uStack_198 = unaff_x27;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  lStack_180 = lVar3;
  puStack_178 = puVar4;
  puStack_170 = puVar2;
  lStack_168 = param_1;
  lStack_160 = lVar1;
  lStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(param_5);
  _objc_initWeak(auStack_1a8,lVar13);
  puVar7 = puVar10;
  func_0x00010bf6e760(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1c8,auStack_1a8);
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  _objc_retain(param_5);
  uStack_1c0 = param_7;
  uStack_1b8 = param_8;
  uStack_1b0 = uVar12;
  func_0x00010be10480(lVar13);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(param_5);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1a8);
  _objc_release(param_5);
  _objc_release(puVar11);
  _objc_release(puVar10);
  return;
}


