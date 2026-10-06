/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100017c64; end: 100017cd7; -[_TtC36WidgetSuggestionNotificationModifier32WidgetSuggestionNotifTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_100017c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __Block_copy(param_4);
  __Block_copy();
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_100017eec();
  __Block_release(param_4);
  __Block_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 100017cd8; end: 100017d0b;  */

void FUN_100017cd8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 100017d0c; end: 100017d1b; -[_TtC36WidgetSuggestionNotificationModifier32WidgetSuggestionNotifTaskHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(*(undefined8 *)(param_1 + _DAT_1000dd5a8));
  return;
}



/* Entry: 100017d1c; end: 100017e23;  */

undefined1  [16] FUN_100017d1c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  iVar1 = (int)&uStack_80;
  puVar2 = PTR__OBJC_CLASS___NSBundle_1000d1e88;
  _objc_opt_self();
  func_0x0001000717e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000001000932e0);
  puVar4 = puVar2;
  func_0x000100072020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  if (puVar4 == (undefined *)0x0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,puVar4);
    _swift_unknownObjectRelease(puVar4);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x000100010e5c(&uStack_50);
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_80,&uStack_50,PTR___sypN_1000a08a0 + 8,PTR___sSSN_1000a0680,6);
    if (iVar1 == 0) {
      uStack_80 = 0;
      uStack_78 = 0;
    }
  }
  auVar5._8_8_ = uStack_78;
  auVar5._0_8_ = uStack_80;
  return auVar5;
}



/* Entry: 100017e24; end: 100017e87;  */

ulong FUN_100017e24(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x1000dd6a8;
  FUN_1000103e0(0x1000dd6a8,&UNK_10008f570);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Entry: 100017e88; end: 100017eab;  */

void FUN_100017e88(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 100017eac; end: 100017ecb;  */

void FUN_100017eac(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100017ecc; end: 100017eeb;  */

void FUN_100017ecc(void)

{
  _objc_opt_self(&PTR_PTR_1000d3718);
  return;
}



/* Entry: 100017eec; end: 1000180ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100017eec(long param_1,long param_2)

{
  unkuint9 Var1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar2 = &UNK_1000a1470;
  uVar7 = 0x18;
  _swift_allocObject(&UNK_1000a1470,0x18,7);
  *(long *)(puVar2 + 0x10) = param_2;
  puVar8 = *(undefined **)(param_1 + _DAT_1000dd5a8);
  __Block_copy(param_2);
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined *)0x0) {
    puVar3 = puVar8;
    func_0x0001000747c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      uVar7 = 0xe000000000000000;
    }
    else {
      puVar9 = puVar3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(puVar3);
    }
    FUN_100017e24(puVar9,uVar7);
    if ((((uint)puVar9 & 0xff) != 7) &&
       (puVar3 = puVar8, func_0x0001000747e0(), puVar3 != (undefined *)0x0)) {
      puVar3 = puVar8;
      func_0x0001000747e0(puVar8);
      FUN_100019984(0);
      puVar4 = puVar8;
      func_0x000100074760(puVar8);
      Var1 = ZEXT89(puVar4);
      FUN_100017d1c();
      uVar5 = 0;
      FUN_100018738(0);
      _swift_allocObject();
      func_0x000100018390(puVar4,uVar7,uVar5);
      FUN_100018bf4((double)(unkint9)Var1);
      puVar6 = puVar8;
      func_0x0001000747a0();
      if ((int)puVar6 == 0) {
        puVar6 = &UNK_1000a1498;
        _swift_allocObject(&UNK_1000a1498,0x20,7);
        *(code **)(puVar6 + 0x10) = FUN_100018124;
        *(undefined **)(puVar6 + 0x18) = puVar2;
        _swift_retain(puVar2);
        FUN_100018cbc((double)puVar3,puVar9,0x100018134,puVar6);
        _swift_release(puVar2);
        _objc_release(puVar8);
        _swift_release(puVar4);
        puVar2 = puVar6;
      }
      else {
        FUN_100018cbc((double)puVar3,puVar9,0,0);
        (**(code **)(param_2 + 0x10))(param_2);
        _swift_release(puVar2);
        _objc_release(puVar8);
        puVar2 = puVar4;
      }
      goto LAB_10001807c;
    }
    _objc_release(puVar8);
  }
  (**(code **)(param_2 + 0x10))(param_2);
LAB_10001807c:
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(puVar2);
  return;
}



/* Entry: 100018100; end: 100018123;  */

void FUN_100018100(void)

{
  long unaff_x20;
  
  __Block_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 100018124; end: 100018147;  */

void FUN_100018124(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010001812c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 100018148; end: 100018197;  */

void FUN_100018148(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  uVar3 = param_2;
  _objc_retain(param_2);
  (*pcVar1)(param_2);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar3);
  return;
}



/* Entry: 100018198; end: 100018283;  */

void FUN_100018198(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR__OBJC_CLASS___INRelevantShortcutStore_1000d1b80;
  _objc_opt_self(PTR__OBJC_CLASS___INRelevantShortcutStore_1000d1b80);
  func_0x00010006ebe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  FUN_100018284(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar2);
  puVar4 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_100018148;
    puStack_58 = &UNK_1000a1530;
    lStack_50 = param_2;
    uStack_48 = param_3;
    __Block_copy(&puStack_70);
    uVar2 = uStack_48;
    _swift_retain(param_3);
    _swift_release(uVar2);
    puVar4 = (undefined1 *)ppuVar3;
  }
  func_0x0001000734a0(puVar1);
  __Block_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 100018284; end: 1000182c7;  */

void FUN_100018284(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd6b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___INRelevantShortcut_1000d1b88;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam00000001000dd6b0 = puVar1;
  return;
}



/* Entry: 1000182c8; end: 1000182e3;  */

void FUN_1000182c8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010006bdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_1000a09f0)(uVar1);
  return;
}



/* Entry: 1000182e4; end: 10001841f;  */

void FUN_1000182e4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined *puVar1;
  
  _swift_allocObject();
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1000d1e80;
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(param_2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    func_0x000100070ca0();
    _swift_bridgeObjectRelease_n(param_2,2);
    _objc_release(param_1);
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 100018420; end: 1000184cb;  */

void FUN_100018420(undefined8 param_1,double param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    uVar1 = 0xd00000000000002a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x8000000100093420);
    func_0x00010006efc0(lVar2);
    _objc_release(uVar1);
    if (0.0 < param_2) {
      __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(param_1,param_2);
      uVar1 = 0;
      goto LAB_100018498;
    }
  }
  uVar1 = 1;
LAB_100018498:
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x0001000184c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,uVar1,1,lVar2);
  return;
}



/* Entry: 1000184cc; end: 100018673;  */

void FUN_1000184cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0x1000dd6b8;
  FUN_1000103e0(0x1000dd6b8,&UNK_10008f5f0);
  (*(code *)PTR____chkstk_darwin_1000a0100)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 != 0) {
    FUN_100018674(param_2,puVar4);
    puVar2 = puVar4;
    (**(code **)(lVar7 + 0x30))(puVar4,1,lVar1);
    if ((int)puVar2 == 1) {
      _objc_retain(lVar5);
      func_0x0001000186c4(puVar4);
      uVar3 = 0xd00000000000002a;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x8000000100093420);
      func_0x000100072640(lVar5);
      _objc_release(uVar3);
      _objc_release(lVar5);
    }
    else {
      (**(code **)(lVar7 + 0x20))(lVar6,puVar4,lVar1);
      _objc_retain(lVar5);
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      uVar3 = 0xd00000000000002a;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x8000000100093420);
      func_0x000100072e80(param_1,lVar5);
      _objc_release(uVar3);
      _objc_release(lVar5);
      (**(code **)(lVar7 + 8))(lVar6,lVar1);
    }
  }
  return;
}



/* Entry: 100018674; end: 10001870b;  */

undefined8 FUN_100018674(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000dd6b8;
  FUN_1000103e0(0x1000dd6b8,&UNK_10008f5f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10001870c; end: 10001872f;  */

void FUN_10001870c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010006bc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000a0918)();
  return;
}



/* Entry: 100018730; end: 100018737;  */

void FUN_100018730(undefined8 param_1,double param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    uVar1 = 0xd00000000000002a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x8000000100093420);
    func_0x00010006efc0(lVar2);
    _objc_release(uVar1);
    if (0.0 < param_2) {
      __s10Foundation4DateV21timeIntervalSince1970ACSd_tcfC(param_1,param_2);
      uVar1 = 0;
      goto LAB_100018498;
    }
  }
  uVar1 = 1;
LAB_100018498:
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x0001000184c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,uVar1,1,lVar2);
  return;
}



/* Entry: 100018738; end: 100018757;  */

void FUN_100018738(void)

{
  _objc_opt_self(&PTR_PTR_1000dd700);
  return;
}



/* Entry: 100018758; end: 100018777;  */

