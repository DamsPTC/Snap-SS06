/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102987b94; end: 102987bd3;  */

undefined8 FUN_102987b94(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102987bd4; end: 102987c2b;  */

/* WARNING: Possible PIC construction at 0x000102986bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102986c58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102986bd0) */
/* WARNING: Removing unreachable block (ram,0x000102986c7c) */
/* WARNING: Removing unreachable block (ram,0x000102986bdc) */
/* WARNING: Removing unreachable block (ram,0x000102986c5c) */

void FUN_102987bd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c5ede0();
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  func_0x000107c3f3f4(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102987c2c; end: 102987c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102987c2c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar4 = _DAT_112ed12e0;
  if (lVar1 == 0) {
    return;
  }
  uVar5 = *(ulong *)(lVar1 + _DAT_112ed12e0);
  if (uVar5 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_102987c34(0,0x112ed1350,&PTR_PTR_1126d19c0);
    func_0x000107c61174();
    uVar3 = param_1;
    func_0x000107c61174(param_1);
    uVar2 = uVar5;
    func_0x000107c60118(uVar5,uVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
    if ((uVar2 & 1) != 0) goto LAB_102987620;
    uVar3 = *(undefined8 *)(lVar1 + lVar4);
  }
  *(undefined8 *)(lVar1 + lVar4) = param_1;
  func_0x000107c61170(uVar3);
  lVar4 = lVar1 + _DAT_112ed12f8;
  func_0x000107c61618();
  func_0x000107c61174(param_1);
  if (lVar4 != 0) {
    func_0x000107c5dbc4(lVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar4);
    return;
  }
LAB_102987620:
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 102987c34; end: 102987c73;  */

void FUN_102987c34(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102987c74; end: 102987cef;  */

void FUN_102987c74(long param_1,long param_2)

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



/* Entry: 102987cf0; end: 102987d3b;  */

void FUN_102987cf0(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102987dfc,param_1);
  return;
}



/* Entry: 102987d3c; end: 102987dfb;  */

void FUN_102987d3c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  func_0x00010298455c();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = param_2;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102987dfc; end: 102987e13;  */

void FUN_102987dfc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  func_0x00010298455c();
  func_0x000107c61574(lStack_38);
  plVar2 = (long *)0x0;
  if (unaff_x20 != 0) {
    lVar1 = 0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = unaff_x20;
    plVar2 = &lStack_38;
    lStack_38 = lVar1;
    func_0x000100854cb0();
    func_0x000107c61574(lVar1);
  }
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102987e14; end: 102987e23; -[_TtC28PlusSendFriendBuddyPassScope43PlusSendFriendBuddyPassActionHandlerContext loggingContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102987e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ed1358));
  return;
}



/* Entry: 102987e24; end: 102987f2b; -[_TtC28PlusSendFriendBuddyPassScope43PlusSendFriendBuddyPassActionHandlerContext completionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102987e24(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_112ed1360);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_112ed1360))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f3aa0;
    puStack_48 = &UNK_1105764e0;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lStack_38;
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 102987f2c; end: 102987f4b;  */

void FUN_102987f2c(void)

{
  func_0x000107c61168(&PTR_PTR_112875160);
  return;
}



/* Entry: 102987f4c; end: 102987ff3; -[_TtC28PlusSendFriendBuddyPassScope43PlusSendFriendBuddyPassActionHandlerContext initWithLoggingContext:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102987f4c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    uVar4 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &UNK_1105764c8;
    func_0x000107c613fc(&UNK_1105764c8,0x18,7);
    *(long *)(puVar3 + 0x10) = param_4;
    uVar4 = 0x102988750;
  }
  *(undefined8 *)(param_1 + _DAT_112ed1358) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112ed1360);
  *puVar1 = uVar4;
  puVar1[1] = puVar3;
  FUN_102987f2c();
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  puStack_38 = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 102987ff4; end: 10298809f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102987ff4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ed1358);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ed1360);
  uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112ed1360))[1];
  FUN_102987f2c();
  lVar4 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ed1358) = uVar6;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ed1360);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  func_0x000107c61174(uVar6);
  func_0x000101237340(uVar2,uVar3);
  lStack_60 = lVar4;
  lStack_58 = param_2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  param_1[3] = param_2;
  *param_1 = plVar5;
  return;
}



/* Entry: 1029880a0; end: 10298813f; -[_TtC28PlusSendFriendBuddyPassScope43PlusSendFriendBuddyPassActionHandlerContext copyWithZone:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029880a0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_60;
  long lStack_58;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112ed1358);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ed1360);
  uVar3 = ((undefined8 *)(param_1 + _DAT_112ed1360))[1];
  FUN_102987f2c();
  lVar4 = param_1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ed1358) = uVar5;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ed1360);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  func_0x000107c61174(uVar5);
  func_0x000101237340(uVar2,uVar3);
  lStack_60 = lVar4;
  lStack_58 = param_1;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102988140; end: 10298814b;  */

void FUN_102988140(void)

{
  FUN_102987f2c();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10298814c; end: 1029881cb; -[_TtC28PlusSendFriendBuddyPassScope43PlusSendFriendBuddyPassActionHandlerContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298814c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed1358));
  if (*(long *)(param_1 + _DAT_112ed1360) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112ed1360))[1]);
    return;
  }
  return;
}



