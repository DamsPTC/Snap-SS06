/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053848e4; end: 105384acb; -[SCLensRemoteApiDataProvider deleteDataForSpecId:withCompletionQueue:completionHandler:] */

void FUN_1053848e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bfaaec0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    if (param_4 == 0) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x105384adc;
      puStack_78 = &UNK_11087bb60;
      _objc_retain(param_5);
      uStack_70 = param_5;
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_90);
      uVar2 = uStack_70;
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105384acc;
      puStack_50 = &UNK_11087bb60;
      _objc_retain(param_5);
      uStack_48 = param_5;
      func_0x00010007380c(param_4,&puStack_68);
      uVar2 = uStack_48;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar1);
    func_0x00010c0f8500(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105384acc; end: 105384aeb;  */

void FUN_105384acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105384ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 105384aec; end: 105384b7b;  */

void FUN_105384aec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b7e30;
  FUN_105385a60(PTR_PTR_1126b7e30,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105384b7c; end: 105384e17; -[SCLensRemoteApiDataProvider fetchTokenForSpecId:] */

void FUN_105384b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b1c98);
  if (lVar2 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,lVar2);
  }
  puVar3 = &uStack_111;
  FUN_105384ff0();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_3);
  ppuStack_188 = &PTR_SUB_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_FUN_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar4 = &uStack_a0;
  uStack_158 = param_3;
  puStack_d8 = puVar3;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar4,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_FUN_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105384e18; end: 105384f33; -[SCLensRemoteApiDataProvider upsertOAuthToken:completionQueue:completionHandler:] */

void FUN_105384e18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105384f34;
  puStack_50 = &UNK_11084f688;
  _objc_retain(param_3);
  uStack_48 = param_3;
  func_0x00010c0f8500(uVar1,param_2,&puStack_68,param_4,param_5);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105384f34; end: 105384fbf;  */

void FUN_105384f34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_105385ad4(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105384fc0; end: 105384fef; -[SCLensRemoteApiDataProvider .cxx_destruct] */

void FUN_105384fc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105384ff0; end: 105385053;  */

undefined ** FUN_105384ff0(void)

{
  int iVar1;
  
  if ((bRam00000001138196e0 & 1) == 0) {
    iVar1 = 0x138196e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130d0b20,0x100000000);
      ___cxa_guard_release(0x1138196e0);
    }
  }
  return &PTR_PTR_1130d0b20;
}



/* Entry: 105385054; end: 1053850db;  */

void FUN_105385054(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053850dc; end: 105385167;  */

void FUN_1053850dc(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c2481e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c2481e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105385168; end: 105385173; +[SCLensRemoteApiOAuthToken table] */

char * FUN_105385168(void)

{
  return "lensremoteapi__oauthtoken";
}



/* Entry: 105385174; end: 105385453; +[SCLensRemoteApiOAuthToken immutableObjectParse:bufferSize:] */

void FUN_105385174(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  long lVar4;
  ushort uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126b1c98;
  _objc_alloc(PTR_PTR_1126b1c98);
  lVar4 = (long)*piVar1;
  uVar5 = *(ushort *)((long)piVar1 - lVar4);
  if (uVar5 < 5) {
    puVar7 = (undefined *)0x0;
LAB_10538525c:
    puVar8 = (undefined *)0x0;
LAB_105385260:
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar4))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar4);
    }
    lVar4 = -lVar4;
    if (uVar5 < 7) goto LAB_10538525c;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 6);
    if (uVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar5 < 9) goto LAB_105385260;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 8);
    if (uVar6 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = -(long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (10 < uVar5) {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 10);
      if (uVar6 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)((long)piVar1 + uVar6);
      }
      if (uVar5 < 0xd) {
        puVar11 = (undefined *)0x0;
        puVar10 = (undefined *)0x0;
      }
      else {
        uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 0xc);
        if (uVar6 == 0) {
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar1 + uVar6);
          puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = -(long)*piVar1;
          uVar5 = *(ushort *)((long)piVar1 - (long)*piVar1);
        }
        if ((uVar5 < 0xf) || (uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar4 + 0xe), uVar6 == 0)) {
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar1 + uVar6);
          puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      goto LAB_105385270;
    }
  }
  puVar11 = (undefined *)0x0;
  puVar10 = (undefined *)0x0;
  uVar12 = 0;