bool FUN_100018758(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100018778; end: 100018853;  */

void FUN_100018778(undefined8 param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  pcVar4 = "com.snapchat.memorieswidget";
  uVar6 = 0xd00000000000001b;
  if (bVar5 != 5) {
    pcVar4 = "com.snapchat.friendLocation";
    uVar6 = 0xd000000000000020;
  }
  uVar1 = 0xd000000000000025;
  pcVar2 = "com.snapchat.pmflockscreenwidget";
  if (bVar5 != 3) {
    uVar1 = 0xd00000000000001b;
    pcVar2 = "com.snapchat.birthdaylockscreenwidget";
  }
  if (bVar5 < 5) {
    pcVar4 = pcVar2 + 0x10;
    uVar6 = uVar1;
  }
  pcVar2 = "com.snapchat.snapcode";
  uVar1 = 0xd000000000000023;
  if (bVar5 != 1) {
    pcVar2 = "eralockscreenwidget";
    uVar1 = 0xd000000000000020;
  }
  pcVar3 = "SCGroupIdentifier";
  uVar7 = 0xd000000000000015;
  if (bVar5 != 0) {
    pcVar3 = pcVar2;
    uVar7 = uVar1;
  }
  if (bVar5 < 3) {
    pcVar4 = pcVar3;
    uVar6 = uVar7;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar6,(ulong)pcVar4 | 0x8000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010006bc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000a08f8)((ulong)pcVar4 | 0x8000000000000000);
  return;
}



/* Entry: 100018854; end: 10001885b;  */

void FUN_100018854(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  pcVar4 = "com.snapchat.memorieswidget";
  uVar6 = 0xd00000000000001b;
  if (bVar5 != 5) {
    pcVar4 = "com.snapchat.friendLocation";
    uVar6 = 0xd000000000000020;
  }
  uVar1 = 0xd000000000000025;
  pcVar2 = "com.snapchat.pmflockscreenwidget";
  if (bVar5 != 3) {
    uVar1 = 0xd00000000000001b;
    pcVar2 = "com.snapchat.birthdaylockscreenwidget";
  }
  if (bVar5 < 5) {
    pcVar4 = pcVar2 + 0x10;
    uVar6 = uVar1;
  }
  pcVar2 = "com.snapchat.snapcode";
  uVar1 = 0xd000000000000023;
  if (bVar5 != 1) {
    pcVar2 = "eralockscreenwidget";
    uVar1 = 0xd000000000000020;
  }
  pcVar3 = "SCGroupIdentifier";
  uVar7 = 0xd000000000000015;
  if (bVar5 != 0) {
    pcVar3 = pcVar2;
    uVar7 = uVar1;
  }
  if (bVar5 < 3) {
    pcVar4 = pcVar3;
    uVar6 = uVar7;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar6,(ulong)pcVar4 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar4 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10001885c; end: 100018987;  */

void FUN_10001885c(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  pcVar4 = "com.snapchat.memorieswidget";
  uVar5 = 0xd00000000000001b;
  if (param_2 != 5) {
    pcVar4 = "com.snapchat.friendLocation";
    uVar5 = 0xd000000000000020;
  }
  uVar1 = 0xd000000000000025;
  pcVar2 = "com.snapchat.pmflockscreenwidget";
  if (param_2 != 3) {
    uVar1 = 0xd00000000000001b;
    pcVar2 = "com.snapchat.birthdaylockscreenwidget";
  }
  if (param_2 < 5) {
    pcVar4 = pcVar2 + 0x10;
    uVar5 = uVar1;
  }
  pcVar2 = "com.snapchat.snapcode";
  uVar1 = 0xd000000000000023;
  if (param_2 != 1) {
    pcVar2 = "eralockscreenwidget";
    uVar1 = 0xd000000000000020;
  }
  pcVar3 = "SCGroupIdentifier";
  uVar6 = 0xd000000000000015;
  if (param_2 != 0) {
    pcVar3 = pcVar2;
    uVar6 = uVar1;
  }
  if (param_2 < 3) {
    pcVar4 = pcVar3;
    uVar5 = uVar6;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,(ulong)pcVar4 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar4 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100018988; end: 100018a4f;  */

void FUN_100018988(undefined8 *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  pcVar4 = "com.snapchat.memorieswidget";
  uVar6 = 0xd00000000000001b;
  if (bVar5 != 5) {
    pcVar4 = "com.snapchat.friendLocation";
    uVar6 = 0xd000000000000020;
  }
  uVar1 = 0xd000000000000025;
  pcVar2 = "com.snapchat.pmflockscreenwidget";
  if (bVar5 != 3) {
    uVar1 = 0xd00000000000001b;
    pcVar2 = "com.snapchat.birthdaylockscreenwidget";
  }
  if (bVar5 < 5) {
    pcVar4 = pcVar2 + 0x10;
    uVar6 = uVar1;
  }
  pcVar2 = "com.snapchat.snapcode";
  uVar1 = 0xd000000000000023;
  if (bVar5 != 1) {
    pcVar2 = "eralockscreenwidget";
    uVar1 = 0xd000000000000020;
  }
  pcVar3 = "SCGroupIdentifier";
  uVar7 = 0xd000000000000015;
  if (bVar5 != 0) {
    pcVar3 = pcVar2;
    uVar7 = uVar1;
  }
  if (bVar5 < 3) {
    pcVar4 = pcVar3;
    uVar6 = uVar7;
  }
  *param_1 = uVar6;
  param_1[1] = (ulong)pcVar4 | 0x8000000000000000;
  return;
}



/* Entry: 100018a50; end: 100018a8f;  */

void FUN_100018a50(void)

{
  undefined *puVar1;
  
  if (puRam00000001000dd760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008f650;
  _swift_getWitnessTable(&UNK_10008f650,&UNK_1000a15f0);
  puRam00000001000dd760 = puVar1;
  return;
}



/* Entry: 100018a90; end: 100018bf3;  */

int FUN_100018a90(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100018b0c;
        goto LAB_100018af0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100018af0:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_100018b0c:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100018bf4; end: 100018c8f;  */

long FUN_100018bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined *puStack_60;
  undefined **ppuStack_58;
  
  puStack_60 = &UNK_1000a1510;
  ppuStack_58 = &PTR_DAT_1000a1520;
  _swift_allocObject();
  FUN_100018c94(auStack_78,&UNK_1000a1510);
  *(undefined **)(unaff_x20 + 0x40) = &UNK_1000a1510;
  *(undefined ***)(unaff_x20 + 0x48) = &PTR_DAT_1000a1520;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(code **)(unaff_x20 + 0x50) = FUN_100018c90;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  FUN_100013400(auStack_78);
  return unaff_x20;
}



/* Entry: 100018c90; end: 100018c93;  */

void FUN_100018c90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation4DateVACycfC_1000a0b60)();
  return;
}



/* Entry: 100018c94; end: 100018cbb;  */

long FUN_100018c94(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    _swift_makeBoxUnique(param_1,param_2,uVar1 & 0xff);
    param_1 = param_2;
  }
  return param_1;
}



/* Entry: 100018cbc; end: 100018e4f;  */

void FUN_100018cbc(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long extraout_x12;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000a0100)();
  lVar5 = (long)&uStack_80 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000a0100)();
  uVar4 = lVar5 - extraout_x12;
  (**(code **)(unaff_x20 + 0x50))(uVar4);
  uVar3 = uVar4;
  FUN_100018e50();
  if ((uVar3 & 1) == 0) {
    if (param_3 != (code *)0x0) {
      (*param_3)(1);
    }
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x18);
    (**(code **)(lVar8 + 0x10))(lVar5,uVar4,lVar1);
    uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
    uVar6 = uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff);
    puVar2 = &UNK_1000a1668;
    _swift_allocObject(&UNK_1000a1668,uVar6 + lVar7,uVar3 | 7);
    *(code **)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = uVar9;
    *(undefined8 *)(puVar2 + 0x30) = uStack_78;
    *(undefined8 *)(puVar2 + 0x28) = uStack_80;
    (**(code **)(lVar8 + 0x20))(puVar2 + uVar6,lVar5,lVar1);
    FUN_100019720(param_3,param_4);
    _swift_unknownObjectRetain(uStack_80);
    FUN_10001926c(param_1,param_2,uVar4,FUN_100019178,puVar2);
    _swift_release(puVar2);
  }
  (**(code **)(lVar8 + 8))(uVar4,lVar1);
  return;
}



/* Entry: 100018e50; end: 100018f9f;  */

bool FUN_100018e50(double param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  lVar2 = 0x1000dd6b8;
  FUN_1000103e0(0x1000dd6b8,&UNK_10008f5f0);
  (*(code *)PTR____chkstk_darwin_1000a0100)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  dVar7 = *(double *)(unaff_x20 + 0x10);
  if (0.0 < dVar7) {
    lVar1 = *(long *)(unaff_x20 + 0x20);
    _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x18));
    (**(code **)(lVar1 + 8))(puVar4);
    puVar3 = puVar4;
    (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
    if ((int)puVar3 != 1) {
      (**(code **)(lVar6 + 0x20))(lVar5,puVar4,lVar2);
      __s10Foundation4DateV17timeIntervalSinceySdACF(lVar5);
      (**(code **)(lVar6 + 8))(lVar5,lVar2);
      if (param_1 < dVar7) {
        return param_1 < 0.0;
      }
      return true;
    }
    func_0x0001000186c4(puVar4);
  }
  return true;
}



/* Entry: 100018fa0; end: 1000190fb;  */

void FUN_100018fa0(double param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0x1000dd6b8;
  FUN_1000103e0(0x1000dd6b8,&UNK_10008f5f0);
  (*(code *)PTR____chkstk_darwin_1000a0100)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffff90 + -extraout_x8;
  if (param_2 == 0) {
    if (0.0 < param_1) {
      _swift_getObjectType(param_5);
      lVar1 = 0;
      __s10Foundation4DateVMa();
      lVar3 = *(long *)(lVar1 + -8);
      (**(code **)(lVar3 + 0x10))(puVar2,param_7,lVar1);
      (**(code **)(lVar3 + 0x38))(puVar2,0,1,lVar1);
      (**(code **)(param_6 + 0x10))(puVar2,param_5,param_6);
      func_0x0001000186c4(puVar2);
    }
    if (param_3 != (code *)0x0) {
      (*param_3)(0);
    }
  }
  else if (param_3 != (code *)0x0) {
    _swift_errorRetain(param_2);
    (*param_3)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010006bcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_1000a0948)(param_2);
    return;
  }
  return;
}



/* Entry: 1000190fc; end: 100019177;  */

void FUN_1000190fc(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 100019178; end: 1000191bf;  */

void FUN_100019178(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  double dVar8;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  dVar8 = *(double *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar4 = 0x1000dd6b8;
  FUN_1000103e0(0x1000dd6b8,&UNK_10008f5f0,*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)PTR____chkstk_darwin_1000a0100)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffff90 + -extraout_x8;
  if (param_1 == 0) {
    if (0.0 < dVar8) {
      _swift_getObjectType(uVar3);
      lVar4 = 0;
      __s10Foundation4DateVMa();
      lVar7 = *(long *)(lVar4 + -8);
      (**(code **)(lVar7 + 0x10))
                (puVar6,unaff_x20 + (uVar5 + 0x38 & (uVar5 ^ 0xffffffffffffffff)),lVar4);
      (**(code **)(lVar7 + 0x38))(puVar6,0,1,lVar4);
      (**(code **)(lVar2 + 0x10))(puVar6,uVar3,lVar2);
      func_0x0001000186c4(puVar6);
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(0);
    }
  }
  else if (pcVar1 != (code *)0x0) {
    _swift_errorRetain(param_1);
    (*pcVar1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006bcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_1000a0948)(param_1);
    return;
  }
  return;
}



/* Entry: 1000191c0; end: 1000191f3;  */

void FUN_1000191c0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100013400(unaff_x20 + 0x28);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010006bc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000a0918)();
  return;
}



/* Entry: 1000191f4; end: 10001926b;  */

