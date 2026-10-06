/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10581351c; end: 10581358f;  */

void FUN_10581351c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1058131f8();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105813590; end: 105813723;  */

void FUN_105813590(long param_1,undefined1 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bec58;
  FUN_105813184(PTR_PTR_1126bec58,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar4 = PTR_PTR_1126bec58;
    _objc_retain(param_1);
    _objc_opt_self(puVar4);
    puVar4 = PTR_PTR_1126bec58;
    if (param_1 == 0) {
      _objc_opt_new();
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      lVar2 = param_1;
      func_0x00010bf5cbe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c265be0(param_1);
      FUN_1058130e0(puVar4,0xffffffffffffffff,lVar2,lVar3);
      _objc_release(lVar2);
    }
    *(undefined4 *)(puVar4 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    lVar2 = param_1;
    func_0x00010bf5cbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c265be0();
    *(int *)(puVar1 + 0x14) = (int)lVar2;
    _objc_retain(puVar1);
    puVar4 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105813724; end: 105813787;  */

void FUN_105813724(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bec48;
    _objc_alloc(PTR_PTR_1126bec48);
    func_0x00010c006c40();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105813788; end: 105813793; -[SCCTPCustomStickerPendingDeleteChangeRequest .cxx_destruct] */

void FUN_105813788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105813794; end: 10581379f; -[SCCTPCustomStickerPendingDeleteChangeRequest table] */

undefined * FUN_105813794(void)

{
  return &UNK_10f2fd924;
}



/* Entry: 1058137a0; end: 1058137e7; -[SCCTPCustomStickerPendingDeleteChangeRequest createTableWithSQLite:] */

void FUN_1058137a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddbef21,0x89,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1058137e8; end: 105813b6f; -[SCCTPCustomStickerPendingDeleteChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1058137e8(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_105813724(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105813b70(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2fd9ca);
    if (lVar6 == 0) goto LAB_105813b0c;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_105813b0c;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bec48);
    func_0x00010c21c9a0(puVar7);
LAB_105813af4:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2fd98f);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126bec48);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105813b18;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_105813b18;
    }
    FUN_105813724(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105813b70(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2fda10);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126bec48);
        func_0x00010c21c9a0(puVar7);
        goto LAB_105813af4;
      }
    }
LAB_105813b0c:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_105813b18:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105813b70; end: 105813d4b;  */

ulong FUN_105813b70(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010bf5cbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_105813c70;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x0001001cde08(param_1,pcVar5,pcVar6);
    goto LAB_105813c70;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_105813c30;
    uVar9 = 0;
  }
  else {
LAB_105813c30:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x0001001cde08(param_1,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_105813c70:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010c265be0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce354(param_1,6,pcVar5,0);
  func_0x0001001ce2e4(param_1,4,uVar9 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105813d4c; end: 105813d77; +[SCGrapheneCustomstickerMetric customStickerOperation] */

void FUN_105813d4c(void)

{
  _objc_alloc(PTR_PTR_1126bec30);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105813d78; end: 105813e17; -[SCGrapheneCustomstickerMetric description] */

void FUN_105813d78(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e04f98;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e04f98,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ea738;
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



/* Entry: 105813e18; end: 105813f5b; -[SCGrapheneRegistry customstickerGraphene] */

void FUN_105813e18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105813ea0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c0950 != -1) {
    func_0x00010002a2fc(0x1136c0950,&puStack_48);
  }
  uVar1 = uRam00000001136c0948;
  _objc_retain(uRam00000001136c0948);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105813f5c; end: 105813f8b; +[CTPItemRankingUtils rankingStringForInteger:] */

void FUN_105813f5c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e04fd8);
  return;
}



/* Entry: 105813f8c; end: 105813ff3; +[CTPItemRankingUtils rankingStringForCurrentTime] */

void FUN_105813f8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0();
  _objc_release(puVar1);
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e04ff8);
  return;
}



/* Entry: 105813ff4; end: 10581405b; +[SCCTPCustomStickerStatus descriptor] */

void FUN_105813ff4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0958 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6e860,
                        &PTR____CFConstantStringClassReference_110e05018,&PTR_DAT_1131030d8,
                        &PTR_s_id_p_113103630,3,0x18,0x1c);
    puRam00000001136c0958 = puVar1;
  }
  return;
}



/* Entry: 10581405c; end: 1058140c3; +[SCCTPCustomStickerResult descriptor] */

void FUN_10581405c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0960 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6e8b0,
                        &PTR____CFConstantStringClassReference_110debb78,&PTR_DAT_1131030d8,
                        &PTR_s_status_1131033b0,2,0x18,0x1c);
    puRam00000001136c0960 = puVar1;
  }
  return;
}



/* Entry: 1058140c4; end: 10581412b; +[SCCTPCustomStickerCreateRequest descriptor] */

void FUN_1058140c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0968 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6e900,
                        &PTR____CFConstantStringClassReference_110debf18,&PTR_DAT_1131030d8,
                        &PTR_DAT_1131030f0,1,0x10,0x1c);
    puRam00000001136c0968 = puVar1;
  }
  return;
}



/* Entry: 10581412c; end: 105814193; +[SCCTPCustomStickerCreateResponse descriptor] */

void FUN_10581412c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0970 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6e950,
                        &PTR____CFConstantStringClassReference_110debf38,&PTR_DAT_1131030d8,
                        &PTR_s_result_113103110,1,0x10,0x1c);
    puRam00000001136c0970 = puVar1;
  }
  return;
}



/* Entry: 105814194; end: 1058141fb; +[SCCTPCustomStickerDeleteRequest descriptor] */

void FUN_105814194(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0978 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6e9a0,
                        &PTR____CFConstantStringClassReference_110de31b8,&PTR_DAT_1131030d8,
                        &PTR_s_id_p_1131033f0,2,0x10,0x1c);
    puRam00000001136c0978 = puVar1;
  }
  return;
}



/* Entry: 1058141fc; end: 105814263; +[SCCTPCustomStickerDeleteResponse descriptor] */

