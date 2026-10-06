/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100814ffc; end: 100815003; +[SCSecretFeatureCheckingResult resultIsOff] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100814ffc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_113054680) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100815004; end: 100815053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100815004(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_113054680) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100815054; end: 1008150fb; -[SCImpalaPreferences initWithPreferences:userId:] */

undefined1 *
FUN_100815054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126ff390;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008150fc; end: 100815117; -[SCUserInfoServices emailInfoProvider] */

undefined8 FUN_1008150fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100815118; end: 10081523f;  */

/* WARNING: Possible PIC construction at 0x000100815184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100815208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100815218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100815188) */
/* WARNING: Removing unreachable block (ram,0x00010081520c) */

void FUN_100815118(undefined8 param_1,long param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  param_2 = param_2 + 0x20;
  func_0x000107c61148();
  if (param_2 == 0) {
    func_0x000107c61170(0);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    if (param_4 == 0) {
      func_0x000107c4d664(uVar2);
      puVar1 = PTR_PTR_1126b71d8;
      func_0x000107c3ca70(param_2);
      func_0x000107c5c734(*(undefined8 *)(param_2 + 0x18));
      func_0x000107c61180();
      func_0x000107c4f7c0();
      func_0x000107c61180();
      func_0x000107c5192c(param_1);
      func_0x000107c61180();
      param_3 = *(undefined **)(param_2 + 0x10);
      *(undefined **)(param_2 + 0x10) = puVar1;
    }
    else {
      param_3 = PTR_PTR_1126b71c8;
      func_0x000107c506fc(PTR_PTR_1126b71c8);
      func_0x000107c61180();
      func_0x000107c4d664(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100815240; end: 100815257; -[SCSecretFeaturePeriodicUpdatingImpl _timeInterval] */

undefined8 FUN_100815240(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x3fe0000000000000;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = 0x4014000000000000;
  }
  return uVar1;
}



/* Entry: 100815258; end: 1008156c7; -[SCImpalaBusinessProfileManager initWithUserSession:emailInfoProvider:networkServices:circumstanceEngine:runtimeProvider:impalaPreferences:appStartExperimentReader:] */

undefined8 *
FUN_100815258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126ff3b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dc810;
    func_0x000107c610f4();
    uVar6 = param_3;
    func_0x000107c5d984(param_3);
    func_0x000107c61180();
    uVar3 = param_4;
    func_0x000107c5c734(param_4);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c4248c();
    func_0x000107c61180();
    func_0x000107c47a8c();
    uVar11 = puVar1[0x11];
    puVar1[0x11] = puVar2;
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c611a0(puVar1 + 1,param_3);
    func_0x000107c61174(param_5);
    uVar6 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_6);
    uVar6 = puVar1[3];
    puVar1[3] = param_6;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_9);
    uVar6 = puVar1[4];
    puVar1[4] = param_9;
    func_0x000107c61170(uVar6);
    func_0x000107c611a0(puVar1 + 0xb,param_7);
    func_0x000107c61174(param_8);
    uVar6 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar6);
    puVar2 = PTR_PTR_1126dc818;
    func_0x000107c61160();
    uVar6 = puVar1[5];
    puVar1[5] = puVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c552f0(param_3);
    puVar2 = PTR_PTR_1126dc820;
    func_0x000107c610f4();
    puVar7 = puVar1 + 0xb;
    func_0x000107c61148(puVar7);
    func_0x000107c4823c();
    uVar6 = puVar1[0x12];
    puVar1[0x12] = puVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar7);
    puVar2 = PTR_PTR_1126dc820;
    func_0x000107c610f4();
    puVar7 = puVar1 + 0xb;
    func_0x000107c61148(puVar7);
    func_0x000107c4823c();
    uVar6 = puVar1[0x13];
    puVar1[0x13] = puVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar7);
    *(undefined1 *)(puVar1 + 0xe) = 0;
    func_0x000107c61144(auStack_78,puVar1);
    puVar8 = PTR_PTR_1126b6ae8;
    func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126ae960;
    puVar9 = PTR_PTR_1126cc1e0;
    func_0x000107c451c8(PTR_PTR_1126cc1e0);
    func_0x000107c61180();
    func_0x000107c40d1c(puVar2);
    func_0x000107c61180();
    puVar10 = PTR_PTR_1126ae970;
    func_0x000107c4c0f8(PTR_PTR_1126ae970);
    func_0x000107c61180();
    uVar6 = 0x11;
    FUN_1000819a8(0x11,0);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c5e08c(puVar8);
    func_0x000107c611b0();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    puVar2 = PTR_PTR_1126ae560;
    func_0x000107c61160();
    uVar6 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
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



/* Entry: 1008156c8; end: 100815707;  */

void FUN_1008156c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b5a0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100815708; end: 1008159c3; -[SCUserInfoServicesEntryPoint _emailInfoProvider] */

/* WARNING: Possible PIC construction at 0x0001008157c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008158c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008158d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008158e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010081593c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010081594c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100815960: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100815950) */
/* WARNING: Removing unreachable block (ram,0x000100815940) */
/* WARNING: Removing unreachable block (ram,0x0001008158e4) */
/* WARNING: Removing unreachable block (ram,0x0001008158d4) */
/* WARNING: Removing unreachable block (ram,0x0001008158c4) */
/* WARNING: Removing unreachable block (ram,0x0001008157cc) */
/* WARNING: Removing unreachable block (ram,0x000100815964) */
/* WARNING: Removing unreachable block (ram,0x00010081599c) */
/* WARNING: Removing unreachable block (ram,0x0001008159a4) */
/* WARNING: Removing unreachable block (ram,0x0001008159bc) */
/* WARNING: Removing unreachable block (ram,0x0001008159ec) */
/* WARNING: Removing unreachable block (ram,0x0001008159fc) */
/* WARNING: Removing unreachable block (ram,0x00010081597c) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100815708(long param_1)

{
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  puStack_88 = &UNK_1053f2b98;
  puStack_80 = &UNK_1053f2ba8;
  uStack_78 = 0;
  param_1 = param_1 + _DAT_112722efc;
  func_0x000107c61148(param_1);
  func_0x000107c5da68();
  func_0x000107c61180();
  func_0x000107c4c63c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008159c4; end: 100815a0b; -[SCUserSessionContext matchFromRegistration:] */

void FUN_1008159c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c49e24();
  if ((int)lVar1 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100815a0c; end: 100815bd3; +[SCGCDTimer scheduledTimerWithTimeInterval:target:selector:userInfo:dispatchQueue:] */

void FUN_100815a0c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar1 = PTR___dispatch_source_type_timer_11034be38;
  func_0x000107c60f84(PTR___dispatch_source_type_timer_11034be38,0,0,param_7);
  if (puVar1 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41364(param_1,PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    uVar3 = 0;
    func_0x000107c60f94(0,(long)(param_1 * 1000000000.0));
    func_0x000107c60f8c(puVar1,uVar3,(long)(param_1 * 1000000000.0),0);
    puVar4 = PTR_PTR_1126b71d8;
    func_0x000107c610f4(PTR_PTR_1126b71d8);
    func_0x000107c48d24();
    func_0x000107c61144(auStack_68,puVar4);
    func_0x000107c61144(auStack_70,param_4);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    puStack_98 = &UNK_10af84508;
    puStack_90 = &UNK_1108cee28;
    func_0x000107c6111c(auStack_88,auStack_70);
    func_0x000107c6111c(auStack_80,auStack_68);
    uStack_78 = param_5;
    func_0x000107c60f88(puVar1,&puStack_a8);
    func_0x000107c60f68(puVar1);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100815bd4; end: 100815cb7; -[SCGCDTimer initWithTimer:scheduledDate:userInfo:onQueue:] */

undefined1 *
FUN_100815bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112702fb8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c59db4(puVar1);
    func_0x000107c5a360(puVar1);
    func_0x000107c57a98(puVar1);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100815cb8; end: 100815ce7; -[SCGCDTimer setTimer:] */

void FUN_100815cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100815ce8; end: 100815d17; -[SCGCDTimer setUserInfo:] */

void FUN_100815ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100815d18; end: 100815d47; -[SCGCDTimer setQueue:] */

void FUN_100815d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100815d48; end: 100815f63;  */

uint FUN_100815d48(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long *plStack_58;
  long *plStack_50;
  byte bStack_42;
  byte bStack_41;
  
  func_0x000107c61174(param_3);
  uVar8 = *(uint *)(param_1 + 8);
  if ((int)uVar8 < 0xe) {
    if (uVar8 - 1 < 2) {
      *param_4 = 0;
      plStack_50 = (long *)((ulong)plStack_50 & 0xffffffffffffff00);
      (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                (*(long **)(param_1 + 0x38),param_2,param_3,&plStack_50);
      uVar8 = (uint)(uVar8 != 1 ^ (byte)plStack_50);
      goto LAB_100815f3c;
    }
    if (uVar8 - 0xc < 2) {
      plVar9 = *(long **)(param_1 + 0x38);
      func_0x000107c61174(param_3);
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,param_4);
      puVar2 = *(undefined8 **)(param_1 + 0x48);
      puVar3 = *(undefined8 **)(param_1 + 0x50);
      if (uVar8 == 0xc) {
        if (puVar2 == puVar3) {
          uVar8 = 0;
        }
        else {
          do {
            puVar6 = puVar2 + 1;
            plVar7 = (long *)*puVar2;
            uVar8 = (uint)(plVar9 == plVar7);
            puVar2 = puVar6;
          } while (plVar9 != plVar7 && puVar6 != puVar3);
        }
      }
      else if (puVar2 == puVar3) {
        uVar8 = 1;
      }
      else {
        do {
          puVar6 = puVar2 + 1;
          plVar7 = (long *)*puVar2;
          uVar8 = (uint)(plVar9 != plVar7);
          puVar2 = puVar6;
        } while (plVar9 != plVar7 && puVar6 != puVar3);
      }
      func_0x000107c61170(param_3);
      goto LAB_100815f3c;
    }
  }
  else {
    if (uVar8 - 0xf < 2) {
      *param_4 = 0;
      uVar8 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_100815f3c;
    }
    if (uVar8 == 0xe) {
      lVar1 = 0x28;
      lVar4 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar4 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar4,param_4);
      uVar8 = (uint)lVar4;
      goto LAB_100815f3c;
    }
  }
  if ((uVar8 & 0xfffffffe) == 10) {
    plVar9 = *(long **)(param_1 + 0x38);
    plVar7 = *(long **)(param_1 + 0x40);
    plVar5 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_41);
    plStack_50 = plVar5;
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    plStack_58 = plVar7;
    func_0x00010081604c(plVar9,&plStack_50,&plStack_58,uVar8,0);
    uVar8 = (uint)plVar9;
  }
  else {
    uVar8 = 0;
  }
LAB_100815f3c:
  func_0x000107c61170(param_3);
  return uVar8 & 1;
}



/* Entry: 100815f64; end: 100816013;  */

long FUN_100815f64(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    lVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar3,param_4);
  }
  else {
    lVar3 = 0;
  }
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100816014; end: 1008160ff;  */

