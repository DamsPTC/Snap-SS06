/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028c56c0; end: 1028c5743;  */

void FUN_1028c56c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    FUN_1028c5744(param_1,param_2,param_3,FUN_1028c5988,0);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 1028c5744; end: 1028c589f;  */

/* WARNING: Possible PIC construction at 0x0001028c5870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028c5874) */

void FUN_1028c5744(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = &UNK_110563530;
  puVar1 = puVar3;
  func_0x000107c613fc(&UNK_110563530,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110563580;
  func_0x000107c613fc(&UNK_110563580,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  func_0x000107c613fc(&UNK_110563530,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar1 = &UNK_1105635a8;
  func_0x000107c613fc(&UNK_1105635a8,0x38,7);
  *(undefined **)(puVar1 + 0x10) = puVar3;
  *(undefined8 *)(puVar1 + 0x18) = 0x1028c64c8;
  *(undefined **)(puVar1 + 0x20) = puVar2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c61434(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(param_5);
  func_0x0001001ca524(6,0,0x5c,4,0,0,&UNK_10daea728,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1028c58a0; end: 1028c5987; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028c58a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028c4f54(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028c5988; end: 1028c598b;  */

void FUN_1028c5988(void)

{
  return;
}



/* Entry: 1028c598c; end: 1028c5a03;  */

void FUN_1028c598c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1028c5a04(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1028c5a04; end: 1028c5bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c5a04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar7 = _DAT_112ec82b0;
  if (*(long *)(unaff_x20 + _DAT_112ec82b0) == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112ec8280);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4e864();
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c4d06c();
        func_0x000107c61180();
        lVar1 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar1 + 0x18) = 2;
        *(undefined8 *)(lVar1 + 0x10) = 1;
        *(undefined8 *)(lVar1 + 0x20) = param_1;
        *(undefined8 *)(lVar1 + 0x28) = param_2;
        func_0x00010034a38c(0);
        func_0x000107c610f8();
        func_0x000107c615f0(lVar3);
        func_0x000107c61434(param_2);
        lVar4 = unaff_x20;
        func_0x000107c61174();
        lVar5 = lVar3;
        func_0x000103a28f00(lVar3,lVar4,0xe,lVar1,0);
        lStack_60 = lVar5;
        func_0x00010008a7c8(&uStack_58,&lStack_60);
        func_0x000100083b20(&lStack_60);
        func_0x000107c61574(uStack_58);
        uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
        *(long *)(unaff_x20 + lVar7) = lStack_60;
        func_0x000107c615e8(uVar6);
        lVar7 = *(long *)(unaff_x20 + lVar7);
        if (lVar7 != 0) {
          func_0x000107c615f0(lVar7);
          func_0x000107c4ee7c();
          func_0x000107c615e8(lVar7);
        }
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar5);
        func_0x000107c615e8(lVar3);
      }
    }
  }
  return;
}



/* Entry: 1028c5bac; end: 1028c5bcb;  */

void FUN_1028c5bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028c5bcc,0,0);
  return;
}



/* Entry: 1028c5bcc; end: 1028c5c4f;  */

void FUN_1028c5bcc(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x50) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1028c5c50;
    plVar1[0x19] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1028c5e2c,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001028c5c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028c5c50; end: 1028c5cbf;  */

void FUN_1028c5c50(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x70) = param_1 & 1;
    pcVar1 = FUN_1028c5cc0;
  }
  else {
    pcVar1 = (code *)0x1028c5dd8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1028c5cc0; end: 1028c5d4f;  */

void FUN_1028c5cc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x70) == '\x01') {
    uVar1 = 0;
    func_0x000107c5fcec();
    uVar2 = uVar1;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1028c5d50,uVar1,uVar2);
    return;
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x0001028c5d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028c5d50; end: 1028c5da7;  */

void FUN_1028c5d50(void)

{
  code *pcVar1;
  code *pcVar2;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x40);
  pcVar2 = *(code **)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  (*pcVar2)();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028c5da8,0,0);
  return;
}



/* Entry: 1028c5da8; end: 1028c5e13;  */