void FUN_1058141fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0980 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6e9f0,
                        &PTR____CFConstantStringClassReference_110de31d8,&PTR_DAT_1131030d8,
                        &PTR_s_status_113103130,1,0x10,0x1c);
    puRam00000001136c0980 = puVar1;
  }
  return;
}



/* Entry: 105814264; end: 1058142cb; +[SCCTPCustomStickerTakedownRequest descriptor] */

void FUN_105814264(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0988 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ea40,
                        &PTR____CFConstantStringClassReference_110e05038,&PTR_DAT_1131030d8,
                        &PTR_s_id_p_113103150,1,0x10,0x1c);
    puRam00000001136c0988 = puVar1;
  }
  return;
}



/* Entry: 1058142cc; end: 105814333; +[SCCTPCustomStickerTakedownResponse descriptor] */

void FUN_1058142cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0990 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ea90,
                        &PTR____CFConstantStringClassReference_110e05058,&PTR_DAT_1131030d8,
                        &PTR_s_status_113103170,1,0x10,0x1c);
    puRam00000001136c0990 = puVar1;
  }
  return;
}



/* Entry: 105814334; end: 10581439b; +[SCCTPCustomStickerAddRefRequest descriptor] */

void FUN_105814334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0998 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6eae0,
                        &PTR____CFConstantStringClassReference_110e05078,&PTR_DAT_1131030d8,
                        &PTR_s_id_p_113103690,3,0x20,0x1c);
    puRam00000001136c0998 = puVar1;
  }
  return;
}



/* Entry: 10581439c; end: 105814403; +[SCCTPCustomStickerAddRefResponse descriptor] */

void FUN_10581439c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c09a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6eb30,
                        &PTR____CFConstantStringClassReference_110e05098,&PTR_DAT_1131030d8,
                        &PTR_s_status_113103190,1,0x10,0x1c);
    puRam00000001136c09a0 = puVar1;
  }
  return;
}



/* Entry: 105814404; end: 10581446b; +[SCCTPCustomStickerRemoveRefRequest descriptor] */

void FUN_105814404(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c09a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6eb80,
                        &PTR____CFConstantStringClassReference_110e050b8,&PTR_DAT_1131030d8,
                        &PTR_s_id_p_1131036f0,3,0x20,0x1c);
    puRam00000001136c09a8 = puVar1;
  }
  return;
}



/* Entry: 10581446c; end: 1058144d3; +[SCCTPCustomStickerRemoveRefResponse descriptor] */

void FUN_10581446c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c09b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ebd0,
                        &PTR____CFConstantStringClassReference_110e050d8,&PTR_DAT_1131030d8,
                        &PTR_s_status_1131031b0,1,0x10,0x1c);
    puRam00000001136c09b0 = puVar1;
  }
  return;
}



/* Entry: 1058144d4; end: 10581453b; +[SCCTPCustomStickerBatchOpsRequest descriptor] */

void FUN_1058144d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c09b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ec20,
                        &PTR____CFConstantStringClassReference_110e050f8,&PTR_DAT_1131030d8,
                        &PTR_DAT_113103430,2,0x18,0x1c);
    puRam00000001136c09b8 = puVar1;
  }
  return;
}



/* Entry: 10581453c; end: 1058145a3; +[SCCTPCustomStickerBatchOpsResponse descriptor] */

void FUN_10581453c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c09c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ec70,
                        &PTR____CFConstantStringClassReference_110e05118,&PTR_DAT_1131030d8,
                        &PTR_DAT_113103750,3,0x20,0x1c);
    puRam00000001136c09c0 = puVar1;
  }
  return;
}



/* Entry: 1058145a4; end: 10581460b; +[SCCTPCustomStickerOrderWeightSpec descriptor] */

void FUN_1058145a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c09c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ecc0,
                        &PTR____CFConstantStringClassReference_110e05138,&PTR_DAT_1131030d8,
                        &PTR_DAT_113103470,2,0x18,0x1c);
    puRam00000001136c09c8 = puVar1;
  }
  return;
}



/* Entry: 10581460c; end: 105814673; +[SCCTPCustomStickerUpdateOrderWeightRequest descriptor] */

void FUN_10581460c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c09d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ed10,
                        &PTR____CFConstantStringClassReference_110e05158,&PTR_DAT_1131030d8,
                        &PTR_DAT_1131034b0,2,0x18,0x1c);
    puRam00000001136c09d0 = puVar1;
  }
  return;
}



/* Entry: 105814674; end: 1058146db; +[SCCTPCustomStickerUpdateOrderWeightResponse descriptor] */

void FUN_105814674(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c09d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ed60,
                        &PTR____CFConstantStringClassReference_110e05178,&PTR_DAT_1131030d8,
                        &PTR_s_status_1131031d0,1,0x10,0x1c);
    puRam00000001136c09d8 = puVar1;
  }
  return;
}



/* Entry: 1058146dc; end: 105814743; +[SCCTPCustomStickerGetRequest descriptor] */

void FUN_1058146dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c09e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6edb0,
                        &PTR____CFConstantStringClassReference_110dc92b8,&PTR_DAT_1131030d8,
                        &PTR_DAT_1131031f0,1,0x10,0x1c);
    puRam00000001136c09e0 = puVar1;
  }
  return;
}



/* Entry: 105814744; end: 1058147ab; +[SCCTPCustomStickerGetResponse descriptor] */

void FUN_105814744(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c09e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ee00,
                        &PTR____CFConstantStringClassReference_110dc92d8,&PTR_DAT_1131030d8,
                        &PTR_DAT_113103210,1,0x10,0x1c);
    puRam00000001136c09e8 = puVar1;
  }
  return;
}



/* Entry: 1058147ac; end: 105814813; +[SCCTPCustomStickerListPackRequest descriptor] */

void FUN_1058147ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c09f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ee50,
                        &PTR____CFConstantStringClassReference_110e05198,&PTR_DAT_1131030d8,
                        &PTR_DAT_1131038d0,4,0x18,0x1c);
    puRam00000001136c09f0 = puVar1;
  }
  return;
}



/* Entry: 105814814; end: 10581487b; +[SCCTPCustomStickerListPackResponse descriptor] */

