/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102538274; end: 1025382d3; -[_TtC35MapLocationSearchTrayImplementation35MapCloudFooterSearchContextProvider init] */

void FUN_102538274(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapLocationSearchTrayImplementation.MapCloudFooterSearchContextProvider",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025382a0);
  (*pcVar1)();
}



/* Entry: 1025382d4; end: 10253836f; -[_TtC35MapLocationSearchTrayImplementation35MapCloudFooterSearchContextProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1025382d4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea4310));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4328));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112ea42f8),
                      ((undefined8 *)(param_1 + _DAT_112ea42f8))[1]);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4320));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4318));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4308));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea4300));
  param_1 = param_1 + _DAT_112ea4330;
  (*(code *)&DAT_1038b7ebc)();
  return param_1;
}



/* Entry: 102538370; end: 10253847b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102538370(double param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  puVar1 = auStack_70;
  FUN_102538204(unaff_x20 + _DAT_112ea4330,auStack_70);
  func_0x000107c61618();
  func_0x000102538240(auStack_70);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c614f0(puVar1);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102538474);
      (*pcVar3)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102538478);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10253847c);
      (*pcVar3)();
    }
    (**(code **)(lStack_68 + 0x10))(param_2,(long)param_1,puVar2,lStack_68);
    func_0x000107c615e8(puVar1);
  }
  pcVar3 = *(code **)(unaff_x20 + _DAT_112ea42f8);
  if (pcVar3 != (code *)0x0) {
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112ea42f8))[1];
    func_0x000107c6157c(uVar4);
    (*pcVar3)();
    func_0x00010058d43c(pcVar3,uVar4);
  }
  return;
}



/* Entry: 10253847c; end: 1025384e3; -[_TtC35MapLocationSearchTrayImplementation35MapCloudFooterSearchContextProvider onFriendButtonTapWithUserIds:actionId:] */

void FUN_10253847c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  func_0x000107c61174(param_2);
  FUN_102538370(param_1,param_4);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1025384e4; end: 10253859b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025384e4(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  puVar1 = auStack_60;
  FUN_102538204(unaff_x20 + _DAT_112ea4330,auStack_60);
  func_0x000107c61618();
  func_0x000102538240(auStack_60);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c614f0(puVar1);
    (**(code **)(lStack_58 + 0x20))(param_1,puVar2,lStack_58);
    func_0x000107c615e8(puVar1);
  }
  pcVar3 = *(code **)(unaff_x20 + _DAT_112ea42f8);
  if (pcVar3 != (code *)0x0) {
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112ea42f8))[1];
    func_0x000107c6157c(uVar4);
    (*pcVar3)();
    func_0x00010058d43c(pcVar3,uVar4);
  }
  return;
}



/* Entry: 10253859c; end: 1025385eb; -[_TtC35MapLocationSearchTrayImplementation35MapCloudFooterSearchContextProvider onPlaceTapWithPlaceCardData:] */

/* WARNING: Possible PIC construction at 0x0001025385d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025385d8) */

void FUN_10253859c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1025384e4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1025385ec; end: 102538707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025385ec(double param_1,undefined8 param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_80 [8];
  long lStack_78;
  
  puVar1 = auStack_80;
  FUN_102538204(unaff_x20 + _DAT_112ea4330,auStack_80);
  func_0x000107c61618();
  func_0x000102538240(auStack_80);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c614f0(puVar1);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102538700);
      (*pcVar3)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102538704);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102538708);
      (*pcVar3)();
    }
    (**(code **)(lStack_78 + 0x18))(param_2,param_3 & 1,(long)param_1,puVar2,lStack_78);
    func_0x000107c615e8(puVar1);
  }
  pcVar3 = *(code **)(unaff_x20 + _DAT_112ea42f8);
  if (pcVar3 != (code *)0x0) {
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112ea42f8))[1];
    func_0x000107c6157c(uVar4);
    (*pcVar3)();
    func_0x00010058d43c(pcVar3,uVar4);
  }
  return;
}



/* Entry: 102538708; end: 10253876f; -[_TtC35MapLocationSearchTrayImplementation35MapCloudFooterSearchContextProvider onPlacePivotTapWithPivot:isSearchQuery:actionId:] */

/* WARNING: Possible PIC construction at 0x000102538754: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102538758) */

void FUN_102538708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_1025385ec(param_1,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 102538770; end: 102538817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102538770(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  puVar1 = auStack_60;
  FUN_102538204(unaff_x20 + _DAT_112ea4330,auStack_60);
  func_0x000107c61618();
  func_0x000102538240(auStack_60);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c614f0(puVar1);
    (**(code **)(lStack_58 + 0x28))();
    func_0x000107c615e8(puVar1);
  }
  pcVar2 = *(code **)(unaff_x20 + _DAT_112ea42f8);
  if (pcVar2 != (code *)0x0) {
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112ea42f8))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar2)();
    func_0x00010058d43c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 102538818; end: 10253883f; -[_TtC35MapLocationSearchTrayImplementation35MapCloudFooterSearchContextProvider onMemoriesPivotTap] */

void FUN_102538818(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102538770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102538840; end: 1025388e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102538840(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  puVar1 = auStack_60;
  FUN_102538204(unaff_x20 + _DAT_112ea4330,auStack_60);
  func_0x000107c61618();
  func_0x000102538240(auStack_60);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x000107c614f0(puVar1);
    (**(code **)(lStack_58 + 0x30))();
    func_0x000107c615e8(puVar1);
  }
  pcVar2 = *(code **)(unaff_x20 + _DAT_112ea42f8);
  if (pcVar2 != (code *)0x0) {
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112ea42f8))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar2)();
    func_0x00010058d43c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 1025388e8; end: 10253890f; -[_TtC35MapLocationSearchTrayImplementation35MapCloudFooterSearchContextProvider onFootstepsPivotTap] */

void FUN_1025388e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102538840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102538910; end: 10253891f;  */

undefined1  [16] FUN_102538910(void)

{
  return ZEXT816(0x11051e210);
}



/* Entry: 102538920; end: 10253893f;  */

void FUN_102538920(void)

{
  func_0x000107c61168(&PTR_PTR_11284cc10);
  return;
}



/* Entry: 102538940; end: 10253897b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102538940(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x0001000b6d30();
    func_0x000107c613fc();
    func_0x0001000b6d50(0,0);
  }
  else {
    func_0x000100083b20(&puStack_98);
    puVar7 = puStack_98;
    lVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    lVar3 = lVar2;
    func_0x000100403a6c();
    func_0x000100bcb1dc(lVar2 + 0x20);
    lVar2 = lVar3;
    func_0x000107c5fe08(lVar3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar3);
    uVar4 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    uStack_78 = 0x102538948;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1019e993c;
    puStack_80 = &UNK_11051e248;
    ppuVar5 = &puStack_98;
    uStack_70 = param_1;
    func_0x000107c60bc4(ppuVar5);
    uVar8 = uStack_70;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar8);
    puVar6 = puVar7;
    func_0x000107c4da68();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar4);
    puVar7 = &UNK_11051e280;
    func_0x000107c613fc(&UNK_11051e280,0x18,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    uVar8 = 0;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(0x10253896c,puVar7,uVar8);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10253897c; end: 1025389f3;  */

void FUN_10253897c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1025389f4;
  plVar5[0x19] = lVar2;
  plVar5[0x1a] = lVar4;
  plVar5[0x17] = lVar1;
  plVar5[0x18] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102537f24,0,0);
  return;
}



/* Entry: 1025389f4; end: 102538a2f;  */

void FUN_1025389f4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102538a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102538a30; end: 102538a47;  */

long FUN_102538a30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102538a48; end: 102538e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102538a48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  puVar1 = PTR_PTR_1126aaa48;
  func_0x000107c610f8(PTR_PTR_1126aaa48);
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126b0c98;
  func_0x000107c610f8(PTR_PTR_1126b0c98);
  func_0x000107c47f1c();
  func_0x000100083b20(&puStack_80);
  puVar3 = puStack_80;
  func_0x000107c439dc();
  func_0x000107c61180();
  func_0x000107c61170(puStack_80);
  puVar4 = puVar3;
  (**(code **)(puVar3 + 0x10))(puVar3,puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(puVar3);
  puVar3 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c54c28(puVar1);
    func_0x000107c615e8(puVar3);
  }
  puVar3 = &UNK_11051e340;
  puVar5 = puVar3;
  func_0x000107c613fc(&UNK_11051e340,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1025399e8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = (undefined *)0x10253922c;
  puStack_68 = &UNK_11051e358;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c54e9c(puVar1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c613fc(&UNK_11051e340,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcStack_60 = (code *)0x102539a0c;
  puStack_80 = puVar4;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10113149c;
  puStack_68 = &UNK_11051e380;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c54ea4(puVar1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000100083b20(&puStack_80);
  puVar3 = puStack_80;
  puVar4 = puStack_80;
  func_0x000107c4c3ac();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c5607c(puVar1);
    func_0x000107c615e8(puVar3);
  }
  func_0x000100083b20(&puStack_80);
  puVar3 = puStack_80;
  lVar8 = *(long *)(puStack_80 + _DAT_112fb2bb0);
  func_0x000107c61174();
  func_0x000107c61170(puVar3);
  lVar9 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar9 != 0) {
    func_0x000107c569b8(puVar1);
    func_0x000107c615e8(lVar9);
  }
  func_0x000100083b20(&puStack_80);
  puVar3 = puStack_80;
  lVar8 = *(long *)(puStack_80 + _DAT_112fee670);
  func_0x000107c61174();
  func_0x000107c61170(puVar3);
  lVar9 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar9 != 0) {
    lVar8 = lVar9;
    func_0x000107c4e9c0(lVar9);
    func_0x000107c61180();
    func_0x000107c615e8(lVar9);
    func_0x000107c5997c(puVar1);
    func_0x000107c615e8(lVar8);
  }
  func_0x000100083b20(&puStack_80);
  puVar3 = puStack_80;
  lVar8 = *(long *)(puStack_80 + _DAT_112fb2bb8);
  func_0x000107c61174();
  func_0x000107c61170(puVar3);
  lVar9 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar9 != 0) {
    func_0x000107c599b0(puVar1);
    func_0x000107c615e8(lVar9);
  }
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 102538e14; end: 102538fe7;  */

