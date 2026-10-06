/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e5a180; end: 101e5a387;  */

void FUN_101e5a180(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar8;
  undefined8 auStack_60 [4];
  
  lVar1 = 0;
  func_0x000103b2dc40();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar8 = (undefined8 *)((long)auStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000103bbb728(0);
  uVar2 = 0xd000000000000011;
  func_0x000103bbb254(0xd000000000000011,0x800000010f015420);
  func_0x000101e3cf64(param_1,puVar8);
  puVar3 = puVar8;
  func_0x000107c614c4(puVar8,lVar1);
  if ((int)puVar3 == 0) {
    puVar8 = (undefined8 *)*puVar8;
    lVar1 = unaff_x20 + 0x38;
    func_0x000107c61618();
    if (lVar1 == 0) {
      uVar7 = 1;
    }
    else {
      func_0x000107c615e8();
      uVar7 = 2;
    }
    *(undefined1 *)(unaff_x20 + 0x48) = uVar7;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 **)(unaff_x20 + 0x18) = puVar8;
    func_0x000107c61174();
    func_0x000107c61170(uVar6);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    func_0x000107c61170(uVar6);
    if (*(char *)(unaff_x20 + 0x48) == '\x02') {
      puVar4 = &UNK_11048ec40;
      func_0x000107c613fc(&UNK_11048ec40,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar5 = &UNK_11048ec68;
      func_0x000107c613fc(&UNK_11048ec68,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 **)(puVar5 + 0x18) = puVar8;
      func_0x000107c61174();
      func_0x000107c6157c(puVar4);
      FUN_101e5ab60(puVar8,FUN_101e5ab58,puVar5);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c61170();
    }
    else {
      func_0x000107c61170();
      *(undefined1 *)(unaff_x20 + 0x48) = 0;
    }
  }
  else if ((int)puVar3 == 1) {
    func_0x000101e3cee4();
  }
  else {
    lVar1 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar1 + -8) + 8))(puVar8,lVar1);
  }
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar6 = *puVar8;
  func_0x000107c61174(uVar6);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 101e5a388; end: 101e5a443;  */

void FUN_101e5a388(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x18) != 0 && param_3 == *(long *)(param_2 + 0x18)) {
      uVar1 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_2 + 0x50) = param_1;
      func_0x000107c61170(uVar1);
      *(undefined1 *)(param_2 + 0x48) = 0;
      lVar2 = *(long *)(param_2 + 0x10);
      func_0x000107c61174(param_1);
      func_0x000107c45034();
      func_0x000107c61180();
      if (lVar2 == 0) {
        if (*(char *)(param_2 + 0x29) == '\x01') {
          FUN_101e5a444(0);
        }
      }
      else {
        func_0x000107c61170();
      }
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 101e5a444; end: 101e5a5ff;  */

void FUN_101e5a444(ulong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  
  *(undefined1 *)(unaff_x20 + 0x29) = 1;
  if ((*(char *)(unaff_x20 + 0x48) == '\x02') && ((param_1 & 1) == 0)) {
    return;
  }
  func_0x000103bbb728(0);
  uVar1 = 0xd000000000000018;
  func_0x000103bbb254(0xd000000000000018,0x800000010f015400);
  func_0x000107c504f4(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c5ba38(*(undefined8 *)(unaff_x20 + 0x30));
  puVar2 = *(undefined8 **)(unaff_x20 + 0x50);
  puVar3 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(unaff_x20 + 0x18);
    if (puVar3 == (undefined8 *)0x0) goto LAB_101e5a5b0;
    func_0x000107c61174();
    puVar2 = (undefined8 *)0x0;
  }
  uVar8 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61174(puVar2);
  uVar4 = uVar8;
  func_0x000107c45034();
  func_0x000107c61180();
  if (uVar4 == 0) {
    func_0x000107c61174(puVar3);
LAB_101e5a56c:
    func_0x000107c55258(uVar8);
    func_0x000107c61170(puVar3);
    lVar6 = unaff_x20 + 0x38;
    func_0x000107c61618();
    if (lVar6 != 0) {
      FUN_101e57888();
      func_0x000107c615e8(lVar6);
    }
    func_0x000107c56a14(uVar8);
  }
  else {
    FUN_101e5acc4(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
    puVar2 = puVar3;
    func_0x000107c61174();
    func_0x000107c61174();
    uVar5 = uVar4;
    func_0x000107c60118();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar4);
    if ((uVar5 & 1) == 0) goto LAB_101e5a56c;
    func_0x000107c61170(puVar2);
    puVar3 = puVar2;
  }
  func_0x000107c61170();
LAB_101e5a5b0:
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar7 = *puVar3;
  func_0x000107c61174(uVar7);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 101e5a600; end: 101e5a647;  */

/* WARNING: Possible PIC construction at 0x000101e5a634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e5a638) */

void FUN_101e5a600(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x29) = 0;
  *(undefined1 *)(unaff_x20 + 0x48) = 0;
  func_0x000107c504e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c504e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c55258(*(undefined8 *)(unaff_x20 + 0x10),param_2,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101e5a648; end: 101e5a7e3;  */

void FUN_101e5a648(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar4 = param_1;
  if (param_1 == 0) {
    func_0x000107c61174();
    lVar4 = param_2;
  }
  func_0x000107c61174(param_1);
  pcVar1 = "decodeImage(image:completion:)";
  func_0x0001000c10c0("decodeImage(image:completion:)");
  func_0x000107c61180();
  puVar2 = &UNK_11048ece0;
  func_0x000107c613fc(&UNK_11048ece0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(long *)(puVar2 + 0x28) = lVar4;
  uStack_50 = 0x101e5acb8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11048ecf8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_5);
  func_0x000107c61174(lVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101e5a7e4; end: 101e5a7ef;  */

void FUN_101e5a7e4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 101e5a7f0; end: 101e5a82f;  */

void FUN_101e5a7f0(void)

{
  FUN_101e5a180();
  return;
}



/* Entry: 101e5a830; end: 101e5a837;  */

void FUN_101e5a830(void)

{
  return;
}



/* Entry: 101e5a838; end: 101e5a87f;  */

void FUN_101e5a838(void)

{
  FUN_101e5a600();
  return;
}



/* Entry: 101e5a880; end: 101e5a88f;  */

void FUN_101e5a880(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*unaff_x20);
  return;
}



/* Entry: 101e5a890; end: 101e5a8c7; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerImageContentController mediaVariantSwitchHistory] */

void FUN_101e5a890(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101e5acc4(0,0x112e32da8,&PTR_PTR_1126a9668);
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101e5a8c8; end: 101e5a8eb; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerImageContentController currentTime] */

void FUN_101e5a8c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__kCMTimeZero_110348670;
  uVar2 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  *param_1 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  param_1[1] = *(undefined8 *)(puVar1 + 8);
  param_1[2] = uVar2;
  return;
}



/* Entry: 101e5a8ec; end: 101e5a8f3; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerImageContentController playbackMode] */

undefined8 FUN_101e5a8ec(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 101e5a8f4; end: 101e5a90f; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerImageContentController accumulatedWatchTime] */

void FUN_101e5a8f4(long param_1)

{
  long lVar1;
  
  lVar1 = 0x30;
  if (*(char *)(param_1 + 0x28) == '\0') {
    lVar1 = 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beed830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_accumulatedTime_112598fb0);
  return;
}



/* Entry: 101e5a910; end: 101e5aa7b; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerImageContentController resetAnalytics] */

void FUN_101e5a910(void)

{
  return;
}



/* Entry: 101e5aa7c; end: 101e5aabb;  */

void FUN_101e5aa7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e32e98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1bfc8;
  func_0x000107c61520(&UNK_10da1bfc8,&UNK_11048ebd0);
  puRam0000000112e32e98 = puVar1;
  return;
}



/* Entry: 101e5aabc; end: 101e5ab57;  */

void FUN_101e5aabc(long param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar1 = PTR_PTR_1126b46f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined1 *)(unaff_x20 + 0x29) = 0;
  puVar1 = PTR_PTR_1126b46f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  func_0x000107c61614(unaff_x20 + 0x38,0);
  *(undefined1 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = *(undefined1 *)(param_1 + 0x3a);
  func_0x000107c53840(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101e5ab58; end: 101e5ab5f;  */

void FUN_101e5ab58(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) != 0 && lVar3 == *(long *)(lVar1 + 0x18)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x50);
      *(undefined8 *)(lVar1 + 0x50) = param_1;
      func_0x000107c61170(uVar2);
      *(undefined1 *)(lVar1 + 0x48) = 0;
      lVar3 = *(long *)(lVar1 + 0x10);
      func_0x000107c61174(param_1);
      func_0x000107c45034();
      func_0x000107c61180();
      if (lVar3 == 0) {
        if (*(char *)(lVar1 + 0x29) == '\x01') {
          FUN_101e5a444(0);
        }
      }
      else {
        func_0x000107c61170();
      }
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101e5ab60; end: 101e5ac8f;  */

void FUN_101e5ab60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000103bbb728(0);
  uVar1 = 0xd000000000000010;
  func_0x000103bbb254(0xd000000000000010,0x800000010f015440);
  if (lRam0000000112e32ea0 != -1) {
    func_0x000107c61568(0x112e32ea0,FUN_101e5a024);
  }
  puVar2 = &UNK_11048ec90;
  func_0x000107c613fc(&UNK_11048ec90,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  pcStack_50 = FUN_101e5ac90;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f4f500;
  puStack_58 = &UNK_11048eca8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c51728(param_1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101e5ac90; end: 101e5acc3;  */

void FUN_101e5ac90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar7 = &puStack_70;
  lVar8 = param_1;
  if (param_1 == 0) {
    func_0x000107c61174();
    lVar8 = lVar4;
  }
  func_0x000107c61174(param_1);
  pcVar5 = "decodeImage(image:completion:)";
  func_0x0001000c10c0("decodeImage(image:completion:)");
  func_0x000107c61180();
  puVar6 = &UNK_11048ece0;
  func_0x000107c613fc(&UNK_11048ece0,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar1;
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  *(long *)(puVar6 + 0x28) = lVar8;
  uStack_50 = 0x101e5acb8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11048ecf8;
  puStack_48 = puVar6;
  func_0x000107c60bc4(&puStack_70);
  puVar6 = puStack_48;
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(lVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c4e524(pcVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(lVar8);
  func_0x000107c615e8(pcVar5);
  return;
}



/* Entry: 101e5acc4; end: 101e5ad27;  */

void FUN_101e5acc4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101e5ad28; end: 101e5ad2f;  */

void FUN_101e5ad28(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101e5ad30; end: 101e5ad33; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerImageContentController playbackSessionId] */

void FUN_101e5ad30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 101e5ad34; end: 101e5ad37; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerImageContentController vsrAnalyticsData] */

void FUN_101e5ad34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 101e5ad38; end: 101e5ad3b; -[_TtC30SingleSnapPlayerImplementation38SingleSnapPlayerImageContentController playbackSummary] */

void FUN_101e5ad38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 101e5ad3c; end: 101e5ae8f;  */

undefined * FUN_101e5ad3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined **)(unaff_x20 + 0x40);
  puVar2 = puVar3;
  puVar1 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = *(undefined **)(unaff_x20 + 0x38);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___AVSampleBufferDisplayLayer_1126b6c98;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar2 = *(undefined **)(unaff_x20 + 0x40);
    }
    else {
      func_0x000107c61174();
      puVar2 = (undefined *)0x0;
    }
  }
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  func_0x000107c61174(puVar3);
  func_0x000107c61174(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___AVPictureInPictureControllerContentSource_1126a9660;
  func_0x000107c610f8(PTR__OBJC_CLASS___AVPictureInPictureControllerContentSource_1126a9660);
  func_0x000107c48468();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 101e5ae90; end: 101e5aeeb;  */

void FUN_101e5ae90(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e5aeec; end: 101e5aefb;  */

undefined1 FUN_101e5aeec(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x10);
}



/* Entry: 101e5aefc; end: 101e5af57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5aefc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff7ab8;
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + _DAT_112ff7ab8,auStack_48,1,0);
  func_0x000107c61604(lVar2 + lVar1,param_1);
  return;
}



/* Entry: 101e5af58; end: 101e5af5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5af58(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar1 = lVar3 + _DAT_112ff7ab0;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61604(lVar1,0);
  lVar1 = _DAT_112ff7ab8;
  func_0x000107c61428(lVar3 + _DAT_112ff7ab8,auStack_60,1,0);
  func_0x000107c61604(lVar3 + lVar1,0);
  uVar2 = 0;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x000107c43708();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  }
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101e5af5c; end: 101e5b0bb;  */

void FUN_101e5af5c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  (**(code **)(param_2 + 0x20))(param_1,param_4);
  uVar2 = param_1;
  func_0x000107c614f0(param_1);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x38) = uVar1;
  uVar3 = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  (**(code **)(*(long *)(param_4 + 0x10) + 0x18))(uVar1,uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101e5b0bc; end: 101e5b11b;  */

undefined8 FUN_101e5b0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c613fc();
  FUN_101e5ce2c(param_1,param_2,param_3);
  func_0x000107c6142c(param_3);
  return param_1;
}



/* Entry: 101e5b11c; end: 101e5b1b7;  */

void FUN_101e5b11c(undefined8 *param_1,double param_2,double param_3)

{
  code *pcVar1;
  long unaff_x20;
  double dVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 < param_2) {
    if (param_2 < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5b1b4);
      (*pcVar1)();
    }
    FUN_101e5d1ac(&uStack_50,param_3,*(undefined8 *)(unaff_x20 + 0x10));
  }
  else {
    dVar2 = param_3;
    if (param_2 + 0.002 <= param_3) {
      dVar2 = param_2 + 0.002;
    }
    if (param_3 < dVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5b1b8);
      (*pcVar1)();
    }
    func_0x000101e5d3ac(&uStack_50,*(undefined8 *)(unaff_x20 + 0x10));
  }
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[5] = uStack_28;
  param_1[4] = uStack_30;
  return;
}