void FUN_1000191f4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  FUN_100021220(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1000199a4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x1000dd490;
      param_4 = (long *)&UNK_10008f398;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    _swift_getTypeByMangledNameInContext(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10001926c; end: 10001971f;  */

void FUN_10001926c(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char **ppcVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  undefined1 *puVar20;
  undefined1 auStack_e0 [8];
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar10 = 0x1000dd6b8;
  uStack_90 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  FUN_1000103e0(0x1000dd6b8,&UNK_10008f5f0);
  (*(code *)PTR____chkstk_darwin_1000a0100)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  puStack_88 = auStack_e0 + -extraout_x8;
  __s7Intents10INShortcutOMa();
  lStack_a8 = *(long *)(lVar10 + -8);
  lStack_a0 = lVar10;
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar10 = (long)(auStack_e0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar11 = PTR__OBJC_CLASS___NSUserActivity_1000d1b90;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSUserActivity_1000d1b90);
  uVar18 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x8000000100093450);
  func_0x000100070020(puVar11);
  _objc_release(uVar18);
  func_0x000100072ea0(puVar11);
  uVar18 = 0xd000000000000020;
  uVar12 = 0xd00000000000001b;
  if (param_2 != 5) {
    uVar12 = uVar18;
  }
  pcStack_c8 = "com.snapchat.friendLocation";
  pcStack_c0 = "com.snapchat.memorieswidget";
  pcVar5 = "com.snapchat.memorieswidget";
  if (param_2 != 5) {
    pcVar5 = "com.snapchat.friendLocation";
  }
  uVar1 = 0xd000000000000025;
  uVar2 = uVar1;
  if (param_2 != 3) {
    uVar2 = 0xd00000000000001b;
  }
  pcStack_d8 = "thdaylockscreenwidget";
  pcStack_d0 = "lockscreenwidget";
  pcVar3 = "com.snapchat.pmflockscreenwidget";
  if (param_2 != 3) {
    pcVar3 = "com.snapchat.birthdaylockscreenwidget";
  }
  if (param_2 < 5) {
    pcVar5 = pcVar3 + 0x10;
    uVar12 = uVar2;
  }
  pcVar3 = "com.snapchat.snapcode";
  uVar2 = 0xd000000000000023;
  if (param_2 != 1) {
    pcVar3 = "eralockscreenwidget";
    uVar2 = uVar18;
  }
  pcStack_b8 = "SCGroupIdentifier";
  uStack_b0 = 0xd000000000000015;
  pcVar4 = "SCGroupIdentifier";
  uVar8 = 0xd000000000000015;
  if (param_2 != 0) {
    pcVar4 = pcVar3;
    uVar8 = uVar2;
  }
  if (param_2 < 3) {
    pcVar5 = pcVar4;
    uVar12 = uVar8;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar12,(ulong)pcVar5 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar5 | 0x8000000000000000);
  func_0x000100073400(puVar11);
  _objc_release(uVar12);
  _objc_retain(puVar11);
  __s7Intents10INShortcutO12userActivityACSo06NSUserD0C_tcfC(lVar10);
  puVar13 = PTR__OBJC_CLASS___INRelevantShortcut_1000d1b88;
  _objc_allocWithZone();
  puVar14 = puVar13;
  __s7Intents10INShortcutO19_bridgeToObjectiveCSoABCyF();
  func_0x000100070ba0();
  _objc_release(puVar14);
  (**(code **)(lStack_a8 + 8))(lVar10,lStack_a0);
  ppcVar6 = &pcStack_c0;
  uVar12 = 0xd00000000000001b;
  if (param_2 != 5) {
    ppcVar6 = &pcStack_c8;
    uVar12 = uVar18;
  }
  ppcVar7 = &pcStack_d0;
  if (param_2 != 3) {
    uVar1 = 0xd00000000000001b;
    ppcVar7 = &pcStack_d8;
  }
  pcVar5 = *ppcVar6;
  if (param_2 < 5) {
    pcVar5 = *ppcVar7;
    uVar12 = uVar1;
  }
  pcVar3 = "com.snapchat.snapcode";
  uVar1 = 0xd000000000000023;
  if (param_2 != 1) {
    pcVar3 = "eralockscreenwidget";
    uVar1 = uVar18;
  }
  pcVar4 = pcStack_b8;
  uVar18 = uStack_b0;
  if (param_2 != 0) {
    pcVar4 = pcVar3;
    uVar18 = uVar1;
  }
  if (param_2 < 3) {
    pcVar5 = pcVar4;
    uVar12 = uVar18;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar12,(ulong)pcVar5 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar5 | 0x8000000000000000);
  func_0x000100073880(puVar13);
  _objc_release(uVar12);
  func_0x000100073620(puVar13);
  lVar10 = 0x1000dd820;
  FUN_1000191f4(0x1000dd820,&PTR__OBJC_CLASS___INRelevanceProvider_1000d1ba0,0x1000dd830,
                &UNK_10008f780);
  _swift_allocObject();
  puVar9 = puStack_88;
  uStack_98 = 3;
  lStack_a0 = 1;
  *(undefined8 *)(lVar10 + 0x18) = 3;
  *(undefined8 *)(lVar10 + 0x10) = 1;
  __s10Foundation4DateV18addingTimeIntervalyACSdF(puStack_88,param_1);
  lVar15 = 0;
  __s10Foundation4DateVMa();
  lVar19 = *(long *)(lVar15 + -8);
  puVar16 = puVar9;
  (**(code **)(lVar19 + 0x38))(puVar9,0,1,lVar15);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
  puVar17 = puVar9;
  (**(code **)(lVar19 + 0x30))(puVar9,1,lVar15);
  puVar20 = (undefined1 *)0x0;
  if ((int)puVar17 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar19 + 8))(puVar9,lVar15);
    puVar20 = puVar17;
  }
  puVar14 = PTR__OBJC_CLASS___INDateRelevanceProvider_1000d1b98;
  _objc_allocWithZone();
  func_0x000100070c20();
  _objc_release(puVar16);
  _objc_release(puVar20);
  *(undefined **)(lVar10 + 0x20) = puVar14;
  uVar18 = 0;
  FUN_1000199a4(0,0x1000dd820,&PTR__OBJC_CLASS___INRelevanceProvider_1000d1ba0);
  lVar15 = lVar10;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar10,uVar18);
  _swift_release(lVar10);
  func_0x000100073480(puVar13);
  _objc_release(lVar15);
  lVar10 = 0x1000dd6b0;
  FUN_1000191f4(0x1000dd6b0,&PTR__OBJC_CLASS___INRelevantShortcut_1000d1b88,0x1000dd828,
                &UNK_10008f770);
  _swift_allocObject();
  *(undefined8 *)(lVar10 + 0x18) = uStack_98;
  *(long *)(lVar10 + 0x10) = lStack_a0;
  *(undefined **)(lVar10 + 0x20) = puVar13;
  _objc_retain(puVar13);
  FUN_100018198(lVar10,uStack_80,uStack_78);
  _objc_release(puVar11);
  _objc_release(puVar13);
  _swift_release(lVar10);
  return;
}



/* Entry: 100019720; end: 10001972f;  */

void FUN_100019720(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010006bdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_1000a09f0)(param_2);
    return;
  }
  return;
}



/* Entry: 100019730; end: 10001976b;  */

void FUN_100019730(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    _swift_errorRetain(uVar1);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10001976c; end: 100019783;  */

void FUN_10001976c(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010006bcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_1000a0948)();
    return;
  }
  return;
}



/* Entry: 100019784; end: 100019807;  */

ulong * FUN_100019784(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (0xfffffffe < uVar2) {
      _swift_errorRetain(uVar2);
    }
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    _swift_errorRelease();
    *param_1 = *param_2;
  }
  else {
    _swift_errorRetain(uVar2);
    uVar1 = *param_1;
    *param_1 = uVar2;
    _swift_errorRelease(uVar1);
  }
  return param_1;
}



/* Entry: 100019808; end: 100019813;  */

void FUN_100019808(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 100019814; end: 100019887;  */

ulong * FUN_100019814(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar1 < 0xffffffff) {
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    _swift_errorRelease(uVar1);
    *param_1 = uVar2;
  }
  else {
    *param_1 = uVar2;
    _swift_errorRelease(uVar1);
  }
  return param_1;
}



/* Entry: 100019888; end: 100019983;  */

int FUN_100019888(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 100019984; end: 1000199a3;  */

void FUN_100019984(void)

{
  _objc_opt_self(&PTR_PTR_1000dd7a8);
  return;
}



/* Entry: 1000199a4; end: 1000199e3;  */

void FUN_1000199a4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1000199e4; end: 1000199eb;  */

void FUN_1000199e4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    _swift_errorRetain(uVar1);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1000199ec; end: 100019a4f; -[SCNSELoggedOutAcknowledger init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000199ec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  puVar2 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
  _objc_opt_self();
  func_0x0001000739a0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(param_1 + _DAT_1000dd838) = puVar2;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 100019a50; end: 100019b83; -[SCNSELoggedOutAcknowledger didReceiveNotificationRequest:loggedOutEligible:completion:] */

void FUN_100019a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __Block_copy();
  puVar1 = &UNK_1000a17f0;
  _swift_allocObject(&UNK_1000a17f0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar2 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (uVar3,PTR___ss11AnyHashableVN_1000a0728,PTR___sypN_1000a08a0 + 8,
             PTR___ss11AnyHashableVSHsWP_1000a0730);
  _objc_release(uVar3);
  FUN_10001acac();
  uVar4 = uVar2;
  FUN_10001ad8c(uVar2,uVar3,0,0,0,param_4,0);
  _swift_bridgeObjectRelease(uVar2);
  func_0x000100019e38(uVar4,0x10001bd54,puVar1);
  _objc_release(uVar4);
  _objc_release(param_3);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 100019b84; end: 100019cc3; -[SCNSELoggedOutAcknowledger didDisplayNotificationRequest:loggedOutEligible:loggedOutHandled:completion:] */

void FUN_100019b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  __Block_copy();
  puVar1 = &UNK_1000a17c8;
  _swift_allocObject(&UNK_1000a17c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar2 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (uVar3,PTR___ss11AnyHashableVN_1000a0728,PTR___sypN_1000a08a0 + 8,
             PTR___ss11AnyHashableVSHsWP_1000a0730);
  _objc_release(uVar3);
  FUN_10001acac();
  uVar4 = uVar2;
  FUN_10001ad8c(uVar2,uVar3,1,0,0,param_4,param_5);
  _swift_bridgeObjectRelease(uVar2);
  func_0x000100019e38(uVar4,0x10001bd50,puVar1);
  _objc_release(uVar4);
  _objc_release(param_3);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 100019cc4; end: 10001a35f; -[SCNSELoggedOutAcknowledger didSuppressNotificationRequest:suppressionReason:loggedOutEligible:loggedOutHandled:completion:] */

void FUN_100019cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  __Block_copy();
  puVar1 = &UNK_1000a17a0;
  uVar5 = 0x18;
  _swift_allocObject(&UNK_1000a17a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  __s26UnifiedNotificationDefines0B23SuppressionReasonHelperCMa(0);
  _objc_retain(param_3);
  _objc_retain(param_1);
  __s26UnifiedNotificationDefines0B23SuppressionReasonHelperC010stringFromE0ySSAA0bdE0OFZ(param_4);
  uVar2 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (uVar3,PTR___ss11AnyHashableVN_1000a0728,PTR___sypN_1000a08a0 + 8,
             PTR___ss11AnyHashableVSHsWP_1000a0730);
  _objc_release(uVar3);
  FUN_10001acac();
  uVar4 = uVar2;
  FUN_10001ad8c(uVar2,uVar3,2,param_4,uVar5,param_5,param_6);
  _swift_bridgeObjectRelease(uVar2);
  func_0x000100019e38(uVar4,FUN_10001ba4c,puVar1);
  _swift_bridgeObjectRelease(uVar5);
  _objc_release(uVar4);
  _objc_release(param_3);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 10001a360; end: 10001a42b;  */

void FUN_10001a360(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_3 == 0) {
    _swift_retain(uVar2);
    _objc_retain(param_2);
    uVar5 = 0xf000000000000000;
  }
  else {
    uVar5 = param_2;
    _swift_retain(uVar2);
    _objc_retain(param_2);
    lVar3 = param_3;
    _objc_retain(param_3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
    _objc_release(lVar3);
  }
  uVar4 = param_4;
  _objc_retain(param_4);
  (*pcVar1)(param_2,param_3,uVar5,param_4);
  _objc_release(uVar4);
  func_0x00010001bca4(param_3,uVar5);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_2);
  return;
}



/* Entry: 10001a42c; end: 10001a45f;  */

void FUN_10001a42c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 10001a460; end: 10001a46f; -[SCNSELoggedOutAcknowledger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001a460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(*(undefined8 *)(param_1 + _DAT_1000dd838));
  return;
}



/* Entry: 10001a470; end: 10001a56f;  */

/* WARNING: Removing unreachable block (ram,0x00010001a564) */

undefined1  [16] FUN_10001a470(undefined8 ***param_1,ulong param_2,undefined8 param_3)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_40;
  ulong uStack_38;
  
  ppuStack_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  pppuVar1 = &ppuStack_40;
  puVar3 = PTR___sSSN_1000a0680;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            (pppuVar1,PTR___sSSN_1000a0680,PTR___sSSs25LosslessStringConvertiblesWP_1000a06a8,
             PTR___sSSSTsWP_1000a0698);
  if (((ulong)puVar3 >> 0x3c & 1) != 0) {
    puVar4 = puVar3;
    FUN_10001a7ec();
    _swift_bridgeObjectRelease(puVar3);
    puVar3 = puVar4;
  }
  if (((ulong)puVar3 >> 0x3d & 1) == 0) {
    if (((ulong)pppuVar1 >> 0x3c & 1) == 0) {
      puVar4 = puVar3;
      __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
      pppuVar2 = pppuVar1;
    }
    else {
      puVar4 = (undefined *)((ulong)pppuVar1 & 0xffffffffffff);
      pppuVar2 = (undefined8 ***)(((ulong)puVar3 & 0xfffffffffffffff) + 0x20);
    }
    FUN_10001a570(pppuVar2);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 >> 0x38 & 0xf);
    uStack_38 = (ulong)puVar3 & 0xffffffffffffff;
    pppuVar2 = &ppuStack_40;
    ppuStack_40 = pppuVar1;
    FUN_10001a570(pppuVar2,puVar4,param_3);
  }
  _swift_bridgeObjectRelease(puVar3);
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = pppuVar2;
  return auVar5;
}



/* Entry: 10001a570; end: 10001a7eb;  */

undefined1  [16] FUN_10001a570(byte *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar8 = (int)param_3;
  uVar7 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10001a7ec);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) goto LAB_10001a7dc;
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_10001a7dc;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 + (ulong)(byte)(bVar3 + cVar12),
         SCARRY8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_10001a7c0;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar8 + 0x30;
        uVar2 = 0x61;
        if (10 < param_3) {
          uVar2 = iVar8 + 0x57;
        }
        uVar5 = 0x41;
        if (10 < param_3) {
          uVar1 = 0x3a;
          uVar5 = iVar8 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar9 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar10 = (uint)bVar3;
            if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
              uVar7 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_10001a7dc;
              cVar12 = -0x57;
            }
            else {
              cVar12 = -0x37;
            }
          }
          else {
            cVar12 = -0x30;
          }
          lVar11 = uVar9 * param_3;
          if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar11 >> 0x3f) ||
             (uVar9 = lVar11 + (ulong)(byte)(bVar3 + cVar12),
             SCARRY8(lVar11,(ulong)(byte)(bVar3 + cVar12)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar9;
            return auVar15;
          }
        } while( true );
      }