void FUN_102538e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea43a0,&UNK_10dab7510);
  puVar1 = &UNK_11051e2f8;
  func_0x000107c613fc(&UNK_11051e2f8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_102538fe8,puVar1);
  return;
}



/* Entry: 102538fe8; end: 102538ff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102538fe8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [48];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar9 = &lStack_90;
  lVar7 = lVar1;
  func_0x000100083b20(auStack_80);
  FUN_1025399c8();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(long *)(lVar8 + _DAT_112ea43a8) = lVar1;
  *(undefined8 *)(lVar8 + _DAT_112ea43b0) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112ea43b8) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112ea43c0) = uVar5;
  *(undefined8 *)(lVar8 + _DAT_112ea43c8) = uVar3;
  FUN_102538204(auStack_80,lVar8 + _DAT_112ea43d0);
  puVar6 = PTR_s_init_1125d9248;
  lStack_90 = lVar8;
  lStack_88 = lVar7;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(&lStack_90,puVar6);
  func_0x000102538240(auStack_80);
  *param_1 = plVar9;
  return;
}



/* Entry: 102538ff8; end: 1025390c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102538ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar1 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea43a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea43b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea43b8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea43c0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea43c8) = param_5;
  FUN_102538204(param_6,unaff_x20 + _DAT_112ea43d0);
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000102538240(param_6);
  return puVar1;
}



/* Entry: 1025390c8; end: 1025394a3;  */

undefined8 FUN_1025390c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000102539148(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return param_1;
}



/* Entry: 1025394a4; end: 1025394eb;  */

void FUN_1025394a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_10253a204(0,0x112ea4418,&PTR_PTR_1126aaa50);
  func_0x000107c5fc48(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1025394ec; end: 1025396e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025394ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000100083b20(&puStack_88);
    func_0x000107c61170(param_2);
    puVar1 = puStack_88;
    func_0x000107c4b8ac();
    func_0x000107c61180();
    func_0x000107c61170(puStack_88);
    puVar2 = puVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126cd658;
      func_0x000107c610f8(PTR_PTR_1126cd658);
      func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
      func_0x000107c46a24(puVar3);
      func_0x000107c61170(param_3);
      puVar1 = &UNK_11051e3e0;
      func_0x000107c613fc(&UNK_11051e3e0,0x20,7);
      *(undefined8 *)(puVar1 + 0x10) = param_1;
      *(undefined8 *)(puVar1 + 0x18) = param_4;
      uStack_68 = 0x102539ae4;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      pcStack_78 = FUN_102539868;
      puStack_70 = &UNK_11051e3f8;
      ppuVar4 = &puStack_88;
      puStack_60 = puVar1;
      func_0x000107c60bc4(ppuVar4);
      puVar1 = puStack_60;
      func_0x000107c6157c(param_1);
      func_0x000107c61574(puVar1);
      func_0x000107c431a4(puVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x0001000b6d30(0);
      func_0x000107c613fc();
      func_0x0001000b6d50(0,0);
      func_0x000107c615e8(puVar2);
      func_0x000107c61170(puVar3);
      return;
    }
  }
  func_0x000100c7f554();
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 1025396e4; end: 1025397b7;  */

/* WARNING: Possible PIC construction at 0x00010253979c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025397a0) */

void FUN_1025396e4(undefined *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_2 == 0) && (param_1 != (undefined *)0x0)) {
    FUN_102539e60();
    puVar2 = param_1;
  }
  puVar1 = &UNK_11051e430;
  func_0x000107c613fc(&UNK_11051e430,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  puVar2 = &UNK_11051e458;
  func_0x000107c613fc(&UNK_11051e458,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab75a0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(param_3);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dab75a8,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1025397b8; end: 102539823;  */

void FUN_1025397b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102539824,uVar1,uVar2);
  return;
}



/* Entry: 102539824; end: 102539867;  */

void FUN_102539824(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000100087f6c();
  func_0x000100c7f554();
                    /* WARNING: Could not recover jumptable at 0x000102539864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102539868; end: 1025398df;  */

/* WARNING: Possible PIC construction at 0x0001025398c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025398c8) */

void FUN_102539868(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1025398e0; end: 10253993f; -[_TtC35MapLocationSearchTrayImplementation37MapLocationSearchFriendConfigProvider init] */

void FUN_1025398e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapLocationSearchTrayImplementation.MapLocationSearchFriendConfigProvider",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10253990c);
  (*pcVar1)();
}



/* Entry: 102539940; end: 10253994f;  */

undefined1  [16] FUN_102539940(void)

{
  return ZEXT816(0x11051e320);
}



/* Entry: 102539950; end: 1025399c7; -[_TtC35MapLocationSearchTrayImplementation37MapLocationSearchFriendConfigProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102539950(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea43a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea43b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea43c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea43c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea43b8));
  param_1 = param_1 + _DAT_112ea43d0;
  (*(code *)&DAT_1038b7ebc)();
  return param_1;
}



/* Entry: 1025399c8; end: 1025399e7;  */

void FUN_1025399c8(void)

{
  func_0x000107c61168(&PTR_PTR_11284cd08);
  return;
}



/* Entry: 1025399e8; end: 102539a13;  */

undefined8 FUN_1025399e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000102539148(param_1,param_2);
    func_0x000107c61170(lVar1);
  }
  return param_1;
}



/* Entry: 102539a14; end: 102539a83;  */

void FUN_102539a14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112ea4400 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ea4408;
  func_0x00010002969c(0x112ea4408,&UNK_10dab7588);
  uVar2 = uVar1;
  FUN_102539a84();
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam0000000112ea4400 = puVar3;
  return;
}



/* Entry: 102539a84; end: 102539ad7;  */

void FUN_102539a84(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ea4410 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10253a204(0xff,0x112ea4418,&PTR_PTR_1126aaa50);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112ea4410 = puVar2;
  return;
}



/* Entry: 102539ad8; end: 102539aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102539ad8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000100083b20(&puStack_88);
    func_0x000107c61170(lVar1);
    puVar2 = puStack_88;
    func_0x000107c4b8ac();
    func_0x000107c61180();
    func_0x000107c61170(puStack_88);
    puVar3 = puVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126cd658;
      func_0x000107c610f8(PTR_PTR_1126cd658);
      func_0x000107c5fc48(uVar5,PTR___sSSN_11034da80);
      func_0x000107c46a24(puVar4);
      func_0x000107c61170(uVar5);
      puVar2 = &UNK_11051e3e0;
      func_0x000107c613fc(&UNK_11051e3e0,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = param_1;
      *(undefined8 *)(puVar2 + 0x18) = uVar7;
      uStack_68 = 0x102539ae4;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      pcStack_78 = FUN_102539868;
      puStack_70 = &UNK_11051e3f8;
      ppuVar6 = &puStack_88;
      puStack_60 = puVar2;
      func_0x000107c60bc4(ppuVar6);
      puVar2 = puStack_60;
      func_0x000107c6157c(param_1);
      func_0x000107c61574(puVar2);
      func_0x000107c431a4(puVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x0001000b6d30(0);
      func_0x000107c613fc();
      func_0x0001000b6d50(0,0);
      func_0x000107c615e8(puVar3);
      func_0x000107c61170(puVar4);
      return;
    }
  }
  func_0x000100c7f554();
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 102539aec; end: 102539b23;  */

void FUN_102539aec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102539b24; end: 102539b73;  */

void FUN_102539b24(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102539b74;
  plVar3[3] = lVar2;
  plVar3[4] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102539824,lVar1,lVar2);
  return;
}



/* Entry: 102539b74; end: 102539baf;  */

