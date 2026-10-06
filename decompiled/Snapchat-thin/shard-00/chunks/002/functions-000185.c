/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10043de8c; end: 10043dee7; -[SCUserSession requestManager] */

void FUN_10043de8c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c60b18(param_2);
  func_0x000107c61180();
  func_0x000107c4d9d4(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10043dee8; end: 10043def3;  */

undefined ** FUN_10043dee8(void)

{
  return &PTR____CFConstantStringClassReference_110e112f8;
}



/* Entry: 10043def4; end: 10043dfb3;  */

void FUN_10043def4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b8268;
  func_0x000107c61174(param_2);
  func_0x000107c610f4(puVar1);
  uVar2 = param_2;
  func_0x000107c3e454(param_2);
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c5db08(param_2);
  func_0x000107c61180();
  uVar4 = param_2;
  func_0x000107c5d984(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c45880(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10043dfb4; end: 10043dfdb;  */

undefined ** FUN_10043dfb4(long param_1)

{
  if (param_1 - 1U < 3) {
    return (undefined **)(&PTR_PTR_110acad00)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110f03cf8;
}



/* Entry: 10043dfdc; end: 10043dfe3; -[SCUserSession authToken] */

undefined8 FUN_10043dfdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10043dfe4; end: 10043e0bb; -[SCSessionRequestManager initWithAuthToken:username:userId:] */

undefined1 *
FUN_10043dfe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112706038;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10043e0bc; end: 10043e187;  */

void FUN_10043e0bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bb5f0;
  func_0x000107c610f4(PTR_PTR_1126bb5f0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c4928c(puVar1,param_2,uVar2,uVar3,uVar4,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60));
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10043e188; end: 10043e20b;  */

void FUN_10043e188(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bb568;
  func_0x000107c610f4(PTR_PTR_1126bb568);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c466ac(puVar1,param_2,uVar2,uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10043e20c; end: 10043e267;  */

void FUN_10043e20c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb560;
  func_0x000107c610f4(PTR_PTR_1126bb560);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c4660c(puVar1,param_2,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10043e268; end: 10043e6d7; -[SCSnapchattersFetchedResultObserverRepositoryV1 initWithDocObjectContext:] */

undefined8 * FUN_10043e268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  puStack_68 = PTR_PTR_1126fdc60;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    puStack_88 = &UNK_100becf18;
    puStack_80 = &UNK_110ab7060;
    func_0x000107c61174(param_3);
    uStack_78 = param_3;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_a0,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_a8,auStack_a0);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_a8);
    func_0x000107c61120(auStack_a0);
    func_0x000107c61170(uStack_78);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10043e6d8; end: 10043e84f; -[SCUserIdToSnapchatterFetcherImpl initWithDocObjectContext:snapchattersFetchedResultObserverRepository:] */

undefined1 *
FUN_10043e6d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fdc78;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    uVar2 = 0x11;
    FUN_1000819a8(0x11,0);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10043e850; end: 10043e943; -[SCUsernameToSnapchatterFetcherImpl initWithDocObjectContext:snapchattersFetchedResultObserverRepository:circumstanceEngine:] */

undefined1 *
FUN_10043e850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126fdc88;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
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
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10043e944; end: 10043ebe7; -[SCSnapchattersDataProvider initWithUserIdToSnapchatterFetcher:usernameToSnapchatterFetcher:snapchattersFetchedResultObserverRepository:suggestedSnapchatterFetcher:userInfoRepository:incomingFriendsTracker:dataFullySyncedTracker:grapheneLogger:preferences:] */

undefined8 *
FUN_10043e944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126fdc58;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_7);
    uVar2 = puVar1[1];
    puVar1[1] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c45454();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[6];
    puVar1[6] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10043ebe8; end: 10043ec47;  */

/* WARNING: Possible PIC construction at 0x00010043ebfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043ec0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043ec1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043ec2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010043ec20) */
/* WARNING: Removing unreachable block (ram,0x00010043ec10) */
/* WARNING: Removing unreachable block (ram,0x00010043ec00) */
/* WARNING: Removing unreachable block (ram,0x00010043ec30) */

void FUN_10043ebe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Entry: 10043ec48; end: 10043ec63;  */

void FUN_10043ec48(long param_1,long param_2)

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



/* Entry: 10043ec64; end: 10043eeab; -[SCCreatorSettingsDataStore initWithDocObjectContext:creatorSettingsDataTracker:circumstanceEngine:requestManager:snapTokenProvider:userPreferences:userID:isFromLogin:] */

undefined8 *
FUN_10043ec64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126eb498;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar5 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[4];
    func_0x000107c61174(puVar1);
    func_0x000107c4e524(uVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10043eeac; end: 10043ef37;  */

void FUN_10043eeac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x40);
    func_0x000107c61174(lVar1);
    if (lVar1 == lVar2) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar2 = lVar1;
      func_0x000107c49cec();
      func_0x000107c61170(lVar1);
      if ((int)lVar2 == 0) {
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0b16b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x38),
             *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30),
             PTR_s_logSyncFeedSubstep_duration__112609fb8,*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 10043ef38; end: 10043f04f; -[SCGhostToFeedGrapheneLogger logSyncFeedSubstep:duration:] */

/* WARNING: Possible PIC construction at 0x00010043f004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043f034: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010043f008) */
/* WARNING: Removing unreachable block (ram,0x00010043f038) */

void FUN_10043ef38(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba080;
  if (param_3 == 2) {
    func_0x000107c43c34(PTR_PTR_1126ba080);
    func_0x000107c61180();
  }
  else if (param_3 == 1) {
    func_0x000107c43c38(PTR_PTR_1126ba080);
    func_0x000107c61180();
  }
  else if (param_3 == 0) {
    func_0x000107c43c3c(PTR_PTR_1126ba080);
    func_0x000107c61180();
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  FUN_100440e90(0x408f400000000000,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
  func_0x000107c61180();
  func_0x000107c5e508(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10043f050; end: 10043f07f;  */

undefined ** FUN_10043f050(void)

{
  return &PTR____CFConstantStringClassReference_110dab218;
}



/* Entry: 10043f080; end: 10043f0f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043f080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11302cc78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302cc80) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302cc88) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10043f0f4; end: 10043f147;  */

void FUN_10043f0f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10043f148; end: 10043f14f;  */

void FUN_10043f148(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10043f150; end: 10043f1a3;  */

void FUN_10043f150(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xa8);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10043f1a4; end: 10043fcef;  */

void FUN_10043f1a4(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_1002bb3cc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  *(undefined8 *)(param_2 + 0x98) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  uVar9 = uStack_a8;
  func_0x000107c61174();
  uVar10 = uStack_b0;
  func_0x000107c61174();
  uVar11 = uStack_b8;
  func_0x000107c61174();
  uVar12 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c61174();
  uVar14 = uStack_d0;
  func_0x000107c61174();
  uVar15 = uStack_d8;
  func_0x000107c61174();
  uVar16 = uStack_e0;
  func_0x000107c61174(uStack_e0);
  uVar17 = uStack_e8;
  func_0x000107c61174(uStack_e8);
  uVar18 = uStack_f0;
  func_0x000107c61174();
  uVar19 = uStack_f8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a8d78;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar20 = auStack_70[0];
  func_0x000107c61174();
  uVar21 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar21 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar21);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0x6553617461446461;
  func_0x000107c5fadc(0x6553617461446461,0xee00736563697672);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar21);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb8f0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f007190);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0071b0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar22);
  uVar21 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0070a0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar16);
  func_0x000107c61174(uVar22);
  uVar21 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efbba10);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar17);
  func_0x000107c61174();
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efbb850);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar21);
  uVar22 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar22);
  uVar21 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0071d0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar21);
  lVar23 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0071f0);
  func_0x000107c5a49c(uVar22);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(uVar21);
  func_0x000107c3e740(uVar22);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar23 != 0) {
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar19);
    *(long *)(param_2 + 0xa8) = lVar23;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10043fcf0);
  (*pcVar1)();
}



