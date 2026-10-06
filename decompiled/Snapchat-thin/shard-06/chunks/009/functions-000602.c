/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f8c894; end: 104f8c89b; -[SCMessagingPlaybackOperaGroup participants] */

undefined8 FUN_104f8c894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f8c89c; end: 104f8c8cb; -[SCMessagingPlaybackOperaGroup .cxx_destruct] */

void FUN_104f8c89c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f8c8cc; end: 104f8c977; -[SCMessagingPlaybackOperaItem initWithMessage:participants:] */

undefined1 *
FUN_104f8c8cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5508;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f8c978; end: 104f8c99b; -[SCMessagingPlaybackOperaItem copyWithZone:] */

undefined8 FUN_104f8c978(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f8c99c; end: 104f8ca0f; -[SCMessagingPlaybackOperaItem hash] */

undefined8 * FUN_104f8c99c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104f8ca90:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f8ca9c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_104f8ca9c;
        }
        goto LAB_104f8ca90;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104f8ca9c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104f8ca10; end: 104f8cab7; -[SCMessagingPlaybackOperaItem isEqual:] */

long FUN_104f8ca10(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f8ca90:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f8ca9c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_104f8ca9c;
        }
        goto LAB_104f8ca90;
      }
    }
    lVar3 = 0;
  }
LAB_104f8ca9c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f8cab8; end: 104f8cabf; -[SCMessagingPlaybackOperaItem message] */

undefined8 FUN_104f8cab8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f8cac0; end: 104f8cac7; -[SCMessagingPlaybackOperaItem participants] */

undefined8 FUN_104f8cac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f8cac8; end: 104f8caf7; -[SCMessagingPlaybackOperaItem .cxx_destruct] */

void FUN_104f8cac8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f8caf8; end: 104f8cbbb; -[SCMessagingPlaybackChatMediaContent initWithMediaContent:messageType:canBeSaved:aiSongInfo:] */

undefined1 *
FUN_104f8caf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5510;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f8cbbc; end: 104f8cbdf; -[SCMessagingPlaybackChatMediaContent copyWithZone:] */

undefined8 FUN_104f8cbbc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f8cbe0; end: 104f8cc67; -[SCMessagingPlaybackChatMediaContent hash] */

undefined8 * FUN_104f8cbe0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  lStack_40 = -lVar4;
  if (-1 < lVar4) {
    lStack_40 = lVar4;
  }
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  puVar2 = &uStack_48;
  func_0x000100505190(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_104f8cd08:
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f8cd14;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       ((puVar2[3] == param_3[3] && (*(char *)(puVar2 + 1) == *(char *)(param_3 + 1))))) {
      lVar4 = puVar2[2];
      if ((lVar4 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        puVar5 = (undefined8 *)puVar2[4];
        if (puVar5 != (undefined8 *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_104f8cd14;
        }
        goto LAB_104f8cd08;
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_104f8cd14:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 104f8cc68; end: 104f8cd2f; -[SCMessagingPlaybackChatMediaContent isEqual:] */

long FUN_104f8cc68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f8cd08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f8cd14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_104f8cd14;
        }
        goto LAB_104f8cd08;
      }
    }
    lVar3 = 0;
  }
LAB_104f8cd14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f8cd30; end: 104f8cd37; -[SCMessagingPlaybackChatMediaContent mediaContent] */

undefined8 FUN_104f8cd30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f8cd38; end: 104f8cd3f; -[SCMessagingPlaybackChatMediaContent messageType] */

undefined8 FUN_104f8cd38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f8cd40; end: 104f8cd47; -[SCMessagingPlaybackChatMediaContent canBeSaved] */