void FUN_102539b74(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102539bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102539bb0; end: 102539c1f;  */

void FUN_102539bb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10253a254;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102539c20; end: 102539e5f;  */

ulong FUN_102539c20(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102539d48);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10253bf64(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102539d44);
      (*pcVar1)();
    }
    func_0x000102539d48(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102539e60; end: 10253a203;  */

undefined * FUN_102539e60(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  func_0x000107c439b4();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_10253a204(0,0x112ea4428,&PTR_PTR_1126cd6c0);
  uVar4 = param_1;
  func_0x000107c5fc54(param_1,uVar3);
  func_0x000107c61170(param_1);
  uVar17 = uVar4 & 0xffffffffffffff8;
  if (uVar4 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar17 + 0x10);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar15 = uVar17;
    if (0x7fffffffffffffff < uVar4) {
      uVar15 = uVar4;
    }
    func_0x000107c60480();
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar13;
  if (uVar15 != 0) {
    uVar16 = 0;
    do {
      while( true ) {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar17 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10253a1b8);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar4 + uVar16 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar16;
          func_0x00010253e920(uVar16,uVar4);
        }
        uVar1 = uVar16 + 1;
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10253a1b4);
          (*pcVar2)();
        }
        uVar8 = uVar5;
        func_0x000107c4b8a8();
        func_0x000107c61180();
        if (uVar8 != 0) break;
        func_0x000107c61170(uVar5);
LAB_102539efc:
        uVar16 = uVar16 + 1;
        if (uVar1 == uVar15) goto LAB_10253a1d8;
      }
      uVar6 = 0;
      FUN_10253a204(0,0x112ea4430,&PTR_PTR_1126cd6d0);
      uVar7 = uVar8;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar8);
      if (uVar7 >> 0x3e == 0) {
        uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar8 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar7) {
          uVar8 = uVar7;
        }
        func_0x000107c60480();
      }
      if (uVar8 == 0) {
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar7);
        goto LAB_102539efc;
      }
      if ((uVar7 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10253a1bc);
          (*pcVar2)();
        }
        uVar8 = *(ulong *)(uVar7 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar8 = 0;
        uVar6 = uVar7;
        func_0x00010253e934();
      }
      func_0x000107c6142c(uVar7);
      uVar7 = uVar8;
      func_0x000107c5c82c();
      func_0x000107c61180();
      uVar9 = uVar7;
      func_0x000107c5faec();
      uVar14 = uVar6;
      func_0x000107c61170(uVar7);
      func_0x000107c6142c(uVar6);
      uVar7 = uVar9 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar7 = uVar6 >> 0x38 & 0xf;
      }
      if (uVar7 == 0) {
        func_0x000107c61170(uVar8);
        func_0x000107c61170(uVar5);
        goto LAB_102539efc;
      }
      uVar6 = uVar5;
      func_0x000107c439a0();
      func_0x000107c61180();
      uVar7 = uVar14;
      if (uVar6 == 0) {
        func_0x000107c5faec();
        uVar7 = uVar14;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar14);
      }
      uVar9 = uVar8;
      func_0x000107c5c82c();
      func_0x000107c61180();
      if (uVar9 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar7);
      }
      puVar10 = PTR_PTR_1126aaa50;
      func_0x000107c610f8();
      func_0x000107c46a20();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar9);
      if (puVar10 == (undefined *)0x0) goto LAB_102539efc;
      puVar11 = puVar13;
      func_0x000107c61550();
      if ((((int)puVar11 == 0) || ((long)puVar13 < 0)) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar13 >> 0x3e == 0) {
          puVar11 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar11 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar13) {
            puVar11 = puVar13;
          }
          func_0x000107c60480(puVar11);
        }
        puVar12 = (undefined *)0x0;
        FUN_102539c20(0,puVar11 + 1,1,puVar13);
        puVar13 = puVar12;
      }
      uVar5 = (ulong)puVar13 & 0xffffffffffffff8;
      uVar16 = *(ulong *)(uVar5 + 0x10);
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar16) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_102539c20(puVar13,uVar16 + 1,1);
        uVar5 = (ulong)puVar13 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar5 + 0x10) = uVar16 + 1;
      *(undefined **)(uVar5 + uVar16 * 8 + 0x20) = puVar10;
      uVar16 = uVar1;
    } while (uVar1 != uVar15);
  }
LAB_10253a1d8:
  func_0x000107c6142c(uVar4);
  return puVar13;
}



/* Entry: 10253a204; end: 10253a243;  */

void FUN_10253a204(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10253a244; end: 10253a257;  */

void FUN_10253a244(long param_1,long param_2)

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



/* Entry: 10253a258; end: 10253a48f;  */

undefined * FUN_10253a258(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  puVar1 = PTR_PTR_1126aaa60;
  func_0x000107c610f8(PTR_PTR_1126aaa60);
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x00010253a52c();
  puVar3 = puVar2;
  func_0x0001004575f0();
  func_0x000107c61574(puVar2);
  puVar2 = puVar3;
  func_0x000107c5cb24(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c57bc0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11051e4c8;
  func_0x000107c613fc(&UNK_11051e4c8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcStack_40 = FUN_10253ba14;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100c75f50;
  puStack_48 = &UNK_11051e4e0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c57cd8(puVar1);
  func_0x000107c60bd0(ppuVar4);
  return puVar1;
}



/* Entry: 10253a490; end: 10253a497;  */

void FUN_10253a490(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_68;
  undefined1 auStack_60 [48];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar1;
  func_0x000100083b20(auStack_60,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10253b9f4();
  func_0x000107c613fc();
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112ea4338,&UNK_10dab7448);
  func_0x000107c613fc();
  ppuVar3 = &puStack_68;
  func_0x00010042e6a0();
  *(undefined ***)(lVar2 + 0x18) = ppuVar3;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(long *)(lVar2 + 0x10) = lVar1;
  FUN_10253b96c(auStack_60,lVar2 + 0x28);
  *param_1 = lVar2;
  func_0x000107c6157c(lVar1);
  return;
}



/* Entry: 10253a498; end: 10253a63f;  */

long FUN_10253a498(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long unaff_x20;
  undefined *puStack_38;
  
  func_0x000107c613fc();
  puStack_38 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112ea4338,&UNK_10dab7448);
  func_0x000107c613fc();
  ppuVar1 = &puStack_38;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + 0x18) = ppuVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_10253b96c(param_2,unaff_x20 + 0x28);
  return unaff_x20;
}



/* Entry: 10253a640; end: 10253a8df;  */

/* WARNING: Removing unreachable block (ram,0x00010253a6dc) */

void FUN_10253a640(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined *puVar13;
  ulong uStack_80;
  undefined *puStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c51a88(uVar5);
  func_0x000107c61180();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e5bfb8;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110e5bfb8);
  puVar13 = param_1;
  puVar11 = param_2;
  func_0x000107c5fadc(param_1);
  func_0x000107c4ff10(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(ppuVar6);
  func_0x000107c61170(puVar13);
  func_0x000104886d18(&puStack_68);
  if ((ulong)puStack_68 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar13 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_68) {
      puVar13 = puStack_68;
    }
    func_0x000107c60480();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
  if (puVar13 != (undefined *)0x0) {
    uStack_80 = (ulong)puStack_68 & 0xffffffffffffff8;
    puVar10 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puStack_68 & 0xc000000000000001) == 0) {
          if (*(undefined **)(uStack_80 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10253a878);
            (*pcVar4)();
          }
          puVar7 = *(undefined **)(puStack_68 + (long)puVar10 * 8 + 0x20);
          func_0x000107c61174();
          puVar12 = puVar11;
        }
        else {
          puVar7 = puVar10;
          puVar12 = puStack_68;
          func_0x00010253e948();
        }
        puVar1 = puVar10 + 1;
        if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10253a874);
          (*pcVar4)();
        }
        puVar8 = puVar7;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        puVar9 = puVar8;
        func_0x000107c5faec();
        puVar11 = puVar12;
        func_0x000107c61170(puVar8);
        if ((puVar9 != param_1) || (puVar12 != param_2)) break;
        func_0x000107c61170(puVar7);
        func_0x000107c6142c(puVar12);
LAB_10253a738:
        puVar10 = puVar10 + 1;
        if (puVar1 == puVar13) goto LAB_10253a89c;
      }
      puVar11 = puVar12;
      func_0x000107c605b8(puVar9,puVar12,param_1,param_2,0);
      func_0x000107c6142c(puVar12);
      if (((ulong)puVar9 & 1) != 0) {
        func_0x000107c61170(puVar7);
        goto LAB_10253a738;
      }
      puVar10 = puVar3;
      func_0x000107c61558();
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)(*(long *)(puVar3 + 0x10) + 1);
        FUN_10253bfe4(0,puVar11,1);
      }
      uVar2 = *(ulong *)(puVar3 + 0x10);
      puVar10 = (undefined *)(uVar2 + 1);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
        puVar11 = puVar10;
        FUN_10253bfe4(1 < *(ulong *)(puVar3 + 0x18),puVar10,1);
      }
      *(undefined **)(puVar3 + 0x10) = puVar10;
      *(undefined **)(puVar3 + uVar2 * 8 + 0x20) = puVar7;
      puVar10 = puVar1;
    } while (puVar1 != puVar13);
  }
LAB_10253a89c:
  func_0x000107c6142c(puStack_68);
  puStack_68 = puVar3;
  func_0x0001007d6d78(&puStack_68);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 10253a8e0; end: 10253a9bf;  */

/* WARNING: Possible PIC construction at 0x00010253a98c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010253a990) */