undefined4 FUN_100816014(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 100816100; end: 10081613b;  */

undefined8 FUN_100816100(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_10081613c(uVar1,param_1);
  return uVar1;
}



/* Entry: 10081613c; end: 1008162e7;  */

void FUN_10081613c(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      FUN_100816f48(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001084d9ec4(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_100816228:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        func_0x0001084d9f58(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_100816228;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110a4fc60;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1008162e8; end: 100816387; -[SCSQLiteDocObjectContext setFetchedObject:forClass:byRowid:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008162e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uStack_38 = param_5;
  func_0x000107c5c688();
  param_1 = param_1 + _DAT_11278eb44;
  uStack_40 = param_4;
  FUN_1001cb89c(param_1,param_4,&uStack_40);
  param_1 = param_1 + 0x18;
  FUN_1001cbc64(param_1,param_5,&uStack_38);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100816388; end: 100816397; -[SCStoriesMyStoryPlaybackSequence storySnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100816388(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fc94);
}



/* Entry: 100816398; end: 1008163a7; -[SCStoriesMyStoryPlaybackSequence storyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100816398(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fc90);
}



/* Entry: 1008163a8; end: 10081666b;  */

/* WARNING: Possible PIC construction at 0x000100816464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100816498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008165a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100816628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008166e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100816740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100816750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008167cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008167f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008164b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010081654c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010081658c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008165a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100816550) */
/* WARNING: Removing unreachable block (ram,0x000100816554) */
/* WARNING: Removing unreachable block (ram,0x000100816560) */
/* WARNING: Removing unreachable block (ram,0x00010081656c) */
/* WARNING: Removing unreachable block (ram,0x0001008164b4) */
/* WARNING: Removing unreachable block (ram,0x000100816588) */
/* WARNING: Removing unreachable block (ram,0x0001008164fc) */
/* WARNING: Removing unreachable block (ram,0x000100816504) */
/* WARNING: Removing unreachable block (ram,0x000100816508) */
/* WARNING: Removing unreachable block (ram,0x000100816518) */
/* WARNING: Removing unreachable block (ram,0x000100816520) */
/* WARNING: Removing unreachable block (ram,0x000100816540) */
/* WARNING: Removing unreachable block (ram,0x000100816544) */
/* WARNING: Removing unreachable block (ram,0x0001008167f8) */
/* WARNING: Removing unreachable block (ram,0x0001008167d0) */
/* WARNING: Removing unreachable block (ram,0x000100816754) */
/* WARNING: Removing unreachable block (ram,0x0001008166e4) */
/* WARNING: Removing unreachable block (ram,0x000100816744) */
/* WARNING: Removing unreachable block (ram,0x0001008166ec) */
/* WARNING: Removing unreachable block (ram,0x000100816778) */
/* WARNING: Removing unreachable block (ram,0x0001008167fc) */
/* WARNING: Removing unreachable block (ram,0x000100816784) */
/* WARNING: Removing unreachable block (ram,0x00010081678c) */
/* WARNING: Removing unreachable block (ram,0x0001008166f8) */
/* WARNING: Removing unreachable block (ram,0x000100816820) */
/* WARNING: Removing unreachable block (ram,0x000100816718) */
/* WARNING: Removing unreachable block (ram,0x000100816728) */
/* WARNING: Removing unreachable block (ram,0x00010081662c) */
/* WARNING: Removing unreachable block (ram,0x000100816654) */
/* WARNING: Removing unreachable block (ram,0x000100816664) */
/* WARNING: Removing unreachable block (ram,0x0001008165ac) */
/* WARNING: Removing unreachable block (ram,0x0001008165ec) */
/* WARNING: Removing unreachable block (ram,0x000100816620) */
/* WARNING: Removing unreachable block (ram,0x0001008165c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x00010081649c) */
/* WARNING: Removing unreachable block (ram,0x0001008165a4) */
/* WARNING: Removing unreachable block (ram,0x000100816468) */
/* WARNING: Removing unreachable block (ram,0x0001008164ac) */
/* WARNING: Removing unreachable block (ram,0x00010081646c) */
/* WARNING: Removing unreachable block (ram,0x000100816478) */
/* WARNING: Removing unreachable block (ram,0x000100816590) */

void FUN_1008163a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined1 auStack_f8 [128];
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  func_0x000107c61174(param_1);
  lVar1 = param_1;
  func_0x000107c4080c(param_1,param_2,&uStack_1c0,auStack_f8,0x10);
  if (lVar1 != 0) {
    if (*plStack_1b0 != *plStack_1b0) {
      func_0x000107c61128(param_1);
    }
    param_1 = *plStack_1b8;
    func_0x000107c5c9d4(param_1);
    func_0x000107c61180();
    func_0x000107c42bcc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10081666c; end: 100816893; -[SCMyStoriesDatabaseStore _updateMyStorySnapsForStory:newSnaps:currentUserId:txContent:] */

/* WARNING: Possible PIC construction at 0x0001008166e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100816740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100816750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008167cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008167f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008167d0) */
/* WARNING: Removing unreachable block (ram,0x000100816754) */
/* WARNING: Removing unreachable block (ram,0x0001008166e4) */
/* WARNING: Removing unreachable block (ram,0x000100816744) */
/* WARNING: Removing unreachable block (ram,0x0001008166ec) */
/* WARNING: Removing unreachable block (ram,0x000100816778) */
/* WARNING: Removing unreachable block (ram,0x000100816784) */
/* WARNING: Removing unreachable block (ram,0x00010081678c) */
/* WARNING: Removing unreachable block (ram,0x0001008167f8) */
/* WARNING: Removing unreachable block (ram,0x0001008166f8) */
/* WARNING: Removing unreachable block (ram,0x000100816820) */
/* WARNING: Removing unreachable block (ram,0x000100816718) */
/* WARNING: Removing unreachable block (ram,0x0001008167fc) */
/* WARNING: Removing unreachable block (ram,0x000100816728) */

void FUN_10081666c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c40808(param_4);
  func_0x000107c5c068(param_3);
  func_0x000107c61180();
  func_0x000107c40808();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100816894; end: 1008168a3; -[SCStoriesGrapheneMetricsEmitter logMyOurStoryExpirationInitialNumOfSnaps:] */

void FUN_100816894(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **unaff_x19;
  undefined **unaff_x20;
  long *unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  plVar2 = *(long **)(param_1 + 8);
  puVar1 = (undefined1 *)register0x00000008;
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1dbf8;
  while( true ) {
    ppuVar5 = ppuVar4;
    puVar7 = puVar1 + -0x80;
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined1 **)(puVar1 + -0x38) = unaff_x23;
    *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
    *(long **)(puVar1 + -0x28) = unaff_x21;
    *(undefined ***)(puVar1 + -0x20) = unaff_x20;
    *(undefined ***)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = param_3;
    func_0x000107c61174(ppuVar5);
    unaff_x21 = plVar2;
    if (plVar2 != (long *)0x0) {
      plVar3 = (long *)plVar2[1];
      (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_110a03f88);
      if ((int)plVar3 != 0) {
        unaff_x21 = (long *)plVar2[1];
        func_0x000107c61174(ppuVar5);
        if (ppuVar5 == (undefined **)0x0) {
          ppuVar4 = (undefined **)&UNK_10f44f7d9;
        }
        else {
          ppuVar4 = ppuVar5;
          func_0x000107c61178(ppuVar5);
          func_0x000107c3ac4c();
        }
        func_0x000107c61170(ppuVar5);
        unaff_x23 = puVar1 + -0x60;
        FUN_10002b838(puVar1 + -0x60,ppuVar4);
        *(undefined8 *)(puVar1 + -0x80) = 0;
        *(undefined8 *)(puVar1 + -0x78) = 0;
        *(undefined8 *)(puVar1 + -0x70) = 0;
        FUN_10007e1e8(puVar1 + -0x80,puVar1 + -0x60,puVar1 + -0x48,1);
        (**(code **)(*unaff_x21 + 0x18))(unaff_x21,&UNK_110a03f88,puVar1 + -0x80,param_3);
        *(undefined1 **)(puVar1 + -0x68) = puVar1 + -0x80;
        FUN_10007e5dc(puVar1 + -0x68);
        puVar6 = puVar7;
        unaff_x22 = puVar1 + -0x80;
        if ((char)puVar1[-0x49] < '\0') {
          func_0x000107c60e14(*(undefined8 *)(puVar1 + -0x60));
          puVar6 = puVar7;
          unaff_x22 = puVar1 + -0x80;
        }
      }
    }
    param_3 = puVar6;
    unaff_x20 = ppuVar5;
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x48)) break;
    func_0x000107c60e78();
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(ppuVar5);
    unaff_x30 = FUN_100816a38;
    ppuVar4 = unaff_x20;
    func_0x000107c60bd8();
    plVar2 = (long *)ppuVar4[1];
    puVar1 = puVar1 + -0x80;
    ppuVar4 = &PTR____CFConstantStringClassReference_110e1dc18;
    unaff_x19 = ppuVar5;
  }
  return;
}



/* Entry: 1008168a4; end: 100816a37;  */

void FUN_1008168a4(long *param_1,undefined **param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined **unaff_x19;
  undefined **unaff_x20;
  long *unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    ppuVar3 = param_2;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = param_3;
    func_0x000107c61174(ppuVar3);
    unaff_x21 = param_1;
    if (param_1 != (long *)0x0) {
      plVar1 = (long *)param_1[1];
      (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a03f88);
      if ((int)plVar1 != 0) {
        unaff_x21 = (long *)param_1[1];
        func_0x000107c61174(ppuVar3);
        if (ppuVar3 == (undefined **)0x0) {
          ppuVar2 = (undefined **)&UNK_10f44f7d9;
        }
        else {
          ppuVar2 = ppuVar3;
          func_0x000107c61178(ppuVar3);
          func_0x000107c3ac4c();
        }
        func_0x000107c61170(ppuVar3);
        unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x60);
        FUN_10002b838((undefined1 *)((long)register0x00000008 + -0x60),ppuVar2);
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
        FUN_10007e1e8((undefined1 *)((long)register0x00000008 + -0x80),
                      (undefined1 *)((long)register0x00000008 + -0x60),
                      (undefined1 *)((long)register0x00000008 + -0x48),1);
        (**(code **)(*unaff_x21 + 0x18))
                  (unaff_x21,&UNK_110a03f88,(undefined1 *)((long)register0x00000008 + -0x80),param_3
                  );
        *(undefined1 **)((long)register0x00000008 + -0x68) =
             (undefined1 *)((long)register0x00000008 + -0x80);
        FUN_10007e5dc((undefined1 *)((long)register0x00000008 + -0x68));
        puVar4 = puVar5;
        unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x80);
        if (*(char *)((long)register0x00000008 + -0x49) < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)register0x00000008 + -0x60));
          puVar4 = puVar5;
          unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x80);
        }
      }
    }
    param_3 = puVar4;
    unaff_x20 = ppuVar3;
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    func_0x000107c60e78();
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(ppuVar3);
    unaff_x30 = FUN_100816a38;
    ppuVar2 = unaff_x20;
    func_0x000107c60bd8();
    param_1 = (long *)ppuVar2[1];
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    param_2 = &PTR____CFConstantStringClassReference_110e1dc18;
    unaff_x19 = ppuVar3;
  }
  return;
}



