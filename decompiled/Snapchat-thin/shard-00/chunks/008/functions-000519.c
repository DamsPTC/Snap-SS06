/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a061d8; end: 100a0628b;  */

undefined *** FUN_100a061d8(undefined ***param_1,undefined ***param_2)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined ***pppuVar4;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined ***unaff_x20;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  long lStack_98;
  undefined ***pppuStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  FUN_100a06358();
  uStack_38 = extraout_x8;
  if (param_2 == (undefined ***)0x0) {
    FUN_100a0636c();
    FUN_100a063c4(uStack_38);
    pppuVar4 = param_2;
    if ((bool)in_ZR) {
      uRam0000000113847128 = *unaff_x19;
      FUN_100078ac0(0x113847130,unaff_x19 + 1);
      return (undefined ***)0x113847128;
    }
  }
  else {
    ppuStack_68 = (undefined **)*unaff_x19;
    (**(code **)(unaff_x19[1] + 0x10))(auStack_60,unaff_x19 + 1);
    pppuVar4 = &ppuStack_68;
    param_1 = param_2;
    func_0x000107c31360();
    func_0x000107c3a450();
    FUN_100a063c4(uStack_38);
    unaff_x20 = param_2;
    if ((bool)in_ZR) {
      return param_1;
    }
  }
  func_0x000107c60e78();
  func_0x000107c3a450();
  func_0x000107c3a460();
  pcStack_78 = FUN_100a0628c;
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*pppuVar4 != (undefined **)0x0) && (pppuVar4[1] != (undefined **)0x0)) {
    ppuVar1 = pppuVar4[1] + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
      if (bVar3) {
        *ppuVar1 = *ppuVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_c8 = &UNK_10bcc46d8;
  ppuStack_c0 = &PTR_DAT_110d99608;
  puStack_b8 = &UNK_10bcc447c;
  pppuStack_90 = unaff_x20;
  pppuStack_88 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_100a061d8(&puStack_c8,0);
  pppuVar4 = &ppuStack_c0;
  (*(code *)*ppuStack_c0)(pppuVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return pppuVar4;
  }
  func_0x000107c60e78();
  pppuVar4 = &ppuStack_c0;
  (*(code *)*ppuStack_c0)(pppuVar4);
  func_0x000107c3a3c0();
  return pppuVar4;
}



/* Entry: 100a0628c; end: 100a06357;  */

void FUN_100a0628c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puStack_58 = &UNK_10bcc46d8;
  ppuStack_50 = &PTR_DAT_110d99608;
  puStack_48 = &UNK_10bcc447c;
  FUN_100a061d8(&puStack_58,0);
  (*(code *)*ppuStack_50)(&ppuStack_50);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  (*(code *)*ppuStack_50)(&ppuStack_50);
  func_0x000107c3a3c0();
  return;
}



/* Entry: 100a06358; end: 100a0636b;  */

void FUN_100a06358(void)

{
  return;
}



/* Entry: 100a0636c; end: 100a063c3;  */

void FUN_100a0636c(void)

{
  int iVar1;
  
  if ((bRam0000000113847158 & 1) == 0) {
    iVar1 = 0x13847158;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      puRam0000000113847128 = &UNK_10bcc7528;
      ppuRam0000000113847130 = &PTR_FUN_110d99b38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113847158);
      return;
    }
  }
  return;
}



/* Entry: 100a063c4; end: 100a063d7;  */

void FUN_100a063c4(void)

{
  return;
}



/* Entry: 100a063d8; end: 100a063ff;  */