/* Entry: 1029881cc; end: 102988317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029881cc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed1388;
  func_0x000107c61428(unaff_x20 + _DAT_112ed1388,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102988318; end: 102988457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102988318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112ed1388;
  func_0x000107c61614(unaff_x20 + _DAT_112ed1388,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ed1368) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed1370) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed1378) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed1380);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_6);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_5);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_5);
  func_0x000107c615e8(param_6);
  return puVar4;
}



/* Entry: 102988458; end: 10298853f; -[_TtC28PlusSendFriendBuddyPassScope28PlusSendFriendBuddyPassScope initWithFriend:uiContainer:loggingContext:completionHandler:delegate:] */

undefined8
FUN_102988458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1105764a0;
  func_0x000107c613fc(&UNK_1105764a0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  uVar2 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_7);
  uVar3 = param_3;
  FUN_1029885e8(param_3,param_4,param_5,FUN_102988720,puVar1,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(param_7);
  return uVar3;
}



/* Entry: 102988540; end: 10298854b;  */

void FUN_102988540(void)

{
  FUN_1029886dc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10298854c; end: 10298857b;  */

void FUN_10298854c(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10298857c; end: 1029885e7; -[_TtC28PlusSendFriendBuddyPassScope28PlusSendFriendBuddyPassScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10298857c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed1368));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed1370));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ed1378));
  func_0x000101237350(*(undefined8 *)(param_1 + _DAT_112ed1380),
                      ((undefined8 *)(param_1 + _DAT_112ed1380))[1]);
  param_1 = param_1 + _DAT_112ed1388;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1029885e8; end: 1029886db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029885e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar3 = _DAT_112ed1388;
  func_0x000107c61614(unaff_x20 + _DAT_112ed1388,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ed1368) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ed1370) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ed1378) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ed1380);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_6);
  FUN_1029886dc();
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c61154(&stack0xffffffffffffff88,puVar2);
  return;
}



/* Entry: 1029886dc; end: 1029886fb;  */

void FUN_1029886dc(void)

{
  func_0x000107c61168(&PTR_PTR_112875230);
  return;
}



/* Entry: 1029886fc; end: 10298871f;  */

undefined8 FUN_1029886fc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102988720; end: 102988753;  */

void FUN_102988720(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102988730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102988754; end: 10298879f;  */

void FUN_102988754(undefined8 param_1)

{
  func_0x0001000285a8(0x112ed13e0,&UNK_10daf81c0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029887a0,param_1);
  return;
}



/* Entry: 1029887a0; end: 102988807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029887a0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_102988c00();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ed13e8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 102988808; end: 102988853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102988808(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed13e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102988854; end: 102988b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102988854(long param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  undefined *puStack_68;
  
  FUN_10298c2e8();
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
    func_0x000107c6142c(param_1);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar13 = 0x20;
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      uVar2 = *(undefined1 *)(param_1 + lVar13);
      func_0x000100083b20(&uStack_78);
      uVar8 = CONCAT71(uStack_77,uStack_78);
      uStack_78 = uVar2;
      func_0x00010008a7c8(&lStack_70,&uStack_78);
      func_0x000107c61574(uVar8);
      lVar3 = lStack_70;
      if (lStack_70 != 0) {
        func_0x000100083b20(&puStack_68);
        func_0x000107c61574(lVar3);
        puVar11 = puStack_68;
        if (puStack_68 != (undefined *)0x0) {
          puVar6 = puVar7;
          func_0x000107c61550();
          if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
             (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar7 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar7) {
                puVar5 = puVar7;
              }
              func_0x000107c60480(puVar5);
            }
            puVar6 = (undefined *)0x0;
            FUN_102971a28(0,puVar5 + 1,1,puVar7);
          }
          uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar10 + 0x10);
          puVar7 = puVar6;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_102971a28(puVar7,uVar1 + 1,1,puVar6);
            uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
          *(undefined **)(uVar10 + uVar1 * 8 + 0x20) = puVar11;
        }
      }
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    func_0x000107c6142c(param_1);
  }
  if ((ulong)puVar7 >> 0x3e == 0) {
    puVar11 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar7) {
      puVar11 = puVar7;
    }
    func_0x000107c60480();
  }
  if (puVar11 == (undefined *)0x0) {
    func_0x000107c6142c(puVar7);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102971d88(0,(ulong)puVar11 & ((long)puVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102988b08);
      (*pcVar4)();
    }
    puVar5 = (undefined *)0x0;
    do {
      puVar6 = puStack_68;
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        puVar14 = *(undefined **)(puVar7 + (long)puVar5 * 8 + 0x20);
        func_0x000107c6157c(puVar14);
      }
      else {
        puVar14 = puVar5;
        FUN_102971ef4(puVar5,puVar7);
      }
      uVar8 = 0;
      func_0x0001011eb06c(0);
      pcVar4 = FUN_102988b08;
      func_0x0001000bfde0(FUN_102988b08,0,uVar8);
      pcVar9 = pcVar4;
      func_0x0001004575f0();
      func_0x000107c61574(puVar14);
      func_0x000107c61574(pcVar4);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puStack_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_102971d88(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      puVar6 = puStack_68;
      puVar5 = puVar5 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(code **)(puStack_68 + uVar1 * 8 + 0x20) = pcVar9;
    } while (puVar11 != puVar5);
    func_0x000107c6142c(puVar7);
  }
  return puVar6;
}



/* Entry: 102988b08; end: 102988b4b;  */

void FUN_102988b08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0x112d6cc18;
  func_0x0001000285a8(0x112d6cc18,&UNK_10d92f810);
  func_0x000107c5fc48(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102988b4c; end: 102988bab; -[_TtC34ProfileSectionPluginImplementation28ProfileSectionPluginProvider plugins] */

void FUN_102988b4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102988854();
  func_0x000107c61170(param_1);
  uVar2 = 0x112d5b0a0;
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102988bac; end: 102988bdf;  */

void FUN_102988bac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102988be0; end: 102988bff; -[_TtC34ProfileSectionPluginImplementation28ProfileSectionPluginProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102988be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed13e8));
  return;
}