void FUN_1028c5da8(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x0001028c5dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1028c5e14; end: 1028c5e2b;  */

void FUN_1028c5e14(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028c5e2c,0,0);
  return;
}



/* Entry: 1028c5e2c; end: 1028c5f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c5e2c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 200) + _DAT_112ec8270);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xc0;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1028c5f70;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    puVar3 = &UNK_1105635d0;
    func_0x000107c613fc(&UNK_1105635d0,0x18,7);
    puVar4 = (undefined8 *)(unaff_x22 + 0x90);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar2;
    *(code **)(unaff_x22 + 0xb0) = FUN_1028c65d0;
    *(undefined **)(unaff_x22 + 0xb8) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xa0) = &UNK_1010ca3e8;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_1105635e8;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x000107c4318c(lVar1);
    func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x0001028c6590();
  func_0x000107c613f8(&UNK_110563708,lVar1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001028c5f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1028c5f70; end: 1028c5faf;  */

void FUN_1028c5f70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028c5fb0,0,0);
  return;
}



/* Entry: 1028c5fb0; end: 1028c60c3;  */

void FUN_1028c5fb0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  if (*(long *)(unaff_x22 + 0xc0) == 1) {
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x0001028c5ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(1);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  *(long **)(unaff_x22 + 0x78) = (long *)(unaff_x22 + 0xc0);
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_1028c60c4;
  lVar2 = unaff_x22 + 0x50;
  func_0x000107c61448(lVar2,0);
  puVar3 = &UNK_110563620;
  func_0x000107c613fc(&UNK_110563620,0x18,7);
  puVar4 = (undefined8 *)(unaff_x22 + 0x90);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar3 + 0x10) = lVar2;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0x1028c65e8;
  *(undefined **)(unaff_x22 + 0xb8) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xa0) = &UNK_100288f10;
  *(undefined **)(unaff_x22 + 0xa8) = &UNK_110563638;
  func_0x000107c60bc4(puVar4);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c503ac(uVar1);
  func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 1028c60c4; end: 1028c613b;  */

void FUN_1028c60c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1028c6104,0,0);
  return;
}



/* Entry: 1028c613c; end: 1028c6153; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin dismissPresentedView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c613c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec82a8);
  *(undefined8 *)(param_1 + _DAT_112ec82a8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1028c6154; end: 1028c6203; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Possible PIC construction at 0x0001028c61cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028c61dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028c61d0) */
/* WARNING: Removing unreachable block (ram,0x0001028c61e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c6154(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + _DAT_112ec8238;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c4807c(puVar2,param_2,lVar1,1);
    func_0x000107c3e2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1028c6204; end: 1028c6263; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin permissionsManagerModalPresentationContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c6204(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + _DAT_112ec8238;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1028c6264; end: 1028c6297; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin permissionsPromptSource] */

void FUN_1028c6264(void)