/* Entry: 100816a38; end: 100816a47; -[SCStoriesGrapheneMetricsEmitter logMyOurStoryExpirationFinalNumOfSnaps:] */

/* WARNING: Removing unreachable block (ram,0x000100816924) */

void FUN_100816a38(undefined **param_1,undefined8 param_2,undefined1 *param_3)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined **unaff_x19;
  undefined **unaff_x20;
  long *unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar3 = (long *)param_1[1];
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined ***)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = param_3;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110e1dc18);
    if (plVar3 != (long *)0x0) {
      plVar1 = (long *)plVar3[1];
      (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110a03f88);
      if ((int)plVar1 != 0) {
        plVar3 = (long *)plVar3[1];
        func_0x000107c61174(&PTR____CFConstantStringClassReference_110e1dc18);
        ppuVar2 = &PTR____CFConstantStringClassReference_110e1dc18;
        func_0x000107c61178(&PTR____CFConstantStringClassReference_110e1dc18);
        func_0x000107c3ac4c();
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110e1dc18);
        unaff_x23 = (undefined1 *)((long)register0x00000008 + -0x60);
        FUN_10002b838((undefined1 *)((long)register0x00000008 + -0x60),ppuVar2);
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
        FUN_10007e1e8((undefined1 *)((long)register0x00000008 + -0x80),
                      (undefined1 *)((long)register0x00000008 + -0x60),
                      (undefined1 *)((long)register0x00000008 + -0x48),1);
        (**(code **)(*plVar3 + 0x18))
                  (plVar3,&UNK_110a03f88,(undefined1 *)((long)register0x00000008 + -0x80),param_3);
        *(undefined1 **)((long)register0x00000008 + -0x68) =
             (undefined1 *)((long)register0x00000008 + -0x80);
        FUN_10007e5dc((undefined1 *)((long)register0x00000008 + -0x68));
        puVar4 = puVar5;
        unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x80);
        if (*(char *)((long)register0x00000008 + -0x49) < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)register0x00000008 + -0x60));
          puVar4 = puVar5;
          unaff_x22 = (undefined1 *)((long)register0x00000008 + -0x80);
        }
      }
    }
    param_3 = puVar4;
    unaff_x20 = &PTR____CFConstantStringClassReference_110e1dc18;
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48))
    break;
    func_0x000107c60e78();
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110e1dc18);
    func_0x000107c61170(&PTR____CFConstantStringClassReference_110e1dc18);
    unaff_x30 = FUN_100816a38;
    param_1 = unaff_x20;
    func_0x000107c60bd8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
    unaff_x19 = &PTR____CFConstantStringClassReference_110e1dc18;
    unaff_x21 = plVar3;
  }
  return;
}



/* Entry: 100816a48; end: 100816d5f;  */

long FUN_100816a48(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uStack_284;
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined4 uStack_260;
  undefined4 uStack_250;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  long *plStack_200;
  undefined1 uStack_1f1;
  undefined **ppuStack_1f0;
  undefined4 uStack_1e8;
  undefined2 uStack_1d8;
  undefined2 uStack_1d6;
  undefined1 *puStack_1b8;
  undefined ***pppuStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x000107c61158(PTR_PTR_1126d9e08);
  if (param_2 == 0) {
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_180,param_2);
  }
  puVar2 = &uStack_1f1;
  FUN_1008170bc();
  uStack_260 = 0xf;
  uStack_250 = 0x100;
  ppuStack_268 = &PTR_DAT_11086d7d0;
  uStack_228 = 0;
  uStack_230 = 0;
  lStack_218 = 0;
  lStack_220 = 0;
  plStack_208 = (long *)0x0;
  uStack_210 = 0;
  plStack_200 = (long *)0x0;
  uStack_1d6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_1e8 = 7;
  uStack_1d8 = 0x100;
  ppuStack_1f0 = &PTR_DAT_11089b010;
  lStack_1a0 = 0;
  lStack_1a8 = 0;
  plStack_190 = (long *)0x0;
  uStack_198 = 0;
  plStack_188 = (long *)0x0;
  lStack_280 = 0;
  lStack_278 = 0;
  uStack_270 = 0;
  uStack_284 = 0;
  puVar3 = &uStack_180;
  uStack_238 = param_1;
  puStack_1b8 = puVar2;
  pppuStack_1b0 = &ppuStack_268;
  FUN_1000e77a0(puVar3,&ppuStack_1f0,&lStack_280,&uStack_284);
  func_0x000107c61180();
  if (lStack_280 != 0) {
    lStack_278 = lStack_280;
    func_0x000107c60e14();
  }
  plVar1 = plStack_188;
  ppuStack_1f0 = &PTR_DAT_11089b010;
  plStack_188 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_190;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1a8 != 0) {
    lStack_1a0 = lStack_1a8;
    func_0x000107c60e14();
  }
  plVar1 = plStack_200;
  ppuStack_268 = &PTR_DAT_11086d7d0;
  plStack_200 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_208;
  plStack_208 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_220 != 0) {
    lStack_218 = lStack_220;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_158);
  func_0x000107c61170(uStack_168);
  func_0x000107c61170(uStack_170);
  puVar4 = puVar3;
  func_0x000107c4080c();
  if (puVar4 != (undefined8 *)0x0) {
    lVar7 = *plStack_130;
    do {
      puVar8 = (undefined8 *)0x0;
      do {
        if (*plStack_130 != lVar7) {
          func_0x000107c61128(puVar3);
        }
        puVar5 = PTR_PTR_1126d9e10;
        func_0x000108506454(PTR_PTR_1126d9e10,*(undefined8 *)(lStack_138 + (long)puVar8 * 8));
        func_0x000107c61180();
        func_0x000107c5c28c(param_2);
        func_0x000107c611b0();
        func_0x000107c61170(puVar5);
        puVar8 = (undefined8 *)((long)puVar8 + 1);
      } while (puVar4 != puVar8);
      puVar4 = puVar3;
      func_0x000107c4080c();
    } while (puVar4 != (undefined8 *)0x0);
  }
  func_0x000107c61170(puVar3);
  lVar7 = param_2;
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return lVar7;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(lVar7);
  lVar6 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100816d9c(lVar6,lVar7);
  return lVar6;
}



/* Entry: 100816d60; end: 100816d9b;  */

undefined8 FUN_100816d60(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100816d9c(uVar1,param_1);
  return uVar1;
}



/* Entry: 100816d9c; end: 100816f47;  */