undefined1 FUN_104f8cd40(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104f8cd48; end: 104f8cd4f; -[SCMessagingPlaybackChatMediaContent aiSongInfo] */

undefined8 FUN_104f8cd48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f8cd50; end: 104f8cd7f; -[SCMessagingPlaybackChatMediaContent .cxx_destruct] */

void FUN_104f8cd50(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f8cd80; end: 104f8ce07; -[SCMessagingPlaybackReplyMediaContent initWithMediaContent:canBeSaved:] */

undefined1 *
FUN_104f8cd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5518;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f8ce08; end: 104f8ce2b; -[SCMessagingPlaybackReplyMediaContent copyWithZone:] */

undefined8 FUN_104f8ce08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f8ce2c; end: 104f8ce97; -[SCMessagingPlaybackReplyMediaContent hash] */

undefined8 * FUN_104f8ce2c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f8cf1c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_104f8cf1c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_104f8cf1c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_104f8cf1c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 104f8ce98; end: 104f8cf37; -[SCMessagingPlaybackReplyMediaContent isEqual:] */

long FUN_104f8ce98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f8cf1c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_104f8cf1c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104f8cf1c;
    }
  }
  lVar3 = 1;
LAB_104f8cf1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f8cf38; end: 104f8cf3f; -[SCMessagingPlaybackReplyMediaContent mediaContent] */

undefined8 FUN_104f8cf38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f8cf40; end: 104f8cf47; -[SCMessagingPlaybackReplyMediaContent canBeSaved] */