void FUN_10253a8e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  FUN_10253aa08();
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = &UNK_11051e4c8;
    func_0x000107c613fc(&UNK_11051e4c8,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    puVar2 = &UNK_11051e518;
    func_0x000107c613fc(&UNK_11051e518,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(long *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = uVar3;
    func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dab7660,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 10253a9c0; end: 10253aa07;  */

void FUN_10253a9c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_10253c5ac(0,0x112ea44f8,&PTR_PTR_1126aaa68);
  func_0x000107c5fc48(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10253aa08; end: 10253b4db;  */

byte **** FUN_10253aa08(double param_1)

{
  uint uVar1;
  byte ***pppbVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte ****ppppbVar9;
  byte ****ppppbVar10;
  byte ****ppppbVar11;
  byte ****ppppbVar12;
  byte *pbVar13;
  byte ****ppppbVar14;
  byte ****ppppbVar15;
  byte *pbVar16;
  long lVar17;
  int iVar18;
  byte ****ppppbVar19;
  long unaff_x20;
  byte ****ppppbVar20;
  byte ****ppppbVar21;
  ulong uVar22;
  byte ****ppppbVar23;
  ulong uVar24;
  byte ***pppbStack_108;
  byte ***pppbStack_c8;
  byte ***pppbStack_c0;
  uint uStack_b4;
  byte ***pppbStack_b0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  byte ***pppbStack_88;
  ulong uStack_80;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x38);
  func_0x000107c51a88();
  func_0x000107c61180();
  uVar22 = uVar5;
  func_0x000107c44068();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar6 = 0;
  FUN_10253c5ac(0,0x112d5ecb8,&PTR_PTR_1126b2050);
  uVar5 = uVar22;
  func_0x000107c5fc54(uVar22,uVar6);
  func_0x000107c61170(uVar22);
  pppbStack_108 = (byte ***)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d21d8();
  if (uVar5 >> 0x3e == 0) {
    uVar22 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar22 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar22 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar22 == 0) {
LAB_10253b480:
    func_0x000107c6142c(uVar5);
    return (byte ****)pppbStack_108;
  }
  uVar24 = 0;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e32618;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e5bcb8;
LAB_10253ab2c:
  if ((uVar5 & 0xc000000000000001) == 0) {
    if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b45c);
      (*pcVar3)();
    }
    uVar7 = *(ulong *)(uVar5 + 0x20 + uVar24 * 8);
    func_0x000107c61174();
  }
  else {
    uVar7 = uVar24;
    FUN_10253e750(uVar24,uVar5);
  }
  bVar4 = SCARRY8(uVar24,1);
  uVar24 = uVar24 + 1;
  if (bVar4) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b458);
    (*pcVar3)();
  }
  uVar8 = uVar7;
  func_0x000107c4f4f0();
  func_0x000107c61180();
  if (uVar8 == 0) goto LAB_10253ab1c;
  pppbStack_88 = (byte ***)0x0;
  uVar6 = 0;
  FUN_10253c5ac(0,0x112d5ecb0,&PTR_PTR_1126bf1c0);
  ppppbVar11 = &pppbStack_88;
  func_0x000107c5fc50(uVar8,ppppbVar11,uVar6);
  func_0x000107c61170(uVar8);
  pppbVar2 = pppbStack_88;
  if ((byte ****)pppbStack_88 == (byte ****)0x0) goto LAB_10253ab1c;
  ppppbVar14 = (byte ****)((ulong)pppbStack_88 & 0xffffffffffffff8);
  if ((ulong)pppbStack_88 >> 0x3e == 0) {
    ppppbVar20 = (byte ****)ppppbVar14[2];
  }
  else {
    ppppbVar20 = (byte ****)pppbStack_88;
    if (-1 < (long)pppbStack_88) {
      ppppbVar20 = ppppbVar14;
    }
    func_0x000107c60480();
  }
  if (ppppbVar20 != (byte ****)0x0) {
    pppbStack_c8 = (byte ***)0x0;
    pppbStack_c0 = (byte ***)0x0;
    pppbStack_b0 = (byte ***)0x0;
    uStack_b4 = 1;
    ppppbVar19 = (byte ****)0x0;
LAB_10253ac34:
    if (((ulong)pppbVar2 & 0xc000000000000001) == 0) {
      if (ppppbVar14[2] <= ppppbVar19) {
LAB_10253b450:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b454);
        (*pcVar3)();
      }
      ppppbVar10 = (byte ****)pppbVar2[(long)((long)ppppbVar19 + 4)];
      func_0x000107c61174();
    }
    else {
      ppppbVar10 = ppppbVar19;
      ppppbVar11 = (byte ****)pppbVar2;
      func_0x00010111c554();
    }
    ppppbVar23 = (byte ****)((long)ppppbVar19 + 1);
    if (SCARRY8((long)ppppbVar19,1)) {
LAB_10253b44c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b450);
      (*pcVar3)();
    }
    ppppbVar9 = ppppbVar10;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (ppppbVar9 == (byte ****)0x0) {
LAB_10253abf8:
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e32618);
      ppppbVar12 = ppppbVar11;
