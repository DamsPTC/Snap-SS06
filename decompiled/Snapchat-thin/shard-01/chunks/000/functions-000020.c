/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c314b0; end: 100c314ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c314b0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127250f4);
    func_0x000107c61174(uVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c31500; end: 100c316c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c31500(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  param_1 = param_1 + 0x28;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_112726208;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c3e550();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = param_1 + _DAT_11272620c;
    func_0x000107c61148(lVar1);
    lVar3 = lVar1;
    func_0x000107c51d3c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = param_1 + _DAT_112726204;
    func_0x000107c61148(lVar1);
    lVar4 = lVar1;
    func_0x000107c5da30();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = param_1 + _DAT_112726204;
    func_0x000107c61148(lVar1);
    lVar5 = lVar1;
    func_0x000107c4eb4c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = param_1 + _DAT_112726200;
    func_0x000107c61148(lVar1);
    lVar6 = lVar1;
    func_0x000107c5da60();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = param_1 + _DAT_112726210;
    func_0x000107c61148(lVar1);
    lVar7 = param_1 + _DAT_112726214;
    func_0x000107c61148();
    puVar8 = PTR_PTR_1126bb6d8;
    func_0x000107c610f4(PTR_PTR_1126bb6d8);
    func_0x000107c4599c();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100c316c4; end: 100c316cb; -[SCSnapProServices popularStatusProvider] */

undefined8 FUN_100c316c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c316cc; end: 100c31873; -[SCLegacySnapchatterServicesAdaptor initWithBitmojiAvatarProvider:bitmojiSelfieProvider:snapProProfileIdProvider:lazyPopularUserStatusProvider:userSession:userInfoServices:userSegmentsServices:configsProvider:] */

undefined1 *
FUN_100c316cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_1126e9278;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c31874; end: 100c318fb; +[SCAPI isErrorResponse:] */

uint FUN_100c31874(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4d9c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e76138);
  func_0x000107c61180();
  func_0x000107c61170();
  uVar3 = 0;
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x000107c4d9c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e76138);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c3ebcc();
    uVar3 = (uint)lVar2 ^ 1;
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 100c318fc; end: 100c31e37; -[SCSojuMessage initWithJSONDictionary:] */

/* WARNING: Possible PIC construction at 0x000100c31dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c31de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c31df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c31d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c31b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c31bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c31bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c31b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c31d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c31d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c31d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c31d08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c31d4c) */
/* WARNING: Removing unreachable block (ram,0x000100c31d14) */
/* WARNING: Removing unreachable block (ram,0x000100c31d28) */
/* WARNING: Removing unreachable block (ram,0x000100c31bd4) */
/* WARNING: Removing unreachable block (ram,0x000100c31bc0) */
/* WARNING: Removing unreachable block (ram,0x000100c31b90) */
/* WARNING: Removing unreachable block (ram,0x000100c31b9c) */
/* WARNING: Removing unreachable block (ram,0x000100c31d88) */
/* WARNING: Removing unreachable block (ram,0x000100c31df8) */
/* WARNING: Removing unreachable block (ram,0x000100c31e34) */
/* WARNING: Removing unreachable block (ram,0x000100c31e10) */
/* WARNING: Removing unreachable block (ram,0x000100c31de8) */
/* WARNING: Removing unreachable block (ram,0x000100c31db0) */
/* WARNING: Removing unreachable block (ram,0x000100c31dc4) */
/* WARNING: Removing unreachable block (ram,0x000100c31d60) */
/* WARNING: Removing unreachable block (ram,0x000100c31d6c) */
/* WARNING: Removing unreachable block (ram,0x000100c31b1c) */
/* WARNING: Removing unreachable block (ram,0x000100c319c8) */
/* WARNING: Removing unreachable block (ram,0x000100c31c80) */

void FUN_100c318fc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  puVar1 = param_3;
  if (param_1 != 0) {
    func_0x000107c4a860();
    func_0x000107c61180();
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x000107c433e8();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c4080c();
    puVar4 = puRam0000000000000000;
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c4d9a4();
      func_0x000107c61180();
      func_0x000107c4d9e8();
      func_0x000107c61180();
      puVar1 = param_3;
      if (param_3 != (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x000107c61158(PTR__OBJC_CLASS___NSNull_1126aef28);
        puVar3 = param_3;
        func_0x000107c6115c(param_3,puVar2);
        if (((ulong)puVar3 & 1) == 0) {
          puVar2 = puVar4;
          func_0x000107c4cda4();
          if (puVar2 != (undefined *)0x0) {
            puVar2 = puVar4;
            func_0x000107c433d4();
            if (puVar2 == (undefined *)0x2) {
              puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x000107c61158(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              puVar3 = param_3;
              func_0x000107c6115c(param_3,puVar2);
              if (((ulong)puVar3 & 1) != 0) {
                func_0x000107c61174(param_3);
                puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                func_0x000107c610f4(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
                func_0x000107c40808(param_3);
                func_0x000107c45cd4(puVar2);
                func_0x000107c61174(param_3);
                puVar3 = param_3;
                func_0x000107c4080c();
                if (puVar3 != (undefined *)0x0) {
                  func_0x000107c4d9e8(param_3);
                  func_0x000107c61180();
                  func_0x000107c4cda4();
                  func_0x000107c4cdc0();
                  func_0x000107c61180();
                  if (puVar4 == (undefined *)0x0) {
                    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
                    func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
                    func_0x000107c61180();
                    func_0x000107c56bcc(puVar2);
                  }
                  else {
                    func_0x000107c56bcc(puVar2);
                    puVar1 = puVar4;
                  }
                }
              }
              goto code_r0x000107c61170;
            }
            if (puVar2 == (undefined *)0x1) {
              puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x000107c61158(PTR__OBJC_CLASS___NSArray_1126ae530);
              puVar3 = param_3;
              func_0x000107c6115c(param_3,puVar2);
              if (((ulong)puVar3 & 1) != 0) {
                func_0x000107c61174(param_3);
                puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                func_0x000107c610f4(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
                func_0x000107c40808(param_3);
                func_0x000107c45cd4(puVar2);
                func_0x000107c61174(param_3);
                func_0x000107c4080c();
                if (param_3 != (undefined *)0x0) {
                  func_0x000107c4cda4();
                  func_0x000107c4cdc0();
                  func_0x000107c61180();
                  if (puVar4 == (undefined *)0x0) {
                    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
                    func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
                    func_0x000107c61180();
                    func_0x000107c3d798(puVar2);
                  }
                  else {
                    func_0x000107c3d798(puVar2);
                    puVar1 = puVar4;
                  }
                }
              }
              goto code_r0x000107c61170;
            }
            if (puVar2 == (undefined *)0x0) {
              func_0x000107c4cda4(puVar4);
              func_0x000107c4cdc0();
              func_0x000107c61180();
              goto code_r0x000107c61170;
            }
          }
          func_0x000100aea0bc(param_1,0,param_3);
        }
      }
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c31e38; end: 100c3208b; +[SOJUFriendsResponse registerMessageFields:] */

void FUN_100c31e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0b48;
  puVar1 = PTR_s_friends_1125cc088;
  func_0x000107c61174(param_3);
  func_0x000107c61158(puVar2);
  FUN_100c3208c(param_3,param_2,puVar1,0,0,7,puVar2);
  func_0x000100c32094();
  FUN_100c3208c();
  func_0x000100c32094();
  func_0x000107c3def4();
  func_0x000107c61158(PTR_PTR_1126e0b48);
  func_0x000100c320ac();
  func_0x000100c320c8(param_3,param_2,PTR_s_bests_1125a3fb8,0,0,7);
  func_0x000100c320d4();
  func_0x000107c61158(PTR_PTR_1126e0bb0);
  func_0x000100c320ac();
  func_0x000107c61158(PTR_PTR_1126e0bb0);
  func_0x000100c320ac();
  func_0x000100c32094();
  FUN_100c3208c();
  func_0x000100c32094();
  func_0x000107c3def4();
  func_0x000107c61158(PTR_PTR_1126e0b48);
  func_0x000100c320ac();
  func_0x000100c32120();
  func_0x000100c320c8();
  func_0x000100c320d4();
  func_0x000100c32120();
  func_0x000100c320c8();
  func_0x000107c61158(PTR_PTR_1126e0be8);
  func_0x000100c320ac();
  func_0x000100c32120();
  func_0x000100c320c8();
  func_0x000100c32094();
  FUN_100c3208c();
  func_0x000100c32120();
  func_0x000100c320c8();
  func_0x000100c320d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c3208c; end: 100c320db;  */

void FUN_100c3208c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 100c320dc; end: 100c32117; -[SCSojuMessageFieldsRegistry setFasterCodingKey:] */

void FUN_100c320dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4aa28(uVar1);
  func_0x000107c61180();
  func_0x000107c548b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c32118; end: 100c3212f; -[SCSojuMessageField setFasterCodingKey:] */

void FUN_100c32118(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 100c32130; end: 100c32137; -[SCSojuMessageField enumToStringFunc] */

undefined8 FUN_100c32130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100c32138; end: 100c3213f; -[SCSojuMessageField fieldSpecifier] */

undefined8 FUN_100c32138(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100c32140; end: 100c321ab; +[SCSojuMessage messageFromDictionary:] */

void FUN_100c32140(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c61158(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar2 = param_3;
  func_0x000107c6115c(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c610f4(param_1);
    func_0x000107c47020();
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100c321ac; end: 100c327af; +[SOJUFriend registerMessageFields:] */

void FUN_100c321ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100c327b0();
  func_0x000100c327c4();
  func_0x000100c327d4();
  func_0x000107c3def4();
  func_0x000100c327ec();
  func_0x000100c327fc();
  func_0x000100c327ec();
  func_0x000100c327c4();
  func_0x000100c327ec();
  func_0x000100c327c4();
  func_0x000100c327fc(param_3,param_2,PTR_s_ts_11267ce48,0,0,2);
  func_0x000100c32808();
  func_0x000100c327fc();
  func_0x000100c327ec();
  func_0x000100c327c4();
  func_0x000100c327d4();
  func_0x000107c3def4();
  func_0x000100c3281c();
  func_0x000100c3283c();
  func_0x000100c327fc();
  func_0x000100c3283c();
  func_0x000100c327fc();
  func_0x000100c3283c();
  func_0x000100c32848();
  func_0x000100c3283c();
  func_0x000100c32848();
  func_0x000100c3283c();
  func_0x000100c327c4();
  func_0x000100c3283c();
  func_0x000100c32848();
  func_0x000100c3281c();
  func_0x000100c3281c();
  func_0x000100c32858();
  func_0x000100c327d4();
  func_0x000107c3def4();
  func_0x000100c32858();
  func_0x000100c3283c();
  func_0x000100c32848();
  func_0x000100c3283c();
  func_0x000100c32848();
  func_0x000100c3283c();
  func_0x000100c32848();
  func_0x000100c3283c();
  func_0x000100c32848();
  func_0x000100c3283c();
  func_0x000100c327c4();
  func_0x000100c327fc(param_3,param_2,PTR_s_friendmojiSymbols_112545688,0,1,7);
  func_0x000107c548b8(param_3,param_2,0x271c7621c536bf);
  func_0x000107c61158(PTR_PTR_1126e0b38);
  FUN_100c327b0();
  func_0x000107c3def4();
  func_0x000100c32808();
  func_0x000100c327fc();
  func_0x000100c32808();
  func_0x000100c327fc();
  func_0x000100c32858();
  func_0x000100c3283c();
  func_0x000100c327fc();
  func_0x000100c3283c();
  func_0x000100c327fc();
  func_0x000100c32858();
  func_0x000100c3283c();
  func_0x000100c32848();
  func_0x000107c61158(PTR_PTR_1126c0680);
  func_0x000100c32878();
  func_0x000100c32858();
  func_0x000100c327fc(param_3,param_2,PTR_s_studySettings_1125456b8,0,1,7);
  func_0x000107c548b8(param_3,param_2,0x817f1b15e0b256);
  func_0x000100c3281c();
  func_0x000100c3281c();
  func_0x000100c3281c();
  func_0x000100c32858();
  func_0x000100c32858();
  func_0x000100c3281c();
  func_0x000100c32858();
  func_0x000100c3281c();
  func_0x000100c32858();
  func_0x000100c32858();
  func_0x000100c32858();
  func_0x000100c3283c();
  func_0x000100c327fc();
  func_0x000100c3281c();
  func_0x000100c32808();
  func_0x000100c327fc();
  func_0x000100c32808();
  func_0x000100c327fc();
  func_0x000100c32858();
  func_0x000107c61158(PTR_PTR_1126e0908);
  func_0x000100c32878();
  func_0x000100c32808();
  func_0x000100c327fc();
  func_0x000100c32808();
  func_0x000100c327fc();
  func_0x000100c32858();
  func_0x000107c61158(PTR_PTR_1126e0b40);
  func_0x000100c32878();
  func_0x000100c32858();
  func_0x000100c3281c();
  func_0x000100c3281c();
  func_0x000100c3281c();
  func_0x000100c32858();
  func_0x000100c32808();
  func_0x000100c327fc();
  func_0x000100c3281c();
  func_0x000100c32858();
  func_0x000100c3281c();
  func_0x000100c32858();
  func_0x000100c3281c();
  func_0x000100c3281c();
  func_0x000100c32808();
  func_0x000100c327fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c327b0; end: 100c3289b;  */

void FUN_100c327b0(void)

{
  return;
}



/* Entry: 100c3289c; end: 100c329c3;  */

long FUN_100c3289c(double param_1,double param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = 0;
  if (param_3 != (long *)0x0) {
    lVar4 = param_3[2];
    func_0x000107c61174(lVar4);
    func_0x000107c611ec(param_3 + 1);
    if (*param_3 == 0 && lVar4 != 0) {
      func_0x000107c61174(lVar4);
      func_0x000107c5b078(lVar4);
      iVar1 = (int)param_1 * 4;
      lVar2 = (long)(iVar1 * (int)param_2);
      func_0x000107c60ee8(lVar2,1);
      if (lRam00000001137fbec0 != -1) {
        func_0x00010002a2fc(0x1137fbec0,&PTR___NSConcreteGlobalBlock_110d62fd0);
      }
      lVar3 = lVar2;
      func_0x000107c608a0(lVar2,(long)(int)param_1,(long)(int)param_2,8,(long)iVar1,
                          uRam00000001137fbec8,0x4001);
      if (lVar3 == 0) {
        func_0x000107c60fd0(lVar2);
        lVar2 = 0;
      }
      else {
        func_0x000107c3c2f8(PTR_PTR_1126b0c40);
        func_0x000107c608f4(lVar3);
      }
      func_0x000107c61170(lVar4);
      *param_3 = lVar2;
    }
    func_0x000107c611f0(param_3 + 1);
    lVar2 = *param_3;
    func_0x000107c61170(lVar4);
  }
  return lVar2;
}



/* Entry: 100c329c4; end: 100c329cb; -[SIGIconMetadata size] */

undefined1  [16] FUN_100c329c4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 100c329cc; end: 100c32ae7; +[SIGIcons _renderImageToContext:iconMetadata:] */

/* WARNING: Possible PIC construction at 0x000100c32ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c32ac4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c32ac8) */

void FUN_100c329cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_8);
  lVar1 = param_5;
  func_0x000107c44f84();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c2cb0;
  if (lVar1 != 0) {
    lVar2 = param_8;
    func_0x000107c44fb0(param_8);
    func_0x000107c5d21c(puVar3,param_6,lVar2);
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c61170(0);
    }
    else {
      func_0x000107c5b078(param_8);
      lVar2 = param_8;
      uVar4 = param_1;
      uVar5 = param_2;
      func_0x000107c3fdb8(param_8);
      func_0x000107c61180();
      func_0x000107c423e8(param_8);
      func_0x000107c3c2fc(param_1,param_2,0,0xbff0000000000000,uVar4,uVar5,param_3,param_4,param_5,
                          param_6,lVar1,puVar3,lVar2,0,0,0,0,param_7);
      lVar1 = lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c32ae8; end: 100c32b6f; +[SIGIcons iconFontForDefaultSize] */

void FUN_100c32ae8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_100c32b70;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137fbe98 != -1) {
    func_0x00010002a2fc(0x1137fbe98,&puStack_48);
  }
  uVar1 = uRam00000001137fbe90;
  func_0x000107c61174(uRam00000001137fbe90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c32b70; end: 100c32ba3;  */

void FUN_100c32b70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c44f88(0x4024000000000000);
  func_0x000107c61180();
  uVar1 = uRam00000001137fbe90;
  uRam00000001137fbe90 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c32ba4; end: 100c32bd7; +[SIGIcons iconFontForSize:] */

void FUN_100c32ba4(undefined8 param_1)

{
  func_0x000107c3bd6c();
                    /* WARNING: Could not recover jumptable at 0x00010bfb41b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR__OBJC_CLASS___UIFont_1126aec38,PTR_s_fontWithName_size__1125caa10,
             &PTR____CFConstantStringClassReference_110f8b7f8);
  return;
}



/* Entry: 100c32bd8; end: 100c32bdf; -[SIGIconMetadata iconType] */

undefined8 FUN_100c32bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c32be0; end: 100c32c07; +[SIGIconsGeneratedUtils unicodeValueForIconType:] */

undefined ** FUN_100c32be0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x2f4) {
    return (undefined **)(&PTR_PTR_110d63010)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 100c32c08; end: 100c32c0f; -[SIGIconMetadata color] */

undefined8 FUN_100c32c08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c32c10; end: 100c32c1b; -[SIGIconMetadata edgeInsetsGreaterThan] */

undefined8 FUN_100c32c10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100c32c1c; end: 100c3313f; +[SIGIcons _renderImageWithIconFont:icon:size:color:rotationDegrees:flipVertically:flipHorizontally:shadow:borderColor:borderWidth:edgeInsetsGreaterThan:context:] */

void FUN_100c32c1c(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined *param_13,
                  int param_14,int param_15,long param_16,long param_17,undefined8 param_18)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  param_7 = param_5 + param_7;
  bVar1 = false;
  bVar2 = false;
  if (param_6 + param_8 < param_1) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(param_7) && !NAN(param_2)) {
      bVar1 = param_7 < param_2;
      bVar2 = false;
    }
  }
  if (bVar1 != bVar2) {
    if (param_13 == (undefined *)0x0) {
      param_13 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_10,0xcc);
      func_0x000107c61180();
    }
    uVar3 = param_9;
    func_0x000107c3c308();
    func_0x000107c61180();
    puVar4 = param_13;
    func_0x000107c50618(param_13,param_10,uVar3);
    func_0x000107c61180();
    func_0x000107c60bb0(param_18);
    func_0x000107c60938(0,param_2,param_18);
    dVar10 = 1.0;
    dVar11 = -1.0;
    func_0x000107c60908(param_18);
    if (param_3 != 0.0) {
      func_0x000107c60938(param_1 * 0.5,param_2 * 0.5,param_18);
      func_0x000107c60900((param_3 * 3.141592653589793) / 180.0,param_18);
      dVar10 = param_1 * -0.5;
      dVar11 = param_2 * -0.5;
      func_0x000107c60938(param_18);
    }
    if (param_14 != 0) {
      func_0x000107c60938(0,param_2,param_18);
      dVar10 = 1.0;
      dVar11 = -1.0;
      func_0x000107c60908(param_18);
    }
    if (param_15 != 0) {
      func_0x000107c60938(param_1,0,param_18);
      dVar10 = -1.0;
      dVar11 = 1.0;
      func_0x000107c60908(param_18);
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    func_0x000107c610fc();
    func_0x000107c52610();
    func_0x000107c61174(puVar4);
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    uStack_e0 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uStack_d8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    uStack_d0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    uStack_c8 = param_11;
    puStack_c0 = puVar5;
    puStack_b8 = puVar4;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_10,&uStack_c8,&uStack_e0,3);
    func_0x000107c61180();
    func_0x000107c419a0(puVar7,param_10,puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (param_16 != 0) {
      func_0x000107c56bd8(puVar7,param_10,param_16,
                          *(undefined8 *)PTR__NSShadowAttributeName_110345828);
    }
    func_0x000107c5b0a0(param_12,param_10,puVar7);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d954(param_3);
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c49820();
    func_0x000107c61170(puVar6);
    dVar12 = dVar10;
    dVar13 = dVar11;
    if (0x16c16c16c16c16c <
        ((long)puVar8 * 0x4fa4fa4fa4fa4fa5 + 0x2d82d82d82d82d8U >> 2 |
        (long)puVar8 * 0x4fa4fa4fa4fa4fa5 << 0x3e)) {
      func_0x000107c3af3c(0,0,dVar10,dVar11,param_3,param_9);
    }
    param_1 = param_1 - (param_6 + param_8);
    param_2 = param_2 - param_7;
    if (param_1 / param_2 <= dVar12 / dVar13) {
      dVar13 = param_1 / dVar12;
    }
    else {
      dVar13 = param_2 / dVar13;
    }
    func_0x000107c60908(dVar13,dVar13,param_18);
    dVar10 = ((param_6 + param_1 * 0.5) - dVar10 * dVar13 * 0.5) / dVar13;
    dVar13 = ((param_5 + param_2 * 0.5) - dVar11 * dVar13 * 0.5) / dVar13;
    func_0x000107c422b8(dVar10,dVar13,param_12,param_10,puVar7);
    if ((param_17 != 0) && (0.0 < param_4)) {
      func_0x000107c60904(param_18);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c4d954(param_4,PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61180();
      func_0x000107c56bd8(puVar7,param_10,puVar6,
                          *(undefined8 *)PTR__NSStrokeWidthAttributeName_110345870);
      func_0x000107c61170(puVar6);
      lVar9 = param_17;
      func_0x000107c50618(param_17,param_10,uVar3);
      func_0x000107c61180();
      func_0x000107c56bd8(puVar7,param_10,lVar9,
                          *(undefined8 *)PTR__NSStrokeColorAttributeName_110345868);
      func_0x000107c4ff88(puVar7,param_10,*(undefined8 *)PTR__NSShadowAttributeName_110345828);
      func_0x000107c422b8(dVar10,dVar13,param_12,param_10,puVar7);
      func_0x000107c608fc(param_18);
      func_0x000107c61170(lVar9);
    }
    func_0x000107c60bac();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  func_0x000107c60e78();
  puVar4 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x000107c41030();
  func_0x000107c61180();
  if ((puVar4 == (undefined *)0x0) ||
     (puVar7 = puVar4, func_0x000107c5d9c8(), puVar7 == (undefined *)0x0)) {
    puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    puVar5 = puVar7;
    func_0x000107c5ce94();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
  }
  else {
    func_0x000107c61174(puVar4);
    puVar5 = puVar4;
  }
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c33140; end: 100c331d3; +[SIGIcons _renderingTraitCollection] */

void FUN_100c33140(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITraitCollection_1126b6d80;
  func_0x000107c41030();
  func_0x000107c61180();
  if ((puVar1 == (undefined *)0x0) ||
     (puVar2 = puVar1, func_0x000107c5d9c8(), puVar2 == (undefined *)0x0)) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5ce94();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  else {
    func_0x000107c61174(puVar1);
    puVar3 = puVar1;
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c331d4; end: 100c331fb;  */

void FUN_100c331d4(long param_1)

{
  func_0x000107c3cad0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be940b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetTimer_1125829c8);
  return;
}



/* Entry: 100c331fc; end: 100c33247; -[SCContextStateHandler _transitToPendingState] */

void FUN_100c331fc(long param_1)

{
  if ((*(long *)(param_1 + 8) != -1) && (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8))) {
    func_0x000107c3b91c(param_1);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  return;
}



/* Entry: 100c33248; end: 100c33253; -[SCContextStateHandler _handleStateTransitionFrom:to:] */

void FUN_100c33248(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  return;
}



/* Entry: 100c33254; end: 100c33273;  */

void FUN_100c33254(long param_1)

{
  func_0x000107c43354(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c611b0();
  return;
}



/* Entry: 100c33274; end: 100c33443; +[GTMSessionFetcher fetchersForBackgroundSessions] */

void FUN_100c33274(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
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
  uVar1 = param_1;
  func_0x000107c61158();
  func_0x000107c4334c();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3e168();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c52074();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c61180();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174();
  uVar5 = uVar2;
  func_0x000107c4080c();
  if (uVar5 != 0) {
    lVar9 = *plStack_120;
    do {
      uVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          func_0x000107c61128(uVar2);
        }
        uVar8 = *(undefined8 *)(lStack_128 + uVar10 * 8);
        uVar6 = uVar3;
        func_0x000107c4d9c0(uVar3,param_2,uVar8);
        func_0x000107c61180();
        if (uVar6 == 0) {
          uVar6 = param_1;
          func_0x000107c43350(param_1,param_2,uVar8);
          func_0x000107c61180();
          uVar7 = uVar6;
          func_0x000107c3fbe8();
          if ((uVar7 & 1) == 0) {
            func_0x000107c3e78c(uVar6,param_2,0);
          }
          if (uVar6 != 0) goto LAB_100c333a8;
        }
        else {
LAB_100c333a8:
          func_0x000107c3d798(puVar4,param_2,uVar6);
          func_0x000107c61170(uVar6);
        }
        uVar10 = uVar10 + 1;
      } while (uVar5 != uVar10);
      uVar5 = uVar2;
      func_0x000107c4080c(uVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (uVar5 != 0);
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  func_0x000107c60e78();
  if (lRam00000001136a1c60 != -1) {
    FUN_100c33474();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1c58);
  return;
}



/* Entry: 100c33444; end: 100c33473; +[GTMSessionFetcher fetcherUserDefaults] */

void FUN_100c33444(void)

{
  if (lRam00000001136a1c60 != -1) {
    FUN_100c33474();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1c58);
  return;
}



/* Entry: 100c33474; end: 100c33487;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_100c33474(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107c0188;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107c0188);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107c0188);
  func_0x000107c61180();
  (*pcVar3)(0x1136a1c60,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 100c33488; end: 100c334db;  */

void FUN_100c33488(void)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110da9998;
  func_0x000107c60af0();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x000107c5ba34();
    func_0x000107c61180();
  }
  else {
    func_0x000107c4334c();
    func_0x000107c61180();
  }
  uVar1 = ppuRam00000001136a1c58;
  ppuRam00000001136a1c58 = ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c334dc; end: 100c3350b; +[GTMSessionFetcher sessionIdentifierToFetcherMap] */

void FUN_100c334dc(void)

{
  if (lRam00000001136a1c38 != -1) {
    FUN_100c3350c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1c30);
  return;
}



/* Entry: 100c3350c; end: 100c3351f;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_100c3350c(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107bfeb8;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107bfeb8);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107bfeb8);
  func_0x000107c61180();
  (*pcVar3)(0x1136a1c38,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 100c33520; end: 100c33573;  */

void FUN_100c33520(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
  func_0x000107c5c214();
  func_0x000107c61180();
  uVar1 = puRam00000001136a1c30;
  puRam00000001136a1c30 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c33574; end: 100c3391f; +[GTMSessionUploadFetcher uploadFetchersForBackgroundSessions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c33574(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c610fc();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610fc();
  lVar3 = param_1;
  func_0x000107c5d734();
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c611a4();
  func_0x000107c3feb0(lVar3);
  func_0x000107c61174();
  lVar4 = lVar3;
  func_0x000107c4080c();
  lVar8 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar8) {
        func_0x000107c61128(lVar3);
      }
      lVar14 = *(long *)(lVar13 * 8);
      func_0x000107c3f9fc();
      func_0x000107c61180();
      lVar5 = lVar14;
      func_0x000107c5206c();
      func_0x000107c61180();
      func_0x000107c61170(lVar14);
      if (lVar5 != 0) {
        func_0x000107c3d798(puVar1);
        func_0x000107c3d798(puVar2);
      }
      func_0x000107c61170(lVar5);
      lVar13 = lVar13 + 1;
    } while (lVar4 != lVar13);
    lVar4 = lVar3;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar3);
  func_0x000107c611a8(lVar3);
  func_0x000107c61170(lVar3);
  puVar6 = PTR_PTR_1126ae190;
  func_0x000107c43354();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c4080c();
  lVar4 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar4) {
        func_0x000107c61128(puVar6);
      }
      lVar13 = *(long *)((long)puVar12 * 8);
      lVar8 = lVar13;
      func_0x000107c5206c();
      func_0x000107c61180();
      if ((lVar8 != 0) && (puVar9 = puVar1, func_0x000107c40404(), ((ulong)puVar9 & 1) == 0)) {
        lVar5 = lVar13;
        func_0x000107c52070();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar14 = lVar5;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          lVar10 = lVar14;
          func_0x000107c3ebcc();
          func_0x000107c61170(lVar14);
          if ((int)lVar10 != 0) {
            lVar14 = param_1;
            func_0x000107c5d730();
            func_0x000107c61180();
            if (lVar14 == 0) {
              func_0x000107c5be2c(lVar13);
            }
            else {
              func_0x000107c3d798(puVar2);
              func_0x000107c6119c(lVar14 + _DAT_11270f730,lVar13);
              func_0x000107c6119c(lVar14 + _DAT_11270f734,lVar13);
              func_0x000107c3e2b8(lVar14);
              lVar10 = lVar13;
              func_0x000107c3ff1c(lVar13);
              func_0x000107c61180();
              func_0x000107c53638(lVar13);
              func_0x000107c61170(lVar10);
            }
            func_0x000107c61170(lVar14);
          }
        }
        func_0x000107c61170(lVar5);
      }
      func_0x000107c61170(lVar8);
      puVar12 = puVar12 + 1;
    } while (puVar7 != puVar12);
    puVar7 = puVar6;
    func_0x000107c4080c();
  }
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c611a8(puVar6);
  func_0x000107c60bd8(puVar1);
  if (lRam00000001136a1cd8 != -1) {
    FUN_100c33950();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1cd0);
  return;
}



/* Entry: 100c33920; end: 100c3394f; +[GTMSessionUploadFetcher uploadFetcherPointerArrayForBackgroundSessions] */

void FUN_100c33920(void)

{
  if (lRam00000001136a1cd8 != -1) {
    FUN_100c33950();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001136a1cd0);
  return;
}



/* Entry: 100c33950; end: 100c33963;  */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_100c33950(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  ppuVar2 = &PTR___NSConcreteGlobalBlock_1107c03d8;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_1107c03d8);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_1107c03d8);
  func_0x000107c61180();
  (*pcVar3)(0x1136a1cd8,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 100c33964; end: 100c33997;  */

void FUN_100c33964(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
  func_0x000107c5e160();
  func_0x000107c61180();
  uVar1 = puRam00000001136a1cd0;
  puRam00000001136a1cd0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c33998; end: 100c339b3;  */

void FUN_100c33998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100c339a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 100c339b4; end: 100c33aaf;  */

/* WARNING: Possible PIC construction at 0x000100c33a84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c33a88) */

void FUN_100c339b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x48;
  func_0x000107c61148(lVar1);
  func_0x000107c5b634();
  func_0x000107c5d028();
  func_0x000107c3c198(*(undefined8 *)(param_1 + 0x50),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c33ab0; end: 100c33ab7; -[SCSnapchattersFetchDataRequestFetchFriends triggerType] */

undefined8 FUN_100c33ab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c33ab8; end: 100c33e63; -[SCSnapchattersFetchRequestCoordinator _processFetchFriendsResponse:userInfoRepository:error:completionQueue:completionHandler:ignoreBlizzardLogging:triggerSource:syncType:startTime:] */

void FUN_100c33ab8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7,long param_8,byte param_9,undefined8 param_10,
                  undefined8 param_11)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined1 auStack_118 [8];
  double dStack_110;
  long lStack_108;
  byte bStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  
  dVar6 = param_1;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c6071c();
  if ((param_4 == 0) || (param_6 != 0)) {
    if ((param_9 & 1) == 0) {
      lVar2 = param_6;
      func_0x000107c4b85c(param_6);
      func_0x000107c61180();
      func_0x000107c3be30(param_2);
      func_0x000107c61170(lVar2);
    }
    if ((param_7 != 0) && (param_8 != 0)) {
      puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_190 = 0xc2000000;
      puStack_188 = &UNK_108bce46c;
      puStack_180 = &UNK_11084aaa8;
      func_0x000107c61174(param_8);
      lStack_170 = param_8;
      func_0x000107c61174(param_6);
      lStack_178 = param_6;
      func_0x00010007380c(param_7,&puStack_198);
      func_0x000107c61170(lStack_178);
      func_0x000107c61170(lStack_170);
    }
  }
  else {
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_100c33ecc;
    pcStack_88 = FUN_100c56164;
    uStack_80 = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    func_0x000107c61174(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    func_0x000107c61174(uVar5);
    func_0x000107c61144(auStack_b0,param_2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar3 = *(undefined8 *)(param_2 + 8);
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_100c351dc;
    puStack_e0 = &UNK_110ab6290;
    puStack_b8 = &uStack_a8;
    func_0x000107c61174(param_4);
    lStack_d8 = param_4;
    func_0x000107c61174(uVar5);
    uStack_d0 = uVar5;
    lStack_c8 = param_2;
    func_0x000107c61174(uVar4);
    puStack_168 = puVar1;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_100c54a80;
    puStack_150 = &UNK_110ab62c0;
    dStack_110 = param_1;
    bStack_100 = param_9;
    uStack_c0 = uVar4;
    func_0x000107c6111c(auStack_118,auStack_b0);
    func_0x000107c61174(param_10);
    uStack_148 = param_10;
    func_0x000107c61174(param_11);
    uStack_140 = param_11;
    func_0x000107c61174(param_4);
    lStack_138 = param_4;
    lStack_108 = (long)((dVar6 - param_1) * 1000.0);
    func_0x000107c61174(param_8);
    puStack_120 = &uStack_a8;
    lStack_128 = param_8;
    func_0x000107c61174(uVar4);
    uStack_130 = uVar4;
    func_0x000107c4e55c(uVar3);
    func_0x000107c61170(uStack_130);
    func_0x000107c61170(lStack_128);
    func_0x000107c61170(lStack_138);
    func_0x000107c61170(uStack_140);
    func_0x000107c61170(uStack_148);
    func_0x000107c61120(auStack_118);
    func_0x000107c61170(uStack_c0);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(lStack_d8);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c60bcc(&uStack_a8,8);
    func_0x000107c61170(uStack_80);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 100c33e64; end: 100c33ecb;  */

void FUN_100c33e64(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c60bc8(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  func_0x000107c60bc8(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 100c33ecc; end: 100c33edb;  */

void FUN_100c33ecc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100c33edc; end: 100c33f27;  */

void FUN_100c33edc(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 100c33f28; end: 100c33f87; -[SCRequestSingleCompletionTask dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c33f28(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c4fe7c(*(undefined8 *)(param_1 + _DAT_11278dd30));
  func_0x000107c4fe7c(*(undefined8 *)(param_1 + _DAT_11278dd34));
  puStack_28 = PTR_PTR_112705fe8;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100c33f88; end: 100c33fe7; -[SCRequestSingleCompletionTask .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c33fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c33fcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c33fb0) */
/* WARNING: Removing unreachable block (ram,0x000100c33fd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c33f88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278dd28,0);
  return;
}



/* Entry: 100c33fe8; end: 100c351db;  */

/* WARNING: Possible PIC construction at 0x000100c340bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c340e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c341b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c341fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3422c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c342f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c343c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c343d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3446c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34b84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c351a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c351b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c351c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c35080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c35090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c350a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c350b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c350c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c344bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c344ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c345c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3466c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c346a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c346f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3474c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3475c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c347f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c348d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3492c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c349a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c349e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c347a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c34480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c347a4) */
/* WARNING: Removing unreachable block (ram,0x000100c34914) */
/* WARNING: Removing unreachable block (ram,0x000100c34b60) */
/* WARNING: Removing unreachable block (ram,0x000100c34b28) */
/* WARNING: Removing unreachable block (ram,0x000100c34b3c) */
/* WARNING: Removing unreachable block (ram,0x000100c34afc) */
/* WARNING: Removing unreachable block (ram,0x000100c34aec) */
/* WARNING: Removing unreachable block (ram,0x000100c349ec) */
/* WARNING: Removing unreachable block (ram,0x000100c349a4) */
/* WARNING: Removing unreachable block (ram,0x000100c34a04) */
/* WARNING: Removing unreachable block (ram,0x000100c34a14) */
/* WARNING: Removing unreachable block (ram,0x000100c34b58) */
/* WARNING: Removing unreachable block (ram,0x000100c34a54) */
/* WARNING: Removing unreachable block (ram,0x000100c34a60) */
/* WARNING: Removing unreachable block (ram,0x000100c34a64) */
/* WARNING: Removing unreachable block (ram,0x000100c34a74) */
/* WARNING: Removing unreachable block (ram,0x000100c34a7c) */
/* WARNING: Removing unreachable block (ram,0x000100c349b0) */
/* WARNING: Removing unreachable block (ram,0x000100c34930) */
/* WARNING: Removing unreachable block (ram,0x000100c3495c) */
/* WARNING: Removing unreachable block (ram,0x000100c349fc) */
/* WARNING: Removing unreachable block (ram,0x000100c3497c) */
/* WARNING: Removing unreachable block (ram,0x000100c34934) */
/* WARNING: Removing unreachable block (ram,0x000100c34904) */
/* WARNING: Removing unreachable block (ram,0x000100c348d4) */
/* WARNING: Removing unreachable block (ram,0x000100c348f0) */
/* WARNING: Removing unreachable block (ram,0x000100c348e0) */
/* WARNING: Removing unreachable block (ram,0x000100c348fc) */
/* WARNING: Removing unreachable block (ram,0x000100c3489c) */
/* WARNING: Removing unreachable block (ram,0x000100c3484c) */
/* WARNING: Removing unreachable block (ram,0x000100c34888) */
/* WARNING: Removing unreachable block (ram,0x000100c347fc) */
/* WARNING: Removing unreachable block (ram,0x000100c34838) */
/* WARNING: Removing unreachable block (ram,0x000100c34784) */
/* WARNING: Removing unreachable block (ram,0x000100c347a8) */
/* WARNING: Removing unreachable block (ram,0x000100c347e8) */
/* WARNING: Removing unreachable block (ram,0x000100c34760) */
/* WARNING: Removing unreachable block (ram,0x000100c34750) */
/* WARNING: Removing unreachable block (ram,0x000100c34724) */
/* WARNING: Removing unreachable block (ram,0x000100c346f4) */
/* WARNING: Removing unreachable block (ram,0x000100c346ac) */
/* WARNING: Removing unreachable block (ram,0x000100c34670) */
/* WARNING: Removing unreachable block (ram,0x000100c34604) */
/* WARNING: Removing unreachable block (ram,0x000100c34674) */
/* WARNING: Removing unreachable block (ram,0x000100c34620) */
/* WARNING: Removing unreachable block (ram,0x000100c345cc) */
/* WARNING: Removing unreachable block (ram,0x000100c345e0) */
/* WARNING: Removing unreachable block (ram,0x000100c344f0) */
/* WARNING: Removing unreachable block (ram,0x000100c345fc) */
/* WARNING: Removing unreachable block (ram,0x000100c34540) */
/* WARNING: Removing unreachable block (ram,0x000100c34548) */
/* WARNING: Removing unreachable block (ram,0x000100c3454c) */
/* WARNING: Removing unreachable block (ram,0x000100c3455c) */
/* WARNING: Removing unreachable block (ram,0x000100c34564) */
/* WARNING: Removing unreachable block (ram,0x000100c344c0) */
/* WARNING: Removing unreachable block (ram,0x000100c350c4) */
/* WARNING: Removing unreachable block (ram,0x000100c351d4) */
/* WARNING: Removing unreachable block (ram,0x000100c350b4) */
/* WARNING: Removing unreachable block (ram,0x000100c350a4) */
/* WARNING: Removing unreachable block (ram,0x000100c35094) */
/* WARNING: Removing unreachable block (ram,0x000100c35084) */
/* WARNING: Removing unreachable block (ram,0x000100c351c4) */
/* WARNING: Removing unreachable block (ram,0x000100c3507c) */
/* WARNING: Removing unreachable block (ram,0x000100c351b4) */
/* WARNING: Removing unreachable block (ram,0x000100c351a4) */
/* WARNING: Removing unreachable block (ram,0x000100c34d64) */
/* WARNING: Removing unreachable block (ram,0x000100c35194) */
/* WARNING: Removing unreachable block (ram,0x000100c34d10) */
/* WARNING: Removing unreachable block (ram,0x000100c34d54) */
/* WARNING: Removing unreachable block (ram,0x000100c34d30) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x000100c34d00) */
/* WARNING: Removing unreachable block (ram,0x000100c34cf0) */
/* WARNING: Removing unreachable block (ram,0x000100c34ce0) */
/* WARNING: Removing unreachable block (ram,0x000100c34ca0) */
/* WARNING: Removing unreachable block (ram,0x000100c34cac) */
/* WARNING: Removing unreachable block (ram,0x000100c34c90) */
/* WARNING: Removing unreachable block (ram,0x000100c34c40) */
/* WARNING: Removing unreachable block (ram,0x000100c34c44) */
/* WARNING: Removing unreachable block (ram,0x000100c34c98) */
/* WARNING: Removing unreachable block (ram,0x000100c34c50) */
/* WARNING: Removing unreachable block (ram,0x000100c34b98) */
/* WARNING: Removing unreachable block (ram,0x000100c34cd0) */
/* WARNING: Removing unreachable block (ram,0x000100c34ba8) */
/* WARNING: Removing unreachable block (ram,0x000100c34cc8) */
/* WARNING: Removing unreachable block (ram,0x000100c34be0) */
/* WARNING: Removing unreachable block (ram,0x000100c34be8) */
/* WARNING: Removing unreachable block (ram,0x000100c34bec) */
/* WARNING: Removing unreachable block (ram,0x000100c34bfc) */
/* WARNING: Removing unreachable block (ram,0x000100c34c04) */
/* WARNING: Removing unreachable block (ram,0x000100c34b88) */
/* WARNING: Removing unreachable block (ram,0x000100c34b78) */
/* WARNING: Removing unreachable block (ram,0x000100c34470) */
/* WARNING: Removing unreachable block (ram,0x000100c34b68) */
/* WARNING: Removing unreachable block (ram,0x000100c34444) */
/* WARNING: Removing unreachable block (ram,0x000100c34448) */
/* WARNING: Removing unreachable block (ram,0x000100c34434) */
/* WARNING: Removing unreachable block (ram,0x000100c343d4) */
/* WARNING: Removing unreachable block (ram,0x000100c343c4) */
/* WARNING: Removing unreachable block (ram,0x000100c34388) */
/* WARNING: Removing unreachable block (ram,0x000100c34334) */
/* WARNING: Removing unreachable block (ram,0x000100c3438c) */
/* WARNING: Removing unreachable block (ram,0x000100c34350) */
/* WARNING: Removing unreachable block (ram,0x000100c342fc) */
/* WARNING: Removing unreachable block (ram,0x000100c34310) */
/* WARNING: Removing unreachable block (ram,0x000100c34230) */
/* WARNING: Removing unreachable block (ram,0x000100c3432c) */
/* WARNING: Removing unreachable block (ram,0x000100c34280) */
/* WARNING: Removing unreachable block (ram,0x000100c34288) */
/* WARNING: Removing unreachable block (ram,0x000100c3428c) */
/* WARNING: Removing unreachable block (ram,0x000100c3429c) */
/* WARNING: Removing unreachable block (ram,0x000100c342a4) */
/* WARNING: Removing unreachable block (ram,0x000100c34200) */
/* WARNING: Removing unreachable block (ram,0x000100c341b4) */
/* WARNING: Removing unreachable block (ram,0x000100c341c4) */
/* WARNING: Removing unreachable block (ram,0x000100c343e0) */
/* WARNING: Removing unreachable block (ram,0x000100c34474) */
/* WARNING: Removing unreachable block (ram,0x000100c3441c) */
/* WARNING: Removing unreachable block (ram,0x000100c341d4) */
/* WARNING: Removing unreachable block (ram,0x000100c3418c) */
/* WARNING: Removing unreachable block (ram,0x000100c340ec) */
/* WARNING: Removing unreachable block (ram,0x000100c340c0) */
/* WARNING: Removing unreachable block (ram,0x000100c34484) */
/* WARNING: Removing unreachable block (ram,0x000100c3448c) */
/* WARNING: Removing unreachable block (ram,0x000100c3476c) */
/* WARNING: Removing unreachable block (ram,0x000100c34788) */
/* WARNING: Removing unreachable block (ram,0x000100c34780) */
/* WARNING: Removing unreachable block (ram,0x000100c34494) */

void FUN_100c33fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61160();
  func_0x000100aaeaa4(param_1,0);
  func_0x000107c61180();
  func_0x000107c5cb78();
  func_0x000107c61180();
  FUN_100c3522c(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c351dc; end: 100c3522b;  */

void FUN_100c351dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_100c33fe8(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48),
                *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),*(undefined8 *)(param_1 + 0x38));
  func_0x000107c61180();
  lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c3522c; end: 100c3530f;  */

uint FUN_100c3522c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  lVar1 = param_1;
  func_0x000107c43af0();
  if (lVar1 == -0x2f43367f) {
    lVar1 = param_2;
    func_0x000107c4adac();
    if (lVar1 == 0) {
      uVar3 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x000107c43aec(param_1);
      func_0x000107c61180();
      lVar2 = param_2;
      func_0x000107c49d0c(param_2);
      uVar3 = (uint)lVar2 ^ 1;
      func_0x000107c61170(lVar1);
    }
  }
  else {
    uVar3 = (uint)(lVar1 == 0x30228f);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 100c35310; end: 100c353ef;  */

long FUN_100c35310(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000100aea4ac(param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    (**(code **)(param_1 + 0x28))(param_2);
  }
  func_0x000107c61170(param_2);
  return lVar1;
}



/* Entry: 100c353f0; end: 100c35407;  */

void FUN_100c353f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf32ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_caseInsensitiveCompare__1125aa560);
  return;
}



/* Entry: 100c35408; end: 100c35447;  */

void FUN_100c35408(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c5d984(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c35448; end: 100c3546f;  */

void FUN_100c35448(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 100c35470; end: 100c354c3; -[SCSnapchattersGrapheneLogger logFriendsSyncFriendsReceived:] */

void FUN_100c35470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126db0d8;
  func_0x000107c43ae4(PTR_PTR_1126db0d8);
  func_0x000107c61180();
  func_0x000107c3d708(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c354c4; end: 100c354ef; +[SCGrapheneSnapchattersMetric friendsReceived] */

void FUN_100c354c4(void)

{
  func_0x000107c610f4(PTR_PTR_1126db0d8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c354f0; end: 100c35907;  */

/* WARNING: Possible PIC construction at 0x000100c35560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c355b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c356e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c356f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c35708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c35650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c35690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c3576c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c357b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c35770) */
/* WARNING: Removing unreachable block (ram,0x000100c35820) */
/* WARNING: Removing unreachable block (ram,0x000100c35774) */
/* WARNING: Removing unreachable block (ram,0x000100c35694) */
/* WARNING: Removing unreachable block (ram,0x000100c35654) */
/* WARNING: Removing unreachable block (ram,0x000100c35724) */
/* WARNING: Removing unreachable block (ram,0x000100c35660) */
/* WARNING: Removing unreachable block (ram,0x000100c3570c) */
/* WARNING: Removing unreachable block (ram,0x000100c356fc) */
/* WARNING: Removing unreachable block (ram,0x000100c355bc) */
/* WARNING: Removing unreachable block (ram,0x000100c357fc) */
/* WARNING: Removing unreachable block (ram,0x000100c356ec) */
/* WARNING: Removing unreachable block (ram,0x000100c355c8) */
/* WARNING: Removing unreachable block (ram,0x000100c35564) */
/* WARNING: Removing unreachable block (ram,0x000100c35568) */
/* WARNING: Removing unreachable block (ram,0x000100c35608) */
/* WARNING: Removing unreachable block (ram,0x000100c35614) */
/* WARNING: Removing unreachable block (ram,0x000100c3574c) */
/* WARNING: Removing unreachable block (ram,0x000100c3561c) */
/* WARNING: Removing unreachable block (ram,0x000100c35578) */
/* WARNING: Removing unreachable block (ram,0x000100c35624) */
/* WARNING: Removing unreachable block (ram,0x000100c3557c) */
/* WARNING: Removing unreachable block (ram,0x000100c356ac) */
/* WARNING: Removing unreachable block (ram,0x000100c35584) */
/* WARNING: Removing unreachable block (ram,0x000100c356f4) */
/* WARNING: Removing unreachable block (ram,0x000100c3558c) */
/* WARNING: Removing unreachable block (ram,0x000100c357b8) */
/* WARNING: Removing unreachable block (ram,0x000100c356e4) */

void FUN_100c354f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5d984(param_2);
  func_0x000107c61180();
  func_0x000107c4a0ec(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c35908; end: 100c3594f;  */

undefined8 FUN_100c35908(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000100aea4ac(param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c49820();
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 100c35950; end: 100c36047;  */

void FUN_100c35950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 uStack_90;
  
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126c2820;
  FUN_100c36048(PTR_PTR_1126c2820,param_4);
  func_0x000107c61180();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_3;
    func_0x000107c4d3e4(param_3);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c4d2ec(param_3);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c4d3e4(param_3);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c420d4(param_3);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c4a1ec();
    puVar1[0x14] = (char)uVar2;
    uVar2 = param_3;
    func_0x000107c43a60(param_3);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000100504554();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c3e978(param_3);
    func_0x000107c61180();
    uVar3 = param_3;
    func_0x000107c3ea1c(param_3);
    func_0x000107c61180();
    uVar4 = param_3;
    func_0x000107c3ea10(param_3);
    func_0x000107c61180();
    uVar5 = param_3;
    func_0x000107c3e984(param_3);
    func_0x000107c61180();
    uVar6 = param_3;
    func_0x000107c3e988(param_3);
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c3e5e4();
    func_0x000107c61180();
    uVar8 = param_3;
    func_0x000107c42760(param_3);
    func_0x000107c61180();
    uVar9 = uVar2;
    FUN_100c3702c(uVar2,uVar3,uVar4,uVar5,uVar7,uVar8);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c439a8(param_4);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5c3a4();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c3e1d0();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c49aac();
    uVar6 = param_4;
    func_0x000107c439a8(param_4);
    func_0x000107c61180();
    func_0x000107c4aa00();
    uVar7 = param_4;
    func_0x000107c439a8(param_4);
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c5c3a4();
    func_0x000107c61180();
    uVar9 = uVar8;
    func_0x000107c3e1d0();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c5b3fc();
    uVar11 = param_3;
    FUN_100c37268(param_1,param_3,uVar5,uVar10,param_5);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c5b37c(param_3);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c4ea38();
    *(int *)(puVar1 + 0x18) = (int)uVar2;
    uVar2 = param_3;
    func_0x000107c4ebc8(param_3);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c5b388(param_3);
    func_0x000107c61180();
    uVar3 = uVar2;
    FUN_100c38020();
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    FUN_100c3825c(param_3);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c4eba8(param_3);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    FUN_100c38598(param_3);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    FUN_100c38720(param_3);
    func_0x000107c61180();
    func_0x000107c61198(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = param_3;
    func_0x000107c499e0();
    puVar1[0x16] = (char)uVar2;
    puVar1[0x15] = 0;
    uVar2 = param_3;
    func_0x000107c45024();
    if ((int)uVar2 != 0) {
      uVar2 = param_4;
      func_0x000107c452e8(param_4);
      func_0x000107c61180();
      func_0x000107c30848(auStack_a8,uVar2);
      func_0x000107c61170(uVar2);
      auStack_a8[0] = 0;
      uStack_90 = 1;
      puVar12 = auStack_a8;
      func_0x000107c3084c(puVar12);
      func_0x000107c61180();
      func_0x000107c61170(uStack_a0);
      func_0x000107c61198(puVar1);
      func_0x000107c61170(puVar12);
    }
    func_0x000107c5c28c(param_2);
    func_0x000107c611b0();
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c36048; end: 100c360bb;  */

void FUN_100c36048(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c61168(param_1);
  lVar1 = param_2;
  FUN_100c360bc();
  func_0x000107c61180();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100c360bc; end: 100c369b7;  */

void FUN_100c360bc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174();
  if (param_1 != (undefined *)0x0) {
    puVar10 = param_1;
    func_0x000107c50940();
    if ((long)puVar10 < 0) {
      puVar10 = param_1;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar10 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126b04a8;
        func_0x000107c421f0();
        func_0x000107c61180();
        puVar1 = puVar10;
        func_0x000107c41220();
        func_0x000107c61170(puVar10);
        func_0x0001001b9e08(puVar1,&UNK_10f50c2a7);
        puVar10 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_100c367b0;
        puVar10 = param_1;
        func_0x000107c5d984(param_1);
        func_0x000107c61180();
        func_0x000107c61174();
        puVar2 = puVar10;
        func_0x000107c61178(puVar10);
        func_0x000107c3ac4c();
        func_0x000107c61338(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar10);
        puVar10 = puVar1;
        func_0x000107c613a8();
        if ((int)puVar10 == 100) {
          puVar2 = puVar1;
          func_0x000107c61358(puVar1,0);
          puVar10 = PTR_PTR_1126b04a8;
          func_0x000107c421f0();
          func_0x000107c61180();
          func_0x000107c61158(PTR_PTR_1126b15c8);
          func_0x000107c6134c(puVar1,1);
          func_0x000107c61350(puVar1,1);
          puVar3 = puVar10;
          func_0x000107c4d9b8();
          func_0x000107c61180();
          func_0x000107c61170(param_1);
          func_0x000107c61170(puVar10);
          func_0x000107c613a4(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_100c367a8;
          puVar10 = PTR_PTR_1126c2820;
          func_0x000107c610f4(PTR_PTR_1126c2820);
          puStack_70 = puVar3;
          func_0x000107c5d984();
          func_0x000107c61180();
          puStack_78 = puVar3;
          func_0x000107c5db08();
          func_0x000107c61180();
          puStack_80 = puVar3;
          func_0x000107c42120();
          func_0x000107c61180();
          puVar1 = puVar3;
          func_0x000107c4a1e8(puVar3);
          puStack_88 = puVar3;
          func_0x000107c43a60();
          func_0x000107c61180();
          puStack_90 = puVar3;
          func_0x000107c3e9e8();
          func_0x000107c61180();
          puStack_98 = puVar3;
          func_0x000107c4252c();
          func_0x000107c61180();
          puVar4 = puVar3;
          func_0x000107c49ac4();
          puStack_a0 = puVar3;
          func_0x000107c439a8();
          func_0x000107c61180();
          puStack_a8 = puVar3;
          func_0x000107c452e8();
          func_0x000107c61180();
          puStack_b0 = puVar3;
          func_0x000107c5c3fc();
          func_0x000107c61180();
          puStack_b8 = puVar3;
          func_0x000107c40328();
          func_0x000107c61180();
          puStack_c0 = puVar3;
          func_0x000107c5b37c();
          func_0x000107c61180();
          puStack_c8 = puVar3;
          func_0x000107c4d2ec();
          func_0x000107c61180();
          puStack_d0 = puVar3;
          func_0x000107c4ad90();
          func_0x000107c61180();
          func_0x000107c4ea34();
          puStack_d8 = puVar3;
          func_0x000107c4ebc8();
          func_0x000107c61180();
          puVar5 = puVar3;
          func_0x000107c40cdc();
          func_0x000107c61180();
          puVar6 = puVar3;
          func_0x000107c3d000();
          func_0x000107c61180();
          puVar7 = puVar3;
          func_0x000107c4eba8();
          func_0x000107c61180();
          puVar8 = puVar3;
          func_0x000107c4ea60();
          func_0x000107c61180();
          puVar9 = puVar3;
          func_0x000107c51628();
          func_0x000107c61180();
          func_0x000107c499dc();
          FUN_100c36ac8(puVar10,puVar2,puStack_70,puStack_78,puStack_80,puVar1,puStack_88,puStack_90
                        ,puStack_98,(char)puVar4);
          goto LAB_100c36388;
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x000107c50940(param_1);
      puVar10 = PTR_PTR_1126b04a8;
      func_0x000107c421f0();
      func_0x000107c61180();
      func_0x000107c61158(PTR_PTR_1126b15c8);
      puVar3 = puVar10;
      func_0x000107c4d9b8();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126c2820;
        func_0x000107c610f4();
        puStack_70 = puVar3;
        func_0x000107c5d984();
        func_0x000107c61180();
        puStack_78 = puVar3;
        func_0x000107c5db08();
        func_0x000107c61180();
        puStack_80 = puVar3;
        func_0x000107c42120();
        func_0x000107c61180();
        puVar2 = puVar3;
        func_0x000107c4a1e8(puVar3);
        puStack_88 = puVar3;
        func_0x000107c43a60();
        func_0x000107c61180();
        puStack_90 = puVar3;
        func_0x000107c3e9e8();
        func_0x000107c61180();
        puStack_98 = puVar3;
        func_0x000107c4252c();
        func_0x000107c61180();
        puVar4 = puVar3;
        func_0x000107c49ac4();
        puStack_a0 = puVar3;
        func_0x000107c439a8();
        func_0x000107c61180();
        puStack_a8 = puVar3;
        func_0x000107c452e8();
        func_0x000107c61180();
        puStack_b0 = puVar3;
        func_0x000107c5c3fc();
        func_0x000107c61180();
        puStack_b8 = puVar3;
        func_0x000107c40328();
        func_0x000107c61180();
        puStack_c0 = puVar3;
        func_0x000107c5b37c();
        func_0x000107c61180();
        puStack_c8 = puVar3;
        func_0x000107c4d2ec();
        func_0x000107c61180();
        puStack_d0 = puVar3;
        func_0x000107c4ad90();
        func_0x000107c61180();
        func_0x000107c4ea34();
        puStack_d8 = puVar3;
        func_0x000107c4ebc8();
        func_0x000107c61180();
        puVar5 = puVar3;
        func_0x000107c40cdc();
        func_0x000107c61180();
        puVar6 = puVar3;
        func_0x000107c3d000();
        func_0x000107c61180();
        puVar7 = puVar3;
        func_0x000107c4eba8();
        func_0x000107c61180();
        puVar8 = puVar3;
        func_0x000107c4ea60();
        func_0x000107c61180();
        puVar9 = puVar3;
        func_0x000107c51628();
        func_0x000107c61180();
        func_0x000107c499dc();
        FUN_100c36ac8(puVar10,puVar1,puStack_70,puStack_78,puStack_80,puVar2,puStack_88,puStack_90,
                      puStack_98,(char)puVar4);
LAB_100c36388:
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puStack_d8);
        func_0x000107c61170(puStack_d0);
        func_0x000107c61170(puStack_c8);
        func_0x000107c61170(puStack_c0);
        func_0x000107c61170(puStack_b8);
        func_0x000107c61170(puStack_b0);
        func_0x000107c61170(puStack_a8);
        func_0x000107c61170(puStack_a0);
        func_0x000107c61170(puStack_98);
        func_0x000107c61170(puStack_90);
        func_0x000107c61170(puStack_88);
        func_0x000107c61170(puStack_80);
        func_0x000107c61170(puStack_78);
        func_0x000107c61170(puStack_70);
        param_1 = puVar3;
        goto LAB_100c367b0;
      }
LAB_100c367a8:
      param_1 = (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_100c367b0:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 100c369b8; end: 100c369c7; -[SCSnapchatter displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c369b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912a8);
}



/* Entry: 100c369c8; end: 100c369d7; -[SCSnapchatter isPopular] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100c369c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127912ac);
}



/* Entry: 100c369d8; end: 100c369e7; -[SCSnapchatter friendmojis] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c369d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912b0);
}



/* Entry: 100c369e8; end: 100c369f7; -[SCSnapchatter bitmojiInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c369e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912b4);
}



/* Entry: 100c369f8; end: 100c36a07; -[SCSnapchatter emojiSymbol] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c369f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912b8);
}



/* Entry: 100c36a08; end: 100c36a17; -[SCSnapchatter incomingFriendInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c36a08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912c4);
}



/* Entry: 100c36a18; end: 100c36a27; -[SCSnapchatter suggestedSnapchatterInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c36a18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912c8);
}



/* Entry: 100c36a28; end: 100c36a37; -[SCSnapchatter contactSnapchatterInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c36a28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912cc);
}



/* Entry: 100c36a38; end: 100c36a47; -[SCSnapchatter legacyUsername] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c36a38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912d8);
}



/* Entry: 100c36a48; end: 100c36a57; -[SCSnapchatter plusBadgeVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100c36a48(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1127912dc);
}



/* Entry: 100c36a58; end: 100c36a67; -[SCSnapchatter postViewEmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c36a58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912e0);
}



/* Entry: 100c36a68; end: 100c36a77; -[SCSnapchatter creatorSnapchatterInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c36a68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912e4);
}



/* Entry: 100c36a78; end: 100c36a87; -[SCSnapchatter actionmojiInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c36a78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912e8);
}



/* Entry: 100c36a88; end: 100c36a97; -[SCSnapchatter postSendEmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c36a88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912ec);
}



/* Entry: 100c36a98; end: 100c36aa7; -[SCSnapchatter plusInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c36a98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912f0);
}



/* Entry: 100c36aa8; end: 100c36ab7; -[SCSnapchatter saturnInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c36aa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912f4);
}



/* Entry: 100c36ab8; end: 100c36ac7; -[SCSnapchatter isAiChatbot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100c36ab8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127912f8);
}



/* Entry: 100c36ac8; end: 100c36fe3;  */

long * FUN_100c36ac8(long param_1,long param_2,long param_3,long param_4,long param_5,
                    undefined1 param_6,long param_7,long param_8,long param_9,undefined1 param_10,
                    undefined4 param_11,long param_12,long param_13,long param_14,long param_15,
                    long param_16,long param_17,long param_18,undefined4 param_19,
                    undefined4 param_20,long param_21,long param_22,long param_23,long param_24,
                    long param_25,long param_26,undefined1 param_27)

{
  long lVar1;
  long *plVar2;
  long lStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  if (param_1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    puStack_70 = PTR_PTR_1126fddf0;
    plVar2 = &lStack_78;
    lStack_78 = param_1;
    func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
    if (plVar2 != (long *)0x0) {
      plVar2[1] = param_2;
      func_0x000107c61174(param_3);
      lVar1 = plVar2[4];
      plVar2[4] = param_3;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_4);
      lVar1 = plVar2[5];
      plVar2[5] = param_4;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_5);
      lVar1 = plVar2[6];
      plVar2[6] = param_5;
      func_0x000107c61170(lVar1);
      *(undefined1 *)((long)plVar2 + 0x14) = param_6;
      func_0x000107c61174(param_7);
      lVar1 = plVar2[7];
      plVar2[7] = param_7;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_8);
      lVar1 = plVar2[8];
      plVar2[8] = param_8;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_9);
      lVar1 = plVar2[9];
      plVar2[9] = param_9;
      func_0x000107c61170(lVar1);
      *(undefined1 *)((long)plVar2 + 0x15) = param_10;
      func_0x000107c61174(param_12);
      lVar1 = plVar2[10];
      plVar2[10] = param_12;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_13);
      lVar1 = plVar2[0xb];
      plVar2[0xb] = param_13;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_14);
      lVar1 = plVar2[0xc];
      plVar2[0xc] = param_14;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_15);
      lVar1 = plVar2[0xd];
      plVar2[0xd] = param_15;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_16);
      lVar1 = plVar2[0xe];
      plVar2[0xe] = param_16;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_17);
      lVar1 = plVar2[0xf];
      plVar2[0xf] = param_17;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_18);
      lVar1 = plVar2[0x10];
      plVar2[0x10] = param_18;
      func_0x000107c61170(lVar1);
      *(undefined4 *)(plVar2 + 3) = param_19;
      func_0x000107c61174(param_21);
      lVar1 = plVar2[0x11];
      plVar2[0x11] = param_21;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_22);
      lVar1 = plVar2[0x12];
      plVar2[0x12] = param_22;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_23);
      lVar1 = plVar2[0x13];
      plVar2[0x13] = param_23;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_24);
      lVar1 = plVar2[0x14];
      plVar2[0x14] = param_24;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_25);
      lVar1 = plVar2[0x15];
      plVar2[0x15] = param_25;
      func_0x000107c61170(lVar1);
      func_0x000107c61174(param_26);
      lVar1 = plVar2[0x16];
      plVar2[0x16] = param_26;
      func_0x000107c61170(lVar1);
      *(undefined1 *)((long)plVar2 + 0x16) = param_27;
    }
  }
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return plVar2;
}



/* Entry: 100c36fe4; end: 100c3702b;  */

undefined8 FUN_100c36fe4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000100aea4ac(param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c3ebcc();
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 100c3702c; end: 100c371af;  */

void FUN_100c3702c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  lVar1 = param_1;
  func_0x000107c4adac();
  if ((lVar1 == 0) && (lVar1 = param_2, func_0x000107c4adac(), lVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_6;
    func_0x000107c4adac();
    if (lVar1 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x000107c45920();
    }
    puVar3 = PTR_PTR_1126b14b8;
    func_0x000107c610f4(PTR_PTR_1126b14b8);
    func_0x000107c4598c();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c371b0; end: 100c371b7; -[SCSnapchattersMutualFriendInfo isBestFriend] */

undefined1 FUN_100c371b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100c371b8; end: 100c371bf; -[SCSnapchattersFriendInfo lastInteractionTimestamp] */

undefined8 FUN_100c371b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c371c0; end: 100c371eb;  */

void FUN_100c371c0(long param_1)

{
  func_0x000107c3b2c4(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100c371e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 100c371ec; end: 100c3725f; -[SCLocationManager _createLocationManagerIfNecessary] */

/* WARNING: Possible PIC construction at 0x000100c37240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c37244) */

void FUN_100c371ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    return;
  }
  func_0x000107c5cd3c(PTR_PTR_1126bc310,param_2,&PTR____CFConstantStringClassReference_110df17b8);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
  func_0x000107c610fc();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100c37260; end: 100c37267; -[SCSnapchattersMutualFriendInfo snapStreakCount] */

undefined4 FUN_100c37260(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 100c37268; end: 100c376d3;  */

void FUN_100c37268(undefined8 param_1,undefined *param_2,undefined1 param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  double dStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  double dStack_70;
  undefined2 uStack_63;
  undefined1 uStack_61;
  
  puVar7 = auStack_b0;
  func_0x000107c61174();
  FUN_100c376d4(auStack_b0,0);
  puVar3 = param_2;
  func_0x000107c5d088();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c4c0a8();
  dStack_90 = (double)(long)puVar4 / 1000.0;
  auStack_b0[0] = 0;
  func_0x000107c61170(puVar3);
  puVar3 = param_2;
  func_0x000107c3f434();
  auStack_b0[0] = 0;
  uStack_88 = SUB81(puVar3,0);
  puVar3 = param_2;
  func_0x000107c4a530();
  uStack_87 = SUB81(puVar3,0);
  auStack_b0[0] = 0;
  puVar3 = param_2;
  uStack_80 = param_1;
  func_0x000107c4a584();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3ebcc();
  auStack_b0[0] = 0;
  uStack_78 = SUB81(puVar4,0);
  func_0x000107c61170(puVar3);
  puVar3 = param_2;
  func_0x000107c499e0();
  auStack_b0[0] = 0;
  uStack_77 = SUB81(puVar3,0);
  puVar3 = param_2;
  func_0x000107c4b660();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c4c0a8();
  dStack_70 = (double)(long)puVar4 / 1000.0;
  auStack_b0[0] = 0;
  func_0x000107c61170(puVar3);
  puVar4 = param_2;
  func_0x000107c5d104();
  puVar3 = PTR_PTR_1126bb6d0;
  iVar2 = (int)puVar4;
  puVar4 = param_2;
  if (iVar2 == 0) {
    plVar5 = &lStack_a8;
    FUN_100c378bc();
    puVar3 = param_2;
    func_0x000107c3e934(param_2);
    func_0x000107c61180();
    puVar6 = puVar3;
    FUN_100c37ae0();
    func_0x000107c61180();
    *(undefined1 *)plVar5 = 0;
    FUN_100c37a74(&uStack_63,puVar6);
    *(undefined2 *)((long)plVar5 + 1) = uStack_63;
    *(undefined1 *)((long)plVar5 + 3) = uStack_61;
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
    plVar5 = &lStack_a8;
    FUN_100c378bc();
    *(undefined1 *)plVar5 = 0;
    *(undefined4 *)((long)plVar5 + 4) = param_4;
    plVar5 = &lStack_a8;
    FUN_100c378bc();
    *(undefined1 *)plVar5 = 0;
    *(undefined1 *)(plVar5 + 1) = param_3;
    plVar5 = &lStack_a8;
    FUN_100c378bc();
    puVar3 = param_2;
    func_0x000107c50870();
    func_0x000107c61180();
    puVar6 = puVar3;
    func_0x000107c4c0a8();
    *(undefined1 *)plVar5 = 0;
    plVar5[2] = (long)((double)(long)puVar6 / 1000.0);
    func_0x000107c61170(puVar3);
    plVar5 = &lStack_a8;
    FUN_100c378bc();
    puVar3 = param_2;
    func_0x000107c49ae8();
    func_0x000107c61180();
    puVar6 = puVar3;
    func_0x000107c3ebcc();
    *(undefined1 *)plVar5 = 0;
    *(char *)(plVar5 + 3) = (char)puVar6;
    func_0x000107c61170(puVar3);
    plVar5 = &lStack_a8;
    FUN_100c378bc();
    puVar3 = param_2;
    func_0x000107c49abc();
    *(undefined1 *)plVar5 = 0;
    *(char *)((long)plVar5 + 0x19) = (char)puVar3;
    plVar5 = &lStack_a8;
    FUN_100c378bc();
    puVar3 = param_2;
    func_0x000107c3f03c();
    func_0x000107c61180();
    puVar6 = puVar3;
    func_0x000107c49804();
    *(undefined1 *)plVar5 = 0;
    *(int *)((long)plVar5 + 0x1c) = (int)puVar6;
    func_0x000107c61170(puVar3);
    plVar5 = &lStack_a8;
    FUN_100c378bc();
    puVar3 = param_2;
    func_0x000107c422fc();
    func_0x000107c61180();
    puVar6 = puVar3;
    func_0x000107c49804();
    *(undefined1 *)plVar5 = 0;
    *(int *)((long)plVar5 + 0x2c) = (int)puVar6;
    func_0x000107c61170(puVar3);
    plVar5 = &lStack_a8;
    FUN_100c378bc();
    func_0x000107c3f464();
    func_0x000107c61180();
    puVar3 = puVar4;
    func_0x000107c3ebcc();
    *(undefined1 *)plVar5 = 0;
    *(char *)(plVar5 + 6) = (char)puVar3;
  }
  else {
    if (iVar2 == 1) {
      puVar4 = PTR_PTR_1126db228;
      func_0x000107c61160(PTR_PTR_1126db228);
      func_0x000107c4e4dc(puVar3);
      func_0x000107c61180();
      func_0x000107c30844(auStack_b0,puVar3);
    }
    else {
      if (iVar2 != 6) goto LAB_100c375d4;
      plVar5 = &lStack_a8;
      func_0x000107c30830();
      func_0x000107c3e934(param_2);
      func_0x000107c61180();
      puVar3 = puVar4;
      FUN_100c37ae0();
      func_0x000107c61180();
      *(undefined1 *)plVar5 = 0;
      FUN_100c37a74(&uStack_63,puVar3);
      *(undefined2 *)((long)plVar5 + 1) = uStack_63;
      *(undefined1 *)((long)plVar5 + 3) = uStack_61;
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar4);
LAB_100c375d4:
  FUN_100c37c3c(auStack_b0);
  func_0x000107c61180();
  lVar1 = lStack_98;
  lStack_98 = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  lVar1 = lStack_a0;
  lStack_a0 = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  lVar1 = lStack_a8;
  lStack_a8 = 0;
  if (lVar1 != 0) {
    func_0x000107c60e14();
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100c376d4; end: 100c377cf;  */

long FUN_100c376d4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  *(bool *)param_2 = param_3 == 0;
  lVar1 = param_3;
  func_0x000107c5c3a4(param_3);
  func_0x000107c61180();
  FUN_100c377d0(param_2 + 8,lVar1);
  func_0x000107c61170(lVar1);
  func_0x000107c3d6c0(param_3);
  *(undefined8 *)(param_2 + 0x20) = param_1;
  lVar1 = param_3;
  func_0x000107c3f430();
  *(char *)(param_2 + 0x28) = (char)lVar1;
  lVar1 = param_3;
  func_0x000107c4a528();
  *(char *)(param_2 + 0x29) = (char)lVar1;
  func_0x000107c4aa00(param_3);
  *(undefined8 *)(param_2 + 0x30) = param_1;
  lVar1 = param_3;
  func_0x000107c4a584();
  *(char *)(param_2 + 0x38) = (char)lVar1;
  lVar1 = param_3;
  func_0x000107c499dc();
  *(char *)(param_2 + 0x39) = (char)lVar1;
  func_0x000107c4b65c(param_3);
  *(undefined8 *)(param_2 + 0x40) = param_1;
  func_0x000107c61170(param_3);
  return param_2;
}



/* Entry: 100c377d0; end: 100c378bb;  */

undefined8 * FUN_100c377d0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 *puStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  param_1[2] = 0;
  uStack_40 = 0xc0000000;
  puStack_38 = &UNK_10b656254;
  puStack_30 = &UNK_110d274d8;
  puStack_70 = puStack_48;
  uStack_68 = 0xc0000000;
  puStack_60 = &UNK_10b6562d4;
  puStack_58 = &UNK_110d274f8;
  puStack_98 = puStack_48;
  uStack_90 = 0xc0000000;
  pcStack_88 = FUN_100c4d214;
  puStack_80 = &UNK_110d27518;
  puStack_78 = param_1;
  puStack_50 = param_1;
  puStack_28 = param_1;
  func_0x000107c4c628(param_2,param_2,&puStack_48,&puStack_70,&puStack_98);
  return param_1;
}



/* Entry: 100c378bc; end: 100c3793f;  */

long FUN_100c378bc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      func_0x000107c60e14();
    }
    lVar2 = param_1[1];
    param_1[1] = 0;
    if (lVar2 != 0) {
      func_0x000107c60e14();
    }
    lVar2 = 0x38;
    func_0x000107c60e20();
    FUN_100c37940();
    lVar1 = param_1[2];
    param_1[2] = lVar2;
    if (lVar1 != 0) {
      func_0x000107c60e14();
      lVar2 = param_1[2];
    }
  }
  return lVar2;
}



/* Entry: 100c37940; end: 100c37a73;  */

long FUN_100c37940(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  *(bool *)param_2 = param_3 == 0;
  lVar1 = param_3;
  func_0x000107c3e934(param_3);
  func_0x000107c61180();
  FUN_100c37a74(param_2 + 1,lVar1);
  func_0x000107c61170(lVar1);
  lVar1 = param_3;
  func_0x000107c5b3fc();
  *(int *)(param_2 + 4) = (int)lVar1;
  lVar1 = param_3;
  func_0x000107c49aac();
  *(char *)(param_2 + 8) = (char)lVar1;
  func_0x000107c3d958(param_3);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  lVar1 = param_3;
  func_0x000107c49ae8();
  *(char *)(param_2 + 0x18) = (char)lVar1;
  lVar1 = param_3;
  func_0x000107c49ab8();
  *(char *)(param_2 + 0x19) = (char)lVar1;
  lVar1 = param_3;
  func_0x000107c3f03c();
  *(int *)(param_2 + 0x1c) = (int)lVar1;
  lVar1 = param_3;
  func_0x000107c5085c();
  func_0x000107c61180();
  *(bool *)(param_2 + 0x20) = lVar1 == 0;
  lVar2 = lVar1;
  func_0x000107c4f898();
  *(int *)(param_2 + 0x24) = (int)lVar2;
  func_0x000107c61170(lVar1);
  lVar1 = param_3;
  func_0x000107c4a1b0();
  *(char *)(param_2 + 0x28) = (char)lVar1;
  lVar1 = param_3;
  func_0x000107c42300();
  *(int *)(param_2 + 0x2c) = (int)lVar1;
  lVar1 = param_3;
  func_0x000107c3f464();
  *(char *)(param_2 + 0x30) = (char)lVar1;
  func_0x000107c61170(param_3);
  return param_2;
}



/* Entry: 100c37a74; end: 100c37adf;  */

long FUN_100c37a74(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  *(bool *)param_1 = param_2 == 0;
  lVar1 = param_2;
  func_0x000107c4d118();
  *(char *)(param_1 + 1) = (char)lVar1;
  lVar1 = param_2;
  func_0x000107c41378();
  *(char *)(param_1 + 2) = (char)lVar1;
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 100c37ae0; end: 100c37c3b;  */

void FUN_100c37ae0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126d78b8;
    func_0x000107c610f4(PTR_PTR_1126d78b8);
    lVar1 = param_1;
    func_0x000107c3ff54(param_1,param_2,&PTR____CFConstantStringClassReference_110db3638);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c4d9a4();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c49804();
    lVar4 = param_1;
    func_0x000107c3ff54(param_1,param_2,&PTR____CFConstantStringClassReference_110db3638);
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c4d9a4();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c49804();
    func_0x000107c47854(puVar7,param_2,(uint)lVar3 & 0xff,(uint)lVar6 & 0xff);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100c37c3c; end: 100c37f23;  */

void FUN_100c37c3c(char *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  if (*param_1 == '\x01') {
    pcVar9 = param_1 + 8;
    FUN_100c37f24();
    if (((ulong)pcVar9 & 1) != 0) {
      puVar7 = (undefined *)0x0;
      goto LAB_100c37ec4;
    }
  }
  puVar7 = PTR_PTR_1126bb6c8;
  func_0x000107c610f4(PTR_PTR_1126bb6c8);
  pcVar9 = param_1 + 8;
  FUN_100c37f24();
  puVar8 = PTR_PTR_1126bb6d0;
  if (((ulong)pcVar9 & 1) == 0) {
    pcVar9 = *(char **)(param_1 + 8);
    if (pcVar9 == (char *)0x0) {
      if (*(byte **)(param_1 + 0x10) == (byte *)0x0) {
        pcVar9 = *(char **)(param_1 + 0x18);
        if (pcVar9 == (char *)0x0) goto LAB_100c37ca0;
        if (((*pcVar9 == '\x01') && (pcVar9[1] == '\x01')) && ((pcVar9[0x20] & 1U) != 0)) {
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar10 = PTR_PTR_1126bb6c0;
          func_0x000107c610f4();
          pcVar6 = pcVar9 + 1;
          FUN_100c37f94(pcVar6);
          func_0x000107c61180();
          uVar1 = *(undefined4 *)(pcVar9 + 4);
          cVar3 = pcVar9[8];
          uVar12 = *(undefined8 *)(pcVar9 + 0x10);
          cVar4 = pcVar9[0x18];
          cVar5 = pcVar9[0x19];
          uVar2 = *(undefined4 *)(pcVar9 + 0x1c);
          if ((pcVar9[0x20] & 1U) == 0) {
            puVar11 = PTR_PTR_1126db2c0;
            func_0x000107c610f4();
            func_0x000107c48248();
          }
          else {
            puVar11 = (undefined *)0x0;
          }
          func_0x000107c4597c(uVar12,puVar10,param_2,pcVar6,uVar1,cVar3,cVar4,cVar5,uVar2,puVar11,
                              pcVar9[0x28],*(undefined4 *)(pcVar9 + 0x2c),pcVar9[0x30]);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(pcVar6);
        }
        func_0x000107c4d318(puVar8,param_2,puVar10);
        func_0x000107c61180();
      }
      else {
        if ((**(byte **)(param_1 + 0x10) & 1) == 0) {
          puVar10 = PTR_PTR_1126db228;
          func_0x000107c610fc(PTR_PTR_1126db228);
        }
        else {
          puVar10 = (undefined *)0x0;
        }
        func_0x000107c4e4dc(puVar8,param_2,puVar10);
        func_0x000107c61180();
      }
    }
    else {
      if ((*pcVar9 == '\x01') && ((pcVar9[1] & 1U) != 0)) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR_PTR_1126db230;
        func_0x000107c610f4(PTR_PTR_1126db230);
        pcVar9 = pcVar9 + 1;
        FUN_100c37f94(pcVar9);
        func_0x000107c61180();
        func_0x000107c45978(puVar10,param_2,pcVar9);
        func_0x000107c61170(pcVar9);
      }
      func_0x000107c4376c(puVar8,param_2,puVar10);
      func_0x000107c61180();
    }
    func_0x000107c61170(puVar10);
  }
  else {
LAB_100c37ca0:
    puVar8 = (undefined *)0x0;
  }
  func_0x000107c48b54(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x40),puVar7,param_2,puVar8,param_1[0x28],
                      param_1[0x29],param_1[0x38],param_1[0x39]);
  func_0x000107c61170(puVar8);
LAB_100c37ec4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100c37f24; end: 100c37f93;  */

undefined8 FUN_100c37f24(undefined8 *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_1;
  if ((((pcVar1 == (char *)0x0) || ((*pcVar1 == '\x01' && (pcVar1[1] == '\x01')))) &&
      (((char *)param_1[1] == (char *)0x0 || (*(char *)param_1[1] == '\x01')))) &&
     ((pcVar1 = (char *)param_1[2], pcVar1 == (char *)0x0 ||
      (((*pcVar1 == '\x01' && (pcVar1[1] == '\x01')) && (pcVar1[0x20] == '\x01')))))) {
    return 1;
  }
  return 0;
}



/* Entry: 100c37f94; end: 100c3801f;  */

void FUN_100c37f94(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    func_0x000107c610f4(PTR_PTR_1126d78b8);
    func_0x000107c47854();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