void FUN_105814814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c09f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6eea0,
                        &PTR____CFConstantStringClassReference_110e051b8,&PTR_DAT_1131030d8,
                        &PTR_s_status_1131034f0,2,0x18,0x1c);
    puRam00000001136c09f8 = puVar1;
  }
  return;
}



/* Entry: 10581487c; end: 1058148e3; +[SCCTPCustomStickerCreateShareYoursPromptRequest descriptor] */

void FUN_10581487c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6eef0,
                        &PTR____CFConstantStringClassReference_110e051d8,&PTR_DAT_1131030d8,
                        &PTR_DAT_113103230,1,0x10,0x1c);
    puRam00000001136c0a00 = puVar1;
  }
  return;
}



/* Entry: 1058148e4; end: 10581494b; +[SCCTPCustomStickerCreateShareYoursPromptResponse descriptor] */

void FUN_1058148e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ef40,
                        &PTR____CFConstantStringClassReference_110e051f8,&PTR_DAT_1131030d8,
                        &PTR_DAT_113103250,1,0x10,0x1c);
    puRam00000001136c0a08 = puVar1;
  }
  return;
}



/* Entry: 10581494c; end: 1058149b3; +[SCCTPCustomStickerAddShareYoursStoryRequest descriptor] */

void FUN_10581494c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ef90,
                        &PTR____CFConstantStringClassReference_110e05218,&PTR_DAT_1131030d8,
                        &PTR_DAT_1131037b0,3,0x20,0x1c);
    puRam00000001136c0a10 = puVar1;
  }
  return;
}



/* Entry: 1058149b4; end: 105814a1b; +[SCCTPCustomStickerAddShareYoursStoryResponse descriptor] */

void FUN_1058149b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6efe0,
                        &PTR____CFConstantStringClassReference_110e05238,&PTR_DAT_1131030d8,0,0,4,
                        0x1c);
    puRam00000001136c0a18 = puVar1;
  }
  return;
}



/* Entry: 105814a1c; end: 105814a83; +[SCCTPCustomStickerListShareYoursStoriesRequest descriptor] */

void FUN_105814a1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f030,
                        &PTR____CFConstantStringClassReference_110e05258,&PTR_DAT_1131030d8,
                        &PTR_DAT_113103810,3,0x18,0x1c);
    puRam00000001136c0a20 = puVar1;
  }
  return;
}



/* Entry: 105814a84; end: 105814aeb; +[SCCTPCustomStickerShareYoursStory descriptor] */

void FUN_105814a84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f080,
                        &PTR____CFConstantStringClassReference_110e05278,&PTR_DAT_1131030d8,
                        &PTR_s_storyId_113103530,2,0x18,0x1c);
    puRam00000001136c0a28 = puVar1;
  }
  return;
}



/* Entry: 105814aec; end: 105814b53; +[SCCTPCustomStickerListShareYoursStoriesResponse descriptor] */

void FUN_105814aec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f0d0,
                        &PTR____CFConstantStringClassReference_110e05298,&PTR_DAT_1131030d8,
                        &PTR_DAT_113103870,3,0x20,0x1c);
    puRam00000001136c0a30 = puVar1;
  }
  return;
}



/* Entry: 105814b54; end: 105814bbb; +[SCCTPCustomStickerUGCResult descriptor] */

void FUN_105814b54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f120,
                        &PTR____CFConstantStringClassReference_110e052b8,&PTR_DAT_1131030d8,
                        &PTR_s_status_113103570,2,0x18,0x1c);
    puRam00000001136c0a38 = puVar1;
  }
  return;
}



/* Entry: 105814bbc; end: 105814c23; +[SCCTPCustomStickerCreateUGCItemRequest descriptor] */

void FUN_105814bbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f170,
                        &PTR____CFConstantStringClassReference_110e052d8,&PTR_DAT_1131030d8,
                        &PTR_s_item_113103270,1,0x10,0x1c);
    puRam00000001136c0a40 = puVar1;
  }
  return;
}



/* Entry: 105814c24; end: 105814c8b; +[SCCTPCustomStickerCreateUGCItemResponse descriptor] */

void FUN_105814c24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f1c0,
                        &PTR____CFConstantStringClassReference_110e052f8,&PTR_DAT_1131030d8,
                        &PTR_s_result_113103290,1,0x10,0x1c);
    puRam00000001136c0a48 = puVar1;
  }
  return;
}



/* Entry: 105814c8c; end: 105814cf3; +[SCCTPCustomStickerBatchCreateUGCItemsRequest descriptor] */

void FUN_105814c8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f210,
                        &PTR____CFConstantStringClassReference_110e05318,&PTR_DAT_1131030d8,
                        &PTR_DAT_1131032b0,1,0x10,0x1c);
    puRam00000001136c0a50 = puVar1;
  }
  return;
}



/* Entry: 105814cf4; end: 105814d5b; +[SCCTPCustomStickerBatchCreateUGCItemsResponse descriptor] */

void FUN_105814cf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f260,
                        &PTR____CFConstantStringClassReference_110e05338,&PTR_DAT_1131030d8,
                        &PTR_DAT_1131032d0,1,0x10,0x1c);
    puRam00000001136c0a58 = puVar1;
  }
  return;
}



/* Entry: 105814d5c; end: 105814dc3; +[SCCTPCustomStickerAddUGCRefRequest descriptor] */

void FUN_105814d5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f2b0,
                        &PTR____CFConstantStringClassReference_110e05358,&PTR_DAT_1131030d8,
                        &PTR_s_id_p_1131035b0,2,0x18,0x1c);
    puRam00000001136c0a60 = puVar1;
  }
  return;
}



/* Entry: 105814dc4; end: 105814e2b; +[SCCTPCustomStickerAddUGCRefResponse descriptor] */

void FUN_105814dc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f300,
                        &PTR____CFConstantStringClassReference_110e05378,&PTR_DAT_1131030d8,
                        &PTR_s_status_1131032f0,1,0x10,0x1c);
    puRam00000001136c0a68 = puVar1;
  }
  return;
}



/* Entry: 105814e2c; end: 105814e93; +[SCCTPCustomStickerBatchAddUGCRefsRequest descriptor] */