LAB_10253ac04:
      func_0x000107c6142c(ppppbVar12);
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e5bcb8);
      ppppbVar11 = ppppbVar12;
      func_0x000107c61170(ppppbVar10);
      func_0x000107c6142c(ppppbVar12);
      goto LAB_10253ac28;
    }
    ppppbVar15 = ppppbVar9;
    func_0x000107c5faec();
    ppppbVar12 = ppppbVar11;
    func_0x000107c61170(ppppbVar9);
    ppppbVar9 = (byte ****)ppuStack_90;
    func_0x000107c5faec();
    if (ppppbVar11 == (byte ****)0x0) goto LAB_10253ac04;
    if ((ppppbVar9 != ppppbVar15) || (ppppbVar11 != ppppbVar12)) {
      ppppbVar21 = ppppbVar12;
      func_0x000107c605b8();
      func_0x000107c6142c(ppppbVar12);
      if (((ulong)ppppbVar9 & 1) != 0) goto LAB_10253acec;
LAB_10253aef0:
      ppppbVar19 = (byte ****)ppuStack_98;
      func_0x000107c5faec();
      if ((ppppbVar19 == ppppbVar15) && (ppppbVar11 == ppppbVar21)) {
        func_0x000107c6142c(ppppbVar21);
        func_0x000107c6142c(ppppbVar11);
        ppppbVar9 = ppppbVar21;
LAB_10253af48:
        ppppbVar11 = ppppbVar10;
        func_0x000107c5d108();
        func_0x000107c61180();
        if (ppppbVar11 == (byte ****)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b4cc);
          (*pcVar3)();
        }
        ppppbVar19 = ppppbVar11;
        func_0x000107c5dc3c();
        func_0x000107c61170(ppppbVar11);
        iVar18 = (int)ppppbVar19;
        if (iVar18 == 2) {
          ppppbVar11 = ppppbVar10;
          func_0x000107c5d108();
          func_0x000107c61180();
          if (ppppbVar11 == (byte ****)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b4d4);
            (*pcVar3)();
          }
          ppppbVar19 = ppppbVar11;
          func_0x000107c5c1d4();
          func_0x000107c61180();
          func_0x000107c61170(ppppbVar11);
          if (ppppbVar19 == (byte ****)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b4d0);
            (*pcVar3)();
          }
          ppppbVar15 = ppppbVar19;
          func_0x000107c5faec();
          func_0x000107c61170(ppppbVar19);
          ppppbVar11 = (byte ****)((ulong)ppppbVar15 & 0xffffffffffff);
          ppppbVar12 = (byte ****)((ulong)ppppbVar9 >> 0x38 & 0xf);
          ppppbVar19 = ppppbVar11;
          if (((ulong)ppppbVar9 & 0x2000000000000000) != 0) {
            ppppbVar19 = ppppbVar12;
          }
          if (ppppbVar19 == (byte ****)0x0) {
            func_0x000107c6142c(ppppbVar9);
            func_0x000107c61170(ppppbVar10);
            pppbStack_c0 = (byte ***)0x0;
            uStack_b4 = 1;
          }
          else {
            if (((ulong)ppppbVar9 >> 0x3c & 1) == 0) {
              if (((ulong)ppppbVar9 >> 0x3d & 1) == 0) {
                if (((ulong)ppppbVar15 >> 0x3c & 1) == 0) {
                  ppppbVar11 = ppppbVar9;
                  func_0x000107c60358();
                }
                else {
                  ppppbVar15 = (byte ****)(((ulong)ppppbVar9 & 0xfffffffffffffff) + 0x20);
                }
                if (*(byte *)ppppbVar15 == 0x2b) {
                  if ((long)ppppbVar11 < 1) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b4b4);
                    (*pcVar3)();
                  }
                  pbVar13 = (byte *)((long)ppppbVar11 + -1);
                  if (pbVar13 == (byte *)0x0) goto LAB_10253b2ec;
                  ppppbVar19 = (byte ****)0x0;
                  do {
                    ppppbVar15 = (byte ****)((long)ppppbVar15 + 1);
                    if (((9 < *(byte *)ppppbVar15 - 0x30) ||
                        (lVar17 = (long)ppppbVar19 * 10,
                        SUB168(SEXT816((long)ppppbVar19) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                       (uVar8 = (ulong)(byte)(*(byte *)ppppbVar15 - 0x30),
                       ppppbVar19 = (byte ****)(lVar17 + uVar8), SCARRY8(lVar17,uVar8)))
                    goto LAB_10253b2ec;
                    ppppbVar21 = (byte ****)0x0;
                    pbVar13 = pbVar13 + -1;
                  } while (pbVar13 != (byte *)0x0);
                }
                else if (*(byte *)ppppbVar15 == 0x2d) {
                  if ((long)ppppbVar11 < 1) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b4c0);
                    (*pcVar3)();
                  }
                  pbVar13 = (byte *)((long)ppppbVar11 + -1);
                  if (pbVar13 == (byte *)0x0) {
LAB_10253b2ec:
                    ppppbVar21 = (byte ****)0x1;
                    ppppbVar19 = (byte ****)0x0;
                  }
                  else {
                    ppppbVar19 = (byte ****)0x0;
                    do {
                      ppppbVar15 = (byte ****)((long)ppppbVar15 + 1);
                      if (((9 < *(byte *)ppppbVar15 - 0x30) ||
                          (lVar17 = (long)ppppbVar19 * 10,
                          SUB168(SEXT816((long)ppppbVar19) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                         (uVar8 = (ulong)(byte)(*(byte *)ppppbVar15 - 0x30),
                         ppppbVar19 = (byte ****)(lVar17 - uVar8), SBORROW8(lVar17,uVar8)))
                      goto LAB_10253b2ec;
                      ppppbVar21 = (byte ****)0x0;
                      pbVar13 = pbVar13 + -1;
                    } while (pbVar13 != (byte *)0x0);
                  }
                }
                else {
                  if (ppppbVar11 == (byte ****)0x0) goto LAB_10253b2ec;
                  if (ppppbVar15 == (byte ****)0x0) {
                    ppppbVar21 = (byte ****)0x0;
                    ppppbVar19 = (byte ****)0x0;
                  }
                  else {
                    ppppbVar19 = (byte ****)0x0;
                    do {
                      if (((9 < *(byte *)ppppbVar15 - 0x30) ||
                          (lVar17 = (long)ppppbVar19 * 10,
                          SUB168(SEXT816((long)ppppbVar19) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                         (uVar8 = (ulong)(byte)(*(byte *)ppppbVar15 - 0x30),
                         ppppbVar19 = (byte ****)(lVar17 + uVar8), SCARRY8(lVar17,uVar8)))
                      goto LAB_10253b2ec;
                      ppppbVar21 = (byte ****)0x0;
                      ppppbVar11 = (byte ****)((long)ppppbVar11 + -1);
                      ppppbVar15 = (byte ****)((long)ppppbVar15 + 1);
                    } while (ppppbVar11 != (byte ****)0x0);
                  }
                }
              }
              else {
                pppbStack_88 = (byte ***)ppppbVar15;
                uStack_80 = (ulong)ppppbVar9 & 0xffffffffffffff;
                uVar1 = (uint)ppppbVar15 & 0xff;
                if (uVar1 == 0x2b) {
                  if (ppppbVar12 == (byte ****)0x0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b4b8);
                    (*pcVar3)();
                  }
                  pbVar13 = (byte *)((long)ppppbVar12 + -1);
                  if (pbVar13 == (byte *)0x0) goto LAB_10253b2ec;
                  ppppbVar19 = (byte ****)0x0;
                  pbVar16 = (byte *)((ulong)&pppbStack_88 | 1);
                  do {
                    if (((9 < *pbVar16 - 0x30) ||
                        (lVar17 = (long)ppppbVar19 * 10,
                        SUB168(SEXT816((long)ppppbVar19) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                       (uVar8 = (ulong)(byte)(*pbVar16 - 0x30),
                       ppppbVar19 = (byte ****)(lVar17 + uVar8), SCARRY8(lVar17,uVar8)))
                    goto LAB_10253b2ec;
                    ppppbVar21 = (byte ****)0x0;
                    pbVar13 = pbVar13 + -1;
                    pbVar16 = pbVar16 + 1;
                  } while (pbVar13 != (byte *)0x0);
                }
                else if (uVar1 == 0x2d) {
                  if (ppppbVar12 == (byte ****)0x0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b4bc);
                    (*pcVar3)();
                  }
                  pbVar13 = (byte *)((long)ppppbVar12 + -1);
                  if (pbVar13 == (byte *)0x0) goto LAB_10253b2ec;
                  ppppbVar19 = (byte ****)0x0;
                  pbVar16 = (byte *)((ulong)&pppbStack_88 | 1);
                  do {
                    if (((9 < *pbVar16 - 0x30) ||
                        (lVar17 = (long)ppppbVar19 * 10,
                        SUB168(SEXT816((long)ppppbVar19) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                       (uVar8 = (ulong)(byte)(*pbVar16 - 0x30),
                       ppppbVar19 = (byte ****)(lVar17 - uVar8), SBORROW8(lVar17,uVar8)))
                    goto LAB_10253b2ec;
                    ppppbVar21 = (byte ****)0x0;
                    pbVar13 = pbVar13 + -1;
                    pbVar16 = pbVar16 + 1;
                  } while (pbVar13 != (byte *)0x0);
                }
                else {
                  if (ppppbVar12 == (byte ****)0x0) goto LAB_10253b2ec;
                  ppppbVar19 = (byte ****)0x0;
                  ppppbVar15 = &pppbStack_88;
                  do {
                    if (((9 < *(byte *)ppppbVar15 - 0x30) ||
                        (lVar17 = (long)ppppbVar19 * 10,
                        SUB168(SEXT816((long)ppppbVar19) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                       (uVar8 = (ulong)(byte)(*(byte *)ppppbVar15 - 0x30),
                       ppppbVar19 = (byte ****)(lVar17 + uVar8), SCARRY8(lVar17,uVar8)))
                    goto LAB_10253b2ec;
                    ppppbVar21 = (byte ****)0x0;
                    ppppbVar12 = (byte ****)((long)ppppbVar12 + -1);
                    ppppbVar15 = (byte ****)((long)ppppbVar15 + 1);
                  } while (ppppbVar12 != (byte ****)0x0);
                }
              }
            }
            else {
              ppppbVar11 = ppppbVar9;
              func_0x000100edba6c(ppppbVar15,ppppbVar9,10);
              ppppbVar21 = ppppbVar11;
              ppppbVar19 = ppppbVar15;
            }
            func_0x000107c6142c(ppppbVar9);
            func_0x000107c61170(ppppbVar10);
            uStack_b4 = (uint)ppppbVar21;
            pppbStack_c0 = (byte ***)(byte ****)0x0;
            if ((uStack_b4 & 0xff) != 1) {
              pppbStack_c0 = (byte ***)ppppbVar19;
            }
          }
        }
        else if (iVar18 == 5) {
          ppppbVar11 = ppppbVar10;
          func_0x000107c5d108();
          func_0x000107c61180();
          if (ppppbVar11 == (byte ****)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b4dc);
            (*pcVar3)();
          }
          func_0x000107c4223c();
          func_0x000107c61170(ppppbVar11);
          func_0x000107c61170(ppppbVar10);
          if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b460);
            (*pcVar3)();
          }
          if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b464);
            (*pcVar3)();
          }
          if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b468);
            (*pcVar3)();
          }
          uStack_b4 = 0;
          pppbStack_c0 = (byte ***)(long)param_1;
          ppppbVar11 = ppppbVar9;
          param_1 = 9.223372036854776e+18;
        }
        else {
          if (iVar18 != 4) goto LAB_10253afc0;
          ppppbVar11 = ppppbVar10;
          func_0x000107c5d108();
          func_0x000107c61180();
          if (ppppbVar11 == (byte ****)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b4d8);
            (*pcVar3)();
          }
          pppbStack_c0 = (byte ***)ppppbVar11;
          func_0x000107c497f4();
          func_0x000107c61170(ppppbVar11);
          func_0x000107c61170(ppppbVar10);
          uStack_b4 = 0;
          ppppbVar11 = ppppbVar9;
        }
      }
      else {
        ppppbVar9 = ppppbVar21;
        func_0x000107c605b8();
        func_0x000107c6142c(ppppbVar21);
        func_0x000107c6142c(ppppbVar11);
        if (((ulong)ppppbVar19 & 1) != 0) goto LAB_10253af48;
LAB_10253afc0:
        func_0x000107c61170(ppppbVar10);
        ppppbVar11 = ppppbVar9;
      }
      goto LAB_10253ac28;
    }
    func_0x000107c6142c(ppppbVar12);
    ppppbVar21 = ppppbVar12;
LAB_10253acec:
    ppppbVar9 = ppppbVar10;
    func_0x000107c5d108();
    func_0x000107c61180();
    if (ppppbVar9 == (byte ****)0x0) {
LAB_10253b4c0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b4c4);
      (*pcVar3)();
    }
    ppppbVar12 = ppppbVar9;
    func_0x000107c5dc3c();
    func_0x000107c61170(ppppbVar9);
    if ((int)ppppbVar12 != 2) goto LAB_10253aef0;
    func_0x000107c6142c(ppppbVar11);
    ppppbVar11 = ppppbVar10;
    func_0x000107c5d108();
    func_0x000107c61180();
    if (ppppbVar11 == (byte ****)0x0) {
LAB_10253b4c4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10253b4c8);
      (*pcVar3)();
    }
    ppppbVar9 = ppppbVar11;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(ppppbVar11);
    if (ppppbVar9 != (byte ****)0x0) goto LAB_10253ad58;
    func_0x000107c61170(ppppbVar10);
    func_0x000107c6142c(pppbStack_b0);
    if (ppppbVar23 != ppppbVar20) {
      pbVar13 = (byte *)((long)ppppbVar19 + 5);
      do {
        ppppbVar19 = (byte ****)(pbVar13 + -4);
        if (((ulong)pppbVar2 & 0xc000000000000001) == 0) {
          if (ppppbVar14[2] <= ppppbVar19) goto LAB_10253b450;
          ppppbVar10 = (byte ****)pppbVar2[(long)pbVar13];
          func_0x000107c61174();
          ppppbVar11 = ppppbVar21;
        }
        else {
          ppppbVar10 = ppppbVar19;
          ppppbVar11 = (byte ****)pppbVar2;
          func_0x00010111c554();
        }
        ppppbVar23 = (byte ****)(pbVar13 + -3);
        if (SCARRY8((long)ppppbVar19,1)) goto LAB_10253b44c;
        ppppbVar19 = ppppbVar10;
        func_0x000107c4a8c4();
        func_0x000107c61180();
        if (ppppbVar19 == (byte ****)0x0) {
          pppbStack_c8 = (byte ***)0x0;
          pppbStack_b0 = (byte ***)0x0;
          goto LAB_10253abf8;
        }
        ppppbVar15 = ppppbVar19;
        func_0x000107c5faec();
        ppppbVar12 = ppppbVar11;
        func_0x000107c61170(ppppbVar19);
        ppppbVar19 = (byte ****)ppuStack_90;
        func_0x000107c5faec();
        if (ppppbVar11 == (byte ****)0x0) {
          pppbStack_c8 = (byte ***)0x0;
          pppbStack_b0 = (byte ***)0x0;
          goto LAB_10253ac04;
        }
        if ((ppppbVar19 != ppppbVar15) || (ppppbVar11 != ppppbVar12)) {
          ppppbVar21 = ppppbVar12;
          func_0x000107c605b8();
          func_0x000107c6142c(ppppbVar12);
          if (((ulong)ppppbVar19 & 1) != 0) goto LAB_10253ae5c;
LAB_10253aee8:
          pppbStack_c8 = (byte ***)0x0;
          pppbStack_b0 = (byte ***)0x0;
          goto LAB_10253aef0;
        }
        func_0x000107c6142c(ppppbVar12);
        ppppbVar21 = ppppbVar12;
LAB_10253ae5c:
        ppppbVar19 = ppppbVar10;
        func_0x000107c5d108();
        func_0x000107c61180();
        if (ppppbVar19 == (byte ****)0x0) goto LAB_10253b4c0;
        ppppbVar9 = ppppbVar19;
        func_0x000107c5dc3c();
        func_0x000107c61170(ppppbVar19);
        if ((int)ppppbVar9 != 2) goto LAB_10253aee8;
        func_0x000107c6142c(ppppbVar11);
        ppppbVar11 = ppppbVar10;
        func_0x000107c5d108();
        func_0x000107c61180();
        if (ppppbVar11 == (byte ****)0x0) goto LAB_10253b4c4;
        ppppbVar9 = ppppbVar11;
        func_0x000107c5c1d4();
        func_0x000107c61180();
        func_0x000107c61170(ppppbVar11);
        if (ppppbVar9 != (byte ****)0x0) goto LAB_10253b1a0;
        func_0x000107c61170(ppppbVar10);
        func_0x000107c6142c(0);
        pbVar13 = pbVar13 + 1;
        if (ppppbVar23 == ppppbVar20) break;
      } while( true );
    }
    func_0x000107c6142c(pppbVar2);
    goto LAB_10253b3f8;
  }
  func_0x000107c6142c(pppbVar2);
  func_0x000107c61170(uVar7);
  goto LAB_10253ab24;