undefined1 FUN_104f8cf40(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104f8cf48; end: 104f8cf53; -[SCMessagingPlaybackReplyMediaContent .cxx_destruct] */

void FUN_104f8cf48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f8cf54; end: 104f8d11b; -[SCMessagingPlaybackSnapContent initWithMediaContent:playbackState:canBeSaved:savedParticipants:isSentFromDweb:is24HourSnap:provenance:timing:playback:hasBeenViewedByCurrentUser:massSnapId:originStoryInfo:] */

undefined8 *
FUN_104f8cf54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_68 = PTR_PTR_1126e5520;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_4;
    *(undefined1 *)(puVar1 + 1) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_12;
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104f8d11c; end: 104f8d13f; -[SCMessagingPlaybackSnapContent copyWithZone:] */

undefined8 FUN_104f8d11c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f8d140; end: 104f8d213; -[SCMessagingPlaybackSnapContent hash] */

undefined8 * FUN_104f8d140(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  lStack_80 = -lVar5;
  if (-1 < lVar5) {
    lStack_80 = lVar5;
  }
  uStack_78 = (ulong)*(byte *)(param_1 + 8);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 9);
  uStack_60 = (ulong)*(byte *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0xb);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_88;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104f8d35c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f8d368;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((puVar3[3] == param_3[3] && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
         (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
        ((*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10) &&
         (*(char *)((long)puVar3 + 0xb) == *(char *)((long)param_3 + 0xb))))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[6];
            if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[7];
              if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[8];
                if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = (undefined8 *)puVar3[9];
                  if (puVar6 != (undefined8 *)param_3[9]) {
                    func_0x00010c071ae0();
                    goto LAB_104f8d368;
                  }
                  goto LAB_104f8d35c;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104f8d368:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104f8d214; end: 104f8d383; -[SCMessagingPlaybackSnapContent isEqual:] */

long FUN_104f8d214(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f8d35c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f8d368;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
         (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if (lVar3 != *(long *)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_104f8d368;
                  }
                  goto LAB_104f8d35c;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104f8d368:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f8d384; end: 104f8d38b; -[SCMessagingPlaybackSnapContent mediaContent] */

undefined8 FUN_104f8d384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f8d38c; end: 104f8d393; -[SCMessagingPlaybackSnapContent playbackState] */

undefined8 FUN_104f8d38c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f8d394; end: 104f8d39b; -[SCMessagingPlaybackSnapContent canBeSaved] */

undefined1 FUN_104f8d394(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104f8d39c; end: 104f8d3a3; -[SCMessagingPlaybackSnapContent savedParticipants] */

undefined8 FUN_104f8d39c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f8d3a4; end: 104f8d3ab; -[SCMessagingPlaybackSnapContent isSentFromDweb] */

undefined1 FUN_104f8d3a4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104f8d3ac; end: 104f8d3b3; -[SCMessagingPlaybackSnapContent is24HourSnap] */

undefined1 FUN_104f8d3ac(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 104f8d3b4; end: 104f8d3bb; -[SCMessagingPlaybackSnapContent provenance] */

undefined8 FUN_104f8d3b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f8d3bc; end: 104f8d3c3; -[SCMessagingPlaybackSnapContent timing] */

undefined8 FUN_104f8d3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104f8d3c4; end: 104f8d3cb; -[SCMessagingPlaybackSnapContent playback] */

undefined8 FUN_104f8d3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104f8d3cc; end: 104f8d3d3; -[SCMessagingPlaybackSnapContent hasBeenViewedByCurrentUser] */

undefined1 FUN_104f8d3cc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 104f8d3d4; end: 104f8d3db; -[SCMessagingPlaybackSnapContent massSnapId] */

undefined8 FUN_104f8d3d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 104f8d3dc; end: 104f8d3e3; -[SCMessagingPlaybackSnapContent originStoryInfo] */

undefined8 FUN_104f8d3dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 104f8d3e4; end: 104f8d44f; -[SCMessagingPlaybackSnapContent .cxx_destruct] */

void FUN_104f8d3e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f8d450; end: 104f8d503; -[SCMessagingPlaybackLaunchCandidates initWithInitialPlaybackGroups:firstDisplayPlaybackGroup:isMixedMediaPlayback:] */

undefined1 *
FUN_104f8d450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5528;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f8d504; end: 104f8d527; -[SCMessagingPlaybackLaunchCandidates copyWithZone:] */

undefined8 FUN_104f8d504(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f8d528; end: 104f8d59f; -[SCMessagingPlaybackLaunchCandidates hash] */

undefined8 * FUN_104f8d528(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104f8d630:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104f8d63c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104f8d63c;
        }
        goto LAB_104f8d630;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104f8d63c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104f8d5a0; end: 104f8d657; -[SCMessagingPlaybackLaunchCandidates isEqual:] */

long FUN_104f8d5a0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f8d630:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f8d63c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_104f8d63c;
        }
        goto LAB_104f8d630;
      }
    }
    lVar3 = 0;
  }
LAB_104f8d63c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f8d658; end: 104f8d65f; -[SCMessagingPlaybackLaunchCandidates initialPlaybackGroups] */

undefined8 FUN_104f8d658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f8d660; end: 104f8d667; -[SCMessagingPlaybackLaunchCandidates firstDisplayPlaybackGroup] */

undefined8 FUN_104f8d660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f8d668; end: 104f8d66f; -[SCMessagingPlaybackLaunchCandidates isMixedMediaPlayback] */

undefined1 FUN_104f8d668(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104f8d670; end: 104f8d69f; -[SCMessagingPlaybackLaunchCandidates .cxx_destruct] */

void FUN_104f8d670(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f8d6a0; end: 104f8d727; -[SCMessagingPlaybackOriginStoryInfo initWithOriginalSnapId:isPublicStory:] */

undefined1 *
FUN_104f8d6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e5530;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f8d728; end: 104f8d74b; -[SCMessagingPlaybackOriginStoryInfo copyWithZone:] */

undefined8 FUN_104f8d728(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f8d74c; end: 104f8d7b7; -[SCMessagingPlaybackOriginStoryInfo hash] */

undefined8 * FUN_104f8d74c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f8d83c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_104f8d83c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_104f8d83c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_104f8d83c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 104f8d7b8; end: 104f8d857; -[SCMessagingPlaybackOriginStoryInfo isEqual:] */

long FUN_104f8d7b8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f8d83c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_104f8d83c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_104f8d83c;
    }
  }
  lVar3 = 1;
LAB_104f8d83c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f8d858; end: 104f8d85f; -[SCMessagingPlaybackOriginStoryInfo originalSnapId] */

undefined8 FUN_104f8d858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f8d860; end: 104f8d867; -[SCMessagingPlaybackOriginStoryInfo isPublicStory] */

undefined1 FUN_104f8d860(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104f8d868; end: 104f8d873; -[SCMessagingPlaybackOriginStoryInfo .cxx_destruct] */

void FUN_104f8d868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f8d874; end: 104f8da2f; +[SCOperaPluginDismissHelper dismissIfAllowedWithOperaControlling:] */

ulong FUN_104f8d874(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  while (uVar3 != 0) {
    uVar2 = uVar3;
    func_0x00010c06d1a0();
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar3;
      FUN_104f8da30();
      if ((uVar2 & 1) != 0) goto LAB_104f8d9e8;
      uVar4 = uVar3;
      func_0x00010bf38f00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (uVar2 != 0) {
        uVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(uVar4);
          }
          uVar7 = *(ulong *)(uVar8 * 8);
          uVar5 = uVar7;
          func_0x00010c06d1a0();
          if (((uVar5 & 1) == 0) && (FUN_104f8da30(), (uVar7 & 1) != 0)) {
            _objc_release(uVar4);
            goto LAB_104f8d9e8;
          }
          uVar8 = uVar8 + 1;
        } while (uVar2 != uVar8);
        uVar2 = uVar4;
        func_0x00010bf52a60();
      }
      _objc_release(uVar4);
    }
    uVar2 = uVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar2;
  }
  uVar3 = param_3;
  func_0x00010c29cc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82f40();
LAB_104f8d9e8:
  _objc_release(uVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain();
    uVar2 = param_3;
    func_0x00010010fab4(param_3,PTR_DAT_1126a4ed8);
    uVar3 = param_3;
    if ((int)uVar2 == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    uVar2 = uVar3;
    func_0x00010c232100(uVar3);
    _objc_release(uVar3);
    _objc_release(param_3);
    return uVar2;
  }
  return param_3;
}



/* Entry: 104f8da30; end: 104f8da97;  */

undefined8 FUN_104f8da30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010010fab4(param_1,PTR_DAT_1126a4ed8);
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  func_0x00010c232100(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 104f8da98; end: 104f8daa3; -[SCFeatureSettingsService hasResurrectedStreakFirstLogInTimeMs] */

void FUN_104f8da98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dbe078);
  return;
}



/* Entry: 104f8daa4; end: 104f8daaf; -[SCFeatureSettingsService resurrectedStreakFirstLogInTimeMsServerParam] */

undefined ** FUN_104f8daa4(void)

{
  return &PTR____CFConstantStringClassReference_110dbe078;
}



/* Entry: 104f8dab0; end: 104f8dabf; -[SCFeatureSettingsService setResurrectedStreakFirstLogInTimeMs:] */

void FUN_104f8dab0(double param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dbe078,(long)param_1);
  return;
}



/* Entry: 104f8dac0; end: 104f8dac7; -[SCFeatureSettingsService FHP_STREAK_RESURRECTED_ELIGIBILITY_TIMESTAMP_client_value:] */

void FUN_104f8dac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 104f8dac8; end: 104f8dacf; -[SCFeatureSettingsService FHP_STREAK_RESURRECTED_ELIGIBILITY_TIMESTAMP_server_value:] */

void FUN_104f8dac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104f8dad0; end: 104f8daf3; -[SCFeatureSettingsService resurrectedStreakFirstLogInTimeMs] */

double FUN_104f8dad0(long param_1,undefined8 param_2)

{
  func_0x00010be3d100(param_1,param_2,&PTR____CFConstantStringClassReference_110dbe078,0);
  return (double)param_1;
}



/* Entry: 104f8daf4; end: 104f8daff; -[SCFeatureSettingsService hasResurrectedStreakRestoreCount] */

void FUN_104f8daf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dbe098);
  return;
}