LAB_10001a7c0:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10001a7e8);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) {
LAB_10001a7dc:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      return auVar4 << 0x40;
    }
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_10001a7dc;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 - (ulong)(byte)(bVar3 + cVar12),
         SBORROW8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_10001a7c0;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar9;
  return auVar14;
}



/* Entry: 10001a7ec; end: 10001a83b;  */

undefined1  [16]
FUN_10001a7ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_10001a83c(0xf,param_1,param_2);
  FUN_10001a888();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 10001a83c; end: 10001a887;  */

void FUN_10001a83c(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (param_1 >> 0xe <= uVar1 << 2) {
    uVar4 = (uint)(param_2 >> 0x3b) & 1;
    if ((param_3 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar2 = 7;
    if (uVar4 == 0) {
      uVar2 = 0xb;
    }
                    /* WARNING: Could not recover jumptable at 0x00010006b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSSySsSnySS5IndexVGcig_1000a06b8)(param_1,uVar2 | uVar1 << 0x10,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10001a888);
  (*pcVar3)();
}



/* Entry: 10001a888; end: 10001a9cb;  */

void FUN_10001a888(ulong *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_50;
  
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if ((param_3 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_3,param_4);
      }
                    /* WARNING: Could not recover jumptable at 0x00010006b41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ_1000a0640)();
      return;
    }
    uStack_60 = param_4 & 0xffffffffffffff;
    uStack_68 = param_3;
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ
              ((long)&uStack_68 + ((ulong)param_1 >> 0x10),
               (param_2 >> 0x10) - ((ulong)param_1 >> 0x10));
  }
  else {
    puVar2 = param_1;
    __sSs8UTF8ViewV8distance4from2toSiSS5IndexV_AGtF(param_1,param_2,param_1,param_2);
    puVar3 = (ulong *)PTR___swiftEmptyArrayStorage_1000a08b0;
    if (puVar2 != (ulong *)0x0) {
      puVar3 = puVar2;
      FUN_10001a9cc();
      puVar4 = &uStack_68;
      FUN_10001aa3c(puVar4,puVar3 + 4,puVar2,param_1,param_2,param_3,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(uStack_50);
      if (puVar4 != puVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10001a988);
        (*pcVar1)();
      }
    }
    __sSS18_uncheckedFromUTF8ySSSRys5UInt8VGFZ(puVar3 + 4,puVar3[2]);
    _swift_release(puVar3);
  }
  return;
}



/* Entry: 10001a9cc; end: 10001aa3b;  */

undefined * FUN_10001a9cc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_1000a08b0;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x1000dd8f8;
    FUN_1000103e0(0x1000dd8f8,&UNK_10008f7f8);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Entry: 10001aa3c; end: 10001ac33;  */

long FUN_10001aa3c(ulong *param_1,undefined1 *param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6,ulong param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 uVar11;
  ulong uVar12;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar3 = param_4;
  if (param_2 != (undefined1 *)0x0) {
    lVar7 = param_3;
    if (param_3 == 0) goto LAB_10001aa90;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10001ac34);
      (*pcVar2)();
    }
    uVar12 = param_5 >> 0xe;
    if (param_4 >> 0xe != uVar12) {
      uVar6 = (uint)(param_6 >> 0x3b) & 1;
      if ((param_7 & 0x1000000000000000) == 0) {
        uVar6 = 1;
      }
      uVar9 = 4L << uVar6;
      uVar1 = param_6 & 0xffffffffffff;
      if ((param_7 & 0x2000000000000000) != 0) {
        uVar1 = param_7 >> 0x38 & 0xf;
      }
      lVar10 = 1;
      do {
        uVar8 = uVar3 & 0xc;
        uVar4 = uVar3;
        if (uVar8 == uVar9) {
          FUN_10001ac34(uVar3,param_6,param_7);
        }
        if ((uVar4 >> 0xe < param_4 >> 0xe) || (uVar12 <= uVar4 >> 0xe)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10001ac2c);
          (*pcVar2)();
        }
        if ((param_7 >> 0x3c & 1) == 0) {
          if ((param_7 >> 0x3d & 1) != 0) {
            uStack_70 = param_6;
            uStack_68 = param_7 & 0xffffffffffffff;
            uVar11 = *(undefined1 *)((long)&uStack_70 + (uVar4 >> 0x10));
            goto joined_r0x00010001ab6c;
          }
          uVar5 = (param_7 & 0xfffffffffffffff) + 0x20;
          if ((param_6 >> 0x3c & 1) == 0) {
            uVar5 = param_6;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_6,param_7);
          }
          uVar11 = *(undefined1 *)(uVar5 + (uVar4 >> 0x10));
          if (uVar8 == uVar9) goto LAB_10001aba0;
LAB_10001ab70:
          if ((param_7 >> 0x3c & 1) == 0) goto LAB_10001ab74;
LAB_10001abb8:
          if (uVar1 <= uVar3 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10001ac30);
            (*pcVar2)();
          }
          __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar3,param_6,param_7);
        }
        else {
          __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
          uVar11 = (undefined1)uVar4;
joined_r0x00010001ab6c:
          if (uVar8 != uVar9) goto LAB_10001ab70;
LAB_10001aba0:
          FUN_10001ac34(uVar3,param_6,param_7);
          if ((param_7 >> 0x3c & 1) != 0) goto LAB_10001abb8;
LAB_10001ab74:
          uVar3 = (uVar3 & 0xffffffffffff0000) + 0x10004;
        }
        *param_2 = uVar11;
        lVar7 = param_3;
        if ((param_3 == lVar10) || (lVar7 = lVar10, uVar12 == uVar3 >> 0xe)) goto LAB_10001aa90;
        lVar10 = lVar10 + 1;
        param_2 = param_2 + 1;
      } while( true );
    }
  }
  lVar7 = 0;
LAB_10001aa90:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = param_7;
  param_1[4] = uVar3;
  return lVar7;
}



/* Entry: 10001ac34; end: 10001acab;  */

ulong FUN_10001ac34(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1 >> 0xe & 3;
  if (((param_3 >> 0x3c & 1) == 0) || ((param_2 >> 0x3b & 1) != 0)) {
    uVar1 = 0xf;
    __sSS9UTF16ViewV5index_8offsetBySS5IndexVAF_SitF(0xf,param_1 >> 0x10);
    uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 4;
  }
  else {
    uVar1 = 0xf;
    __sSS8UTF8ViewV13_foreignIndex_8offsetBySS0D0VAF_SitF(0xf);
    uVar2 = uVar1 + uVar3 * 0x10000 & 0xffffffffffff0000;
    if (uVar3 == 0) {
      uVar2 = uVar1 & 0xfffffffffffffffc | param_1 & 3;
    }
    uVar2 = uVar2 | 8;
  }
  return uVar2;
}



/* Entry: 10001acac; end: 10001ad8b;  */

long FUN_10001acac(double param_1)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  double dVar4;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000a0100)(*(undefined8 *)(lVar3 + 0x40));
  __s10Foundation4DateVACycfC(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  dVar4 = (double)(long)(param_1 * 1000.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001ad84);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar4) {
    if (dVar4 < 9.223372036854776e+18) {
      return (long)dVar4;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10001ad8c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001ad88);
  (*pcVar1)();
}



/* Entry: 10001ad8c; end: 10001ba07;  */

