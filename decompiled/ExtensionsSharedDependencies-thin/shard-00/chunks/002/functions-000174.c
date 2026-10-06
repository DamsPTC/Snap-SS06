/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00423c50; end: 00423d07; -[SCProcessedNotification isEqual:] */

long FUN_00423c50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_00423ce0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_00423cec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x007877e0();
          goto LAB_00423cec;
        }
        goto LAB_00423ce0;
      }
    }
    lVar3 = 0;
  }
LAB_00423cec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 00423d08; end: 00423d0f; -[SCProcessedNotification notificationId] */

undefined8 FUN_00423d08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00423d10; end: 00423d17; -[SCProcessedNotification notificationType] */

undefined8 FUN_00423d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00423d18; end: 00423d1f; -[SCProcessedNotification timestampMs] */

undefined8 FUN_00423d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00423d20; end: 00423d4f; -[SCProcessedNotification .cxx_destruct] */

void FUN_00423d20(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00423d50; end: 00423dd3; +[SCNSEPrefetchedMessageMediaDb schema] */

void FUN_00423d50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2be8;
  _objc_alloc(PTR_PTR_00ac2be8);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  "\nCREATE TABLE IF NOT EXISTS PrefetchedMessageMedia (\n    -- SQLite\'s rowid for this prefetched media record\n    _id INTEGER PRIMARY KEY AUTOINCREMENT,\n\n    -- The media\'s content id (last path component of the CDN URL = mediaId).\n    -- Ties this row to the bytes file at prefetchedMedia/<contentId>.\n    contentId TEXT NOT NULL UNIQUE,\n\n    -- The conversation containing the message that owns this media.\n    conversationId TEXT NOT NULL,\n\n    -- The server message id of the message that owns this media.\n    serverMessageId INTEGER NOT NULL\n);\n"
                 );
  _objc_retainAutoreleasedReturnValue();
  func_0x00787000(puVar1,param_2,0,puVar2,PTR____NSArray0__struct_00999d10);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00423dd4; end: 00423dfb; -[SCNSEPrefetchedMessageMediaDb getConn] */

void FUN_00423dd4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00423dfc; end: 00423e83; -[SCNSEPrefetchedMessageMediaDb initWithSqliteConnection:] */

undefined1 * FUN_00423dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3aa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00423e84; end: 00423eef; -[SCNSEPrefetchedMessageMediaDb .cxx_destruct] */

