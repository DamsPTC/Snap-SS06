/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055b1534; end: 1055b1583;  */

void FUN_1055b1534(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  _objc_retainAutorelease(uVar3);
  func_0x00010bdc3520();
  uVar4 = uVar3;
  _strlen();
  func_0x00010054c7ec(uVar5,uVar1,uVar3,uVar4);
  iVar2 = (int)uVar5;
  func_0x0001005ecddc();
  func_0x000107c61338();
  if (iVar2 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    func_0x0001003a91d4(&UNK_10f82fa61);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1055b1584; end: 1055b163b;  */

void FUN_1055b1584(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  if (param_1 != 0) {
    _objc_retain(param_2);
    func_0x00010bf0d8a0(param_1);
    _objc_release(param_2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1055b163c; end: 1055b168f;  */

void FUN_1055b163c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  func_0x00010c08fa60();
  func_0x00010054c7ec(uVar3,uVar1);
  iVar2 = (int)uVar3;
  func_0x0001005ecddc();
  func_0x000107c61324();
  if (iVar2 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    func_0x0001003a91d4(&UNK_10f82fa8c);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1055b1690; end: 1055b16eb;  */

void FUN_1055b1690(long param_1,undefined4 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined4 uStack_18;
  
  if (param_1 != 0) {
    puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_38 = 0xc2000000;
    pcStack_30 = FUN_1055b16ec;
    puStack_28 = &UNK_11089a880;
    lStack_20 = param_1;
    uStack_18 = param_2;
    func_0x00010bf0d8a0(param_1,param_2,&puStack_40);
  }
  return;
}



/* Entry: 1055b16ec; end: 1055b171b;  */

void FUN_1055b16ec(long param_1)

{
  undefined1 uStack_11;
  
  func_0x00010bccb8cc(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
                      *(undefined4 *)(param_1 + 0x28),&uStack_11);
  return;
}



/* Entry: 1055b171c; end: 1055b17c3;  */

undefined8 FUN_1055b171c(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010054c3a4(uVar1);
    }
    else {
      if (param_2 == (long *)0x0) {
        return 0;
      }
      _objc_retainAutorelease(lVar2);
      uVar1 = 0;
      *param_2 = lVar2;
    }
  }
  return uVar1;
}



/* Entry: 1055b17c4; end: 1055b184b;  */

void FUN_1055b17c4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
    plVar2 = *(long **)(param_1 + 0x10);
    __ZNSt3__15mutex4lockEv(plVar2 + 3);
    if ((char)plVar2[0xe] == '\x01') {
      *(undefined1 *)(plVar2 + 0xe) = 0;
      if (plVar2[0x10] != 0) {
        _sqlite3_reset();
      }
    }
    __ZNSt3__15mutex6unlockEv(plVar2 + 3);
                    /* WARNING: Could not recover jumptable at 0x0001055b1828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return;
  }
  return;
}



/* Entry: 1055b184c; end: 1055b1907; -[SCClientSQLStatement attemptBind:] */

void FUN_1055b184c(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x18) == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055b1908; end: 1055b1adf;  */

ulong FUN_1055b1908(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    uVar1 = *(ulong *)(lVar3 + 0x80);
    if (uVar1 == 0) {
      func_0x00010054c714(lVar3);
      uVar1 = *(ulong *)(lVar3 + 0x80);
    }
    _sqlite3_column_type(uVar1,param_2);
    uVar2 = uVar1 & 0xffffffff;
    if (3 < (int)uVar1 - 1U) {
      uVar2 = 5;
    }
  }
  return uVar2;
}



/* Entry: 1055b1ae0; end: 1055b1bb3;  */

void FUN_1055b1ae0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0) goto LAB_1055b1bb0;
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(lVar2 + 0x80);
  if (lVar1 == 0) {
    func_0x00010054c714(lVar2);
    lVar1 = *(long *)(lVar2 + 0x80);
    _sqlite3_column_blob(lVar1,param_2);
    lVar3 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(lVar3 + 0x80);
    if (lVar2 == 0) goto LAB_1055b1b74;
LAB_1055b1b20:
    _sqlite3_column_bytes(lVar2,param_2);
  }
  else {
    _sqlite3_column_blob(lVar1,param_2);
    lVar3 = *(long *)(param_1 + 0x10);
    lVar2 = *(long *)(lVar3 + 0x80);
    if (lVar2 != 0) goto LAB_1055b1b20;
LAB_1055b1b74:
    func_0x00010054c714(lVar3);
    lVar2 = *(long *)(lVar3 + 0x80);
    _sqlite3_column_bytes(lVar2,param_2);
  }
  if (lVar1 == 0) {
    func_0x00010bf63640(lVar2,PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf64a00();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1055b1bb0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b1bb4; end: 1055b1bef;  */

long FUN_1055b1bb4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    lVar1 = *(long *)(lVar2 + 0x80);
    if (lVar1 == 0) {
      func_0x00010054c714(lVar2);
      lVar1 = *(long *)(lVar2 + 0x80);
    }
    _sqlite3_column_count(lVar1);
    lVar1 = (long)(int)lVar1;
  }
  return lVar1;
}



/* Entry: 1055b1bf0; end: 1055b1c37; -[SCClientSQLStatement .cxx_destruct] */

void FUN_1055b1bf0(long param_1)

{
  long *plVar1;
  
  _objc_storeStrong(param_1 + 0x18,0);
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055b1c38; end: 1055b1c3f; -[SCClientSQLStatement .cxx_construct] */

void FUN_1055b1c38(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 1055b1c40; end: 1055b1cb3;  */

undefined8 * FUN_1055b1c40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  if (param_1[0x10] != 0) {
    _sqlite3_finalize();
    param_1[0x10] = 0;
  }
  if (-1 < *(char *)((long)param_1 + 0x6f)) {
    __ZNSt3__15mutexD1Ev(param_1 + 3);
    return param_1;
  }
  __ZdlPv(param_1[0xb]);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 1055b1cb4; end: 1055b1d27;  */

void FUN_1055b1cb4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  if (param_1[0x10] != 0) {
    _sqlite3_finalize();
    param_1[0x10] = 0;
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
    __ZNSt3__15mutexD1Ev(param_1 + 3);
  }
  else {
    __ZNSt3__15mutexD1Ev(param_1 + 3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1055b1d28; end: 1055b1e0b; +[SCFriendingInterstitialConfig descriptor] */

void FUN_1055b1d28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcbd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a49b00,
                        &PTR____CFConstantStringClassReference_110ded478,&PTR_DAT_1130e6308,
                        &PTR_s_enabled_1130e6320,9,0x1c,0x1c);
    puRam00000001136bcbd0 = puVar1;
  }
  return;
}



/* Entry: 1055b1e0c; end: 1055b1e17;  */

bool FUN_1055b1e0c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1055b1e18; end: 1055b1e93;  */

undefined * FUN_1055b1e18(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bcbe0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ded4b8,
                        &UNK_10ddb3404,&UNK_10ddb3448,4,FUN_1055b1e94,0);
    do {
      if (puRam00000001136bcbe0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bcbe0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bcbe0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bcbe0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bcbe0;
}



/* Entry: 1055b1e94; end: 1055b1e9f;  */

bool FUN_1055b1e94(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1055b1ea0; end: 1055b1f83; +[SCFriendingShowMutualFriendsConfig descriptor] */

void FUN_1055b1ea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcbe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a49ba0,
                        &PTR____CFConstantStringClassReference_110ded4d8,&PTR_DAT_1130e6440,
                        &PTR_s_enabled_1130e6458,0xe,0x18,0x1c);
    puRam00000001136bcbe8 = puVar1;
  }
  return;
}



/* Entry: 1055b1f84; end: 1055b1f8f;  */

bool FUN_1055b1f84(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1055b1f90; end: 1055b1ff7; +[SCFriendingSuggestionPopoverConfiguration descriptor] */

void FUN_1055b1f90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bcbf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a49c40,
                        &PTR____CFConstantStringClassReference_110ded518,&PTR_DAT_1130e6618,
                        &PTR_s_enabled_1130e6630,9,0x1c,0x1c);
    puRam00000001136bcbf8 = puVar1;
  }
  return;
}