undefined8 * FUN_100a063d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_100078ac0(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 100a06400; end: 100a0641f;  */

void FUN_100a06400(void)

{
  return;
}



/* Entry: 100a06420; end: 100a06447;  */

long FUN_100a06420(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100a06448; end: 100a0648b;  */

void FUN_100a06448(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a0648c; end: 100a06497;  */

undefined ** FUN_100a0648c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a06498; end: 100a06523;  */

void FUN_100a06498(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a06524,param_1);
  return;
}



/* Entry: 100a06524; end: 100a0652b;  */

void FUN_100a06524(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bbea0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a0652c; end: 100a065af;  */

void FUN_100a0652c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bbea0,param_2,FUN_100a065b0,param_2,&UNK_1014bbea4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a065b0; end: 100a065d7;  */

void FUN_100a065b0(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a065d8; end: 100a06b2f;  */

void FUN_100a065d8(long *param_1,long param_2)

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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_1000a0fcc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  puVar1 = PTR_PTR_1126a73d8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174();
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174();
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c615f0(uStack_a8);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd20);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef17080);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010ef85db0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef85de0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef85e30);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c615f0(uStack_a8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef85600);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c615e8(uStack_a8);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c615e8(uStack_a8);
  *param_1 = param_2;
  return;
}



/* Entry: 100a06b30; end: 100a06b63;  */

void FUN_100a06b30(void)

{
  long unaff_x20;
  
  FUN_100a065d8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 100a06b64; end: 100a06d8b; -[SCDocObjectSnapchattersUserInfoRepository initWithDocObjectContext:userInfoProvider:permissionInfoProvider:incomingFriendsTracker:] */

undefined8 *
FUN_100a06b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_78 = PTR_PTR_1126fdd20;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[7];
    puVar1[7] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
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
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100a06d8c; end: 100a06e5f; -[SCSnapchattersFetchDataRequest asFetchFriends] */

void FUN_100a06d8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_10901a0d0;
  puStack_30 = &UNK_10901a0e0;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_100aac84c;
  puStack_60 = &UNK_110ad3f30;
  puStack_48 = puStack_58;
  func_0x000107c4c614(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110ad3f60,
                      &PTR___NSConcreteGlobalBlock_110ad3f80);
  uVar1 = puStack_48[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100a06e60; end: 100a06f5f; -[SCInitializeNotificationProcessorsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a06e60(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1 + _DAT_112762098;
    func_0x000107c61148();
  }
  uVar1 = uVar2;
  func_0x000107c49d64();
  func_0x000107c61170(uVar2);
  if ((uVar1 & 1) == 0) {
    func_0x000107c61144(auStack_38,param_1);
    param_1 = param_1 + _DAT_112762078;
    func_0x000107c61148(param_1);
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c4fbb0(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  return;
}



/* Entry: 100a06f60; end: 100a06f87; -[_TtC32ApplicationConfigurationServices32ApplicationConfigurationServices isFeatureApplication] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100a06f60(long param_1)

{
  return *(char *)(*(long *)(param_1 + _DAT_113059cd0) + _DAT_11307ce50) == '\x02';
}



/* Entry: 100a06f88; end: 100a0737b;  */

/* WARNING: Possible PIC construction at 0x000100a07008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a071f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a0721c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a072e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a07354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a07348) */
/* WARNING: Removing unreachable block (ram,0x000100a07338) */
/* WARNING: Removing unreachable block (ram,0x000100a07318) */
/* WARNING: Removing unreachable block (ram,0x000100a0731c) */
/* WARNING: Removing unreachable block (ram,0x000100a07330) */
/* WARNING: Removing unreachable block (ram,0x000100a072e4) */
/* WARNING: Removing unreachable block (ram,0x000100a07264) */
/* WARNING: Removing unreachable block (ram,0x000100a07270) */
/* WARNING: Removing unreachable block (ram,0x000100a07284) */
/* WARNING: Removing unreachable block (ram,0x000100a07220) */
/* WARNING: Removing unreachable block (ram,0x000100a0720c) */
/* WARNING: Removing unreachable block (ram,0x000100a071fc) */
/* WARNING: Removing unreachable block (ram,0x000100a0717c) */
/* WARNING: Removing unreachable block (ram,0x000100a0716c) */
/* WARNING: Removing unreachable block (ram,0x000100a0715c) */
/* WARNING: Removing unreachable block (ram,0x000100a0714c) */
/* WARNING: Removing unreachable block (ram,0x000100a0713c) */
/* WARNING: Removing unreachable block (ram,0x000100a0712c) */
/* WARNING: Removing unreachable block (ram,0x000100a0703c) */
/* WARNING: Removing unreachable block (ram,0x000100a0700c) */
/* WARNING: Removing unreachable block (ram,0x000100a07358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a06f88(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11276207c;
    func_0x000107c61148();
    func_0x000107c4d81c();
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a0737c; end: 100a0762f; -[SCInAppNotificationController initWithDelegate:getCircumstanceEngineBlock:getCustomUIPlugInCollectorBlock:getNotificationEmitterBlock:notificationProcessingManager:grapheneRegistry:application:window:notificationProcessingStepEventEmitter:] */

undefined8 *
FUN_100a0737c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126f82d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 0xd,param_3);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c61184();
    uVar5 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar5);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc(PTR_PTR_1126ae720);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126d3f20;
    func_0x000107c610f4();
    func_0x000107c464a8();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[8];
    puVar1[8] = puVar4;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c61184();
    uVar5 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar5);
    uVar2 = param_6;
    func_0x000107c61184();
    uVar5 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[3];
    puVar1[3] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    func_0x000107c61180();
    func_0x000107c3d7bc();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
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



/* Entry: 100a07630; end: 100a077a3; -[SCAppNotificationSequencer initWithDelegate:application:notificationProcessingStepEventEmitter:displayTimeProvider:] */

undefined1 *
FUN_100a07630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f8300;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = 0;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x68),param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a077a4; end: 100a077ab; -[SCAppStartupState delegateProperties] */