LAB_10253b1a0:
  pppbStack_b0 = (byte ***)0x0;
LAB_10253ad58:
  pppbStack_c8 = (byte ***)ppppbVar9;
  func_0x000107c5faec();
  ppppbVar11 = ppppbVar21;
  func_0x000107c61170(ppppbVar9);
  func_0x000107c61170(ppppbVar10);
  func_0x000107c6142c(pppbStack_b0);
  pppbStack_b0 = (byte ***)ppppbVar21;
LAB_10253ac28:
  ppppbVar19 = ppppbVar23;
  if (ppppbVar23 == ppppbVar20) goto LAB_10253b374;
  goto LAB_10253ac34;
LAB_10253b374:
  func_0x000107c6142c(pppbVar2);
  if ((byte ****)pppbStack_b0 == (byte ****)0x0) {
LAB_10253b3f8:
    func_0x000107c61170(uVar7);
  }
  else if ((uStack_b4 & 0xff) == 1) {
    func_0x000107c6142c(pppbStack_b0);
LAB_10253ab1c:
    func_0x000107c61170(uVar7);
  }
  else {
    ppppbVar11 = (byte ****)pppbStack_108;
    func_0x000107c61558(pppbStack_108);
    pppbStack_88 = pppbStack_108;
    func_0x000101687ce0(pppbStack_c0,pppbStack_c8,pppbStack_b0,ppppbVar11);
    func_0x000107c6142c(pppbStack_b0);
    func_0x000107c61170(uVar7);
    pppbStack_108 = pppbStack_88;
  }
LAB_10253ab24:
  if (uVar24 == uVar22) goto LAB_10253b480;
  goto LAB_10253ab2c;
}



/* Entry: 10253b4dc; end: 10253b547;  */

void FUN_10253b4dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 200) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253b548,uVar1,uVar2);
  return;
}



/* Entry: 10253b548; end: 10253b73f;  */

void FUN_10253b548(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x90,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0xd8) = lVar5;
  if (lVar5 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  }
  else {
    func_0x000100083b20(unaff_x22 + 0x50);
    lVar6 = *(long *)(unaff_x22 + 0x50);
    lVar2 = lVar6;
    func_0x000107c4e7e4();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    lVar6 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xe0) = lVar6;
    func_0x000107c61170(lVar2);
    if (lVar6 != 0) {
      lVar5 = *(long *)(unaff_x22 + 0xb8);
      puVar8 = *(undefined8 **)(lVar5 + 0x10);
      puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar8 != (undefined8 *)0x0) {
        func_0x000107c61434(lVar5);
        puVar3 = puVar8;
        func_0x00010109b448(puVar8,0);
        puVar4 = &uStack_58;
        FUN_10253c2e4(puVar4,puVar3 + 4,puVar8,lVar5);
        func_0x000101052a30(uStack_58,uStack_50,uStack_48,uStack_40,uStack_38);
        if (puVar4 != puVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10253b638);
          (*pcVar1)();
        }
      }
      puVar8 = puVar3;
      func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
      *(undefined8 **)(unaff_x22 + 0xe8) = puVar8;
      func_0x000107c61574(puVar3);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10253b740;
      lVar5 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar5,1);
      uVar7 = 0x112ea4518;
      func_0x0001000285a8(0x112ea4518,&UNK_10dab7668);
      *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
      *(long *)(unaff_x22 + 0x70) = lVar5;
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_10253b8ac;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11051e530;
      func_0x000107c43134(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c61574(lVar5);
  }
  func_0x000107c61574(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010253b66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10253b740; end: 10253b793;  */

void FUN_10253b740(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_10253b794;
  }
  else {
    pcVar1 = FUN_10253b83c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 200),*(undefined8 *)(lVar2 + 0xd0));
  return;
}



/* Entry: 10253b794; end: 10253b83b;  */

void FUN_10253b794(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar4 = *(long *)(unaff_x22 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
  uVar2 = uVar5;
  FUN_10253c44c(uVar5,uVar3);
  func_0x000107c6142c(uVar5);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000107c6157c(uVar3);
  func_0x0001007d6d78((undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(lVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010253b838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10253b83c; end: 10253b8ab;  */

void FUN_10253b83c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61654();
  func_0x000107c61574(uVar2);
  func_0x000107c614ac(uVar3);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010253b8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10253b8ac; end: 10253b96b;  */

void FUN_10253b8ac(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  FUN_10253c5ac(0,0x112ea3b90,&PTR_PTR_1126cd890);
  func_0x000107c5fc54(param_2,uVar2);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 10253b96c; end: 10253b9a7;  */

undefined8 FUN_10253b96c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1038b7fdc)(param_2,param_1);
  return param_2;
}



/* Entry: 10253b9a8; end: 10253b9e3;  */

void FUN_10253b9a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000102538240(unaff_x20 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10253b9e4; end: 10253b9f3;  */

undefined1  [16] FUN_10253b9e4(void)

{
  return ZEXT816(0x11051e4a8);
}



/* Entry: 10253b9f4; end: 10253ba13;  */

void FUN_10253b9f4(void)

{
  func_0x000107c61168(&PTR_PTR_112ea4480);
  return;
}



/* Entry: 10253ba14; end: 10253ba37;  */

void FUN_10253ba14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10253a640(param_1,param_2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10253ba38; end: 10253bf63;  */

void FUN_10253ba38(undefined8 *param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uStack_78;
  
  uVar18 = *param_3;
  uVar2 = uVar18;
  lVar14 = param_4;
  func_0x000107c4e7c0();
  func_0x000107c61180();
  lVar15 = lVar14;
  if (uVar2 == 0) {
    func_0x000107c5faec();
    lVar15 = lVar14;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar14);
  }
  uStack_78 = uVar18;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  lVar14 = lVar15;
  if (uStack_78 == 0) {
    func_0x000107c5faec();
    lVar14 = lVar15;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar15);
  }
  func_0x000107c4aad8(uVar18);
  uVar22 = param_2;
  func_0x000107c4b6f0(uVar18);
  uVar3 = uVar18;
  func_0x000107c3f704();
  func_0x000107c61180();
  if (uVar3 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar14);
  }
  func_0x000107c49d60();
  uVar20 = uVar18;
  func_0x000107c4e7d4();
  func_0x000107c61180();
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar20 != 0) {
    uVar4 = 0;
    FUN_10253c5ac(0,0x112ea3ef8,&PTR_PTR_1126cd848);
    uVar5 = uVar20;
    func_0x000107c5fc54(uVar20,uVar4);
    func_0x000107c61170(uVar20);
    if (uVar5 >> 0x3e == 0) {
      uVar20 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar20 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar20 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar20 != 0) {
      uVar16 = uVar20 & ((long)uVar20 >> 0x3f ^ 0xffffffffffffffffU);
      func_0x000100403514(0,uVar16,0);
      if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10253bf64);
        (*pcVar1)();
      }
      uVar21 = 0;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          uVar6 = *(ulong *)(uVar5 + uVar21 * 8 + 0x20);
          func_0x000107c61174();
          uVar17 = uVar16;
        }
        else {
          uVar6 = uVar21;
          uVar17 = uVar5;
          func_0x00010253e970();
        }
        func_0x000107c61174();
        uVar7 = uVar6;
        func_0x000107c4e70c();
        func_0x000107c61180();
        uVar8 = uVar7;
        func_0x000107c5faec();
        uVar16 = uVar17;
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar7);
        uVar7 = *(ulong *)(puVar19 + 0x10);
        uVar6 = uVar7 + 1;
        if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar7) {
          uVar16 = uVar6;
          func_0x000100403514(1 < *(ulong *)(puVar19 + 0x18),uVar6,1);
        }
        uVar21 = uVar21 + 1;
        *(ulong *)(puVar19 + 0x10) = uVar6;
        *(ulong *)(puVar19 + uVar7 * 0x10 + 0x20) = uVar8;
        *(ulong *)(puVar19 + uVar7 * 0x10 + 0x28) = uVar17;
      } while (uVar20 != uVar21);
    }
    func_0x000107c6142c(uVar5);
  }
  puVar9 = PTR_PTR_1126aaa70;
  func_0x000107c610f8(PTR_PTR_1126aaa70);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar10 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar11 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  puVar12 = puVar19;
  puVar13 = PTR___sSSN_11034da80;
  func_0x000107c5fc48();
  func_0x000107c6142c(puVar19);
  func_0x000107c47ee0(param_2,uVar22,puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar12);
  uVar2 = uVar18;
  func_0x000107c3d9a4();
  func_0x000107c61180();
  puVar19 = puVar13;
  if (uVar2 == 0) {
    func_0x000107c5faec();
    puVar19 = puVar13;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar13);
  }
  func_0x000107c5250c(puVar9);
  func_0x000107c61170(uVar2);
  uVar2 = uVar18;
  func_0x000107c3d9a4();
  func_0x000107c61180();
  puVar12 = puVar19;
  if (uVar2 == 0) {
    func_0x000107c5faec();
    puVar12 = puVar19;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar19);
  }
  func_0x000107c56028(puVar9);
  func_0x000107c61170(uVar2);
  uVar2 = uVar18;
  func_0x000107c4e7c0();
  func_0x000107c61180();
  puVar19 = puVar12;
  if (uVar2 == 0) {
    func_0x000107c5faec();
    puVar19 = puVar12;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar12);
  }
  puVar12 = PTR_PTR_1126aaa68;
  func_0x000107c610f8();
  func_0x000107c47038();
  func_0x000107c61170(uVar2);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c5a0f8(puVar12);
  func_0x000107c61170(puVar13);
  func_0x000107c4e7c0();
  func_0x000107c61180();
  func_0x000107c5faec();
  func_0x000107c61170(uVar18);
  if (*(long *)(param_4 + 0x10) == 0) {
    func_0x000107c6142c(puVar19);
    puVar19 = (undefined *)0x0;
  }
  else {
    func_0x000107c61434(param_4);
    puVar13 = puVar19;
    func_0x000100029284();
    if (((ulong)puVar13 & 1) == 0) {
      func_0x000107c6142c(puVar19);
      func_0x000107c6142c(param_4);
      puVar19 = (undefined *)0x0;
    }
    else {
      func_0x000107c6142c(puVar19);
      func_0x000107c6142c(param_4);
      puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ed0();
    }
  }
  func_0x000107c59dc0(puVar12);
  func_0x000107c61170(puVar19);
  func_0x000107c573f0(puVar12);
  func_0x000107c61170(puVar9);
  *param_1 = puVar12;
  return;
}