LAB_105385270:
  func_0x00010c04ada0(uVar12,puVar3,param_2,puVar7,puVar8,puVar9,puVar10,puVar11);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105385454; end: 105385477; +[SCLensRemoteApiOAuthToken objectClassFunctionPointer] */

undefined1  [16] FUN_105385454(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x105385470;
  auVar1._0_8_ = 0x105385468;
  return auVar1;
}



/* Entry: 105385478; end: 1053855f3;  */

undefined1 *
FUN_105385478(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_68 = PTR_PTR_1126e7c18;
    lStack_70 = param_2;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      _objc_release(uVar2);
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_6;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x30) = param_1;
      _objc_retain(param_7);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x38);
      *(undefined8 *)((long)plVar1 + 0x38) = param_7;
      _objc_release(uVar2);
      _objc_retain(param_8);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = param_8;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 1053855f4; end: 105385a5f;  */

void FUN_1053855f4(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_2;
      func_0x00010c2481e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar8,
                            "SELECT rowid, p FROM lensremoteapi__oauthtoken WHERE specId=?1 LIMIT 1"
                           );
        if (puVar8 != (undefined *)0x0) {
          puVar1 = param_2;
          func_0x00010c2481e0(param_2);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar8,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar8;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar8;
            _sqlite3_column_int64(puVar8,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b1c98);
            _sqlite3_column_blob(puVar8,1);
            _sqlite3_column_bytes(puVar8,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_2);
            _objc_release(puVar2);
            _sqlite3_reset(puVar8);
            if (puVar3 == (undefined *)0x0) goto LAB_10538596c;
            puVar8 = PTR_PTR_1126b7e30;
            _objc_alloc(PTR_PTR_1126b7e30);
            puVar2 = puVar3;
            func_0x00010c2481e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010beecce0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c2732e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf9c880(puVar3);
            puVar6 = puVar3;
            func_0x00010c125640(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c150520(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_105385478(param_1,puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
            param_2 = puVar3;
            goto LAB_10538573c;
          }
        }
      }
    }
    else {
      puVar1 = param_2;
      func_0x00010c1422e0(param_2);
      puVar8 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b1c98);
      puVar3 = puVar8;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _objc_release(puVar8);
      if (puVar3 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126b7e30;
        _objc_alloc(PTR_PTR_1126b7e30);
        puVar2 = puVar3;
        func_0x00010c2481e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010beecce0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c2732e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf9c880(puVar3);
        puVar6 = puVar3;
        func_0x00010c125640(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c150520(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_105385478(param_1,puVar8,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7);
        param_2 = puVar3;
LAB_10538573c:
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_105385974;
      }
LAB_10538596c:
      param_2 = (undefined *)0x0;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_105385974:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105385a60; end: 105385ad3;  */

void FUN_105385a60(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1053855f4();
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



/* Entry: 105385ad4; end: 105385e33;  */

void FUN_105385ad4(undefined8 param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b7e30;
  _objc_retain(param_2);
  _objc_opt_self(puVar1);
  puVar1 = param_2;
  FUN_1053855f4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    puVar7 = PTR_PTR_1126b7e30;
    _objc_retain(param_2);
    _objc_opt_self(puVar7);
    puVar7 = PTR_PTR_1126b7e30;
    if (param_2 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_2;
      func_0x00010c2481e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_2;
      func_0x00010beecce0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_2;
      func_0x00010c2732e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9c880(param_2);
      puVar5 = param_2;
      func_0x00010c125640(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      func_0x00010c150520(param_2);
      _objc_retainAutoreleasedReturnValue();
      FUN_105385478(param_1,puVar7,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar7 + 0x10) = 1;
    _objc_release(param_2);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_2);
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    puVar7 = param_2;
    func_0x00010c2481e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_2;
    func_0x00010beecce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_2;
    func_0x00010c2732e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    func_0x00010bf9c880(param_2);
    *(undefined8 *)(puVar1 + 0x30) = param_1;
    puVar7 = param_2;
    func_0x00010c125640(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    puVar7 = param_2;
    func_0x00010c150520(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar7);
    _objc_retain(puVar1);
    puVar7 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105385e34; end: 105385e9f;  */

void FUN_105385e34(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b1c98;
    _objc_alloc(PTR_PTR_1126b1c98);
    func_0x00010c04ada0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105385ea0; end: 105385ef3; -[SCLensRemoteApiOAuthTokenChangeRequest .cxx_destruct] */

void FUN_105385ea0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105385ef4; end: 105385eff; -[SCLensRemoteApiOAuthTokenChangeRequest table] */

char * FUN_105385ef4(void)

{
  return "lensremoteapi__oauthtoken";
}



/* Entry: 105385f00; end: 105385f47; -[SCLensRemoteApiOAuthTokenChangeRequest createTableWithSQLite:] */

void FUN_105385f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dd97ca0,0x87,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 105385f48; end: 1053862cf; -[SCLensRemoteApiOAuthTokenChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105385f48(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_105385e34(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1053862d0(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,"INSERT INTO lensremoteapi__oauthtoken (p, specId) VALUES (?1, ?2)")
    ;
    if (lVar6 == 0) goto LAB_10538626c;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10538626c;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b1c98);
    func_0x00010c21c9a0(puVar7);
LAB_105386254:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,"DELETE FROM lensremoteapi__oauthtoken WHERE rowid=?1");
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
            _objc_opt_class(PTR_PTR_1126b1c98);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105386278;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_105386278;
    }
    FUN_105385e34(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1053862d0(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,
                        "UPDATE lensremoteapi__oauthtoken SET p=?1, specId=?3 WHERE rowid=?2 LIMIT 1"
                       );
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
        _objc_opt_class(PTR_PTR_1126b1c98);
        func_0x00010c21c9a0(puVar7);
        goto LAB_105386254;
      }
    }
LAB_10538626c:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_105386278:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1053862d0; end: 105386523;  */

ulong FUN_1053862d0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c2481e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  FUN_105386524(param_2,uVar4);
  uVar6 = param_3;
  func_0x00010beecce0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  FUN_105386524(param_2,uVar6);
  uVar8 = param_3;
  func_0x00010c2732e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  FUN_105386524(param_2,uVar8);
  func_0x00010bf9c880(param_3);
  uVar10 = param_3;
  func_0x00010c125640();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  FUN_105386524(param_2,uVar10);
  uVar12 = param_3;
  func_0x00010c150520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  FUN_105386524(param_2,uVar12);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(param_1,0,param_2,10);
  func_0x0001001ce2e4(param_2,0xe,uVar13 & 0xffffffff);
  func_0x0001001ce2e4(param_2,0xc,uVar11 & 0xffffffff);
  func_0x0001001ce2e4(param_2,8,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_2,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_2,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_2,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar12);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_3);
  return param_2;
}



/* Entry: 105386524; end: 105386653;  */

undefined8 FUN_105386524(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_105386604;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_105386604;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_1053865c4;
    param_1 = 0;
  }
  else {
LAB_1053865c4:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_105386604:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105386654; end: 1053866cb; -[SCCDuplexMessageHandler onReceive:] */

void FUN_105386654(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0e5e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c0e5e80();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053866cc; end: 1053866d3; -[SCComposerDuplexClient isConnectedObservable] */

void FUN_1053866cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 1053866d4; end: 1053866d7; -[SCComposerDuplexClient setIsConnectedObservable:] */

void FUN_1053866d4(void)

{
  return;
}



/* Entry: 1053866d8; end: 10538686f; -[SCComposerDuplexClient initWithDuplexClient:taskManagementServices:] */

undefined8 *
FUN_1053866d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126e7c20;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105386870;
    puStack_70 = &UNK_11087eac8;
    _objc_retain(param_4);
    uStack_68 = param_4;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    _objc_release(uStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105386870; end: 10538690f;  */

void FUN_105386870(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0f98e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0f9920(uVar2,param_2,&PTR____CFConstantStringClassReference_110dd5598,2,0,0x36);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4ec0;
  _objc_alloc(PTR_PTR_1126b4ec0);
  func_0x00010c034960();
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105386910; end: 105386a73;  */

void FUN_105386910(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = PTR_PTR_1126ae6b8;
    func_0x00010bf8eb20(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR_PTR_1126b7e38;
    func_0x00010c131720(PTR_PTR_1126b7e38,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b7e40;
    _objc_alloc();
    func_0x00010c01ee00();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befba80(uVar2,param_2,puVar1,uVar3);
    _objc_release(uVar3);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105386a74;
    puStack_58 = &UNK_110841f80;
    puVar4 = puVar5;
    uStack_50 = uVar2;
    puStack_48 = puVar1;
    func_0x00010bf87440(puVar5,param_2,&puStack_70);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
  _objc_release(puVar5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105386a74; end: 105386a7f;  */

void FUN_105386a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeStreamListener__1126293e0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105386a80; end: 105386b5f; -[SCComposerDuplexClient registerHandlerWithPath:handler:] */

void FUN_105386a80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126780(uVar4,param_2,param_3,param_4,uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126b3540;
  puVar2 = PTR_PTR_1126b15a8;
  func_0x00010c27f660(PTR_PTR_1126b15a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b080(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105386b60; end: 105386c3b; -[SCComposerDuplexClient sendWithPath:message:] */

void FUN_105386b60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b7e48;
  _objc_alloc(PTR_PTR_1126b7e48);
  func_0x00010c03b520();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15b420(uVar3,param_2,param_3,param_4,puVar2,uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105386c3c; end: 105386c77; -[SCComposerDuplexClient callParticipationChangedWithIsCalling:] */

void FUN_105386c3c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf28240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105386c78; end: 105386c83; -[SCComposerDuplexClient pushToValdiMarshaller:] */

undefined8 FUN_105386c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b08;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 105386c84; end: 105386d43; -[SCComposerDuplexClient .cxx_destruct] */

void FUN_105386c84(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105386d44; end: 105386e3f; -[SCDuplexAppUserLifecycleObserver _onAppDidEnterBackground] */

void FUN_105386d44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010bf06220(*(undefined8 *)(param_1 + 8),param_2,1);
  if (*(long *)(param_1 + 0x18) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar2 = uVar1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105386e40; end: 105386efb;  */

void FUN_105386e40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0bf100(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105386efc; end: 105386f2b;  */

void FUN_105386efc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf05b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_appMemoryPressureStateChanged__11259f078,0);
  return;
}



/* Entry: 105386f2c; end: 105386f37; -[SCDuplexAppUserLifecycleObserver _onAppWillEnterForeground] */

void FUN_105386f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appStateChanged__11259f230,0);
  return;
}



/* Entry: 105386f38; end: 105386f43; -[SCDuplexAppUserLifecycleObserver _onAppWillTerminate] */

void FUN_105386f38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_appStateChanged__11259f230,1);
  return;
}



/* Entry: 105386f44; end: 105386f97; -[SCDuplexAppUserLifecycleObserver .cxx_destruct] */

void FUN_105386f44(long param_1)

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



/* Entry: 105386f98; end: 105386fcb;  */

void FUN_105386f98(void)

{
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105386fcc; end: 1053870bf; -[SCNDuplexBackgroundNetworkTaskDelegateImpl beginBackgroundTask] */

void FUN_105386fcc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 1053870c0; end: 1053871a3; -[SCNDuplexBackgroundNetworkTaskDelegateImpl endBackgroundTask] */

void FUN_1053870c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar1);
  return;
}



/* Entry: 1053871a4; end: 1053871df; -[SCNDuplexBackgroundNetworkTaskDelegateImpl .cxx_destruct] */

void FUN_1053871a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053871e0; end: 105387253; -[SCNDuplexSendCallbackImpl initWithPromise:] */

undefined1 * FUN_1053871e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7c38;
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



/* Entry: 105387254; end: 10538728b; -[SCNDuplexSendCallbackImpl onSend] */

void FUN_105387254(undefined8 param_1)

{
  func_0x00010c117d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10538728c; end: 1053872d7; -[SCNDuplexSendCallbackImpl onError:] */

void FUN_10538728c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    func_0x00010c117d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1053872d8; end: 1053872df; -[SCNDuplexSendCallbackImpl promise] */

undefined8 FUN_1053872d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053872e0; end: 10538730f; -[SCNDuplexSendCallbackImpl setPromise:] */

void FUN_1053872e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105387310; end: 10538731b; -[SCNDuplexSendCallbackImpl .cxx_destruct] */

void FUN_105387310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10538731c; end: 10538738f; -[SCNDuplexStreamListenerImpl initWithIsConnectedSubject:] */

undefined1 * FUN_10538731c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7c40;
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



/* Entry: 105387390; end: 1053873db; -[SCNDuplexStreamListenerImpl onStreamStatusChanged:] */

void FUN_105387390(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3 == 2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053873dc; end: 1053873e7; -[SCNDuplexStreamListenerImpl .cxx_destruct] */

void FUN_1053873dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053873e8; end: 10538745b; -[AttestationPayloadDelegate initWithConfig:] */

undefined1 * FUN_1053873e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7c48;
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



/* Entry: 10538745c; end: 105387513; -[AttestationPayloadDelegate getAttestationPayloadProto:path:reqType:] */

void FUN_10538745c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7e50;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1ec1c0();
  _objc_release(param_3);
  func_0x00010c1ebf60(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1ec220(puVar1,param_2,param_5);
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x000104b30cdc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105387514; end: 10538751f; -[AttestationPayloadDelegate getSignature:path:] */

void FUN_105387514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000104ae4ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&DAT_104ae4ca8)(param_3,param_4);
  return;
}



/* Entry: 105387520; end: 105387527; -[AttestationPayloadDelegate argosConfig] */

undefined8 FUN_105387520(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105387528; end: 10538754b; -[AttestationPayloadDelegate .cxx_destruct] */

void FUN_105387528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10538754c; end: 10538756f; +[SCArgosConfig mapToNativeArgosMode:] */

undefined8 FUN_10538754c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 2U < 5) {
    return *(undefined8 *)(&UNK_10dd97d28 + (ulong)(param_3 - 2U) * 8);
  }
  return 0;
}



/* Entry: 105387570; end: 10538776f; -[SCArgosConfig getTweaksForNativeClient] */

void FUN_105387570(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126b7e68;
  func_0x00010c1066c0();
  if (puVar6 == (undefined *)0xffffffffffffffff) {
    func_0x00010c067f00(*(undefined8 *)(param_1 + 8),param_2,
                        &PTR____CFConstantStringClassReference_110dd5658,0x1e,0);
  }
  ppuStack_58 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf470;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  _objc_release(puVar6);
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    func_0x000105387ce8(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2,param_2,uVar5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf488);
    _objc_release(uVar5);
  }
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09c80();
  func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2,param_2,puVar6,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf4a0);
  _objc_release(puVar6);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b7e68;
  func_0x00010bf09ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar6;
  func_0x00010c08fa60();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar2,param_2,puVar6,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf4b8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar6 = *(undefined **)(puVar6 + 0x28);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105387770; end: 1053877b7; -[SCArgosConfig getAttestationConfig] */

void FUN_105387770(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1053877b8; end: 1053877bf; -[SCArgosConfig circumstanceEngine] */

undefined8 FUN_1053877b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053877c0; end: 1053877c7; -[SCArgosConfig grapheneRegistry] */

undefined8 FUN_1053877c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1053877c8; end: 1053877cf; -[SCArgosConfig argosScopedDirectory] */

undefined8 FUN_1053877c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1053877d0; end: 1053877d7; -[SCArgosConfig argosConfig] */

undefined8 FUN_1053877d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1053877d8; end: 1053877df; -[SCArgosConfig attestationLibraryConfig] */

undefined8 FUN_1053877d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1053877e0; end: 1053877e7; -[SCArgosConfig readReceiptPrefix] */

undefined8 FUN_1053877e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1053877e8; end: 1053877ef; -[SCArgosConfig instalogPath] */

undefined8 FUN_1053877e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1053877f0; end: 1053877f7; -[SCArgosConfig boostPrefix] */

undefined8 FUN_1053877f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1053877f8; end: 1053877ff; -[SCArgosConfig spectrumPrefix] */

undefined8 FUN_1053877f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105387800; end: 105387807; -[SCArgosConfig mcsPrefix] */

undefined8 FUN_105387800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105387808; end: 10538780f; -[SCArgosConfig musicPrefixes] */

undefined8 FUN_105387808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105387810; end: 105387817; -[SCArgosConfig musicPaths] */

undefined8 FUN_105387810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105387818; end: 10538781f; -[SCArgosConfig friendingPrefixes] */

undefined8 FUN_105387818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105387820; end: 105387827; -[SCArgosConfig phoneEnrollmentPrefix] */

undefined8 FUN_105387820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105387828; end: 10538782f; -[SCArgosConfig phoneVerifyPrefix] */

undefined8 FUN_105387828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105387830; end: 1053878fb; -[SCArgosConfig .cxx_destruct] */

void FUN_105387830(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1053878fc; end: 105387903; +[SCArgosTweak isStrictValidationEnforced] */

undefined8 FUN_1053878fc(void)

{
  return 1;
}



/* Entry: 105387904; end: 10538790b; +[SCArgosTweak argosCorruptedToken] */

undefined8 FUN_105387904(void)

{
  return 0;
}



/* Entry: 10538790c; end: 105387917; +[SCArgosTweak argosRouteTag] */

undefined ** FUN_10538790c(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 105387918; end: 10538791f; +[SCArgosTweak preemptiveRefreshDelaySecond] */

undefined8 FUN_105387918(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 105387920; end: 1053879c3; -[SCArgosPlatformBlizzardLogger initWithBlizzardLogger:circumstanceEngine:] */

undefined1 *
FUN_105387920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7c58;
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



/* Entry: 1053879c4; end: 105387b03; -[SCArgosPlatformBlizzardLogger logArgosEvent:] */

void FUN_1053879c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b7e70;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c0cfd40(param_3);
  func_0x00010c1c8c60(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c0f5800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c13fcc0(param_3);
  func_0x00010c1edc80(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c08ae60(param_3);
  func_0x00010c1b92e0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c23c300(param_3);
  func_0x00010c2029c0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010bf09d60(param_3);
  func_0x00010c16a2a0(puVar1,param_2,uVar2);
  uVar2 = param_3;
  func_0x00010c2730c0(param_3);
  _objc_release(param_3);
  func_0x00010c216be0(puVar1,param_2,uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105387b04; end: 105387c07; -[SCArgosPlatformBlizzardLogger logArgosRefreshEvent:] */

void FUN_105387b04(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7e78;
  _objc_opt_new(PTR_PTR_1126b7e78);
  lVar2 = param_3;
  func_0x00010c080340(param_3);
  func_0x00010c20f900(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c08ae60(param_3);
  func_0x00010c1b92e0(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c0f65c0(param_3);
  func_0x00010c1d9ae0(puVar1,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c121ea0();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c121ea0();
    if (lVar2 == 1) {
      uVar3 = 1;
    }
    else {
      lVar2 = param_3;
      func_0x00010c121ea0();
      if (lVar2 != 2) goto LAB_105387bc0;
      uVar3 = 2;
    }
  }
  func_0x00010c1e8080(puVar1,param_2,uVar3);
LAB_105387bc0:
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105387c08; end: 105387c0f; -[SCArgosPlatformBlizzardLogger userNotTrackedLogger] */

undefined8 FUN_105387c08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105387c10; end: 105387c17; -[SCArgosPlatformBlizzardLogger circumstanceEngine] */

undefined8 FUN_105387c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105387c18; end: 105387c47; -[SCArgosPlatformBlizzardLogger .cxx_destruct] */

void FUN_105387c18(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105387c48; end: 105387d83;  */

void FUN_105387c48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010061cfb0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b7e80;
  func_0x00010bfc2900(PTR_PTR_1126b7e80);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf2b8,
                      &PTR____CFConstantStringClassReference_110dd59f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec320(param_1,param_2,puVar2,1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105387d84; end: 105387e43;  */

void FUN_105387d84(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010061cfb0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b7e80;
  func_0x00010bfc2900(PTR_PTR_1126b7e80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010061d1d8(param_1,puVar1,&PTR____CFConstantStringClassReference_110dd5a38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105387e44; end: 105387eeb;  */

void FUN_105387e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c2ac460(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010bfec320(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105387eec; end: 105387fcb;  */

void FUN_105387eec(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x00010061cfb0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b7e80;
  func_0x00010bfc2900(PTR_PTR_1126b7e80);
  _objc_retainAutoreleasedReturnValue();
  FUN_105387e44(param_1,puVar1,&PTR____CFConstantStringClassReference_110db6ad8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105387fcc; end: 10538804b;  */

void FUN_105387fcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c296d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c086560(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10538804c; end: 1053880fb; -[SCArgosAuthContextDelegate initWithTokenProvider:] */

undefined1 * FUN_10538804c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7c60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010bfef240();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053880fc; end: 1053884a7; -[SCArgosAuthContextDelegate getAuthContext:callback:] */

void FUN_1053880fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x10538823c;
  puStack_68 = &UNK_11087ebf0;
  uStack_58 = param_1;
  _objc_retain(param_5);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1053883b0;
  puStack_98 = &UNK_11087ec20;
  uStack_90 = param_5;
  uStack_88 = param_1;
  uStack_60 = param_5;
  _objc_retain(param_5);
  func_0x00010bfa48e0(uVar2,param_3,6,uVar3,uVar4,&puStack_80,&puStack_b0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_60);
  _objc_release(param_5);
  return;
}



/* Entry: 1053884a8; end: 1053884d7; -[SCArgosAuthContextDelegate .cxx_destruct] */

void FUN_1053884a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053884d8; end: 1053885db; -[SCArgosCallback initWithQueuePerformer:successBlock:failureBlock:additionnalHeaders:] */

undefined1 *
FUN_1053884d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e7c68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053885dc; end: 105388737; -[SCArgosCallback onSuccess:wasDispatched:] */

void FUN_1053885dc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105388694;
  puStack_48 = &UNK_110841f80;
  _objc_retain(param_3);
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retainBlock();
  if (param_4 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105388738; end: 1053887c7; -[SCArgosCallback onError:] */

void FUN_105388738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1053887c8;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}