void FUN_105814e2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f350,
                        &PTR____CFConstantStringClassReference_110e05398,&PTR_DAT_1131030d8,
                        &PTR_DAT_113103310,1,0x10,0x1c);
    puRam00000001136c0a70 = puVar1;
  }
  return;
}



/* Entry: 105814e94; end: 105814efb; +[SCCTPCustomStickerBatchAddUGCRefsResponse descriptor] */

void FUN_105814e94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f3a0,
                        &PTR____CFConstantStringClassReference_110e053b8,&PTR_DAT_1131030d8,
                        &PTR_DAT_113103330,1,0x10,0x1c);
    puRam00000001136c0a78 = puVar1;
  }
  return;
}



/* Entry: 105814efc; end: 105814f63; +[SCCTPCustomStickerRemoveUGCRefRequest descriptor] */

void FUN_105814efc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f3f0,
                        &PTR____CFConstantStringClassReference_110e053d8,&PTR_DAT_1131030d8,
                        &PTR_s_id_p_1131035f0,2,0x18,0x1c);
    puRam00000001136c0a80 = puVar1;
  }
  return;
}



/* Entry: 105814f64; end: 105814fcb; +[SCCTPCustomStickerRemoveUGCRefResponse descriptor] */

void FUN_105814f64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f440,
                        &PTR____CFConstantStringClassReference_110e053f8,&PTR_DAT_1131030d8,
                        &PTR_s_status_113103350,1,0x10,0x1c);
    puRam00000001136c0a88 = puVar1;
  }
  return;
}



/* Entry: 105814fcc; end: 105815033; +[SCCTPCustomStickerBatchRemoveUGCRefsRequest descriptor] */

void FUN_105814fcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f490,
                        &PTR____CFConstantStringClassReference_110e05418,&PTR_DAT_1131030d8,
                        &PTR_DAT_113103370,1,0x10,0x1c);
    puRam00000001136c0a90 = puVar1;
  }
  return;
}



/* Entry: 105815034; end: 10581509b; +[SCCTPCustomStickerBatchRemoveUGCRefsResponse descriptor] */

void FUN_105815034(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0a98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6f4e0,
                        &PTR____CFConstantStringClassReference_110e05438,&PTR_DAT_1131030d8,
                        &PTR_DAT_113103390,1,0x10,0x1c);
    puRam00000001136c0a98 = puVar1;
  }
  return;
}



/* Entry: 10581509c; end: 105815167; -[SCCreatorsChatMessageSender initWithTextSender:conversationParser:performer:] */

undefined1 *
FUN_10581509c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea740;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105815168; end: 10581536f; -[SCCreatorsChatMessageSender shareProfile:selection:sourceType:completion:] */