{
  func_0x000107c5fadc(0x435f594c494d4146,0xed00005245544e45);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028c6298; end: 1028c62bf; -[_TtC40FamilyCenterLocationRequestMessagePlugin40FamilyCenterLocationRequestMessagePlugin shareLocationFlowScopeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c6298(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec82b0);
  *(undefined8 *)(param_1 + _DAT_112ec82b0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1028c62c0; end: 1028c635f;  */

void FUN_1028c62c0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1028c6360; end: 1028c636f;  */

void FUN_1028c6360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1028c6370; end: 1028c64ab;  */

void FUN_1028c6370(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(param_2,uVar3,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1028c64ac; end: 1028c64d3;  */

void FUN_1028c64ac(long param_1,long param_2)

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



/* Entry: 1028c64d4; end: 1028c6553;  */

void FUN_1028c64d4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1028c6554;
  plVar5[8] = lVar4;
  plVar5[9] = lVar6;
  plVar5[6] = lVar3;
  plVar5[7] = lVar2;
  plVar5[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028c5bcc,0,0);
  return;
}



/* Entry: 1028c6554; end: 1028c65cf;  */

void FUN_1028c6554(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001028c658c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1028c65d0; end: 1028c660b;  */

void FUN_1028c65d0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1028c660c; end: 1028c664b;  */

void FUN_1028c660c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028c664c; end: 1028c673b;  */

uint FUN_1028c664c(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1028c673c; end: 1028c677b;  */

void FUN_1028c673c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec8300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10daea798;
  func_0x000107c61520(&UNK_10daea798,&UNK_110563708);
  puRam0000000112ec8300 = puVar1;
  return;
}



/* Entry: 1028c677c; end: 1028c678b;  */

void FUN_1028c677c(long param_1,long param_2)

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



/* Entry: 1028c678c; end: 1028c6c1b;  */

void FUN_1028c678c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110563788;
  func_0x000107c613fc(&UNK_110563788,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x0001000823a8(FUN_1028c6c1c,puVar1);
  return;
}



/* Entry: 1028c6c1c; end: 1028c6c4f;  */

void FUN_1028c6c1c(void)

{
  long unaff_x20;
  
  func_0x0001028c6890(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1028c6c50; end: 1028c6c5f;  */

undefined1  [16] FUN_1028c6c50(void)

{
  return ZEXT816(0x1105637b0);
}



/* Entry: 1028c6c60; end: 1028c7b8b;  */

void FUN_1028c6c60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110563878;
  func_0x000107c613fc(&UNK_110563878,0x158,7);
  *(undefined8 *)(puVar1 + 0x10) = param_38;
  *(undefined8 *)(puVar1 + 0x18) = param_39;
  *(undefined8 *)(puVar1 + 0x20) = param_40;
  *(undefined8 *)(puVar1 + 0x28) = param_41;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_14;
  *(undefined8 *)(puVar1 + 0x48) = param_17;
  *(undefined8 *)(puVar1 + 0x50) = param_24;
  *(undefined8 *)(puVar1 + 0x58) = param_1;
  *(undefined8 *)(puVar1 + 0x60) = param_7;
  *(undefined8 *)(puVar1 + 0x68) = param_3;
  *(undefined8 *)(puVar1 + 0x70) = param_4;
  *(undefined8 *)(puVar1 + 0x78) = param_8;
  *(undefined8 *)(puVar1 + 0x80) = param_11;
  *(undefined8 *)(puVar1 + 0x88) = param_12;
  *(undefined8 *)(puVar1 + 0x90) = param_13;
  *(undefined8 *)(puVar1 + 0x98) = param_15;
  *(undefined8 *)(puVar1 + 0xa0) = param_16;
  *(undefined8 *)(puVar1 + 0xa8) = param_18;
  *(undefined8 *)(puVar1 + 0xb0) = param_19;
  *(undefined8 *)(puVar1 + 0xb8) = param_20;
  *(undefined8 *)(puVar1 + 0xc0) = param_21;
  *(undefined8 *)(puVar1 + 200) = param_22;
  *(undefined8 *)(puVar1 + 0xd0) = param_23;
  *(undefined8 *)(puVar1 + 0xd8) = param_2;
  *(undefined8 *)(puVar1 + 0xe0) = param_25;
  *(undefined8 *)(puVar1 + 0xe8) = param_26;
  *(undefined8 *)(puVar1 + 0xf0) = param_27;
  *(undefined8 *)(puVar1 + 0xf8) = param_28;
  *(undefined8 *)(puVar1 + 0x100) = param_37;
  *(undefined8 *)(puVar1 + 0x108) = param_29;
  *(undefined8 *)(puVar1 + 0x110) = param_30;
  *(undefined8 *)(puVar1 + 0x118) = param_31;
  *(undefined8 *)(puVar1 + 0x120) = param_33;
  *(undefined8 *)(puVar1 + 0x128) = param_34;
  *(undefined8 *)(puVar1 + 0x130) = param_35;
  *(undefined8 *)(puVar1 + 0x138) = param_9;
  *(undefined8 *)(puVar1 + 0x140) = param_32;
  *(undefined8 *)(puVar1 + 0x148) = param_10;
  *(undefined8 *)(puVar1 + 0x150) = param_36;
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_36);
  func_0x0001000823a8(0x1028c6fc8,puVar1);
  return;
}



/* Entry: 1028c7b8c; end: 1028c7b9b;  */

undefined1  [16] FUN_1028c7b8c(void)

{
  return ZEXT816(0x1105638a0);
}



/* Entry: 1028c7b9c; end: 1028c8683;  */

void FUN_1028c7b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110563968;
  func_0x000107c613fc(&UNK_110563968,0xe0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_23;
  *(undefined8 *)(puVar1 + 0x18) = param_24;
  *(undefined8 *)(puVar1 + 0x20) = param_25;
  *(undefined8 *)(puVar1 + 0x28) = param_26;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_11;
  *(undefined8 *)(puVar1 + 0x50) = param_13;
  *(undefined8 *)(puVar1 + 0x58) = param_2;
  *(undefined8 *)(puVar1 + 0x60) = param_4;
  *(undefined8 *)(puVar1 + 0x68) = param_5;
  *(undefined8 *)(puVar1 + 0x70) = param_7;
  *(undefined8 *)(puVar1 + 0x78) = param_8;
  *(undefined8 *)(puVar1 + 0x80) = param_10;
  *(undefined8 *)(puVar1 + 0x88) = param_9;
  *(undefined8 *)(puVar1 + 0x90) = param_12;
  *(undefined8 *)(puVar1 + 0x98) = param_14;
  *(undefined8 *)(puVar1 + 0xa0) = param_15;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_17;
  *(undefined8 *)(puVar1 + 0xb8) = param_16;
  *(undefined8 *)(puVar1 + 0xc0) = param_18;
  *(undefined8 *)(puVar1 + 200) = param_19;
  *(undefined8 *)(puVar1 + 0xd0) = param_20;
  *(undefined8 *)(puVar1 + 0xd8) = param_22;
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_22);
  func_0x0001000823a8(0x1028c7ddc,puVar1);
  return;
}



/* Entry: 1028c8684; end: 1028c8693;  */

undefined1  [16] FUN_1028c8684(void)

{
  return ZEXT816(0x110563990);
}



/* Entry: 1028c8694; end: 1028c86a3; -[_TtC38MyAiSpectaclesBotResponseMessagePlugin38MyAiSpectaclesBotResponseMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c8694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec8310));
  return;
}



/* Entry: 1028c86a4; end: 1028c86d7; -[_TtC38MyAiSpectaclesBotResponseMessagePlugin38MyAiSpectaclesBotResponseMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c86a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec8310);
  *(undefined8 *)(param_1 + _DAT_112ec8310) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028c86d8; end: 1028c86e7; -[_TtC38MyAiSpectaclesBotResponseMessagePlugin38MyAiSpectaclesBotResponseMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c86d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec8318));
  return;
}



/* Entry: 1028c86e8; end: 1028c871b; -[_TtC38MyAiSpectaclesBotResponseMessagePlugin38MyAiSpectaclesBotResponseMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c86e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec8318);
  *(undefined8 *)(param_1 + _DAT_112ec8318) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028c871c; end: 1028c872f; -[_TtC38MyAiSpectaclesBotResponseMessagePlugin38MyAiSpectaclesBotResponseMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028c871c(void)

{
  FUN_1028c8830();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028c8730; end: 1028c8747; -[_TtC38MyAiSpectaclesBotResponseMessagePlugin38MyAiSpectaclesBotResponseMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028c8744) */

void FUN_1028c8730(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028c8748; end: 1028c874f; -[_TtC38MyAiSpectaclesBotResponseMessagePlugin38MyAiSpectaclesBotResponseMessagePlugin pluginType] */

undefined8 FUN_1028c8748(void)

{
  return 0;
}



/* Entry: 1028c8750; end: 1028c87a3; -[_TtC38MyAiSpectaclesBotResponseMessagePlugin38MyAiSpectaclesBotResponseMessagePlugin init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c8750(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ec8310) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec8318) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028c87a4; end: 1028c87d7;  */

void FUN_1028c87a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028c87d8; end: 1028c880f; -[_TtC38MyAiSpectaclesBotResponseMessagePlugin38MyAiSpectaclesBotResponseMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028c87f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028c87f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c87d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec8310));
  return;
}



/* Entry: 1028c8810; end: 1028c882f;  */

void FUN_1028c8810(void)

{
  func_0x000107c61168(&PTR_PTR_11286b5d0);
  return;
}



/* Entry: 1028c8830; end: 1028c892b;  */

void FUN_1028c8830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *apuStack_60 [3];
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126ab1e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_1028c89ec();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar2);
  uVar5 = 0x112ec3bd0;
  uVar3 = 0;
  FUN_1028c892c(0,0x112ec3bd0,&PTR_PTR_1126ab1d8);
  func_0x000107c614e8();
  func_0x000107c3ff48();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  uVar3 = 0;
  FUN_1028c892c(0,0x112ec3bd8,&PTR_PTR_1126ab1e0);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  apuStack_60[0] = puVar1;
  uStack_48 = uVar3;
  func_0x000107c610f8(PTR_PTR_1126c67d8);
  FUN_1027efbc4(uVar4,uVar5,apuStack_60,&uStack_80);
  return;
}



/* Entry: 1028c892c; end: 1028c89db;  */

void FUN_1028c892c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028c89dc; end: 1028c89eb;  */

undefined1  [16] FUN_1028c89dc(void)

{
  return ZEXT816(0x110563a58);
}



/* Entry: 1028c89ec; end: 1028c8b23;  */

undefined1  [16] FUN_1028c89ec(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffec;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0c7060);
  uVar3 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f0c7080);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028c8ab8);
  (*pcVar1)();
}