undefined8 FUN_100a077a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100a077ac; end: 100a077db; -[SCAppDelegateProperties setInAppNotificationController:] */

void FUN_100a077ac(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 100a077dc; end: 100a077e3; -[SCAppDelegateProperties inAppNotificationController] */

undefined8 FUN_100a077dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100a077e4; end: 100a077eb; -[SCInAppNotificationController inAppNotificationPresenter] */

undefined8 FUN_100a077e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 100a077ec; end: 100a07837; -[SCAppNotificationSequencer setUserSession:] */

/* WARNING: Possible PIC construction at 0x000100a07824: Changing call to branch */

void FUN_100a077ec(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x78) != param_3) {
    func_0x000107c61174(param_3);
    lVar1 = *(long *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = param_3;
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100a07838; end: 100a078ef; -[SCNotificationProcessingManager registerPushNotificationPresenter:presenter:] */

void FUN_100a07838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_100a078f0;
  puStack_50 = &UNK_110848ba8;
  uStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  FUN_1000d76cc("APPSTORE",&puStack_68);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100a078f0; end: 100a07903;  */

void FUN_100a078f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c126f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_registerPushNotificationPresente_1126275e0,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 100a07904; end: 100a07917; -[SCAppNotificationProvider registerPushNotificationPresenter:presenter:] */

void FUN_100a07904(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setObject_forKey__112651b80,param_4,param_3);
  return;
}



/* Entry: 100a07918; end: 100a07c1b; -[SCUserNotificationCenterController initWithCircumstanceEngine:bitmojiFetchServices:bitmojiSelfieServices:getNotificationEmitterBlock:getSnapchattersDataFectherBlock:] */

undefined8 *
FUN_100a07918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_68 = PTR_PTR_1126f8320;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c51758();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126d3f68;
    func_0x000107c610f4();
    func_0x000107c456c4();
    uVar4 = puVar1[4];
    puVar1[4] = 0;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(puVar2);
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar4);
    puVar5 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    func_0x000107c470d0();
    uVar4 = puVar1[5];
    puVar1[5] = puVar5;
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_78,puVar1);
    puVar5 = PTR_PTR_1126d3f70;
    func_0x000107c610f4();
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c465d8();
    uVar4 = puVar1[1];
    puVar1[1] = puVar5;
    func_0x000107c61170(uVar4);
    uVar4 = param_3;
    func_0x000107c61184();
    uVar6 = puVar1[6];
    puVar1[6] = uVar4;
    func_0x000107c61170(uVar6);
    uVar4 = param_4;
    func_0x000107c61184();
    uVar6 = puVar1[7];
    puVar1[7] = uVar4;
    func_0x000107c61170(uVar6);
    uVar4 = param_5;
    func_0x000107c61184();
    uVar6 = puVar1[8];
    puVar1[8] = uVar4;
    func_0x000107c61170(uVar6);
    uVar4 = param_6;
    func_0x000107c61184();
    uVar6 = puVar1[9];
    puVar1[9] = uVar4;
    func_0x000107c61170(uVar6);
    uVar4 = param_7;
    func_0x000107c61184();
    uVar6 = puVar1[10];
    puVar1[10] = uVar4;
    func_0x000107c61170(uVar6);
    uVar4 = puVar1[0xb];
    puVar1[0xb] = 0;
    func_0x000107c61170(uVar4);
    func_0x000107c611a0(puVar1 + 0xc,0);
    uVar4 = puVar1[0xd];
    puVar1[0xd] = 0;
    func_0x000107c61170(uVar4);
    uVar4 = puVar1[0xe];
    puVar1[0xe] = 0;
    func_0x000107c61170(uVar4);
    puVar5 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = puVar1[0xf];
    puVar1[0xf] = puVar5;
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100a07c1c; end: 100a07cbf; -[SCNotificationAttachmentFileAccessor initWithAppGroupIdentifier:folderName:] */