/* Entry: 101e5b1b8; end: 101e5b603;  */

/* WARNING: Possible PIC construction at 0x000101e5b574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e5b5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e5b600) */
/* WARNING: Removing unreachable block (ram,0x000101e5b5f8) */

void FUN_101e5b1b8(double param_1,double param_2,undefined8 *****param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  code *pcVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 **ppuVar13;
  undefined8 ****ppppuVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  undefined8 ***pppuVar17;
  undefined8 **ppuVar18;
  undefined8 *****pppppuVar19;
  double *pdVar20;
  long lVar21;
  undefined8 **ppuVar22;
  ulong uVar23;
  undefined8 **ppuVar24;
  undefined8 **ppuVar25;
  undefined8 ****ppppuStack_150;
  double dStack_148;
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 ****ppppuStack_f8;
  double dStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 uStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if (param_2 <= param_1) {
    return;
  }
  ppppuVar9 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101e5cce4();
  lVar21 = *(long *)(unaff_x20 + 0x10);
  uVar23 = *(ulong *)(lVar21 + 0x10);
  if (uVar23 != 0) {
    uVar16 = 0;
    pdVar20 = (double *)(lVar21 + 0x48);
    do {
      if (*(ulong *)(lVar21 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101e5b5e0);
        (*pcVar8)();
      }
      ppuVar25 = (undefined8 **)pdVar20[-5];
      ppuVar2 = (undefined8 **)pdVar20[-4];
      ppppuVar14 = (undefined8 ****)pdVar20[-3];
      ppuVar3 = (undefined8 **)pdVar20[-2];
      ppuVar5 = (undefined8 **)pdVar20[-1];
      ppuVar24 = (undefined8 **)*pdVar20;
      pppuVar17 = ppppuVar9[2];
      func_0x000107c61434(ppppuVar14);
      func_0x000107c61434(ppuVar5);
      if (pppuVar17 == (undefined8 ***)0x0) {
LAB_101e5b2cc:
        if (((double)ppuVar25 <= param_1 + 0.002) || (param_2 < (double)ppuVar25)) {
          func_0x000107c6142c(ppuVar5);
          goto LAB_101e5b244;
        }
        func_0x000107c61434(ppppuVar14);
        func_0x000107c61434(ppuVar5);
        ppppuVar10 = ppppuVar9;
        func_0x000107c61558();
        ppuVar18 = ppuVar3;
        ppuVar22 = ppuVar5;
        ppppuStack_f8 = ppppuVar9;
        func_0x000100029284();
        uVar15 = (ulong)~(uint)ppuVar22 & 1;
        lVar1 = (long)ppppuVar9[2] + uVar15;
        if (SCARRY8((long)ppppuVar9[2],uVar15)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101e5b5e4);
          (*pcVar8)();
        }
        if ((long)ppppuVar9[3] < lVar1) {
          FUN_101e5bd5c(lVar1,ppppuVar10);
          ppuVar18 = ppuVar3;
          ppuVar13 = ppuVar5;
          func_0x000100029284();
          if (((uint)ppuVar22 & 1) != ((uint)ppuVar13 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101e5b5f8);
            (*pcVar8)();
          }
        }
        else if (((ulong)ppppuVar10 & 1) == 0) {
          func_0x000101e5b8c8();
        }
        ppppuVar9 = ppppuStack_f8;
        if (((ulong)ppuVar22 & 1) == 0) {
          ppppuStack_f8[((ulong)ppuVar18 >> 6) + 8] =
               (undefined8 ***)
               ((ulong)ppppuStack_f8[((ulong)ppuVar18 >> 6) + 8] | 1L << ((ulong)ppuVar18 & 0x3f));
          pppuVar17 = ppppuStack_f8[6];
          pppuVar17[(long)ppuVar18 * 2] = ppuVar3;
          (pppuVar17 + (long)ppuVar18 * 2)[1] = ppuVar5;
          pppuVar17 = ppppuStack_f8[7] + (long)ppuVar18 * 6;
          *pppuVar17 = ppuVar25;
          pppuVar17[1] = ppuVar2;
          pppuVar17[2] = ppppuVar14;
          pppuVar17[3] = ppuVar3;
          pppuVar17[4] = ppuVar5;
          pppuVar17[5] = ppuVar24;
          func_0x000107c6142c(ppppuVar14);
          if (SCARRY8((long)ppppuVar9[2],1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101e5b5e8);
            (*pcVar8)();
          }
          ppppuVar9[2] = (undefined8 ***)((long)ppppuVar9[2] + 1);
        }
        else {
          pppuVar17 = ppppuStack_f8[7] + (long)ppuVar18 * 6;
          ppuVar18 = pppuVar17[2];
          ppuVar22 = pppuVar17[4];
          *pppuVar17 = ppuVar25;
          pppuVar17[1] = ppuVar2;
          pppuVar17[2] = ppppuVar14;
          pppuVar17[3] = ppuVar3;
          pppuVar17[4] = ppuVar5;
          pppuVar17[5] = ppuVar24;
          func_0x000107c6142c(ppuVar5);
          func_0x000107c6142c(ppppuVar14);
          func_0x000107c6142c(ppuVar22);
          func_0x000107c6142c(ppuVar18);
        }
      }
      else {
        func_0x000107c61434(ppppuVar9);
        ppuVar18 = ppuVar5;
        func_0x000100029284(ppuVar3);
        if (((ulong)ppuVar18 & 1) == 0) {
          func_0x000107c6142c(ppppuVar9);
          goto LAB_101e5b2cc;
        }
        func_0x000107c6142c(ppuVar5);
        func_0x000107c6142c(ppppuVar14);
        ppppuVar14 = ppppuVar9;
LAB_101e5b244:
        func_0x000107c6142c(ppppuVar14);
      }
      uVar16 = uVar16 + 1;
      pdVar20 = pdVar20 + 6;
    } while (uVar23 != uVar16);
  }
  pppppuVar19 = (undefined8 *****)ppppuVar9[2];
  func_0x000107c61434(ppppuVar9);
  pppppuVar11 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pppppuVar19 != (undefined8 *****)0x0) {
    func_0x000107c61434(ppppuVar9);
    pppppuVar11 = pppppuVar19;
    FUN_101e5caac(pppppuVar19,0);
    pppppuVar12 = &ppppuStack_f8;
    FUN_101e5cb4c(pppppuVar12,pppppuVar11 + 4,pppppuVar19,ppppuVar9);
    FUN_101e5d184(ppppuStack_f8,dStack_f0,pppuStack_e8,uStack_e0,pppuStack_d8);
    if (pppppuVar12 != pppppuVar19) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x101e5b4a8);
      (*pcVar8)();
    }
  }
  ppppuStack_f8 = pppppuVar11;
  FUN_101e5c048(&ppppuStack_f8);
  func_0x000107c6142c(ppppuVar9);
  ppppuVar10 = ppppuStack_f8;
  ppppuVar14 = (undefined8 ****)ppppuStack_f8[2];
  if (ppppuVar14 == (undefined8 ****)0x0) {
    func_0x000107c6142c(ppppuVar9);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    pppppuVar11 = (undefined8 *****)(ppppuStack_f8 + 8);
    while( true ) {
      ppppuVar14 = (undefined8 ****)((long)ppppuVar14 + -1);
      pppuStack_140 = pppppuVar11[-4];
      pppuStack_120 = pppppuVar11[-3];
      pppuStack_118 = pppppuVar11[-2];
      pppuStack_130 = pppppuVar11[-1];
      ppppuVar7 = *pppppuVar11;
      ppppuStack_150 = param_3;
      dStack_148 = param_1;
      uStack_138 = param_4;
      pppuStack_128 = ppppuVar7;
      uStack_110 = uVar4;
      uStack_108 = uVar6;
      ppppuStack_f8 = param_3;
      dStack_f0 = param_1;
      pppuStack_e8 = pppuStack_140;
      uStack_e0 = param_4;
      pppuStack_d8 = pppuStack_130;
      pppuStack_d0 = ppppuVar7;
      pppuStack_c8 = pppuStack_120;
      pppuStack_c0 = pppuStack_118;
      uStack_b8 = uVar4;
      uStack_b0 = uVar6;
      func_0x000107c61434();
      func_0x000107c61434(ppppuVar7);
      func_0x000107c61434(uVar6);
      func_0x0001002a64a8(&ppppuStack_150);
      FUN_101e5d150(&ppppuStack_f8);
      if (ppppuVar14 == (undefined8 ****)0x0) break;
      pppppuVar11 = pppppuVar11 + 6;
    }
    func_0x000107c6142c(ppppuVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(ppppuVar10);
  return;
}



/* Entry: 101e5b604; end: 101e5b637;  */

void FUN_101e5b604(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e5b638; end: 101e5b68f;  */

void FUN_101e5b638(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar1 * 8) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101e5b690; end: 101e5b6f3;  */

void FUN_101e5b690(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 101e5b6f4; end: 101e5bd5b;  */

void FUN_101e5b6f4(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar3 = 0;
  func_0x000103b2dc40();
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x0001000285a8(0x112e33028,&UNK_10da1c0b0);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) == 0) {
    func_0x000107c61574(lVar9);
LAB_101e5b8a0:
    *unaff_x20 = lVar3;
    return;
  }
  lVar1 = lVar9 + 0x40;
  uVar5 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar3 != lVar9) || (lVar1 + uVar5 * 8 <= lVar3 + 0x40U)) {
    func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar5 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
  uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar5 = 0xffffffffffffffff;
  if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
    uVar5 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar5 = uVar5 & *(ulong *)(lVar9 + 0x40);
  if (uVar5 == 0) goto LAB_101e5b818;
  do {
    uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
    uVar5 = uVar5 - 1 & uVar5;
    while( true ) {
      uVar7 = LZCOUNT(uVar7) | lVar11 << 6;
      uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar7 * 8);
      lVar10 = *(long *)(lVar4 + 0x48) * uVar7;
      func_0x000101e3cf64(*(long *)(lVar9 + 0x38) + lVar10,
                          &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar7 * 8) = uVar8;
      func_0x000101e3cf20(&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          *(long *)(lVar3 + 0x38) + lVar10);
      if (uVar5 != 0) break;
LAB_101e5b818:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101e5b8c8);
          (*pcVar2)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar10) {
          func_0x000107c61574(lVar9);
          goto LAB_101e5b8a0;
        }
        uVar5 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar5 == 0);
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Entry: 101e5bd5c; end: 101e5c047;  */