void FUN_00423e84(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00423ef0; end: 00423efb; -[SCNSEPrefetchedMessageMediaDb .cxx_construct] */

void FUN_00423ef0(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 00423efc; end: 00424007;  */

void FUN_00423efc(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00783e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x0077e780(*(undefined8 *)(param_1 + 8));
      FUN_0042766c(param_1 + 0x10,*(undefined8 *)(param_1 + 8),&UNK_007ffed3,0x5e);
      FUN_00427314();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00424008; end: 004240c7;  */

void FUN_00424008(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_00ac2bf8;
  _objc_alloc(PTR_PTR_00ac2bf8);
  uVar2 = param_1;
  FUN_004275f0(param_1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  FUN_004275f0(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_004275b8(param_1,2);
  FUN_00424518(puVar1,uVar2,uVar3,param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004240c8; end: 0042423f;  */

void FUN_004240c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00783e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x18;
      FUN_0042766c(lVar1,*(undefined8 *)(param_1 + 8),&UNK_007fff32,0x7c);
      uStack_44 = 1;
      FUN_0042712c();
      FUN_0042712c(lVar1,&uStack_44,param_3);
      FUN_00648ef4(lVar1,uStack_44,param_4);
      FUN_004271d0(lVar1);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 00424240; end: 0042436f;  */

void FUN_00424240(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00783e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x20;
      FUN_0042766c(lVar1,*(undefined8 *)(param_1 + 8),&UNK_007fffaf,0x3f);
      FUN_0042712c();
      FUN_004271d0(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 00424370; end: 00424393; -[SCPrefetchedMessageMedia copyWithZone:] */

undefined8 FUN_00424370(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00424394; end: 0042441f; -[SCPrefetchedMessageMedia hash] */

long * FUN_00424394(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x007843a0();
  lVar5 = *(long *)(param_1 + 0x20);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  plVar3 = &lStack_48;
  uStack_38 = uVar2;
  func_0x0076fd30(plVar3,4);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_004244c0:
    plVar6 = (long *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_004244cc;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) && ((plVar3[1] == param_3[1] && (plVar3[4] == param_3[4])))) {
      lVar5 = plVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x007877e0(), (int)lVar5 != 0)) {
        plVar6 = (long *)plVar3[3];
        if (plVar6 != (long *)param_3[3]) {
          func_0x007877e0();
          goto LAB_004244cc;
        }
        goto LAB_004244c0;
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_004244cc:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 00424420; end: 004244e7; -[SCPrefetchedMessageMedia isEqual:] */

long FUN_00424420(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_004244c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_004244cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x007877e0();
          goto LAB_004244cc;
        }
        goto LAB_004244c0;
      }
    }
    lVar3 = 0;
  }
LAB_004244cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 004244e8; end: 00424517; -[SCPrefetchedMessageMedia .cxx_destruct] */

void FUN_004244e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00424518; end: 004245cf;  */

undefined1 * FUN_00424518(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_00ac3ab8;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_2;
      func_0x00780e20();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      uVar2 = param_3;
      func_0x00780e20();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 004245d0; end: 004245f3; -[SCGetAllMedia copyWithZone:] */

undefined8 FUN_004245d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004245f4; end: 00424673; -[SCGetAllMedia hash] */

undefined8 * FUN_004245f4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x007843a0();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x0076fd30(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_00424704:
    puVar6 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_00424710;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x007877e0();
          goto LAB_00424710;
        }
        goto LAB_00424704;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_00424710:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 00424674; end: 0042472b; -[SCGetAllMedia isEqual:] */

long FUN_00424674(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_00424704:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_00424710;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x007877e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x007877e0();
          goto LAB_00424710;
        }
        goto LAB_00424704;
      }
    }
    lVar3 = 0;
  }
LAB_00424710:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 0042472c; end: 0042474f;  */

undefined8 FUN_0042472c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 00424750; end: 0042477f; -[SCGetAllMedia .cxx_destruct] */

void FUN_00424750(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00424780; end: 00424793;  */

void FUN_00424780(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)(param_1,param_2,param_2,8);
    return;
  }
  return;
}



/* Entry: 00424794; end: 0042479f; -[SCSQLiteTransactionOptions .cxx_destruct] */

void FUN_00424794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004247a0; end: 004247b7; -[SCSQLiteTransactor _isTransactorForDatabaseSchema:] */

long FUN_004247a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != param_3) {
                    /* WARNING: Could not recover jumptable at 0x007877f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)(lVar1,PTR_s_isEqual__00abcb00);
    return lVar1;
  }
  return 1;
}



/* Entry: 004247b8; end: 0042480f;  */

void FUN_004247b8(void)

{
  undefined8 uVar1;
  
  _objc_opt_self();
  if (lRam0000000000b5fd78 != -1) {
    _dispatch_once(0xb5fd78,&PTR___NSConcreteGlobalBlock_009e3388);
  }
  uVar1 = uRam0000000000b5fd70;
  _objc_retain(uRam0000000000b5fd70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00424810; end: 0042483b;  */

void FUN_00424810(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac2c00;
  _objc_opt_new();
  uVar1 = puRam0000000000b5fd70;
  puRam0000000000b5fd70 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0042483c; end: 004248c7;  */

void FUN_0042483c(void)

{
  int iVar1;
  undefined *puVar2;
  
  _objc_opt_self();
  if ((bRam0000000000b5fd88 & 1) == 0) {
    iVar1 = 0xb5fd88;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
      _objc_opt_new();
      puRam0000000000b5fd80 = puVar2;
      ___cxa_guard_release(0xb5fd88);
    }
  }
  puVar2 = puRam0000000000b5fd80;
  _objc_retain(puRam0000000000b5fd80);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 004248c8; end: 00424943; +[SCSQLiteTransactor _transactorWithClass:databasePath:shared:wipe:] */

void FUN_004248c8(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  
  _objc_retain(in_x3);
  puVar1 = PTR_PTR_00ac2b40;
  _objc_alloc(PTR_PTR_00ac2b40);
  func_0x0077ce80();
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00424944; end: 0042494f; -[SCSQLiteTransactor _initWithClass:databasePath:shared:wipe:] */

void FUN_00424944(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077ceb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__initWithClass_databasePath_shar_00aba0a0);
  return;
}



/* Entry: 00424950; end: 00424977; -[SCSQLiteTransactor _initWithClass:databasePath:shared:wipe:isSingleConnectionMode:autoVacuum:] */

void FUN_00424950(void)

{
  func_0x0077cec0();
  return;
}



/* Entry: 00424978; end: 00424ebb; -[SCSQLiteTransactor _initWithClass:databasePath:shared:wipe:isSingleConnectionMode:omitSingletonConstraint:autoVacuum:] */

undefined8 *
FUN_00424978(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,uint param_5,
            undefined8 param_6,byte param_7,byte param_8,undefined1 param_9)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 auStack_98 [2];
  char cStack_81;
  undefined1 auStack_80 [8];
  long *plStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_00ac3ac0;
  puVar5 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar5,PTR_s_init_00abbf70);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar5 + 9) = 0;
    *(undefined4 *)((long)puVar5 + 0x4c) = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    uVar6 = param_4;
    func_0x007877e0();
    if ((uVar6 & 1) == 0) {
      uVar6 = param_4;
      func_0x007877e0();
      uVar16 = (uint)uVar6;
    }
    else {
      uVar16 = 1;
    }
    *(byte *)(puVar5 + 3) = (param_7 | (byte)uVar16) & 1;
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_opt_new();
    uVar12 = puVar5[6];
    puVar5[6] = puVar7;
    _objc_release();
    _dispatch_group_create();
    uVar13 = puVar5[7];
    puVar5[7] = uVar12;
    _objc_release(uVar13);
    *(undefined1 *)((long)puVar5 + 0x49) = 0;
    puVar5[1] = param_3;
    if (param_5 == 0) {
      uVar6 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x0077bcc0();
      FUN_00425cb4(auStack_98,uVar6);
      iVar4 = (int)auStack_98;
      FUN_00640b74();
      if (cStack_81 < '\0') {
        __ZdlPv(auStack_98[0]);
      }
      if (iVar4 != 0) {
        param_6 = 1;
        *(undefined1 *)(puVar5 + 9) = 1;
      }
      puVar7 = PTR_PTR_00ac2c08;
      _objc_alloc();
      uVar12 = puVar5[1];
      func_0x0078c360(uVar12);
      _objc_retainAutoreleasedReturnValue();
      FUN_0042652c(puVar7,param_4,uVar12,param_6,0,param_9);
      _objc_release(uVar12);
    }
    else {
      uVar6 = param_4;
      _objc_retainAutorelease();
      func_0x0077bcc0();
      FUN_00425cb4(auStack_98,uVar6);
      FUN_006414b4(auStack_80,auStack_98);
      FUN_00424ebc(puVar5 + 4,auStack_80);
      if (plStack_78 != (long *)0x0) {
        plVar8 = plStack_78 + 1;
        do {
          lVar14 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
      if (cStack_81 < '\0') {
        __ZdlPv(auStack_98[0]);
      }
      plVar8 = (long *)puVar5[4];
      (**(code **)(*plVar8 + 0x38))();
      if ((int)plVar8 != 0) {
        *(undefined1 *)(puVar5 + 9) = 1;
      }
      puVar7 = PTR_PTR_00ac2c08;
      _objc_alloc();
      plVar8 = (long *)puVar5[5];
      if (puVar5[5] != 0) {
        plVar1 = (long *)(puVar5[5] + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_00426764();
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 1;
        do {
          lVar14 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
        }
      }
    }
    if (puVar7 == (undefined *)0x0) {
      puVar15 = (undefined8 *)0x0;
      goto LAB_00424e40;
    }
    puVar9 = puVar7;
    func_0x00783dc0();
    if (puVar9[0x1a1] == '\x01') {
      *(undefined1 *)(puVar5 + 9) = 1;
    }
    uVar12 = puVar5[1];
    _objc_alloc();
    func_0x00786880();
    uVar13 = puVar5[8];
    puVar5[8] = uVar12;
    _objc_release(uVar13);
    if (((param_5 | uVar16) & 1) == 0) {
      puVar9 = PTR__OBJC_CLASS___NSURL_00ac2a90;
      func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90);
      _objc_retainAutoreleasedReturnValue();
      func_0x007840a0();
      _objc_retain(0);
      _objc_retain(0);
      _objc_release(puVar9);
      uVar12 = puVar5[2];
      puVar5[2] = 0;
      _objc_retain(0);
      _objc_release(uVar12);
      *(byte *)((long)puVar5 + 0x49) = param_8 ^ 1;
      _objc_release(0);
      _objc_release(0);
    }
    puVar9 = PTR_PTR_00ac2b40;
    if (*(char *)((long)puVar5 + 0x49) == '\x01') {
      uVar12 = puVar5[2];
      _objc_retain(uVar12);
      _objc_opt_self(puVar9);
      puVar10 = puVar9;
      FUN_004247b8();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      _objc_retainAutorelease();
      func_0x0077dea0();
      _os_unfair_lock_lock();
      _objc_release(puVar10);
      FUN_0042483c(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077e720();
      _objc_release(puVar9);
      _os_unfair_lock_unlock(puVar11);
      _objc_release(uVar12);
    }
    _objc_release(puVar7);
  }
  _objc_retain(puVar5);
  puVar15 = puVar5;
LAB_00424e40:
  _objc_release(param_4);
  _objc_release(puVar5);
  return puVar15;
}



/* Entry: 00424ebc; end: 00424f1f;  */

undefined8 * FUN_00424ebc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 00424f20; end: 004250a3;  */

void FUN_00424f20(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    _os_unfair_lock_assert_owner(param_1 + 0x4c);
    _os_unfair_lock_assert_owner(param_1 + 0x50);
    if (*(long *)(param_1 + 0x40) != 0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      _objc_release();
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      _objc_release(uVar1);
      puVar2 = PTR_PTR_00ac2b40;
      lVar5 = *(long *)(param_1 + 0x10);
      if ((lVar5 != 0) && (*(char *)(param_1 + 0x49) == '\x01')) {
        _objc_retain(lVar5);
        _objc_opt_self(puVar2);
        puVar3 = puVar2;
        FUN_004247b8();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        _objc_retainAutorelease();
        func_0x0077dea0();
        _os_unfair_lock_lock();
        _objc_release(puVar3);
        FUN_0042483c(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078b460();
        _objc_release(puVar2);
        _os_unfair_lock_unlock(puVar4);
        _objc_release(lVar5);
      }
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      _dispatch_group_notify(*(undefined8 *)(param_1 + 0x38),param_3,param_2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 004250a4; end: 004251c7; -[SCSQLiteTransactor _deactivateWithCompletion:] */

void FUN_004250a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = 0x21;
  _dispatch_get_global_queue(0x21,0);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)param_1 + 0x4c;
  _os_unfair_lock_trylock();
  if (iVar1 != 0) {
    iVar1 = (int)param_1 + 0x50;
    _os_unfair_lock_trylock();
    if (iVar1 != 0) {
      FUN_00424f20(param_1,param_3,uVar2);
      _os_unfair_lock_unlock(param_1 + 0x50);
      _os_unfair_lock_unlock(param_1 + 0x4c);
      goto LAB_00425188;
    }
    _os_unfair_lock_unlock(param_1 + 0x4c);
  }
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_004251c8;
  puStack_50 = &UNK_009e33a8;
  lStack_48 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  _dispatch_async(uVar2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
LAB_00425188:
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 004251c8; end: 00425237;  */

void FUN_004251c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lVar1 + 0x4c);
  lVar2 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lVar2 + 0x50);
  FUN_00424f20(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x28));
  _os_unfair_lock_unlock(lVar2 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0077aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_0099a4a0)(lVar1 + 0x4c);
  return;
}



/* Entry: 00425238; end: 004252a3;  */

void FUN_00425238(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  return;
}



/* Entry: 004252a4; end: 0042534f; -[SCSQLiteTransactor dealloc] */

void FUN_004252a4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _os_unfair_lock_lock(param_1 + 0x4c);
  _os_unfair_lock_lock(param_1 + 0x50);
  FUN_00424f20(param_1,0,0);
  _os_unfair_lock_unlock(param_1 + 0x50);
  _os_unfair_lock_unlock(param_1 + 0x4c);
  puStack_28 = PTR_PTR_00ac3ac0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00425350; end: 00425403;  */

void FUN_00425350(long param_1,long param_2,ulong param_3)

{
  _objc_retain(param_2);
  if (param_1 != 0) {
    if (((param_3 & 1) == 0) && (*(char *)(param_1 + 0x18) != '\x01')) {
      _objc_retain(param_2);
      if (param_2 != 0) {
        _os_unfair_lock_lock(param_1 + 0x50);
        _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
        func_0x0077e720(*(undefined8 *)(param_1 + 0x30));
        _os_unfair_lock_unlock(param_1 + 0x50);
      }
      _objc_release(param_2);
    }
    else {
      _os_unfair_lock_unlock(param_1 + 0x4c);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 00425404; end: 00425a5f;  */

void FUN_00425404(long param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,
                 long param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long **pplVar8;
  undefined *puVar9;
  long ****pppplVar10;
  long lVar11;
  long lVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  long lVar16;
  long ***ppplVar17;
  long ****pppplVar18;
  long ****pppplVar19;
  long ***ppplStack_80;
  long ***ppplStack_78;
  long **pplStack_70;
  
  _objc_retain(param_2);
  _objc_retain(param_6);
  puVar9 = (undefined *)0x0;
  if (param_1 == 0) goto LAB_00425890;
  if (((param_3 & 1) == 0) && (*(char *)(param_1 + 0x18) != '\x01')) {
    _os_unfair_lock_lock(param_1 + 0x50);
    if (*(long *)(param_1 + 0x30) == 0) {
      pppplVar19 = (long ****)(param_1 + 0x50);
      _os_unfair_lock_unlock(pppplVar19);
LAB_004258cc:
      pppplVar18 = pppplVar19;
      pppplVar19 = (long ****)0x0;
    }
    else {
      _dispatch_group_enter(*(undefined8 *)(param_1 + 0x38));
      pppplVar18 = *(long *****)(param_1 + 0x30);
      if (pppplVar18 == (long ****)0x0) {
        pppplVar19 = (long ****)0x0;
      }
      else {
        pppplVar19 = pppplVar18;
        func_0x00788220();
        _objc_retainAutoreleasedReturnValue();
        if (pppplVar19 != (long ****)0x0) {
          func_0x0078b420(pppplVar18);
        }
      }
      pppplVar18 = (long ****)(param_1 + 0x50);
      _os_unfair_lock_unlock(pppplVar18);
      if (pppplVar19 == (long ****)0x0) {
        pppplVar18 = (long ****)PTR_PTR_00ac2c08;
        if (*(long *)(param_1 + 0x20) == 0) {
          _objc_alloc();
          pppplVar19 = *(long *****)(param_1 + 8);
          uVar2 = *(undefined8 *)(param_1 + 0x10);
          func_0x0078c360(pppplVar19);
          _objc_retainAutoreleasedReturnValue();
          FUN_0042652c(pppplVar18,uVar2,pppplVar19,0,1,0);
          _objc_release(pppplVar19);
        }
        else {
          _objc_alloc();
          ppplStack_78 = *(long ****)(param_1 + 0x28);
          ppplStack_80 = *(long ****)(param_1 + 0x20);
          if (*(long *)(param_1 + 0x28) != 0) {
            plVar1 = (long *)(*(long *)(param_1 + 0x28) + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = *plVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          FUN_00426764();
          pppplVar10 = (long ****)ppplStack_78;
          pppplVar19 = pppplVar18;
          if ((long ****)ppplStack_78 != (long ****)0x0) {
            pppplVar13 = (long ****)(ppplStack_78 + 1);
            do {
              ppplVar17 = *pppplVar13;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(pppplVar13,0x10);
              if (bVar5) {
                *pppplVar13 = (long ***)((long)ppplVar17 + -1);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (ppplVar17 == (long ***)0x0) {
              (*(code *)(*ppplStack_78)[2])(ppplStack_78);
              __ZNSt3__119__shared_weak_count14__release_weakEv(pppplVar10);
              pppplVar19 = pppplVar10;
            }
          }
        }
        if (pppplVar18 == (long ****)0x0) goto LAB_004258cc;
        pppplVar19 = *(long *****)(param_1 + 8);
        _objc_alloc();
        func_0x00786880();
        _objc_release(pppplVar18);
      }
    }
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x4c);
    pppplVar19 = *(long *****)(param_1 + 0x40);
    pppplVar18 = pppplVar19;
    _objc_retain(pppplVar19);
  }
  if (pppplVar19 == (long ****)0x0) {
    FUN_00425350(param_1,0,param_3);
    puVar9 = PTR__OBJC_CLASS___SCResult_00ac2c10;
    _objc_opt_self(PTR_PTR_00ac2b40);
    pppplVar10 = (long ****)PTR__OBJC_CLASS___NSError_00ac2b00;
    func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00);
    _objc_retainAutoreleasedReturnValue();
    func_0x007830c0(puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((param_2 == 0) || ((param_5 & 1) == 0)) {
      if (param_2 != 0) goto LAB_004256ac;
      pppplVar18 = (long ****)0x0;
      bVar5 = false;
    }
    else {
      pppplVar18 = pppplVar19;
      func_0x00783da0();
      _objc_retainAutoreleasedReturnValue();
      pppplVar10 = pppplVar18;
      func_0x00783dc0();
      _objc_release(pppplVar18);
      uVar3 = *(undefined4 *)(pppplVar10 + 0x13);
      if (*(char *)((long)pppplVar10 + 0x10f) < '\0') {
        FUN_002971d4(&ppplStack_80,pppplVar10[0x1f],pppplVar10[0x20]);
      }
      else {
        ppplStack_78 = pppplVar10[0x20];
        ppplStack_80 = pppplVar10[0x1f];
        pplStack_70 = (long **)pppplVar10[0x21];
      }
      FUN_006428a8();
      pplVar8 = pplStack_70;
      pppplVar10 = (long ****)ppplStack_78;
      pppplVar13 = (long ****)ppplStack_80;
      pppplVar18 = (long ****)((ulong)pplStack_70 >> 0x38);
      lVar11 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x0077bcc0();
      if (-1 < (long)pplVar8) {
        pppplVar10 = pppplVar18;
        pppplVar13 = &ppplStack_80;
      }
      lVar12 = lVar11;
      _strlen();
      pppplVar18 = (long ****)0xb6c688;
      (**(code **)(lRam0000000000b6c688 + 0x38))
                (0xb6c688,uVar3,pppplVar13,pppplVar10,lVar11,lVar12,param_3,param_4);
      if ((long)pplStack_70 < 0) {
        pppplVar18 = (long ****)ppplStack_80;
        __ZdlPv(ppplStack_80);
      }
LAB_004256ac:
      bVar5 = true;
      __ZNSt3__16chrono12steady_clock3nowEv();
    }
    pppplVar10 = pppplVar19;
    func_0x00783da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0077f980();
    lVar11 = param_6;
    (**(code **)(param_6 + 0x10))(param_6,pppplVar19);
    _objc_retainAutoreleasedReturnValue();
    pppplVar13 = pppplVar10;
    func_0x00783e60();
    _objc_retainAutoreleasedReturnValue();
    pppplVar14 = pppplVar10;
    if (pppplVar13 == (long ****)0x0) {
      func_0x00780680(pppplVar10);
      pppplVar13 = pppplVar10;
      func_0x00783e60();
      _objc_retainAutoreleasedReturnValue();
      func_0x0078dca0(pppplVar10);
    }
    else {
      func_0x0078dca0(pppplVar10);
      func_0x0078bcc0(pppplVar10);
    }
    if (bVar5) {
      __ZNSt3__16chrono12steady_clock3nowEv();
      pppplVar15 = pppplVar10;
      func_0x00783dc0();
      uVar3 = *(undefined4 *)(pppplVar15 + 0x13);
      if (*(char *)((long)pppplVar15 + 0x10f) < '\0') {
        FUN_002971d4(&ppplStack_80,pppplVar15[0x1f],pppplVar15[0x20]);
      }
      else {
        ppplStack_78 = pppplVar15[0x20];
        ppplStack_80 = pppplVar15[0x1f];
        pplStack_70 = (long **)pppplVar15[0x21];
      }
      FUN_006428a8();
      pplVar8 = pplStack_70;
      pppplVar15 = (long ****)ppplStack_78;
      pppplVar6 = (long ****)ppplStack_80;
      pppplVar7 = (long ****)((ulong)pplStack_70 >> 0x38);
      lVar12 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x0077bcc0();
      if (-1 < (long)pplVar8) {
        pppplVar15 = pppplVar7;
        pppplVar6 = &ppplStack_80;
      }
      lVar16 = lVar12;
      _strlen();
      (**(code **)(lRam0000000000b6c688 + 0x30))
                (0xb6c688,uVar3,pppplVar6,pppplVar15,lVar12,lVar16,param_3,
                 (long)pppplVar14 - (long)pppplVar18);
      if ((long)pplStack_70 < 0) {
        __ZdlPv(ppplStack_80);
      }
    }
    FUN_00425350(param_1,pppplVar19,param_3);
    puVar9 = PTR__OBJC_CLASS___SCResult_00ac2c10;
    if (pppplVar13 == (long ****)0x0) {
      func_0x00792500(PTR__OBJC_CLASS___SCResult_00ac2c10);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x007830c0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(pppplVar13);
    _objc_release(lVar11);
  }
  _objc_release(pppplVar10);
  _objc_release(pppplVar19);
LAB_00425890:
  _objc_release(param_6);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar9);
  return;
}



/* Entry: 00425a60; end: 00425b1f;  */

void FUN_00425a60(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 8);
    }
    _objc_retain(uVar1);
    FUN_00425404(param_1,uVar1,0,0,0,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00425b20; end: 00425bdf;  */

void FUN_00425b20(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 8);
    }
    _objc_retain(uVar1);
    FUN_00425404(param_1,uVar1,1,0,0,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00425be0; end: 00425bfb;  */

void FUN_00425be0(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  return;
}



/* Entry: 00425bfc; end: 00425c5b;  */

void FUN_00425bfc(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  return;
}



/* Entry: 00425c5c; end: 00425cab; -[SCSQLiteTransactor .cxx_destruct] */

void FUN_00425c5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  FUN_00425d5c(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00425cac; end: 00425cb3; -[SCSQLiteTransactor .cxx_construct] */

void FUN_00425cac(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 00425cb4; end: 00425d5b;  */

ulong * FUN_00425cb4(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  dword *pdVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  
  puVar5 = param_2;
  _strlen();
  if ((ulong *)0x7ffffffffffffff6 < puVar5) {
    FUN_0040d740();
    plVar8 = (long *)puVar5[1];
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
      }
    }
    return puVar5;
  }
  if ((ulong *)((long)&MACH_HEADER.sizeofcmds + 2) < puVar5) {
    pdVar4 = &MACH_HEADER.flags;
    if ((dword *)((ulong)puVar5 | 7) != (dword *)0x17) {
      pdVar4 = (dword *)((ulong)puVar5 | 7);
    }
    puVar6 = (ulong *)((long)pdVar4 + 1);
    __Znwm();
    param_1[1] = (ulong)puVar5;
    param_1[2] = (ulong)((long)pdVar4 + 1) | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  else {
    *(char *)((long)param_1 + 0x17) = (char)puVar5;
    puVar6 = param_1;
    if (puVar5 == (ulong *)0x0) goto LAB_00425d3c;
  }
  _memmove(puVar6,param_2,puVar5);
LAB_00425d3c:
  *(undefined1 *)((long)puVar6 + (long)puVar5) = 0;
  return param_1;
}



/* Entry: 00425d5c; end: 00425db3;  */

long FUN_00425d5c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 00425db4; end: 00425e97; -[SCSQLiteObserverSharedToken dealloc] */

void FUN_00425db4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plVar4 = *(long **)(param_1 + 8);
  plStack_28 = *(long **)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x28))(plVar4,&uStack_30);
  plVar4 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  puStack_38 = PTR_PTR_00ac3ac8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00425e98; end: 00425eef; -[SCSQLiteObserverSharedToken .cxx_destruct] */

long FUN_00425e98(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + 8;
}



/* Entry: 00425ef0; end: 00425eff; -[SCSQLiteObserverSharedToken .cxx_construct] */

void FUN_00425ef0(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 00425f00; end: 00425f83; -[SCSQLiteObserverNonSharedToken dealloc] */

void FUN_00425f00(long param_1)

{
  long *plVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
      FUN_00642dc0();
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_28 = PTR_PTR_00ac3ad0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00425f84; end: 00425fe7; -[SCSQLiteObserverNonSharedToken .cxx_destruct] */

void FUN_00425f84(long param_1)

{
  long *plVar1;
  
  if (((*(char *)(param_1 + 0x20) == '\x01') && (*(long *)(param_1 + 0x18) != 0)) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    FUN_00642dc0();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00425fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 00425fe8; end: 00425ff7; -[SCSQLiteObserverNonSharedToken .cxx_construct] */

void FUN_00425fe8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 00425ff8; end: 00425fff; -[SCSqliteConnection getCppObject] */

undefined8 FUN_00425ff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00426000; end: 0042616f; -[SCSqliteConnection beginTransaction] */

void FUN_00426000(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  code *pcStack_148;
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_00643870(*(undefined8 *)(param_1 + 0x20));
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  pcStack_68 = FUN_00427770;
  ppuStack_60 = &PTR_FUN_009e3508;
  pcVar4 = "BEGIN TRANSACTION;";
  FUN_006405bc(*(undefined8 *)(param_1 + 0x20),"BEGIN TRANSACTION;",0x12,1,&pcStack_68);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  puVar1 = *(undefined **)(param_1 + 0x28);
  func_0x0078b280();
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    (*(code *)*ppuStack_60)(&ppuStack_60);
    if ((int)pcVar4 != 1) break;
    ___cxa_begin_catch();
    puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
    func_0x00782e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078dca0(param_1);
    _objc_release();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  pcStack_d8 = FUN_00427770;
  ppuStack_d0 = &PTR_FUN_009e3508;
  pcVar4 = "COMMIT TRANSACTION;";
  FUN_006405bc(*(undefined8 *)(puVar1 + 0x20),"COMMIT TRANSACTION;",0x13,1,&pcStack_d8);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  puVar2 = *(undefined **)(puVar1 + 0x20);
  FUN_006438e0();
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_a8) {
      return;
    }
    ___stack_chk_fail();
    if (((int)pcVar4 == 0) || ((int)pcVar4 != 1)) break;
    ___cxa_begin_catch();
    puVar2 = PTR__OBJC_CLASS___NSError_00ac2b00;
    func_0x00782e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078dca0(puVar1);
    _objc_release();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  lStack_118 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  pcStack_148 = FUN_00427770;
  ppuStack_140 = &PTR_FUN_009e3508;
  pcVar4 = "ROLLBACK TRANSACTION;";
  puVar5 = (undefined *)((long)&MACH_HEADER.sizeofcmds + 1);
  FUN_006405bc(*(undefined8 *)(puVar2 + 0x20),"ROLLBACK TRANSACTION;",0x15,0,&pcStack_148);
  (*(code *)*ppuStack_140)(&ppuStack_140);
  puVar1 = *(undefined **)(puVar2 + 0x20);
  FUN_0064397c();
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_118) {
      return;
    }
    ___stack_chk_fail();
    if (((int)pcVar4 == 0) || ((int)pcVar4 != 1)) break;
    ___cxa_begin_catch();
    puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
    func_0x00782e40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x0078dca0(puVar2);
    _objc_release();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  _objc_retain(puVar5);
  uVar3 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined **)(puVar1 + 0x30) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar3);
  return;
}



/* Entry: 00426170; end: 004262d7; -[SCSqliteConnection commitTransaction] */

void FUN_00426170(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  pcStack_68 = FUN_00427770;
  ppuStack_60 = &PTR_FUN_009e3508;
  pcVar4 = "COMMIT TRANSACTION;";
  FUN_006405bc(*(undefined8 *)(param_1 + 0x20),"COMMIT TRANSACTION;",0x13,1,&pcStack_68);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  puVar1 = *(undefined **)(param_1 + 0x20);
  FUN_006438e0();
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if (((int)pcVar4 == 0) || ((int)pcVar4 != 1)) break;
    ___cxa_begin_catch();
    puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
    func_0x00782e40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078dca0(param_1);
    _objc_release();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  lStack_a8 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  pcStack_d8 = FUN_00427770;
  ppuStack_d0 = &PTR_FUN_009e3508;
  pcVar4 = "ROLLBACK TRANSACTION;";
  puVar5 = (undefined *)((long)&MACH_HEADER.sizeofcmds + 1);
  FUN_006405bc(*(undefined8 *)(puVar1 + 0x20),"ROLLBACK TRANSACTION;",0x15,0,&pcStack_d8);
  (*(code *)*ppuStack_d0)(&ppuStack_d0);
  puVar2 = *(undefined **)(puVar1 + 0x20);
  FUN_0064397c();
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_a8) {
      return;
    }
    ___stack_chk_fail();
    if (((int)pcVar4 == 0) || ((int)pcVar4 != 1)) break;
    ___cxa_begin_catch();
    puVar2 = PTR__OBJC_CLASS___NSError_00ac2b00;
    func_0x00782e40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x0078dca0(puVar1);
    _objc_release();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  _objc_retain(puVar5);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined **)(puVar2 + 0x30) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar3);
  return;
}



/* Entry: 004262d8; end: 0042643f; -[SCSqliteConnection rollbackTransaction] */

void FUN_004262d8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  pcStack_68 = FUN_00427770;
  ppuStack_60 = &PTR_FUN_009e3508;
  pcVar3 = "ROLLBACK TRANSACTION;";
  puVar4 = (undefined *)((long)&MACH_HEADER.sizeofcmds + 1);
  FUN_006405bc(*(undefined8 *)(param_1 + 0x20),"ROLLBACK TRANSACTION;",0x15,0,&pcStack_68);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  puVar1 = *(undefined **)(param_1 + 0x20);
  FUN_0064397c();
  while( true ) {
    if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
      return;
    }
    ___stack_chk_fail();
    if (((int)pcVar3 == 0) || ((int)pcVar3 != 1)) break;
    ___cxa_begin_catch();
    puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
    func_0x00782e40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x0078dca0(param_1);
    _objc_release();
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  _objc_retain(puVar4);
  uVar2 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined **)(puVar1 + 0x30) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00426440; end: 0042646f; -[SCSqliteConnection setError:] */

void FUN_00426440(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00426470; end: 00426497; -[SCSqliteConnection getError] */

void FUN_00426470(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00426498; end: 0042649f; -[SCSqliteConnection addObservedTables:] */

void FUN_00426498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077e770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addObjectsFromArray__00aba6d0);
  return;
}



/* Entry: 004264a0; end: 004264a7; -[SCSqliteConnection getObservedTables] */

void FUN_004264a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077eb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 0x28),PTR_s_allObjects_00aba7b8);
  return;
}



/* Entry: 004264a8; end: 0042651b; -[SCSqliteConnection .cxx_destruct] */

void FUN_004264a8(long param_1)

{
  long *plVar1;
  
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_00425d5c(param_1 + 0x10);
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042650c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}



/* Entry: 0042651c; end: 0042652b; -[SCSqliteConnection .cxx_construct] */

void FUN_0042651c(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 0042652c; end: 00426763;  */

long * FUN_0042652c(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 auStack_78 [2];
  char cStack_61;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  plVar2 = (long *)0x0;
  if (param_1 == 0) {
LAB_004266f4:
    plVar5 = (long *)0x0;
  }
  else {
    puStack_58 = PTR_PTR_00ac3ad8;
    plVar2 = &lStack_60;
    lStack_60 = param_1;
    _objc_msgSendSuper2(plVar2,PTR_s_init_00abbf70);
    if (plVar2 != (long *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
      _objc_alloc_init();
      lVar6 = plVar2[5];
      plVar2[5] = (long)puVar3;
      _objc_release(lVar6);
      uVar4 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x0077bcc0();
      FUN_00425cb4(auStack_78,uVar4);
      if (param_4 != 0) {
        func_0x00640194(auStack_78);
      }
      lVar6 = 0x1a8;
      __Znwm();
      FUN_0063faf4();
      plVar5 = (long *)plVar2[4];
      plVar2[4] = lVar6;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      uVar4 = param_3;
      func_0x00783dc0();
      iVar1 = (int)uVar4;
      FUN_006451c0();
      if (cStack_61 < '\0') {
        __ZdlPv(auStack_78[0]);
      }
      if (iVar1 == -1) goto LAB_004266f4;
    }
    _objc_retain(plVar2);
    plVar5 = plVar2;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(plVar2);
  return plVar5;
}



/* Entry: 00426764; end: 0042698f;  */

long * FUN_00426764(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  undefined2 uStack_66;
  undefined4 uStack_64;
  long lStack_60;
  undefined *puStack_58;
  
  if (param_1 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    puStack_58 = PTR_PTR_00ac3ad8;
    plVar4 = &lStack_60;
    lStack_60 = param_1;
    _objc_msgSendSuper2(plVar4,PTR_s_init_00abbf70);
    if (plVar4 != (long *)0x0) {
      plVar2 = plVar4;
      FUN_0064ba00();
      lVar1 = 0xa0;
      __Znwm();
      FUN_00425cb4(&uStack_88,"client-sql-objc");
      FUN_0064c268(lVar1,&uStack_88,0,plVar2,0);
      if (uStack_74._3_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_84,CONCAT22(uStack_86,CONCAT11(uStack_87,uStack_88))));
      }
      plVar2 = (long *)plVar4[1];
      plVar4[1] = lVar1;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      FUN_00426990(plVar4 + 2,param_2);
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
      _objc_alloc_init();
      lVar1 = plVar4[5];
      plVar4[5] = (long)puVar3;
      _objc_release(lVar1);
      uStack_88 = 1;
      uStack_86 = 0x101;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 2;
      uStack_70 = 0x100;
      uStack_6e = 0;
      uStack_66 = 0;
      uStack_64 = 0x10101;
      uStack_74 = 0x1010101;
      lVar1 = 0x200;
      uStack_87 = param_4;
      __Znwm();
      FUN_00648544();
      plVar2 = (long *)plVar4[4];
      plVar4[4] = lVar1;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    _objc_retain(plVar4);
  }
  _objc_release(plVar4);
  return plVar4;
}



/* Entry: 00426990; end: 00426a0b;  */

undefined8 * FUN_00426990(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 00426a0c; end: 00426ac3;  */

/* WARNING: Removing unreachable block (ram,0x00426bc8) */

long *** FUN_00426a0c(long *param_1,ulong param_2,undefined8 param_3,long ***param_4,long param_5)

{
  long *plVar1;
  code *pcVar2;
  long ***ppplVar3;
  undefined8 uVar4;
  long ***ppplVar5;
  long **pplVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long **unaff_x23;
  undefined8 uVar13;
  long ***ppplVar14;
  undefined8 *puStack_1f8;
  long **pplStack_1f0;
  long **pplStack_1e8;
  long **pplStack_1e0;
  undefined *puStack_1d8;
  long **pplStack_1d0;
  long *plStack_1c8;
  long **pplStack_1c0;
  long **pplStack_1b8;
  long **pplStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 *apuStack_180 [5];
  char cStack_158;
  long lStack_d0;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long **pplStack_38;
  
  ppplVar5 = (long ***)(param_1 + 2);
  lVar7 = *param_1;
  if ((ulong)(((long)*ppplVar5 - lVar7 >> 3) * -0x5555555555555555) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_004277dc();
      lStack_d0 = *(long *)PTR____stack_chk_guard_00999f88;
      _objc_retain(param_4);
      _objc_retain(param_5);
      puStack_1d8 = PTR_PTR_00ac3ae0;
      ppplVar3 = &pplStack_1e0;
      pplStack_1e0 = (long **)ppplVar5;
      _objc_msgSendSuper2(ppplVar3,PTR_s_init_00abbf70);
      if (ppplVar3 != (long ***)0x0) {
        puStack_1f8 = (long **)0x0;
        pplStack_1f0 = (long **)0x0;
        pplStack_1e8 = (long **)0x0;
        _objc_retain(param_5);
        lVar7 = param_5;
        func_0x00780ea0();
        if (lVar7 != 0) {
          do {
            lVar9 = 0;
            do {
              uVar13 = *(undefined8 *)(lVar9 * 8);
              uVar4 = uVar13;
              func_0x00783ba0();
              uStack_1a8 = (long **)CONCAT44(uStack_1a8._4_4_,(int)uVar4);
              uVar4 = uVar13;
              func_0x00792ae0();
              uStack_1a8 = (long **)CONCAT44((int)uVar4,(undefined4)uStack_1a8);
              func_0x00791b20(uVar13);
              _objc_retainAutoreleasedReturnValue();
              _objc_retainAutorelease();
              uVar4 = uVar13;
              func_0x0077bcc0(uVar13);
              FUN_00425cb4(&plStack_1a0,uVar4);
              pplVar6 = pplStack_1f0;
              uStack_188 = 0;
              cStack_158 = '\0';
              if (pplStack_1f0 < pplStack_1e8) {
                *pplStack_1f0 = (long *)uStack_1a8;
                pplStack_1f0[3] = plStack_190;
                pplStack_1f0[2] = plStack_198;
                pplStack_1f0[1] = plStack_1a0;
                plStack_198 = (long *)0x0;
                plStack_190 = (long *)0x0;
                plStack_1a0 = (long *)0x0;
                *(undefined1 *)(pplStack_1f0 + 4) = 0;
                *(undefined1 *)(pplStack_1f0 + 10) = 0;
                if (cStack_158 == '\x01') {
                  pplStack_1f0[4] = (long *)CONCAT71(uStack_187,uStack_188);
                  (*(code *)apuStack_180[0][2])(pplStack_1f0 + 5,apuStack_180);
                  *(undefined1 *)(pplVar6 + 10) = 1;
                }
                ppplVar14 = (long ***)(pplVar6 + 0xb);
              }
              else {
                lVar12 = (long)pplStack_1f0 - (long)puStack_1f8;
                uVar10 = (lVar12 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
                if (0x2e8ba2e8ba2e8ba < uVar10) {
                  FUN_00427c78();
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x426ec0);
                  (*pcVar2)();
                }
                lVar8 = (long)pplStack_1e8 - (long)puStack_1f8 >> 3;
                uVar11 = lVar8 * 0x5d1745d1745d1746;
                if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
                  uVar11 = uVar10;
                }
                if (0x1745d1745d1745c < (ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3)) {
                  uVar11 = 0x2e8ba2e8ba2e8ba;
                }
                pplStack_1b0 = (long **)&pplStack_1e8;
                if (uVar11 == 0) {
                  ppplVar5 = (long ***)0x0;
                }
                else {
                  ppplVar5 = &pplStack_1e8;
                  FUN_00427c8c();
                }
                plVar1 = (long *)((long)ppplVar5 + lVar12);
                pplStack_1d0 = (long **)ppplVar5;
                plStack_1c8 = plVar1;
                pplStack_1b8 = (long **)(ppplVar5 + uVar11 * 0xb);
                *plVar1 = (long)uStack_1a8;
                plVar1[3] = (long)plStack_190;
                plVar1[2] = (long)plStack_198;
                plVar1[1] = (long)plStack_1a0;
                plStack_198 = (long *)0x0;
                plStack_190 = (long *)0x0;
                plStack_1a0 = (long *)0x0;
                *(undefined1 *)(plVar1 + 4) = 0;
                *(undefined1 *)(plVar1 + 10) = 0;
                if (cStack_158 == '\x01') {
                  plVar1[4] = CONCAT71(uStack_187,uStack_188);
                  (*(code *)apuStack_180[0][2])(plVar1 + 5,apuStack_180);
                  *(undefined1 *)(plVar1 + 10) = 1;
                }
                ppplVar14 = (long ***)(plVar1 + 0xb);
                pplVar6 = (long **)((long)plVar1 + ((long)puStack_1f8 - (long)pplStack_1f0));
                pplStack_1c0 = (long **)ppplVar14;
                FUN_00427cd4(&pplStack_1e8,puStack_1f8,pplStack_1f0,pplVar6);
                pplStack_1c0 = (long **)puStack_1f8;
                pplStack_1b8 = pplStack_1e8;
                pplStack_1d0 = (long **)puStack_1f8;
                plStack_1c8 = puStack_1f8;
                puStack_1f8 = pplVar6;
                pplStack_1f0 = (long **)ppplVar14;
                pplStack_1e8 = (long **)(ppplVar5 + uVar11 * 0xb);
                func_0x00427df0(&pplStack_1d0);
              }
              pplStack_1f0 = (long **)ppplVar14;
              if (cStack_158 == '\x01') {
                (*(code *)*apuStack_180[0])(apuStack_180);
              }
              if ((long)plStack_190 < 0) {
                __ZdlPv(plStack_1a0);
              }
              _objc_release(uVar13);
              lVar9 = lVar9 + 1;
            } while (lVar7 != lVar9);
            lVar7 = param_5;
            func_0x00780ea0();
          } while (lVar7 != 0);
        }
        _objc_release(param_5);
        _objc_retainAutorelease(param_4);
        func_0x0077bcc0(param_4);
        unaff_x23 = (long **)0x38;
        __Znwm();
        FUN_0064513c();
        pplVar6 = ppplVar3[1];
        ppplVar3[1] = unaff_x23;
        if (pplVar6 != (long **)0x0) {
          func_0x00427f04();
        }
        uStack_1a8 = &puStack_1f8;
        FUN_00427e3c(&uStack_1a8);
      }
      _objc_release(param_5);
      ppplVar5 = param_4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_d0) {
        ___stack_chk_fail();
        __ZdlPv(unaff_x23);
        uStack_1a8 = &puStack_1f8;
        FUN_00427e3c(&uStack_1a8);
        _objc_release(ppplVar3);
        _objc_release(param_5);
        _objc_release(param_4);
        __Unwind_Resume();
        if (*(char *)(ppplVar5 + 10) == '\x01') {
          (*(code *)*ppplVar5[5])();
        }
        if (*(char *)((long)ppplVar5 + 0x1f) < '\0') {
          __ZdlPv(ppplVar5[1]);
        }
        return ppplVar5;
      }
      return ppplVar3;
    }
    lVar9 = param_1[1];
    pplStack_38 = (long **)ppplVar5;
    FUN_004277f0();
    lVar7 = (long)ppplVar5 + (lVar9 - lVar7);
    lVar9 = lVar7 - (param_1[1] - *param_1);
    _memcpy(lVar9);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar9;
    param_1[1] = lVar7;
    lStack_40 = param_1[2];
    param_1[2] = (long)(ppplVar5 + param_2 * 3);
    ppplVar5 = (long ***)&plStack_58;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00427834(ppplVar5);
  }
  return ppplVar5;
}



/* Entry: 00426ac4; end: 00426f6b; -[SCSqliteSchema initWithVersion:sql:upgradeSteps:] */

/* WARNING: Removing unreachable block (ram,0x00426bc8) */

undefined8 *
FUN_00426ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            long param_5)

{
  long *plVar1;
  long **pplVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long ***ppplVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 unaff_x23;
  undefined8 uVar14;
  long ***ppplVar15;
  undefined8 *puStack_198;
  long **pplStack_190;
  long **pplStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long **pplStack_170;
  long *plStack_168;
  long **pplStack_160;
  long **pplStack_158;
  long **pplStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 *apuStack_120 [5];
  char cStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_178 = PTR_PTR_00ac3ae0;
  puVar4 = &uStack_180;
  uStack_180 = param_1;
  _objc_msgSendSuper2(puVar4,PTR_s_init_00abbf70);
  if (puVar4 != (undefined8 *)0x0) {
    puStack_198 = (long **)0x0;
    pplStack_190 = (long **)0x0;
    pplStack_188 = (long **)0x0;
    _objc_retain(param_5);
    lVar7 = param_5;
    func_0x00780ea0();
    if (lVar7 != 0) {
      do {
        lVar12 = 0;
        do {
          uVar14 = *(undefined8 *)(lVar12 * 8);
          uVar5 = uVar14;
          func_0x00783ba0();
          uStack_148 = (long **)CONCAT44(uStack_148._4_4_,(int)uVar5);
          uVar5 = uVar14;
          func_0x00792ae0();
          uStack_148 = (long **)CONCAT44((int)uVar5,(undefined4)uStack_148);
          func_0x00791b20(uVar14);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          uVar5 = uVar14;
          func_0x0077bcc0(uVar14);
          FUN_00425cb4(&plStack_140,uVar5);
          pplVar2 = pplStack_190;
          uStack_128 = 0;
          cStack_f8 = '\0';
          if (pplStack_190 < pplStack_188) {
            *pplStack_190 = (long *)uStack_148;
            pplStack_190[3] = plStack_130;
            pplStack_190[2] = plStack_138;
            pplStack_190[1] = plStack_140;
            plStack_138 = (long *)0x0;
            plStack_130 = (long *)0x0;
            plStack_140 = (long *)0x0;
            *(undefined1 *)(pplStack_190 + 4) = 0;
            *(undefined1 *)(pplStack_190 + 10) = 0;
            if (cStack_f8 == '\x01') {
              pplStack_190[4] = (long *)CONCAT71(uStack_127,uStack_128);
              (*(code *)apuStack_120[0][2])(pplStack_190 + 5,apuStack_120);
              *(undefined1 *)(pplVar2 + 10) = 1;
            }
            ppplVar15 = (long ***)(pplVar2 + 0xb);
          }
          else {
            lVar13 = (long)pplStack_190 - (long)puStack_198;
            uVar10 = (lVar13 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
            if (0x2e8ba2e8ba2e8ba < uVar10) {
              FUN_00427c78();
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x426ec0);
              (*pcVar3)();
            }
            lVar9 = (long)pplStack_188 - (long)puStack_198 >> 3;
            uVar11 = lVar9 * 0x5d1745d1745d1746;
            if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
              uVar11 = uVar10;
            }
            if (0x1745d1745d1745c < (ulong)(lVar9 * 0x2e8ba2e8ba2e8ba3)) {
              uVar11 = 0x2e8ba2e8ba2e8ba;
            }
            pplStack_150 = (long **)&pplStack_188;
            if (uVar11 == 0) {
              ppplVar6 = (long ***)0x0;
            }
            else {
              ppplVar6 = &pplStack_188;
              FUN_00427c8c();
            }
            plVar1 = (long *)((long)ppplVar6 + lVar13);
            pplStack_170 = (long **)ppplVar6;
            plStack_168 = plVar1;
            pplStack_158 = (long **)(ppplVar6 + uVar11 * 0xb);
            *plVar1 = (long)uStack_148;
            plVar1[3] = (long)plStack_130;
            plVar1[2] = (long)plStack_138;
            plVar1[1] = (long)plStack_140;
            plStack_138 = (long *)0x0;
            plStack_130 = (long *)0x0;
            plStack_140 = (long *)0x0;
            *(undefined1 *)(plVar1 + 4) = 0;
            *(undefined1 *)(plVar1 + 10) = 0;
            if (cStack_f8 == '\x01') {
              plVar1[4] = CONCAT71(uStack_127,uStack_128);
              (*(code *)apuStack_120[0][2])(plVar1 + 5,apuStack_120);
              *(undefined1 *)(plVar1 + 10) = 1;
            }
            ppplVar15 = (long ***)(plVar1 + 0xb);
            pplVar2 = (long **)((long)plVar1 + ((long)puStack_198 - (long)pplStack_190));
            pplStack_160 = (long **)ppplVar15;
            FUN_00427cd4(&pplStack_188,puStack_198,pplStack_190,pplVar2);
            pplStack_160 = (long **)puStack_198;
            pplStack_158 = pplStack_188;
            pplStack_170 = (long **)puStack_198;
            plStack_168 = puStack_198;
            puStack_198 = pplVar2;
            pplStack_190 = (long **)ppplVar15;
            pplStack_188 = (long **)(ppplVar6 + uVar11 * 0xb);
            func_0x00427df0(&pplStack_170);
          }
          pplStack_190 = (long **)ppplVar15;
          if (cStack_f8 == '\x01') {
            (*(code *)*apuStack_120[0])(apuStack_120);
          }
          if ((long)plStack_130 < 0) {
            __ZdlPv(plStack_140);
          }
          _objc_release(uVar14);
          lVar12 = lVar12 + 1;
        } while (lVar7 != lVar12);
        lVar7 = param_5;
        func_0x00780ea0();
      } while (lVar7 != 0);
    }
    _objc_release(param_5);
    _objc_retainAutorelease(param_4);
    func_0x0077bcc0(param_4);
    unaff_x23 = 0x38;
    __Znwm();
    FUN_0064513c();
    lVar7 = puVar4[1];
    puVar4[1] = unaff_x23;
    if (lVar7 != 0) {
      func_0x00427f04();
    }
    uStack_148 = &puStack_198;
    FUN_00427e3c(&uStack_148);
  }
  _objc_release(param_5);
  puVar8 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    __ZdlPv(unaff_x23);
    uStack_148 = &puStack_198;
    FUN_00427e3c(&uStack_148);
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(param_4);
    __Unwind_Resume();
    if (*(char *)(puVar8 + 10) == '\x01') {
      (**(code **)puVar8[5])();
    }
    if (*(char *)((long)puVar8 + 0x1f) < '\0') {
      __ZdlPv(puVar8[1]);
    }
    return puVar8;
  }
  return puVar4;
}



/* Entry: 00426f6c; end: 00426fb7;  */

long FUN_00426f6c(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    (*(code *)**(undefined8 **)(param_1 + 0x28))();
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 00426fb8; end: 00426fbf; -[SCSqliteSchema getCppObject] */

undefined8 FUN_00426fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00426fc0; end: 0042704b; +[SCSqliteSchema testSchemaUpgradeWithBaselineSchema:currentSchema:] */

undefined8 FUN_00426fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00783dc0(param_3);
  uVar2 = param_4;
  func_0x00783dc0(param_4);
  FUN_0064647c(uVar1,uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 0042704c; end: 00427063; -[SCSqliteSchema .cxx_destruct] */

void FUN_0042704c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    func_0x00427f40(lVar1 + 0x20,*(undefined8 *)(lVar1 + 0x28));
    if (*(char *)(lVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar1 + 8));
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 00427064; end: 0042706b; -[SCSqliteSchema .cxx_construct] */

void FUN_00427064(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 0042706c; end: 00427107; -[SCSqliteUpgradeStep initWithFromVersion:toVersion:sql:] */

undefined1 *
FUN_0042706c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_00ac3ae8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 00427108; end: 0042710f; -[SCSqliteUpgradeStep fromVersion] */

undefined8 FUN_00427108(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00427110; end: 00427117; -[SCSqliteUpgradeStep toVersion] */

undefined8 FUN_00427110(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00427118; end: 0042711f; -[SCSqliteUpgradeStep sql] */

undefined8 FUN_00427118(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00427120; end: 0042712b; -[SCSqliteUpgradeStep .cxx_destruct] */

void FUN_00427120(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x18,0);
  return;
}



/* Entry: 0042712c; end: 004271cf;  */

void FUN_0042712c(undefined8 param_1,int *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_31;
  
  _objc_retain(param_3);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  if (param_3 == 0) {
    FUN_0064907c(param_1,iVar1,&uStack_31);
  }
  else {
    lVar2 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x0077bcc0();
    lVar3 = lVar2;
    _strlen();
    FUN_00648f64(param_1,iVar1,lVar2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004271d0; end: 00427313;  */

void FUN_004271d0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  FUN_006490e4();
  _os_unfair_lock_lock(0xb5fd90);
  lVar1 = 0xb5fd98;
  _objc_loadWeakRetained();
  _os_unfair_lock_unlock(0xb5fd90);
  puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x6f) < '\0') {
      FUN_002971d4(&uStack_50,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    }
    else {
      uStack_48 = *(undefined8 *)(param_1 + 0x60);
      uStack_50 = *(undefined8 *)(param_1 + 0x58);
      lStack_40 = *(long *)(param_1 + 0x68);
    }
    func_0x00792220(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788a20(lVar1);
    _objc_release(puVar2);
    if (lStack_40 < 0) {
      __ZdlPv(uStack_50);
    }
  }
  _objc_release(lVar1);
  FUN_00648ea0(param_1);
  return;
}



/* Entry: 00427314; end: 00427553;  */

void FUN_00427314(long param_1,code *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  while (lVar2 = param_1, FUN_006490e4(), (int)lVar2 != 0) {
    lVar2 = param_1;
    (*param_2)(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e720(puVar1);
    _objc_release(lVar2);
  }
  _os_unfair_lock_lock(0xb5fd90);
  lVar2 = 0xb5fd98;
  _objc_loadWeakRetained();
  _os_unfair_lock_unlock(0xb5fd90);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  if (lVar2 != 0) {
    func_0x00780e80(puVar1);
    func_0x0077f1a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_00999f30;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_00427554;
    puStack_50 = &UNK_009e3410;
    _objc_retain();
    puStack_48 = puVar3;
    func_0x00782c00(puVar1);
    puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
    if (*(char *)(param_1 + 0x6f) < '\0') {
      FUN_002971d4(&uStack_80,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
    }
    else {
      uStack_78 = *(undefined8 *)(param_1 + 0x60);
      uStack_80 = *(undefined8 *)(param_1 + 0x58);
      lStack_70 = *(long *)(param_1 + 0x68);
    }
    func_0x00792220(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788a20(lVar2);
    _objc_release(puVar4);
    if (lStack_70 < 0) {
      __ZdlPv(uStack_80);
    }
    _objc_release(puStack_48);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  FUN_00648ea0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00427554; end: 004275a7;  */

void FUN_00427554(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00781e40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e720(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 004275a8; end: 004275b7;  */

void FUN_004275a8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 004275b8; end: 004275ef;  */

void FUN_004275b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  if (lVar1 == 0) {
    FUN_00648da0(param_1);
    lVar1 = *(long *)(param_1 + 0x80);
  }
                    /* WARNING: Could not recover jumptable at 0x0077afd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_int64_0099a9d0)(lVar1,param_2);
  return;
}



/* Entry: 004275f0; end: 0042766b;  */

void FUN_004275f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 == 0) {
    FUN_00648da0();
    lVar3 = *(long *)(param_1 + 0x80);
  }
  lVar2 = lVar3;
  _sqlite3_column_type(lVar3,param_2);
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  if ((int)lVar2 != 5) {
    _sqlite3_column_text(lVar3,param_2);
    func_0x00792220(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0042766c; end: 0042771b;  */

long FUN_0042766c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *param_1;
  if (lVar2 == 0) {
    lVar2 = 0x90;
    __Znwm();
    FUN_00427fd8();
    plVar1 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
      lVar2 = *param_1;
    }
  }
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 0042771c; end: 0042776f;  */

long * FUN_0042771c(long *param_1,long *param_2)

{
  long lVar1;
  
  if (param_2 != param_1) {
    if ((param_1[1] != 0) && (*param_1 != 0)) {
      FUN_00642dc0();
      *param_1 = 0;
      param_1[1] = 0;
    }
    lVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar1;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}



/* Entry: 00427770; end: 004277b3;  */

/* WARNING: Possible PIC construction at 0x0042777c: Changing call to branch */

void FUN_00427770(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  ___cxa_allocate_exception();
  *(undefined ***)pdVar1 = &PTR_FUN_009e34f0;
  ___cxa_throw();
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)();
  return;
}



/* Entry: 004277b4; end: 004277b7;  */

void FUN_004277b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)();
  return;
}



/* Entry: 004277b8; end: 004277cb;  */

void FUN_004277b8(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004277cc; end: 004277db;  */

void FUN_004277cc(void)

{
  return;
}



/* Entry: 004277dc; end: 004277ef;  */

undefined1  [16] FUN_004277dc(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  pcVar1 = "vector";
  FUN_0040d774();
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_2 * 0x18;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  FUN_0040cee8();
  lVar2 = *(long *)((long)pcVar1 + 8);
  func_0x00427868();
  if (*(long *)pcVar1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = pcVar1;
  return auVar4;
}



/* Entry: 004277f0; end: 00427933;  */

undefined1  [16] FUN_004277f0(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    lVar1 = param_2 * 0x18;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  FUN_0040cee8();
  lVar1 = param_1[1];
  func_0x00427868();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = lVar1;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 00427934; end: 004279b7;  */

void FUN_00427934(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_004279b8(param_1,param_4);
    lVar1 = param_1 + 0x10;
    FUN_00427a04(lVar1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 004279b8; end: 00427a03;  */

long * FUN_004279b8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_80;
  long **pplStack_78;
  long **pplStack_70;
  undefined1 uStack_68;
  long *plStack_60;
  long *plStack_58;
  
  if (param_2 < (long *)0xaaaaaaaaaaaaaab) {
    plVar1 = param_1 + 2;
    FUN_004277f0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 3);
    return plVar1;
  }
  FUN_004277dc();
  pplStack_78 = &plStack_60;
  pplStack_70 = &plStack_58;
  uStack_68 = 0;
  plStack_80 = param_1;
  plStack_60 = param_4;
  for (; plStack_58 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_002971d4(param_4,*param_2,param_2[1]);
    }
    else {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = lVar3;
      *param_4 = lVar2;
    }
    param_4 = plStack_58 + 3;
  }
  uStack_68 = 1;
  FUN_00427ac0(&plStack_80);
  return param_4;
}



/* Entry: 00427a04; end: 00427abf;  */

undefined8 *
FUN_00427a04(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_48 = 0;
  puStack_40 = param_4;
  uStack_60 = param_1;
  for (; puStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 3) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_002971d4(param_4,*param_2,param_2[1]);
    }
    else {
      uVar2 = param_2[1];
      uVar1 = *param_2;
      param_4[2] = param_2[2];
      param_4[1] = uVar2;
      *param_4 = uVar1;
    }
    param_4 = puStack_38 + 3;
  }
  uStack_48 = 1;
  FUN_00427ac0(&uStack_60);
  return param_4;
}



/* Entry: 00427ac0; end: 00427af3;  */

long FUN_00427ac0(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_00427af4(param_1);
  }
  return param_1;
}