void FUN_100816d9c(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001084d93b8(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001084d9324(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_100816e88:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        func_0x0001084d94b8(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_100816e88;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110a4fcc0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 100816f48; end: 100817047;  */

undefined8 * FUN_100816f48(undefined8 *param_1,int param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  lVar2 = *param_3;
  lVar3 = *param_4;
  if ((*(byte *)(lVar2 + 0x19) & 1) == 0) {
    bVar4 = *(byte *)(lVar3 + 0x19);
  }
  else {
    bVar4 = 1;
  }
  if ((*(byte *)(lVar2 + 0x1a) & 1) == 0) {
    bVar5 = *(byte *)(lVar3 + 0x1a);
  }
  else {
    bVar5 = 1;
  }
  if (param_2 == 4) {
    if ((*(byte *)(lVar2 + 0x1b) & 1) == 0) {
      bVar6 = 0;
      goto LAB_100816fb4;
    }
  }
  else if ((*(byte *)(lVar2 + 0x1b) & 1) != 0) {
    bVar6 = 1;
    goto LAB_100816fb4;
  }
  bVar6 = *(byte *)(lVar3 + 0x1b);
LAB_100816fb4:
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x19) = bVar4 & 1;
  *(byte *)((long)param_1 + 0x1a) = bVar5 & 1;
  *(byte *)((long)param_1 + 0x1b) = bVar6 & 1;
  *param_1 = &PTR_DAT_110a4fc60;
  param_1[7] = lVar2;
  param_1[8] = lVar3;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  lVar2 = *param_3;
  *param_3 = 0;
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = *param_4;
  *param_4 = 0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 100817048; end: 1008170bb; -[SCSQLiteDocObjectTransactionContext fetchForClass:] */

void FUN_100817048(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  param_2 = param_2 + 0x40;
  func_0x000107c61148();
  if (param_2 == 0) {
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    func_0x000107c430a4(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008170bc; end: 100817177;  */

undefined8 FUN_1008170bc(void)

{
  int iVar1;
  
  if ((bRam0000000113827a98 & 1) == 0) {
    iVar1 = 0x13827a98;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam0000000113827a30 = 0xe;
      puRam0000000113827a38 = &UNK_10f4a0d58;
      uRam0000000113827a40 = 0x1010000;
      puRam0000000113827a48 = &UNK_108505a80;
      puRam0000000113827a50 = &UNK_108505ab4;
      ppuRam0000000113827a28 = &PTR_DAT_11086d7d0;
      uRam0000000113827a68 = 0;
      uRam0000000113827a60 = 0;
      uRam0000000113827a78 = 0;
      uRam0000000113827a70 = 0;
      uRam0000000113827a88 = 0;
      uRam0000000113827a80 = 0;
      uRam0000000113827a90 = 0;
      func_0x000107c60e34(&DAT_105187b98,0x113827a28,0x100000000);
      func_0x000107c60e4c(0x113827a98);
    }
  }
  return 0x113827a28;
}



/* Entry: 100817178; end: 1008172d3;  */

undefined * FUN_100817178(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  if (param_2 != 0) {
    func_0x000107c61174(param_1);
    lVar3 = param_1;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_1);
        }
        lVar4 = param_2;
        (**(code **)(param_2 + 0x10))(param_2,*(undefined8 *)(lVar6 * 8));
        func_0x000107c61180();
        if (lVar4 != 0) {
          func_0x000107c3d798(puVar2);
        }
        func_0x000107c61170(lVar4);
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = param_1;
      func_0x000107c4080c();
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return puVar2;
  }
  func_0x000107c60e78();
  return &UNK_10f4a0d67;
}



/* Entry: 1008172d4; end: 1008172df; +[SCStoriesAsyncPostingInfo table] */

undefined * FUN_1008172d4(void)

{
  return &UNK_10f4a0d67;
}



/* Entry: 1008172e0; end: 1008173bf;  */

/* WARNING: Possible PIC construction at 0x00010081733c: Changing call to branch */

void FUN_1008172e0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_DAT_110a4fcc0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puVar2 = (undefined8 *)param_1[9];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[10] = puVar2;
    param_1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1008173c0; end: 10081747f;  */

void FUN_1008173c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3b688();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3dbc0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100818938;
  puStack_48 = &UNK_11084aaa8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar1);
  uStack_40 = uVar3;
  uStack_38 = uVar1;
  func_0x000107c61174(uVar3);
  FUN_10007380c(uVar2,&puStack_60);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 100817480; end: 1008175b7; -[SCMyStoriesDataCoordinator _fetchAndObserveStories] */

void FUN_100817480(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x98) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    func_0x000107c42fac(uVar1);
    func_0x000107c61180();
    func_0x000107c3cc30(param_1);
    func_0x000107c61144(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x000107c4f7c0(uVar2);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_50,auStack_48);
    func_0x000107c4da54();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_50);
    func_0x000107c61120(auStack_48);
    func_0x000107c61170(uVar1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x000107c61174(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1008175b8; end: 1008175f3;  */

undefined8 FUN_1008175b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100817630(uVar1,param_1);
  return uVar1;
}



/* Entry: 1008175f4; end: 10081762f;  */

undefined8 FUN_1008175f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_1008177dc(uVar1,param_1);
  return uVar1;
}



/* Entry: 100817630; end: 1008177db;  */

void FUN_100817630(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      FUN_100817988(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001055b9bf4(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_10081771c:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        func_0x0001055b9c88(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_10081771c;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_11089b010;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1008177dc; end: 100817987;  */

void FUN_1008177dc(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x00010518869c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000105188608(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1008178c8:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        func_0x00010518879c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1008178c8;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_11086d7d0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 100817988; end: 100817b67;  */

undefined8 * FUN_100817988(undefined8 *param_1,int param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  lVar2 = *param_3;
  lVar3 = *param_4;
  if ((*(byte *)(lVar2 + 0x19) & 1) == 0) {
    bVar4 = *(byte *)(lVar3 + 0x19);
  }
  else {
    bVar4 = 1;
  }
  if ((*(byte *)(lVar2 + 0x1a) & 1) == 0) {
    bVar5 = *(byte *)(lVar3 + 0x1a);
  }
  else {
    bVar5 = 1;
  }
  if (param_2 == 4) {
    if ((*(byte *)(lVar2 + 0x1b) & 1) == 0) {
      bVar6 = 0;
      goto LAB_1008179f4;
    }
  }
  else if ((*(byte *)(lVar2 + 0x1b) & 1) != 0) {
    bVar6 = 1;
    goto LAB_1008179f4;
  }
  bVar6 = *(byte *)(lVar3 + 0x1b);
LAB_1008179f4:
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x19) = bVar4 & 1;
  *(byte *)((long)param_1 + 0x1a) = bVar5 & 1;
  *(byte *)((long)param_1 + 0x1b) = bVar6 & 1;
  *param_1 = &PTR_DAT_11089b010;
  param_1[7] = lVar2;
  param_1[8] = lVar3;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  lVar2 = *param_3;
  *param_3 = 0;
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = *param_4;
  *param_4 = 0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 100817b68; end: 100817b77; -[SCStoriesGrapheneMetricsEmitter logNumOfSnapsToKeepSnapViewers:] */

/* WARNING: Removing unreachable block (ram,0x000100817bf8) */

undefined ** FUN_100817b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined4 uStack_24c;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [31];
  undefined1 uStack_211;
  undefined **appuStack_210 [9];
  undefined1 auStack_1c8 [24];
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_e8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_1 + 8);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e1d938;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = ppuVar5;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110e1d938);
  if (lVar2 != 0) {
    plVar3 = *(long **)(lVar2 + 8);
    ppuVar4 = (undefined **)&UNK_110a03c18;
    (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_110a03c18);
    if ((int)plVar3 != 0) {
      plVar3 = *(long **)(lVar2 + 8);
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110e1d938);
      ppuVar4 = ppuVar5;
      func_0x000107c61178(&PTR____CFConstantStringClassReference_110e1d938);
      func_0x000107c3ac4c();
      func_0x000107c61170(&PTR____CFConstantStringClassReference_110e1d938);
      FUN_10002b838(auStack_60,ppuVar4);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      ppuVar4 = (undefined **)&UNK_110a03c18;
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a03c18,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      FUN_10007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        func_0x000107c60e14(auStack_60[0]);
      }
    }
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar5;
  }
  func_0x000107c60e78();
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110e1d938);
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110e1d938);
  func_0x000107c60bd8();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(ppuVar4);
  func_0x000107c61174(ppuVar5);
  func_0x000107c61174(ppuVar4);
  func_0x000107c61158(PTR_PTR_1126d6768);
  if (ppuVar5 == (undefined **)0x0) {
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_1a0,ppuVar5);
  }
  puVar6 = &uStack_211;
  FUN_100818000(puVar6);
  FUN_100818064(auStack_230,ppuVar4);
  FUN_1004c2e3c(appuStack_210,0xd,puVar6,auStack_230);
  puStack_248 = (undefined1 *)0x0;
  puStack_240 = (undefined1 *)0x0;
  uStack_238 = 0;
  uStack_24c = 0;
  puVar7 = &uStack_1a0;
  FUN_1000e77a0(puVar7,appuStack_210,&puStack_248,&uStack_24c);
  func_0x000107c61180();
  if (puStack_248 != (undefined1 *)0x0) {
    puStack_240 = puStack_248;
    func_0x000107c60e14();
  }
  plVar3 = plStack_1a8;
  appuStack_210[0] = &PTR_DAT_110862700;
  plStack_1a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_248 = auStack_1c8;
  FUN_100105004(&puStack_248);
  puStack_248 = auStack_230;
  FUN_100105004(&puStack_248);
  FUN_1000e76e0(&uStack_178);
  func_0x000107c61170(uStack_188);
  func_0x000107c61170(uStack_190);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61174(puVar7);
  puVar8 = puVar7;
  func_0x000107c4080c();
  lVar2 = lRam0000000000000000;
  while (puVar8 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        func_0x000107c61128(puVar7);
      }
      puVar9 = PTR_PTR_1126d6778;
      func_0x00010851f874(PTR_PTR_1126d6778,*(undefined8 *)((long)puVar11 * 8));
      func_0x000107c61180();
      func_0x000107c5c28c(ppuVar5);
      func_0x000107c611b0();
      func_0x000107c61170(puVar9);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar8 != puVar11);
    puVar8 = puVar7;
    func_0x000107c4080c();
  }
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(ppuVar4);
  ppuVar10 = ppuVar5;
  func_0x000107c61170(ppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_e8) {
    func_0x000107c60e78();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(ppuVar5);
    func_0x000107c60bd8(ppuVar10);
    if ((bRam0000000113827d58 & 1) == 0) {
      iVar1 = 0x13827d58;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        func_0x000107c60e34(&DAT_105004938,&PTR_PTR_113263c40,0x100000000);
        func_0x000107c60e4c(0x113827d58);
      }
    }
    return &PTR_PTR_113263c40;
  }
  return ppuVar10;
}



/* Entry: 100817b78; end: 100817d0b;  */

undefined ** FUN_100817b78(long param_1,undefined **param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined4 uStack_24c;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [31];
  undefined1 uStack_211;
  undefined **appuStack_210 [9];
  undefined1 auStack_1c8 [24];
  long *plStack_1b0;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_e8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_2;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    ppuVar4 = (undefined **)&UNK_110a03c18;
    (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_110a03c18);
    if ((int)plVar3 != 0) {
      plVar3 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined **)0x0) {
        ppuVar4 = (undefined **)&UNK_10f44f7d9;
      }
      else {
        ppuVar4 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_60,ppuVar4);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      ppuVar4 = (undefined **)&UNK_110a03c18;
      (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110a03c18,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      FUN_10007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        func_0x000107c60e14(auStack_60[0]);
      }
    }
  }
  ppuVar5 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar5;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(ppuVar4);
  func_0x000107c61174(ppuVar5);
  func_0x000107c61174(ppuVar4);
  func_0x000107c61158(PTR_PTR_1126d6768);
  if (ppuVar5 == (undefined **)0x0) {
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_1a0,ppuVar5);
  }
  puVar6 = &uStack_211;
  FUN_100818000(puVar6);
  FUN_100818064(auStack_230,ppuVar4);
  FUN_1004c2e3c(appuStack_210,0xd,puVar6,auStack_230);
  puStack_248 = (undefined1 *)0x0;
  puStack_240 = (undefined1 *)0x0;
  uStack_238 = 0;
  uStack_24c = 0;
  puVar7 = &uStack_1a0;
  FUN_1000e77a0(puVar7,appuStack_210,&puStack_248,&uStack_24c);
  func_0x000107c61180();
  if (puStack_248 != (undefined1 *)0x0) {
    puStack_240 = puStack_248;
    func_0x000107c60e14();
  }
  plVar3 = plStack_1a8;
  appuStack_210[0] = &PTR_DAT_110862700;
  plStack_1a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1b0;
  plStack_1b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_248 = auStack_1c8;
  FUN_100105004(&puStack_248);
  puStack_248 = auStack_230;
  FUN_100105004(&puStack_248);
  FUN_1000e76e0(&uStack_178);
  func_0x000107c61170(uStack_188);
  func_0x000107c61170(uStack_190);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61174(puVar7);
  puVar8 = puVar7;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (puVar8 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(puVar7);
      }
      puVar9 = PTR_PTR_1126d6778;
      func_0x00010851f874(PTR_PTR_1126d6778,*(undefined8 *)((long)puVar11 * 8));
      func_0x000107c61180();
      func_0x000107c5c28c(ppuVar5);
      func_0x000107c611b0();
      func_0x000107c61170(puVar9);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar8 != puVar11);
    puVar8 = puVar7;
    func_0x000107c4080c();
  }
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(ppuVar4);
  ppuVar10 = ppuVar5;
  func_0x000107c61170(ppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return ppuVar10;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(ppuVar4);
  func_0x000107c61170(ppuVar5);
  func_0x000107c60bd8(ppuVar10);
  if ((bRam0000000113827d58 & 1) == 0) {
    iVar2 = 0x13827d58;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      func_0x000107c60e34(&DAT_105004938,&PTR_PTR_113263c40,0x100000000);
      func_0x000107c60e4c(0x113827d58);
    }
  }
  return &PTR_PTR_113263c40;
}