undefined1 *
FUN_100a07c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f8310;
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
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a07cc0; end: 100a07d5b; -[SCAppNotificationBatcher initWithDispatchBlock:] */

undefined1 * FUN_100a07cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f82f8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100a07d5c; end: 100a07d8b; -[SCAppDelegateProperties setUserNotificationCenterController:] */

void FUN_100a07d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100a07d8c; end: 100a07d93; -[SCAppDelegateProperties userNotificationCenterController] */

undefined8 FUN_100a07d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100a07d94; end: 100a07df7;  */

void FUN_100a07d94(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a07df8; end: 100a07e1f;  */

undefined ** FUN_100a07df8(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a07e20; end: 100a07e5f;  */

void FUN_100a07e20(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a07e04();
  FUN_100082720("SCLegacyCameraStartupCommandsEntryPointWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a07e60; end: 100a07e67;  */

void FUN_100a07e60(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014abba4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a07e68; end: 100a07eeb;  */

void FUN_100a07e68(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014abba4,param_2,&UNK_1014abba8,param_2,&UNK_1014abbd0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a07eec; end: 100a07ef7;  */

undefined ** FUN_100a07eec(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a07ef8; end: 100a07f83;  */

void FUN_100a07ef8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100a07f84,param_1);
  return;
}



/* Entry: 100a07f84; end: 100a07f8b;  */

void FUN_100a07f84(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bbfb8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a07f8c; end: 100a0800f;  */

void FUN_100a07f8c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bbfb8,param_2,FUN_100a08010,param_2,&UNK_1014bbfbc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a08010; end: 100a08037;  */

void FUN_100a08010(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a08038; end: 100a0803f;  */

void FUN_100a08038(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_100096b50();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100a080d0(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a08040; end: 100a080c7;  */

void FUN_100a08040(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_100096b50();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_100a080d0(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a080c8; end: 100a080cf;  */

void FUN_100a080c8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100a080d0; end: 100a0822f;  */

void FUN_100a080d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  FUN_1000285a8(0x112da7fb8,&UNK_10d94eb68);
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  FUN_10017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126a73e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000035;
  func_0x000107c5fadc(0xd000000000000035,0x800000010ef85e60);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100a08230; end: 100a08263;  */

void FUN_100a08230(void)

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



/* Entry: 100a08264; end: 100a0826b;  */

void FUN_100a08264(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2927b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userIdsUnderImpressionThresholdO_112682410);
  return;
}



/* Entry: 100a0826c; end: 100a0834f; -[SCSnapchattersPinningMetadataDefaultRepository userIdsUnderImpressionThresholdObservable] */

void FUN_100a0826c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = *(long *)(param_1 + 0x40);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    func_0x000107c61174();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar1;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_100a13dac;
    puStack_48 = &UNK_110883780;
    lStack_40 = param_1;
    puStack_38 = puVar1;
    func_0x000107c61174(puVar1);
    func_0x000107c4e524(uVar2,param_2,&puStack_60);
    lVar3 = *(long *)(param_1 + 0x40);
    func_0x000107c61174(lVar3);
    func_0x000107c61170(puStack_38);
    func_0x000107c61170(puVar1);
  }
  else {
    func_0x000107c61174(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 100a08350; end: 100a08353; -[SCLegacyCriticalStartupCommandsEntryPoint begin] */

void FUN_100a08350(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beae5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupNonCriticalStartupCommands_112589310);
  return;
}



/* Entry: 100a08354; end: 100a0851f; -[SCLegacyCriticalStartupCommandsEntryPoint _setupNonCriticalStartupCommandsStartupCompleteScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a08354(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110987880);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610fc();
  uVar9 = *(undefined8 *)(param_1 + _DAT_1127620a4);
  *(undefined **)(param_1 + _DAT_1127620a4) = puVar2;
  func_0x000107c61170(uVar9);
  puVar2 = PTR_PTR_1126af680;
  func_0x000107c5a9f0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c49a44();
  func_0x000107c61170(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    lVar4 = param_1 + _DAT_1127620a8;
    func_0x000107c61148(lVar4);
    lVar5 = lVar4;
    func_0x000107c3dfac();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c5bc9c();
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c5c6c0();
    func_0x000107c61180();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    puStack_70 = &UNK_100c86b3c;
    puStack_68 = &UNK_1109878a0;
    lStack_60 = param_1;
    func_0x000107c61174(puVar1);
    lVar8 = lVar7;
    puStack_58 = puVar1;
    func_0x000107c5c320(lVar7,param_2,&puStack_80);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    puVar2 = puStack_58;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + _DAT_1127620ac);
    func_0x000107c61174(uVar9);
    puVar2 = puVar1;
    func_0x000107c5c734(puVar1);
    func_0x000107c61180();
    func_0x000107c42c1c(uVar9,param_2,puVar2);
    func_0x000107c61170(uVar9);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100a08520; end: 100a0854b;  */

void FUN_100a08520(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100a0854c; end: 100a08573;  */

undefined ** FUN_100a0854c(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a08574; end: 100a085b3;  */

void FUN_100a08574(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a08558();
  FUN_100082720("SCLegacyPermissionRequestEntryPointWrapperScopeInitializationPluginProvider",0x4b,2
               );
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a085b4; end: 100a085bb;  */

void FUN_100a085b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a667c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a085bc; end: 100a0863f;  */

void FUN_100a085bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014a667c,param_2,&UNK_1014a6680,param_2,&UNK_1014a66a8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a08640; end: 100a08667;  */

undefined ** FUN_100a08640(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a08668; end: 100a086a7;  */

void FUN_100a08668(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a0864c();
  FUN_100082720("SCLegacyPropertyHandlerEntryPointWrapperScopeInitializationPluginProvider",0x49,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a086a8; end: 100a086af;  */

void FUN_100a086a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014ada34);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a086b0; end: 100a08733;  */

void FUN_100a086b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014ada34,param_2,FUN_100a08734,param_2,&UNK_1014ada38,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a08734; end: 100a0875b;  */

void FUN_100a08734(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a0875c; end: 100a08767;  */

void FUN_100a0875c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_1000991ac();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100a08838(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a08768; end: 100a08837;  */

void FUN_100a08768(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_1000991ac();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100a08838(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a08838; end: 100a08ae7;  */

void FUN_100a08838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7280;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef857c0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef857e0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef85810);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar6 != 0) {
    *(long *)(unaff_x20 + 0x38) = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a08ae8);
  (*pcVar1)();
}



/* Entry: 100a08ae8; end: 100a08b2f; -[SCLegacyPropertyHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a08ae8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c3c27c();
  puVar1 = PTR_PTR_1126b7430;
  func_0x000107c610fc(PTR_PTR_1126b7430);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_1127215fc),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100a08b30; end: 100a08e0b; -[SCLegacyPropertyHandlerEntryPoint _registerLegacyPropertyHandlers] */

/* WARNING: Possible PIC construction at 0x000100a08b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08c7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08d68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a08dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a08dc4) */
/* WARNING: Removing unreachable block (ram,0x000100a08d98) */
/* WARNING: Removing unreachable block (ram,0x000100a08d6c) */
/* WARNING: Removing unreachable block (ram,0x000100a08d5c) */
/* WARNING: Removing unreachable block (ram,0x000100a08d04) */
/* WARNING: Removing unreachable block (ram,0x000100a08cd8) */
/* WARNING: Removing unreachable block (ram,0x000100a08cac) */
/* WARNING: Removing unreachable block (ram,0x000100a08c80) */
/* WARNING: Removing unreachable block (ram,0x000100a08c70) */
/* WARNING: Removing unreachable block (ram,0x000100a08c14) */
/* WARNING: Removing unreachable block (ram,0x000100a08be8) */
/* WARNING: Removing unreachable block (ram,0x000100a08bd8) */
/* WARNING: Removing unreachable block (ram,0x000100a08b7c) */
/* WARNING: Removing unreachable block (ram,0x000100a08df0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a08b30(long param_1)

{
  param_1 = param_1 + _DAT_112721600;
  func_0x000107c61148(param_1);
  func_0x000107c4f504();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a08e0c; end: 100a08e7f; -[SCIsOfflinePropertyHandler initWithNetworkConnectivityAnnouncer:] */

undefined1 * FUN_100a08e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7820;
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



/* Entry: 100a08e80; end: 100a08eb3; -[SCBandwidthPropertyHandler initWithappStartExperimentReader:] */

void FUN_100a08e80(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e7810;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a08eb4; end: 100a08f27; -[SCRealtimeNetworkTypePropertyHandler initWithNetworkConnectivityAnnouncer:] */

undefined1 * FUN_100a08eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7828;
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



/* Entry: 100a08f28; end: 100a08fbf; -[SCDaysSinceLastLoginOrOpenPropertyHandler init] */

undefined1 * FUN_100a08f28(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7818;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    FUN_1004fa310();
    func_0x000107c61180();
    func_0x000107c61158(PTR_PTR_1126b7418);
    puVar3 = puVar2;
    func_0x000107c3ced8();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100a08fc0; end: 100a08fc7;  */

void FUN_100a08fc0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c291130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userActivityInfoProvider_112681e70);
  return;
}



/* Entry: 100a08fc8; end: 100a09003;  */

void FUN_100a08fc8(void)

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



/* Entry: 100a09004; end: 100a0902b;  */

undefined ** FUN_100a09004(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a0902c; end: 100a0906b;  */

void FUN_100a0902c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a09010();
  FUN_100082720("SCLegacyWarmStartupServicesEntryPointWrapperScopeInitializationPluginProvider",0x4d
                ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a0906c; end: 100a09073;  */

void FUN_100a0906c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bc108);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a09074; end: 100a090f7;  */

void FUN_100a09074(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bc108,param_2,FUN_100a090f8,param_2,&UNK_1014bc10c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a090f8; end: 100a0911f;  */

void FUN_100a090f8(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 100a09120; end: 100a0912b;  */

void FUN_100a09120(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100096c08();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100a091e4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c615e8(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a0912c; end: 100a091db;  */

void FUN_100a0912c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100096c08();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_100a091e4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c615e8(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 100a091dc; end: 100a091e3;  */

void FUN_100a091dc(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100a091e4; end: 100a0944f;  */

void FUN_100a091e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  FUN_1000285a8(0x112da80b8,&UNK_10d94ed30);
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(param_3);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126a73f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(uVar5);
  uVar3 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef85e00);
  func_0x000107c5a49c(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(uVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef85ea0);
  func_0x000107c5a49c(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar5);
  uVar6 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef85ec0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar4 != 0) {
    *(long *)(unaff_x20 + 0x30) = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a09450);
  (*pcVar1)();
}



/* Entry: 100a09450; end: 100a09617; -[SCLegacyWarmStartupServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a09450(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_100c86cf8;
  puStack_60 = &UNK_110947dc8;
  puVar1 = PTR_PTR_1126ae720;
  lStack_58 = param_1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_78);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112752ce4);
  *(undefined **)(param_1 + _DAT_112752ce4) = puVar1;
  func_0x000107c61170(uVar6);
  puVar1 = PTR_PTR_1126cebf0;
  uVar6 = *(undefined8 *)(param_1 + _DAT_112752cf4);
  func_0x000107c61174(uVar6);
  func_0x000107c610f4(puVar1);
  func_0x000107c46eb4();
  func_0x000107c42c20(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61144(auStack_80,param_1);
  lVar2 = param_1 + _DAT_112752cf0;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c3dfac();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5e370();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_80);
  lVar5 = lVar4;
  func_0x000107c5c320();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112752cec);
  *(long *)(param_1 + _DAT_112752cec) = lVar5;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 100a09618; end: 100a0968b; -[SCLegacyWarmStartupInitiatorServices initWithInitiator:] */

undefined1 * FUN_100a09618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702dd0;
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



/* Entry: 100a0968c; end: 100a096bf;  */

void FUN_100a0968c(void)

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



/* Entry: 100a096c0; end: 100a096e7;  */

undefined ** FUN_100a096c0(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a096e8; end: 100a09727;  */

void FUN_100a096e8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a096cc();
  FUN_100082720("SCLensDataLoggerServiceProviderWrapperScopeInitializationPluginProvider",0x47,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a09728; end: 100a0972f;  */

void FUN_100a09728(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b3818);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a09730; end: 100a097b3;  */

void FUN_100a09730(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b3818,param_2,&UNK_1014b381c,param_2,&UNK_1014b3844,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a097b4; end: 100a097eb;  */

void FUN_100a097b4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100a097ec; end: 100a0982b;  */

void FUN_100a097ec(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a097d0();
  FUN_100082720("SCLensPreferencesStorageServiceProviderWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a0982c; end: 100a09833;  */

void FUN_100a0982c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b3944);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a09834; end: 100a098b7;  */

void FUN_100a09834(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1014b3944,param_2,&UNK_1014b3948,param_2,&UNK_1014b3970,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a098b8; end: 100a098df;  */

undefined ** FUN_100a098b8(void)

{
  return &PTR_DAT_113082b28;
}



/* Entry: 100a098e0; end: 100a0991f;  */

void FUN_100a098e0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100a098c4();
  FUN_100082720("SCLogSessionStartEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100a09920; end: 100a09927;  */

void FUN_100a09920(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bc278);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100a09928; end: 100a099ab;  */

void FUN_100a09928(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1014bc278,param_2,FUN_100a099ac,param_2,&UNK_1014bc27c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