void FUN_101e5bd5c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *unaff_x20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined1 auStack_b8 [72];
  
  lVar23 = *unaff_x20;
  lVar1 = *(long *)(lVar23 + 0x18);
  if (*(long *)(lVar23 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar9 = 0x112e33030;
  func_0x0001000285a8(0x112e33030,&UNK_10da1c0b8);
  lVar10 = lVar23;
  func_0x000107c60490(lVar23,lVar1,param_2,uVar9);
  if (*(long *)(lVar23 + 0x10) == 0) {
LAB_101e5c010:
    func_0x000107c61574(lVar23);
    *unaff_x20 = lVar10;
    return;
  }
  puVar21 = (ulong *)(lVar23 + 0x40);
  uVar17 = 1L << ((ulong)*(byte *)(lVar23 + 0x20) & 0x3f);
  uVar22 = 0xffffffffffffffff;
  if ((*(byte *)(lVar23 + 0x20) & 0x3f) < 6) {
    uVar22 = ~(-1L << (uVar17 & 0x3f));
  }
  uVar22 = uVar22 & *puVar21;
  lVar1 = lVar10 + 0x40;
  lVar13 = 0;
  do {
    if (uVar22 == 0) {
      do {
        lVar20 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101e5c044);
          (*pcVar8)();
        }
        if ((long)(uVar17 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1) != 0) {
            uVar22 = 1L << ((ulong)*(byte *)(lVar23 + 0x20) & 0x3f);
            if ((*(byte *)(lVar23 + 0x20) & 0x3f) < 6) {
              *puVar21 = -1L << (uVar22 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar21,uVar22 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar23 + 0x10) = 0;
          }
          goto LAB_101e5c010;
        }
        uVar22 = puVar21[lVar20];
        lVar13 = lVar13 + 1;
      } while (uVar22 == 0);
      uVar12 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar22 = uVar22 - 1 & uVar22;
    }
    else {
      uVar12 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar22 = uVar22 - 1 & uVar22;
      lVar20 = lVar13;
    }
    uVar12 = LZCOUNT(uVar12) | lVar20 << 6;
    puVar14 = (undefined8 *)(*(long *)(lVar23 + 0x30) + uVar12 * 0x10);
    uVar9 = *puVar14;
    uVar4 = puVar14[1];
    puVar14 = (undefined8 *)(*(long *)(lVar23 + 0x38) + uVar12 * 0x30);
    uVar24 = *puVar14;
    uVar2 = puVar14[1];
    uVar5 = puVar14[2];
    uVar3 = puVar14[3];
    uVar6 = puVar14[4];
    uVar15 = puVar14[5];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
    }
    func_0x000107c6068c(auStack_b8,*(undefined8 *)(lVar10 + 0x28));
    puVar11 = auStack_b8;
    func_0x000107c5fb58(puVar11,uVar9,uVar4);
    func_0x000107c606a8();
    uVar19 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar18 = (ulong)puVar11 & (uVar19 ^ 0xffffffffffffffff);
    uVar16 = uVar18 >> 6;
    uVar12 = -1L << (uVar18 & 0x3f) & (*(ulong *)(lVar1 + uVar16 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar7 = false;
      uVar12 = 0x3f - uVar19 >> 6;
      do {
        uVar18 = uVar16 + 1;
        if ((uVar18 == uVar12) && (bVar7)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101e5c048);
          (*pcVar8)();
        }
        uVar16 = 0;
        if (uVar18 != uVar12) {
          uVar16 = uVar18;
        }
        bVar7 = (bool)(uVar18 == uVar12 | bVar7);
        uVar18 = *(ulong *)(lVar1 + uVar16 * 8);
      } while (uVar18 == 0xffffffffffffffff);
      uVar18 = ~uVar18;
      uVar12 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar16 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar18 & 0x7fffffffffffffc0;
    }
    uVar16 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar16) = 1L << (uVar12 & 0x3f) | *(ulong *)(lVar1 + uVar16);
    puVar14 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 0x10);
    *puVar14 = uVar9;
    puVar14[1] = uVar4;
    puVar14 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar12 * 0x30);
    *puVar14 = uVar24;
    puVar14[1] = uVar2;
    puVar14[2] = uVar5;
    puVar14[3] = uVar3;
    puVar14[4] = uVar6;
    puVar14[5] = uVar15;
    *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
    lVar13 = lVar20;
  } while( true );
}



/* Entry: 101e5c048; end: 101e5c143;  */

void FUN_101e5c048(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_101e5cb38();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,&UNK_1106d4b40);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_101e5c144(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_101e5c54c(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 101e5c144; end: 101e5c54b;  */

void FUN_101e5c144(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  double *pdVar16;
  long lVar17;
  double *pdVar18;
  undefined8 uVar19;
  long unaff_x21;
  long lVar20;
  ulong *puVar21;
  ulong uVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  undefined8 uVar34;
  double dVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = param_3[1];
  if (0 < lVar10) {
    lVar12 = 0;
    do {
      puVar9 = puStack_58;
      lVar20 = lVar12 + 1;
      if (lVar20 < lVar10) {
        lVar13 = *param_3;
        dVar23 = *(double *)(lVar13 + lVar20 * 0x30);
        lVar15 = lVar12 * 0x30;
        dVar26 = *(double *)(lVar13 + lVar15);
        pdVar16 = (double *)(lVar13 + lVar15) + 0xc;
        lVar17 = lVar12 + 2;
        dVar25 = dVar23;
        do {
          lVar20 = lVar17;
          if (lVar10 == lVar20) {
            lVar20 = lVar10;
            if (dVar26 <= dVar23) goto LAB_101e5c294;
            goto LAB_101e5c20c;
          }
          dVar31 = *pdVar16;
          bVar6 = dVar25 <= dVar31;
          pdVar16 = pdVar16 + 6;
          lVar17 = lVar20 + 1;
          dVar25 = dVar31;
        } while (dVar23 < dVar26 != bVar6);
        if (dVar23 < dVar26) {
LAB_101e5c20c:
          if (lVar20 < lVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c520);
            (*pcVar5)();
          }
          if (lVar12 < lVar20) {
            lVar11 = lVar20 * 0x30;
            lVar17 = lVar20;
            lVar10 = lVar12;
            do {
              lVar17 = lVar17 + -1;
              if (lVar10 != lVar17) {
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c540);
                  (*pcVar5)();
                }
                puVar1 = (undefined8 *)(lVar13 + lVar15);
                uVar24 = *puVar1;
                lVar2 = lVar13 + lVar11;
                uVar28 = puVar1[2];
                uVar27 = puVar1[1];
                uVar30 = puVar1[4];
                uVar29 = puVar1[3];
                uVar19 = puVar1[5];
                uVar37 = *(undefined8 *)(lVar2 + -0x18);
                uVar36 = *(undefined8 *)(lVar2 + -0x20);
                uVar34 = *(undefined8 *)(lVar2 + -8);
                uVar32 = *(undefined8 *)(lVar2 + -0x10);
                uVar38 = *(undefined8 *)(lVar2 + -0x30);
                puVar1[1] = *(undefined8 *)(lVar2 + -0x28);
                *puVar1 = uVar38;
                puVar1[3] = uVar37;
                puVar1[2] = uVar36;
                puVar1[5] = uVar34;
                puVar1[4] = uVar32;
                *(undefined8 *)(lVar2 + -0x30) = uVar24;
                *(undefined8 *)(lVar2 + -0x20) = uVar28;
                *(undefined8 *)(lVar2 + -0x28) = uVar27;
                *(undefined8 *)(lVar2 + -0x10) = uVar30;
                *(undefined8 *)(lVar2 + -0x18) = uVar29;
                *(undefined8 *)(lVar2 + -8) = uVar19;
              }
              lVar10 = lVar10 + 1;
              lVar11 = lVar11 + -0x30;
              lVar15 = lVar15 + 0x30;
            } while (lVar10 < lVar17);
            lVar10 = param_3[1];
          }
        }
      }
LAB_101e5c294:
      lVar15 = lVar20;
      if (lVar20 < lVar10) {
        if (SBORROW8(lVar20,lVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c51c);
          (*pcVar5)();
        }
        if (lVar20 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c524);
            (*pcVar5)();
          }
          lVar17 = lVar12 + param_4;
          if (lVar10 <= lVar12 + param_4) {
            lVar17 = lVar10;
          }
          if (lVar17 < lVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c528);
            (*pcVar5)();
          }
          if (lVar20 != lVar17) {
            lVar10 = *param_3;
            pdVar16 = (double *)(lVar10 + lVar20 * 0x30 + -0x30);
            lVar13 = lVar12 - lVar20;
            do {
              dVar25 = *(double *)(lVar10 + lVar20 * 0x30);
              lVar15 = lVar13;
              pdVar18 = pdVar16;
              do {
                if (*pdVar18 <= dVar25) break;
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c52c);
                  (*pcVar5)();
                }
                dVar26 = pdVar18[8];
                dVar23 = pdVar18[7];
                dVar31 = pdVar18[9];
                pdVar18[7] = pdVar18[1];
                pdVar18[6] = *pdVar18;
                pdVar18[9] = pdVar18[3];
                pdVar18[8] = pdVar18[2];
                dVar35 = pdVar18[5];
                dVar33 = pdVar18[4];
                *pdVar18 = dVar25;
                pdVar18[2] = dVar26;
                pdVar18[1] = dVar23;
                pdVar18[4] = pdVar18[10];
                pdVar18[3] = dVar31;
                pdVar18[5] = pdVar18[0xb];
                pdVar18[0xb] = dVar35;
                pdVar18[10] = dVar33;
                bVar6 = lVar15 != -1;
                lVar15 = lVar15 + 1;
                pdVar18 = pdVar18 + -6;
              } while (bVar6);
              lVar20 = lVar20 + 1;
              pdVar16 = pdVar16 + 6;
              lVar13 = lVar13 + -1;
              lVar15 = lVar17;
            } while (lVar20 != lVar17);
          }
        }
      }
      if (lVar15 < lVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c50c);
        (*pcVar5)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar22 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar22) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar22 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar22 + 1;
      *(long *)(puVar9 + uVar22 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar9 + uVar22 * 0x10 + 0x28) = lVar15;
      puStack_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c544);
        (*pcVar5)();
      }
      FUN_101e5c5e8(&puStack_58,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_101e5c4e0;
      lVar10 = param_3[1];
      lVar12 = lVar15;
    } while (lVar15 < lVar10);
  }
  puVar9 = puStack_58;
  lVar10 = *param_1;
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c54c);
    (*pcVar5)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar21 = (ulong *)(puVar9 + 0x10);
  uVar22 = *puVar21;
  while (1 < uVar22) {
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c548);
      (*pcVar5)();
    }
    plVar3 = (long *)(puVar9 + uVar22 * 0x10);
    lVar20 = *plVar3;
    puVar4 = puVar21 + uVar22 * 2;
    uVar14 = puVar4[1];
    FUN_101e5c85c(lVar12 + lVar20 * 0x30,lVar12 + *puVar4 * 0x30,lVar12 + uVar14 * 0x30,lVar10);
    if (unaff_x21 != 0) break;
    if ((long)uVar14 < lVar20) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c510);
      (*pcVar5)();
    }
    if (*puVar21 <= uVar22 - 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c514);
      (*pcVar5)();
    }
    *plVar3 = lVar20;
    plVar3[1] = uVar14;
    uVar14 = *puVar21;
    lVar12 = uVar14 - uVar22;
    if (uVar14 < uVar22) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e5c518);
      (*pcVar5)();
    }
    uVar22 = uVar14 - 1;
    func_0x000107c610b8(puVar4,puVar4 + 2,lVar12 * 0x10);
    *puVar21 = uVar22;
  }