/* Entry: 10253bf64; end: 10253bfe3;  */

undefined * FUN_10253bf64(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010253f1fc();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10253bfe4; end: 10253bfff;  */

void FUN_10253bfe4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10253c000();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10253c000; end: 10253c133;  */

undefined * FUN_10253c000(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10253c134);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x00010253f220();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_10253c5ac(0,0x112ea44f8,&PTR_PTR_1126aaa68);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10253c134; end: 10253c1a3;  */

void FUN_10253c134(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112ea4500 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ea4508;
  func_0x00010002969c(0x112ea4508,&UNK_10dab7650);
  uVar2 = uVar1;
  FUN_10253c1a4();
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam0000000112ea4500 = puVar3;
  return;
}



/* Entry: 10253c1a4; end: 10253c1f7;  */

void FUN_10253c1a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ea4510 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10253c5ac(0xff,0x112ea44f8,&PTR_PTR_1126aaa68);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112ea4510 = puVar2;
  return;
}



/* Entry: 10253c1f8; end: 10253c23b;  */

void FUN_10253c1f8(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10253c23c; end: 10253c2a7;  */

void FUN_10253c23c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10253c2a8;
  plVar3[0x16] = lVar2;
  plVar3[0x17] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x18] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x19] = lVar1;
  plVar3[0x1a] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253b548,lVar1,lVar2);
  return;
}



/* Entry: 10253c2a8; end: 10253c2e3;  */

void FUN_10253c2a8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010253c2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10253c2e4; end: 10253c433;  */

long FUN_10253c2e4(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10253c434);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar5 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10253c430);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_10253c3f4;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar2 = puVar1[1];
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      if (lVar10 == param_3) break;
      func_0x000107c61434();
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    func_0x000107c61434();
  }
LAB_10253c3f4:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Entry: 10253c434; end: 10253c44b;  */

long FUN_10253c434(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10253c44c; end: 10253c5ab;  */

undefined * FUN_10253c44c(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    FUN_10253bfe4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10253c5ac);
      (*pcVar3)();
    }
    uVar6 = 0;
    do {
      puVar2 = puStack_68;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10253c590);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar6;
        func_0x00010253e95c(uVar6,param_1);
      }
      uStack_78 = uVar4;
      FUN_10253ba38(&uStack_70,&uStack_78,param_2);
      func_0x000107c61170(uVar4);
      uVar1 = uStack_70;
      uVar4 = *(ulong *)(puVar2 + 0x10);
      puStack_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar4) {
        FUN_10253bfe4(1 < *(ulong *)(puVar2 + 0x18),uVar4 + 1,1);
      }
      uVar6 = uVar6 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puStack_68 + uVar4 * 8 + 0x20) = uVar1;
    } while (uVar5 != uVar6);
  }
  return puStack_68;
}



/* Entry: 10253c5ac; end: 10253c5eb;  */