/* Entry: 102988c00; end: 102988c1f;  */

void FUN_102988c00(void)

{
  func_0x000107c61168(&PTR_PTR_112875328);
  return;
}



/* Entry: 102988c20; end: 102988d97;  */

void FUN_102988c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed1418,&UNK_10daf8260);
  puVar1 = &UNK_110576640;
  func_0x000107c613fc(&UNK_110576640,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_102988d98,puVar1);
  return;
}



/* Entry: 102988d98; end: 102988da7;  */

void FUN_102988d98(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  FUN_10298907c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_60;
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x30) = uStack_78;
  *param_1 = lVar1;
  return;
}



/* Entry: 102988da8; end: 102988dff;  */

void FUN_102988da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 102988e00; end: 102988fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_102988e00(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long unaff_x20;
  long lVar9;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar9;
  FUN_1029894b0();
  func_0x000107c5dbd4(lVar9);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c3e944(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113093a98);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0d1160);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4e26c(uVar5);
  func_0x000107c61180();
  uVar6 = 0;
  if (*(long *)(*(long *)(unaff_x20 + 0x28) + _DAT_11303f600) != 0) {
    uVar6 = uVar5;
    func_0x0001003a5b88();
  }
  lVar7 = lVar1;
  func_0x000106049654(lVar1,lVar9,uVar2,0,uVar3,uVar4,uVar5,uVar6,0x14);
  func_0x000107c61180();
  func_0x000107c615e8(lVar1);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  if (lVar7 == 0) {
    pcVar8 = (code *)0x0;
  }
  else {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    lVar1 = lVar7;
    func_0x0001000b637c(lVar7);
    uVar6 = 0x112ecfcb0;
    func_0x0001000285a8(0x112ecfcb0,&UNK_10daf6cd0);
    pcVar8 = FUN_102988fc0;
    func_0x0001000bfde0(FUN_102988fc0,0,uVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c61574(lVar1);
  }
  return pcVar8;
}



/* Entry: 102988fc0; end: 102989027;  */

void FUN_102988fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_28;
  
  uVar3 = *param_2;
  puStack_28 = (undefined *)0x0;
  uVar2 = 0x112d6cc18;
  func_0x0001000285a8(0x112d6cc18,&UNK_10d92f810);
  func_0x000107c5fc50(uVar3,&puStack_28,uVar2);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_28 != (undefined *)0x0) {
    puVar1 = puStack_28;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 102989028; end: 10298906b;  */

void FUN_102989028(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10298906c; end: 10298907b;  */

undefined1  [16] FUN_10298906c(void)

{
  return ZEXT816(0x110576668);
}



/* Entry: 10298907c; end: 10298909b;  */

void FUN_10298907c(void)

{
  func_0x000107c61168(&PTR_PTR_112ed1460);
  return;
}



/* Entry: 10298909c; end: 1029890e7;  */

void FUN_10298909c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102989138,param_1);
  return;
}



/* Entry: 1029890e8; end: 102989137;  */