/* Entry: 104f8db00; end: 104f8db0b; -[SCFeatureSettingsService resurrectedStreakRestoreCountServerParam] */

undefined ** FUN_104f8db00(void)

{
  return &PTR____CFConstantStringClassReference_110dbe098;
}



/* Entry: 104f8db0c; end: 104f8db1b; -[SCFeatureSettingsService setResurrectedStreakRestoreCount:] */

void FUN_104f8db0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dbe098,param_3);
  return;
}



/* Entry: 104f8db1c; end: 104f8db23; -[SCFeatureSettingsService FHP_STREAK_RESURRECTED_RESTORE_USED_client_value:] */

void FUN_104f8db1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 104f8db24; end: 104f8db2b; -[SCFeatureSettingsService FHP_STREAK_RESURRECTED_RESTORE_USED_server_value:] */

void FUN_104f8db24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104f8db2c; end: 104f8db3b; -[SCFeatureSettingsService resurrectedStreakRestoreCount] */

void FUN_104f8db2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dbe098,0);
  return;
}



/* Entry: 104f8db3c; end: 104f8db47; -[SCFeatureSettingsService hasFriendshipDayRestoreCount] */

void FUN_104f8db3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dbe0b8);
  return;
}



/* Entry: 104f8db48; end: 104f8db53; -[SCFeatureSettingsService friendshipDayRestoreCountServerParam] */