/* Entry: 1028c8b24; end: 1028c8b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c8b24(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec8350) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028c8b90; end: 1028c8bef; -[_TtC34TalkUIScopedFactoryServiceProvider22SCTalkUIScopedServices init] */

void FUN_1028c8b90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("TalkUIScopedFactoryServiceProvider.SCTalkUIScopedServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028c8bbc);
  (*pcVar1)();
}



/* Entry: 1028c8bf0; end: 1028c8bff; -[_TtC34TalkUIScopedFactoryServiceProvider22SCTalkUIScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c8bf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec8350));
  return;
}



/* Entry: 1028c8c00; end: 1028c8c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028c8c00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110563c30;
  func_0x000107c613fc(&UNK_110563c30,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1028c8f44,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1028c8c6c; end: 1028c8d07;  */

void FUN_1028c8c6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110563b40;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110563b40;
  return;
}



/* Entry: 1028c8d08; end: 1028c8d3f;  */

void FUN_1028c8d08(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1028c8d40; end: 1028c8d47;  */

undefined8 FUN_1028c8d40(void)

{
  return 0x1b;
}



/* Entry: 1028c8d48; end: 1028c8e7b;  */

void FUN_1028c8d48(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110563c58;
  func_0x000107c613fc(&UNK_110563c58,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1028c8f1c;
  func_0x00010058fa64(FUN_1028c8f1c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1028c8e7c; end: 1028c8eab;  */

undefined ** FUN_1028c8e7c(void)

{
  return &PTR_DAT_113067018;
}



/* Entry: 1028c8eac; end: 1028c8ecb;  */

void FUN_1028c8eac(void)

{
  func_0x000107c61168(&PTR_PTR_11286b690);
  return;
}



/* Entry: 1028c8ecc; end: 1028c8f1b;  */

undefined1  [16] FUN_1028c8ecc(void)

{
  return ZEXT816(0x110563b90);
}



/* Entry: 1028c8f1c; end: 1028c8f43;  */

void FUN_1028c8f1c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1028c8f44; end: 1028c8f47;  */

void FUN_1028c8f44(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028c8f48; end: 1028c91bf;  */

void FUN_1028c8f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec83b8,&UNK_10daeab40);
  puVar1 = &UNK_110563c98;
  func_0x000107c613fc(&UNK_110563c98,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_12;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_11;
  *(undefined8 *)(puVar1 + 0x48) = param_4;
  *(undefined8 *)(puVar1 + 0x50) = param_5;
  *(undefined8 *)(puVar1 + 0x58) = param_6;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  *(undefined8 *)(puVar1 + 0x68) = param_8;
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_1028c91c0,puVar1);
  return;
}



/* Entry: 1028c91c0; end: 1028c91db;  */

void FUN_1028c91c0(void)

{
  long unaff_x20;
  
  (*(code *)0x1028c9070)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1028c91dc; end: 1028c963f;  */

void FUN_1028c91dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  char *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112ec83c8,&UNK_10daeab80);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112ec83d0,&UNK_10daeabb0);
  puVar2 = &UNK_110563d08;
  func_0x000107c613fc(&UNK_110563d08,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  pcVar3 = FUN_1028c9680;
  func_0x0001000823a8(FUN_1028c9680,puVar2);
  func_0x000100082720("SCModularCallIncomingCallRequestOnTalkUIEntryPointWrapperServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112ec83d8,&UNK_10daeab90);
  puVar2 = &UNK_110563d30;
  func_0x000107c613fc(&UNK_110563d30,0x70,7);
  *(undefined8 **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_7;
  *(undefined8 *)(puVar2 + 0x28) = param_8;
  *(undefined8 *)(puVar2 + 0x30) = param_9;
  *(undefined8 *)(puVar2 + 0x38) = param_4;
  *(undefined8 *)(puVar2 + 0x40) = param_5;
  *(undefined8 *)(puVar2 + 0x48) = param_10;
  *(undefined8 *)(puVar2 + 0x50) = param_11;
  *(undefined8 *)(puVar2 + 0x58) = param_12;
  *(undefined8 *)(puVar2 + 0x60) = param_13;
  *(undefined8 *)(puVar2 + 0x68) = param_14;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  pcVar4 = FUN_1028c9708;
  func_0x0001000823a8(FUN_1028c9708,puVar2);
  func_0x000100082720("SCTalkUIEntryPointWrapperServiceProvider",0x28,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_1028c8d08;
  func_0x0001000823a8(FUN_1028c8d08,0);
  pcVar6 = "SCTalkUIScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCTalkUIScopedServicesCleanupRelayServiceProvider",0x31,2);
  FUN_1028cb880();
  func_0x000100082720("TalkUIScopeGraphBridgeServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112ec83e0,&UNK_10daeaba0);
  puVar2 = &UNK_110563d58;
  func_0x000107c613fc(&UNK_110563d58,0x38,7);
  *(code **)(puVar2 + 0x10) = pcVar3;
  *(code **)(puVar2 + 0x18) = pcVar4;
  *(undefined8 **)(puVar2 + 0x20) = puVar1;
  *(code **)(puVar2 + 0x28) = pcVar5;
  *(char **)(puVar2 + 0x30) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_1028c9798;
  func_0x0001000823a8(FUN_1028c9798,puVar2);
  func_0x000100082720("SCTalkUIScopeInitializationPluginRegistryServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ec8358,&UNK_10daea960);
  func_0x000107c6157c(pcVar7);
  uVar9 = 0x1028c97b8;
  func_0x0001000823a8(0x1028c97b8,pcVar7);
  func_0x000100082720("SCTalkUIScopeInitializationServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112ec8348,&UNK_10daea950);
  func_0x000107c6157c(uVar9);
  uVar8 = 0x1028c97c0;
  func_0x0001000823a8(0x1028c97c0,uVar9);
  func_0x000100082720("SCTalkUIScopedServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar2 = &UNK_110563d80;
  func_0x000107c613fc(&UNK_110563d80,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(code **)(puVar2 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x1028c97c8;
  func_0x0001000823a8(0x1028c97c8,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCTalkUIScopeEntryPointProvider",0x1f,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 1028c9640; end: 1028c967f;  */

void FUN_1028c9640(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1028c91dc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1028c9680; end: 1028c968b;  */

void FUN_1028c9680(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1028c9f18();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  puVar2 = PTR_PTR_1126ab760;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x635349556b6c6174;
  func_0x000107c5fadc(0x635349556b6c6174,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar9 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05cab0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f05c280);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f05cad0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = lVar1;
  return;
}



/* Entry: 1028c968c; end: 1028c9707;  */

void FUN_1028c968c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028c9708; end: 1028c9713;  */

void FUN_1028c9708(void)

{
  long unaff_x20;
  
  FUN_1028c9f8c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1028c9714; end: 1028c9797;  */

void FUN_1028c9714(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1028c9798; end: 1028c97cf;  */

void FUN_1028c9798(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar5 = &UNK_11074dd48;
  ppuVar8 = &PTR_DAT_113067018;
  uVar9 = uVar2;
  func_0x0001000a3aa4();
  func_0x000107c6157c(uVar1);
  uVar6 = 0x112ec85f0;
  func_0x0001000285a8(0x112ec85f0,&UNK_10daeaeb0);
  func_0x0001000a6ee8(&UNK_110563dd8,
                      "SCModularCallIncomingCallRequestOnTalkUIEntryPointWrapperScopeInitializationPluginKey"
                      ,0x55,2,FUN_1028cb1c0,uVar1,uVar6,&UNK_110563dd8,&PTR_DAT_112ec83e8);
  func_0x000107c61574(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x0001000a6ee8(&UNK_110563e58,"SCTalkUIEntryPointWrapperScopeInitializationPluginKey",0x35,2,
                      FUN_1028cb270,uVar3,uVar6,&UNK_110563e58,&PTR_DAT_112ec84d0);
  func_0x000107c61574(uVar3);
  puVar7 = &UNK_110563ea8;
  func_0x000107c613fc(&UNK_110563ea8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar4;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x0001000a6ee8(&UNK_110563bd0,"SCTalkUIScopedServicesScopeInitializationPluginKey",0x32,2,
                      FUN_1028cb344,puVar7,uVar6,&UNK_110563bd0,&PTR_DAT_112ec8360);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_110563ed0;
  func_0x000107c613fc(&UNK_110563ed0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar2;
  *(undefined8 *)(puVar7 + 0x18) = uVar10;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar10);
  func_0x0001000a6ee8(&UNK_1105640b8,"TalkUIScopeGraphBridgeScopeInitializationPluginKey",0x32,2,
                      FUN_1028cb34c,puVar7,uVar6,&UNK_1105640b8,&PTR_DAT_112ec8680);
  func_0x000107c61574(puVar7);
  uVar6 = 0x112ec85f8;
  func_0x0001000285a8(0x112ec85f8,&UNK_10daeaeb8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar5,ppuVar8,uVar9,uVar6);
  func_0x0001000a7f38("SCTalkUIScopeInitializationPluginRegistryServiceProvider",0x38,2);
  *param_1 = puVar5;
  return;
}



/* Entry: 1028c97d0; end: 1028c9dc7;  */

void FUN_1028c97d0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1028c9f18();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  puVar1 = PTR_PTR_1126ab760;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0x635349556b6c6174;
  func_0x000107c5fadc(0x635349556b6c6174,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar7);
  uVar8 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05cab0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f05c280);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f05cad0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 1028c9dc8; end: 1028c9e0b;  */

void FUN_1028c9dc8(void)

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



/* Entry: 1028c9e0c; end: 1028c9e13;  */

undefined8 FUN_1028c9e0c(void)

{
  return 0x1b;
}



/* Entry: 1028c9e14; end: 1028c9e97;  */

void FUN_1028c9e14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028c9f58,param_2,FUN_1028c9f5c,param_2,FUN_1028c9f84,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028c9e98; end: 1028c9ee7;  */

undefined8 FUN_1028c9e98(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1028c9ee8; end: 1028c9f17;  */

void FUN_1028c9ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110563d98;
  return;
}



/* Entry: 1028c9f18; end: 1028c9f37;  */

void FUN_1028c9f18(void)

{
  func_0x000107c61168(&PTR_PTR_112ec8450);
  return;
}



/* Entry: 1028c9f38; end: 1028c9f5b;  */

undefined1  [16] FUN_1028c9f38(void)

{
  return ZEXT816(0x110563dd8);
}



/* Entry: 1028c9f5c; end: 1028c9f83;  */

void FUN_1028c9f5c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028c9f84; end: 1028c9f8b;  */

undefined8 FUN_1028c9f84(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1028c9f8c; end: 1028cad43;  */

void FUN_1028c9f8c(long *param_1,long param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
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
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  FUN_1028caee4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  puVar1 = PTR_PTR_1126ab768;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0x635349556b6c6174;
  func_0x000107c5fadc(0x635349556b6c6174,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar15 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar15);
  uVar14 = 0x767265536b6c6174;
  func_0x000107c5fadc(0x767265536b6c6174,0xec00000073656369);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f05cab0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f05c280);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c970);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f05c110);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0x6976726553746570;
  func_0x000107c5fadc(0x6976726553746570,0xeb00000000736563);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar2);
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
  *param_1 = param_2;
  return;
}



/* Entry: 1028cad44; end: 1028cadd7;  */

void FUN_1028cad44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1028cadd8; end: 1028caddf;  */

undefined8 FUN_1028cadd8(void)

{
  return 0x1b;
}



/* Entry: 1028cade0; end: 1028cae63;  */

void FUN_1028cade0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1028caf24,param_2,FUN_1028caf28,param_2,FUN_1028caf50,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1028cae64; end: 1028caeb3;  */

undefined8 FUN_1028cae64(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1028caeb4; end: 1028caee3;  */

void FUN_1028caeb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110563e18;
  return;
}



/* Entry: 1028caee4; end: 1028caf03;  */

void FUN_1028caee4(void)

{
  func_0x000107c61168(&PTR_PTR_112ec8538);
  return;
}



/* Entry: 1028caf04; end: 1028caf27;  */

undefined1  [16] FUN_1028caf04(void)

{
  return ZEXT816(0x110563e58);
}



/* Entry: 1028caf28; end: 1028caf4f;  */

void FUN_1028caf28(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1028caf50; end: 1028caf57;  */

undefined8 FUN_1028caf50(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1028caf58; end: 1028cb1bf;  */

void FUN_1028caf58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074dd48;
  ppuVar4 = &PTR_DAT_113067018;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112ec85f0;
  func_0x0001000285a8(0x112ec85f0,&UNK_10daeaeb0);
  func_0x0001000a6ee8(&UNK_110563dd8,
                      "SCModularCallIncomingCallRequestOnTalkUIEntryPointWrapperScopeInitializationPluginKey"
                      ,0x55,2,FUN_1028cb1c0,param_2,uVar2,&UNK_110563dd8,&PTR_DAT_112ec83e8);
  func_0x000107c61574(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110563e58,"SCTalkUIEntryPointWrapperScopeInitializationPluginKey",0x35,2,
                      FUN_1028cb270,param_3,uVar2,&UNK_110563e58,&PTR_DAT_112ec84d0);
  func_0x000107c61574(param_3);
  puVar3 = &UNK_110563ea8;
  func_0x000107c613fc(&UNK_110563ea8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_110563bd0,"SCTalkUIScopedServicesScopeInitializationPluginKey",0x32,2,
                      FUN_1028cb344,puVar3,uVar2,&UNK_110563bd0,&PTR_DAT_112ec8360);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110563ed0;
  func_0x000107c613fc(&UNK_110563ed0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_1105640b8,"TalkUIScopeGraphBridgeScopeInitializationPluginKey",0x32,2,
                      FUN_1028cb34c,puVar3,uVar2,&UNK_1105640b8,&PTR_DAT_112ec8680);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ec85f8;
  func_0x0001000285a8(0x112ec85f8,&UNK_10daeaeb8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCTalkUIScopeInitializationPluginRegistryServiceProvider",0x38,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1028cb1c0; end: 1028cb1eb;  */

void FUN_1028cb1c0(void)

{
  FUN_1028cb1ec();
  return;
}



/* Entry: 1028cb1ec; end: 1028cb26f;  */

void FUN_1028cb1ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}