void FUN_1029890e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102988e00();
  func_0x000107c61574(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 102989138; end: 10298914f;  */

void FUN_102989138(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102988e00();
  func_0x000107c61574(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102989150; end: 1029893c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102989150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_c0 = param_1;
  uStack_b8 = param_3;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar8 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ed14e8);
  func_0x0001000295c4(0);
  (**(code **)(lVar10 + 0x68))
            (lVar11,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3);
  lVar2 = lVar11;
  func_0x000107c5fff0(lVar11);
  (**(code **)(lVar10 + 8))(lVar11,lVar3);
  puVar4 = &UNK_110576778;
  func_0x000107c613fc(&UNK_110576778,0x38,7);
  uVar6 = uStack_b8;
  *(undefined8 *)(puVar4 + 0x10) = uVar12;
  *(code **)(puVar4 + 0x18) = FUN_102989680;
  *(undefined8 *)(puVar4 + 0x20) = uStack_b8;
  *(undefined8 *)(puVar4 + 0x28) = uStack_c0;
  *(undefined8 *)(puVar4 + 0x30) = param_2;
  pcStack_70 = FUN_102989694;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110576790;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar6);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar12 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = uVar12;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar8,&puStack_98,uVar12,uVar7,lVar1,uVar6);
  func_0x000107c5ffe8(0,lVar9,lVar8,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar2);
  (**(code **)(lStack_a0 + 8))(lVar8,lVar1);
  (**(code **)(lStack_b0 + 8))(lVar9,lStack_a8);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 1029893c8; end: 10298946b; -[_TtC40FamilyCenterProfileSectionImplementationP33_CFC814225972EFA528305012C8EA1D8134FCProfileSectionEligibilityChecker checkEligibilityForFriendId:completion:] */

void FUN_1029893c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  puVar1 = &UNK_110576750;
  func_0x000107c613fc(&UNK_110576750,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_102989150(param_3,param_2,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10298946c; end: 10298949f;  */

void FUN_10298946c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029894a0; end: 1029894af; -[_TtC40FamilyCenterProfileSectionImplementationP33_CFC814225972EFA528305012C8EA1D8134FCProfileSectionEligibilityChecker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029894a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed14e8));
  return;
}



/* Entry: 1029894b0; end: 10298955f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029894b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcStack_30;
  code *pcStack_28;
  
  puVar1 = &UNK_110576728;
  func_0x000107c613fc(&UNK_110576728,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uVar2 = 0x112ed14e0;
  func_0x0001000285a8(0x112ed14e0,&UNK_10daf8360);
  func_0x000107c613fc();
  pcVar3 = FUN_102989560;
  func_0x0001000bdd8c(FUN_102989560,puVar1,uVar2);
  pcVar4 = pcVar3;
  FUN_102989660();
  pcVar5 = pcVar4;
  func_0x000107c610f8();
  *(code **)(pcVar5 + _DAT_112ed14e8) = pcVar3;
  pcStack_30 = pcVar5;
  pcStack_28 = pcVar4;
  func_0x000107c61154(&pcStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102989560; end: 10298965f;  */

void FUN_102989560(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined *puVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c509b4();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c4a850();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        if (lVar3 != 0) {
          puVar4 = PTR_PTR_1126df0f8;
          func_0x000107c61168();
          func_0x000107c43be4();
          func_0x000107c61180();
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar1);
          goto LAB_102989648;
        }
      }
      func_0x000107c615e8(lVar1);
    }
  }
  puVar4 = (undefined *)0x0;
LAB_102989648:
  *param_1 = puVar4;
  return;
}



/* Entry: 102989660; end: 10298967f;  */

void FUN_102989660(void)

{
  func_0x000107c61168(&PTR_PTR_1128753e8);
  return;
}



/* Entry: 102989680; end: 102989693;  */