LAB_101e5c4e0:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 101e5c54c; end: 101e5c5e7;  */

void FUN_101e5c54c(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  double *pdVar4;
  long lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    pdVar4 = (double *)(lVar3 + param_3 * 0x30 + -0x30);
    param_1 = param_1 - param_3;
    do {
      dVar7 = *(double *)(lVar3 + param_3 * 0x30);
      lVar5 = param_1;
      pdVar6 = pdVar4;
      do {
        if (*pdVar6 <= dVar7) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5c5e8);
          (*pcVar1)();
        }
        dVar9 = pdVar6[8];
        dVar8 = pdVar6[7];
        dVar10 = pdVar6[9];
        pdVar6[7] = pdVar6[1];
        pdVar6[6] = *pdVar6;
        pdVar6[9] = pdVar6[3];
        pdVar6[8] = pdVar6[2];
        dVar12 = pdVar6[5];
        dVar11 = pdVar6[4];
        *pdVar6 = dVar7;
        pdVar6[2] = dVar9;
        pdVar6[1] = dVar8;
        pdVar6[4] = pdVar6[10];
        pdVar6[3] = dVar10;
        pdVar6[5] = pdVar6[0xb];
        pdVar6[0xb] = dVar12;
        pdVar6[10] = dVar11;
        bVar2 = lVar5 != -1;
        lVar5 = lVar5 + 1;
        pdVar6 = pdVar6 + -6;
      } while (bVar2);
      param_3 = param_3 + 1;
      pdVar4 = pdVar4 + 6;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 101e5c5e8; end: 101e5c85b;  */

undefined8 FUN_101e5c5e8(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  if (1 < *(ulong *)(uVar11 + 0x10)) {
    uVar10 = uVar11;
    func_0x000107c61558();
    if ((uVar10 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar11;
    lVar1 = uVar11 + 0x20;
    uVar10 = *(ulong *)(uVar11 + 0x10);
    do {
      uVar13 = uVar10 - 1;
      if (uVar10 < 4) {
        if (uVar10 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar11 + 0x28),*(long *)(uVar11 + 0x20));
          lVar8 = *(long *)(uVar11 + 0x28) - *(long *)(uVar11 + 0x20);
          goto LAB_101e5c6c0;
        }
        if (uVar10 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c83c);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_101e5c720:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c82c);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar13 * 0x10);
        lVar8 = *plVar2;
        lVar12 = plVar2[1];
        if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c834);
          (*pcVar6)();
        }
        uVar14 = uVar13;
        if (lVar12 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar10 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c814);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c818);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar12 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar12;
        if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c820);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c828);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_101e5c6c0:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c81c);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar11 + uVar10 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c824);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c830);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c838);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_101e5c720;
          uVar14 = uVar10 - 2;
          if (lVar5 <= lVar8) {
            uVar14 = uVar13;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar9 = *plVar2;
          lVar12 = plVar2[1];
          if (SBORROW8(lVar12,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c840);
            (*pcVar6)();
          }
          uVar14 = uVar10 - 2;
          if (lVar12 - lVar9 <= lVar8) {
            uVar14 = uVar13;
          }
        }
      }
      uVar13 = uVar14 - 1;
      if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c804);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar11;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c85c);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar13 * 0x10);
      lVar12 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar14 * 0x10);
      lVar9 = plVar3[1];
      FUN_101e5c85c(lVar8 + lVar12 * 0x30,lVar8 + *plVar3 * 0x30,lVar8 + lVar9 * 0x30,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c808);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c80c);
        (*pcVar6)();
      }
      *plVar2 = lVar12;
      plVar2[1] = lVar9;
      uVar13 = *(ulong *)(uVar11 + 0x10);
      if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5c810);
        (*pcVar6)();
      }
      uVar10 = uVar13 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar10 - uVar14) * 0x10);
      *(ulong *)(uVar11 + 0x10) = uVar10;
    } while (2 < uVar13);
    *param_1 = uVar11;
  }
  return 1;
}



/* Entry: 101e5c85c; end: 101e5caab;  */

undefined8 FUN_101e5c85c(double *param_1,double *param_2,double *param_3,double *param_4)

{
  long lVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x30;
  lVar2 = ((long)param_3 - (long)param_2) / 0x30;
  if (lVar1 < lVar2) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 6 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 * 0x30);
    }
    pdVar4 = param_4 + lVar1 * 6;
    pdVar6 = param_1;
    if (0x2f < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if (*param_4 <= *param_2) {
          pdVar7 = param_4 + 6;
          pdVar3 = param_4;
        }
        else {
          pdVar7 = param_4;
          pdVar3 = param_2;
          param_2 = param_2 + 6;
        }
        param_4 = pdVar7;
        if (pdVar6 != pdVar3) {
          dVar9 = pdVar3[1];
          dVar8 = *pdVar3;
          dVar10 = pdVar3[2];
          dVar12 = pdVar3[5];
          dVar11 = pdVar3[4];
          pdVar6[3] = pdVar3[3];
          pdVar6[2] = dVar10;
          pdVar6[5] = dVar12;
          pdVar6[4] = dVar11;
          pdVar6[1] = dVar9;
          *pdVar6 = dVar8;
        }
        pdVar6 = pdVar6 + 6;
      } while (param_4 < pdVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 6 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar2 * 0x30);
    }
    pdVar3 = param_4 + lVar2 * 6;
    pdVar4 = pdVar3;
    pdVar6 = param_2;
    if ((param_1 < param_2) && (0x2f < (long)param_3 - (long)param_2)) {
      do {
        pdVar5 = param_2 + -6;
        pdVar7 = param_3;
        while( true ) {
          param_3 = pdVar7 + -6;
          pdVar4 = pdVar3 + -6;
          if (*pdVar4 < *pdVar5) break;
          if (pdVar7 != pdVar3) {
            dVar9 = pdVar3[-5];
            dVar8 = *pdVar4;
            dVar10 = pdVar3[-4];
            dVar12 = pdVar3[-1];
            dVar11 = pdVar3[-2];
            pdVar7[-3] = pdVar3[-3];
            pdVar7[-4] = dVar10;
            pdVar7[-1] = dVar12;
            pdVar7[-2] = dVar11;
            pdVar7[-5] = dVar9;
            *param_3 = dVar8;
          }
          pdVar3 = pdVar4;
          pdVar6 = param_2;
          pdVar7 = param_3;
          if (pdVar4 <= param_4) goto LAB_101e5ca48;
        }
        if (pdVar7 != param_2) {
          dVar9 = param_2[-5];
          dVar8 = *pdVar5;
          dVar10 = param_2[-4];
          dVar12 = param_2[-1];
          dVar11 = param_2[-2];
          pdVar7[-3] = param_2[-3];
          pdVar7[-4] = dVar10;
          pdVar7[-1] = dVar12;
          pdVar7[-2] = dVar11;
          pdVar7[-5] = dVar9;
          *param_3 = dVar8;
        }
        pdVar4 = pdVar3;
        pdVar6 = pdVar5;
      } while ((param_1 < pdVar5) && (param_2 = pdVar5, param_4 < pdVar3));
    }
  }
LAB_101e5ca48:
  lVar1 = ((long)pdVar4 - (long)param_4) / 0x30;
  if ((pdVar6 != param_4) || (param_4 + lVar1 * 6 <= pdVar6)) {
    func_0x000107c610b8(pdVar6,param_4,lVar1 * 0x30);
  }
  return 1;
}



/* Entry: 101e5caac; end: 101e5cb37;  */

undefined * FUN_101e5caac(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar1 = (undefined *)0x112e33038;
    func_0x0001000285a8(0x112e33038,&UNK_10da1c220);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)(puVar2 + -0x20) / 0x30) * 2;
  }
  return puVar1;
}



/* Entry: 101e5cb38; end: 101e5cb4b;  */