/* Entry: 100817d0c; end: 100817fff;  */

undefined ** FUN_100817d0c(undefined **param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61158(PTR_PTR_1126d6768);
  if (param_1 == (undefined **)0x0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_120,param_1);
  }
  puVar4 = &uStack_191;
  FUN_100818000(puVar4);
  FUN_100818064(auStack_1b0,param_2);
  FUN_1004c2e3c(appuStack_190,0xd,puVar4,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar5 = &uStack_120;
  FUN_1000e77a0(puVar5,appuStack_190,&puStack_1c8,&uStack_1cc);
  func_0x000107c61180();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    func_0x000107c60e14();
  }
  plVar2 = plStack_128;
  appuStack_190[0] = &PTR_DAT_110862700;
  plStack_128 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_1c8 = auStack_148;
  FUN_100105004(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  FUN_100105004(&puStack_1c8);
  FUN_1000e76e0(&uStack_f8);
  func_0x000107c61170(uStack_108);
  func_0x000107c61170(uStack_110);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61174(puVar5);
  puVar6 = puVar5;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(puVar5);
      }
      puVar7 = PTR_PTR_1126d6778;
      func_0x00010851f874(PTR_PTR_1126d6778,*(undefined8 *)((long)puVar9 * 8));
      func_0x000107c61180();
      func_0x000107c5c28c(param_1);
      func_0x000107c611b0();
      func_0x000107c61170(puVar7);
      puVar9 = (undefined8 *)((long)puVar9 + 1);
    } while (puVar6 != puVar9);
    puVar6 = puVar5;
    func_0x000107c4080c();
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  ppuVar8 = param_1;
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar8;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c60bd8(ppuVar8);
  if ((bRam0000000113827d58 & 1) == 0) {
    iVar3 = 0x13827d58;
    func_0x000107c60e48();
    if (iVar3 != 0) {
      func_0x000107c60e34(&DAT_105004938,&PTR_PTR_113263c40,0x100000000);
      func_0x000107c60e4c(0x113827d58);
    }
  }
  return &PTR_PTR_113263c40;
}



/* Entry: 100818000; end: 100818063;  */

undefined ** FUN_100818000(void)

{
  int iVar1;
  
  if ((bRam0000000113827d58 & 1) == 0) {
    iVar1 = 0x13827d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000107c60e34(&DAT_105004938,&PTR_PTR_113263c40,0x100000000);
      func_0x000107c60e4c(0x113827d58);
    }
  }
  return &PTR_PTR_113263c40;
}



/* Entry: 100818064; end: 1008181c7;  */

void FUN_100818064(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  uVar4 = SUB81(&uStack_120,0);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar1 = param_2;
  func_0x000107c40808();
  iVar3 = (int)lVar1;
  FUN_1004c2bb4(param_1);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x000107c61174(param_2);
  lVar1 = param_2;
  func_0x000107c4080c();
  if (lVar1 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          func_0x000107c61128(param_2);
        }
        uVar5 = *(undefined8 *)(lStack_118 + lVar7 * 8);
        func_0x000107c61174(uVar5);
        iVar3 = (int)auStack_e0;
        auStack_e0[0] = uVar5;
        FUN_1004c2d3c(param_1);
        func_0x000107c61170(auStack_e0[0]);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_2;
      uVar4 = (char)&uStack_120;
      func_0x000107c4080c();
    } while (lVar1 != 0);
  }
  func_0x000107c61170(param_2);
  lVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    if (iVar3 == 0) {
      func_0x000107c60bd8();
    }
    func_0x000104bd46a0();
    plVar2 = &lStack_150;
    pcStack_128 = FUN_1008181c8;
    puStack_148 = PTR_PTR_1126e8330;
    lStack_150 = lVar1;
    puStack_140 = param_1;
    lStack_138 = param_2;
    puStack_130 = &stack0xfffffffffffffff0;
    func_0x000107c61154(&lStack_150,PTR_s_init_1125d9248);
    if (plVar2 != (long *)0x0) {
      *(undefined1 *)((long)plVar2 + 8) = uVar4;
    }
    return;
  }
  return;
}



/* Entry: 1008181c8; end: 10081820f; -[SCUserInfoBoolProperty initWithValue:] */

void FUN_1008181c8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8330;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 100818210; end: 10081827b; +[SCUserInfoProperty boolPropertyWithBoolProperty:] */

void FUN_100818210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126b8998;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10081827c; end: 100818307; -[SCMyStoriesDataCoordinator _updateMyStoriesFetchedResult:] */

void FUN_10081827c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_10050471c(param_3,&PTR___NSConcreteGlobalBlock_11094d2e0,
                &PTR___NSConcreteGlobalBlock_11094d320);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  func_0x000107c61170(uVar1);
  func_0x000107c4e524(*(undefined8 *)(param_1 + 0x78));
  return;
}



/* Entry: 100818308; end: 10081830f;  */