void FUN_102989680(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102989690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102989694; end: 10298985b;  */

void FUN_102989694(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  ppuVar8 = &puStack_70;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar10 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000d224c(&puStack_70);
  puVar4 = puStack_70;
  if (puStack_70 == (undefined *)0x0) {
    pcVar3 = "checkEligibility(forFriendId:completion:)";
    func_0x0001000c10c0("checkEligibility(forFriendId:completion:)");
    func_0x000107c61180();
    puVar4 = &UNK_1105767c8;
    func_0x000107c613fc(&UNK_1105767c8,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar2;
    *(undefined8 *)(puVar4 + 0x18) = uVar1;
    pcStack_50 = FUN_102989878;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1105767e0;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(pcVar3);
  }
  else {
    if (lVar10 == 0) {
      uVar9 = 0;
    }
    else {
      func_0x000107c5fadc(uVar9,lVar10);
    }
    func_0x000107c5acc0(puStack_70);
    puVar6 = puStack_70;
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    puVar7 = &UNK_110576818;
    func_0x000107c613fc(&UNK_110576818,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar2;
    *(undefined8 *)(puVar7 + 0x18) = uVar1;
    pcStack_50 = FUN_10298989c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101286f34;
    puStack_58 = &UNK_110576830;
    puStack_48 = puVar7;
    func_0x000107c60bc4(&puStack_70);
    puVar7 = puStack_48;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar7);
    func_0x000107c4db80(puVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 10298985c; end: 102989877;  */

void FUN_10298985c(long param_1,long param_2)

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



/* Entry: 102989878; end: 10298989b;  */

void FUN_102989878(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 10298989c; end: 10298998f;  */

void FUN_10298989c(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  uVar5 = 0;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((param_2 == 0) && (param_1 != 0)) {
    func_0x000107c3ebcc();
    uVar5 = (undefined1)param_1;
  }
  pcVar1 = "checkEligibility(forFriendId:completion:)";
  func_0x0001000c10c0("checkEligibility(forFriendId:completion:)");
  func_0x000107c61180();
  puVar2 = &UNK_110576868;
  func_0x000107c613fc(&UNK_110576868,0x21,7);
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  puVar2[0x20] = uVar5;
  pcStack_40 = FUN_102989990;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110576880;
  ppuVar3 = &puStack_60;
  puStack_38 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_38;
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102989990; end: 1029899b7;  */

void FUN_102989990(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 1029899b8; end: 1029899cf;  */

void FUN_1029899b8(long param_1,long param_2)

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



/* Entry: 1029899d0; end: 102989a73;  */

void FUN_1029899d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecfc30,&UNK_10daf6370);
  puVar1 = &UNK_110576960;
  func_0x000107c613fc(&UNK_110576960,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_102989a74,puVar1);
  return;
}



/* Entry: 102989a74; end: 102989cc3;  */

void FUN_102989a74(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long unaff_x20;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar4 = &UNK_1105769a8;
  func_0x000107c613fc(&UNK_1105769a8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar7;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  pcStack_60 = FUN_102989cd4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x10296d15c;
  puStack_68 = &UNK_1105769c0;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_58;
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000100083b20(&puStack_80);
  puVar4 = puStack_80;
  puVar6 = puStack_80;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102989cc0);
    (*pcVar2)();
  }
  func_0x000100083b20(&uStack_88);
  uVar7 = uStack_88;
  func_0x000107c43d50(uStack_88);
  func_0x000107c61180();
  func_0x000107c61170(uStack_88);
  func_0x000100083b20(&lStack_90);
  lVar8 = lStack_90;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(lStack_90);
  if (lVar8 != 0) {
    puVar9 = PTR_PTR_1126abb98;
    func_0x000107c610f8();
    func_0x000107c61174(puVar3);
    func_0x000107c47ca8();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c615e8(puVar6);
    func_0x000107c61170(puVar3);
    puVar4 = (undefined *)0x112ecfd08;
    func_0x0001000285a8(0x112ecfd08,&UNK_10daf65f0);
    FUN_10296aaf0();
    func_0x000107c613fc();
    *(undefined8 *)(puVar4 + 0x18) = 3;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    *(undefined **)(puVar4 + 0x20) = puVar9;
    ppuVar5 = &puStack_80;
    puStack_80 = puVar4;
    func_0x000100854cb0();
    func_0x000107c61170(puVar3);
    func_0x000107c61574(puVar4);
    *param_1 = (long)ppuVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102989cc4);
  (*pcVar2)();
}



/* Entry: 102989cc4; end: 102989cd3;  */

undefined1  [16] FUN_102989cc4(void)

{
  return ZEXT816(0x110576988);
}



/* Entry: 102989cd4; end: 102989d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102989cd4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_112f97078);
  func_0x000107c61174(uVar2);
  func_0x000107c61170(lStack_38);
  func_0x000100083b20(&lStack_40);
  lVar3 = lStack_40;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(lStack_40);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126abba0;
    func_0x000107c610f8(PTR_PTR_1126abba0);
    func_0x000107c46b08();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar2);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102989d94);
  (*pcVar1)();
}



/* Entry: 102989d94; end: 102989daf;  */

void FUN_102989d94(long param_1,long param_2)

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



/* Entry: 102989db0; end: 102989db7; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider36CrystalsHubSupplementaryViewProvider sectionHeaderDisplayStrategy] */

undefined8 FUN_102989db0(void)

{
  return 1;
}



/* Entry: 102989db8; end: 102989e33; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider36CrystalsHubSupplementaryViewProvider initWithHeaderViewModel:] */

undefined1 * FUN_102989db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithHeaderViewModel__1125e4238;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 102989e34; end: 102989e87;  */

void FUN_102989e34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102989e88; end: 102989ea7; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider36SpotlightPayoutsProfileActionHandler presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102989e88(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ed1540);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102989ea8; end: 102989ebb; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider36SpotlightPayoutsProfileActionHandler setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102989ea8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ed1540,param_3);
  return;
}



/* Entry: 102989ebc; end: 102989f7f; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider36SpotlightPayoutsProfileActionHandler handleActionWithSender:actionModel:fromSourceView:] */

uint FUN_102989ebc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  FUN_10298a0b8(&uStack_50,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102989f80; end: 102989fdf; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider36SpotlightPayoutsProfileActionHandler payoutsScopeWillDismiss:] */

/* WARNING: Possible PIC construction at 0x000102989fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102989fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102989fac) */
/* WARNING: Removing unreachable block (ram,0x000102989fd0) */
/* WARNING: Removing unreachable block (ram,0x000102989fc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102989f80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed1558);
  *(undefined8 *)(param_1 + _DAT_112ed1558) = 0;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102989fe0; end: 10298a03f; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider36SpotlightPayoutsProfileActionHandler init] */

void FUN_102989fe0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SpotlightPayoutsProfileSectionPluginProvider.SpotlightPayoutsProfileActionHandler"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10298a00c);
  (*pcVar1)();
}



/* Entry: 10298a040; end: 10298a097; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider36SpotlightPayoutsProfileActionHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010298a07c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010298a080) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298a040(long param_1)

{
  func_0x0001012a9c58(param_1 + _DAT_112ed1540);
  func_0x000107c61610(param_1 + _DAT_112ed1548);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed1550));
  return;
}



/* Entry: 10298a098; end: 10298a0b7;  */

void FUN_10298a098(void)

{
  func_0x000107c61168(&PTR_PTR_112875558);
  return;
}



/* Entry: 10298a0b8; end: 10298a3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298a0b8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    return;
  }
  uVar7 = param_2;
  func_0x000107c44fdc();
  func_0x000107c61180();
  if (param_2 == 0) {
    return;
  }
  uVar2 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  uVar8 = 0xd000000000000027;
  if ((uVar2 != 0xd000000000000027) || (uVar7 != 0x800000010f0d1260)) {
    uVar3 = uVar2;
    func_0x000107c605b8(uVar2,uVar7,0xd000000000000027,0x800000010f0d1260,0);
    if ((((uVar3 & 1) == 0) &&
        ((((uVar2 != 0xd000000000000029 || (uVar7 != 0x800000010f0d1290)) &&
          (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar7,0xd000000000000029,0x800000010f0d1290,0),
          (uVar3 & 1) == 0)) && ((uVar2 != 0xd00000000000002a || (uVar7 != 0x800000010f0d12c0))))))
       && (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar7,0xd00000000000002a,0x800000010f0d12c0,0),
          (uVar3 & 1) == 0)) {
      func_0x000107c6142c(uVar7);
      return;
    }
    func_0x000107c605b8(0xd000000000000027,0x800000010f0d1260,uVar2,uVar7,0);
    if ((uVar8 & 1) == 0) {
      if ((uVar2 != 0xd000000000000029) || (uVar7 != 0x800000010f0d1290)) {
        uVar8 = 0xd000000000000029;
        func_0x000107c605b8(0xd000000000000029,0x800000010f0d1290,uVar2,uVar7,0);
        if ((uVar8 & 1) == 0) {
          if ((uVar2 == 0xd00000000000002a) && (uVar7 == 0x800000010f0d12c0)) {
            func_0x000107c6142c(0x800000010f0d12c0);
          }
          else {
            func_0x000107c605b8(0xd00000000000002a,0x800000010f0d12c0,uVar2,uVar7,0);
            func_0x000107c6142c(uVar7);
          }
          goto LAB_10298a1e4;
        }
      }
      func_0x000107c6142c(uVar7);
      goto LAB_10298a1e4;
    }
  }
  func_0x000107c6142c(uVar7);
LAB_10298a1e4:
  lVar6 = unaff_x20 + _DAT_112ed1540;
  func_0x000107c61618();
  if (lVar6 != 0) {
    puVar4 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c4807c();
    func_0x000100360844(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    puVar5 = puVar4;
    func_0x000103b4d104();
    lVar1 = _DAT_112ed1558;
    if (*(long *)(unaff_x20 + _DAT_112ed1558) == 0) {
      puStack_50 = puVar5;
      func_0x00010008a7c8(&uStack_48,&puStack_50);
      func_0x000100083b20(&puStack_50);
      func_0x000107c61574(uStack_48);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      lVar6 = *(long *)(unaff_x20 + lVar1);
      *(undefined **)(unaff_x20 + lVar1) = puStack_50;
    }
    else {
      func_0x000107c61170();
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 10298a3c8; end: 10298a3ff; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider30SpotlightPayoutsProfileSection sectionInsets] */

void FUN_10298a3c8(void)

{
  func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c5dc78(0,0,0x4038000000000000,0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10298a400; end: 10298a407; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider30SpotlightPayoutsProfileSection minimumSectionInteritemSpacing] */

undefined8 FUN_10298a400(void)

{
  return 0;
}



/* Entry: 10298a408; end: 10298a40f; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider30SpotlightPayoutsProfileSection minimumSectionLineSpacing] */

undefined8 FUN_10298a408(void)

{
  return 0;
}



/* Entry: 10298a410; end: 10298a453; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider30SpotlightPayoutsProfileSection initWithSupplementaryViewProvider:] */

void FUN_10298a410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithSupplementaryViewProvide_1125f1810,param_3);
  return;
}



/* Entry: 10298a454; end: 10298a4a7;  */

void FUN_10298a454(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10298a4a8; end: 10298a5e7;  */

void FUN_10298a4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed15b0,&UNK_10daf84c0);
  puVar1 = &UNK_110576a80;
  func_0x000107c613fc(&UNK_110576a80,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10298a5e8,puVar1);
  return;
}