undefined ** FUN_104f8db48(void)

{
  return &PTR____CFConstantStringClassReference_110dbe0b8;
}



/* Entry: 104f8db54; end: 104f8db63; -[SCFeatureSettingsService setFriendshipDayRestoreCount:] */

void FUN_104f8db54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110dbe0b8,param_3);
  return;
}



/* Entry: 104f8db64; end: 104f8db6b; -[SCFeatureSettingsService FHP_STREAK_RESTORE_FRIENDSHIP_DAY_RESTORES_USED_client_value:] */

void FUN_104f8db64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 104f8db6c; end: 104f8db73; -[SCFeatureSettingsService FHP_STREAK_RESTORE_FRIENDSHIP_DAY_RESTORES_USED_server_value:] */

void FUN_104f8db6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 104f8db74; end: 104f8db83; -[SCFeatureSettingsService friendshipDayRestoreCount] */

void FUN_104f8db74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110dbe0b8,0);
  return;
}



/* Entry: 104f8db84; end: 104f8db8f; +[SCCSettingsStreaks componentPath] */

undefined ** FUN_104f8db84(void)

{
  return &PTR____CFConstantStringClassReference_110dbe0d8;
}



/* Entry: 104f8db90; end: 104f8dbc3; -[SCCSettingsStreaks initWithViewModel:componentContext:runtime:] */