/* Entry: 1055b1ff8; end: 1055b2097; -[SCFriendingInviteFriendsLogger initWithGrapheneRegistry:] */

undefined1 * FUN_1055b1ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e9210;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06a800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055b2098; end: 1055b20db; -[SCFriendingInviteFriendsLogger logInviteRequestSent] */

void FUN_1055b2098(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb470;
  func_0x00010c06a960(PTR_PTR_1126bb470);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055b20dc; end: 1055b211f; -[SCFriendingInviteFriendsLogger logInviteRequestSucceeded] */

void FUN_1055b20dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb470;
  func_0x00010c06aa00(PTR_PTR_1126bb470);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055b2120; end: 1055b21ff; -[SCFriendingInviteFriendsLogger logInviteRequestFailed:] */

void FUN_1055b2120(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126bb470;
  _objc_retain(param_3);
  func_0x00010c06a760(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf3ec40(param_3);
  _objc_release(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110db9558,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1055b2200; end: 1055b225f; -[SCFriendingInviteFriendsLogger logInviteRequestLatency:] */

void FUN_1055b2200(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb470;
  func_0x00010c06a8a0(PTR_PTR_1126bb470);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(*(undefined8 *)(param_2 + 8),param_3,puVar1,(long)(param_1 * 1000.0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055b2260; end: 1055b22b3; -[SCFriendingInviteFriendsLogger logInviteRequestWithNumOfContacts:] */

void FUN_1055b2260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb470;
  func_0x00010c06a640(PTR_PTR_1126bb470);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055b22b4; end: 1055b2307; -[SCFriendingInviteFriendsLogger logInviteRequestWithNumOfSnapchatters:] */

void FUN_1055b22b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb470;
  func_0x00010c06a9e0(PTR_PTR_1126bb470);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055b2308; end: 1055b2313; -[SCFriendingInviteFriendsLogger .cxx_destruct] */

void FUN_1055b2308(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055b2314; end: 1055b2473; -[SCFriendingContactsGRPCInviter initWithUNIFriendAction:circumstanceEngine:docObjectContext:docObjectPerformer:currentDateProvider:grapheneLogger:notificationPool:] */

long FUN_1055b2314(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_9;
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1055b2474; end: 1055b291f; -[SCFriendingContactsGRPCInviter inviteContactsWithPhoneNumberToDisplayNameMap:featureType:completionQueue:completionHandler:] */

void FUN_1055b2474(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if ((param_5 != 0) && (param_6 != 0)) {
      puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_150 = 0xc2000000;
      pcStack_148 = FUN_1055b2920;
      puStack_140 = &UNK_110849530;
      _objc_retain(param_6);
      lStack_138 = param_6;
      func_0x00010007380c(param_5,&puStack_158);
      _objc_release(lStack_138);
    }
  }
  else {
    func_0x00010c0a8fe0(*(undefined8 *)(param_1 + 0x30));
    _objc_initWeak(auStack_160,param_1);
    _objc_retain(param_3);
    puVar2 = PTR_PTR_1126bb478;
    _objc_opt_new();
    func_0x00010c1d7e80(puVar2);
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    ppuVar5 = ppuVar4;
    func_0x00010c08fa60();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daf278;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar3 = ppuVar4;
    }
    _objc_retain(ppuVar3);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = param_3;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010bf52a60();
    if (lVar7 != 0) {
      lVar13 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar13) {
            _objc_enumerationMutation(lVar1);
          }
          uVar11 = *(undefined8 *)(lStack_128 + lVar12 * 8);
          lVar8 = param_3;
          func_0x00010c0e00e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR_PTR_1126bb480;
          _objc_retain(uVar11);
          _objc_retain(ppuVar3);
          _objc_opt_new(puVar9);
          func_0x00010c1e78e0();
          _objc_release(uVar11);
          func_0x00010c18fca0(puVar9);
          puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          func_0x00010befa120();
          _objc_release(ppuVar3);
          func_0x00010c1849a0(puVar9);
          _objc_release(puVar10);
          func_0x00010befa120(puVar6);
          _objc_release(puVar9);
          _objc_release(lVar8);
          lVar12 = lVar12 + 1;
        } while (lVar7 != lVar12);
        lVar7 = lVar1;
        func_0x00010bf52a60();
      } while (lVar7 != 0);
    }
    _objc_release(lVar1);
    func_0x00010c1d8fa0(puVar2);
    func_0x00010c206c40(puVar2);
    _objc_release(puVar6);
    _objc_release(ppuVar3);
    _objc_release(ppuVar4);
    _objc_release(param_3);
    uVar11 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c0f3920(puVar2);
    func_0x00010c0a9000(uVar11);
    func_0x00010bebac60(param_1);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 8);
    func_0x00010bdd8d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_168,auStack_160);
    _objc_retain(puVar6);
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c06a900(uVar11);
    _objc_release(param_1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_168);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_160);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(param_6 + 0x38);
  _objc_destroyWeak(auStack_160);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x0001055b2930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0,0);
  return;
}



/* Entry: 1055b2920; end: 1055b2933;  */

void FUN_1055b2920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055b2930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 1055b2934; end: 1055b29a3;  */

void FUN_1055b2934(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2af60();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055b29a4; end: 1055b2bcf; -[SCFriendingContactsGRPCInviter _handleInviteOrAddByPhoneResponse:error:fetchStartTime:completionQueue:completionHandler:] */

void FUN_1055b29a4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(param_6);
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(param_6);
  func_0x00010c0a8fc0(param_1,uVar3);
  _objc_release(puVar1);
  if ((param_5 == 0) && (lVar2 = param_4, func_0x00010bfa0320(), lVar2 == 0)) {
    func_0x00010bebac20(param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c261c40(param_4);
    func_0x00010c0a9020(uVar3);
    lVar2 = param_4;
    func_0x00010c261c40();
    if (lVar2 == 0) {
      if ((param_7 == 0) || (param_8 == 0)) goto LAB_1055b2adc;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x1055b2be4;
      puStack_a0 = &UNK_110849530;
      _objc_retain(param_8);
      lStack_98 = param_8;
      func_0x00010007380c(param_7,&puStack_b8);
      lVar2 = lStack_98;
    }
    else {
      lVar2 = param_4;
      func_0x00010c261c20(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be25820(param_2);
    }
  }
  else {
    func_0x00010c0a8fa0(*(undefined8 *)(param_2 + 0x30));
    func_0x00010bebac20(param_2);
    if ((param_7 == 0) || (param_8 == 0)) goto LAB_1055b2adc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1055b2bd0;
    puStack_78 = &UNK_11084aaa8;
    _objc_retain(param_8);
    lStack_68 = param_8;
    _objc_retain(param_5);
    lStack_70 = param_5;
    func_0x00010007380c(param_7,&puStack_90);
    _objc_release(lStack_70);
    lVar2 = lStack_68;
  }
  _objc_release(lVar2);
LAB_1055b2adc:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1055b2bd0; end: 1055b2bf7;  */

void FUN_1055b2bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055b2be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1055b2bf8; end: 1055b2ee3; -[SCFriendingContactsGRPCInviter _handleAddedSnapchatters:completionQueue:completionHandler:] */

void FUN_1055b2bf8(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    param_2 = *(long *)(param_1 + 0x10);
    lVar8 = param_3;
    func_0x000108c046e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60();
    lVar7 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar12 = *(long *)(lVar10 * 8);
        lVar3 = lVar12;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bfe2ee0();
        lVar5 = lVar3;
        func_0x00010c0b5940(lVar3);
        func_0x000100c4a928(lVar4,lVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        func_0x00010bfac3e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar5;
        param_2 = lVar12;
        func_0x000108c044d8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        _objc_release(lVar5);
        _objc_release(lVar3);
        if (lVar4 != 0) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(lVar4);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    uVar9 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_5);
    _objc_retain(puVar2);
    _objc_retain(lVar8);
    _objc_retain(uVar11);
    func_0x00010c0f8500(uVar9);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(lVar8);
    _objc_release(uVar11);
    _objc_release(puVar2);
    _objc_release(lVar8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_2);
    lVar8 = *(long *)(param_3 + 0x20);
    _objc_retain(lVar8);
    lVar1 = lVar8;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar8);
        }
        uVar9 = *(undefined8 *)(lVar10 * 8);
        func_0x000108c10100(param_2,uVar9);
        func_0x0001090216c8(*(undefined8 *)(param_3 + 0x28));
        func_0x000108c1d130(param_2,uVar9);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    lVar8 = *(long *)(param_3 + 0x30);
    _objc_retain(lVar8);
    lVar1 = lVar8;
    func_0x00010bf52a60();
    lVar6 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar6) {
          _objc_enumerationMutation(lVar8);
        }
        func_0x00010af53be8(param_2,*(undefined8 *)(lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055b30b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
      return;
    }
    return;
  }
  return;
}



/* Entry: 1055b2ee4; end: 1055b30a7;  */

void FUN_1055b2ee4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      func_0x000108c10100(param_2,uVar5);
      func_0x0001090216c8(*(undefined8 *)(param_1 + 0x28));
      func_0x000108c1d130(param_2,uVar5);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x30);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010af53be8(param_2,*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055b30b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1055b30a8; end: 1055b30bf;  */

void FUN_1055b30a8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055b30b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
    return;
  }
  return;
}