/* Entry: 10043fcf0; end: 10043fd33;  */

void FUN_10043fcf0(void)

{
  long unaff_x20;
  
  FUN_10043f1a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 10043fd34; end: 10043fd53;  */

void FUN_10043fd34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010043fd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10043fd54; end: 10043fda7;  */

void FUN_10043fd54(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10043fda8; end: 10043fdb3;  */

void FUN_10043fda8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002ba718();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  func_0x000100440910(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_100440990();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  func_0x0001004409cc();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10043fdb4; end: 10043ff1b;  */

void FUN_10043fdb4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002ba718();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  func_0x000100440910(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_100440990();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  func_0x0001004409cc();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10043ff1c; end: 10044003b; -[SCCreatorSettingsDataStore _checkIfCreatorSettingsStale:] */

/* WARNING: Possible PIC construction at 0x00010043ff80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010043fff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010043ff84) */
/* WARNING: Removing unreachable block (ram,0x000100440000) */
/* WARNING: Removing unreachable block (ram,0x000100440004) */
/* WARNING: Removing unreachable block (ram,0x000100440014) */
/* WARNING: Removing unreachable block (ram,0x000100440018) */
/* WARNING: Removing unreachable block (ram,0x00010043ffc0) */
/* WARNING: Removing unreachable block (ram,0x00010043ffc4) */
/* WARNING: Removing unreachable block (ram,0x00010043fff4) */
/* WARNING: Removing unreachable block (ram,0x00010043fff8) */
/* WARNING: Removing unreachable block (ram,0x00010044001c) */
/* WARNING: Removing unreachable block (ram,0x00010043fffc) */
/* WARNING: Removing unreachable block (ram,0x000100440024) */

void FUN_10043ff1c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be884d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__refreshCreatorSettings_11257fad0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4d9c0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10044003c; end: 100440043;  */

void FUN_10044003c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100440044; end: 100440097;  */

void FUN_100440044(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100440098; end: 1004400a3;  */

void FUN_100440098(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100083b20(&uStack_48);
  FUN_1002b5bcc();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  FUN_100440164(uStack_48,uVar1,uVar3);
  *param_1 = uVar2;
  return;
}



/* Entry: 1004400a4; end: 10044012b;  */

void FUN_1004400a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1002b5bcc();
  func_0x000107c613fc();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_100440164(uStack_48,param_3,param_4);
  *param_1 = param_2;
  return;
}



/* Entry: 10044012c; end: 100440163;  */

void FUN_10044012c(undefined8 param_1)

{
  if (lRam0000000112e0f8f8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e67ece0);
  return;
}



/* Entry: 100440164; end: 100440227;  */

void FUN_100440164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10044012c(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,2);
  func_0x000107c61580(param_3,2);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100440288();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001004402c0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 100440228; end: 100440277;  */

void FUN_100440228(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBoWV_11034d678 + 0x40;
  puStack_18 = &UNK_10d9ead40;
  puStack_20 = puStack_28;
  func_0x000107c61524(param_1,0x100,3,&puStack_28,param_1 + 0x70);
  return;
}



/* Entry: 100440278; end: 100440287; +[SCTimeUtils secondsToMillis:] */

double FUN_100440278(double param_1)

{
  return param_1 * 1000.0;
}



/* Entry: 100440288; end: 10044039f;  */

void FUN_100440288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1004403a0; end: 1004403c3;  */

void FUN_1004403a0(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004403c4; end: 1004403d7;  */

void FUN_1004403c4(long param_1,long param_2)

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



/* Entry: 1004403d8; end: 100440423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004403d8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd138) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100440424; end: 100440457;  */

void FUN_100440424(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100440458; end: 10044045f;  */

void FUN_100440458(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100440460; end: 1004404b3;  */

void FUN_100440460(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004404b4; end: 1004404bf;  */

void FUN_1004404b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001d7114();
  func_0x000107c613fc();
  FUN_10044058c(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004404c0; end: 100440553;  */

void FUN_1004404c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001d7114();
  func_0x000107c613fc();
  FUN_10044058c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 100440554; end: 10044058b;  */

void FUN_100440554(undefined8 param_1)

{
  if (lRam0000000112dd0d70 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e656fb8);
  return;
}



/* Entry: 10044058c; end: 100440667;  */

void FUN_10044058c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_100440554(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1004406ac();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1004406e0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 100440668; end: 1004406ab;  */

void FUN_100440668(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBOWV_11034d658 + 0x40;
  puStack_18 = puStack_20;
  func_0x000107c61524(param_1,0x100,2,&puStack_20,param_1 + 0x70);
  return;
}



/* Entry: 1004406ac; end: 1004406df;  */

void FUN_1004406ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1004406e0; end: 10044083f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1004406e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  puVar2 = &UNK_11040e9b0;
  func_0x000107c613fc(&UNK_11040e9b0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  FUN_1000285a8(0x112dd0d38,&UNK_10d992180);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  puVar3 = &UNK_1018e67ec;
  FUN_1000bdd8c(&UNK_1018e67ec,puVar2);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11304a478);
  puVar2 = &UNK_11040e9d8;
  func_0x000107c613fc(&UNK_11040e9d8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar6;
  FUN_1000285a8(0x112dd0d40,&UNK_10d992188);
  func_0x000107c613fc();
  func_0x000107c61580(uVar6,2);
  func_0x000107c6157c(puVar3);
  puVar4 = &UNK_1018e689c;
  FUN_1000bdd8c(&UNK_1018e689c,puVar2);
  uVar5 = 0;
  FUN_1001df1d8(0);
  func_0x000107c610f8();
  FUN_100440890(puVar4,uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar6);
  return puVar4;
}



/* Entry: 100440840; end: 10044088f;  */

void FUN_100440840(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100440890; end: 1004408db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100440890(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130115c0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1004408dc; end: 10044098f;  */

void FUN_1004408dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100440990; end: 100440aaf;  */

void FUN_100440990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 100440ab0; end: 100440c67;  */

undefined8
FUN_100440ab0(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,ulong param_7)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = param_1;
  func_0x000107c5fce8();
  func_0x000107c61574();
  func_0x000107c615c4();
  func_0x000107c615cc();
  if (((ulong)pcVar1 & 1) == 0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x42);
    func_0x000107c5fb78(0xd00000000000003f,0x800000010ef1ceb0);
    uVar3 = 0;
    func_0x000107c60714();
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar3);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c60450("Fatal error",0xb,2,uStack_70,uStack_68,param_3,param_4,param_5,param_6,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100440c68);
    (*pcVar1)();
  }
  func_0x000107c613fc(param_7,0x20,7);
  *(code **)(param_7 + 0x10) = param_1;
  *(undefined8 *)(param_7 + 0x18) = param_2;
  (*param_1)(&uStack_70);
  if (unaff_x21 == 0) {
    uVar2 = param_7;
    func_0x000107c61544(param_7,"",0,0,0,0);
    func_0x000107c61574(param_7);
    param_2 = uStack_70;
    if ((uVar2 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100440bcc);
      (*pcVar1)();
    }
  }
  else {
    uVar2 = param_7;
    func_0x000107c61544(param_7,"",0,0,0,0);
    func_0x000107c61574(param_7);
    if ((uVar2 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100440b6c);
      (*pcVar1)();
    }
  }
  return param_2;
}



/* Entry: 100440c68; end: 100440d53;  */

void FUN_100440c68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  
  FUN_1003ffe10(param_3,auStack_68);
  puVar1 = &UNK_110461f10;
  func_0x000107c613fc(&UNK_110461f10,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  FUN_100440da4(auStack_68,puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  FUN_1000285a8(0x112e0f660,&UNK_10d9eaa68);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_4);
  puVar2 = &UNK_101c77338;
  FUN_1000bdd8c(&UNK_101c77338,puVar1);
  uVar3 = 0;
  FUN_1002baf58(0);
  func_0x000107c610f8();
  FUN_100440dbc(puVar2,uVar3);
  *param_1 = puVar2;
  return;
}



/* Entry: 100440d54; end: 100440da3;  */

void FUN_100440d54(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100440da4; end: 100440dbb;  */

undefined8 * FUN_100440da4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100440dbc; end: 100440e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100440dbc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fbd0d0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fbd0c8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100440e14; end: 100440e27;  */

void FUN_100440e14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100440e28; end: 100440e63;  */

void FUN_100440e28(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100440e64; end: 100440e8f; +[SCGrapheneGhostToFeedMetric g2fSyncExpServiceInit] */

void FUN_100440e64(void)

{
  func_0x000107c610f4(PTR_PTR_1126ba080);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100440e90; end: 100440f5b;  */

void FUN_100440e90(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (param_2 == 2) {
    ppuVar1 = &PTR_PTR_110891f10;
  }
  else if (param_2 == 1) {
    if (param_1 != 1) goto LAB_100440edc;
    ppuVar1 = &PTR_PTR_110891f28;
  }
  else {
    if (param_2 != 0) {
LAB_100440edc:
      puVar2 = (undefined *)0x0;
      goto LAB_100440f04;
    }
    if (param_1 == 0) {
      ppuVar1 = &PTR_PTR_110891f18;
    }
    else {
      if (param_1 != 1) goto LAB_100440edc;
      ppuVar1 = &PTR_PTR_110891f20;
    }
  }
  puVar2 = *ppuVar1;
  func_0x000107c61174(puVar2);
LAB_100440f04:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100440f5c; end: 100440fe3; -[SCGrapheneRegistry ghostToFeedGraphene] */

void FUN_100440f5c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100440fe4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bc800 != -1) {
    FUN_10002a2fc(0x1136bc800,&puStack_48);
  }
  uVar1 = uRam00000001136bc7f8;
  func_0x000107c61174(uRam00000001136bc7f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100440fe4; end: 1004411d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100440fe4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_1e0 [8];
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_138 = &PTR____CFConstantStringClassReference_110de6af8;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110de6b18;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110de6b38;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110de6b58;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110de6b78;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110de6b98;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110de6bb8;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110de6bd8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110de6bf8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110de6c18;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110de6c38;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110de6c58;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110de6c78;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110de6c98;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110de6cb8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110de6cd8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110de6cf8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110de6d18;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110de6d38;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110de6d58;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110de6d78;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110de6d98;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110de6db8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110de6dd8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110de6df8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110de6e18;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110de6e38;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110de6e58;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110de6e78;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110de6e98;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110de6eb8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110de6ed8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_138,0x20);
  func_0x000107c61180();
  func_0x000107c4fc78();
  func_0x000107c61180();
  uVar7 = uRam00000001136bc7f8;
  uRam00000001136bc7f8 = uVar6;
  func_0x000107c61170(uVar7);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  func_0x000107c61144(auStack_1a8,puVar1);
  puVar4 = PTR_PTR_1126ae720;
  puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d0 = 0xc2000000;
  puStack_1c8 = &UNK_105765d04;
  puStack_1c0 = &UNK_1108afff8;
  func_0x000107c6111c(auStack_1b0,auStack_1a8);
  puStack_1b8 = puVar2;
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_1e0,auStack_1a8);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(puVar1 + _DAT_112728f28);
  puVar1 = PTR_PTR_1126bdca0;
  func_0x000107c610f4(PTR_PTR_1126bdca0);
  func_0x000107c489c0();
  func_0x000107c42c20(uVar7);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_1e0);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_1b0);
  func_0x000107c61120(auStack_1a8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1004411d8; end: 1004413b3; -[SCAdPromotedStoryDataServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004411d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_1108aff98);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  func_0x000107c61144(auStack_68,param_1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_105765d04;
  puStack_80 = &UNK_1108afff8;
  func_0x000107c6111c(auStack_70,auStack_68);
  puStack_78 = puVar1;
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_a0,auStack_68);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112728f28);
  puVar5 = PTR_PTR_1126bdca0;
  func_0x000107c610f4(PTR_PTR_1126bdca0);
  func_0x000107c489c0();
  func_0x000107c42c20(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_a0);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1004413b4; end: 1004413bf; -[SCGrapheneImpl addTimer:durationMs:] */

void FUN_1004413b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf962f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_enqueueMetric_type_value__1125c3260,param_3,1,param_4);
  return;
}



/* Entry: 1004413c0; end: 1004414a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1004413c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puStack_38;
  
  puVar3 = *(ulong **)(param_1 + _DAT_11279625c);
  uVar2 = *puVar3;
  if ((uVar2 & 7) != 0) {
    uVar2 = (uVar2 & 0xfffffffffffffff8) + 8;
    *puVar3 = uVar2;
  }
  uVar4 = uVar2 + 8;
  if (*(ulong *)(param_1 + _DAT_112796260) < uVar4) {
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_111026078,
                        &PTR____CFConstantStringClassReference_111026178);
    puVar3 = *(ulong **)(param_1 + _DAT_11279625c);
    uVar2 = *puVar3;
    uVar4 = uVar2 + 8;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + _DAT_112796258) + uVar2);
  *puVar3 = uVar4;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41360(uVar5);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112796264);
  puStack_38 = puVar1;
  func_0x000107c60780(uVar5);
  func_0x000107c60768(uVar5,&puStack_38,8);
  return puVar1;
}



/* Entry: 1004414a8; end: 100441557; -[_TtC27AdPromotedStoryDataServices27AdPromotedStoryDataServices initWithStateProvider:logger:requestProvider:s2RInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004414a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  *(undefined8 *)(param_1 + _DAT_112ff6478) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff6480) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ff6488) = param_5;
  *(undefined8 *)(param_1 + _DAT_112ff6490) = param_6;
  lVar2 = param_1;
  FUN_1002bd29c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 100441558; end: 100441603;  */

void FUN_100441558(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100441604; end: 10044160b;  */

void FUN_100441604(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10044160c; end: 10044165f;  */

void FUN_10044160c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100441660; end: 10044166b;  */

void FUN_100441660(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002ba40c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_100441774(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_1004417f0(uStack_58,uVar2,uVar3,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  FUN_100441a88();
  *(undefined8 *)(lVar1 + 0x30) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 10044166c; end: 100441773;  */

void FUN_10044166c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002ba40c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_100441774(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_1004417f0(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  FUN_100441a88();
  *(undefined8 *)(param_2 + 0x30) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 100441774; end: 1004417ef;  */

void FUN_100441774(undefined8 param_1)

{
  if (lRam0000000112e3d7e0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e69ac8c);
  return;
}



/* Entry: 1004417f0; end: 100441a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004417f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_1000d224c(auStack_88);
  puVar1 = auStack_88;
  FUN_1000a8868(puVar1,uStack_70);
  uVar2 = 3;
  FUN_10043c5c0(3,0x3c,1,uStack_70,uStack_68,puVar1);
  func_0x0001000834e4(auStack_88);
  FUN_1000285a8(0x112dc0fd8,&UNK_10d97e7f0);
  uVar7 = param_3;
  func_0x000107c5cec4();
  func_0x000107c61180();
  uVar3 = uVar7;
  FUN_1000bda74();
  func_0x000107c61170(uVar7);
  puVar4 = &UNK_11049cd80;
  func_0x000107c613fc(&UNK_11049cd80,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  FUN_1000285a8(0x112e3d7a8,&UNK_10da2a0f8);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  puVar5 = &UNK_101f02fa4;
  FUN_1000bdd8c(&UNK_101f02fa4,puVar4);
  puVar4 = &UNK_11049cda8;
  func_0x000107c613fc(&UNK_11049cda8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar5;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  FUN_1000285a8(0x112e3d7b0,&UNK_10da2a100);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar5);
  func_0x000107c61174(param_4);
  puVar6 = &UNK_101f02fa8;
  FUN_1000bdd8c(&UNK_101f02fa8,puVar4);
  uVar7 = 0;
  FUN_1002ba498(0);
  func_0x000107c610f8();
  FUN_100441a18(puVar6,uVar7);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar2);
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return;
}



/* Entry: 100441a08; end: 100441a17;  */

void FUN_100441a08(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100441a18; end: 100441a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100441a18(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  FUN_1003a5b88();
  *(long *)(unaff_x20 + _DAT_112fe4160) = lVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 100441a88; end: 100441a8f;  */

void FUN_100441a88(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100441a90; end: 100441acb;  */

void FUN_100441a90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100441acc; end: 10044225f; -[SCDiscoverFeedDataServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100441acc(long param_1)

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
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_260 [8];
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 auStack_210 [8];
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar17 = *(undefined8 *)(param_1 + _DAT_112752f94);
  *(undefined **)(param_1 + _DAT_112752f94) = puVar1;
  func_0x000107c61170(uVar17);
  func_0x000107c61144(auStack_80,param_1);
  puVar2 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1068c8454;
  puStack_90 = &UNK_1108cd5a8;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  puStack_c8 = &UNK_1068c8494;
  puStack_c0 = &UNK_110948090;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c61174(puVar2);
  puStack_b8 = puVar2;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_1068c84dc;
  puStack_e8 = &UNK_1109480c0;
  func_0x000107c6111c(auStack_e0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  puStack_118 = &UNK_1068c851c;
  puStack_110 = &UNK_110852e90;
  func_0x000107c6111c(auStack_108,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  puStack_168 = puVar1;
  uStack_160 = 0xc2000000;
  puStack_158 = &UNK_1068c855c;
  puStack_150 = &UNK_1109480f0;
  func_0x000107c6111c(auStack_130,auStack_80);
  func_0x000107c61174(puVar3);
  puStack_148 = puVar3;
  func_0x000107c61174(puVar2);
  puStack_140 = puVar2;
  func_0x000107c61174(puVar5);
  puStack_138 = puVar5;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar18 = (long)_DAT_112752f98;
  uVar17 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar6;
  func_0x000107c61170(uVar17);
  puVar7 = PTR_PTR_1126c5b40;
  func_0x000107c610f4();
  func_0x000107c4711c();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112752f9c));
  puVar6 = PTR_PTR_1126ae720;
  puStack_190 = puVar1;
  uStack_188 = 0xc2000000;
  puStack_180 = &UNK_1068c85a8;
  puStack_178 = &UNK_110948120;
  func_0x000107c6111c(auStack_170,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61144(auStack_198,*(undefined8 *)(param_1 + lVar18));
  puVar8 = PTR_PTR_1126ae720;
  puStack_1c8 = puVar1;
  uStack_1c0 = 0xc2000000;
  puStack_1b8 = &UNK_1068c85e8;
  puStack_1b0 = &UNK_110948150;
  func_0x000107c6111c(auStack_1a8,auStack_80);
  func_0x000107c6111c(auStack_1a0,auStack_198);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126cec58;
  func_0x000107c610f4();
  func_0x000107c47130();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112752fa0));
  puVar10 = PTR_PTR_1126cec60;
  func_0x000107c61160();
  puVar11 = PTR_PTR_1126ae720;
  puStack_208 = puVar1;
  uStack_200 = 0xc2000000;
  puStack_1f8 = &UNK_1068c8650;
  puStack_1f0 = &UNK_110948180;
  func_0x000107c6111c(auStack_1d0,auStack_80);
  func_0x000107c61174(puVar2);
  puStack_1e8 = puVar2;
  func_0x000107c61174(puVar3);
  puStack_1e0 = puVar3;
  func_0x000107c61174(puVar10);
  puStack_1d8 = puVar10;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar12 = PTR_PTR_1126cec68;
  func_0x000107c61160();
  puVar13 = PTR_PTR_1126ae720;
  puStack_230 = puVar1;
  uStack_228 = 0xc2000000;
  puStack_220 = &UNK_1068c869c;
  puStack_218 = &UNK_1109481b0;
  func_0x000107c6111c(auStack_210,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar14 = PTR_PTR_1126ae720;
  puStack_258 = puVar1;
  uStack_250 = 0xc2000000;
  puStack_248 = &UNK_1068c86dc;
  puStack_240 = &UNK_1109481e0;
  func_0x000107c6111c(auStack_238,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_260,auStack_80);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar15 = PTR_PTR_1126cec70;
  func_0x000107c610f4(PTR_PTR_1126cec70);
  func_0x000107c47120();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112752fa4));
  puVar16 = PTR_PTR_1126cec78;
  func_0x000107c610f4(PTR_PTR_1126cec78);
  func_0x000107c4712c();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112752fa8));
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_260);
  func_0x000107c61170(puVar14);
  func_0x000107c61120(auStack_238);
  func_0x000107c61170(puVar13);
  func_0x000107c61120(auStack_210);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puStack_1d8);
  func_0x000107c61170(puStack_1e0);
  func_0x000107c61170(puStack_1e8);
  func_0x000107c61120(auStack_1d0);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61120(auStack_1a0);
  func_0x000107c61120(auStack_1a8);
  func_0x000107c61120(auStack_198);
  func_0x000107c61170(puVar6);
  func_0x000107c61120(auStack_170);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puStack_138);
  func_0x000107c61170(puStack_140);
  func_0x000107c61170(puStack_148);
  func_0x000107c61120(auStack_130);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_108);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_e0);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puStack_b8);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 100442260; end: 10044232b; -[SCDiscoverFeedDataServices initWithLazyDiscoverFeedDataFetcher:lazyDiscoverFeedDataMutator:lazyDiscoverFeedDataLoader:] */

undefined1 *
FUN_100442260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1127040b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
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
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10044232c; end: 10044235f;  */

/* WARNING: Possible PIC construction at 0x000100442348: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010044234c) */

void FUN_10044232c(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x20,param_2 + 0x20);
  return;
}



/* Entry: 100442360; end: 1004423d7; -[_TtC29SCDiscoverFeedSectionServices29SCDiscoverFeedSectionServices initWithLazyDiscoverFeedSectionsCoordinator:lazyCollapseManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100442360(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11306e2f0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306e2f8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1004423d8; end: 100442413; -[SCLensPlayTimeProviderInSpotlightController init] */

void FUN_1004423d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f3b40;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return;
}



/* Entry: 100442414; end: 100442477; -[SCDiscoverFeedEventsAnnouncer init] */

undefined1 * FUN_100442414(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3b48;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100442478; end: 1004425cb; -[SCDiscoverFeedLoggingServices initWithLazyDiscoverFeedEventsController:eventsAnnouncer:lazyDiscoverFeedLoggingCreator:discoverLogger:discoverPerformanceLogger:lensPlayTimeProviderController:] */

undefined1 *
FUN_100442478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1127037e8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
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
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004425cc; end: 10044265b; -[_TtC29SCDiscoverFeedRankingServices29SCDiscoverFeedRankingServices initWithLazyDiscoverFeedRanker:lazyFriendStoriesRanker:lazyDiscoverFeedInteractionHistoryManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004425cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_11302d768) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302d770) = param_4;
  *(undefined8 *)(param_1 + _DAT_11302d778) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 10044265c; end: 10044273f;  */

void FUN_10044265c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100442740; end: 100442747;  */

void FUN_100442740(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x110);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100442748; end: 10044279b;  */

void FUN_100442748(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x110);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10044279c; end: 1004427a3;  */

void FUN_10044279c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004427a4; end: 1004427f7;  */

void FUN_1004427a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1004427f8; end: 100442803;  */

void FUN_1004427f8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001df8d8();
  func_0x000107c613fc();
  FUN_1004428d0(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100442804; end: 100442897;  */

void FUN_100442804(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001df8d8();
  func_0x000107c613fc();
  FUN_1004428d0(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 100442898; end: 1004428cf;  */

void FUN_100442898(undefined8 param_1)

{
  if (lRam0000000112e5eb88 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6b471c);
  return;
}



/* Entry: 1004428d0; end: 1004429ab;  */

void FUN_1004428d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_100442898(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1004429f0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100442a24();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1004429ac; end: 1004429ef;  */

void FUN_1004429ac(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBOWV_11034d658 + 0x40;
  puStack_18 = puStack_20;
  func_0x000107c61524(param_1,0x100,2,&puStack_20,param_1 + 0x70);
  return;
}