/* Entry: 10298a5e8; end: 10298a5f3;  */

void FUN_10298a5e8(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_10298ac28();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_50;
  *(undefined8 *)(lVar1 + 0x28) = uStack_48;
  *(undefined8 *)(lVar1 + 0x10) = uStack_60;
  *(undefined8 *)(lVar1 + 0x18) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 10298a5f4; end: 10298a643;  */

void FUN_10298a5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 10298a644; end: 10298a85f;  */

undefined * FUN_10298a644(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = *unaff_x20;
  uVar7 = unaff_x20[3];
  puVar1 = &UNK_110576ac8;
  func_0x000107c613fc(&UNK_110576ac8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  func_0x0001000285a8(0x112ecfce8,&UNK_10daf6400);
  func_0x000107c613fc();
  func_0x000107c61174(uVar7);
  pcVar2 = FUN_10298ac48;
  func_0x0001000bdd8c(FUN_10298ac48,puVar1);
  uVar8 = unaff_x20[2];
  uVar7 = uVar8;
  func_0x000107c42474();
  func_0x000107c61180();
  uVar3 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c40110();
  func_0x000107c61180();
  uVar4 = unaff_x20[4];
  func_0x000107c42294();
  func_0x000107c61180();
  uVar5 = unaff_x20[5];
  func_0x000107c3fa04();
  func_0x000107c61180();
  puVar1 = &UNK_110576af0;
  func_0x000107c613fc(&UNK_110576af0,0x40,7);
  *(code **)(puVar1 + 0x10) = pcVar2;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  *(undefined8 *)(puVar1 + 0x28) = uVar8;
  *(undefined8 *)(puVar1 + 0x30) = uVar5;
  *(undefined8 *)(puVar1 + 0x38) = uVar9;
  func_0x0001000285a8(0x112ecfce0,&UNK_10daf65b0);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  func_0x000107c615f0(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  func_0x000107c615f0(uVar5);
  uVar7 = 0x10298ac50;
  func_0x0001000bdd8c(0x10298ac50,puVar1);
  uVar9 = uVar7;
  func_0x0001000bf56c();
  uVar6 = uVar9;
  func_0x0001000bf56c();
  puVar1 = PTR_PTR_1126afda8;
  func_0x000107c610f8(PTR_PTR_1126afda8);
  func_0x000107c47cac();
  func_0x000107c61574(uVar7);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar3);
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  return puVar1;
}



/* Entry: 10298a860; end: 10298a90f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298a860(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_10298a098();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112ed1540,0);
  func_0x000107c61614(lVar3 + _DAT_112ed1548,0);
  *(undefined8 *)(lVar3 + _DAT_112ed1558) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ed1550) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10298a910; end: 10298abdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298a910(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((param_3 == 0) || (param_6 == 0)) {
    uVar5 = 0;
  }
  else {
    func_0x000107c615f0(param_6);
    lVar2 = param_3;
    func_0x000107c615f0(param_3);
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 == 0) {
      func_0x000107c615e8(param_3);
      func_0x000107c615e8(param_6);
      uVar5 = 0;
    }
    else {
      func_0x00010604c6c8();
      func_0x000107c61180();
      puVar3 = PTR_PTR_1126b55e0;
      func_0x000107c610f8(PTR_PTR_1126b55e0);
      func_0x000107c46c24();
      func_0x000107c61170(lVar2);
      uVar4 = 0;
      func_0x000102989e68(0);
      func_0x000107c610f8();
      func_0x000107c46cb8();
      uVar5 = 0;
      func_0x00010298a488();
      func_0x000107c610f8();
      func_0x000107c48b78();
      lVar6 = 0;
      FUN_10298b60c();
      lVar2 = lVar6;
      func_0x000107c610f8();
      func_0x000107c61614(lVar2 + _DAT_112ed1670,0);
      *(undefined8 *)(lVar2 + _DAT_112ed1678) = 0;
      *(undefined8 *)(lVar2 + _DAT_112ed1680) = 0;
      *(undefined1 *)(lVar2 + _DAT_112ed16b0) = 0;
      *(undefined8 *)(lVar2 + _DAT_112ed16b8) = 0;
      *(long *)(lVar2 + _DAT_112ed1688) = param_3;
      *(long *)(lVar2 + _DAT_112ed1690) = lStack_68;
      *(undefined8 *)(lVar2 + _DAT_112ed1698) = param_4;
      *(undefined8 *)(lVar2 + _DAT_112ed16a0) = param_5;
      *(long *)(lVar2 + _DAT_112ed16a8) = param_6;
      puVar1 = PTR_s_init_1125d9248;
      lStack_78 = lVar2;
      lStack_70 = lVar6;
      func_0x000107c615f4(param_3,2);
      func_0x000107c615f4(lStack_68,2);
      func_0x000107c615f0(param_6);
      func_0x000107c61174(param_4);
      func_0x000107c61174(param_5);
      plVar7 = &lStack_78;
      func_0x000107c61154(plVar7,puVar1);
      func_0x000107c61180();
      func_0x00010298adc8();
      FUN_10298aea4();
      func_0x000107c61170(plVar7);
      func_0x000107c615e8(param_3);
      func_0x000107c615e8(lStack_68);
      func_0x000107c61174(plVar7);
      func_0x000107c61174();
      func_0x000107c58d74();
      func_0x000107c61170(uVar5);
      func_0x000107c61170(plVar7);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(param_6);
      func_0x000107c615e8(param_3);
      uVar4 = 0;
      FUN_10298a098(0);
      lVar2 = lStack_68;
      func_0x000107c61480(lStack_68,uVar4);
      if (lVar2 == 0) {
        func_0x000107c61170(plVar7);
        func_0x000107c615e8(lStack_68);
      }
      else {
        func_0x000107c61604(lVar2 + _DAT_112ed1548,plVar7);
        func_0x000107c615e8(lStack_68);
        func_0x000107c61170(plVar7);
      }
    }
  }
  *param_1 = uVar5;
  return;
}



/* Entry: 10298abdc; end: 10298ac17;  */

void FUN_10298abdc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10298ac18; end: 10298ac27;  */

undefined1  [16] FUN_10298ac18(void)

{
  return ZEXT816(0x110576aa8);
}



/* Entry: 10298ac28; end: 10298ac47;  */

void FUN_10298ac28(void)

{
  func_0x000107c61168(&PTR_PTR_112ed15f8);
  return;
}



/* Entry: 10298ac48; end: 10298ac73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298ac48(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_10298a098();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112ed1540,0);
  func_0x000107c61614(lVar3 + _DAT_112ed1548,0);
  *(undefined8 *)(lVar3 + _DAT_112ed1558) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ed1550) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10298ac74; end: 10298ac93; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider dataProviderDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298ac74(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ed1670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10298ac94; end: 10298aca7; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider setDataProviderDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298ac94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ed1670,param_3);
  return;
}



/* Entry: 10298aca8; end: 10298acc7; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider updateQueuePerformer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298aca8(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed1678));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10298acc8; end: 10298acfb; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider setUpdateQueuePerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298acc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ed1678);
  *(undefined8 *)(param_1 + _DAT_112ed1678) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10298acfc; end: 10298ad1b; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider sectionDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298acfc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ed1680));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10298ad1c; end: 10298ad5b; -[_TtC44SpotlightPayoutsProfileSectionPluginProvider42SpotlightPayoutsProfileSectionDataProvider setSectionDataModel:] */

void FUN_10298ad1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10298ad5c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10298ad5c; end: 10298aea3;  */

/* WARNING: Possible PIC construction at 0x00010298ad88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010298adb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010298ad8c) */
/* WARNING: Removing unreachable block (ram,0x00010298adb4) */
/* WARNING: Removing unreachable block (ram,0x00010298ada0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298ad5c(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ed1680);
  *(undefined8 *)(unaff_x20 + _DAT_112ed1680) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10298aea4; end: 10298aeb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298aea4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ed16a0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4a4fc();
    func_0x000107c615e8(lVar1);
    if ((int)lVar2 != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ed1688);
      puVar3 = &UNK_110576b18;
      func_0x000107c613fc(&UNK_110576b18,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      uStack_50 = 0x10298bb84;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_101c66ac8;
      puStack_58 = &UNK_110576b80;
      puStack_48 = puVar3;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c3f974(uVar5);
      func_0x000107c60bd0(ppuVar4);
    }
  }
  return;
}



/* Entry: 10298aeb8; end: 10298afa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10298aeb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ed16a0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4a4fc();
    func_0x000107c615e8(lVar1);
    if ((int)lVar2 != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ed1688);
      puVar3 = &UNK_110576b18;
      func_0x000107c613fc(&UNK_110576b18,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_101c66ac8;
      uStack_58 = param_2;
      uStack_50 = param_1;
      puStack_48 = puVar3;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c3f974(uVar5);
      func_0x000107c60bd0(ppuVar4);
    }
  }
  return;
}