/* Entry: 1055b30c0; end: 1055b30cb; -[SCFriendingContactsGRPCInviter _callOptionBuilder] */

void FUN_1055b30c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae748,PTR_s_builder_1125a6bb0);
  return;
}



/* Entry: 1055b30cc; end: 1055b314f; -[SCFriendingContactsGRPCInviter _showSendInitiatedNotification] */

void FUN_1055b30cc(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1055b3150;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 1055b3150; end: 1055b31d7;  */

void FUN_1055b3150(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  uVar2 = uVar1;
  FUN_1055b38a8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar3,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055b31d8; end: 1055b32eb; -[SCFriendingContactsGRPCInviter _showSendCompletedNotification:] */

void FUN_1055b31d8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = PTR_PTR_1126afde0;
  lVar1 = param_1;
  if (param_3 == 0) {
    func_0x0001055b38d8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf55ce0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001055b38c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1055b32ec;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar3;
  puStack_38 = puVar2;
  _objc_retain(puVar2);
  _objc_retain(uVar3);
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(puStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 1055b32ec; end: 1055b3327;  */

void FUN_1055b32ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055b3328; end: 1055b3393; -[SCFriendingContactsGRPCInviter .cxx_destruct] */

void FUN_1055b3328(long param_1)

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



/* Entry: 1055b3394; end: 1055b3477; -[SCFriendingInviteContactsServiceProvider provide] */

void FUN_1055b3394(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bb488;
  _objc_alloc(PTR_PTR_1126bb488);
  func_0x00010c0025a0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055b3478; end: 1055b34b7;  */

void FUN_1055b3478(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdedea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055b34b8; end: 1055b37a7; -[SCFriendingInviteContactsServiceProvider _createFriendContactsInviter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055b34b8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  lVar1 = param_1 + _DAT_112725fc8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be24d20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112725fcc;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfcd0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010bf56360(lVar3,param_2,&PTR____CFConstantStringClassReference_110ded558,lVar4,lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar10 = PTR_PTR_1126bb490;
  _objc_alloc(PTR_PTR_1126bb490);
  func_0x00010c058f80();
  puVar11 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  lVar1 = param_1 + _DAT_112725fd0;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar12 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  puVar13 = PTR_PTR_1126bb498;
  _objc_alloc(PTR_PTR_1126bb498);
  lVar1 = param_1 + _DAT_112725fd4;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0184a0(puVar13,param_2,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112725fd8;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar14 = PTR_PTR_1126bb4a0;
  _objc_alloc(PTR_PTR_1126bb4a0);
  param_1 = param_1 + _DAT_112725fdc;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057720(puVar14,param_2,puVar10,lVar1,lVar2,puVar11,puVar12,puVar13,lVar5);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(lVar2);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1055b37a8; end: 1055b3833; -[SCFriendingInviteContactsServiceProvider _grpcParamsBuilder] */

void FUN_1055b37a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,120000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,120000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055b3834; end: 1055b38a7; -[SCFriendingInviteContactsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055b3834(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725fdc);
  _objc_destroyWeak(param_1 + _DAT_112725fd8);
  _objc_destroyWeak(param_1 + _DAT_112725fd4);
  _objc_destroyWeak(param_1 + _DAT_112725fcc);
  _objc_destroyWeak(param_1 + _DAT_112725fd0);
  _objc_destroyWeak(param_1 + _DAT_112725fc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725fe0);
  return;
}



/* Entry: 1055b38a8; end: 1055b38ef;  */

void FUN_1055b38a8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ded598;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ded598,
                      &PTR____CFConstantStringClassReference_110ded5b8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1055b38f0; end: 1055b391b; +[SCGrapheneInviteFriendsMetric inviteSent] */

void FUN_1055b38f0(void)

{
  _objc_alloc(PTR_PTR_1126bb470);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b391c; end: 1055b3947; +[SCGrapheneInviteFriendsMetric inviteSuccess] */

void FUN_1055b391c(void)

{
  _objc_alloc(PTR_PTR_1126bb470);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b3948; end: 1055b3973; +[SCGrapheneInviteFriendsMetric inviteFailure] */

void FUN_1055b3948(void)

{
  _objc_alloc(PTR_PTR_1126bb470);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b3974; end: 1055b399f; +[SCGrapheneInviteFriendsMetric inviteLatency] */

void FUN_1055b3974(void)

{
  _objc_alloc(PTR_PTR_1126bb470);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b39a0; end: 1055b39cb; +[SCGrapheneInviteFriendsMetric inviteContacts] */

void FUN_1055b39a0(void)

{
  _objc_alloc(PTR_PTR_1126bb470);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b39cc; end: 1055b39f7; +[SCGrapheneInviteFriendsMetric inviteSnapchatters] */

void FUN_1055b39cc(void)

{
  _objc_alloc(PTR_PTR_1126bb470);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b39f8; end: 1055b3a97; -[SCGrapheneInviteFriendsMetric description] */

void FUN_1055b39f8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ded618;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ded618,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1055b3a98; end: 1055b3c3b; -[SCGrapheneRegistry inviteFriendsGraphene] */

void FUN_1055b3a98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1055b3b20;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bcc08 != -1) {
    func_0x00010002a2fc(0x1136bcc08,&puStack_48);
  }
  uVar1 = uRam00000001136bcc00;
  _objc_retain(uRam00000001136bcc00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055b3c3c; end: 1055b3c73; -[SCFriendingQuickAddRefreshServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055b3c3c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112725fe4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112725fe8);
  return;
}



/* Entry: 1055b3c74; end: 1055b3d5b; -[SCFriendingQuickAddRefresherImpl initWithPerformerProvider:] */

undefined1 * FUN_1055b3c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e9220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055b3d5c; end: 1055b3e33; -[SCFriendingQuickAddRefresherImpl markSuggestionAsViewed:] */

void FUN_1055b3d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1055b3e34; end: 1055b3e67;  */

void FUN_1055b3e34(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5d8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055b3e68; end: 1055b3f9f; -[SCFriendingQuickAddRefresherImpl refreshLocalSuggestionsList:isFromUserTriggeredRefresh:completionQueue:completionHandler:] */

void FUN_1055b3e68(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1055b3fa0; end: 1055b3fdb;  */

void FUN_1055b3fa0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055b3fdc; end: 1055b4057; -[SCFriendingQuickAddRefresherImpl _markSuggestionAsViewed:] */

void FUN_1055b3fdc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055b4058; end: 1055b4363; -[SCFriendingQuickAddRefresherImpl _refreshLocalSuggestionsList:isFromUserTriggeredRefresh:completionQueue:completionHandler:] */

void FUN_1055b4058(long param_1,undefined8 param_2,ulong param_3,int param_4,long param_5,
                  undefined *param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 == 0) || (param_6 == (undefined *)0x0)) goto LAB_1055b4310;
  if (param_4 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf529e0();
    uVar3 = *(ulong *)(param_1 + 0x10);
    func_0x00010bf529e0();
    if (uVar2 <= uVar3) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf51e00();
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      _objc_release(uVar10);
    }
  }
  lVar5 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (lVar5 == 0) {
LAB_1055b42ac:
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_1055b4364;
    puStack_108 = &UNK_11084aaa8;
    _objc_retain(param_6);
    puStack_f8 = param_6;
    _objc_retain(param_3);
    uStack_100 = param_3;
    func_0x00010007380c(param_5,&puStack_120);
    _objc_release(uStack_100);
    puVar7 = puStack_f8;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x18);
    func_0x00010bf529e0();
    uVar2 = param_3;
    func_0x00010bf529e0();
    if (uVar2 <= uVar3) goto LAB_1055b42ac;
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010bf52a60();
    if (uVar2 != 0) {
      lVar5 = *plStack_150;
      do {
        uVar3 = 0;
        do {
          if (*plStack_150 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          lVar11 = *(long *)(lStack_158 + uVar3 * 8);
          lVar8 = lVar11;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010c08fa60();
          _objc_release(lVar8);
          if (lVar9 != 0) {
            iVar12 = (int)*(undefined8 *)(param_1 + 0x18);
            func_0x00010c2923e0(lVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4b900();
            _objc_release(lVar11);
            puVar1 = puVar7;
            if (iVar12 == 0) {
              puVar1 = puVar6;
            }
            func_0x00010befa120(puVar1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar2 != uVar3);
        uVar2 = param_3;
        func_0x00010bf52a60();
      } while (uVar2 != 0);
    }
    _objc_release(param_3);
    func_0x00010befa160(puVar6);
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    uStack_180 = 0x1055b4374;
    puStack_178 = &UNK_11084aaa8;
    _objc_retain(param_6);
    puStack_170 = puVar6;
    puStack_168 = param_6;
    _objc_retain(puVar6);
    func_0x00010007380c(param_5,&puStack_190);
    _objc_release(puStack_170);
    _objc_release(puStack_168);
    _objc_release(puVar6);
  }
  _objc_release(puVar7);
LAB_1055b4310:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001055b4370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))
            (*(long *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 1055b4364; end: 1055b4383;  */

void FUN_1055b4364(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055b4370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1055b4384; end: 1055b43bf; -[SCFriendingQuickAddRefresherImpl .cxx_destruct] */

void FUN_1055b4384(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055b43c0; end: 1055b45f7; -[SCSnapchattersRecentlyActiveRecordDefaultRepository initWithDocObjectContext:recentlyActiveRecordService:incomingSnapchatterObservable:suggestedSnapchatterObservable:pinnedSuggestedSnapchatterObservable:contactSnapchatterObservable:recentlyActiveRecordParamConverter:performerProvider:featureSettingsService:] */

undefined1 *
FUN_1055b43c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e9228;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_11;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_9;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010be72f20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined1 **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar4;
    _objc_release(uVar2);
    func_0x00010be663a0(puVar1);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055b45f8; end: 1055b4613;  */

void FUN_1055b45f8(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055b4614; end: 1055b4617; -[SCSnapchattersRecentlyActiveRecordDefaultRepository recentlyActiveText] */

void FUN_1055b4614(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ded778;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ded778,
                      &PTR____CFConstantStringClassReference_110ded798,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1055b4618; end: 1055b463f; -[SCSnapchattersRecentlyActiveRecordDefaultRepository incomingFriendsWithActiveStatus] */

void FUN_1055b4618(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055b4640; end: 1055b4667; -[SCSnapchattersRecentlyActiveRecordDefaultRepository suggestedFriendsWithActiveStatus] */

void FUN_1055b4640(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055b4668; end: 1055b468b; -[SCSnapchattersRecentlyActiveRecordDefaultRepository contactSnapchattersWithActiveStatus] */

void FUN_1055b4668(long param_1)

{
  func_0x00010be65e80();
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_target_112678178);
  return;
}



/* Entry: 1055b468c; end: 1055b479b; -[SCSnapchattersRecentlyActiveRecordDefaultRepository fetchRecentlyActiveRecordsForUserIds:querySource:completion:] */

void FUN_1055b468c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1055b479c; end: 1055b47d3;  */

void FUN_1055b479c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be13700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055b47d4; end: 1055b482f; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _performerWithPerformerProvider:] */

void FUN_1055b47d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055b4830; end: 1055b4a2b; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _observeIncomingSnapchatterObservable:suggestedSnapchatterObservable:pinnedSuggestedSnapchatterObservable:] */

void FUN_1055b4830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0e0ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf41860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c0e0ea0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf41860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar7 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055b4a2c; end: 1055b4aeb;  */

void FUN_1055b4a2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  lStack_48 = param_2;
  uStack_40 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_2);
  plVar6 = &lStack_48;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar5 = lVar4;
    _objc_retain(plVar6);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(plVar6);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      _objc_retain(lVar5);
      lVar2 = lVar2 + 0x20;
      _objc_loadWeakRetained(lVar2);
      func_0x00010be21f20();
      _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055b4aec; end: 1055b4c0f;  */

void FUN_1055b4aec(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  lVar1 = lVar1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be21f20();
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1055b4c10; end: 1055b4c57;  */

void FUN_1055b4c10(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be21f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055b4c58; end: 1055b4d67; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _observeContactSnapchatterObservable] */

void FUN_1055b4c58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1055b4d68; end: 1055b4e2b;  */

void FUN_1055b4d68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar9 = puVar1;
  func_0x00010be21f20();
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar2 = puVar9;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 != (undefined *)0x0) {
      _objc_release(puVar3);
      goto LAB_1055b4ea4;
    }
    puVar4 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar8 == (undefined *)0x0) goto LAB_1055b4f88;
  }
  else {
LAB_1055b4ea4:
    _objc_release(puVar2);
  }
  uVar5 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c292780(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c247cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_98,puVar1);
  uVar7 = *(undefined8 *)(puVar1 + 0x28);
  func_0x00010c11de00(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a0,auStack_98);
  _objc_retain(uVar6);
  func_0x00010be238a0(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(uVar6);
  _objc_release(uVar5);
LAB_1055b4f88:
  _objc_release(puVar9);
  return;
}



/* Entry: 1055b4e2c; end: 1055b500f; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _getRecentlyActiveRecordsForSourceToSnapchatters:] */

void FUN_1055b4e2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      _objc_release(lVar2);
      goto LAB_1055b4ea4;
    }
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar7 == 0) goto LAB_1055b4f88;
  }
  else {
LAB_1055b4ea4:
    _objc_release(lVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c292780(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c247cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar5);
  func_0x00010be238a0(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  _objc_release(uVar4);
LAB_1055b4f88:
  _objc_release(param_3);
  return;
}



/* Entry: 1055b5010; end: 1055b5063;  */

void FUN_1055b5010(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffb60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055b5064; end: 1055b529b; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _didReceiveUnexpiredLocalRecentlyActiveRecords:requestSourceToIds:] */

void FUN_1055b5064(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf9ca40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84560(0,param_1);
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      _objc_release(lVar3);
      goto LAB_1055b512c;
    }
    lVar4 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if (lVar7 == 0) goto LAB_1055b5200;
  }
  else {
LAB_1055b512c:
    _objc_release(lVar2);
  }
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfc1fa0(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
LAB_1055b5200:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055b529c; end: 1055b5317;  */

void FUN_1055b529c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffa40();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055b5318; end: 1055b5443; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _didReceiveSourceToRecentlyActiveFromServer:localUnexpiredRecentlyActiveRecords:sourceToUserIds:error:] */

void FUN_1055b5318(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c2924c0(uVar2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010be84560(param_2,param_3,param_4,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1055b5444;
  puStack_60 = &UNK_110850e78;
  uStack_58 = uVar2;
  _objc_retain(uVar2);
  func_0x00010bede620(param_1,param_2,param_3,uVar2,uVar1,&puStack_78);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uVar2);
  return;
}



/* Entry: 1055b5444; end: 1055b5447;  */

void FUN_1055b5444(void)

{
  return;
}



/* Entry: 1055b5448; end: 1055b55ab; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _fetchRecentlyActiveRecordsForUserIds:querySource:completion:] */

void FUN_1055b5448(long param_1,undefined8 param_2,long param_3,undefined4 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      (**(code **)(param_5 + 0x10))(param_5,PTR____NSArray0__struct_11034ab48,0);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_58,auStack_48);
      _objc_retain(param_3);
      uStack_50 = param_4;
      _objc_retain(param_5);
      func_0x00010be238a0(param_1);
      _objc_release(uVar2);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1055b55ac; end: 1055b5603;  */

void FUN_1055b55ac(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29a20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055b5604; end: 1055b5a37; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _handleFetchedLocalRecords:userIds:querySource:completion:] */

/* WARNING: Possible PIC construction at 0x0001055b579c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001055b57a0) */
/* WARNING: Removing unreachable block (ram,0x0001055b57b8) */
/* WARNING: Removing unreachable block (ram,0x0001055b57c4) */
/* WARNING: Removing unreachable block (ram,0x0001055b57d0) */

void FUN_1055b5604(long param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined **unaff_x27;
  undefined1 *puVar11;
  long lVar12;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined1 *puStack_248;
  long lStack_240;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long *plStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_1b0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1b0 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x27 = *(undefined ***)(lStack_1b8 + lVar10 * 8);
        ppuVar2 = unaff_x27;
        func_0x00010c2923e0(unaff_x27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(ppuVar2);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  plStack_1f8 = (long *)0x0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  _objc_retain(param_4);
  puVar11 = param_4;
  func_0x00010bf52a60();
  if (puVar11 == (undefined1 *)0x0) {
    _objc_release(param_4);
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_220 = 0xc2000000;
      pcStack_218 = FUN_1055b5a38;
      puStack_210 = &UNK_11089aa90;
      _objc_retain(puVar9);
      puVar8 = param_4;
      puStack_208 = puVar9;
      func_0x000100504554(param_4,&puStack_228);
      puVar11 = puVar8;
      (**(code **)(param_6 + 0x10))(param_6,puVar8,0);
      _objc_release(puVar8);
      puVar4 = puStack_208;
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_180 = puVar5;
      puStack_178 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_initWeak(auStack_230,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c11de00(uVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_268 = 0xc2000000;
      pcStack_260 = FUN_1055b5a44;
      puStack_258 = &UNK_11089aac0;
      unaff_x27 = &puStack_270;
      puVar11 = auStack_230;
      _objc_copyWeak(auStack_238,puVar11);
      _objc_retain(puVar9);
      puStack_250 = puVar9;
      _objc_retain(param_4);
      puStack_248 = param_4;
      _objc_retain(param_6);
      lStack_240 = param_6;
      func_0x00010bfc1fa0(uVar6);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(lStack_240);
      _objc_release(puStack_248);
      _objc_release(puStack_250);
      _objc_destroyWeak(auStack_238);
      _objc_destroyWeak(auStack_230);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar9);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x27 + 7);
    _objc_destroyWeak(auStack_230);
    __Unwind_Resume();
    puVar9 = *(undefined **)(param_3 + 0x20);
  }
  else {
    if (*plStack_1f0 != *plStack_1f0) {
      _objc_enumerationMutation(param_4);
    }
    puVar11 = (undefined1 *)*plStack_1f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar9,PTR_s_objectForKeyedSubscript__112615a50,puVar11);
  return;
}



/* Entry: 1055b5a38; end: 1055b5a43;  */

void FUN_1055b5a38(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1055b5a44; end: 1055b5ab3;  */

void FUN_1055b5a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2fe40();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055b5ab4; end: 1055b5d8b; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _handleServerResponse:localRecordsMap:userIds:error:completion:] */

void FUN_1055b5ab4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if (param_7 == 0) {
    _CACurrentMediaTime();
    lVar1 = *(long *)(param_2 + 0x20);
    func_0x00010c122880();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(lVar1);
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar7 = *plStack_130;
      do {
        lVar6 = 0;
        do {
          if (*plStack_130 != lVar7) {
            _objc_enumerationMutation(lVar1);
          }
          uVar8 = *(undefined8 *)(lStack_138 + lVar6 * 8);
          func_0x00010c2923e0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          _objc_release(uVar8);
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = lVar1;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_1055b5d8c;
    puStack_160 = &UNK_11089aaf0;
    _objc_retain(param_5);
    uStack_158 = param_5;
    _objc_retain(puVar4);
    uVar8 = param_6;
    puStack_150 = puVar4;
    uStack_148 = param_1;
    func_0x000100504554(param_6,&puStack_178);
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      func_0x00010c2924c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bede620(param_1,param_2);
      _objc_release(uVar3);
      _objc_release(uVar5);
    }
    uVar5 = uVar8;
    (**(code **)(param_8 + 0x10))(param_8,uVar8,0);
    _objc_release(uVar8);
    _objc_release(puStack_150);
    _objc_release(uStack_158);
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
  else {
    uVar5 = 0;
    (**(code **)(param_8 + 0x10))(param_8,0,param_7);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  puVar4 = *(undefined **)(param_4 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = *(undefined **)(param_4 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR_PTR_1126bb4b8;
      _objc_alloc(PTR_PTR_1126bb4b8);
      func_0x00010c05b520(*(undefined8 *)(param_4 + 0x30));
    }
  }
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1055b5d8c; end: 1055b5e17;  */

void FUN_1055b5d8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126bb4b8;
      _objc_alloc(PTR_PTR_1126bb4b8);
      func_0x00010c05b520(*(undefined8 *)(param_1 + 0x30));
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055b5e18; end: 1055b5e1b;  */

void FUN_1055b5e18(void)

{
  return;
}



/* Entry: 1055b5e1c; end: 1055b5fc3; -[SCSnapchattersRecentlyActiveRecordDefaultRepository _getUnexpiredRecentlyActiveRecordOfUserIdsLocally:completionQueue:completionHandler:] */

void FUN_1055b5e1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1055b5fc4;
  uStack_60 = 0x1055b5fd4;
  uStack_58 = 0;
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0f8500(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055b5fc4; end: 1055b5fdb;  */

void FUN_1055b5fc4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}