/* WARNING: Removing unreachable block (ram,0x000101e5ef90) */
/* WARNING: Removing unreachable block (ram,0x000101e5efa0) */
/* WARNING: Removing unreachable block (ram,0x000101e5f090) */
/* WARNING: Removing unreachable block (ram,0x000101e5efac) */
/* WARNING: Removing unreachable block (ram,0x000101e5efb4) */
/* WARNING: Removing unreachable block (ram,0x000101e5f038) */
/* WARNING: Removing unreachable block (ram,0x000101e5f044) */
/* WARNING: Removing unreachable block (ram,0x000101e5f048) */
/* WARNING: Removing unreachable block (ram,0x000101e5f04c) */
/* WARNING: Removing unreachable block (ram,0x000101e5f058) */

undefined * FUN_101e5cb38(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR__swift_release_11034f4c0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112e33038;
    func_0x0001000285a8(0x112e33038,&UNK_10da1c220);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar5,&UNK_1106d4b40);
  (*(code *)puVar2)(param_1);
  return puVar3;
}



/* Entry: 101e5cb4c; end: 101e5cce3;  */

long FUN_101e5cb4c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  puVar12 = (ulong *)(param_4 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar14 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *puVar12;
  if (param_2 == (undefined8 *)0x0) {
    lVar16 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar16 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5cce4);
      (*pcVar6)();
    }
    lVar8 = 0;
    lVar15 = 0;
    uVar13 = 0x3f - uVar11 >> 6;
    lVar16 = lVar8;
    while( true ) {
      while (uVar14 == 0) {
        bVar7 = SCARRY8(lVar16,1);
        lVar16 = lVar16 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101e5cce0);
          (*pcVar6)();
        }
        if ((long)uVar13 <= lVar16) {
          uVar14 = 0;
          if ((long)uVar13 <= lVar8 + 1) {
            uVar13 = lVar8 + 1;
          }
          lVar16 = uVar13 - 1;
          param_3 = lVar15;
          goto LAB_101e5cc94;
        }
        uVar14 = puVar12[lVar16];
      }
      uVar5 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar9 = (undefined8 *)
               (*(long *)(param_4 + 0x38) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x30 +
               lVar16 * 0xc00);
      lVar15 = lVar15 + 1;
      uVar14 = uVar14 - 1 & uVar14;
      uVar1 = puVar9[1];
      uVar3 = puVar9[2];
      uVar2 = puVar9[3];
      uVar4 = puVar9[4];
      uVar10 = puVar9[5];
      *param_2 = *puVar9;
      param_2[1] = uVar1;
      param_2[2] = uVar3;
      param_2[3] = uVar2;
      param_2[4] = uVar4;
      param_2[5] = uVar10;
      if (lVar15 == param_3) break;
      param_2 = param_2 + 6;
      func_0x000107c61434();
      func_0x000107c61434(uVar4);
      lVar8 = lVar16;
    }
    func_0x000107c61434();
    func_0x000107c61434(uVar4);
  }
LAB_101e5cc94:
  *param_1 = param_4;
  param_1[1] = (long)puVar12;
  param_1[2] = ~uVar11;
  param_1[3] = lVar16;
  param_1[4] = uVar14;
  return param_3;
}



/* Entry: 101e5cce4; end: 101e5ce2b;  */

undefined * FUN_101e5cce4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  puVar13 = *(undefined **)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e33030,&UNK_10da1c0b8);
    puVar9 = puVar13;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar15 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar15[-2];
      uVar5 = puVar15[-1];
      uVar16 = *puVar15;
      uVar3 = puVar15[1];
      uVar6 = puVar15[2];
      uVar4 = puVar15[3];
      uVar7 = puVar15[4];
      uVar14 = puVar15[5];
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar7);
      uVar10 = uVar2;
      uVar11 = uVar5;
      func_0x000100029284();
      if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101e5ce28);
        (*pcVar8)();
      }
      uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar9 + uVar11 + 0x40) =
           *(ulong *)(puVar9 + uVar11 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar10 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar5;
      puVar12 = (undefined8 *)(*(long *)(puVar9 + 0x38) + uVar10 * 0x30);
      *puVar12 = uVar16;
      puVar12[1] = uVar3;
      puVar12[2] = uVar6;
      puVar12[3] = uVar4;
      puVar12[4] = uVar7;
      puVar12[5] = uVar14;
      if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101e5ce2c);
        (*pcVar8)();
      }
      puVar15 = puVar15 + 8;
      *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
      puVar13 = puVar13 + -1;
    } while (puVar13 != (undefined *)0x0);
    func_0x000107c61574(puVar9);
  }
  return puVar9;
}



/* Entry: 101e5ce2c; end: 101e5d10f;  */

/* WARNING: Removing unreachable block (ram,0x000101e5d0cc) */

void FUN_101e5ce2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_68;
  
  uVar8 = 0x112e32638;
  func_0x0001000285a8(0x112e32638,&UNK_10da1b9e0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    func_0x000107c61434(param_3);
    func_0x000107c6142c(param_1);
    uVar10 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(param_3);
    FUN_101e5ef20(0,lVar6,0);
    lVar5 = 0x30;
    puVar4 = puStack_68;
    do {
      uVar8 = *(undefined8 *)(param_1 + lVar5);
      uVar10 = *(ulong *)(puVar4 + 0x10);
      uVar11 = *(ulong *)(puVar4 + 0x18);
      puStack_68 = puVar4;
      func_0x000107c61434(uVar8);
      if (uVar11 >> 1 <= uVar10) {
        FUN_101e5ef20(1 < uVar11,uVar10 + 1,1);
        puVar4 = puStack_68;
      }
      *(ulong *)(puVar4 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar4 + uVar10 * 8 + 0x20) = uVar8;
      lVar5 = lVar5 + 0x18;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    func_0x000107c6142c(param_1);
    uVar10 = *(ulong *)(puVar4 + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar2;
  if (uVar10 != 0) {
    uVar11 = 0;
    puVar7 = puVar2;
    do {
      if (*(ulong *)(puVar4 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5d0bc);
        (*pcVar1)();
      }
      lVar5 = *(long *)(puVar4 + uVar11 * 8 + 0x20);
      uVar9 = *(ulong *)(lVar5 + 0x10);
      lVar6 = *(long *)(puVar7 + 0x10);
      if (SCARRY8(lVar6,uVar9)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5d0c0);
        (*pcVar1)();
      }
      func_0x000107c61434(lVar5);
      puVar2 = puVar7;
      func_0x000107c61558();
      if (((int)puVar2 == 0) ||
         (uVar3 = *(ulong *)(puVar7 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar9))) {
        func_0x000101e5ef14();
        uVar3 = *(ulong *)(puVar2 + 0x18) >> 1;
        puVar7 = puVar2;
        if (*(long *)(lVar5 + 0x10) != 0) goto LAB_101e5cfec;
LAB_101e5cf5c:
        func_0x000107c6142c(lVar5);
        puVar2 = puVar7;
        if (uVar9 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5d0c4);
          (*pcVar1)();
        }
      }
      else {
        puVar2 = puVar7;
        if (*(long *)(lVar5 + 0x10) == 0) goto LAB_101e5cf5c;
LAB_101e5cfec:
        if (uVar3 - *(long *)(puVar2 + 0x10) < uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5d0c8);
          (*pcVar1)();
        }
        func_0x000107c6140c(puVar2 + *(long *)(puVar2 + 0x10) * 0x30 + 0x20,lVar5 + 0x20,uVar9,
                            &UNK_1106d4b40);
        func_0x000107c6142c(lVar5);
        if (uVar9 != 0) {
          if (SCARRY8(*(long *)(puVar2 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5d0cc);
            (*pcVar1)();
          }
          *(ulong *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + uVar9;
        }
      }
      uVar11 = uVar11 + 1;
      puVar7 = puVar2;
    } while (uVar10 != uVar11);
  }
  func_0x000107c6142c(puVar4);
  puStack_68 = puVar2;
  func_0x000107c61434(puVar2);
  FUN_101e5c048(&puStack_68);
  func_0x000107c6142c(puVar2);
  *(undefined **)(unaff_x20 + 0x10) = puStack_68;
  return;
}



/* Entry: 101e5d110; end: 101e5d14f;  */

void FUN_101e5d110(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e32f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc55e70;
  func_0x000107c61520(&UNK_10dc55e70,&UNK_1106d4bc8);
  puRam0000000112e32f70 = puVar1;
  return;
}



/* Entry: 101e5d150; end: 101e5d183;  */

undefined8 FUN_101e5d150(undefined8 param_1)

{
  (*(code *)&DAT_103b29f3c)();
  return param_1;
}



/* Entry: 101e5d184; end: 101e5d18b;  */

void FUN_101e5d184(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101e5d18c; end: 101e5d1ab;  */

void FUN_101e5d18c(void)

{
  func_0x000107c61168(&PTR_PTR_112e32fb8);
  return;
}



/* Entry: 101e5d1ac; end: 101e5d59f;  */

void FUN_101e5d1ac(double *param_1,double param_2,double param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  double *pdVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  lVar11 = *(long *)(param_4 + 0x10);
  if (lVar11 == 0) {
    dVar16 = 0.0;
    dVar14 = 0.0;
    dVar6 = 0.0;
    dVar13 = 0.0;
    dVar12 = 0.0;
    dVar15 = 0.0;
  }
  else {
    dVar5 = 0.0;
    dStack_88 = 0.0;
    dStack_80 = 0.0;
    dStack_78 = 0.0;
    dVar3 = 0.0;
    dVar4 = 0.0;
    lVar9 = 0;
    dVar16 = 0.0;
    dVar14 = 0.0;
    dVar6 = 0.0;
    dVar13 = 0.0;
    dVar12 = 0.0;
    dVar15 = 0.0;
    lVar7 = lVar11 + -1;
    do {
      if (SCARRY8(lVar9,lVar7)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5d3a8);
        (*pcVar1)();
      }
      if ((lVar9 + lVar7 < -1) || (lVar10 = (lVar9 + lVar7) / 2, lVar11 <= lVar10)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5d3ac);
        (*pcVar1)();
      }
      pdVar8 = (double *)(param_4 + 0x20 + lVar10 * 0x30);
      dVar17 = *pdVar8;
      if (param_3 < dVar17) {
        lVar7 = lVar10 + -1;
      }
      else {
        bVar2 = false;
        if ((param_2 <= dVar17) && (bVar2 = false, !NAN(dVar17) && !NAN(param_3))) {
          bVar2 = dVar17 < param_3;
        }
        if (bVar2) {
          dVar14 = pdVar8[1];
          dVar16 = pdVar8[2];
          dVar13 = pdVar8[3];
          dVar12 = pdVar8[4];
          dVar15 = pdVar8[5];
          if (dVar6 == 0.0) {
            if (2147483647.0 <= dVar17) goto LAB_101e5d2e4;
LAB_101e5d294:
            func_0x000107c61434(dVar16);
            func_0x000107c61434(dVar12);
            dVar6 = dVar16;
            dVar16 = dVar17;
          }
          else {
            if (dVar17 < dVar4) goto LAB_101e5d294;
LAB_101e5d2e4:
            func_0x000101e5d5a0(dVar4,dVar3,dStack_78,dStack_88,dStack_80);
            dVar12 = dStack_80;
            dVar13 = dStack_88;
            dVar14 = dVar3;
            dVar15 = dVar5;
            dVar6 = dStack_78;
            dVar16 = dVar4;
          }
          func_0x000101e5d5d0(dVar4,dVar3,dStack_78,dStack_88,dStack_80,dVar5);
          lVar7 = lVar10 + -1;
          dVar3 = dVar14;
          dVar4 = dVar16;
          dVar5 = dVar15;
          dStack_88 = dVar13;
          dStack_80 = dVar12;
          dStack_78 = dVar6;
        }
        else {
          lVar9 = lVar10 + 1;
        }
      }
    } while (lVar9 <= lVar7);
  }
  *param_1 = dVar16;
  param_1[1] = dVar14;
  param_1[2] = dVar6;
  param_1[3] = dVar13;
  param_1[4] = dVar12;
  param_1[5] = dVar15;
  return;
}