void FUN_105815168(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bfcf800(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107e3271c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c122f00(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf09f80(lVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x000108605534();
  lVar5 = param_4;
  func_0x00010c122f00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  _objc_release(lVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105815370;
  puStack_98 = &UNK_1108b5d00;
  lStack_90 = param_1;
  uStack_88 = param_3;
  lStack_80 = param_4;
  uStack_78 = param_6;
  uStack_70 = param_5;
  lStack_68 = lVar6 + lVar4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar9 = param_6;
  _objc_retain(param_6);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar8,param_2,&puStack_b0,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 105815370; end: 105815543;  */

void FUN_105815370(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b1a40;
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf026a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  FUN_105815544(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = param_2;
  func_0x00010bf50b20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010befd440(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beb1de0(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105815544; end: 1058155c3;  */

void FUN_105815544(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105816350;
  puStack_30 = &UNK_110852668;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1058155c4; end: 10581574f; -[SCCreatorsChatMessageSender shareSnap:profile:isUserQuoted:selection:sourceType:completion:] */

void FUN_1058155c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_6;
  func_0x00010bfcf800(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107e3271c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_6;
  func_0x00010c122f00(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf09f80(lVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_6;
  func_0x00010bfcf800(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x000108605534();
  lVar5 = param_6;
  func_0x00010c122f00(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_6;
  func_0x00010befd440(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  func_0x00010c22afe0(param_1,param_2,param_3,param_4,param_5,lVar3,lVar6 + lVar4,lVar1,param_7,
                      param_8);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105815750; end: 105815abf; -[SCCreatorsChatMessageSender shareSnap:profile:isUserQuoted:chatIds:numOfRecipients:additionalText:sourceType:completion:] */

void FUN_105815750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_10);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_6);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c246920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1058158e8;
  puStack_a8 = &UNK_1108b5d30;
  uStack_78 = param_9;
  uStack_80 = param_10;
  lStack_a0 = param_1;
  uStack_98 = param_3;
  uStack_90 = param_4;
  uStack_88 = param_8;
  uStack_70 = param_7;
  uStack_68 = param_5;
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_10;
  _objc_retain(param_10);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1,param_2,&puStack_c0,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_80);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_10);
  return;
}



/* Entry: 105815ac0; end: 105815e8f; -[SCCreatorsChatMessageSender _shareProfile:conversationIds:additionalText:analyticsDataModel:completion:] */

void FUN_105815ac0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf37880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ba668;
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_opt_new(puVar5);
    puVar6 = PTR_PTR_1126be930;
    _objc_opt_new(PTR_PTR_1126be930);
    func_0x00010c1fea60(puVar5,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126bec60;
    _objc_opt_new(PTR_PTR_1126bec60);
    puVar7 = puVar5;
    func_0x00010c22a700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205100();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b0cd8;
    uVar2 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bdc35c0(puVar6,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126bc778;
    _objc_opt_new(PTR_PTR_1126bc778);
    puVar8 = puVar5;
    func_0x00010c22a700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c242840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010bfe5d80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c22a700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c242840();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar8 = puVar7;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar9 = puVar5;
    func_0x00010bf63640(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002b60(puVar7,param_2,puVar9,4,puVar10,PTR____NSArray0__struct_11034ab48,1);
    puVar11 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c260(uVar4,param_2,puVar11,uVar3,param_4,0,uVar2,param_7);
    _objc_release(uVar2);
    _objc_release(puVar11);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105815e90; end: 105816313; -[SCCreatorsChatMessageSender _shareSnap:profile:isUserQuoted:conversationIds:additionalText:analyticsDataModel:completion:] */

void FUN_105815e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_6;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf37880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ba668;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_8);
    _objc_opt_new(puVar5);
    puVar6 = PTR_PTR_1126be930;
    _objc_opt_new(PTR_PTR_1126be930);
    func_0x00010c1fea60(puVar5,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126bec68;
    _objc_opt_new(PTR_PTR_1126bec68);
    puVar7 = puVar5;
    func_0x00010c22a700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205160();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b0cd8;
    uVar2 = param_4;
    func_0x00010bfe5ea0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    func_0x00010bdc35c0(puVar6,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126bc778;
    _objc_opt_new(PTR_PTR_1126bc778);
    puVar8 = puVar5;
    func_0x00010c22a700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c242900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010bfe5d80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c22a700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c242900();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar5;
    func_0x00010c22a700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c242900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680();
    _objc_release(param_3);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar5;
    func_0x00010c22a700(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c242900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b57a0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar8 = puVar7;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_8);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar9 = puVar5;
    func_0x00010bf63640(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002b60(puVar7,param_2,puVar9,4,puVar10,PTR____NSArray0__struct_11034ab48,1);
    puVar11 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c260(uVar4,param_2,puVar11,uVar3,param_6,0,uVar2,param_9);
    _objc_release(uVar2);
    _objc_release(puVar11);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105816314; end: 10581634f; -[SCCreatorsChatMessageSender .cxx_destruct] */

void FUN_105816314(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105816350; end: 10581647f;  */

void FUN_105816350(long param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  if (param_2 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e05458,
                        &PTR____CFConstantStringClassReference_110e05478,200);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126afca8;
    if (puVar5 != (undefined *)0x0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e05498;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e05498,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c237520(puVar1);
      goto LAB_10581644c;
    }
  }
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dbbb98;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbbb98,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar5);
  puVar5 = (undefined *)0x0;
LAB_10581644c:
  _objc_release(ppuVar2);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105816480; end: 10581657f; -[SCCreatorsMessagingServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105816480(long param_1)

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
  puVar2 = PTR_PTR_1126bec70;
  _objc_alloc(PTR_PTR_1126bec70);
  func_0x00010c02b880();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11272a2e8));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105816580; end: 1058165bf;  */

void FUN_105816580(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beb1d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058165c0; end: 1058166b7; -[SCCreatorsMessagingServicesEntryPoint _shareMessageSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058165c0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11272a2f0;
    _objc_loadWeakRetained(lVar5);
  }
  lVar1 = lVar5;
  func_0x00010c26c760(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_11272a2f4;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010bf501a0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar4 = PTR_PTR_1126bec78;
  _objc_alloc(PTR_PTR_1126bec78);
  func_0x00010c051a60();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058166b8; end: 10581670b; -[SCCreatorsMessagingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058166b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272a2e8,0);
  _objc_destroyWeak(param_1 + _DAT_11272a2f4);
  _objc_destroyWeak(param_1 + _DAT_11272a2f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a2ec);
  return;
}



/* Entry: 10581670c; end: 10581678b; -[SCSwipeToProfileParamsProvider initWithParamsMutableStreaming:] */

undefined1 * FUN_10581670c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea748;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10581678c; end: 105816793; -[SCSwipeToProfileParamsProvider addSwipeToProfileParams:] */

void FUN_10581678c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25c6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_streamSwipeToProfileParams__112674bd0);
  return;
}



/* Entry: 105816794; end: 10581679f; -[SCSwipeToProfileParamsProvider .cxx_destruct] */

void FUN_105816794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058167a0; end: 1058167bb;  */

void FUN_1058167a0(void)

{
  _objc_alloc_init(PTR_PTR_1126bec80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058167bc; end: 105816817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058167bc(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126bec88;
    _objc_alloc(PTR_PTR_1126bec88);
    func_0x00010c033900();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105816818; end: 105816853; -[SCSwipeToProfileParamsProviderServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105816818(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a2fc,0);
  return;
}



/* Entry: 105816854; end: 1058168df; -[SCSwipeToProfileParamsStream init] */

undefined1 * FUN_105816854(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea750;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126bec80;
    func_0x00010bdf46c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1058168e0; end: 1058168e7; -[SCSwipeToProfileParamsStream streamSwipeToProfileParams:] */

void FUN_1058168e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 1058168e8; end: 1058168ef; +[SCSwipeToProfileParamsStream _createSwipeToProfileParamsStream:] */

void FUN_1058168e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 1058168f0; end: 1058168f7; -[SCSwipeToProfileParamsStream swipeToProfileParamsObservable] */

undefined8 FUN_1058168f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1058168f8; end: 105816967; -[SCSwipeToProfileParamsStream .cxx_destruct] */

void FUN_1058168f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105816968; end: 105816b3b; -[SCSpotlightSharingLensTranscodingServiceProvider _createSpotlightSharingLensTranscoder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105816968(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar1 = PTR_PTR_1126beca0;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11272a30c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272a310;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c046840(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126beca8;
  _objc_alloc(PTR_PTR_1126beca8);
  lVar2 = param_1 + _DAT_11272a314;
  _objc_loadWeakRetained(lVar2);
  lVar4 = param_1 + _DAT_11272a318;
  _objc_loadWeakRetained();
  lVar6 = lVar4;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c24afa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11272a31c;
  _objc_loadWeakRetained(lVar3);
  lVar9 = lVar3;
  func_0x00010bf9f4a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272a320;
  _objc_loadWeakRetained(param_1);
  lVar10 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048ae0(puVar5,param_2,lVar2,puVar1,lVar8,lVar9,lVar10);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105816b3c; end: 105816baf; -[SCSpotlightSharingLensTranscodingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105816b3c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a320);
  _objc_destroyWeak(param_1 + _DAT_11272a310);
  _objc_destroyWeak(param_1 + _DAT_11272a31c);
  _objc_destroyWeak(param_1 + _DAT_11272a30c);
  _objc_destroyWeak(param_1 + _DAT_11272a318);
  _objc_destroyWeak(param_1 + _DAT_11272a314);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a324);
  return;
}



/* Entry: 105816bb0; end: 105816cc7; -[SCSpotlightShareStoryLensSnapDocBuilder initWithLensMetadataBuilder:snapDocEditorFactory:performer:circumstanceEngine:] */

undefined1 *
FUN_105816bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea758;
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
    puVar3 = PTR_PTR_1126becb0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105816cc8; end: 105817847; -[SCSpotlightShareStoryLensSnapDocBuilder buildStoryLensSnapDocWithMediaData:overlayData:isImage:lensId:targetDurationMs:creatorDisplayName:creatorProfileLogoUrl:creatorBitmojiAvatarId:creatorBitmojiSelfieId:shouldShowCreatorBadge:additionalCaptionText:] */

void FUN_105816cc8(long param_1,long param_2,long param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined1 param_12,undefined4 param_13,
                  undefined8 param_14)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_150;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_14);
  puVar11 = PTR_PTR_1126b25c0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf8cb40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b25e0;
  _objc_opt_new(PTR_PTR_1126b25e0);
  uVar17 = uVar2;
  func_0x00010c23fe00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd3e0();
  _objc_release(uVar17);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b3068;
  _objc_opt_new(PTR_PTR_1126b3068);
  uVar17 = uVar2;
  func_0x00010c23fe00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar17;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500();
  _objc_release(uVar10);
  _objc_release(uVar17);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b25e8;
  _objc_opt_new(PTR_PTR_1126b25e8);
  uVar17 = uVar2;
  func_0x00010c23fe00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar17;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar10;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd220();
  _objc_release(uVar18);
  _objc_release(uVar10);
  _objc_release(uVar17);
  _objc_release(puVar3);
  if (param_5 == 0) {
LAB_105816f24:
    puStack_150 = PTR_PTR_1126affc0;
    func_0x00010c299cc0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = 0;
LAB_105816f44:
    ppuVar4 = (undefined **)PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar17 = uVar2;
    func_0x00010bef7100();
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    uStack_110 = 0x1058171c4;
    puStack_108 = &UNK_1108b5e60;
    ppuStack_100 = ppuVar4;
    _objc_retain(uVar2);
    uStack_f8 = uVar2;
    lStack_f0 = param_1;
    _objc_retain(param_4);
    uStack_e8 = param_4;
    uStack_b8 = param_6;
    _objc_retain(param_8);
    uStack_e0 = param_8;
    _objc_retain(param_9);
    uStack_d8 = param_9;
    _objc_retain(param_10);
    uStack_d0 = param_10;
    _objc_retain(param_11);
    uStack_c8 = param_11;
    uStack_a7 = param_12;
    _objc_retain(param_14);
    uStack_c0 = param_14;
    uStack_b0 = param_7;
    _objc_retain(ppuVar4);
    ppuVar16 = &puStack_120;
    func_0x00010c297260(uVar17);
    _objc_release(uVar17);
    ppuVar5 = ppuVar4;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uStack_c0);
    _objc_release(uStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
    _objc_release(uStack_e8);
    _objc_release(uStack_f8);
    _objc_release(ppuStack_100);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      puStack_150 = PTR_PTR_1126affc0;
      func_0x00010c27eee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      uStack_a8 = 1;
      goto LAB_105816f44;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1f440();
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    ppuVar5 = (undefined **)PTR_PTR_1126ae558;
    if (iVar1 != 0) {
      param_2 = 1;
      FUN_105818d28(*(undefined8 *)(param_1 + 0x28));
      goto LAB_105816f24;
    }
    uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e05518;
    puStack_150 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar4;
    func_0x00010bfe9c80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar4);
  _objc_release(puStack_150);
  _objc_release(uVar2);
  _objc_release(puVar11);
  _objc_release(param_14);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  if ((param_2 == 0) || (ppuVar16 != (undefined **)0x0)) {
    func_0x00010bf43ca0(*(undefined8 *)(param_3 + 0x20));
    goto LAB_105817820;
  }
  lVar6 = *(long *)(param_3 + 0x28);
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar6;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar12;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf529e0();
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(lVar6);
  if (lVar8 == 0) {
    puVar11 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    func_0x00010c1c4020();
    puVar3 = puVar11;
    func_0x00010c0c3fe0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16a960();
    _objc_release(puVar3);
    puVar3 = puVar11;
    func_0x00010c0c3fe0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    _objc_release(puVar3);
    uVar17 = *(undefined8 *)(param_3 + 0x28);
    puVar3 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0(uVar17);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar11);
  }
  puVar9 = *(undefined **)(param_3 + 0x28);
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    lVar12 = param_2;
    func_0x00010bfd8fc0();
    _objc_release(puVar11);
    _objc_release(puVar9);
    if ((int)lVar12 != 0) {
      puVar9 = PTR_PTR_1126b25d8;
      _objc_opt_new(PTR_PTR_1126b25d8);
      lVar12 = param_2;
      func_0x00010c0c5180(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c55e0();
      func_0x00010c1c4aa0(puVar9);
      _objc_release(lVar12);
      func_0x00010c1c5440(puVar9);
      uVar10 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010c23fe00(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar10;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(uVar17);
      _objc_release(uVar10);
      puVar11 = *(undefined **)(param_3 + 0x28);
      func_0x00010c23fe00(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4ac0();
      goto LAB_1058173fc;
    }
  }
  else {
LAB_1058173fc:
    _objc_release(puVar11);
    _objc_release(puVar9);
  }
  uVar17 = *(undefined8 *)(param_3 + 0x28);
  uVar10 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c23fe00(uVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bead600(uVar10);
  _objc_release(uVar17);
  lVar12 = *(long *)(param_3 + 0x38);
  func_0x00010c08fa60();
  if (lVar12 != 0) {
    puVar11 = PTR_PTR_1126b3080;
    func_0x00010bf64b00(PTR_PTR_1126b3080);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b25c8;
    _objc_alloc_init(PTR_PTR_1126b25c8);
    func_0x00010c16a960();
    uVar17 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010c265b80(uVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar3);
    _objc_release(uVar17);
    puVar9 = PTR_PTR_1126b25d0;
    _objc_opt_new(PTR_PTR_1126b25d0);
    func_0x00010c1c4020();
    uVar17 = *(undefined8 *)(param_3 + 0x28);
    puVar13 = PTR_PTR_1126affe8;
    func_0x00010bfccec0(PTR_PTR_1126affe8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa9a0(uVar17);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar13);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar11);
  }
  puVar11 = PTR_PTR_1126bcd28;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  func_0x00010c1863a0(puVar11);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar9 = puVar11;
  func_0x00010bf5cc00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5d40();
  _objc_release(puVar9);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar9 = puVar11;
  func_0x00010bf5cc00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar9;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196600();
  _objc_release(puVar13);
  _objc_release(puVar9);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b37c8;
  _objc_opt_new(PTR_PTR_1126b37c8);
  puVar9 = puVar11;
  func_0x00010bf5cc00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar9;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc80();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar9);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b37d8;
  _objc_opt_new(PTR_PTR_1126b37d8);
  puVar9 = puVar11;
  func_0x00010bf5cc00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar9;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c096c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ba8a0();
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar9);
  _objc_release(puVar3);
  puVar3 = puVar11;
  func_0x00010bf5cc00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar9;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c096c60();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0();
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar9);
  _objc_release(puVar3);
  uVar17 = *(undefined8 *)(param_3 + 0x28);
  uVar18 = *(undefined8 *)(*(long *)(param_3 + 0x30) + 8);
  _objc_retain(uVar17);
  NEON_ext(*(undefined1 (*) [16])(param_3 + 0x68),*(undefined1 (*) [16])(param_3 + 0x68),8,1);
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar10);
  _objc_retain(puVar11);
  func_0x00010bf22400(uVar18);
  _objc_release(uVar10);
  _objc_release(uVar17);
  _objc_release(puVar11);
  _objc_release(puVar11);
LAB_105817820:
  _objc_release(param_2);
  return;
}



/* Entry: 105817848; end: 105817997;  */

void FUN_105817848(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010bf5cc00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c73c0();
    _objc_release(param_2);
    _objc_release(uVar4);
  }
  puVar1 = PTR_PTR_1126bcd38;
  _objc_opt_new(PTR_PTR_1126bcd38);
  func_0x00010c218fc0();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c066480(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar4);
  func_0x00010befae60(*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c23fe00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bcf30;
  _objc_opt_new(PTR_PTR_1126bcf30);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c203d40(puVar2);
  _objc_release(puVar3);
  func_0x00010c216040(uVar4);
  func_0x00010bf08900(*(undefined8 *)(param_1 + 0x30));
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105817998; end: 105817d23; -[SCSpotlightShareStoryLensSnapDocBuilder _setupLayerCompositionForSnapDoc:] */

void FUN_105817998(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126becb8;
    _objc_opt_new(PTR_PTR_1126becb8);
    lVar1 = param_3;
    func_0x00010c0fee00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4660();
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    puVar3 = PTR_PTR_1126becc0;
    _objc_opt_new(PTR_PTR_1126becc0);
    lVar1 = param_3;
    func_0x00010c0fee00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b98c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010c0fee00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar4;
  func_0x00010c2791c0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126bce80;
  _objc_opt_new(PTR_PTR_1126bce80);
  func_0x00010c1b1880();
  func_0x00010c2191c0(puVar3,param_2,1);
  func_0x00010c218fc0(puVar3,param_2,1);
  puVar5 = PTR_PTR_1126bce88;
  _objc_opt_new(PTR_PTR_1126bce88);
  func_0x00010c2190e0();
  puVar6 = puVar5;
  func_0x00010c0ff660(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar6);
  puVar6 = puVar3;
  func_0x00010c2787a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar6);
  lVar1 = lVar4;
  func_0x00010c2791c0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(lVar1);
  func_0x00010c218fe0(lVar4,param_2,1);
  func_0x00010c219100(lVar4,param_2,1);
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar7 == 0) {
    puVar6 = PTR_PTR_1126bcea8;
    _objc_opt_new(PTR_PTR_1126bcea8);
    lVar1 = param_3;
    func_0x00010c0fee00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea760();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar6);
  }
  lVar1 = param_3;
  func_0x00010c0fee00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea720();
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105817d24; end: 105817e03; -[SCSpotlightShareStoryLensSnapDocBuilder applySpotlightTimelineToSnapDoc:targetDurationMs:] */

void FUN_105817d24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2791c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 == 0) {
    func_0x00010bead600(param_1,param_2,param_3);
  }
  func_0x00010bdceb80(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105817e04; end: 10581810b; -[SCSpotlightShareStoryLensSnapDocBuilder _applySpotlightTimelineToSnapDoc:targetDurationMs:] */

void FUN_105817e04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 == 0) goto LAB_1058180f0;
    lVar2 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c2787a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar2);
      if (lVar6 != 0) {
        func_0x00010c1dd680(lVar6,param_2,1);
        lVar2 = lVar6;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          lVar2 = lVar6;
          func_0x00010c0c3fe0(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c45e0();
          _objc_release(lVar2);
        }
      }
      lVar2 = lVar4;
      func_0x00010c27c540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar7 = PTR_PTR_1126afff0;
        _objc_opt_new(PTR_PTR_1126afff0);
        func_0x00010c21a4e0(lVar4,param_2,puVar7);
        _objc_release(puVar7);
      }
      lVar2 = lVar4;
      func_0x00010c27c540(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209a20();
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010c27c540(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192d40();
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010c2667a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar7 = PTR_PTR_1126becc8;
        _objc_opt_new(PTR_PTR_1126becc8);
        func_0x00010c210d60(lVar4,param_2,puVar7);
        _objc_release(puVar7);
      }
      lVar2 = lVar4;
      func_0x00010c2667a0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214ca0();
      _objc_release(lVar2);
      _objc_release(lVar6);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
LAB_1058180f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10581810c; end: 10581815f; -[SCSpotlightShareStoryLensSnapDocBuilder .cxx_destruct] */

void FUN_10581810c(long param_1)

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



/* Entry: 105818160; end: 1058182df; -[SCSpotlightSharingLensTranscoder initWithSnapUploaderServices:lensMetadataBuilder:spotlightConfigProvider:snapDocEditorFactory:circumstanceEngine:] */

undefined1 *
FUN_105818160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126ea760;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126becd0;
    _objc_alloc();
    func_0x00010c024e60();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058182e0; end: 10581831f; -[SCSpotlightSharingLensTranscoder lensId] */

undefined8 FUN_1058182e0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c07f580();
  uVar1 = 0x3946006ce7fb1;
  if (iVar2 == 0) {
    uVar1 = 0x409a006c59b97;
  }
  return uVar1;
}



/* Entry: 105818320; end: 105818327; -[SCSpotlightSharingLensTranscoder targetDurationMs] */

undefined8 FUN_105818320(void)

{
  return 10000;
}



/* Entry: 105818328; end: 1058186d3; -[SCSpotlightSharingLensTranscoder transcodeAndUploadMedia:overlayData:isImage:crossPostToStoryInfo:completionQueue:completionHandler:] */

void FUN_105818328(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (param_7 == (undefined *)0x0) {
    _objc_retain(PTR___dispatch_main_q_11034be20);
  }
  else {
    _objc_retain(param_7);
    puVar1 = param_7;
  }
  if ((param_3 == 0) || (lVar2 = param_3, func_0x00010c08fa60(), lVar2 == 0)) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1058186d4;
    puStack_78 = &UNK_110849530;
    _objc_retain(param_8);
    uStack_70 = param_8;
    func_0x00010007380c(puVar1,&puStack_90);
    uVar3 = uStack_70;
  }
  else {
    uVar3 = param_6;
    func_0x00010c25a3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_6;
    func_0x00010c259a00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_6;
    func_0x00010c2599e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_98,param_1);
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c094540();
    func_0x00010c269ec0();
    uVar6 = param_6;
    func_0x00010bf5b380();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_6;
    func_0x00010bf5b660();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_6;
    func_0x00010bf5b120();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_6;
    func_0x00010bf5b180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2335a0();
    uVar10 = param_6;
    func_0x00010befd440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf227e0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar3);
    _objc_retain(puVar1);
    _objc_retain(param_8);
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(param_6);
    _objc_retain(uVar4);
    _objc_retain(uVar5);
    func_0x00010c297260(uVar11);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_a0);
    _objc_release(param_8);
    _objc_release(puVar1);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_98);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058186d4; end: 1058186e3;  */

void FUN_1058186d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058186e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 1058186e4; end: 10581882b;  */

void FUN_1058186e4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (param_3 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10581882c;
    puStack_40 = &UNK_110849530;
    lVar1 = *(long *)(param_1 + 0x48);
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    func_0x00010007380c(uVar3,&puStack_58);
    lVar1 = lStack_38;
  }
  else {
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      uStack_70 = 0x10581883c;
      puStack_68 = &UNK_110849530;
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(uVar3);
      uStack_60 = uVar3;
      func_0x00010007380c(uVar2,&puStack_80);
      _objc_release(uStack_60);
      lVar1 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269ec0(*(undefined8 *)(param_1 + 0x30));
      func_0x00010bf08900(uVar3);
      func_0x00010bece520(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10581882c; end: 10581884b;  */

void FUN_10581882c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105818838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),2);
  return;
}



/* Entry: 10581884c; end: 105818b57; -[SCSpotlightSharingLensTranscoder _transcodeAndUploadSnapDoc:clientId:encryptionKey:encryptionIV:completionQueue:completionHandler:] */

void FUN_10581884c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bf64920(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182ac0(param_3);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126bcf68;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bffa140();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126becd8;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04dac0();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126bece0;
  _objc_alloc(PTR_PTR_1126bece0);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0059a0(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126bece8;
  _objc_alloc(PTR_PTR_1126bece8);
  func_0x00010c00bbe0();
  func_0x00010c195ce0();
  _objc_release(param_5);
  func_0x00010c195cc0(puVar5);
  _objc_release(param_6);
  puVar6 = PTR_PTR_1126becf0;
  _objc_alloc(PTR_PTR_1126becf0);
  func_0x00010c046e80();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c28ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010c28eb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105818b58;
  puStack_90 = &UNK_1108b5ec0;
  uStack_88 = param_7;
  uStack_80 = param_4;
  uStack_78 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_7);
  ppuVar8 = &puStack_a8;
  func_0x00010c0e3040(uVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_8);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_b8 = FUN_105818b58;
  uStack_f0 = uVar1;
  puStack_e8 = puVar3;
  puStack_e0 = puVar2;
  uStack_d8 = param_8;
  uStack_d0 = param_4;
  uStack_c8 = param_7;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  _objc_retain(ppuVar8);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_105818c40;
  puStack_118 = &UNK_1108465d0;
  uVar1 = *(undefined8 *)(puVar4 + 0x20);
  uVar7 = *(undefined8 *)(puVar4 + 0x28);
  ppuStack_110 = ppuVar8;
  uStack_108 = param_2;
  _objc_retain(uVar7);
  uVar9 = *(undefined8 *)(puVar4 + 0x30);
  uStack_100 = uVar7;
  _objc_retain(uVar9);
  uStack_f8 = uVar9;
  _objc_retain(param_2);
  _objc_retain(ppuVar8);
  func_0x00010007380c(uVar1,&puStack_130);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(ppuStack_110);
  _objc_release(param_2);
  _objc_release(ppuVar8);
  return;
}



/* Entry: 105818b58; end: 105818c3f;  */

void FUN_105818b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105818c40;
  puStack_68 = &UNK_1108465d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = param_3;
  uStack_58 = param_2;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  _objc_retain(uVar3);
  uStack_48 = uVar3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010007380c(uVar1,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 105818c40; end: 105818c6b;  */

void FUN_105818c40(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = 4;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 4;
  }
                    /* WARNING: Could not recover jumptable at 0x000105818c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),uVar1);
  return;
}



/* Entry: 105818c6c; end: 105818cb3; -[SCSpotlightSharingLensTranscoder .cxx_destruct] */

void FUN_105818c6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105818cb4; end: 105818d27; -[SCGrapheneSpotlightLensTranscoderMetric2 init] */

undefined1 * FUN_105818cb4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea768;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}