undefined *
FUN_10001ad8c(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
             undefined **param_5)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  byte *pbVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  ulong uStack_88;
  long lStack_78;
  
  ppuVar11 = &PTR____CFConstantStringClassReference_1000a4388;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuStack_b0 = ppuVar11;
  ppuStack_a8 = param_2;
  _swift_bridgeObjectRetain(param_2);
  ppuVar11 = (undefined **)PTR___sSSN_1000a0680;
  __ss11AnyHashableVyABxcSHRzlufC
            (&ppuStack_90,&ppuStack_b0,PTR___sSSN_1000a0680,PTR___sSSSHsWP_1000a0690);
  if (param_1[2] == (undefined *)0x0) {
LAB_10001ae44:
    uStack_f8 = 0;
    puStack_100 = (undefined *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    pppuVar4 = &ppuStack_90;
    FUN_100010aa4(pppuVar4);
    if (((ulong)ppuVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10001ae44;
    }
    ppuVar11 = &puStack_100;
    FUN_100012008(param_1[7] + (long)pppuVar4 * 0x20);
    _swift_bridgeObjectRelease(param_2);
    param_2 = param_1;
  }
  _swift_bridgeObjectRelease(param_2);
  FUN_100010e28(&ppuStack_90);
  ppuVar15 = &PTR____CFConstantStringClassReference_1000a3a28;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuStack_b0 = ppuVar15;
  ppuStack_a8 = ppuVar11;
  _swift_bridgeObjectRetain(ppuVar11);
  ppuVar15 = (undefined **)PTR___sSSN_1000a0680;
  __ss11AnyHashableVyABxcSHRzlufC
            (&ppuStack_90,&ppuStack_b0,PTR___sSSN_1000a0680,PTR___sSSSHsWP_1000a0690);
  if (param_1[2] == (undefined *)0x0) {
LAB_10001aed8:
    uStack_118 = 0;
    puStack_120 = (undefined *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    pppuVar4 = &ppuStack_90;
    FUN_100010aa4(pppuVar4);
    if (((ulong)ppuVar15 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10001aed8;
    }
    ppuVar15 = &puStack_120;
    FUN_100012008(param_1[7] + (long)pppuVar4 * 0x20);
    _swift_bridgeObjectRelease(ppuVar11);
    ppuVar11 = param_1;
  }
  _swift_bridgeObjectRelease(ppuVar11);
  FUN_100010e28(&ppuStack_90);
  ppuVar11 = &PTR____CFConstantStringClassReference_1000a4968;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuStack_b0 = ppuVar11;
  ppuStack_a8 = ppuVar15;
  _swift_bridgeObjectRetain(ppuVar15);
  ppuVar11 = (undefined **)PTR___sSSN_1000a0680;
  __ss11AnyHashableVyABxcSHRzlufC
            (&ppuStack_90,&ppuStack_b0,PTR___sSSN_1000a0680,PTR___sSSSHsWP_1000a0690);
  if (param_1[2] == (undefined *)0x0) {
LAB_10001af6c:
    uStack_138 = 0;
    puStack_140 = (undefined *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    pppuVar4 = &ppuStack_90;
    FUN_100010aa4(pppuVar4);
    if (((ulong)ppuVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10001af6c;
    }
    ppuVar11 = &puStack_140;
    FUN_100012008(param_1[7] + (long)pppuVar4 * 0x20);
    _swift_bridgeObjectRelease(ppuVar15);
    ppuVar15 = param_1;
  }
  _swift_bridgeObjectRelease(ppuVar15);
  FUN_100010e28(&ppuStack_90);
  ppuVar15 = &PTR____CFConstantStringClassReference_1000a4308;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuStack_b0 = ppuVar15;
  ppuStack_a8 = ppuVar11;
  _swift_bridgeObjectRetain(ppuVar11);
  puVar9 = PTR___sSSN_1000a0680;
  __ss11AnyHashableVyABxcSHRzlufC
            (&ppuStack_90,&ppuStack_b0,PTR___sSSN_1000a0680,PTR___sSSSHsWP_1000a0690);
  if (param_1[2] == (undefined *)0x0) {
LAB_10001b000:
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    pppuVar4 = &ppuStack_90;
    FUN_100010aa4(pppuVar4);
    if (((ulong)puVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10001b000;
    }
    FUN_100012008(param_1[7] + (long)pppuVar4 * 0x20,&uStack_160);
    _swift_bridgeObjectRelease(ppuVar11);
    ppuVar11 = param_1;
  }
  _swift_bridgeObjectRelease(ppuVar11);
  pppuVar4 = &ppuStack_90;
  FUN_100010e28();
  __s26UnifiedNotificationDefines0B16ServerPayloadKeyC4typeSSvau();
  ppuStack_b0 = *pppuVar4;
  ppuVar15 = pppuVar4[1];
  ppuStack_a8 = ppuVar15;
  _swift_bridgeObjectRetain_n(ppuVar15,2);
  ppuVar11 = (undefined **)PTR___sSSN_1000a0680;
  __ss11AnyHashableVyABxcSHRzlufC
            (&ppuStack_90,&ppuStack_b0,PTR___sSSN_1000a0680,PTR___sSSSHsWP_1000a0690);
  if (param_1[2] == (undefined *)0x0) {
LAB_10001b090:
    uStack_178 = 0;
    puStack_180 = (undefined *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    pppuVar4 = &ppuStack_90;
    FUN_100010aa4(pppuVar4);
    if (((ulong)ppuVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10001b090;
    }
    ppuVar11 = &puStack_180;
    FUN_100012008(param_1[7] + (long)pppuVar4 * 0x20);
    _swift_bridgeObjectRelease(ppuVar15);
    ppuVar15 = param_1;
  }
  _swift_bridgeObjectRelease(ppuVar15);
  FUN_100010e28(&ppuStack_90);
  ppuVar15 = &PTR____CFConstantStringClassReference_1000a4988;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuStack_b0 = ppuVar15;
  ppuStack_a8 = ppuVar11;
  _swift_bridgeObjectRetain(ppuVar11);
  puVar9 = PTR___sSSN_1000a0680;
  __ss11AnyHashableVyABxcSHRzlufC
            (&ppuStack_90,&ppuStack_b0,PTR___sSSN_1000a0680,PTR___sSSSHsWP_1000a0690);
  if (param_1[2] == (undefined *)0x0) {
LAB_10001b124:
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    pppuVar4 = &ppuStack_90;
    FUN_100010aa4(pppuVar4);
    if (((ulong)puVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10001b124;
    }
    FUN_100012008(param_1[7] + (long)pppuVar4 * 0x20,&uStack_1a0);
    _swift_bridgeObjectRelease(ppuVar11);
    ppuVar11 = param_1;
  }
  _swift_bridgeObjectRelease(ppuVar11);
  FUN_100010e28(&ppuStack_90);
  puVar5 = PTR__OBJC_CLASS___SCPushNotificationAckNotificationRequest_1000d1e60;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCPushNotificationAckNotificationRequest_1000d1e60);
  func_0x00010006ff60();
  FUN_10001bcb8(&puStack_140,&ppuStack_90);
  puVar9 = PTR___sypN_1000a08a0;
  if (lStack_78 == 0) {
    func_0x00010001bd08(&ppuStack_90,0x1000dd0e8,&UNK_10008efc0);
LAB_10001b1a8:
    FUN_10001bcb8(&puStack_120,&ppuStack_90);
    if (lStack_78 == 0) {
      func_0x00010001bd08(&ppuStack_90,0x1000dd0e8,&UNK_10008efc0);
    }
    else {
      pppuVar4 = &ppuStack_b0;
      _swift_dynamicCast(pppuVar4,&ppuStack_90,puVar9 + 8,PTR___sSSN_1000a0680,6);
      if (((ulong)pppuVar4 & 1) != 0) goto LAB_10001b1dc;
    }
    ppuVar11 = (undefined **)0x0;
  }
  else {
    pppuVar4 = &ppuStack_b0;
    _swift_dynamicCast(pppuVar4,&ppuStack_90,PTR___sypN_1000a08a0 + 8,PTR___sSSN_1000a0680,6);
    if (((ulong)pppuVar4 & 1) == 0) goto LAB_10001b1a8;
LAB_10001b1dc:
    ppuVar15 = ppuStack_a8;
    ppuVar11 = ppuStack_b0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuStack_b0,ppuStack_a8);
    _swift_bridgeObjectRelease(ppuVar15);
  }
  func_0x0001000732e0(puVar5);
  _objc_release(ppuVar11);
  FUN_10001bcb8(&uStack_1a0,&ppuStack_90);
  if (lStack_78 == 0) {
    func_0x00010001bd08(&ppuStack_90,0x1000dd0e8,&UNK_10008efc0);
LAB_10001b290:
    ppuVar15 = (undefined **)0x0;
  }
  else {
    pppuVar4 = &ppuStack_b0;
    _swift_dynamicCast(pppuVar4,&ppuStack_90,puVar9 + 8,PTR___sSSN_1000a0680,6);
    ppuVar11 = ppuStack_a8;
    if (((ulong)pppuVar4 & 1) == 0) goto LAB_10001b290;
    ppuVar15 = ppuStack_b0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuStack_b0,ppuStack_a8);
    _swift_bridgeObjectRelease(ppuVar11);
  }
  func_0x0001000735e0(puVar5);
  _objc_release(ppuVar15);
  FUN_10001bcb8(&puStack_100,&ppuStack_90);
  if (lStack_78 == 0) {
    func_0x00010001bd08(&ppuStack_90,0x1000dd0e8,&UNK_10008efc0);
LAB_10001b2fc:
    FUN_10001bcb8(&puStack_100,&ppuStack_90);
    if (lStack_78 == 0) {
      func_0x00010001bd08(&ppuStack_90,0x1000dd0e8,&UNK_10008efc0);
    }
    else {
      pppuVar4 = &ppuStack_b0;
      _swift_dynamicCast(pppuVar4,&ppuStack_90,puVar9 + 8,PTR___sSSN_1000a0680,6);
      ppuVar11 = ppuStack_a8;
      if (((ulong)pppuVar4 & 1) != 0) {
        ppuVar10 = (undefined **)((ulong)ppuStack_b0 & 0xffffffffffff);
        ppuVar12 = (undefined **)((ulong)ppuStack_a8 >> 0x38 & 0xf);
        ppuVar15 = ppuVar10;
        if (((ulong)ppuStack_a8 & 0x2000000000000000) != 0) {
          ppuVar15 = ppuVar12;
        }
        if (ppuVar15 == (undefined **)0x0) {
          _swift_bridgeObjectRelease();
        }
        else {
          if (((ulong)ppuStack_a8 >> 0x3c & 1) == 0) {
            if (((ulong)ppuStack_a8 >> 0x3d & 1) == 0) {
              if (((ulong)ppuStack_b0 >> 0x3c & 1) == 0) {
                ppuVar15 = ppuStack_b0;
                ppuVar10 = ppuStack_a8;
                __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
              }
              else {
                ppuVar15 = (undefined **)(((ulong)ppuStack_a8 & 0xfffffffffffffff) + 0x20);
              }
              if (*(char *)ppuVar15 == '+') {
                if ((long)ppuVar10 < 1) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10001ba04);
                  (*pcVar3)();
                }
                lVar17 = (long)ppuVar10 + -1;
                if (lVar17 != 0) {
                  lVar16 = 0;
                  do {
                    ppuVar15 = (undefined **)((long)ppuVar15 + 1);
                    if (((9 < *(byte *)ppuVar15 - 0x30) ||
                        (lVar14 = lVar16 * 10,
                        SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
                       (uVar1 = (ulong)(byte)(*(byte *)ppuVar15 - 0x30), lVar16 = lVar14 + uVar1,
                       SCARRY8(lVar14,uVar1))) break;
                    lVar17 = lVar17 + -1;
                  } while (lVar17 != 0);
                }
              }
              else if (*(char *)ppuVar15 == '-') {
                if ((long)ppuVar10 < 1) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10001b9fc);
                  (*pcVar3)();
                }
                lVar17 = (long)ppuVar10 + -1;
                if (lVar17 != 0) {
                  lVar16 = 0;
                  while( true ) {
                    ppuVar15 = (undefined **)((long)ppuVar15 + 1);
                    if ((9 < *(byte *)ppuVar15 - 0x30) ||
                       (lVar14 = lVar16 * 10,
                       SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar14 >> 0x3f)) break;
                    uVar1 = (ulong)(byte)(*(byte *)ppuVar15 - 0x30);
                    lVar16 = lVar14 - uVar1;
                    if ((SBORROW8(lVar14,uVar1)) || (lVar17 = lVar17 + -1, lVar17 == 0)) break;
                  }
                }
              }
              else if (ppuVar10 != (undefined **)0x0) {
                lVar17 = 0;
                ppuVar12 = ppuVar15;
                while (ppuVar12 != (undefined **)0x0) {
                  if (((9 < *(byte *)ppuVar15 - 0x30) ||
                      (lVar16 = lVar17 * 10,
                      SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                     (uVar1 = (ulong)(byte)(*(byte *)ppuVar15 - 0x30), lVar17 = lVar16 + uVar1,
                     SCARRY8(lVar16,uVar1))) break;
                  ppuVar10 = (undefined **)((long)ppuVar10 + -1);
                  ppuVar15 = (undefined **)((long)ppuVar15 + 1);
                  ppuVar12 = ppuVar10;
                }
              }
            }
            else {
              ppuStack_90 = ppuStack_b0;
              uStack_88 = (ulong)ppuStack_a8 & 0xffffffffffffff;
              uVar2 = (uint)ppuStack_b0 & 0xff;
              if (uVar2 == 0x2b) {
                if (ppuVar12 == (undefined **)0x0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10001ba08);
                  (*pcVar3)();
                }
                lVar17 = (long)ppuVar12 + -1;
                if (lVar17 != 0) {
                  lVar16 = 0;
                  pbVar13 = (byte *)((ulong)&ppuStack_90 | 1);
                  do {
                    if (((9 < *pbVar13 - 0x30) ||
                        (lVar14 = lVar16 * 10,
                        SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar14 >> 0x3f)) ||
                       (uVar1 = (ulong)(byte)(*pbVar13 - 0x30), lVar16 = lVar14 + uVar1,
                       SCARRY8(lVar14,uVar1))) break;
                    lVar17 = lVar17 + -1;
                    pbVar13 = pbVar13 + 1;
                  } while (lVar17 != 0);
                }
              }
              else if (uVar2 == 0x2d) {
                if (ppuVar12 == (undefined **)0x0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10001ba00);
                  (*pcVar3)();
                }
                lVar17 = (long)ppuVar12 + -1;
                if (lVar17 != 0) {
                  lVar16 = 0;
                  pbVar13 = (byte *)((ulong)&ppuStack_90 | 1);
                  while( true ) {
                    if ((9 < *pbVar13 - 0x30) ||
                       (lVar14 = lVar16 * 10,
                       SUB168(SEXT816(lVar16) * SEXT816(10),8) != lVar14 >> 0x3f)) break;
                    uVar1 = (ulong)(byte)(*pbVar13 - 0x30);
                    lVar16 = lVar14 - uVar1;
                    if ((SBORROW8(lVar14,uVar1)) ||
                       (lVar17 = lVar17 + -1, pbVar13 = pbVar13 + 1, lVar17 == 0)) break;
                  }
                }
              }
              else if (ppuVar12 != (undefined **)0x0) {
                lVar17 = 0;
                pppuVar4 = &ppuStack_90;
                while( true ) {
                  if ((9 < *(byte *)pppuVar4 - 0x30) ||
                     (lVar16 = lVar17 * 10,
                     SUB168(SEXT816(lVar17) * SEXT816(10),8) != lVar16 >> 0x3f)) break;
                  uVar1 = (ulong)(byte)(*(byte *)pppuVar4 - 0x30);
                  lVar17 = lVar16 + uVar1;
                  if ((SCARRY8(lVar16,uVar1)) ||
                     (ppuVar12 = (undefined **)((long)ppuVar12 + -1),
                     pppuVar4 = (undefined ***)((long)pppuVar4 + 1), ppuVar12 == (undefined **)0x0))
                  break;
                }
              }
            }
          }
          else {
            FUN_10001a470(ppuStack_b0,ppuStack_a8,10);
          }
          _swift_bridgeObjectRelease(ppuVar11);
        }
      }
    }
  }
  else {
    pppuVar4 = &ppuStack_b0;
    _swift_dynamicCast(pppuVar4,&ppuStack_90,puVar9 + 8,PTR___ss5Int64VN_1000a0828,6);
    if ((int)pppuVar4 == 0) goto LAB_10001b2fc;
  }
  func_0x000100073600(puVar5);
  func_0x000100072a20(puVar5);
  puVar6 = PTR__OBJC_CLASS___GPBBoolValue_1000d1e68;
  _objc_allocWithZone(PTR__OBJC_CLASS___GPBBoolValue_1000d1e68);
  func_0x00010006ff60();
  func_0x000100073820();
  func_0x000100072fe0(puVar5);
  _objc_release(puVar6);
  FUN_10001bcb8(&puStack_180,&ppuStack_90);
  if (lStack_78 == 0) {
    func_0x00010001bd08(&ppuStack_90,0x1000dd0e8,&UNK_10008efc0);
LAB_10001b66c:
    ppuVar15 = (undefined **)0x0;
  }
  else {
    pppuVar4 = &ppuStack_b0;
    _swift_dynamicCast(pppuVar4,&ppuStack_90,puVar9 + 8,PTR___sSSN_1000a0680,6);
    ppuVar11 = ppuStack_a8;
    if (((ulong)pppuVar4 & 1) == 0) goto LAB_10001b66c;
    ppuVar15 = ppuStack_b0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuStack_b0,ppuStack_a8);
    _swift_bridgeObjectRelease(ppuVar11);
  }
  func_0x000100073460(puVar5);
  _objc_release(ppuVar15);
  FUN_10001bcb8(&uStack_160,&ppuStack_90);
  if (lStack_78 == 0) {
    func_0x00010001bd08(&ppuStack_90,0x1000dd0e8,&UNK_10008efc0);
LAB_10001b6ec:
    ppuVar15 = (undefined **)0x0;
  }
  else {
    pppuVar4 = &ppuStack_b0;
    _swift_dynamicCast(pppuVar4,&ppuStack_90,puVar9 + 8,PTR___sSSN_1000a0680,6);
    ppuVar11 = ppuStack_a8;
    if (((ulong)pppuVar4 & 1) == 0) goto LAB_10001b6ec;
    ppuVar15 = ppuStack_b0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuStack_b0,ppuStack_a8);
    _swift_bridgeObjectRelease(ppuVar11);
  }
  func_0x000100073780(puVar5);
  _objc_release(ppuVar15);
  puVar6 = PTR__OBJC_CLASS___GPBBoolValue_1000d1e68;
  _objc_allocWithZone(PTR__OBJC_CLASS___GPBBoolValue_1000d1e68);
  func_0x00010006ff60();
  func_0x000100073820();
  func_0x0001000736e0(puVar5);
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___GPBBoolValue_1000d1e68;
  _objc_allocWithZone(PTR__OBJC_CLASS___GPBBoolValue_1000d1e68);
  func_0x00010006ff60();
  func_0x000100073820();
  func_0x000100072f80(puVar5);
  _objc_release(puVar6);
  func_0x000100072a00(puVar5);
  func_0x000100072e40(puVar5);
  uVar7 = 0;
  ppuVar11 = (undefined **)0xe000000000000000;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0);
  func_0x000100072e60(puVar5);
  _objc_release(uVar7);
  uVar7 = 0;
  if (param_5 != (undefined **)0x0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4);
    ppuVar11 = param_5;
    uVar7 = param_4;
  }
  func_0x0001000736a0(puVar5);
  _objc_release(uVar7);
  func_0x000100072c80(puVar5);
  ppuVar15 = &PTR____CFConstantStringClassReference_1000a39a8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuStack_b0 = ppuVar15;
  ppuStack_a8 = ppuVar11;
  _swift_bridgeObjectRetain(ppuVar11);
  puVar6 = PTR___sSSN_1000a0680;
  __ss11AnyHashableVyABxcSHRzlufC
            (&ppuStack_90,&ppuStack_b0,PTR___sSSN_1000a0680,PTR___sSSSHsWP_1000a0690);
  if (param_1[2] != (undefined *)0x0) {
    _swift_bridgeObjectRetain(param_1);
    pppuVar4 = &ppuStack_90;
    FUN_100010aa4(pppuVar4);
    if (((ulong)puVar6 & 1) != 0) {
      FUN_100012008(param_1[7] + (long)pppuVar4 * 0x20,&ppuStack_b0);
      _swift_bridgeObjectRelease(ppuVar11);
      ppuVar11 = param_1;
      goto LAB_10001b850;
    }
    _swift_bridgeObjectRelease(param_1);
  }
  ppuStack_a8 = (undefined **)0x0;
  ppuStack_b0 = (undefined **)0x0;
  lStack_98 = 0;
  uStack_a0 = 0;
LAB_10001b850:
  _swift_bridgeObjectRelease(ppuVar11);
  FUN_100010e28(&ppuStack_90);
  ppuStack_c8 = ppuStack_a8;
  ppuStack_d0 = ppuStack_b0;
  lStack_b8 = lStack_98;
  uStack_c0 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010001bd08(&ppuStack_d0,0x1000dd0e8,&UNK_10008efc0);
  }
  else {
    puVar8 = &uStack_e0;
    _swift_dynamicCast(puVar8,&ppuStack_d0,puVar9 + 8,PTR___sSSN_1000a0680,6);
    if (((ulong)puVar8 & 1) != 0) {
      __sSS5countSivg(uStack_e0,uStack_d8);
      _swift_bridgeObjectRelease(uStack_d8);
    }
  }
  puVar9 = PTR__OBJC_CLASS___GPBBoolValue_1000d1e68;
  _objc_allocWithZone(PTR__OBJC_CLASS___GPBBoolValue_1000d1e68);
  func_0x00010006ff60();
  func_0x000100073820();
  func_0x000100073140(puVar5);
  _objc_release(puVar9);
  func_0x000100073160(puVar5);
  func_0x000100073180(puVar5);
  func_0x00010001bd08(&uStack_1a0,0x1000dd0e8,&UNK_10008efc0);
  func_0x00010001bd08(&puStack_180,0x1000dd0e8,&UNK_10008efc0);
  func_0x00010001bd08(&uStack_160,0x1000dd0e8,&UNK_10008efc0);
  func_0x00010001bd08(&puStack_140,0x1000dd0e8,&UNK_10008efc0);
  func_0x00010001bd08(&puStack_120,0x1000dd0e8,&UNK_10008efc0);
  func_0x00010001bd08(&puStack_100,0x1000dd0e8,&UNK_10008efc0);
  return puVar5;
}