/* Entry: 101e5d5a0; end: 101e5d5ff;  */

/* WARNING: Possible PIC construction at 0x000101e5d5b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e5d5bc) */

void FUN_101e5d5a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
    return;
  }
  return;
}



/* Entry: 101e5d600; end: 101e5d763;  */

int FUN_101e5d600(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101e5d67c;
        goto LAB_101e5d660;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101e5d660:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101e5d67c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101e5d764; end: 101e5d80f;  */

void FUN_101e5d764(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101e5d810; end: 101e5d827;  */

bool FUN_101e5d810(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101e5d828; end: 101e5d867;  */

void FUN_101e5d828(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e33040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da1c0fc;
  func_0x000107c61520(&UNK_10da1c0fc,&UNK_11048ee20);
  puRam0000000112e33040 = puVar1;
  return;
}



/* Entry: 101e5d868; end: 101e5d90b;  */

long FUN_101e5d868(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar3 = lVar1;
  if (lVar1 == 0) {
    func_0x000103c0f268();
    func_0x000107c610f8();
    uVar2 = 0;
    func_0x000103c0e7e0(0,0);
    lVar3 = 0;
    func_0x000101e5aecc();
    func_0x000107c613fc();
    *(undefined1 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
    *(code **)(lVar3 + 0x20) = FUN_101e5d90c;
    uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
    *(long *)(unaff_x20 + 0x38) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar2);
    lVar1 = 0;
  }
  func_0x000107c6157c(lVar1);
  return lVar3;
}



/* Entry: 101e5d90c; end: 101e5d9b7;  */

void FUN_101e5d90c(long param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x10) + 0x10))();
  if (param_1 == 0) {
    func_0x000107c610f8(PTR__OBJC_CLASS___AVSampleBufferDisplayLayer_1126b6c98);
    func_0x000107c453e4();
  }
  return;
}



/* Entry: 101e5d9b8; end: 101e5dabf;  */

/* WARNING: Possible PIC construction at 0x000101e5d9fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101e5daa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e5da00) */
/* WARNING: Removing unreachable block (ram,0x000101e5da1c) */
/* WARNING: Removing unreachable block (ram,0x000101e5dabc) */
/* WARNING: Removing unreachable block (ram,0x000101e5da30) */
/* WARNING: Removing unreachable block (ram,0x000101e5daa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5d9b8(void)

{
  long lVar1;
  long unaff_x20;
  
  if (*(char *)(*(long *)(unaff_x20 + 0x30) + _DAT_112e33168) == '\x01') {
    lVar1 = *(long *)(unaff_x20 + 0x30) + _DAT_112e33150;
    func_0x000107c61648();
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)();
      return;
    }
  }
  return;
}



/* Entry: 101e5dac0; end: 101e5db23;  */

void FUN_101e5dac0(void)