void FUN_10253c5ac(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10253c5ec; end: 10253c657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253c5ec(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10253c810();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea4528) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10253c658; end: 10253c65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253c658(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10253c810();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea4528) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10253c660; end: 10253c6ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253c660(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea4528) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10253c6ac; end: 10253c733; -[_TtC35MapLocationSearchTrayImplementation28MapLocationSearchTrayBuilder build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253c6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 10253c734; end: 10253c793; -[_TtC35MapLocationSearchTrayImplementation28MapLocationSearchTrayBuilder init] */

void FUN_10253c734(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapLocationSearchTrayImplementation.MapLocationSearchTrayBuilder",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10253c760);
  (*pcVar1)();
}



/* Entry: 10253c794; end: 10253c7a3; -[_TtC35MapLocationSearchTrayImplementation28MapLocationSearchTrayBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253c794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea4528));
  return;
}



/* Entry: 10253c7a4; end: 10253c7f7;  */

void FUN_10253c7a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x00010037f700(0);
  func_0x000107c610f8();
  func_0x0001038b7e2c(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10253c7f8; end: 10253c80f;  */

void FUN_10253c7f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = 0;
  func_0x00010037f700(0);
  func_0x000107c610f8();
  func_0x0001038b7e2c(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10253c810; end: 10253c82f;  */

void FUN_10253c810(void)

{
  func_0x000107c61168(&PTR_PTR_11284cdf0);
  return;
}



/* Entry: 10253c830; end: 10253c83f;  */

undefined1  [16] FUN_10253c830(void)

{
  return ZEXT816(0x11051e588);
}



/* Entry: 10253c840; end: 10253c87b;  */

void FUN_10253c840(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010253c878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10253c87c; end: 10253ca83;  */

void FUN_10253c87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea4560,&UNK_10dab7700);
  puVar1 = &UNK_11051e5a8;
  func_0x000107c613fc(&UNK_11051e5a8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_10253ca84,puVar1);
  return;
}



/* Entry: 10253ca84; end: 10253ca93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253ca84(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar3 = &lStack_90;
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_10253ea94();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ea4568) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ea4570) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ea4578) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ea4580) = uStack_58;
  *(undefined8 *)(lVar2 + _DAT_112ea4588) = uStack_60;
  *(undefined8 *)(lVar2 + _DAT_112ea4590) = uStack_68;
  *(undefined8 *)(lVar2 + _DAT_112ea4598) = uStack_70;
  *(undefined8 *)(lVar2 + _DAT_112ea45a0) = uStack_78;
  *(undefined8 *)(lVar2 + _DAT_112ea45a8) = uStack_80;
  lStack_90 = lVar2;
  lStack_88 = lVar1;
  func_0x000107c61154(&lStack_90,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 10253ca94; end: 10253cb6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253ca94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea4568) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4570) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4578) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4580) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4588) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4590) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4598) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea45a0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea45a8) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10253cb6c; end: 10253cb73; -[_TtC35MapLocationSearchTrayImplementation30MapLocationSearchTrayPresenter shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10253cb6c(void)

{
  return 0;
}



/* Entry: 10253cb74; end: 10253cbe3;  */

void FUN_10253cb74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10253cbe4,uVar1,uVar2);
  return;
}



/* Entry: 10253cbe4; end: 10253cc2f;  */

void FUN_10253cbe4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  FUN_10253cc30(uVar2,uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010253cc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10253cc30; end: 10253ce33;  */

/* WARNING: Possible PIC construction at 0x00010253ce14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253cd84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010253cfe8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010253cd88) */
/* WARNING: Removing unreachable block (ram,0x00010253ce18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253cc30(long param_1,undefined *param_2,ulong param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong unaff_x19;
  ulong *puVar8;
  long unaff_x20;
  long unaff_x21;
  undefined1 *unaff_x22;
  undefined8 uVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  puVar1 = &stack0xfffffffffffffff0;
  FUN_10253d034();
  if (param_1 != 0) {
    lVar2 = 0;
    FUN_10253f1d4();
    lVar3 = lVar2;
    func_0x000107c610f8();
    *(long *)(lVar3 + _DAT_112ea45e0) = param_1;
    param_2 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_60 = lVar3;
    lStack_58 = lVar2;
    func_0x000107c61174();
    func_0x000107c61154(&lStack_60,param_2,0,0);
    func_0x000107c53dec();
    FUN_10253ee84();
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea4570);
    *(long **)(unaff_x20 + _DAT_112ea4570) = plVar4;
    func_0x000107c61174();
    func_0x000107c61170(uVar9);
    puVar5 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea4578);
    *(undefined **)(unaff_x20 + _DAT_112ea4578) = puVar5;
    func_0x000107c61174();
    func_0x000107c61170(uVar9);
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c52684(puVar5);
      func_0x000107c5a074(puVar5);
      func_0x000107c52aa4(puVar5);
      puVar6 = *(undefined **)(*(long *)(unaff_x20 + _DAT_112ea45a8) + _DAT_112fa9410);
      puVar7 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        uVar9 = *(undefined8 *)PTR__UIWindowLevelAlert_110345e80;
        puVar7 = PTR_PTR_1126b1c10;
        func_0x000107c610f8(PTR_PTR_1126b1c10);
        func_0x000107c495dc(uVar9);
        puVar6 = (undefined *)0x0;
      }
      uVar9 = 0x3fe8000000000000;
      if ((param_3 & 1) == 0) {
        uVar9 = 0x3fee666666666666;
      }
      func_0x000107c615f0(puVar6);
      func_0x000107c4ef3c(uVar9,puVar5);
      func_0x000107c61170(param_1);
      func_0x000107c61170(plVar4);
      func_0x000107c61170(puVar5);
      goto code_r0x000107c615e8;
    }
    unaff_x30 = 0x10253cd88;
    register0x00000008 = (BADSPACEBASE *)&lStack_60;
    unaff_x19 = param_3;
    unaff_x21 = param_1;
    unaff_x22 = (undefined1 *)plVar4;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea4570);
  *(undefined8 *)(unaff_x20 + _DAT_112ea4570) = 0;
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea4578);
  *(undefined8 *)(unaff_x20 + _DAT_112ea4578) = 0;
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea4568);
  *(undefined8 *)(unaff_x20 + _DAT_112ea4568) = 0;
  func_0x000107c61170(uVar9);
  puVar8 = *(ulong **)(unaff_x20 + _DAT_112ea45a8);
  puVar7 = *(undefined **)((long)puVar8 + _DAT_112fa9410);
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c41864();
  }
  puVar5 = PTR__swift_isaMask_11034f488;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar8) + 0xb8))();
  if (puVar7 == (undefined *)0x0) {
    (**(code **)((*(ulong *)puVar5 & *puVar8) + 0xa0))();
    if (puVar7 == (undefined *)0x0) {
      return;
    }
    func_0x000107c4c368();
  }
  else {
    func_0x000107c614f0();
    (**(code **)(param_2 + 8))();
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar7);
  return;
}



/* Entry: 10253ce34; end: 10253d033; -[_TtC35MapLocationSearchTrayImplementation30MapLocationSearchTrayPresenter presentWith:] */

void FUN_10253ce34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  puVar1 = &UNK_11051e690;
  func_0x000107c613fc(&UNK_11051e690,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar2 = &UNK_11051e6b8;
  func_0x000107c613fc(&UNK_11051e6b8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dab77a0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x41;
  func_0x0001001ca524(0x41,0,0x3c,4,0,0,&UNK_10dab77a8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10253d034; end: 10253d55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10253d034(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea4598);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar5 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar5 == 0) {
    return (undefined *)0x0;
  }
  lVar2 = lVar5;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar5);
  if (lVar2 == 0) {
    return (undefined *)0x0;
  }
  puVar3 = PTR_PTR_1126aaa78;
  func_0x000107c610f8(PTR_PTR_1126aaa78);
  func_0x000107c453e4();
  func_0x000107c52168();
  lVar5 = _DAT_112fa9418;
  lVar11 = *(long *)(unaff_x20 + _DAT_112ea45a8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55118(puVar3);
  func_0x000107c61170(puVar4);
  if ((*(byte *)(lVar11 + lVar5) & 1) == 0) {
    uVar12 = *(undefined8 *)PTR__UIWindowLevelAlert_110345e80;
    puVar4 = PTR_PTR_1126b1c10;
    func_0x000107c610f8(PTR_PTR_1126b1c10);
    func_0x000107c495dc(uVar12);
    lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112ea4590) + _DAT_112fa96b0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c4c1d4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      puStack_a8 = PTR_DAT_1126a0fc0;
      lVar5 = lVar6;
      func_0x000107c61494(lVar6,1,&puStack_a8);
      if (lVar5 == 0) {
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(lVar6);
        goto LAB_10253d1fc;
      }
      func_0x000107c615f0(lVar6);
      func_0x000107c569bc(puVar3);
      func_0x000107c615ec(lVar6,2);
    }
    func_0x000107c61170(puVar4);
  }
LAB_10253d1fc:
  puVar4 = &UNK_11051e6e0;
  puVar7 = puVar4;
  func_0x000107c613fc(&UNK_11051e6e0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10253eca8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10253d6cc;
  puStack_88 = &UNK_11051e6f8;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_78);
  func_0x000107c54e98(puVar3);
  func_0x000107c60bd0(ppuVar8);
  puVar7 = puVar4;
  func_0x000107c613fc(&UNK_11051e6e0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  pcStack_80 = (code *)0x10253eccc;
  puStack_a0 = puVar9;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10253ee24;
  puStack_88 = &UNK_11051e720;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_78);
  func_0x000107c54e74(puVar3);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c613fc(&UNK_11051e6e0,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcStack_80 = (code *)0x10253ecd4;
  puStack_a0 = puVar9;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10253ee28;
  puStack_88 = &UNK_11051e748;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c61574(puStack_78);
  func_0x000107c54e78(puVar3);
  func_0x000107c60bd0(ppuVar8);
  if (*(long *)(lVar11 + _DAT_112fa9420) != 0) {
    func_0x000107c59abc(puVar3);
  }
  lVar5 = _DAT_112fa9408;
  if (*(long *)(lVar11 + _DAT_112fa9408) == 2) {
    FUN_10253d990(puVar3);
  }
  puVar4 = PTR_PTR_1126aaa80;
  func_0x000107c610f8(PTR_PTR_1126aaa80);
  func_0x000107c453e4();
  uVar12 = 0;
  if (param_2 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    uVar12 = param_1;
  }
  func_0x000107c58d30(puVar4);
  func_0x000107c61170(uVar12);
  puVar9 = *(undefined **)(lVar11 + lVar5);
  if ((long)puVar9 < 2) {
    if (puVar9 == (undefined *)0x0) {
      uVar10 = 0xee00484352414553;
      uVar12 = 0x5f53534552444441;
    }
    else {
      if (puVar9 != (undefined *)0x1) {
LAB_10253d53c:
        puStack_a0 = puVar9;
        func_0x000107c60614(&UNK_1106a3eb0,&puStack_a0,&UNK_1106a3eb0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10253d560);
        (*pcVar1)();
      }
      uVar10 = 0xed00004843524145;
      uVar12 = 0x535f534543414c50;
    }
  }
  else if (puVar9 == (undefined *)0x2) {
    uVar12 = 0xd000000000000019;
    uVar10 = 0x800000010f0a8b60;
  }
  else {
    if (puVar9 != (undefined *)0x3) goto LAB_10253d53c;
    uVar10 = 0x800000010f0a8b40;
    uVar12 = 0xd00000000000001b;
  }
  func_0x000107c5fadc(uVar12,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c58d48(puVar4);
  func_0x000107c61170(uVar12);
  puVar9 = PTR_PTR_1126aaa88;
  func_0x000107c610f8(PTR_PTR_1126aaa88);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c49520(puVar9);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(lVar2);
  return puVar9;
}



/* Entry: 10253d560; end: 10253d5d3; -[_TtC35MapLocationSearchTrayImplementation30MapLocationSearchTrayPresenter presentWith:shortenTrayHeight:] */

void FUN_10253d560(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_1);
  FUN_10253cc30(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10253d5d4; end: 10253d83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10253d5d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar2 = *(long *)(param_3 + _DAT_112ea45a0);
    func_0x000107c5d9d8();
    func_0x000107c61180();
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4408c(param_1,param_2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      if (lVar2 != 0) {
        func_0x000107c5faec(lVar2);
        func_0x000107c61170(lVar2);
      }
    }
  }
  return;
}



/* Entry: 10253d840; end: 10253d957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10253d840(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_112ea45a8) + _DAT_112fa9400);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar4 = PTR_PTR_1126b1eb8;
    func_0x000107c610f4(PTR_PTR_1126b1eb8);
    puVar2 = PTR_PTR_1126b1d80;
    func_0x000107c610f4(PTR_PTR_1126b1d80);
    func_0x000107c470e4(uVar5,uVar6);
    puVar3 = PTR_PTR_1126b1d80;
    func_0x000107c610f4(PTR_PTR_1126b1d80);
    func_0x000107c470e4(uVar7,uVar8);
    func_0x000107c48b88(puVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61110(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  return puVar4;
}



/* Entry: 10253d958; end: 10253d98f;  */

void FUN_10253d958(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}


