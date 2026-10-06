/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a46ba4; end: 100a46beb; -[SCSystemScopeGraphBridgeSaberEntryPoint systemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a46ba4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d9e9c8;
  func_0x000107c61428(param_1 + _DAT_112d9e9c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a46bec; end: 100a46c0b;  */

void FUN_100a46bec(void)

{
  func_0x000107c61168(&PTR_PTR_1127d64e8);
  return;
}



/* Entry: 100a46c0c; end: 100a46cdb;  */

undefined8 FUN_100a46c0c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112d9e848,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10009ca38();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a46cdc; end: 100a46ce7;  */

void FUN_100a46cdc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 100a46ce8; end: 100a46d43;  */

void FUN_100a46ce8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100a46d44(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100a46d44; end: 100a46ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a46d44(undefined8 param_1)

{
  undefined8 uVar1;
  ulong *unaff_x20;
  undefined1 auStack_60 [16];
  long lStack_38;
  
  uVar1 = 0;
  func_0x000107c60188(0,*(undefined8 *)
                         ((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50));
  FUN_100087bd4(&lStack_38,FUN_100a46e84,auStack_60,uVar1);
  if (lStack_38 != 0) {
    func_0x000107c42c1c(param_1);
    func_0x000107c61170(lStack_38);
  }
  return;
}



/* Entry: 100a46ddc; end: 100a46e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a46ddc(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_113092400);
  *(undefined8 *)(param_2 + _DAT_113092400) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar3);
  lVar2 = *(long *)(param_2 + _DAT_1130923f0);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c615f0();
    func_0x000107c614a0();
    if (lVar1 != 0) {
      *param_1 = lVar1;
      return;
    }
    func_0x000107c615e8(lVar2);
  }
  *param_1 = 0;
  return;
}



/* Entry: 100a46e84; end: 100a46e9b;  */

void FUN_100a46e84(void)

{
  long unaff_x20;
  
  FUN_100a46ddc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100a46e9c; end: 100a46e9f;  */

void FUN_100a46e9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 100a46ea0; end: 100a46eff; -[SCOptionalMultiScopeContainer exposeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a46ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1;
  func_0x000107c49cd8();
  if ((int)lVar1 != 0) {
    func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_11278caa4),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100a46f00; end: 100a46f17; -[SCOptionalMultiScopeContainer isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100a46f00(long param_1)

{
  return *(long *)(param_1 + _DAT_11278caa4) != 0;
}



/* Entry: 100a46f18; end: 100a47147; -[SCMultiScopeContainer exposeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a46f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  func_0x000107c61174(param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d964();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_98 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  lVar5 = (long)_DAT_11278ca00;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_100a47148;
  puStack_b0 = &UNK_11084fa08;
  lStack_a8 = param_1;
  puStack_88 = puStack_98;
  func_0x000107c61174();
  puStack_a0 = puVar2;
  FUN_10006eaa4(uVar4,&puStack_c8);
  if ((*(byte *)(puStack_88 + 3) & 1) != 0) goto LAB_100a470d8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_100a47194;
  pcStack_d8 = FUN_100a479f0;
  uStack_d0 = 0;
  puStack_128 = puVar1;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_100a471a4;
  puStack_110 = &UNK_11084b9d0;
  lStack_108 = param_1;
  puStack_100 = &uStack_f8;
  puStack_f0 = &uStack_f8;
  FUN_10006eaa4(*(undefined8 *)(param_1 + lVar5),&puStack_128);
  if (puStack_f0[5] == 0) {
    lVar3 = *(long *)(param_1 + _DAT_11278c9f4);
    (**(code **)(lVar3 + 0x10))();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar4 = puStack_f0[5];
      puStack_f0[5] = lVar3;
      func_0x000107c61170(uVar4);
      goto LAB_100a47078;
    }
  }
  else {
LAB_100a47078:
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    puStack_160 = puVar1;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_100a47374;
    puStack_148 = &UNK_11084fa08;
    lStack_140 = param_1;
    func_0x000107c61174(puVar2);
    puStack_138 = puVar2;
    puStack_130 = &uStack_f8;
    FUN_10006eaa4(uVar4,&puStack_160);
    func_0x000107c42c1c(puStack_f0[5]);
    func_0x000107c61170(puStack_138);
  }
  func_0x000107c60bcc(&uStack_f8,8);
  func_0x000107c61170(uStack_d0);
LAB_100a470d8:
  func_0x000107c61170(puStack_a0);
  func_0x000107c60bcc(&uStack_90,8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a47148; end: 100a47193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a47148(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278c9f8);
  func_0x000107c4d9e8(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61180();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = lVar1 != 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100a47194; end: 100a471a3;  */

void FUN_100a47194(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100a471a4; end: 100a47307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a471a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = (long)_DAT_11278c9fc;
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + lVar6);
  func_0x000107c61174(lVar3);
  lVar4 = lVar3;
  func_0x000107c4080c(lVar3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar4 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          func_0x000107c61128(lVar3);
        }
        lVar5 = *(long *)(lStack_128 + lVar8 * 8);
        lVar1 = lVar5;
        func_0x000107c5194c();
        func_0x000107c61180();
        func_0x000107c61170();
        if (lVar1 == 0) {
          lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
          func_0x000107c61174(lVar5);
          uVar2 = *(undefined8 *)(lVar4 + 0x28);
          *(long *)(lVar4 + 0x28) = lVar5;
          func_0x000107c61170(uVar2);
          goto LAB_100a472a8;
        }
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar3;
      func_0x000107c4080c(lVar3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar4 != 0);
  }
LAB_100a472a8:
  func_0x000107c61170();
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + lVar6);
    func_0x000107c4ff80();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    lVar4 = lVar3 + 0x28;
    func_0x000107c61148();
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar4;
      func_0x000107c51960(lVar4,param_2,*(undefined8 *)(lVar3 + 0x20));
      func_0x000107c61180();
    }
    func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
    return;
  }
  return;
}



/* Entry: 100a47308; end: 100a47373;  */

void FUN_100a47308(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c51960(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100a47374; end: 100a47393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a47374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278c9f8),
             PTR_s_setObject_forKeyedSubscript__112651bb8,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100a47394; end: 100a474eb; -[SCScopeContainer exposeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a47394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_100a474ec;
  puStack_78 = &UNK_1108ba7c8;
  lStack_70 = param_1;
  func_0x000107c61174(param_3);
  ppuVar1 = &puStack_90;
  uStack_68 = param_3;
  func_0x000107c61184();
  lVar5 = (long)_DAT_11278ca24;
  iVar4 = (int)*(undefined8 *)(param_1 + lVar5);
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c40fcc(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c61180();
  func_0x000107c49cec();
  func_0x000107c61170(puVar2);
  if (iVar4 == 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x000107c61174(ppuVar1);
    func_0x000107c61174(param_3);
    func_0x000107c3d7d8(uVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(ppuVar1);
  }
  else {
    (*(code *)ppuVar1[2])(ppuVar1,param_3);
  }
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a474ec; end: 100a4771f;  */

/* WARNING: Possible PIC construction at 0x000100a47540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a47610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a47620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a4764c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a47664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a476b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a476dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a476ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a475b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a476f0) */
/* WARNING: Removing unreachable block (ram,0x000100a476bc) */
/* WARNING: Removing unreachable block (ram,0x000100a47668) */
/* WARNING: Removing unreachable block (ram,0x000100a47624) */
/* WARNING: Removing unreachable block (ram,0x000100a47614) */
/* WARNING: Removing unreachable block (ram,0x000100a47544) */
/* WARNING: Removing unreachable block (ram,0x000100a476e0) */
/* WARNING: Removing unreachable block (ram,0x000100a47548) */
/* WARNING: Removing unreachable block (ram,0x000100a475a4) */
/* WARNING: Removing unreachable block (ram,0x000100a4755c) */
/* WARNING: Removing unreachable block (ram,0x000100a475bc) */
/* WARNING: Removing unreachable block (ram,0x000100a47650) */
/* WARNING: Removing unreachable block (ram,0x000100a475c0) */
/* WARNING: Removing unreachable block (ram,0x000100a4756c) */
/* WARNING: Removing unreachable block (ram,0x000100a475dc) */
/* WARNING: Removing unreachable block (ram,0x000100a47588) */
/* WARNING: Removing unreachable block (ram,0x000100a475e4) */
/* WARNING: Removing unreachable block (ram,0x000100a475e8) */
/* WARNING: Removing unreachable block (ram,0x000100a475fc) */
/* WARNING: Removing unreachable block (ram,0x000100a4760c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a474ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
  func_0x000107c611a4(uVar1);
  func_0x000107c61148(*(long *)(param_1 + 0x20) + (long)_DAT_11278ca34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100a47720; end: 100a477fb; -[SCLifecycleCleanupScopeRemoval initWithCompletionQueue:] */

undefined1 * FUN_100a47720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112705720;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = 0;
    func_0x000107c60f4c(0,0x11,0);
    func_0x000107c61180();
    puVar3 = &UNK_10f7275d5;
    func_0x000107c60f50(&UNK_10f7275d5,uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a477fc; end: 100a478cb; -[SCScopeLifecycle scopeContainer:exposingScope:] */

/* WARNING: Possible PIC construction at 0x000100a47848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a47874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a47888: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a47878) */
/* WARNING: Removing unreachable block (ram,0x000100a4784c) */
/* WARNING: Removing unreachable block (ram,0x000100a47884) */
/* WARNING: Removing unreachable block (ram,0x000100a47850) */
/* WARNING: Removing unreachable block (ram,0x000100a4788c) */

void FUN_100a477fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  func_0x000107c611a8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a478cc; end: 100a4797b; -[SCMutliplexingScopeLifecycleMonitor scope:willBeExposedFromLifecycle:] */

void FUN_100a478cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100a4797c;
  puStack_48 = &UNK_110cb7588;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3b75c(param_1,param_2,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a4797c; end: 100a47987;  */

void FUN_100a4797c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_scope_willBeExposedFromLifecycle_112631b80,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100a47988; end: 100a4798b; -[SCStartupScopeLifecycleMonitor scope:willBeExposedFromLifecycle:] */

void FUN_100a47988(void)

{
  return;
}



/* Entry: 100a4798c; end: 100a4798f; -[SCNoOpScopeLifecycleMonitor scope:willBeExposedFromLifecycle:] */

void FUN_100a4798c(void)

{
  return;
}



/* Entry: 100a47990; end: 100a47997; -[SCScopeLifecycle _addScopeLifecycleContainer:] */

void FUN_100a47990(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befb190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_addScopeLifeCycleContainer__11259c608);
  return;
}



/* Entry: 100a47998; end: 100a479ef; -[SCScopeLifecycleBeginScheduler addScopeLifeCycleContainer:] */

void FUN_100a47998(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  if ((*(char *)(param_1 + 0x10) == '\x01') && (*(long *)(param_1 + 0x18) == 0)) {
    func_0x000107c3e7a0(param_3);
  }
  else {
    func_0x000107c3d798(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100a479f0; end: 100a479ff;  */

void FUN_100a479f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100a47a00; end: 100a47a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a47a00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [16];
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_40 = param_2;
    uStack_38 = uVar1;
    FUN_100087bd4(FUN_100a47c54,auStack_50,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100a47a90; end: 100a47c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a47a90(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar6 = *(undefined8 *)(param_1 + _DAT_113092548);
  *(undefined8 *)(param_1 + _DAT_113092548) = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61170(uVar6);
  lVar7 = *(long *)(param_1 + _DAT_113092550);
  if (lVar7 != 0) {
    lVar8 = *(long *)(param_1 + _DAT_113092558);
    if (lVar8 != 0) {
      lVar9 = ((long *)(param_1 + _DAT_113092550))[1];
      lVar10 = ((long *)(param_1 + _DAT_113092558))[1];
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_100a47e58;
      puStack_78 = &UNK_1107a3b48;
      lStack_70 = lVar7;
      lStack_68 = lVar9;
      func_0x000107c60bc4(&puStack_90);
      lVar3 = lStack_68;
      func_0x000100a47c84(lVar7,lVar9);
      func_0x000100a47c84(lVar7,lVar9);
      func_0x000100a47c84(lVar8,lVar10);
      func_0x000107c61574(lVar3);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_100ba5314;
      puStack_78 = &UNK_1107a3b70;
      lStack_70 = lVar8;
      lStack_68 = lVar10;
      func_0x000107c60bc4(&puStack_90);
      lVar3 = lStack_68;
      func_0x000107c6157c(lVar10);
      func_0x000107c61574(lVar3);
      func_0x000107c42c14(param_2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c60bd0(ppuVar4);
      puVar1 = (undefined8 *)(param_1 + _DAT_113092550);
      uVar6 = *puVar1;
      uVar2 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_1003c945c(uVar6,uVar2);
      puVar1 = (undefined8 *)(param_1 + _DAT_113092558);
      uVar6 = *puVar1;
      uVar2 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      FUN_1003c945c(uVar6,uVar2);
      FUN_1003c945c(lVar8,lVar10);
      FUN_1003c945c(lVar7,lVar9);
    }
  }
  return;
}



/* Entry: 100a47c54; end: 100a47c6b;  */

void FUN_100a47c54(void)

{
  long unaff_x20;
  
  FUN_100a47a90(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100a47c6c; end: 100a47c97;  */

void FUN_100a47c6c(long param_1,long param_2)

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



/* Entry: 100a47c98; end: 100a47d9f; -[SCPlugInScopeContainer exposePlugInScope:onPlugInsRegistered:] */

/* WARNING: Possible PIC construction at 0x000100a47cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a47d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a47d7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a47d18) */
/* WARNING: Removing unreachable block (ram,0x000100a47cf8) */
/* WARNING: Removing unreachable block (ram,0x000100a47d80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a47c98(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_1;
  func_0x000107c3afec();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + (long)_DAT_11278ca18));
    func_0x000107c61180();
    func_0x000107c3ade0(param_1);
  }
  else {
    func_0x000107c61184();
    param_3 = *(long *)(param_1 + (long)_DAT_11278ca1c);
    *(undefined8 *)(param_1 + (long)_DAT_11278ca1c) = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100a47da0; end: 100a47dd7; -[SCPlugInScopeContainer _canExpose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100a47da0(long param_1)

{
  param_1 = param_1 + _DAT_11278ca20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100a47dd8; end: 100a47e57; -[SCPlugInSetRegistry init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100a47dd8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705738;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ca0c);
    *(undefined **)((long)puVar1 + (long)_DAT_11278ca0c) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11278ca10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100a47e58; end: 100a47edb;  */

void FUN_100a47e58(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  FUN_1006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  FUN_100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100a47edc; end: 100a47ee3;  */

void FUN_100a47edc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  func_0x000107c61180();
  func_0x000107c60234(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 100a47ee4; end: 100a47f67;  */

void FUN_100a47ee4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  FUN_1006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  FUN_100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100a47f68; end: 100a47ff7;  */

void FUN_100a47f68(undefined8 param_1,undefined8 param_2,long param_3)

{
  (**(code **)(param_3 + 0x10))(param_3,param_2);
  func_0x000107c61180();
  func_0x000107c60234(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 100a47ff8; end: 100a4806b; -[SCComposerSystemSessionImageLoadersRegistryScope initWithPlugInRegistry:] */

undefined1 * FUN_100a47ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fd588;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a4806c; end: 100a480af;  */

void FUN_100a4806c(void)

{
  undefined *puVar1;
  
  if (puRam000000011300b638 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ada80;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam000000011300b638 = puVar1;
  return;
}



/* Entry: 100a480b0; end: 100a48127; -[SCPlugInScopeContainer scopeContainer:exposingScope:] */

/* WARNING: Possible PIC construction at 0x000100a48100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a48104) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a480b0(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  
  func_0x000107c61174(param_4);
  uVar1 = param_1;
  func_0x000107c3afec();
  if ((uVar1 & 1) == 0) {
    func_0x000107c3ade0(param_1,param_2,param_4);
  }
  else {
    param_4 = param_1 + (long)_DAT_11278ca20;
    func_0x000107c61148(param_4);
    func_0x000107c51958();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100a48128; end: 100a48133;  */

void FUN_100a48128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100a48134; end: 100a48157;  */

void FUN_100a48134(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a48158; end: 100a4815f;  */

void FUN_100a48158(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100a48160; end: 100a481cb; -[SCTstSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a48160(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305d300,0);
  *(undefined8 *)(param_1 + _DAT_11305d308) = 0;
  *(undefined8 *)(param_1 + _DAT_11305d310) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a481cc; end: 100a48277; -[SCTstSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a481cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a48278(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a48278; end: 100a4840f;  */

void FUN_100a48278(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e141e0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1ebe20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "TstSystemScopeGraphBridge/SCTstSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4a,2,0x2c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a48410);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a0c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a48410; end: 100a48467; -[SCTstSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a48410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305d300;
  func_0x000107c61428(param_1 + _DAT_11305d300,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a48468; end: 100a484cb; -[SCTstSystemScopeGraphBridgeSaberEntryPoint setTstSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a48468(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305d308;
  func_0x000107c61428(param_1 + _DAT_11305d308,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a484cc; end: 100a484f3; -[SCTstSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a484cc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a484f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a484f4; end: 100a48627;  */

/* WARNING: Possible PIC construction at 0x000100a485ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a485c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a485e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a485b0) */
/* WARNING: Removing unreachable block (ram,0x000100a485cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a484f4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5d090();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a486b8();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a486d8();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a48628);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_11305d0b8) = lVar5;
    *(long *)(lVar4 + _DAT_11305d0c0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a48628; end: 100a4866f; -[SCTstSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a48628(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305d300;
  func_0x000107c61428(param_1 + _DAT_11305d300,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a48670; end: 100a486b7; -[SCTstSystemScopeGraphBridgeSaberEntryPoint tstSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a48670(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305d308;
  func_0x000107c61428(param_1 + _DAT_11305d308,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a486b8; end: 100a486d7;  */

void FUN_100a486b8(void)

{
  func_0x000107c61168(&PTR_PTR_11298b630);
  return;
}



/* Entry: 100a486d8; end: 100a487a7;  */

undefined8 FUN_100a486d8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x11305d290,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1000955f0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a487a8; end: 100a48813; -[SCWschedSystemScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a487a8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305df18,0);
  *(undefined8 *)(param_1 + _DAT_11305df20) = 0;
  *(undefined8 *)(param_1 + _DAT_11305df28) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a48814; end: 100a488bf; -[SCWschedSystemScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100a48814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a488c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a488c0; end: 100a48a57;  */

void FUN_100a488c0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e13b10)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f1ec4f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "WschedSystemScopeGraphBridge/SCWschedSystemScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x50,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a48a58);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a7e4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a48a58; end: 100a48aaf; -[SCWschedSystemScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a48a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305df18;
  func_0x000107c61428(param_1 + _DAT_11305df18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a48ab0; end: 100a48b13; -[SCWschedSystemScopeGraphBridgeSaberEntryPoint setWschedSystemScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a48ab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305df20;
  func_0x000107c61428(param_1 + _DAT_11305df20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a48b14; end: 100a48b3b; -[SCWschedSystemScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100a48b14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a48b3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a48b3c; end: 100a48c6f;  */

/* WARNING: Possible PIC construction at 0x000100a48bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a48c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a48c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a48bf8) */
/* WARNING: Removing unreachable block (ram,0x000100a48c14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a48b3c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c5e9d4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100a48d00();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100a48d20();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a48c70);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_11305d590) = lVar5;
    *(long *)(lVar4 + _DAT_11305d598) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100a48c70; end: 100a48cb7; -[SCWschedSystemScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a48c70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305df18;
  func_0x000107c61428(param_1 + _DAT_11305df18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a48cb8; end: 100a48cff; -[SCWschedSystemScopeGraphBridgeSaberEntryPoint wschedSystemScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a48cb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305df20;
  func_0x000107c61428(param_1 + _DAT_11305df20,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a48d00; end: 100a48d1f;  */

void FUN_100a48d00(void)

{
  func_0x000107c61168(&PTR_PTR_11298bc48);
  return;
}



/* Entry: 100a48d20; end: 100a48def;  */

undefined8 FUN_100a48d20(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x11305de58,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1000a1858();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100a48df0; end: 100a48e6f; -[SCSCInAppSessionJobSchedulerServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a48df0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305df58,0);
  func_0x000107c61614(param_1 + _DAT_11305df60,0);
  *(undefined8 *)(param_1 + _DAT_11305df68) = 0;
  *(undefined8 *)(param_1 + _DAT_11305df70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a48e70; end: 100a48f1b; -[SCSCInAppSessionJobSchedulerServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a48e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a48f1c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a48f1c; end: 100a4911f;  */

void FUN_100a48f1c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0e13a80)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010f1ec580,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000029;
        if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e13a50)) &&
           (func_0x000107c605b8(0xd000000000000029,0x800000010f1ec5b0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "WschedSystemScopeGraphBridge/SCSCInAppSessionJobSchedulerServicesSaberEntryPoint.swift"
                              ,0x56,2,0x3a,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a49120);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c583b0();
        goto LAB_100a48fa8;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a7e0();
  }
LAB_100a48fa8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a49120; end: 100a4912b; -[SCSCInAppSessionJobSchedulerServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a49120(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305df58;
  func_0x000107c61428(param_1 + _DAT_11305df58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a4912c; end: 100a4917f;  */

void FUN_100a4912c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a49180; end: 100a4918b; -[SCSCInAppSessionJobSchedulerServicesSaberEntryPoint setWschedSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a49180(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305df60;
  func_0x000107c61428(param_1 + _DAT_11305df60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a4918c; end: 100a491ef; -[SCSCInAppSessionJobSchedulerServicesSaberEntryPoint setSCInAppSessionJobSchedulerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4918c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305df68;
  func_0x000107c61428(param_1 + _DAT_11305df68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a491f0; end: 100a49217; -[SCSCInAppSessionJobSchedulerServicesSaberEntryPoint begin] */

void FUN_100a491f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a49218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a49218; end: 100a4939b;  */

/* WARNING: Possible PIC construction at 0x000100a49318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a49328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a49344: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a4931c) */
/* WARNING: Removing unreachable block (ram,0x000100a4932c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a49218(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5e9d0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50e08();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a49440();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_11305de90);
        *(undefined8 *)(lVar2 + _DAT_11305d5c8) = uVar6;
        *(long *)(lVar2 + _DAT_11305d5d0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11305d5d0);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100a4939c; end: 100a493a7; -[SCSCInAppSessionJobSchedulerServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4939c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305df58;
  func_0x000107c61428(param_1 + _DAT_11305df58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a493a8; end: 100a493eb;  */

void FUN_100a493a8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a493ec; end: 100a493f7; -[SCSCInAppSessionJobSchedulerServicesSaberEntryPoint wschedSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a493ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305df60;
  func_0x000107c61428(param_1 + _DAT_11305df60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a493f8; end: 100a4943f; -[SCSCInAppSessionJobSchedulerServicesSaberEntryPoint sCInAppSessionJobSchedulerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a493f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305df68;
  func_0x000107c61428(param_1 + _DAT_11305df68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a49440; end: 100a4945f;  */

void FUN_100a49440(void)

{
  func_0x000107c61168(&PTR_PTR_11298bd10);
  return;
}



/* Entry: 100a49460; end: 100a494df; -[SCWorkSchedulerServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a49460(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305dfa0,0);
  func_0x000107c61614(param_1 + _DAT_11305dfa8,0);
  *(undefined8 *)(param_1 + _DAT_11305dfb0) = 0;
  *(undefined8 *)(param_1 + _DAT_11305dfb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a494e0; end: 100a4958b; -[SCWorkSchedulerServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a494e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a4958c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a4958c; end: 100a4978f;  */

void FUN_100a4958c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffdc) && (param_3 == -0x7ffffffef0e13a80)) ||
       (func_0x000107c605b8(0xd000000000000024,0x800000010f1ec580,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a7e0();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0e139c0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001c,0x800000010f1ec640,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "WschedSystemScopeGraphBridge/SCWorkSchedulerServicesSaberEntryPoint.swift"
                              ,0x49,2,0x3a,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a49790);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a7cc();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a49790; end: 100a4979b; -[SCWorkSchedulerServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a49790(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305dfa0;
  func_0x000107c61428(param_1 + _DAT_11305dfa0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a4979c; end: 100a497ef;  */

void FUN_100a4979c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a497f0; end: 100a497fb; -[SCWorkSchedulerServicesSaberEntryPoint setWschedSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a497f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305dfa8;
  func_0x000107c61428(param_1 + _DAT_11305dfa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a497fc; end: 100a4985f; -[SCWorkSchedulerServicesSaberEntryPoint setWorkSchedulerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a497fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305dfb0;
  func_0x000107c61428(param_1 + _DAT_11305dfb0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a49860; end: 100a49887; -[SCWorkSchedulerServicesSaberEntryPoint begin] */

void FUN_100a49860(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a49888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a49888; end: 100a49a0b;  */

/* WARNING: Possible PIC construction at 0x000100a49988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a49998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a499b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a4998c) */
/* WARNING: Removing unreachable block (ram,0x000100a4999c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a49888(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5e9d0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5e8c0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a49ab0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_11305dec0);
        *(undefined8 *)(lVar2 + _DAT_11305d600) = uVar6;
        *(long *)(lVar2 + _DAT_11305d608) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11305d608);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100a49a0c; end: 100a49a17; -[SCWorkSchedulerServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a49a0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305dfa0;
  func_0x000107c61428(param_1 + _DAT_11305dfa0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a49a18; end: 100a49a5b;  */

void FUN_100a49a18(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a49a5c; end: 100a49a67; -[SCWorkSchedulerServicesSaberEntryPoint wschedSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a49a5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305dfa8;
  func_0x000107c61428(param_1 + _DAT_11305dfa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a49a68; end: 100a49aaf; -[SCWorkSchedulerServicesSaberEntryPoint workSchedulerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a49a68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305dfb0;
  func_0x000107c61428(param_1 + _DAT_11305dfb0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a49ab0; end: 100a49acf;  */

void FUN_100a49ab0(void)

{
  func_0x000107c61168(&PTR_PTR_11298bdd8);
  return;
}



/* Entry: 100a49ad0; end: 100a49b53; -[SCMutliplexingScopeLifecycleMonitor lifecycleBegan:] */

void FUN_100a49ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100a49b54;
  puStack_30 = &UNK_110cb7518;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3b75c(param_1,param_2,&puStack_48);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a49b54; end: 100a49b5f;  */

void FUN_100a49b54(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c098bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_lifecycleBegan__112603d08,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100a49b60; end: 100a49c17; -[SCStartupScopeLifecycleMonitor lifecycleBegan:] */

/* WARNING: Possible PIC construction at 0x000100a49bf4: Changing call to branch */

void FUN_100a49b60(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  func_0x000107c61174(param_4);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    func_0x000107c6071c();
    lVar1 = *(long *)(param_2 + 8);
    dVar3 = param_1;
    func_0x000107c4d9c0(lVar1,param_3,param_4);
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c61170(0);
    }
    else {
      func_0x000107c4ff88(*(undefined8 *)(param_2 + 8),param_3,param_4);
      uVar2 = param_4;
      func_0x000107c51994(param_4);
      func_0x000107c61180();
      func_0x000107c4223c(lVar1);
      func_0x000107c3e788(param_1 - dVar3,*(undefined8 *)(param_2 + 0x20),param_3,param_4,uVar2);
      param_4 = uVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100a49c18; end: 100a49c1b; -[SCNoOpScopeLifecycleMonitor lifecycleBegan:] */

void FUN_100a49c18(void)

{
  return;
}



/* Entry: 100a49c1c; end: 100a49c27; -[SCScopeLifecycleBeginScheduler entryPointCreationFinished] */

void FUN_100a49c1c(long param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdd3970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__beginPendingScopeLifecycles_1125527f8);
  return;
}


