/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011b1134; end: 1011b115b;  */

undefined * FUN_1011b1134(void)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar3 = *(undefined **)(unaff_x20 + 0x18);
  bVar1 = *(byte *)(unaff_x20 + 0x20);
  ppuVar4 = &puStack_50;
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c45a48();
    puStack_50 = puVar3;
    func_0x000104888f7c(&puStack_50);
    func_0x000107c61170(puVar3);
    func_0x000103edf0bc();
    func_0x000107c61574(ppuVar4);
  }
  else {
    FUN_1011afbf4(puVar3,bVar1 & 1);
    func_0x000107c61170(lVar2);
  }
  return puVar3;
}



/* Entry: 1011b115c; end: 1011b118b;  */

void FUN_1011b115c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 1011b118c; end: 1011b1197;  */

void FUN_1011b118c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1011b06b0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1011b1198; end: 1011b11d3;  */

void FUN_1011b1198(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011b11d4; end: 1011b11df;  */

void FUN_1011b11d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1011b04ac(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1011b11e0; end: 1011b1217;  */

void FUN_1011b11e0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long unaff_x20;
  
  (*param_3)(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1011b1218; end: 1011b1223;  */

void FUN_1011b1218(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (*(code *)0x1011b0a08)
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined1 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1011b1224; end: 1011b125f;  */

void FUN_1011b1224(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011b1260; end: 1011b126b;  */

void FUN_1011b1260(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (*(code *)0x1011b0844)
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined1 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1011b126c; end: 1011b129f;  */

void FUN_1011b126c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long unaff_x20;
  
  (*param_3)(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined1 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1011b12a0; end: 1011b12e7;  */

void FUN_1011b12a0(long param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  uVar1 = (undefined1)param_1;
  if (param_1 != 0) {
    puVar2 = *(undefined1 **)(unaff_x20 + 0x10);
    func_0x000107c3ebcc();
    *puVar2 = uVar1;
  }
  return;
}



/* Entry: 1011b12e8; end: 1011b1317;  */

void FUN_1011b12e8(long param_1,long param_2)

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



/* Entry: 1011b1318; end: 1011b15af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1011b1318(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d64520,&UNK_10d929a60);
  uVar1 = param_2;
  func_0x000107c5d91c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112d53a88,&UNK_10d91a690);
  uVar1 = param_4;
  func_0x000107c4d80c();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112d64528,&UNK_10d929a70);
  func_0x000107c61174();
  uVar1 = param_5;
  func_0x000107c3e980();
  func_0x000107c61180();
  uVar4 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112d4f888,&UNK_10d9157b8);
  uVar1 = param_6;
  func_0x000107c5bd94();
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112d64530,&UNK_10d929a80);
  uVar6 = *(undefined8 *)(param_7 + _DAT_11302f310);
  func_0x000107c61174();
  uVar1 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  lVar7 = 0;
  FUN_1011b10d0();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112d644d8) = 0;
  *(undefined8 *)(lVar8 + _DAT_112d644e0) = 0;
  *(undefined8 *)(lVar8 + _DAT_112d644a8) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112d644b0) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112d644b8) = param_3;
  *(undefined8 *)(lVar8 + _DAT_112d644c0) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112d644c8) = uVar5;
  *(undefined8 *)(lVar8 + _DAT_112d644d0) = uVar1;
  plVar9 = &lStack_70;
  lStack_70 = lVar8;
  lStack_68 = lVar7;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(plVar9);
  return unaff_x20;
}



/* Entry: 1011b15b0; end: 1011b15cb;  */

void FUN_1011b15b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011b15cc; end: 1011b15eb;  */

void FUN_1011b15cc(void)

{
  func_0x000107c61168(&PTR_PTR_112d64578);
  return;
}



/* Entry: 1011b15ec; end: 1011b15f7; -[SCFavoriteStickerChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b15ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d645d0;
  func_0x000107c61428(param_1 + _DAT_112d645d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b15f8; end: 1011b1603; -[SCFavoriteStickerChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b15f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d645d0;
  func_0x000107c61428(param_1 + _DAT_112d645d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b1604; end: 1011b160f; -[SCFavoriteStickerChatActionMenuPluginEntryPoint ctpUserDataFeedServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b1604(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d645d8;
  func_0x000107c61428(param_1 + _DAT_112d645d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b1610; end: 1011b161b; -[SCFavoriteStickerChatActionMenuPluginEntryPoint setCtpUserDataFeedServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b1610(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d645d8;
  func_0x000107c61428(param_1 + _DAT_112d645d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b161c; end: 1011b1627; -[SCFavoriteStickerChatActionMenuPluginEntryPoint creativeToolsMetricsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b161c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d645e0;
  func_0x000107c61428(param_1 + _DAT_112d645e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b1628; end: 1011b1633; -[SCFavoriteStickerChatActionMenuPluginEntryPoint setCreativeToolsMetricsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b1628(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d645e0;
  func_0x000107c61428(param_1 + _DAT_112d645e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b1634; end: 1011b163f; -[SCFavoriteStickerChatActionMenuPluginEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b1634(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d645e8;
  func_0x000107c61428(param_1 + _DAT_112d645e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b1640; end: 1011b164b; -[SCFavoriteStickerChatActionMenuPluginEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b1640(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d645e8;
  func_0x000107c61428(param_1 + _DAT_112d645e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b164c; end: 1011b1657; -[SCFavoriteStickerChatActionMenuPluginEntryPoint userInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b164c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d645f0;
  func_0x000107c61428(param_1 + _DAT_112d645f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b1658; end: 1011b1663; -[SCFavoriteStickerChatActionMenuPluginEntryPoint setUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b1658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d645f0;
  func_0x000107c61428(param_1 + _DAT_112d645f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b1664; end: 1011b166f; -[SCFavoriteStickerChatActionMenuPluginEntryPoint stickerInjectorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b1664(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d645f8;
  func_0x000107c61428(param_1 + _DAT_112d645f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b1670; end: 1011b167b; -[SCFavoriteStickerChatActionMenuPluginEntryPoint setStickerInjectorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b1670(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d645f8;
  func_0x000107c61428(param_1 + _DAT_112d645f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b167c; end: 1011b1687; -[SCFavoriteStickerChatActionMenuPluginEntryPoint customojiServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b167c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64600;
  func_0x000107c61428(param_1 + _DAT_112d64600,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b1688; end: 1011b16cb;  */

void FUN_1011b1688(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b16cc; end: 1011b16d7; -[SCFavoriteStickerChatActionMenuPluginEntryPoint setCustomojiServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b16cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64600;
  func_0x000107c61428(param_1 + _DAT_112d64600,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b16d8; end: 1011b172b;  */

void FUN_1011b16d8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b172c; end: 1011b1b37;  */

/* WARNING: Possible PIC construction at 0x0001011b1848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1884: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b18cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b1a80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011b1a94) */
/* WARNING: Removing unreachable block (ram,0x0001011b1ab4) */
/* WARNING: Removing unreachable block (ram,0x0001011b1ae4) */
/* WARNING: Removing unreachable block (ram,0x0001011b1ad4) */
/* WARNING: Removing unreachable block (ram,0x0001011b1b14) */
/* WARNING: Removing unreachable block (ram,0x0001011b1b04) */
/* WARNING: Removing unreachable block (ram,0x0001011b1af4) */
/* WARNING: Removing unreachable block (ram,0x0001011b1a34) */
/* WARNING: Removing unreachable block (ram,0x0001011b1a24) */
/* WARNING: Removing unreachable block (ram,0x0001011b1a14) */
/* WARNING: Removing unreachable block (ram,0x0001011b1a04) */
/* WARNING: Removing unreachable block (ram,0x0001011b194c) */
/* WARNING: Removing unreachable block (ram,0x0001011b190c) */
/* WARNING: Removing unreachable block (ram,0x0001011b18d0) */
/* WARNING: Removing unreachable block (ram,0x0001011b1888) */
/* WARNING: Removing unreachable block (ram,0x0001011b184c) */
/* WARNING: Removing unreachable block (ram,0x0001011b1a84) */

void FUN_1011b172c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c40e3c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c40ca0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4d840();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar3 = unaff_x20;
        func_0x000107c5d9b4();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar3 = unaff_x20;
          func_0x000107c5bd98();
          func_0x000107c61180();
          if (lVar3 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            func_0x000107c411c8();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              FUN_1011b15cc();
              func_0x000107c613fc();
              func_0x0001000285a8(0x112d64520,&UNK_10d929a60);
              func_0x000107c5d91c();
              func_0x000107c61180();
              func_0x0001000bda74();
              lVar1 = lVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1011b1b38; end: 1011b1b5f; -[SCFavoriteStickerChatActionMenuPluginEntryPoint begin] */

void FUN_1011b1b38(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011b172c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011b1b60; end: 1011b1ba3; -[SCFavoriteStickerChatActionMenuPluginEntryPoint end] */

void FUN_1011b1b60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b1ba4; end: 1011b1f57;  */

void FUN_1011b1ba4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
    goto LAB_1011b1c30;
  }
  if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10e36d0)) {
    uVar2 = 0xd000000000000017;
    func_0x000107c605b8(0xd000000000000017,0x800000010ef1c930,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10e2e40)) ||
         (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1d1c0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53aec();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10eec60)) ||
           (func_0x000107c605b8(0xd000000000000014,0x800000010ef113a0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56b34();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ef5f0)) ||
             (func_0x000107c605b8(0xd000000000000010,0x800000010ef10a10,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c5a368();
          }
          else {
            if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10e2e80)) {
              uVar2 = 0xd000000000000017;
              func_0x000107c605b8(0xd000000000000017,0x800000010ef1d180,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0xd000000000000011;
                if (((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10d4ee0)) &&
                   (func_0x000107c605b8(0xd000000000000011,0x800000010ef2b120,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "FavoriteStickerChatActionMenuPlugin/SCFavoriteStickerChatActionMenuPluginEntryPoint.swift"
                                      ,0x59,2,0x40,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b1f58);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c53dbc();
                goto LAB_1011b1c30;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c598a4();
          }
        }
      }
      goto LAB_1011b1c30;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53bcc();
LAB_1011b1c30:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011b1f58; end: 1011b2003; -[SCFavoriteStickerChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011b1f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1011b1ba4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011b2004; end: 1011b20db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b2004(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d645d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d645d8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d645e0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d645e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d645f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d645f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d64600,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d64608) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011b20dc; end: 1011b20fb; -[SCFavoriteStickerChatActionMenuPluginEntryPoint init] */

void FUN_1011b20dc(void)

{
  FUN_1011b2004();
  return;
}



/* Entry: 1011b20fc; end: 1011b212f;  */

void FUN_1011b20fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011b2130; end: 1011b21c7; -[SCFavoriteStickerChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b2130(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d645d0);
  func_0x000107c61610(param_1 + _DAT_112d645d8);
  func_0x000107c61610(param_1 + _DAT_112d645e0);
  func_0x000107c61610(param_1 + _DAT_112d645e8);
  func_0x000107c61610(param_1 + _DAT_112d645f0);
  func_0x000107c61610(param_1 + _DAT_112d645f8);
  func_0x000107c61610(param_1 + _DAT_112d64600);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d64608));
  return;
}



/* Entry: 1011b21c8; end: 1011b21e7;  */

void FUN_1011b21c8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5ac8);
  return;
}



/* Entry: 1011b21e8; end: 1011b222f; -[_TtC28FollowUpChatActionMenuPlugin28FollowUpChatActionMenuPlugin chatInputContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b21e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64638;
  func_0x000107c61428(param_1 + _DAT_112d64638,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b2230; end: 1011b2287; -[_TtC28FollowUpChatActionMenuPlugin28FollowUpChatActionMenuPlugin setChatInputContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b2230(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64638;
  func_0x000107c61428(param_1 + _DAT_112d64638,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b2288; end: 1011b231b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b2288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112d64638,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d64640) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d64648) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d64650) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011b231c; end: 1011b2323; -[_TtC28FollowUpChatActionMenuPlugin28FollowUpChatActionMenuPlugin itemType] */

undefined8 FUN_1011b231c(void)

{
  return 0x1a;
}



/* Entry: 1011b2324; end: 1011b232b; -[_TtC28FollowUpChatActionMenuPlugin28FollowUpChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011b2324(void)

{
  return 0;
}



/* Entry: 1011b232c; end: 1011b2933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011b232c(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  char cStack_71;
  
  ppuVar1 = param_1;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar2 = ppuVar1;
    func_0x000107c404a8();
    if ((int)ppuVar2 == 0x18) {
      ppuVar2 = ppuVar1;
      func_0x000107c3ec0c();
      func_0x000107c61180();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar3 = ppuVar2;
        func_0x000107c5bd00();
        if (((int)ppuVar3 == 4) &&
           (ppuVar3 = ppuVar2, func_0x000107c44af4(), puVar7 = PTR___NSConcreteStackBlock_11034bd00,
           ((ulong)ppuVar3 & 1) == 0)) {
          cStack_71 = '\0';
          uVar15 = *(undefined8 *)(param_2 + _DAT_112f14b98);
          pcStack_88 = FUN_1011b2934;
          puStack_80 = (undefined *)0x0;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          pcStack_98 = (code *)&UNK_10006eb60;
          puStack_90 = &UNK_11038e6a0;
          ppuVar3 = &puStack_a8;
          func_0x000107c60bc4(ppuVar3);
          func_0x000107c61574(puStack_80);
          pcStack_88 = (code *)0x1011b293c;
          puStack_80 = (undefined *)0x0;
          puStack_a8 = puVar7;
          uStack_a0 = 0x42000000;
          pcStack_98 = (code *)0x1011a7a34;
          puStack_90 = &UNK_11038e6c8;
          ppuVar6 = &puStack_a8;
          func_0x000107c60bc4(ppuVar6);
          func_0x000107c61574(puStack_80);
          puVar4 = &UNK_11038e700;
          func_0x000107c613fc(&UNK_11038e700,0x18,7);
          *(char **)(puVar4 + 0x10) = &cStack_71;
          puVar14 = &UNK_11038e728;
          lVar13 = 0x20;
          func_0x000107c613fc(&UNK_11038e728,0x20,7);
          *(undefined8 *)(puVar14 + 0x10) = 0x1011b3098;
          *(undefined **)(puVar14 + 0x18) = puVar4;
          pcStack_88 = FUN_1011b30a0;
          puStack_a8 = puVar7;
          uStack_a0 = 0x42000000;
          pcStack_98 = (code *)0x1011a64f8;
          puStack_90 = &UNK_11038e740;
          ppuVar5 = &puStack_a8;
          puStack_80 = puVar14;
          func_0x000107c60bc4(ppuVar5);
          func_0x000107c61574(puStack_80);
          func_0x000107c4c640(uVar15);
          func_0x000107c60bd0(ppuVar5);
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c60bd0(ppuVar3);
          if (cStack_71 != '\x01') {
            puVar7 = PTR_PTR_1126ae558;
            func_0x000107c61168(PTR_PTR_1126ae558);
            puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c45a48();
            func_0x000107c451b0(puVar7);
LAB_1011b2614:
            func_0x000107c61180();
            func_0x000107c61574(puVar4);
            func_0x000107c61170(puVar14);
            func_0x000107c61170(ppuVar2);
            func_0x000107c61170(ppuVar1);
            return puVar7;
          }
          func_0x000107c4cde0();
          func_0x000107c61180();
          ppuVar3 = param_1;
          func_0x000107c5faec();
          lVar8 = lVar13;
          func_0x000107c61170(param_1);
          ppuVar6 = &PTR____CFConstantStringClassReference_110e12b58;
          func_0x000107c5faec();
          if ((ppuVar3 == ppuVar6) && (lVar13 == lVar8)) {
            func_0x000107c6142c(lVar13);
            lVar13 = lVar8;
          }
          else {
            ppuVar5 = ppuVar3;
            func_0x000107c605b8(ppuVar3,lVar13,ppuVar6,lVar8,0);
            func_0x000107c6142c(lVar8);
            if (((ulong)ppuVar5 & 1) == 0) {
              lVar8 = *(long *)(unaff_x20 + _DAT_112d64650);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar8 != 0) {
                uVar15 = 0x112d3bf08;
                func_0x0001000285a8(0x112d3bf08,&UNK_10d913340);
                func_0x000107c613fc();
                lVar9 = 0;
                func_0x00010095c380(0,uVar15);
                lVar10 = 0x112d38280;
                func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
                func_0x000107c613fc();
                *(undefined8 *)(lVar10 + 0x18) = 2;
                *(undefined8 *)(lVar10 + 0x10) = 1;
                *(undefined ***)(lVar10 + 0x20) = ppuVar3;
                *(long *)(lVar10 + 0x28) = lVar13;
                func_0x000107c61434(lVar13);
                lVar11 = lVar10;
                func_0x000107c5fc48(lVar10,PTR___sSSN_11034da80);
                func_0x000107c61574(lVar10);
                uVar15 = 0;
                FUN_1011b33bc(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
                func_0x000107c5ffdc();
                puVar14 = &UNK_11038e778;
                func_0x000107c613fc(&UNK_11038e778,0x18,7);
                func_0x000107c61614(puVar14 + 0x10,unaff_x20);
                puVar12 = &UNK_11038e7a0;
                func_0x000107c613fc(&UNK_11038e7a0,0x30,7);
                *(undefined ***)(puVar12 + 0x10) = ppuVar3;
                *(long *)(puVar12 + 0x18) = lVar13;
                *(undefined **)(puVar12 + 0x20) = puVar14;
                *(long *)(puVar12 + 0x28) = lVar9;
                pcStack_88 = FUN_1011b30c0;
                puStack_a8 = puVar7;
                uStack_a0 = 0x42000000;
                pcStack_98 = FUN_100f6151c;
                puStack_90 = &UNK_11038e7b8;
                ppuVar3 = &puStack_a8;
                puStack_80 = puVar12;
                func_0x000107c60bc4(ppuVar3);
                puVar7 = puStack_80;
                func_0x000107c6157c(lVar9);
                func_0x000107c61574(puVar7);
                func_0x000107c4b7e8(lVar8);
                func_0x000107c60bd0(ppuVar3);
                func_0x000107c61170(lVar11);
                func_0x000107c61170(uVar15);
                puVar14 = *(undefined **)(lVar9 + 0x10);
                puVar7 = puVar14;
                func_0x000107c6157c(puVar14);
                func_0x00010488b12c();
                func_0x000107c61574(puVar4);
                func_0x000107c615e8(lVar8);
                func_0x000107c61574(lVar9);
                func_0x000107c61574(puVar14);
                func_0x000107c61170(ppuVar2);
                func_0x000107c61170(ppuVar1);
                return puVar7;
              }
              func_0x000107c6142c(lVar13);
              puVar7 = PTR_PTR_1126ae558;
              func_0x000107c61168(PTR_PTR_1126ae558);
              puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
              func_0x000107c45a48();
              func_0x000107c451b0(puVar7);
              goto LAB_1011b2614;
            }
          }
          func_0x000107c6142c(lVar13);
          lVar13 = *(long *)(unaff_x20 + _DAT_112d64640);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar13 != 0) {
            func_0x000107c4a074();
            func_0x000107c615e8(lVar13);
          }
          puVar7 = PTR_PTR_1126ae558;
          func_0x000107c61168(PTR_PTR_1126ae558);
          puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c451b0(puVar7);
          func_0x000107c61180();
          func_0x000107c61574(puVar4);
          func_0x000107c61170(puVar14);
          func_0x000107c61170(ppuVar2);
          func_0x000107c61170(ppuVar1);
          return puVar7;
        }
        func_0x000107c61170(ppuVar1);
        ppuVar1 = ppuVar2;
      }
    }
    func_0x000107c61170(ppuVar1);
  }
  puVar7 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar7;
}



/* Entry: 1011b2934; end: 1011b2943;  */

void FUN_1011b2934(void)

{
  return;
}



/* Entry: 1011b2944; end: 1011b298b;  */

void FUN_1011b2944(undefined8 param_1,long param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if (param_2 != 0) {
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (param_2 != 0) {
      func_0x000107c61170();
      uVar1 = 1;
      goto LAB_1011b297c;
    }
  }
  uVar1 = 0;
LAB_1011b297c:
  *param_3 = uVar1;
  return;
}



/* Entry: 1011b298c; end: 1011b2b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b298c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_60 [24];
  undefined *puStack_48;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar8 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar2 = param_1;
      if (-1 < (long)param_1) {
        uVar2 = uVar8;
      }
      func_0x000107c60480();
    }
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    else if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b2b10);
        (*pcVar1)();
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = 0;
      func_0x00010103193c(0,param_1);
    }
  }
  func_0x000107c5fadc(param_3,param_4);
  uVar4 = uVar3;
  FUN_100bec1f0(uVar3,param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  if ((int)uVar4 != 0) {
    func_0x000107c61428(param_5 + 0x10,auStack_60,0,0);
    param_5 = param_5 + 0x10;
    func_0x000107c61618();
    if (param_5 != 0) {
      lVar7 = *(long *)(param_5 + _DAT_112d64648);
      func_0x000107c61174();
      func_0x000107c61170(param_5);
      lVar5 = lVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      if (lVar5 != 0) {
        func_0x000107c4a5d8(lVar5);
        func_0x000107c615e8(lVar5);
      }
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_48 = puVar6;
  func_0x000100b60084(&puStack_48);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1011b2b10; end: 1011b2b87; -[_TtC28FollowUpChatActionMenuPlugin28FollowUpChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

void FUN_1011b2b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011b232c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011b2b88; end: 1011b2d6b;  */

undefined * FUN_1011b2b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  puVar1 = PTR_PTR_1126a5e70;
  uVar3 = param_2;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_1011b35d8();
  uVar6 = uVar3;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar3);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2b1e0);
  func_0x000107c520f0(puVar1);
  func_0x000107c61170(uVar3);
  puVar2 = &UNK_11038e778;
  func_0x000107c613fc(&UNK_11038e778,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  puVar4 = &UNK_11038e840;
  func_0x000107c613fc(&UNK_11038e840,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  pcStack_50 = FUN_1011b314c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11038e858;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar5);
  return puVar1;
}



/* Entry: 1011b2d6c; end: 1011b2dc7;  */

void FUN_1011b2d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1011b3158(param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1011b2dc8; end: 1011b2f5b; -[_TtC28FollowUpChatActionMenuPlugin28FollowUpChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011b2dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x0001000b637c(param_3);
  func_0x0001000285a8(0x112d63e98,&UNK_10d9296d8);
  uVar2 = param_4;
  func_0x0001000b637c(param_4);
  uVar5 = uVar2;
  func_0x0001006c733c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar5);
  puVar3 = &UNK_11038e7f0;
  func_0x000107c613fc(&UNK_11038e7f0,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_11038e818;
  func_0x000107c613fc(&UNK_11038e818,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1011b3418;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uVar5 = 0;
  FUN_1011b33bc(0,0x112d3bed0,&PTR_PTR_1126a5e70);
  func_0x000107c61174(param_1);
  uVar1 = 0x1011b343c;
  func_0x0001000d5158(0x1011b343c,puVar4,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar4);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1011b2f5c; end: 1011b2fc3;  */

void FUN_1011b2f5c(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != 0) {
    lVar3 = param_2;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (param_2 != 0) {
      lVar2 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      goto LAB_1011b2fac;
    }
  }
  lVar2 = 0;
  lVar3 = 0;
LAB_1011b2fac:
  lVar1 = param_3[1];
  *param_3 = lVar2;
  param_3[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 1011b2fc4; end: 1011b3023; -[_TtC28FollowUpChatActionMenuPlugin28FollowUpChatActionMenuPlugin init] */

void FUN_1011b2fc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FollowUpChatActionMenuPlugin.FollowUpChatActionMenuPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b2ff0);
  (*pcVar1)();
}



/* Entry: 1011b3024; end: 1011b307b; -[_TtC28FollowUpChatActionMenuPlugin28FollowUpChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011b3024(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d64640));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d64648));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d64650));
  param_1 = param_1 + _DAT_112d64638;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011b307c; end: 1011b309f;  */

void FUN_1011b307c(long param_1,long param_2)

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



/* Entry: 1011b30a0; end: 1011b30bf;  */

void FUN_1011b30a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011b30c0; end: 1011b30d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b30c0(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  undefined1 auStack_60 [24];
  undefined *puStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar3 = 0;
  if (param_1 != 0) {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar2 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar2 = param_1;
      if (-1 < (long)param_1) {
        uVar2 = uVar9;
      }
      func_0x000107c60480();
    }
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    else if ((param_1 & 0xc000000000000001) == 0) {
      if (*(long *)(uVar9 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b2b10);
        (*pcVar1)();
      }
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = 0;
      func_0x00010103193c(0,param_1);
    }
  }
  func_0x000107c5fadc(uVar4,uVar5);
  uVar5 = uVar3;
  FUN_100bec1f0(uVar3,uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if ((int)uVar5 != 0) {
    func_0x000107c61428(lVar6 + 0x10,auStack_60,0,0);
    lVar6 = lVar6 + 0x10;
    func_0x000107c61618();
    if (lVar6 != 0) {
      lVar8 = *(long *)(lVar6 + _DAT_112d64648);
      func_0x000107c61174();
      func_0x000107c61170(lVar6);
      lVar6 = lVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (lVar6 != 0) {
        func_0x000107c4a5d8(lVar6);
        func_0x000107c615e8(lVar6);
      }
    }
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  puStack_48 = puVar7;
  func_0x000100b60084(&puStack_48);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 1011b30d8; end: 1011b30f7;  */

void FUN_1011b30d8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5bb8);
  return;
}



/* Entry: 1011b30f8; end: 1011b314b;  */

void FUN_1011b30f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 1011b314c; end: 1011b3157;  */

void FUN_1011b314c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1011b3158(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1011b3158; end: 1011b33b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b3158(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112d64638;
  func_0x000107c61428(unaff_x20 + _DAT_112d64638,auStack_68,0,0);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    uStack_78 = 0;
    lStack_70 = 0;
    uVar9 = *(undefined8 *)(param_1 + _DAT_112f14b98);
    uStack_88 = 0x1011b2938;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_10006eb60;
    puStack_90 = &UNK_11038e880;
    ppuVar3 = &puStack_a8;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_80);
    uStack_88 = 0x1011b2940;
    puStack_80 = (undefined *)0x0;
    puStack_a8 = puVar8;
    uStack_a0 = 0x42000000;
    puStack_98 = (undefined *)0x1011a7a34;
    puStack_90 = &UNK_11038e8a8;
    ppuVar4 = &puStack_a8;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_80);
    puVar5 = &UNK_11038e8e0;
    func_0x000107c613fc(&UNK_11038e8e0,0x18,7);
    *(undefined8 **)(puVar5 + 0x10) = &uStack_78;
    puVar6 = &UNK_11038e908;
    func_0x000107c613fc(&UNK_11038e908,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_1011b33b4;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    uStack_88 = 0x1011b3438;
    puStack_a8 = puVar8;
    uStack_a0 = 0x42000000;
    puStack_98 = (undefined *)0x1011a64f8;
    puStack_90 = &UNK_11038e920;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_80);
    func_0x000107c4c640(uVar9);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    lVar1 = lStack_70;
    uVar9 = uStack_78;
    if (lStack_70 != 0) {
      puStack_a8 = (undefined *)0x203e;
      uStack_a0 = 0xe200000000000000;
      func_0x000107c61434(lStack_70);
      func_0x000107c5fb78(uVar9,lVar1);
      func_0x000107c6142c(lVar1);
      uVar9 = uStack_a0;
      func_0x000107c61434(uStack_a0);
      func_0x000107c5fb78(0xa0a,0xe200000000000000);
      func_0x000107c6142c(uVar9);
      uVar9 = uStack_a0;
      puVar8 = puStack_a8;
      func_0x000107c5fadc(puStack_a8,uStack_a0);
      func_0x000107c6142c(uVar9);
      func_0x000107c50174(lVar2);
      func_0x000107c61170(puVar8);
      func_0x000107c42610(lVar2);
    }
    func_0x000107c615e8(lVar2);
    lVar2 = lStack_70;
    func_0x000107c61574(puVar5);
    func_0x000107c6142c(lVar2);
  }
  return;
}



/* Entry: 1011b33b4; end: 1011b33bb;  */

void FUN_1011b33b4(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  if (param_2 != 0) {
    lVar4 = param_2;
    func_0x000107c5c82c();
    func_0x000107c61180();
    if (param_2 != 0) {
      lVar3 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      goto LAB_1011b2fac;
    }
  }
  lVar3 = 0;
  lVar4 = 0;
LAB_1011b2fac:
  lVar1 = plVar2[1];
  *plVar2 = lVar3;
  plVar2[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 1011b33bc; end: 1011b33fb;  */

void FUN_1011b33bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1011b33fc; end: 1011b343f;  */

void FUN_1011b33fc(long param_1,long param_2)

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



/* Entry: 1011b3440; end: 1011b359b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011b3440(long param_1,long param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar7 = &lStack_70;
  func_0x000107c613fc();
  uVar2 = *(undefined8 *)(param_2 + _DAT_1130404b8);
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar4 = param_4;
  func_0x000107c5b484();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = 0;
    FUN_1011b30d8();
    lVar6 = lVar5;
    func_0x000107c610f8();
    func_0x000107c61614(lVar6 + _DAT_112d64638,0);
    *(undefined8 *)(lVar6 + _DAT_112d64640) = uVar2;
    *(undefined8 *)(lVar6 + _DAT_112d64648) = uVar3;
    *(long *)(lVar6 + _DAT_112d64650) = lVar4;
    lStack_70 = lVar6;
    lStack_68 = lVar5;
    func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
    func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(plVar7);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b359c);
  (*pcVar1)();
}



/* Entry: 1011b359c; end: 1011b35b7;  */

void FUN_1011b359c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011b35b8; end: 1011b35d7;  */

void FUN_1011b35b8(void)

{
  func_0x000107c61168(&PTR_PTR_112d646c0);
  return;
}



/* Entry: 1011b35d8; end: 1011b36a3;  */

undefined1  [16] FUN_1011b35d8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffeb;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2b210);
  uVar3 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010ef2b230);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b36a4);
  (*pcVar1)();
}



/* Entry: 1011b36a4; end: 1011b36af; -[SCFollowUpChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b36a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64718;
  func_0x000107c61428(param_1 + _DAT_112d64718,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b36b0; end: 1011b36bb; -[SCFollowUpChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b36b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64718;
  func_0x000107c61428(param_1 + _DAT_112d64718,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b36bc; end: 1011b36c7; -[SCFollowUpChatActionMenuPluginEntryPoint myAIExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b36bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64720;
  func_0x000107c61428(param_1 + _DAT_112d64720,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b36c8; end: 1011b36d3; -[SCFollowUpChatActionMenuPluginEntryPoint setMyAIExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b36c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64720;
  func_0x000107c61428(param_1 + _DAT_112d64720,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b36d4; end: 1011b36df; -[SCFollowUpChatActionMenuPluginEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b36d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64728;
  func_0x000107c61428(param_1 + _DAT_112d64728,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b36e0; end: 1011b36eb; -[SCFollowUpChatActionMenuPluginEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b36e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64728;
  func_0x000107c61428(param_1 + _DAT_112d64728,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b36ec; end: 1011b36f7; -[SCFollowUpChatActionMenuPluginEntryPoint snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b36ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64730;
  func_0x000107c61428(param_1 + _DAT_112d64730,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b36f8; end: 1011b373b;  */

void FUN_1011b36f8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b373c; end: 1011b3747; -[SCFollowUpChatActionMenuPluginEntryPoint setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b373c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64730;
  func_0x000107c61428(param_1 + _DAT_112d64730,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b3748; end: 1011b379b;  */

void FUN_1011b3748(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b379c; end: 1011b39a7;  */

/* WARNING: Possible PIC construction at 0x0001011b38fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b390c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b391c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b3974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011b3964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011b3978) */
/* WARNING: Removing unreachable block (ram,0x0001011b3920) */
/* WARNING: Removing unreachable block (ram,0x0001011b3910) */
/* WARNING: Removing unreachable block (ram,0x0001011b3900) */
/* WARNING: Removing unreachable block (ram,0x0001011b3968) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b379c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c4d348();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c4cdfc();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c5b490();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_1011b35b8();
        func_0x000107c613fc();
        uVar5 = *(undefined8 *)(lVar3 + _DAT_1130404b8);
        func_0x000107c61174();
        func_0x000107c4cdb8();
        func_0x000107c61180();
        func_0x000107c5b484();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b39a8);
          (*pcVar1)();
        }
        lVar6 = 0;
        FUN_1011b30d8();
        lVar3 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61614(lVar3 + _DAT_112d64638,0);
        *(undefined8 *)(lVar3 + _DAT_112d64640) = uVar5;
        *(long *)(lVar3 + _DAT_112d64648) = lVar4;
        *(long *)(lVar3 + _DAT_112d64650) = unaff_x20;
        lStack_70 = lVar3;
        lStack_68 = lVar6;
        func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
        func_0x000107c4fba8(*(undefined8 *)(lVar2 + _DAT_112f14b58));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1011b39a8; end: 1011b39cf; -[SCFollowUpChatActionMenuPluginEntryPoint begin] */

void FUN_1011b39a8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011b379c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011b39d0; end: 1011b3a13; -[SCFollowUpChatActionMenuPluginEntryPoint end] */

void FUN_1011b39d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b3a14; end: 1011b3c7f;  */

void FUN_1011b3a14(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10d4da0)) ||
       (func_0x000107c605b8(0xd000000000000016,0x800000010ef2b260,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c568e0();
    }
    else {
      uVar2 = 0xd00000000000001b;
      if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10d6a90)) ||
         (func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5666c();
      }
      else {
        if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
          uVar2 = 0xd000000000000013;
          func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "FollowUpChatActionMenuPlugin/SCFollowUpChatActionMenuPluginEntryPoint.swift"
                                ,0x4b,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011b3c80);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c594bc();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011b3c80; end: 1011b3d2b; -[SCFollowUpChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011b3c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_1011b3a14(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011b3d2c; end: 1011b3dc7; -[SCFollowUpChatActionMenuPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b3d2c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d64718,0);
  func_0x000107c61614(param_1 + _DAT_112d64720,0);
  func_0x000107c61614(param_1 + _DAT_112d64728,0);
  func_0x000107c61614(param_1 + _DAT_112d64730,0);
  *(undefined8 *)(param_1 + _DAT_112d64738) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011b3dc8; end: 1011b3dfb;  */

void FUN_1011b3dc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011b3dfc; end: 1011b3e63; -[SCFollowUpChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b3dfc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d64718);
  func_0x000107c61610(param_1 + _DAT_112d64720);
  func_0x000107c61610(param_1 + _DAT_112d64728);
  func_0x000107c61610(param_1 + _DAT_112d64730);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d64738));
  return;
}



/* Entry: 1011b3e64; end: 1011b3e83;  */

void FUN_1011b3e64(void)

{
  func_0x000107c61168(&PTR_PTR_1127b5c90);
  return;
}



/* Entry: 1011b3e84; end: 1011b3fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011b3e84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar5 = &lStack_70;
  func_0x000107c613fc();
  uVar1 = param_3;
  func_0x000107c4cdcc();
  func_0x000107c61180();
  func_0x000107c61174();
  uVar2 = param_4;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar3 = 0;
  FUN_1011b4d84();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x000107c61614(lVar4 + _DAT_112d64800,0);
  *(undefined8 *)(lVar4 + _DAT_112d64808) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112d64810) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112d64818) = uVar2;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(plVar5);
  return unaff_x20;
}



/* Entry: 1011b3fcc; end: 1011b3fe7;  */

void FUN_1011b3fcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011b3fe8; end: 1011b4007;  */

void FUN_1011b3fe8(void)

{
  func_0x000107c61168(&PTR_PTR_112d647a8);
  return;
}



/* Entry: 1011b4008; end: 1011b409b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b4008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112d64800,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d64808) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d64810) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d64818) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011b409c; end: 1011b40e3; -[_TtC27ForwardChatActionMenuPlugin31ForwardChatActionMenuPluginImpl uiContainerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b409c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d64800;
  func_0x000107c61428(param_1 + _DAT_112d64800,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011b40e4; end: 1011b413b; -[_TtC27ForwardChatActionMenuPlugin31ForwardChatActionMenuPluginImpl setUiContainerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011b40e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d64800;
  func_0x000107c61428(param_1 + _DAT_112d64800,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011b413c; end: 1011b4143; -[_TtC27ForwardChatActionMenuPlugin31ForwardChatActionMenuPluginImpl itemType] */

undefined8 FUN_1011b413c(void)

{
  return 0xf;
}



/* Entry: 1011b4144; end: 1011b414b; -[_TtC27ForwardChatActionMenuPlugin31ForwardChatActionMenuPluginImpl lockedConversationPolicy] */

undefined8 FUN_1011b4144(void)

{
  return 0;
}



/* Entry: 1011b414c; end: 1011b4337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011b414c(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  
  func_0x000107c4cde0();
  func_0x000107c61180();
  ppuVar1 = param_1;
  func_0x000107c5faec();
  lVar5 = param_2;
  func_0x000107c61170(param_1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e12b38;
  func_0x000107c5faec();
  if (ppuVar1 == ppuVar2 && param_2 == lVar5) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar5);
  }
  else {
    func_0x000107c605b8(ppuVar1,param_2,ppuVar2,lVar5,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar5);
    if (((ulong)ppuVar1 & 1) == 0) {
      uVar3 = *(ulong *)(unaff_x20 + _DAT_112d64808);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (uVar3 != 0) {
        uVar4 = uVar3;
        func_0x000107c438a0();
        func_0x000107c61180();
        func_0x000107c615e8(uVar3);
        if (uVar4 != 0) {
          uVar3 = uVar4;
          func_0x000107c3f3c8();
          if ((int)uVar3 == 0) {
            func_0x000107c615e8(uVar4);
          }
          else {
            uVar3 = uVar4;
            func_0x000107c61150(uVar4,PTR_s_respondsToSelector__11262c7e0,
                                PTR_s_isSharingRestrictedForMessage__1125fd170);
            if (((uVar3 & 1) != 0) && (uVar3 = uVar4, func_0x000107c4a3f8(), (uVar3 & 1) != 0)) {
              lVar5 = *(long *)(unaff_x20 + _DAT_112d64818);
              func_0x000107c5c734();
              func_0x000107c61180();
              if (lVar5 != 0) {
                func_0x000107c4a3f4();
                func_0x000107c615e8(lVar5);
                func_0x000107c615e8(uVar4);
                goto LAB_1011b42bc;
              }
            }
            func_0x000107c615e8(uVar4);
          }
        }
      }
    }
  }
LAB_1011b42bc:
  puVar6 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  return puVar6;
}



/* Entry: 1011b4338; end: 1011b43af; -[_TtC27ForwardChatActionMenuPlugin31ForwardChatActionMenuPluginImpl isActionApplicableTo:actionMenuContext:] */

void FUN_1011b4338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1011b414c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