void FUN_104f8db90(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5538;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104f8dbc4; end: 104f8dc13; -[SCCSettingsStreaks setViewModel:] */

void FUN_104f8dbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f8dc14; end: 104f8dc57; -[SCCSettingsStreaks viewModel] */

void FUN_104f8dc14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f8dc58; end: 104f8dc9b; -[SCCSettingsStreaksContext initWithSupStore:alertPresenter:] */

void FUN_104f8dc58(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5540;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 104f8dc9c; end: 104f8dcbb; +[SCCSettingsStreaksContext valdiMarshallableObjectDescriptor] */

void FUN_104f8dc9c(undefined8 *param_1)

{
  *param_1 = &PTR_s_supStore_11085f450;
  param_1[1] = &PTR_s_SCComposerSUPStoring_11085f4e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f8dcbc; end: 104f8dd7b; -[SCMusicDeeplinkEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8dcbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b2ed0;
  _objc_alloc(PTR_PTR_1126b2ed0);
  lVar2 = param_1 + _DAT_11271837c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e580(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112718380;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f8dd7c; end: 104f8ddbf; -[SCMusicDeeplinkEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8dd7c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271837c);
  _objc_destroyWeak(param_1 + _DAT_112718384);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112718380);
  return;
}



/* Entry: 104f8ddc0; end: 104f8de33; -[SCMusicDeeplinkPlugin initWithNavigationDelegate:] */

undefined1 * FUN_104f8ddc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5548;
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



/* Entry: 104f8de34; end: 104f8de47; -[SCMusicDeeplinkPlugin identifier] */

void FUN_104f8de34(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 104f8de48; end: 104f8de4f; -[SCMusicDeeplinkPlugin priority] */

undefined8 FUN_104f8de48(void)

{
  return 1000;
}



/* Entry: 104f8de50; end: 104f8de63; -[SCMusicDeeplinkPlugin canProvideProcessorForFeature:] */

void FUN_104f8de50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110e09c38);
  return;
}



/* Entry: 104f8de64; end: 104f8deaf; -[SCMusicDeeplinkPlugin isValidDeepLink:] */

undefined8 FUN_104f8de64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104f8deb0; end: 104f8deb3; -[SCMusicDeeplinkPlugin makeDeepLinkProcessor] */

void FUN_104f8deb0(void)

{
  return;
}



/* Entry: 104f8deb4; end: 104f8e117; -[SCMusicDeeplinkPlugin processDeepLinkURL:additionalInfo:delegate:] */

void FUN_104f8deb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1068;
  _objc_alloc(PTR_PTR_1126b1068);
  uVar5 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2475e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057c40(puVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf2d020();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a5fe0(param_5);
    func_0x00010bf94720(param_5);
    _objc_release(puVar6);
  }
  else {
    _objc_initWeak(auStack_58,param_5);
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    _objc_opt_respondsToSelector();
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf83120();
      _objc_release(uVar5);
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c10d100(uVar5);
    _objc_release(uVar5);
    func_0x00010c0a5fe0(param_5);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f8e118; end: 104f8e167;  */

void FUN_104f8e118(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0a6880();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f8e168; end: 104f8e16f; -[SCMusicDeeplinkPlugin shouldForceNavigation] */

undefined8 FUN_104f8e168(void)

{
  return 1;
}



/* Entry: 104f8e170; end: 104f8e173; -[SCMusicDeeplinkPlugin processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_104f8e170(void)

{
  return;
}



/* Entry: 104f8e174; end: 104f8e17f; -[SCMusicDeeplinkPlugin .cxx_destruct] */

void FUN_104f8e174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f8e180; end: 104f8e5af; -[SCMusicEditorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8e180(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  lVar1 = param_1 + _DAT_11271838c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar1 = param_1 + _DAT_112718390;
    _objc_loadWeakRetained();
    lVar2 = param_1 + _DAT_112718394;
    _objc_loadWeakRetained(lVar2);
    lVar4 = lVar1;
    func_0x0001006f7bf0(lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b2ed8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112718398;
    _objc_loadWeakRetained();
    lVar23 = (long)_DAT_11271839c;
    lVar2 = param_1 + lVar23;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010c15a4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1 + _DAT_1127183a0;
    _objc_loadWeakRetained();
    lVar8 = lVar7;
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_1127183a4;
    _objc_loadWeakRetained();
    lVar10 = param_1 + _DAT_1127183a8;
    _objc_loadWeakRetained();
    lVar11 = param_1 + lVar23;
    _objc_loadWeakRetained();
    lVar12 = lVar11;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_1 + lVar23;
    _objc_loadWeakRetained();
    func_0x00010c077ec0();
    lVar14 = param_1 + lVar23;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c0d4040();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_1 + lVar23;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c1105a0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + _DAT_1127183ac;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c2779e0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_1127183b0;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c084e20();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + lVar23;
    _objc_loadWeakRetained();
    func_0x00010c22e000();
    func_0x00010bff5460();
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c18b5e0(puVar5);
    lVar1 = param_1 + lVar23;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c0f5f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9940(puVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar23 = param_1 + lVar23;
    _objc_loadWeakRetained(lVar23);
    func_0x00010c2363a0();
    func_0x00010c201860(puVar5);
    _objc_release(lVar23);
    _objc_initWeak(auStack_70,param_1);
    _objc_copyWeak(auStack_78,auStack_70);
    _objc_retain(puVar5);
    func_0x00010c10a440(puVar5);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  _objc_release();
  _objc_release(lVar3);
  return;
}



/* Entry: 104f8e5b0; end: 104f8e623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8e5b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11271839c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0c980();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f8e624; end: 104f8e6af; -[SCMusicEditorEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8e624(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11271839c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e5550;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f8e6b0; end: 104f8e737; -[SCMusicEditorEntryPoint editorViewController:didConfirmSelection:selectedMusicStickerData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f8e6b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271839c;
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d2ba0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