void FUN_100818308(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 100818310; end: 10081831f; -[SCStoriesMyStoryPlaybackSequence storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100818310(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278fc8c);
}



/* Entry: 100818320; end: 100818347;  */

void FUN_100818320(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 100818348; end: 1008184bb;  */

void FUN_100818348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b88f8;
  func_0x000107c61174(param_2);
  func_0x000107c610f4(puVar1);
  ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf5c0;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf5c0);
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c4d9e8(param_2);
  func_0x000107c61180();
  uVar4 = uVar3;
  FUN_1004e5030();
  func_0x000107c61180();
  ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf5f0;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf5f0);
  func_0x000107c61180();
  uVar6 = param_2;
  func_0x000107c4d9e8(param_2);
  func_0x000107c61180();
  uVar7 = uVar6;
  FUN_1004e5030();
  func_0x000107c61180();
  ppuVar8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf5d8;
  func_0x000107c5c1d4(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bf5d8);
  func_0x000107c61180();
  uVar9 = param_2;
  func_0x000107c4d9e8(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  FUN_1008184bc(uVar9);
  func_0x000107c4674c(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(ppuVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(ppuVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008184bc; end: 100818583;  */

undefined1 FUN_1008184bc(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x000107c61174();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x000107c4c694(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  func_0x000107c60bcc(&uStack_40,8);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100818584; end: 1008185b3;  */

void FUN_100818584(long param_1,undefined1 param_2)

{
  func_0x000107c5dc0c();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1008185b4; end: 1008185bb; -[SCUserInfoBoolProperty value] */

undefined1 FUN_1008185b4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1008185bc; end: 10081866f; -[SCUserEmailInfo initWithEmail:pendingEmail:isEmailVerified:] */

undefined1 *
FUN_1008185bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270e0b0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100818670; end: 100818677; -[SCUserEmailInfo email] */

undefined8 FUN_100818670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100818678; end: 100818787; -[SCSnapProRPC initWithNetworkServices:userId:userEmail:circumstanceEngine:] */

undefined1 *
FUN_100818678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126ff480;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
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
    puVar3 = PTR_PTR_1126b10e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100818788; end: 1008187fb; -[SCGrapheneCreatorsMetric2 init] */

undefined1 * FUN_100818788(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff498;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1008187fc; end: 10081886f; -[SCUserEmailInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100818814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100818818) */

void FUN_1008187fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100818870; end: 100818887;  */

void FUN_100818870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100818880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 100818888; end: 1008188a7; -[SCImpalaBusinessProfileManagerListenerAnnouncer .cxx_construct] */

void FUN_100818888(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1008188a8; end: 1008188f3; +[SCMyStoriesDataRequest handleStoriesUpdated] */

void FUN_1008188a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cf360;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008188f4; end: 100818937; -[SCMyStoriesDataRequest internalInit] */

void FUN_1008188f4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112706988;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100818938; end: 100818947;  */

void FUN_100818938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100818944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100818948; end: 10081898f;  */

/* WARNING: Possible PIC construction at 0x00010081897c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100818980) */

void FUN_100818948(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3b8f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100818990; end: 10081899f; -[SCMyStoriesDataCoordinator _announceMyStoriesDataUpdate:] */

void FUN_100818990(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf7e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x50),PTR_s_didUpdateMyStoriesDataRequest__1125bd2f0);
    return;
  }
  return;
}



/* Entry: 1008189a0; end: 100818a0b; -[SCMyStoriesDataCoordinatingListenerAnnouncer didUpdateMyStoriesDataRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008189a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5f1ec(&uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100818a0c; end: 100818ae3; -[SCMyStoriesDataRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100818a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100818a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100818a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100818a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100818a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100818a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100818ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100818acc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100818ab8) */
/* WARNING: Removing unreachable block (ram,0x000100818aa0) */
/* WARNING: Removing unreachable block (ram,0x000100818a88) */
/* WARNING: Removing unreachable block (ram,0x000100818a70) */
/* WARNING: Removing unreachable block (ram,0x000100818a58) */
/* WARNING: Removing unreachable block (ram,0x000100818a40) */
/* WARNING: Removing unreachable block (ram,0x000100818a28) */
/* WARNING: Removing unreachable block (ram,0x000100818ad0) */

void FUN_100818a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xa8,0);
  return;
}



/* Entry: 100818ae4; end: 100818af3; -[SCUserSession setImpalaPreferences:] */

void FUN_100818ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,PTR_LOOP_1132a1df0,param_3,1);
  return;
}



/* Entry: 100818af4; end: 100818c1f; -[SCImpalaBusinessProfileHandlers initWithRPC:isManaged:circumstanceEngine:runtimeProvider:delegate:] */

undefined1 *
FUN_100818af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126ff3b0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x20) = param_4;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x48),param_7);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_6);
    func_0x000107c61174(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100818c20; end: 100818c27; +[SCAttributedCreatorsTask impalaBusinessProfileManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100818c20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b2f8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100818c28; end: 100818c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100818c28(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b2f8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100818c78; end: 100818f13; +[SCAttributedTask creators:] */

void FUN_100818c78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000100818cb0();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100818f14; end: 100818f67;  */

void FUN_100818f14(void)

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



/* Entry: 100818f68; end: 100819127; -[SCProfileHeaderButtonEntryPoint _handleFetchedMyStories:] */

/* WARNING: Possible PIC construction at 0x000100819060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100819070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100819080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100819090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008190f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100819094) */
/* WARNING: Removing unreachable block (ram,0x0001008190a0) */
/* WARNING: Removing unreachable block (ram,0x000100819100) */
/* WARNING: Removing unreachable block (ram,0x0001008190c0) */
/* WARNING: Removing unreachable block (ram,0x000100819084) */
/* WARNING: Removing unreachable block (ram,0x000100819074) */
/* WARNING: Removing unreachable block (ram,0x000100819064) */
/* WARNING: Removing unreachable block (ram,0x0001008190f4) */
/* WARNING: Removing unreachable block (ram,0x000100819108) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100818f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c2fa8;
  func_0x000107c61174(param_3);
  func_0x000107c5000c(puVar1);
  lVar2 = param_1 + _DAT_112731df8;
  func_0x000107c61148(lVar2);
  func_0x000107c4d39c();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_112731e08;
  func_0x000107c61148(lVar3);
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112731dd8);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c3ebcc();
  FUN_100819854(param_3,lVar2,lVar3,uVar4,puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100819128; end: 10081913f; +[SCProfileHeaderButtonABHelpers removeSpotlightMapStoriesThumbnialWithCircumstanceEngine:] */

void FUN_100819128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f15818,0,0);
  return;
}



/* Entry: 100819140; end: 1008191cf; -[SCSnapProUserProfileIdProviderImpl initWithBusinessProfileManager:] */

undefined1 * FUN_100819140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126ff3f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b10e0;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008191d0; end: 100819367; -[SCSnapProUserProfileIdProviderImpl profileIdWithCompletion:] */

void FUN_1008191d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000107c4c228(uVar1);
    func_0x000107c61180();
    uVar4 = uVar1;
    func_0x000107c41214();
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c44690();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar1);
    lVar3 = param_1;
    func_0x000107c3af70(param_1);
    func_0x000107c61180();
    (**(code **)(param_3 + 0x10))(param_3,lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61144(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000107c4c228(uVar1);
    func_0x000107c61180();
    func_0x000107c61174(param_3);
    func_0x000107c6111c(auStack_50,auStack_48);
    uVar4 = uVar1;
    func_0x000107c3d7c8(uVar1);
    func_0x000107c61180();
    func_0x000107c61120(auStack_50);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar1);
    func_0x000107c61120(auStack_48);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 100819368; end: 100819557; -[SCImpalaBusinessProfileManager managedBusinessProfilesResponse] */

void FUN_100819368(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c61174();
  func_0x000107c611a4(param_1);
  lVar6 = *(long *)(param_1 + 0x48);
  if (lVar6 == 0) {
    lVar1 = param_1;
    func_0x000107c4e600(param_1);
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126dc7d0;
    func_0x000107c610f4();
    func_0x000107c458b4(0x40f5180000000000);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(undefined **)(param_1 + 0x48) = puVar2;
    func_0x000107c61170(uVar5);
    puVar2 = PTR_PTR_1126dc828;
    func_0x000107c610f4(PTR_PTR_1126dc828);
    lVar3 = param_1;
    func_0x000107c3eee0(param_1);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    lVar6 = param_1 + 8;
    func_0x000107c61148(lVar6);
    lVar4 = lVar6;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c45b2c(puVar2,param_2,lVar3,lVar1,uVar5,lVar4,*(undefined8 *)(param_1 + 0x20));
    func_0x000107c52f04(*(undefined8 *)(param_1 + 0x48),param_2,puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar3);
    puVar2 = PTR_PTR_1126dc830;
    func_0x000107c610f4(PTR_PTR_1126dc830);
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    lVar6 = param_1 + 0x58;
    func_0x000107c61148(lVar6);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = param_1 + 8;
    func_0x000107c61148(lVar3);
    lVar4 = lVar3;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c48240(puVar2,param_2,uVar7,lVar1,uVar5,lVar6,uVar8,lVar4);
    func_0x000107c55fec(*(undefined8 *)(param_1 + 0x48),param_2,puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar1);
    lVar6 = *(long *)(param_1 + 0x48);
  }
  func_0x000107c61174(lVar6);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 100819558; end: 1008195bf; -[SCImpalaBusinessProfileManager performer] */

void FUN_100819558(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x68);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1008195c0; end: 1008196d3; -[SCDataHandler initWithAutoRefreshTimeInterval:updatesOnAppLaunch:] */

undefined1 * FUN_1008195c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126ff450;
  uStack_50 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    puVar2 = PTR_PTR_1126dc8f8;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x50) = param_1;
    puVar2 = PTR_PTR_1126dc900;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126dc900;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c53fcc(*(undefined8 *)((long)puVar1 + 0x18));
    *(char *)((long)puVar1 + 0x40) = (char)param_4;
    if (param_4 != 0) {
      func_0x000107c3cc4c(puVar1);
      puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      func_0x000107c61180();
      func_0x000107c3d7bc();
      func_0x000107c61170(puVar2);
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1008196d4; end: 100819707; -[SCDataHandlerMetadata init] */

void FUN_1008196d4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ff460;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100819708; end: 100819773; -[SCDataHandlerObserverList init] */

undefined1 * FUN_100819708(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff478;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100819774; end: 10081977f; -[SCDataHandlerObserverList setDelegate:] */

void FUN_100819774(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 100819780; end: 100819823; -[SCImpalaBusinessProfileManager cache] */

void FUN_100819780(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 == 0) {
    lVar4 = param_1 + 8;
    func_0x000107c61148();
    puVar1 = PTR_PTR_1126b9940;
    func_0x000107c610f4(PTR_PTR_1126b9940);
    func_0x000107c478c4();
    lVar2 = lVar4;
    func_0x000107c3eee8(lVar4,param_2,&PTR____CFConstantStringClassReference_110f05878,puVar1);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = lVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(lVar4);
    lVar4 = *(long *)(param_1 + 0x60);
  }
  func_0x000107c61174(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 100819824; end: 100819853;  */

void FUN_100819824(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_1005929c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 100819854; end: 100819d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100819854(undefined **param_1,ulong param_2,undefined8 param_3,uint param_4,uint param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  undefined **ppuVar16;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  long lVar17;
  undefined1 auStack_3f0 [8];
  undefined1 auStack_3e8 [8];
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined1 **ppuStack_390;
  code *pcStack_388;
  undefined8 uStack_380;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_2c0;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined **ppuStack_270;
  undefined **ppuStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined **ppuStack_250;
  uint uStack_248;
  uint uStack_244;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  ulong uStack_218;
  undefined **ppuStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_248 = param_4;
  uStack_244 = param_5;
  func_0x000107c61174();
  uStack_218 = param_2;
  func_0x000107c61174(param_2);
  uStack_208 = param_3;
  func_0x000107c61174(param_3);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuStack_220 = ppuVar1;
  func_0x000107c61160();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  puStack_1b0 = (undefined8 *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  ppuStack_210 = ppuVar16;
  func_0x000107c61174(param_1);
  ppuVar1 = param_1;
  ppuStack_230 = param_1;
  func_0x000107c4080c();
  if (ppuVar1 != (undefined **)0x0) {
    param_1 = (undefined **)*puStack_1b0;
    ppuStack_250 = &PTR____CFConstantStringClassReference_110e43098;
    ppuStack_240 = param_1;
    do {
      unaff_x22 = (undefined **)0x0;
      ppuStack_238 = ppuVar1;
      do {
        if ((undefined **)*puStack_1b0 != param_1) {
          func_0x000107c61128(ppuStack_230);
        }
        unaff_x24 = *(undefined ***)(lStack_1b8 + (long)unaff_x22 * 8);
        ppuVar16 = unaff_x24;
        func_0x000107c5c080();
        if (ppuVar16 != (undefined **)0x0) {
          if (ppuVar16 == (undefined **)0x3) {
            if ((uStack_244 & 1) == 0) {
              ppuVar16 = unaff_x24;
              func_0x000107c5bfec();
              func_0x000107c61180();
              unaff_x25 = ppuVar16;
              func_0x000107c49d0c();
              func_0x000107c61170(ppuVar16);
              if ((int)unaff_x25 != 0) {
                uVar15 = 1;
                goto LAB_1008199ac;
              }
            }
          }
          else {
            uVar15 = 0;
LAB_1008199ac:
            ppuVar1 = unaff_x24;
            ppuStack_228 = unaff_x22;
            func_0x000107c5c068();
            func_0x000107c61180();
            unaff_x28 = ppuVar1;
            FUN_100819d24();
            func_0x000107c61180();
            func_0x000107c61170(ppuVar1);
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            lStack_1f8 = 0;
            uStack_200 = 0;
            uStack_1e8 = 0;
            plStack_1f0 = (long *)0x0;
            unaff_x26 = unaff_x24;
            func_0x000107c5c068();
            func_0x000107c61180();
            ppuVar1 = unaff_x26;
            func_0x000107c4080c();
            if (ppuVar1 != (undefined **)0x0) {
              lVar14 = *plStack_1f0;
              uVar15 = uStack_248 & uVar15;
              unaff_x23 = (undefined **)(ulong)uVar15;
              do {
                ppuVar16 = (undefined **)0x0;
                do {
                  if (*plStack_1f0 != lVar14) {
                    func_0x000107c61128(unaff_x26);
                  }
                  unaff_x24 = *(undefined ***)(lStack_1f8 + (long)ppuVar16 * 8);
                  if (((uVar15 == 0) ||
                      (ppuVar2 = unaff_x24, func_0x000107c2aa24(unaff_x24,unaff_x28),
                      ((ulong)ppuVar2 & 1) == 0)) &&
                     (ppuVar2 = unaff_x24, func_0x0001084d2864(), ((ulong)ppuVar2 & 1) == 0)) {
                    func_0x000107c61174(unaff_x24);
                    ppuVar2 = unaff_x24;
                    func_0x000107c3e37c();
                    func_0x000107c61180();
                    ppuVar3 = ppuVar2;
                    func_0x000107c3e1d4();
                    func_0x000107c61180();
                    func_0x000107c61170();
                    func_0x000107c61170(ppuVar2);
                    unaff_x27 = (undefined **)0x0;
                    if (ppuVar3 == (undefined **)0x0) {
LAB_100819b44:
                      func_0x000107c61170(unaff_x24);
                    }
                    else {
                      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
                      func_0x000107c41324();
                      func_0x000107c61180();
                      puVar5 = puVar4;
                      func_0x000107c4132c(0xc072c00000000000);
                      func_0x000107c61180();
                      func_0x000107c61170(puVar4);
                      ppuVar2 = unaff_x24;
                      func_0x000107c5c9d4();
                      func_0x000107c61180();
                      unaff_x27 = ppuVar2;
                      func_0x000107c5ca64();
                      func_0x000107c2aacc();
                      func_0x000107c61180();
                      func_0x000107c61170(ppuVar2);
                      if (unaff_x27 == (undefined **)0x0) {
                        func_0x000107c61170(puVar5);
                        goto LAB_100819b44;
                      }
                      puVar4 = puVar5;
                      func_0x000107c3fec0();
                      func_0x000107c61170(unaff_x27);
                      func_0x000107c61170(puVar5);
                      func_0x000107c61170(unaff_x24);
                      if (puVar4 == (undefined *)0x1) goto LAB_100819be8;
                    }
                    ppuVar2 = unaff_x24;
                    func_0x000107c40d14();
                    func_0x000107c61180();
                    ppuVar3 = ppuVar2;
                    func_0x000107c49d0c();
                    func_0x000107c61170(ppuVar2);
                    if ((int)ppuVar3 != 0) {
                      ppuVar2 = unaff_x24;
                      func_0x000107c3fb8c(unaff_x24);
                      func_0x000107c61180();
                      uVar6 = uStack_218;
                      func_0x000107c4ec08();
                      func_0x000107c61170(ppuVar2);
                      ppuVar2 = ppuStack_210;
                      if (((6 < uVar6 + 6) || ((1L << (uVar6 + 6 & 0x3f) & 0x45U) == 0)) &&
                         (((uVar6 ^ 0xffffffffffffffff) & 0xfffffffffffffffb) != 0 &&
                          uVar6 != 0xfffffffffffffff9)) {
                        ppuVar2 = ppuStack_220;
                      }
                      func_0x000107c3d798(ppuVar2);
                    }
                  }
LAB_100819be8:
                  ppuVar16 = (undefined **)((long)ppuVar16 + 1);
                } while (ppuVar1 != ppuVar16);
                ppuVar1 = unaff_x26;
                func_0x000107c4080c();
                unaff_x25 = (undefined **)0x0;
              } while (ppuVar1 != (undefined **)0x0);
            }
            func_0x000107c61170(unaff_x26);
            func_0x000107c61170(unaff_x28);
            param_1 = ppuStack_240;
            ppuVar1 = ppuStack_238;
            unaff_x22 = ppuStack_228;
          }
        }
        unaff_x22 = (undefined **)((long)unaff_x22 + 1);
      } while (unaff_x22 != ppuVar1);
      ppuVar1 = ppuStack_230;
      func_0x000107c4080c();
      param_3 = 0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  func_0x000107c61170(ppuStack_230);
  ppuVar16 = ppuStack_210;
  ppuVar2 = ppuStack_210;
  func_0x000107c40808();
  ppuVar1 = ppuStack_220;
  if ((ppuVar2 == (undefined **)0x0) &&
     (ppuVar2 = ppuStack_220, func_0x000107c40808(), ppuVar16 = ppuVar1,
     ppuVar2 == (undefined **)0x0)) {
    ppuVar16 = (undefined **)0x0;
  }
  else {
    unaff_x22 = &PTR___NSConcreteGlobalBlock_110a4fa40;
    func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110a4fa40);
    func_0x000107c5b5b4(ppuVar16);
    func_0x000107c61170(&PTR___NSConcreteGlobalBlock_110a4fa40);
    func_0x000107c4aa28();
    func_0x000107c61180();
  }
  func_0x000107c61170(ppuStack_210);
  func_0x000107c61170(ppuStack_220);
  func_0x000107c61170(uStack_208);
  func_0x000107c61170(uStack_218);
  ppuVar1 = ppuStack_230;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    func_0x000107c60e78();
    pcStack_258 = FUN_100819d24;
    lStack_2c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_2b0 = unaff_x28;
    ppuStack_2a8 = unaff_x27;
    ppuStack_2a0 = unaff_x26;
    ppuStack_298 = unaff_x25;
    ppuStack_290 = unaff_x24;
    ppuStack_288 = unaff_x23;
    ppuStack_280 = unaff_x22;
    uStack_278 = param_3;
    ppuStack_270 = param_1;
    ppuStack_268 = ppuVar16;
    puStack_260 = &stack0xfffffffffffffff0;
    func_0x000107c61174();
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar13 = 0;
    lStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    puStack_370 = (undefined8 *)0x0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    func_0x000107c61174(ppuVar1);
    ppuVar16 = ppuVar1;
    func_0x000107c4080c();
    if (ppuVar16 != (undefined **)0x0) {
      unaff_x27 = (undefined **)*puStack_370;
      unaff_x28 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      do {
        unaff_x22 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_370 != unaff_x27) {
            func_0x000107c61128(ppuVar1);
          }
          unaff_x24 = *(undefined ***)(lStack_378 + (long)unaff_x22 * 8);
          unaff_x25 = unaff_x24;
          func_0x000107c4d1b8();
          func_0x000107c61180();
          unaff_x23 = unaff_x25;
          func_0x000107c3ee04();
          func_0x000107c61180();
          func_0x000107c61170(unaff_x25);
          ppuVar3 = unaff_x23;
          func_0x000107c4adac();
          if (ppuVar3 != (undefined **)0x0) {
            ppuVar3 = ppuVar2;
            func_0x000107c4d9e8();
            func_0x000107c61180();
            func_0x000107c61170();
            if (ppuVar3 == (undefined **)0x0) {
              func_0x000107c56bd8(ppuVar2);
            }
            ppuVar3 = ppuVar2;
            func_0x000107c4d9e8();
            func_0x000107c61180();
            unaff_x26 = ppuVar3;
            func_0x000107c49820();
            func_0x000107c61170(ppuVar3);
            func_0x000107c4d1b8();
            func_0x000107c61180();
            unaff_x25 = unaff_x24;
            func_0x000107c51c0c();
            func_0x000107c61170(unaff_x24);
            unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c4d960();
            func_0x000107c61180();
            func_0x000107c56bd8(ppuVar2);
            func_0x000107c61170(unaff_x24);
          }
          func_0x000107c61170(unaff_x23);
          unaff_x22 = (undefined **)((long)unaff_x22 + 1);
        } while (ppuVar16 != unaff_x22);
        ppuVar16 = ppuVar1;
        func_0x000107c4080c();
      } while (ppuVar16 != (undefined **)0x0);
    }
    func_0x000107c61170(ppuVar1);
    ppuVar16 = ppuVar2;
    func_0x000107c40794();
    func_0x000107c61170(ppuVar2);
    ppuVar3 = ppuVar1;
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c0) {
      func_0x000107c60e78();
      pcStack_388 = FUN_100819f4c;
      lVar14 = (long)ppuVar3 + (long)_DAT_112731de4;
      ppuStack_3e0 = unaff_x28;
      ppuStack_3d8 = unaff_x27;
      ppuStack_3d0 = unaff_x26;
      ppuStack_3c8 = unaff_x25;
      ppuStack_3c0 = unaff_x24;
      ppuStack_3b8 = unaff_x23;
      ppuStack_3b0 = unaff_x22;
      ppuStack_3a8 = ppuVar16;
      ppuStack_3a0 = ppuVar2;
      ppuStack_398 = ppuVar1;
      ppuStack_390 = &puStack_260;
      func_0x000107c61148();
      lVar17 = lVar14;
      func_0x000107c3e550();
      func_0x000107c61180();
      lVar7 = lVar17;
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar8 = lVar7;
      func_0x000107c3e544();
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar17);
      func_0x000107c61170(lVar14);
      lVar17 = (long)_DAT_112731de8;
      lVar14 = (long)ppuVar3 + lVar17;
      func_0x000107c61148(lVar14);
      lVar7 = lVar14;
      func_0x000107c51d3c();
      func_0x000107c61180();
      lVar9 = lVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar10 = lVar9;
      func_0x000107c51d04();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar14);
      lVar14 = lVar8;
      func_0x000107c4adac();
      if (lVar14 == 0) {
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c450cc(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c61180();
        puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c61180();
        func_0x000107c51820();
        puVar12 = puVar4;
        func_0x000107c5182c(0x4044000000000000,0x4044000000000000,uVar13,puVar4);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c3cc84(ppuVar3);
        func_0x000107c61170(puVar12);
      }
      else {
        puVar5 = (undefined *)((long)ppuVar3 + (long)_DAT_112731e14);
        func_0x000107c61148();
        puVar12 = puVar5;
        func_0x000107c3e944();
        func_0x000107c61180();
        puVar11 = puVar12;
        func_0x000107c5c734();
        func_0x000107c61180();
        puVar4 = puVar11;
        func_0x000107c41050();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar5);
        if (puVar4 != (undefined *)0x0) {
          func_0x000107c3bbac(ppuVar3);
        }
        func_0x000107c61144(auStack_3e8,ppuVar3);
        puVar5 = PTR_PTR_1126b4bc0;
        func_0x000107c610f4(PTR_PTR_1126b4bc0);
        lVar14 = (long)ppuVar3 + (long)_DAT_112731e08;
        func_0x000107c61148(lVar14);
        lVar7 = lVar14;
        func_0x000107c5da60();
        func_0x000107c61180();
        lVar9 = lVar7;
        func_0x000107c5d984();
        func_0x000107c61180();
        func_0x000107c491d0(puVar5);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar14);
        lVar17 = (long)ppuVar3 + lVar17;
        func_0x000107c61148(lVar17);
        lVar14 = lVar17;
        func_0x000107c51d00();
        func_0x000107c61180();
        lVar7 = lVar14;
        func_0x000107c5c734();
        func_0x000107c61180();
        uVar13 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_112731dcc);
        func_0x000107c4f7c0(uVar13);
        func_0x000107c61180();
        func_0x000107c6111c(auStack_3f0,auStack_3e8);
        func_0x000107c4329c(lVar7);
        func_0x000107c611b0();
        func_0x000107c61170(uVar13);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar14);
        func_0x000107c61170(lVar17);
        func_0x000107c61120(auStack_3f0);
        func_0x000107c61170(puVar5);
        func_0x000107c61120(auStack_3e8);
      }
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(lVar8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar16);
  return;
}



/* Entry: 100819d24; end: 100819f4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100819d24(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  undefined **unaff_x28;
  long lVar12;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined **ppuStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  func_0x000107c61174();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  uVar11 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000107c61174(param_1);
  lVar2 = param_1;
  func_0x000107c4080c();
  if (lVar2 != 0) {
    unaff_x27 = *plStack_120;
    unaff_x28 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x22 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          func_0x000107c61128(param_1);
        }
        unaff_x24 = *(undefined **)(lStack_128 + unaff_x22 * 8);
        unaff_x25 = unaff_x24;
        func_0x000107c4d1b8();
        func_0x000107c61180();
        unaff_x23 = unaff_x25;
        func_0x000107c3ee04();
        func_0x000107c61180();
        func_0x000107c61170(unaff_x25);
        puVar3 = unaff_x23;
        func_0x000107c4adac();
        if (puVar3 != (undefined *)0x0) {
          puVar3 = puVar1;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          func_0x000107c61170();
          if (puVar3 == (undefined *)0x0) {
            func_0x000107c56bd8(puVar1);
          }
          puVar3 = puVar1;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          unaff_x26 = puVar3;
          func_0x000107c49820();
          func_0x000107c61170(puVar3);
          func_0x000107c4d1b8();
          func_0x000107c61180();
          unaff_x25 = unaff_x24;
          func_0x000107c51c0c();
          func_0x000107c61170(unaff_x24);
          unaff_x24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c4d960();
          func_0x000107c61180();
          func_0x000107c56bd8(puVar1);
          func_0x000107c61170(unaff_x24);
        }
        func_0x000107c61170(unaff_x23);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar2 != unaff_x22);
      lVar2 = param_1;
      func_0x000107c4080c();
    } while (lVar2 != 0);
  }
  func_0x000107c61170(param_1);
  puVar3 = puVar1;
  func_0x000107c40794();
  func_0x000107c61170(puVar1);
  lVar2 = param_1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  func_0x000107c60e78();
  pcStack_138 = FUN_100819f4c;
  lVar4 = lVar2 + _DAT_112731de4;
  ppuStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  puStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  lStack_160 = unaff_x22;
  puStack_158 = puVar3;
  puStack_150 = puVar1;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000107c61148();
  lVar12 = lVar4;
  func_0x000107c3e550();
  func_0x000107c61180();
  lVar5 = lVar12;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c3e544();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar4);
  lVar12 = (long)_DAT_112731de8;
  lVar4 = lVar2 + lVar12;
  func_0x000107c61148(lVar4);
  lVar5 = lVar4;
  func_0x000107c51d3c();
  func_0x000107c61180();
  lVar7 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c51d04();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  lVar4 = lVar6;
  func_0x000107c4adac();
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c450cc(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c51820();
    puVar10 = puVar1;
    func_0x000107c5182c(0x4044000000000000,0x4044000000000000,uVar11,puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c3cc84(lVar2);
    func_0x000107c61170(puVar10);
  }
  else {
    puVar3 = (undefined *)(lVar2 + _DAT_112731e14);
    func_0x000107c61148();
    puVar10 = puVar3;
    func_0x000107c3e944();
    func_0x000107c61180();
    puVar9 = puVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar1 = puVar9;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar3);
    if (puVar1 != (undefined *)0x0) {
      func_0x000107c3bbac(lVar2);
    }
    func_0x000107c61144(auStack_198,lVar2);
    puVar3 = PTR_PTR_1126b4bc0;
    func_0x000107c610f4(PTR_PTR_1126b4bc0);
    lVar4 = lVar2 + _DAT_112731e08;
    func_0x000107c61148(lVar4);
    lVar5 = lVar4;
    func_0x000107c5da60();
    func_0x000107c61180();
    lVar7 = lVar5;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c491d0(puVar3);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    lVar12 = lVar2 + lVar12;
    func_0x000107c61148(lVar12);
    lVar4 = lVar12;
    func_0x000107c51d00();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(lVar2 + _DAT_112731dcc);
    func_0x000107c4f7c0(uVar11);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_1a0,auStack_198);
    func_0x000107c4329c(lVar5);
    func_0x000107c611b0();
    func_0x000107c61170(uVar11);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar12);
    func_0x000107c61120(auStack_1a0);
    func_0x000107c61170(puVar3);
    func_0x000107c61120(auStack_198);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 100819f4c; end: 10081a2fb; -[SCProfileHeaderButtonEntryPoint _fetchIconForBitmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100819f4c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  lVar1 = param_2 + _DAT_112731de4;
  func_0x000107c61148();
  lVar11 = lVar1;
  func_0x000107c3e550();
  func_0x000107c61180();
  lVar2 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3e544();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar1);
  lVar11 = (long)_DAT_112731de8;
  lVar1 = param_2 + lVar11;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c51d3c();
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c51d04();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = lVar3;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c450cc(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c61180();
    puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c51820();
    puVar9 = puVar7;
    func_0x000107c5182c(0x4044000000000000,0x4044000000000000,param_1,puVar7);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c3cc84(param_2);
    func_0x000107c61170(puVar9);
  }
  else {
    puVar8 = (undefined *)(param_2 + _DAT_112731e14);
    func_0x000107c61148();
    puVar9 = puVar8;
    func_0x000107c3e944();
    func_0x000107c61180();
    puVar6 = puVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar7 = puVar6;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c3bbac(param_2);
    }
    func_0x000107c61144(auStack_68,param_2);
    puVar8 = PTR_PTR_1126b4bc0;
    func_0x000107c610f4(PTR_PTR_1126b4bc0);
    lVar1 = param_2 + _DAT_112731e08;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c5da60();
    func_0x000107c61180();
    lVar4 = lVar2;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c491d0(puVar8);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    lVar11 = param_2 + lVar11;
    func_0x000107c61148(lVar11);
    lVar1 = lVar11;
    func_0x000107c51d00();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(param_2 + _DAT_112731dcc);
    func_0x000107c4f7c0(uVar10);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    func_0x000107c4329c(lVar2);
    func_0x000107c611b0();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar11);
    func_0x000107c61120(auStack_70);
    func_0x000107c61170(puVar8);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 10081a2fc; end: 10081a323;  */

void FUN_10081a2fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14e710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_scaledImageToSize_scale_maskToOv_1126313e0,1,0,0);
  return;
}