/* Entry: 10001ba08; end: 10001ba4b;  */

void FUN_10001ba08(void)

{
  _objc_opt_self(&PTR_PTR_1000d37d8);
  return;
}



/* Entry: 10001ba4c; end: 10001ba57;  */

void FUN_10001ba4c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010001ba54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10001ba58; end: 10001bb67;  */

undefined * FUN_10001ba58(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_1000a08b8;
  if (puVar11 != (undefined *)0x0) {
    FUN_1000103e0(0x1000dd8f0,&UNK_10008f7e8);
    puVar8 = puVar11;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar12 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar12[-3];
      uVar5 = puVar12[-2];
      uVar4 = puVar12[-1];
      uVar6 = *puVar12;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_100015f94();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10001bb64);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10001bb68);
        (*pcVar7)();
      }
      puVar12 = puVar12 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar11 = puVar11 + -1;
    } while (puVar11 != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Entry: 10001bb68; end: 10001bb8b;  */

void FUN_10001bb68(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 10001bb8c; end: 10001bc87;  */

void FUN_10001bb8c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_x3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (in_x3 == 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x80000001000934d0);
    _objc_release();
  }
  else {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    _swift_errorRetain(in_x3);
    __ss11_StringGutsV4growyySiF(0x31);
    _swift_bridgeObjectRelease(uStack_68);
    uStack_50 = 0xd00000000000002f;
    uStack_48 = 0x8000000100093510;
    _swift_getErrorValue(in_x3,auStack_58,&uStack_70);
    uVar3 = uStack_60;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_68,uStack_60);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = uStack_48;
    uVar2 = uStack_50;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_50,uStack_48);
    _swift_bridgeObjectRelease(uVar3);
    _objc_release(uVar2);
    _swift_errorRelease(in_x3);
  }
  (*pcVar1)();
  return;
}