{
  long unaff_x20;
  
  FUN_101e5db2c(unaff_x20 + 0x10);
  func_0x000107c61610(unaff_x20 + 0x20);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e5db24; end: 101e5db2b;  */

void FUN_101e5db24(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_101e5e374(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101e5db2c; end: 101e5db4f;  */

undefined8 FUN_101e5db2c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101e5db50; end: 101e5decf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5db50(ulong param_1,long param_2,long param_3)

{
  ulong *puVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined **ppuVar15;
  ulong uVar16;
  
  uVar5 = param_1;
  (**(code **)(unaff_x20 + _DAT_112e33118))();
  lVar11 = _DAT_112e33150;
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar6 = unaff_x20 + _DAT_112e33150;
  func_0x000107c61648();
  if ((lVar6 == 0) || (func_0x000107c61574(), lVar6 != param_3)) {
    uVar5 = param_1;
    func_0x000107c614f0();
    (**(code **)(param_2 + 0x40))();
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  uVar5 = param_1;
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 0x10) + 8))();
  if (uVar5 == 0) {
    FUN_101e5d868();
    bVar4 = true;
    ppuVar15 = &PTR_DAT_11048ed60;
  }
  else {
    if (uVar5 == 1) {
      lVar6 = unaff_x20 + lVar11;
      func_0x000107c61648();
      if (lVar6 != 0) {
        func_0x000107c61574();
        lVar6 = unaff_x20 + lVar11;
        func_0x000107c61648();
        if (lVar6 == 0) {
          return;
        }
        func_0x000107c61574();
        if (lVar6 != param_3) {
          return;
        }
      }
      FUN_101e5e450();
      func_0x000107c61634(unaff_x20 + lVar11,0);
      if (*(long *)(unaff_x20 + _DAT_112e33110) == 0) {
        return;
      }
      FUN_101e4dc3c();
      return;
    }
    FUN_101e4dffc();
    func_0x000101e5d960();
    bVar4 = false;
    ppuVar15 = &PTR_DAT_11048e648;
  }
  uVar7 = uVar5;
  func_0x000107c614f0();
  lVar6 = param_3 + 0x20;
  func_0x000107c61618(lVar6);
  uVar8 = param_1;
  (*(code *)ppuVar15[3])(param_1,param_2,lVar6,uVar7,ppuVar15);
  func_0x000107c61170(lVar6);
  if (((uint)uVar8 & 0xff) == 2) goto LAB_101e5dea8;
  func_0x000107c61634(unaff_x20 + lVar11,param_3);
  lVar11 = unaff_x20 + _DAT_112e33158;
  *(long *)(lVar11 + 8) = param_2;
  func_0x000107c61604(lVar11,param_1);
  puVar1 = (ulong *)(unaff_x20 + _DAT_112e33148);
  uVar13 = *puVar1;
  uVar14 = 0;
  if (uVar13 == 0) {
LAB_101e5dd64:
    *puVar1 = uVar5;
    puVar1[1] = (ulong)ppuVar15;
    func_0x000107c615f0(uVar5);
    func_0x000107c615e8(uVar14);
    bVar3 = 1;
  }
  else {
    if (uVar5 != uVar13) {
      uVar16 = puVar1[1];
      uVar14 = uVar13;
      func_0x000107c614f0(uVar13);
      pcVar12 = *(code **)(uVar16 + 0x30);
      func_0x000107c615f0(uVar13);
      (*pcVar12)(uVar14,uVar16);
      func_0x000107c615e8(uVar13);
      uVar14 = *puVar1;
      goto LAB_101e5dd64;
    }
    bVar3 = 0;
  }
  lVar6 = _DAT_112e33168;
  lVar11 = _DAT_112e33140;
  if ((*(byte *)(unaff_x20 + _DAT_112e33168) & 1) == 0) {
LAB_101e5de58:
    FUN_101e5e1a8(uVar5,ppuVar15);
  }
  else {
    bVar2 = false;
    if ((uVar8 & 0xff) != 0) {
      bVar2 = (bool)(bVar3 ^ 1);
    }
    if (!bVar2) {
      lVar9 = *(long *)(unaff_x20 + _DAT_112e33140);
      if (lVar9 != 0) {
        func_0x000107c4a1a8();
        lVar10 = *(long *)(unaff_x20 + lVar11);
        if ((int)lVar9 != 0) {
          if (lVar10 != 0) {
            pcVar12 = (code *)ppuVar15[4];
            func_0x000107c61174();
            uVar8 = uVar7;
            (*pcVar12)(uVar7,ppuVar15);
            func_0x000107c53880(lVar10);
            func_0x000107c61170(lVar10);
            func_0x000107c61170(uVar8);
            if (*(long *)(unaff_x20 + lVar11) != 0) {
              (*(code *)ppuVar15[5])(*(long *)(unaff_x20 + lVar11),uVar7,ppuVar15);
            }
          }
          goto LAB_101e5de68;
        }
      }
      *(undefined8 *)(unaff_x20 + lVar11) = 0;
      func_0x000107c61170();
      *(undefined1 *)(unaff_x20 + lVar6) = 0;
      *(undefined1 *)(unaff_x20 + _DAT_112e33170) = 0;
      goto LAB_101e5de58;
    }
    if ((bVar4) && (*(long *)(unaff_x20 + _DAT_112e33140) != 0)) {
      func_0x000107c49910();
    }
  }
LAB_101e5de68:
  FUN_101e5e26c(param_1,param_2);
  lVar11 = *(long *)(unaff_x20 + _DAT_112e33140);
  if (lVar11 != 0) {
    func_0x000107c61174();
    func_0x000107c53160();
    func_0x000107c53160(lVar11);
    func_0x000107c61170(lVar11);
  }
LAB_101e5dea8:
  func_0x000107c615e8(uVar5);
  return;
}



/* Entry: 101e5ded0; end: 101e5df93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5ded0(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  if (SCARRY8(*(long *)(unaff_x20 + _DAT_112e33138),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5df94);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + _DAT_112e33138) = *(long *)(unaff_x20 + _DAT_112e33138) + 1;
  if (*(char *)(unaff_x20 + _DAT_112e33168) == '\x01') {
    lVar2 = unaff_x20 + _DAT_112e33150;
    func_0x000107c61648();
    if ((lVar2 != 0) && (func_0x000107c61574(), lVar2 == param_1)) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112e33140);
      if (lVar2 != 0) {
        func_0x000107c61174();
        lVar3 = lVar2;
        func_0x000107c4a1a8();
        if ((int)lVar3 != 0) {
          *(undefined1 *)(unaff_x20 + _DAT_112e33170) = 1;
          func_0x000107c5be54(lVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar2);
        return;
      }
    }
  }
  return;
}



/* Entry: 101e5df94; end: 101e5e077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5df94(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  
  if (*(char *)(unaff_x20 + _DAT_112e33168) == '\x01') {
    lVar2 = unaff_x20 + _DAT_112e33150;
    func_0x000107c61648();
    if ((lVar2 != 0) && (func_0x000107c61574(), lVar2 == param_1)) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112e33148);
      if (lVar2 != 0) {
        lVar3 = ((long *)(unaff_x20 + _DAT_112e33148))[1];
        lVar1 = lVar2;
        func_0x000107c614f0();
        pcVar4 = *(code **)(lVar3 + 8);
        func_0x000107c615f0(lVar2);
        (*pcVar4)(lVar1,lVar3);
        func_0x000107c615e8(lVar2);
        if (((uint)lVar1 & 0xff) == 1) {
          if (*(long *)(unaff_x20 + _DAT_112e33140) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c06a130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_msgSend_11034d288)
                      (*(long *)(unaff_x20 + _DAT_112e33140),PTR_s_invalidatePlaybackState_1125f8258
                      );
            return;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 101e5e078; end: 101e5e07b;  */

undefined * FUN_101e5e078(void)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = 0x372e3531;
  func_0x0001030f3ac8(0x372e3531,0xe400000000000000);
  if ((uVar1 & 1) == 0) {
    uVar1 = 0x322e372e3531;
    func_0x0001030f3ac8(0x322e372e3531,0xe600000000000000);
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___AVPictureInPictureController_1126a9670;
      func_0x000107c61168(PTR__OBJC_CLASS___AVPictureInPictureController_1126a9670);
      func_0x000107c4a1ac();
      return puVar2;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 101e5e07c; end: 101e5e0a7;  */

void FUN_101e5e07c(void)

{
  func_0x000107c610f8(PTR__OBJC_CLASS___AVPictureInPictureController_1126a9670);
                    /* WARNING: Could not recover jumptable at 0x00010c003b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101e5e0a8; end: 101e5e15f;  */

void FUN_101e5e0a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar2 = 
  "init(audioController:isPipSupported:controllerFactory:scheduleStartVerification:applicationStateProvider:)"
  ;
  func_0x0001000c10c0(
                     "init(audioController:isPipSupported:controllerFactory:scheduleStartVerification:applicationStateProvider:)"
                     );
  func_0x000107c61180();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11048ef38;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c4e528(0x4000000000000000,pcVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 101e5e160; end: 101e5e1a7;  */

undefined * FUN_101e5e160(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 101e5e1a8; end: 101e5e26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5e1a8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + _DAT_112e33120);
  func_0x000107c614f0();
  uVar3 = param_1;
  (**(code **)(param_2 + 0x20))();
  uVar2 = uVar3;
  (*pcVar1)();
  func_0x000107c61170(uVar3);
  func_0x000107c53fcc(uVar2);
  (**(code **)(param_2 + 0x28))(uVar2,param_1,param_2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e33140);
  *(undefined8 *)(unaff_x20 + _DAT_112e33140) = uVar2;
  func_0x000107c61170(uVar3);
  *(undefined1 *)(unaff_x20 + _DAT_112e33168) = 1;
  return;
}



/* Entry: 101e5e26c; end: 101e5e317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5e26c(float param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(param_3 + 0x38);
  uVar1 = param_2;
  (**(code **)(lVar2 + 8))();
  if (((uVar1 & 1) != 0) || ((**(code **)(lVar2 + 0x20))(param_2,lVar2), param_1 <= 0.0)) {
    if (*(long *)(unaff_x20 + _DAT_112e33110) != 0) {
      FUN_101e4dc3c();
    }
  }
  else if (*(long *)(unaff_x20 + _DAT_112e33110) != 0) {
    FUN_101e4ddac();
  }
  return;
}



/* Entry: 101e5e318; end: 101e5e373;  */

void FUN_101e5e318(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_101e5e374(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101e5e374; end: 101e5e44f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5e374(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  if ((param_1 == *(long *)(unaff_x20 + _DAT_112e33138)) &&
     (*(char *)(unaff_x20 + _DAT_112e33168) == '\x01')) {
    uVar1 = *(ulong *)(unaff_x20 + _DAT_112e33140);
    if ((uVar1 == 0) || (func_0x000107c4a1a8(), (uVar1 & 1) == 0)) {
      lVar3 = unaff_x20 + _DAT_112e33158;
      lVar2 = lVar3;
      func_0x000107c61618();
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar3 + 8);
        func_0x000107c614f0();
        (**(code **)(*(long *)(lVar3 + 0x18) + 0x28))();
        func_0x000107c615e8(lVar2);
      }
      FUN_101e5e450();
      func_0x000107c61634(unaff_x20 + _DAT_112e33150,0);
      if (*(long *)(unaff_x20 + _DAT_112e33110) != 0) {
        FUN_101e4dc3c();
      }
    }
  }
  return;
}



/* Entry: 101e5e450; end: 101e5e663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5e450(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x20;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  code *pcVar12;
  undefined1 auStack_68 [24];
  
  lVar6 = _DAT_112e33140;
  plVar1 = (long *)(unaff_x20 + _DAT_112e33148);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  uVar10 = *(ulong *)(unaff_x20 + _DAT_112e33140);
  if (uVar10 == 0) {
    func_0x000107c615f0(lVar2);
    lVar5 = 0;
    bVar9 = false;
  }
  else {
    func_0x000107c615f0(lVar2);
    func_0x000107c4a1a8();
    lVar4 = _DAT_112e33160;
    lVar5 = *(long *)(unaff_x20 + lVar6);
    if ((uVar10 & 1) == 0) {
      bVar9 = false;
    }
    else {
      if (lVar5 != 0) {
        func_0x000107c61428(unaff_x20 + _DAT_112e33160,auStack_68,0x21,0);
        uVar11 = *(ulong *)(unaff_x20 + lVar4);
        func_0x000107c61174();
        func_0x000107c615f0(lVar2);
        func_0x000107c61174();
        uVar10 = uVar11;
        func_0x000107c61558();
        *(ulong *)(unaff_x20 + lVar4) = uVar11;
        uVar7 = uVar11;
        if ((uVar10 & 1) == 0) {
          uVar7 = 0;
          func_0x000101e5f1c4(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11,
                              PTR__swift_bridgeObjectRelease_11034f258);
          *(ulong *)(unaff_x20 + lVar4) = uVar7;
        }
        uVar10 = *(ulong *)(uVar7 + 0x10);
        uVar11 = uVar7;
        if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar10) {
          uVar11 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
          func_0x000101e5f1c4(uVar11,uVar10 + 1,1,uVar7,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(ulong *)(uVar11 + 0x10) = uVar10 + 1;
        lVar8 = uVar11 + uVar10 * 0x18;
        *(long *)(lVar8 + 0x20) = lVar5;
        *(long *)(lVar8 + 0x28) = lVar2;
        *(long *)(lVar8 + 0x30) = lVar3;
        *(ulong *)(unaff_x20 + lVar4) = uVar11;
        func_0x000107c614a8(auStack_68);
        func_0x000107c5be54(lVar5);
        func_0x000107c61170(lVar5);
        lVar5 = *(long *)(unaff_x20 + lVar6);
      }
      bVar9 = true;
    }
  }
  *(undefined8 *)(unaff_x20 + lVar6) = 0;
  func_0x000107c61170(lVar5);
  *(undefined1 *)(unaff_x20 + _DAT_112e33168) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112e33170) = 0;
  lVar6 = unaff_x20 + _DAT_112e33158;
  *(undefined8 *)(lVar6 + 8) = 0;
  func_0x000107c61604(lVar6,0);
  lVar6 = *plVar1;
  *plVar1 = 0;
  plVar1[1] = 0;
  func_0x000107c615e8(lVar6);
  if (!bVar9) {
    if (lVar2 == 0) {
      return;
    }
    lVar6 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar12 = *(code **)(lVar3 + 0x30);
    func_0x000107c615f0(lVar2);
    (*pcVar12)(lVar6,lVar3);
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 101e5e664; end: 101e5e6c3; -[_TtC30SingleSnapPlayerImplementation27SingleSnapPlayerPipPipeline init] */

void FUN_101e5e664(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SingleSnapPlayerImplementation.SingleSnapPlayerPipPipeline",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5e690);
  (*pcVar1)();
}



/* Entry: 101e5e6c4; end: 101e5e78b; -[_TtC30SingleSnapPlayerImplementation27SingleSnapPlayerPipPipeline .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5e6c4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e33110));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e33118 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e33120 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e33128 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e33130 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e33140));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e33148));
  func_0x000107c61640(param_1 + _DAT_112e33150);
  FUN_101e5f674(param_1 + _DAT_112e33158);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e33160));
  return;
}



/* Entry: 101e5e78c; end: 101e5e7ab;  */

void FUN_101e5e78c(void)

{
  func_0x000107c61168(&PTR_PTR_112806220);
  return;
}



/* Entry: 101e5e7ac; end: 101e5e7cb; -[_TtC30SingleSnapPlayerImplementation27SingleSnapPlayerPipPipeline pictureInPictureControllerWillStartPictureInPicture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5e7ac(long param_1)

{
  code *pcVar1;
  
  if (!SCARRY8(*(long *)(param_1 + _DAT_112e33138),1)) {
    *(long *)(param_1 + _DAT_112e33138) = *(long *)(param_1 + _DAT_112e33138) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5e7cc);
  (*pcVar1)();
}



/* Entry: 101e5e7cc; end: 101e5e817; -[_TtC30SingleSnapPlayerImplementation27SingleSnapPlayerPipPipeline pictureInPictureControllerDidStartPictureInPicture:] */

/* WARNING: Possible PIC construction at 0x000101e5e800: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e5e804) */

void FUN_101e5e7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101e5f318();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101e5e818; end: 101e5e81b; -[_TtC30SingleSnapPlayerImplementation27SingleSnapPlayerPipPipeline pictureInPictureControllerWillStopPictureInPicture:] */

void FUN_101e5e818(void)

{
  return;
}



/* Entry: 101e5e81c; end: 101e5ec63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5e81c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  undefined *puStack_98;
  undefined *apuStack_90 [3];
  undefined1 auStack_78 [24];
  
  lVar16 = _DAT_112e33160;
  func_0x000107c61428(unaff_x20 + _DAT_112e33160,auStack_78,0,0);
  lVar19 = *(long *)(unaff_x20 + lVar16);
  uVar15 = *(ulong *)(lVar19 + 0x10);
  func_0x000107c61434(lVar19);
  uVar24 = 0;
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    plVar23 = (long *)(lVar19 + 0x20 + uVar24 * 0x18);
    do {
      plVar10 = plVar23;
      if (uVar15 == uVar24) {
        func_0x000107c6142c(lVar19);
        func_0x000107c61428(unaff_x20 + lVar16,apuStack_90,0x21,0);
        uVar15 = *(ulong *)(unaff_x20 + lVar16);
        uVar24 = *(ulong *)(uVar15 + 0x10);
        if (uVar24 != 0) {
          lVar19 = 0x20;
          uVar17 = 0;
          goto LAB_101e5e990;
        }
        uVar20 = 0;
        goto LAB_101e5e9d8;
      }
      if (*(ulong *)(lVar19 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x101e5ec54);
        (*pcVar7)();
      }
      uVar24 = uVar24 + 1;
      lVar14 = *plVar10;
      plVar23 = plVar10 + 3;
    } while (lVar14 != param_1);
    lVar12 = plVar10[1];
    lVar18 = plVar10[2];
    func_0x000107c615f0(lVar12);
    func_0x000107c61174();
    puVar8 = puStack_98;
    func_0x000107c61558();
    apuStack_90[0] = puStack_98;
    if (((ulong)puVar8 & 1) == 0) {
      func_0x000101e5ef3c(0,*(long *)(puStack_98 + 0x10) + 1,1);
    }
    uVar20 = *(ulong *)(apuStack_90[0] + 0x10);
    if (*(ulong *)(apuStack_90[0] + 0x18) >> 1 <= uVar20) {
      func_0x000101e5ef3c(1 < *(ulong *)(apuStack_90[0] + 0x18),uVar20 + 1,1);
    }
    *(ulong *)(apuStack_90[0] + 0x10) = uVar20 + 1;
    *(long *)(apuStack_90[0] + uVar20 * 0x18 + 0x20) = lVar14;
    *(long *)(apuStack_90[0] + uVar20 * 0x18 + 0x28) = lVar12;
    *(long *)(apuStack_90[0] + uVar20 * 0x18 + 0x30) = lVar18;
    puStack_98 = apuStack_90[0];
  } while( true );
LAB_101e5e990:
  uVar21 = uVar17 + 1;
  uVar20 = uVar24;
  if (*(long *)(uVar15 + lVar19) == param_1) {
    if (uVar24 - 1 != uVar17) {
      lVar19 = lVar19 + -0x20;
      do {
        if (uVar24 <= uVar21) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101e5ec58);
          (*pcVar7)();
        }
        lVar14 = *(long *)(uVar15 + lVar19 + 0x38);
        if (lVar14 != param_1) {
          if (uVar21 != uVar17) {
            if (uVar24 <= uVar17) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101e5ec5c);
              (*pcVar7)();
            }
            puVar11 = (undefined8 *)(uVar15 + 0x20 + uVar17 * 0x18);
            uVar9 = *puVar11;
            uVar3 = puVar11[1];
            uVar13 = puVar11[2];
            uVar1 = *(undefined8 *)(uVar15 + lVar19 + 0x40);
            uVar4 = *(undefined8 *)(uVar15 + lVar19 + 0x48);
            func_0x000107c615f0();
            func_0x000107c61174();
            func_0x000107c615f0(uVar3);
            func_0x000107c61174();
            uVar24 = uVar15;
            func_0x000107c61558();
            *(ulong *)(unaff_x20 + lVar16) = uVar15;
            if ((uVar24 & 1) == 0) {
              FUN_101e5f2ec();
              *(ulong *)(unaff_x20 + lVar16) = uVar15;
            }
            lVar12 = uVar15 + uVar17 * 0x18;
            uVar2 = *(undefined8 *)(lVar12 + 0x20);
            uVar5 = *(undefined8 *)(lVar12 + 0x28);
            *(long *)(lVar12 + 0x20) = lVar14;
            *(undefined8 *)(lVar12 + 0x28) = uVar1;
            *(undefined8 *)(lVar12 + 0x30) = uVar4;
            func_0x000107c61170(uVar2);
            func_0x000107c615e8(uVar5);
            *(ulong *)(unaff_x20 + lVar16) = uVar15;
            if (*(ulong *)(uVar15 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101e5ec60);
              (*pcVar7)();
            }
            lVar14 = uVar15 + lVar19;
            uVar1 = *(undefined8 *)(lVar14 + 0x38);
            uVar4 = *(undefined8 *)(lVar14 + 0x40);
            *(undefined8 *)(lVar14 + 0x38) = uVar9;
            *(undefined8 *)(lVar14 + 0x40) = uVar3;
            *(undefined8 *)(lVar14 + 0x48) = uVar13;
            func_0x000107c61170(uVar1);
            func_0x000107c615e8(uVar4);
            *(ulong *)(unaff_x20 + lVar16) = uVar15;
          }
          uVar17 = uVar17 + 1;
        }
        uVar21 = uVar21 + 1;
        uVar24 = *(ulong *)(uVar15 + 0x10);
        lVar19 = lVar19 + 0x18;
        uVar20 = uVar21;
      } while (uVar21 != uVar24);
    }
    uVar24 = uVar17;
    if ((long)uVar20 < (long)uVar24) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x101e5ec64);
      (*pcVar7)();
    }
LAB_101e5e9d8:
    FUN_101e5f47c(uVar24,uVar20);
    func_0x000107c614a8(apuStack_90);
    lVar19 = _DAT_112e33148;
    lVar16 = *(long *)(puStack_98 + 0x10);
    if (lVar16 == 0) {
      func_0x000107c61574();
      bVar6 = *(byte *)(unaff_x20 + _DAT_112e33170);
      *(undefined1 *)(unaff_x20 + _DAT_112e33170) = 0;
      if ((bVar6 & 1) == 0) {
        FUN_101e5e450();
        func_0x000107c61634(unaff_x20 + _DAT_112e33150,0);
        if (*(long *)(unaff_x20 + _DAT_112e33110) == 0) {
          return;
        }
        FUN_101e4dc3c();
        return;
      }
    }
    else {
      plVar23 = (long *)(puStack_98 + 0x30);
      do {
        lVar14 = plVar23[-1];
        if ((lVar14 != 0) && (lVar14 != *(long *)(unaff_x20 + lVar19))) {
          lVar18 = plVar23[-2];
          lVar12 = lVar14;
          func_0x000107c614f0(lVar14);
          lVar22 = *plVar23;
          pcVar7 = *(code **)(lVar22 + 0x30);
          func_0x000107c61174(lVar18);
          func_0x000107c615f0(lVar14);
          (*pcVar7)(lVar12,lVar22);
          func_0x000107c615e8(lVar14);
          func_0x000107c61170(lVar18);
        }
        plVar23 = plVar23 + 3;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      func_0x000107c61574(puStack_98);
      *(undefined1 *)(unaff_x20 + _DAT_112e33170) = 0;
    }
    lVar16 = *(long *)(unaff_x20 + _DAT_112e33140);
    if (lVar16 != 0) {
      func_0x000107c61174();
      func_0x000107c53160();
      func_0x000107c53160(lVar16);
      func_0x000107c61170(lVar16);
    }
    return;
  }
  lVar19 = lVar19 + 0x18;
  uVar17 = uVar21;
  if (uVar24 == uVar21) goto LAB_101e5e9d8;
  goto LAB_101e5e990;
}



/* Entry: 101e5ec64; end: 101e5ecb3; -[_TtC30SingleSnapPlayerImplementation27SingleSnapPlayerPipPipeline pictureInPictureControllerDidStopPictureInPicture:] */

/* WARNING: Possible PIC construction at 0x000101e5ec9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e5eca0) */

void FUN_101e5ec64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101e5e81c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101e5ecb4; end: 101e5ed17; -[_TtC30SingleSnapPlayerImplementation27SingleSnapPlayerPipPipeline pictureInPictureController:failedToStartPictureInPictureWithError:] */

/* WARNING: Possible PIC construction at 0x000101e5ecf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e5ecfc) */

void FUN_101e5ecb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101e5f540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101e5ed18; end: 101e5ed8b; -[_TtC30SingleSnapPlayerImplementation27SingleSnapPlayerPipPipeline pictureInPictureController:restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:] */

/* WARNING: Possible PIC construction at 0x000101e5ed74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e5ed78) */

void FUN_101e5ed18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000101e5f5dc();
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101e5ed8c; end: 101e5edb3;  */

void FUN_101e5ed8c(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1[1]);
  return;
}



/* Entry: 101e5edb4; end: 101e5ee5f;  */

undefined8 * FUN_101e5edb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = param_2[2];
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 101e5ee60; end: 101e5ef1f;  */

int FUN_101e5ee60(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101e5ef20; end: 101e5ef5f;  */

void FUN_101e5ef20(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000101e5f094();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101e5ef60; end: 101e5ef6b;  */

undefined * FUN_101e5ef60(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__swift_release_11034f4c0;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101e5f094);
        (*pcVar3)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112e33038;
    func_0x0001000285a8(0x112e33038,&UNK_10da1c220);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = ((long)(puVar5 + -0x20) / 0x30) * 2;
  }
  puVar5 = puVar4 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar5,puVar1,uVar7,&UNK_1106d4b40);
  }
  else {
    if (puVar4 != param_4 || puVar1 + uVar7 * 0x30 <= puVar5) {
      func_0x000107c610b8(puVar5,puVar1,uVar7 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar4;
}



/* Entry: 101e5ef6c; end: 101e5f2eb;  */

undefined *
FUN_101e5ef6c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e5f094);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112e33038;
    func_0x0001000285a8(0x112e33038,&UNK_10da1c220);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1106d4b40);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 101e5f2ec; end: 101e5f317;  */

void FUN_101e5f2ec(long param_1)

{
  func_0x000101e5f1c4(0,*(undefined8 *)(param_1 + 0x10),0,param_1,
                      PTR__swift_bridgeObjectRelease_11034f258);
  return;
}



/* Entry: 101e5f318; end: 101e5f3a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5f318(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if (SCARRY8(*(long *)(unaff_x20 + _DAT_112e33138),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e5f3a8);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + _DAT_112e33138) = *(long *)(unaff_x20 + _DAT_112e33138) + 1;
  (**(code **)(unaff_x20 + _DAT_112e33130))();
  if ((param_1 == 0) && (*(char *)(unaff_x20 + _DAT_112e33168) == '\x01')) {
    *(undefined1 *)(unaff_x20 + _DAT_112e33170) = 1;
    if (*(long *)(unaff_x20 + _DAT_112e33140) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2565b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(unaff_x20 + _DAT_112e33140),PTR_s_stopPictureInPicture_112673390);
      return;
    }
  }
  return;
}



/* Entry: 101e5f3a8; end: 101e5f47b;  */

void FUN_101e5f3a8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e5f46c);
    (*pcVar3)();
  }
  lVar6 = *unaff_x20;
  lVar7 = lVar6 + 0x20 + param_1 * 0x18;
  func_0x000107c61408(lVar7,lVar1,&UNK_11048ef20);
  lVar2 = param_3 - lVar1;
  if (SBORROW8(param_3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e5f470);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar6 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar6 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e5f474);
      (*pcVar3)();
    }
    uVar4 = lVar7 + param_3 * 0x18;
    uVar5 = lVar6 + 0x20 + param_2 * 0x18;
    if (uVar4 != uVar5 || uVar5 + lVar1 * 0x18 <= uVar4) {
      func_0x000107c610b8(uVar4,uVar5,lVar1 * 0x18);
    }
    if (SCARRY8(*(long *)(lVar6 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e5f478);
      (*pcVar3)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar2;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101e5f47c);
  (*pcVar3)();
}



/* Entry: 101e5f47c; end: 101e5f53f;  */

void FUN_101e5f47c(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e5f530);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e5f534);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e5f538);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      func_0x000107c61558();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        func_0x000101e5f1c4();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_101e5f3a8(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e5f540);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e5f53c);
  (*pcVar2)();
}



/* Entry: 101e5f540; end: 101e5f673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e5f540(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = unaff_x20 + _DAT_112e33158;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    (**(code **)(*(long *)(lVar2 + 0x18) + 0x28))();
    func_0x000107c615e8(lVar1);
  }
  FUN_101e5e450();
  func_0x000107c61634(unaff_x20 + _DAT_112e33150,0);
  if (*(long *)(unaff_x20 + _DAT_112e33110) != 0) {
    FUN_101e4dc3c();
  }
  return;
}



/* Entry: 101e5f674; end: 101e5f697;  */

undefined8 FUN_101e5f674(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101e5f698; end: 101e5f69f;  */

undefined8 * FUN_101e5f698(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c615f0(uVar1);
  return param_1;
}