/* Entry: 10081a324; end: 10081a497;  */

void FUN_10081a324(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_88;
  double dStack_80;
  byte bStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  
  dVar2 = param_1;
  dVar3 = param_2;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c5b078(param_4);
  if (((dVar2 == 0.0) || (func_0x000107c5b078(param_4), dVar3 == 0.0)) ||
     ((uVar1 = param_4, func_0x000107c3bb04(param_1,param_2,param_3), (param_6 & 1) == 0 &&
      ((int)uVar1 != 0)))) {
    func_0x000107c61174(param_4);
  }
  else {
    func_0x000107c6110c();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10081aa0c;
    puStack_a8 = &UNK_110d58b50;
    dStack_88 = param_1;
    dStack_80 = param_2;
    bStack_78 = param_6;
    func_0x000107c61174(param_8);
    uStack_76 = (undefined1)param_7;
    uStack_a0 = param_8;
    uStack_98 = param_4;
    uStack_77 = param_10;
    func_0x000107c61174(param_9);
    uStack_90 = param_9;
    func_0x000107c500cc(param_1,param_2,param_3,param_4,param_5,param_7,&puStack_c0);
    func_0x000107c61180();
    func_0x000107c61170(uStack_90);
    func_0x000107c61170(uStack_a0);
    func_0x000107c61108(uVar1);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10081a498; end: 10081a4fb;  */

bool FUN_10081a498(double param_1,double param_2,double param_3,undefined8 param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1;
  dVar3 = param_2;
  func_0x000107c51820();
  if (dVar2 == param_3) {
    func_0x000107c5b078(param_4);
    bVar1 = false;
    if (dVar3 == param_2) {
      bVar1 = dVar2 == param_1;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 10081a4fc; end: 10081a5a7;  */

void FUN_10081a4fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61174(param_7);
  func_0x000107c450f4(param_4);
  func_0x000107c61180();
  func_0x000107c500d0(param_1,param_2,param_3,puVar1,param_5,param_6,param_4,param_7);
  func_0x000107c61180();
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10081a5a8; end: 10081a6a7;  */

void FUN_10081a5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  if (((bRam00000001137f7838 & 1) == 0) &&
     (puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0, func_0x000107c4a02c(), (int)puVar1 != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x000107c3efb4();
    func_0x000107c61180();
    func_0x000107c40808();
    func_0x000107c5c274(puVar1);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(puVar1);
  }
  FUN_10081a6a8(param_1,param_2,param_3,param_4,param_6,param_8);
  func_0x000107c61180();
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10081a6a8; end: 10081a7e7;  */

void FUN_10081a6a8(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_6);
  func_0x000107c61168(param_4);
  puVar3 = (undefined *)0x0;
  if ((0.0 < param_1) && (0.0 < param_2)) {
    puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
    func_0x000107c415a4(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
    func_0x000107c61180();
    func_0x000107c58bfc(param_3);
    func_0x000107c56f90(puVar1);
    func_0x000107c576ac(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f4(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486fc(param_1,param_2);
    func_0x000107c61174(param_6);
    puVar3 = puVar2;
    func_0x000107c45138(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(param_6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