/* Entry: 10001bc88; end: 10001bcb7;  */

void FUN_10001bc88(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010006bdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_1000a09f0)(uVar1);
  return;
}



/* Entry: 10001bcb8; end: 10001bd47;  */

undefined8 FUN_10001bcb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1000dd0e8;
  FUN_1000103e0(0x1000dd0e8,&UNK_10008efc0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10001bd48; end: 10001bd57;  */

void FUN_10001bd48(void)

{
  long unaff_x20;
  
  __Block_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 10001bd58; end: 10001be1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001bd58(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  lVar1 = _DAT_1000dd900;
  uVar2 = 0;
  __s17SwiftSCObservable27DisposableObserverLifecycleCMa();
  _swift_allocObject();
  __s17SwiftSCObservable27DisposableObserverLifecycleCACycfc();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_1000dd908) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1000dd910) = param_2;
  dVar3 = (double)param_3;
  if (param_3 < 1) {
    dVar3 = 10.0;
  }
  *(double *)(unaff_x20 + _DAT_1000dd918) = dVar3;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 10001be1c; end: 10001bef3; -[SCNSENativeAckTaskHandler initWithEventHolder:ackReporter:ackWaitCapSecs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001be1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar1 = _DAT_1000dd900;
  __s17SwiftSCObservable27DisposableObserverLifecycleCMa(0);
  _swift_allocObject();
  _objc_retain();
  uVar3 = param_4;
  _objc_retain();
  __s17SwiftSCObservable27DisposableObserverLifecycleCACycfc();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  *(undefined8 *)(param_1 + _DAT_1000dd908) = param_3;
  *(undefined8 *)(param_1 + _DAT_1000dd910) = param_4;
  dVar4 = (double)param_5;
  if (param_5 < 1) {
    dVar4 = 10.0;
  }
  *(double *)(param_1 + _DAT_1000dd918) = dVar4;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 10001bef4; end: 10001c2f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001bef4(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  code *pcVar11;
  long *plVar12;
  undefined *puVar13;
  long unaff_x20;
  code *pcVar14;
  undefined8 uVar15;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  ppuVar6 = &puStack_d0;
  ppuVar10 = &puStack_d0;
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100072a40(*(undefined8 *)(unaff_x20 + _DAT_1000dd908));
  lVar3 = *(long *)(unaff_x20 + _DAT_1000dd910);
  if (lVar3 == 0) {
LAB_10001c038:
    (*param_2)();
    return;
  }
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) goto LAB_10001c038;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar13 = PTR___sypN_1000a08a0;
  puVar5 = puVar4;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (puVar4,PTR___ss11AnyHashableVN_1000a0728,PTR___sypN_1000a08a0 + 8,
             PTR___ss11AnyHashableVSHsWP_1000a0730);
  _objc_release();
  __s26UnifiedNotificationDefines0B16ServerPayloadKeyC2idSSvau();
  uStack_a0 = *puVar4;
  puVar4 = (undefined8 *)puVar4[1];
  puStack_98 = puVar4;
  _swift_bridgeObjectRetain_n(puVar4,2);
  puVar8 = PTR___sSSN_1000a0680;
  __ss11AnyHashableVyABxcSHRzlufC
            (&puStack_d0,&uStack_a0,PTR___sSSN_1000a0680,PTR___sSSSHsWP_1000a0690);
  if (puVar5[2] != 0) {
    _swift_bridgeObjectRetain(puVar5);
    FUN_100010aa4(&puStack_d0);
    if (((ulong)puVar8 & 1) != 0) {
      FUN_100012008(puVar5[7] + (long)ppuVar6 * 0x20,&uStack_90);
      _swift_bridgeObjectRelease(puVar4);
      puVar4 = puVar5;
      goto LAB_10001c054;
    }
    _swift_bridgeObjectRelease(puVar5);
  }
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
LAB_10001c054:
  _swift_bridgeObjectRelease(puVar4);
  _swift_bridgeObjectRelease(puVar5);
  FUN_100010e28(&puStack_d0);
  if (lStack_78 == 0) {
    func_0x000100010e5c(&uStack_90);
  }
  else {
    puVar4 = &uStack_a0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar13 + 8,PTR___sSSN_1000a0680,6);
    puVar5 = puStack_98;
    uVar1 = uStack_a0;
    if (((ulong)puVar4 & 1) != 0) {
      uVar15 = *(undefined8 *)(unaff_x20 + _DAT_1000dd918);
      puVar13 = &UNK_1000a18e8;
      puVar7 = puVar13;
      _swift_allocObject(&UNK_1000a18e8,0x18,7);
      _swift_unknownObjectWeakInit(puVar7 + 0x10);
      puVar8 = &UNK_1000a1910;
      _swift_allocObject(&UNK_1000a1910,0x48,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar15;
      *(undefined8 *)(puVar8 + 0x18) = uVar1;
      *(undefined8 **)(puVar8 + 0x20) = puVar5;
      *(undefined **)(puVar8 + 0x28) = puVar7;
      *(code **)(puVar8 + 0x30) = param_2;
      *(undefined8 *)(puVar8 + 0x38) = param_3;
      *(long *)(puVar8 + 0x40) = lVar2;
      puVar9 = PTR_PTR_1000d1ba8;
      _objc_allocWithZone();
      pcStack_b0 = FUN_10001c498;
      puStack_d0 = PTR___NSConcreteStackBlock_1000a00f0;
      uStack_c8 = 0x42000000;
      pcStack_c0 = FUN_10001c404;
      puStack_b8 = &UNK_1000a1928;
      puStack_a8 = puVar8;
      __Block_copy(&puStack_d0);
      _swift_bridgeObjectRetain(puVar5);
      _swift_retain(puVar7);
      _swift_retain(param_3);
      func_0x000100070200(uVar15);
      __Block_release(ppuVar10);
      puVar8 = puStack_a8;
      _swift_release(puVar7);
      _swift_release(puVar8);
      puVar7 = puVar9;
      func_0x000100073d00(puVar9);
      __s18SCNSENativeHandler20NSENativeAckDelegateC03getD20CompletionObservable17SwiftSCObservable0H0CyAA0cD5EventCGyF
                ();
      puVar8 = &UNK_1000a1960;
      _swift_allocObject(&UNK_1000a1960,0x20,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar1;
      *(undefined8 **)(puVar8 + 0x18) = puVar5;
      pcVar11 = FUN_10001c72c;
      __s17SwiftSCObservable10ObservableC6filteryACyxGSbxcF(FUN_10001c72c,puVar8);
      _swift_release(puVar7);
      _swift_release(puVar8);
      plVar12 = (long *)0x1;
      __s17SwiftSCObservable10ObservableC4takeyACyxGSiF();
      _swift_release(pcVar11);
      _swift_allocObject(&UNK_1000a18e8,0x18,7);
      _swift_unknownObjectWeakInit(puVar13 + 0x10);
      puVar8 = &UNK_1000a1988;
      _swift_allocObject(&UNK_1000a1988,0x20,7);
      *(undefined **)(puVar8 + 0x10) = puVar13;
      *(undefined **)(puVar8 + 0x18) = puVar9;
      pcVar14 = *(code **)(*plVar12 + 0x60);
      _objc_retain(puVar9);
      pcVar11 = FUN_10001c790;
      puVar13 = puVar8;
      (*pcVar14)(FUN_10001c790);
      _swift_release(plVar12);
      _swift_release(puVar8);
      pcVar14 = pcVar11;
      _swift_getObjectType(pcVar11);
      (**(code **)(puVar13 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_1000dd900),pcVar14,puVar13);
      _objc_release(lVar3);
      _objc_release(puVar9);
      _swift_unknownObjectRelease(pcVar11);
      return;
    }
  }
  (*param_2)();
  _objc_release(lVar3);
  return;
}



/* Entry: 10001c2f8; end: 10001c387; -[SCNSENativeAckTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_10001c2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  __Block_copy();
  puVar1 = &UNK_1000a19b0;
  _swift_allocObject(&UNK_1000a19b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10001bef4(param_3,FUN_10001c93c,puVar1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(puVar1);
  return;
}



/* Entry: 10001c388; end: 10001c3bb;  */

void FUN_10001c388(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 10001c3bc; end: 10001c403; -[SCNSENativeAckTaskHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c3bc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1000dd908));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1000dd910));
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(*(undefined8 *)(param_1 + _DAT_1000dd900));
  return;
}



/* Entry: 10001c404; end: 10001c43f;  */

void FUN_10001c404(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(uVar2);
  return;
}



/* Entry: 10001c440; end: 10001c497;  */

void FUN_10001c440(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 10001c498; end: 10001c6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c498(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  pcVar1 = *(code **)(unaff_x20 + 0x30);
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x39);
  uStack_98 = uStack_80;
  uStack_90 = uStack_78;
  __sSS6appendyySSF(0xd00000000000002f,0x8000000100093590);
  if ((param_1 & 1) == 0) {
    __sSS6appendyySSF(0x6574656c706d6f63,0xe900000000000064);
    _swift_bridgeObjectRelease(0xe900000000000064);
    __sSS6appendyySSF(0x3d64695f6e20,0xe600000000000000);
    __sSS6appendyySSF(uVar3,uVar4);
    uVar3 = uStack_90;
    uVar4 = uStack_98;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_98,uStack_90);
    _swift_bridgeObjectRelease(uVar3);
  }
  else {
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x13);
    __sSS6appendyySSF(0xd000000000000010,0x80000001000935f0);
    __sSd5write2toyxz_ts16TextOutputStreamRzlF
              (uVar5,&uStack_80,PTR___ss26DefaultStringInterpolationVN_1000a0800,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000a0808);
    __sSS6appendyySSF(0x73,0xe100000000000000);
    uVar5 = uStack_78;
    __sSS6appendyySSF(uStack_80,uStack_78);
    _swift_bridgeObjectRelease(uVar5);
    __sSS6appendyySSF(0x3d64695f6e20,0xe600000000000000);
    __sSS6appendyySSF(uVar3,uVar4);
    uVar3 = uStack_90;
    uVar4 = uStack_98;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_98,uStack_90);
    _swift_bridgeObjectRelease(uVar3);
    _objc_release(uVar4);
    _swift_beginAccess(lVar2 + 0x10,&uStack_98,0,0);
    lVar2 = lVar2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 == 0) goto LAB_10001c6c0;
    uVar4 = *(undefined8 *)(lVar2 + _DAT_1000dd908);
    _objc_retain(uVar4);
    _objc_release(lVar2);
    uVar3 = 0xd000000000000023;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x80000001000935c0);
    func_0x000100072a60(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
LAB_10001c6c0:
  (*pcVar1)();
  return;
}



/* Entry: 10001c6ec; end: 10001c707;  */

void FUN_10001c6ec(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010006bdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_1000a09f0)(uVar1);
  return;
}



/* Entry: 10001c708; end: 10001c72b;  */

void FUN_10001c708(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 10001c72c; end: 10001c763;  */

long FUN_10001c72c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*param_1 +
                   *(long *)
                    PTR___s18SCNSENativeHandler17NSENativeAckEventC14notificationIdSSvpWvd_1000a0318
                   );
  if (lVar1 != *(long *)(unaff_x20 + 0x10) ||
      ((long *)(*param_1 +
               *(long *)
                PTR___s18SCNSENativeHandler17NSENativeAckEventC14notificationIdSSvpWvd_1000a0318))
      [1] != *(long *)(unaff_x20 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00010006b620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_1000a0810
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 10001c764; end: 10001c78f;  */

void FUN_10001c764(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010006bc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000a0920)();
  return;
}



/* Entry: 10001c790; end: 10001c8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001c790(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *param_1;
  _swift_beginAccess(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 == 0) goto LAB_10001c8d8;
  lVar4 = *(long *)(lVar4 + *(long *)
                             PTR___s18SCNSENativeHandler17NSENativeAckEventC6resultSo016SCNNotificationsD6ResultVvpWvd_1000a0320
                   );
  if (lVar4 < 2) {
    if (lVar4 != 0) {
      if (lVar4 == 1) {
        uVar5 = 0xee00747365757165;
        uVar3 = 0x5264696c61766e69;
      }
      else {
LAB_10001c880:
        uVar5 = 0xe700000000000000;
        uVar3 = 0x6e776f6e6b6e75;
      }
      goto LAB_10001c894;
    }
  }
  else {
    if (lVar4 == 4) {
      uVar5 = 0xe700000000000000;
      uVar3 = 0x64657070696b73;
    }
    else if (lVar4 == 3) {
      uVar5 = 0xe700000000000000;
      uVar3 = 0x74756f656d6974;
    }
    else {
      if (lVar4 != 2) goto LAB_10001c880;
      uVar5 = 0xec000000726f7272;
      uVar3 = 0x456b726f7774656e;
    }
LAB_10001c894:
    uVar6 = *(undefined8 *)(lVar2 + _DAT_1000dd908);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar5);
    _swift_bridgeObjectRelease(uVar5);
    func_0x000100072a60(uVar6);
    _objc_release(lVar2);
  }
  _objc_release();
LAB_10001c8d8:
  func_0x00010006e580(uVar1);
  return;
}



/* Entry: 10001c8f8; end: 10001c93b;  */

void FUN_10001c8f8(void)

{
  _objc_opt_self(&PTR_PTR_1000d3890);
  return;
}



/* Entry: 10001c93c; end: 10001c947;  */

void FUN_10001c93c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010001c944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10001c948; end: 10001c983; -[_TtC26NotificationPayloadLogging25NotificationPayloadLogger init] */

void FUN_10001c948(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  return;
}



/* Entry: 10001c984; end: 10001cf33;  */

void FUN_10001c984(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_160 [104];
  ulong uStack_f8;
  undefined8 *apuStack_f0 [18];
  
  __s26UnifiedNotificationDefines0B16ServerPayloadKeyC05titleF0SSvau();
  uStack_f8 = *param_1;
  puVar7 = (undefined8 *)param_1[1];
  apuStack_f0[0] = puVar7;
  _swift_bridgeObjectRetain();
  __s26UnifiedNotificationDefines0B16ServerPayloadKeyC08subtitleF0SSvau();
  apuStack_f0[1] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[2] = puVar7;
  _swift_bridgeObjectRetain();
  __s26UnifiedNotificationDefines0B16ServerPayloadKeyC05alertF0SSvau();
  apuStack_f0[3] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[4] = puVar7;
  _swift_bridgeObjectRetain();
  __s26UnifiedNotificationDefines0B16ServerPayloadKeyC010localTitleF0SSvau();
  apuStack_f0[5] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[6] = puVar7;
  _swift_bridgeObjectRetain();
  __s26UnifiedNotificationDefines0B16ServerPayloadKeyC012localMessageF0SSvau();
  apuStack_f0[7] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[8] = puVar7;
  _swift_bridgeObjectRetain();
  __s26UnifiedNotificationDefines0B16ServerPayloadKeyC03abcb6HeaderF0SSvau();
  apuStack_f0[9] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[10] = puVar7;
  _swift_bridgeObjectRetain();
  __s26UnifiedNotificationDefines0B16ServerPayloadKeyC03abcb4BodyF0SSvau();
  apuStack_f0[0xb] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[0xc] = puVar7;
  _swift_bridgeObjectRetain();
  __s26UnifiedNotificationDefines0B16ServerPayloadKeyC04bodyF0SSvau();
  apuStack_f0[0xd] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[0xe] = puVar7;
  _swift_bridgeObjectRetain();
  __s26UnifiedNotificationDefines0B16ClientPayloadKeyC16textReplyContentSSvau();
  apuStack_f0[0xf] = (undefined8 *)*puVar7;
  uVar4 = puVar7[1];
  apuStack_f0[0x10] = (undefined8 *)uVar4;
  FUN_1000103e0(0x1000dd980,&UNK_10008f898);
  lVar8 = 9;
  __ss11_SetStorageC8allocate8capacityAByxGSi_tFZ();
  lVar1 = lVar8 + 0x38;
  _swift_bridgeObjectRetain(uVar4);
  lVar15 = 0;
  do {
    uVar3 = (&uStack_f8)[lVar15 * 2];
    puVar7 = apuStack_f0[lVar15 * 2];
    __ss6HasherV5_seedABSi_tcfC(auStack_160,*(undefined8 *)(lVar8 + 0x28));
    _swift_bridgeObjectRetain(puVar7);
    puVar9 = auStack_160;
    __sSS4hash4intoys6HasherVz_tF(auStack_160,uVar3,puVar7);
    __ss6HasherV9_finalizeSiyF();
    uVar13 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar14 = (ulong)puVar9 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar14 >> 6;
    uVar11 = *(ulong *)(lVar1 + uVar10 * 8);
    uVar12 = 1L << (uVar14 & 0x3f);
    if ((uVar12 & uVar11) != 0) {
      do {
        puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar14 * 0x10);
        uVar10 = *puVar2;
        puVar5 = (undefined8 *)puVar2[1];
        if ((uVar10 == uVar3 && puVar5 == puVar7) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar10,puVar5,uVar3,puVar7,0), (uVar10 & 1) != 0)) {
          _swift_bridgeObjectRelease(puVar7);
          goto LAB_10001ca80;
        }
        uVar14 = uVar14 + 1 & ~uVar13;
        uVar10 = uVar14 >> 6;
        uVar11 = *(ulong *)(lVar1 + uVar10 * 8);
        uVar12 = 1L << (uVar14 & 0x3f);
      } while ((uVar12 & uVar11) != 0);
    }
    *(ulong *)(lVar1 + uVar10 * 8) = uVar12 | uVar11;
    puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar14 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = (ulong)puVar7;
    if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10001cb94);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
LAB_10001ca80:
    lVar15 = lVar15 + 1;
    if (lVar15 == 9) {
      _swift_arrayDestroy(&uStack_f8,9,PTR___sSSN_1000a0680);
      lRam00000001000e8be8 = lVar8;
      return;
    }
  } while( true );
}



/* Entry: 10001cf34; end: 10001cf3b;  */

void FUN_10001cf34(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_1000a09e0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10001cf3c; end: 10001d023;  */

undefined8 FUN_10001cf3c(ulong param_1,ulong param_2,long param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_88 [72];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    return 0;
  }
  __ss6HasherV5_seedABSi_tcfC(auStack_88,*(undefined8 *)(param_3 + 0x28));
  puVar3 = auStack_88;
  __sSS4hash4intoys6HasherVz_tF(puVar3,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  uVar5 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar6 = (ulong)puVar3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_3 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      if ((uVar4 == param_1 && uVar2 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar4,uVar2,param_1,param_2,0), (uVar4 & 1) != 0)) {
        return 1;
      }
      uVar6 = uVar6 + 1 & ~uVar5;
    } while ((*(ulong *)(param_3 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 10001d024; end: 10001d0eb;  */

void FUN_10001d024(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  lStack_58 = param_1[3];
  uStack_60 = param_1[2];
  if (lStack_58 == 0) {
    FUN_10001d268(&uStack_70,0x1000dd0e8,&UNK_10008efc0);
    func_0x00010001d2a8(auStack_50,param_2);
    FUN_100010e28(param_2);
    FUN_10001d268(auStack_50,0x1000dd0e8,&UNK_10008efc0);
  }
  else {
    FUN_100017688(&uStack_70,auStack_50);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uStack_70 = *unaff_x20;
    func_0x00010001d370(auStack_50,param_2,uVar1);
    FUN_100010e28(param_2);
    *unaff_x20 = uStack_70;
  }
  return;
}



/* Entry: 10001d0ec; end: 10001d19f; +[_TtC26NotificationPayloadLogging25NotificationPayloadLogger debugUserInfoFrom:] */

void FUN_10001d0ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR___sypN_1000a08a0;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_3,PTR___ss11AnyHashableVN_1000a0728,PTR___sypN_1000a08a0 + 8,
               PTR___ss11AnyHashableVSHsWP_1000a0730);
  }
  _swift_getObjCClassMetadata(param_1);
  lVar2 = param_3;
  func_0x00010001cb94();
  _swift_bridgeObjectRelease(param_3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar2,PTR___ss11AnyHashableVN_1000a0728,puVar1 + 8,
               PTR___ss11AnyHashableVSHsWP_1000a0730);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(lVar3);
  return;
}



/* Entry: 10001d1a0; end: 10001d1d3;  */

void FUN_10001d1a0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 10001d1d4; end: 10001d1d7; -[_TtC26NotificationPayloadLogging25NotificationPayloadLogger .cxx_destruct] */

void FUN_10001d1d4(void)

{
  return;
}



/* Entry: 10001d1d8; end: 10001d1f7;  */

void FUN_10001d1d8(void)

{
  _objc_opt_self(&PTR_PTR_1000d3968);
  return;
}


