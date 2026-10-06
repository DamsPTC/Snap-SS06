/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10148aed0; end: 10148aedb;  */

void FUN_10148aed0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d99d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10148aedc; end: 10148af13;  */

undefined1  [16] FUN_10148aedc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = unaff_x20;
  func_0x000107c4e488();
  *(char *)(param_1 + 1) = (char)unaff_x20;
  auVar1._8_8_ = param_1 + 1;
  auVar1._0_8_ = FUN_10148af14;
  return auVar1;
}



/* Entry: 10148af14; end: 10148af23;  */

void FUN_10148af14(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d99d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*param_1,PTR_s_setPausesLocationUpdatesAutomati_112654098,*(undefined1 *)(param_1 + 1))
  ;
  return;
}



/* Entry: 10148af24; end: 10148af3b;  */

void FUN_10148af24(void)

{
  func_0x000107c3dc38();
  return;
}



/* Entry: 10148af3c; end: 10148af47;  */

void FUN_10148af3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1674b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10148af48; end: 10148af7f;  */

undefined1  [16] FUN_10148af48(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = unaff_x20;
  func_0x000107c3dc38();
  *(char *)(param_1 + 1) = (char)unaff_x20;
  auVar1._8_8_ = param_1 + 1;
  auVar1._0_8_ = FUN_10148af80;
  return auVar1;
}



/* Entry: 10148af80; end: 10148af9f;  */

void FUN_10148af80(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1674b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*param_1,PTR_s_setAllowsBackgroundLocationUpdat_112637748,*(undefined1 *)(param_1 + 1))
  ;
  return;
}



/* Entry: 10148afa0; end: 10148afbb;  */

void FUN_10148afa0(void)

{
  func_0x000107c44d88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10148afbc; end: 10148afeb;  */

void FUN_10148afbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c251590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10148afec; end: 10148b1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10148afec(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined *puVar8;
  long unaff_x20;
  code *pcVar9;
  
  puVar6 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da2548);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = _DAT_112da2550;
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_112da2558);
  *(undefined1 *)(puVar2 + 1) = 2;
  *puVar2 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112da2560) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112da2568) = puVar5;
  lVar3 = _DAT_112da2570;
  puVar5 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  func_0x00010148d2bc(param_1,unaff_x20 + _DAT_112da2538);
  *(undefined8 *)(unaff_x20 + _DAT_112da2540) = param_2;
  puVar5 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar5);
  plVar7 = *(long **)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,plVar7);
  pcVar9 = *(code **)(lVar3 + 0x20);
  func_0x000107c61174();
  (*pcVar9)(plVar7,lVar3);
  puVar5 = &UNK_1103c6260;
  func_0x000107c613fc(&UNK_1103c6260,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,puVar6);
  pcVar9 = FUN_10148d300;
  puVar8 = puVar5;
  (**(code **)(*plVar7 + 0x60))();
  func_0x000107c61574(plVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(param_2);
  puVar1 = (undefined8 *)(puVar6 + _DAT_112da2548);
  uVar4 = *puVar1;
  *puVar1 = pcVar9;
  puVar1[1] = puVar8;
  func_0x000107c61170(puVar6);
  func_0x000107c615e8(uVar4);
  func_0x0001000834e4(param_1);
  return puVar6;
}



/* Entry: 10148b1d8; end: 10148b24b;  */

void FUN_10148b1d8(uint5 *param_1,long param_2)

{
  uint5 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  if (((ulong)uVar1 & 0xff00000000) != 0x200000000) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_10148b24c((ulong)uVar1 & 0x1ffffffff);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 10148b24c; end: 10148b553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148b24c(ulong param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long unaff_x20;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  int iStack_98;
  undefined1 uStack_94;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x00010006c804();
  piVar1 = (int *)(unaff_x20 + _DAT_112da2558);
  bVar4 = *(byte *)(piVar1 + 1);
  iVar3 = *piVar1;
  iVar9 = (int)param_1;
  *piVar1 = iVar9;
  *(byte *)(piVar1 + 1) = (byte)(param_1 >> 0x20) & 1;
  lVar13 = _DAT_112da2560;
  func_0x000107c61428(unaff_x20 + _DAT_112da2560,auStack_78,1,0);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar12 = *(long *)(unaff_x20 + lVar13);
  *(undefined **)(unaff_x20 + lVar13) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = _DAT_112da2568;
  func_0x000107c61428(unaff_x20 + _DAT_112da2568,auStack_90,1,0);
  lVar10 = *(long *)(unaff_x20 + lVar13);
  *(undefined **)(unaff_x20 + lVar13) = puVar7;
  func_0x000100070bfc();
  lVar13 = *(long *)(lVar12 + 0x10);
  uVar5 = (undefined1)((param_1 & 0x100000000) >> 0x20);
  if (lVar13 != 0) {
    puVar8 = (undefined8 *)(lVar12 + 0x28);
    do {
      pcVar2 = (code *)puVar8[-1];
      uVar11 = *puVar8;
      iStack_98 = iVar9;
      uStack_94 = uVar5;
      func_0x000107c6157c(uVar11);
      (*pcVar2)(&iStack_98);
      func_0x000107c61574(uVar11);
      puVar8 = puVar8 + 2;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  func_0x000107c6142c(lVar12);
  lVar13 = *(long *)(lVar10 + 0x10);
  if (lVar13 != 0) {
    puVar8 = (undefined8 *)(lVar10 + 0x28);
    do {
      pcVar2 = (code *)puVar8[-1];
      uVar11 = *puVar8;
      iStack_98 = iVar9;
      uStack_94 = uVar5;
      func_0x000107c6157c(uVar11);
      (*pcVar2)(&iStack_98);
      func_0x000107c61574(uVar11);
      puVar8 = puVar8 + 2;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  func_0x000107c6142c(lVar10);
  if (bVar4 == 2) {
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112da2570);
    puVar7 = PTR_PTR_1126bc348;
    func_0x000107c61168(PTR_PTR_1126bc348);
    puVar6 = puVar7;
    func_0x000107c41de8();
    func_0x000107c61180();
    func_0x000107c4d664(uVar11);
    func_0x000107c61170(puVar6);
    func_0x00010006c804();
    func_0x000100070bfc();
  }
  else {
    if (iVar3 != iVar9) {
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112da2570);
      puVar7 = PTR_PTR_1126bc348;
      func_0x000107c61168(PTR_PTR_1126bc348);
      func_0x000107c41de8();
      func_0x000107c61180();
      func_0x000107c4d664(uVar11);
      func_0x000107c61170(puVar7);
    }
    if (((param_1 & 0x100000000) != 0) == (bool)(bVar4 & 1)) {
      return;
    }
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112da2570);
    func_0x00010006c804();
    puVar7 = PTR_PTR_1126bc348;
    func_0x000107c61168(PTR_PTR_1126bc348);
    func_0x000100070bfc();
  }
  func_0x000107c41e18(puVar7);
  func_0x000107c61180();
  func_0x000107c4d664(uVar11);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 10148b554; end: 10148b5cf; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager lastAuthorizationStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10148b554(long param_1)

{
  undefined4 uVar1;
  uint5 uVar2;
  
  func_0x000107c61174();
  func_0x00010006c804();
  uVar1 = (undefined4)*(uint5 *)(param_1 + _DAT_112da2558);
  uVar2 = *(uint5 *)(param_1 + _DAT_112da2558);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  if (((ulong)uVar2 & 0xff00000000) == 0x200000000) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10148b5d0; end: 10148b663; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager lastAuthorized] */

uint FUN_10148b5d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x00010148b604();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10148b664; end: 10148b6d7; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager hasAuthorizationStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10148b664(long param_1)

{
  char cVar1;
  
  func_0x000107c61174();
  func_0x00010006c804();
  cVar1 = *(char *)(param_1 + _DAT_112da2558 + 4);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  return cVar1 != '\x02';
}



/* Entry: 10148b6d8; end: 10148b753; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager locationAccuracy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10148b6d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  
  func_0x000107c61174();
  func_0x00010006c804();
  bVar3 = *(byte *)(param_1 + _DAT_112da2558 + 4);
  uVar1 = 1;
  if ((bVar3 & 1) != 0) {
    uVar1 = 2;
  }
  uVar2 = 0;
  if (bVar3 != 2) {
    uVar2 = uVar1;
  }
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 10148b754; end: 10148b763; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager permissionsUpdateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148b754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112da2570));
  return;
}



/* Entry: 10148b764; end: 10148baa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148b764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint5 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar12 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar14 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar3 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &UNK_1103c6148;
  func_0x000107c613fc(&UNK_1103c6148,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000107c61174();
  uStack_b0 = param_3;
  func_0x00010006c804();
  uVar1 = *(uint5 *)(unaff_x20 + _DAT_112da2558);
  if (((ulong)uVar1 & 0xff00000000) == 0x200000000) {
    puVar6 = &UNK_1103c6170;
    func_0x000107c613fc(&UNK_1103c6170,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x10148d218;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    lVar2 = _DAT_112da2560;
    func_0x000107c61428(unaff_x20 + _DAT_112da2560,&puStack_90,0x21,0);
    uVar13 = *(ulong *)(unaff_x20 + lVar2);
    func_0x000107c6157c(puVar4);
    uVar5 = uVar13;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + lVar2) = uVar13;
    uVar11 = uVar13;
    if ((uVar5 & 1) == 0) {
      uVar11 = 0;
      FUN_10148ccb8(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
      *(ulong *)(unaff_x20 + lVar2) = uVar11;
    }
    uVar5 = *(ulong *)(uVar11 + 0x10);
    uVar13 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
      uVar13 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_10148ccb8(uVar13,uVar5 + 1,1,uVar11);
    }
    *(ulong *)(uVar13 + 0x10) = uVar5 + 1;
    lVar3 = uVar13 + uVar5 * 0x10;
    *(undefined8 *)(lVar3 + 0x20) = 0x10148d3a8;
    *(undefined **)(lVar3 + 0x28) = puVar6;
    *(ulong *)(unaff_x20 + lVar2) = uVar13;
    func_0x000107c614a8(&puStack_90);
    func_0x000100070bfc();
  }
  else {
    func_0x000100070bfc();
    puVar6 = &UNK_1103c6198;
    func_0x000107c613fc(&UNK_1103c6198,0x25,7);
    *(undefined8 *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    *(int *)(puVar6 + 0x20) = (int)uVar1;
    puVar6[0x24] = (byte)(uVar1 >> 0x20) & 1;
    uStack_70 = 0x10148d288;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_1103c61b0;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c6157c(param_2);
    func_0x000107c5f808(lVar3);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar8 = 0x112d4af88;
    FUN_10148d1ac(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar9 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar10 = uVar9;
    func_0x0001001c7f30();
    func_0x000107c60264(lVar12,&puStack_98,uVar9,uVar10,lVar2,uVar8);
    func_0x000107c5ffe8(0,lVar3,lVar12,ppuVar7);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puVar4);
    (**(code **)(lStack_a0 + 8))(lVar12,lVar2);
    (**(code **)(lVar14 + 8))(lVar3,lStack_a8);
    puVar4 = puStack_68;
  }
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 10148baa8; end: 10148bac3; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager fetchLocationAuthorized:] */

/* WARNING: Possible PIC construction at 0x00010148bec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010148bec4) */

void FUN_10148baa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103c6238;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1103c6238,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x0001000295c4(0);
  func_0x000107c61174(param_1);
  func_0x000107c5ffdc();
  FUN_10148b764(0x10148d39c,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10148bac4; end: 10148badf; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager fetchLocationAuthorized:onQueue:] */

void FUN_10148bac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103c6120;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1103c6120,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10148b764(0x10148d398,puVar1,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10148bae0; end: 10148be23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148bae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint5 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar12 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar14 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar3 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &UNK_1103c6008;
  func_0x000107c613fc(&UNK_1103c6008,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000107c61174();
  uStack_b0 = param_3;
  func_0x00010006c804();
  uVar1 = *(uint5 *)(unaff_x20 + _DAT_112da2558);
  if (((ulong)uVar1 & 0xff00000000) == 0x200000000) {
    puVar6 = &UNK_1103c6030;
    func_0x000107c613fc(&UNK_1103c6030,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_10148d130;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    lVar2 = _DAT_112da2560;
    func_0x000107c61428(unaff_x20 + _DAT_112da2560,&puStack_90,0x21,0);
    uVar13 = *(ulong *)(unaff_x20 + lVar2);
    func_0x000107c6157c(puVar4);
    uVar5 = uVar13;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + lVar2) = uVar13;
    uVar11 = uVar13;
    if ((uVar5 & 1) == 0) {
      uVar11 = 0;
      FUN_10148ccb8(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
      *(ulong *)(unaff_x20 + lVar2) = uVar11;
    }
    uVar5 = *(ulong *)(uVar11 + 0x10);
    uVar13 = uVar11;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
      uVar13 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_10148ccb8(uVar13,uVar5 + 1,1,uVar11);
    }
    *(ulong *)(uVar13 + 0x10) = uVar5 + 1;
    lVar3 = uVar13 + uVar5 * 0x10;
    *(undefined8 *)(lVar3 + 0x20) = 0x10148d3a4;
    *(undefined **)(lVar3 + 0x28) = puVar6;
    *(ulong *)(unaff_x20 + lVar2) = uVar13;
    func_0x000107c614a8(&puStack_90);
    func_0x000100070bfc();
  }
  else {
    func_0x000100070bfc();
    puVar6 = &UNK_1103c6058;
    func_0x000107c613fc(&UNK_1103c6058,0x25,7);
    *(undefined8 *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    *(int *)(puVar6 + 0x20) = (int)uVar1;
    puVar6[0x24] = (byte)(uVar1 >> 0x20) & 1;
    pcStack_70 = FUN_10148d168;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_1103c6070;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c6157c(param_2);
    func_0x000107c5f808(lVar3);
    puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar8 = 0x112d4af88;
    FUN_10148d1ac(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar9 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar10 = uVar9;
    func_0x0001001c7f30();
    func_0x000107c60264(lVar12,&puStack_98,uVar9,uVar10,lVar2,uVar8);
    func_0x000107c5ffe8(0,lVar3,lVar12,ppuVar7);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puVar4);
    (**(code **)(lStack_a0 + 8))(lVar12,lVar2);
    (**(code **)(lVar14 + 8))(lVar3,lStack_a8);
    puVar4 = puStack_68;
  }
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 10148be24; end: 10148be3f; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager fetchLocationAuthorizationStatus:] */

/* WARNING: Possible PIC construction at 0x00010148bec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010148bec4) */

void FUN_10148be24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103c60f8;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1103c60f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x0001000295c4(0);
  func_0x000107c61174(param_1);
  func_0x000107c5ffdc();
  FUN_10148bae0(0x10148d394,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10148be40; end: 10148bee3;  */

/* WARNING: Possible PIC construction at 0x00010148bec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010148bec4) */

void FUN_10148be40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  func_0x000107c60bc4();
  func_0x000107c613fc(param_4,0x18,7);
  *(undefined8 *)(param_4 + 0x10) = param_3;
  func_0x0001000295c4(0);
  func_0x000107c61174(param_1);
  func_0x000107c5ffdc();
  (*param_6)(param_5,param_4,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10148bee4; end: 10148c0cf;  */

void FUN_10148bee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  uStack_b0 = param_7;
  uStack_a0 = param_2;
  func_0x000107c5f7fc();
  lStack_a8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar7 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc(param_5,0x25,7);
  *(undefined8 *)(param_5 + 0x10) = param_3;
  *(undefined8 *)(param_5 + 0x18) = param_4;
  *(int *)(param_5 + 0x20) = (int)param_1;
  *(byte *)(param_5 + 0x24) = (byte)((ulong)param_1 >> 0x20) & 1;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  uStack_78 = uStack_b0;
  ppuVar3 = &puStack_90;
  uStack_70 = param_6;
  lStack_68 = param_5;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c6157c(param_4);
  func_0x000107c5f808(lVar8);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4af88;
  FUN_10148d1ac(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = uVar5;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar7,&puStack_98,uVar5,uVar6,lVar1,uVar4);
  func_0x000107c5ffe8(0,lVar8,lVar7,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  (**(code **)(lStack_a8 + 8))(lVar7,lVar1);
  (**(code **)(lVar9 + 8))(lVar8,lVar2);
  func_0x000107c61574(lStack_68);
  return;
}



/* Entry: 10148c0d0; end: 10148c0eb; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager fetchLocationAuthorizationStatus:onQueue:] */

void FUN_10148c0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103c5fe0;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1103c5fe0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10148bae0(FUN_10148d120,puVar1,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10148c0ec; end: 10148c18b;  */

void FUN_10148c0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  func_0x000107c60bc4();
  func_0x000107c613fc(param_5,0x18,7);
  *(undefined8 *)(param_5 + 0x10) = param_3;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*param_7)(param_6,param_5,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 10148c18c; end: 10148c3eb;  */

/* WARNING: Possible PIC construction at 0x00010148c2b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010148c37c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010148c2bc) */
/* WARNING: Removing unreachable block (ram,0x00010148c380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148c18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint5 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  undefined1 auStack_68 [24];
  
  puVar4 = &UNK_1103c5e28;
  func_0x000107c613fc(&UNK_1103c5e28,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(long *)(puVar4 + 0x28) = unaff_x20;
  func_0x000107c61174();
  func_0x000107c6157c(param_3);
  func_0x00010006c804();
  uVar2 = *(uint5 *)(unaff_x20 + _DAT_112da2558);
  if (((ulong)uVar2 & 0xff00000000) == 0x200000000) {
    puVar6 = &UNK_1103c5e50;
    func_0x000107c613fc(&UNK_1103c5e50,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x10148cc64;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    lVar3 = _DAT_112da2560;
    func_0x000107c61428(unaff_x20 + _DAT_112da2560,auStack_68,0x21,0);
    uVar9 = *(ulong *)(unaff_x20 + lVar3);
    func_0x000107c6157c(puVar4);
    uVar5 = uVar9;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + lVar3) = uVar9;
    uVar8 = uVar9;
    if ((uVar5 & 1) == 0) {
      uVar8 = 0;
      FUN_10148ccb8(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      *(ulong *)(unaff_x20 + lVar3) = uVar8;
    }
    uVar5 = *(ulong *)(uVar8 + 0x10);
    uVar9 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar5) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_10148ccb8(uVar9,uVar5 + 1,1,uVar8);
    }
    *(ulong *)(uVar9 + 0x10) = uVar5 + 1;
    lVar1 = uVar9 + uVar5 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = 0x10148cc74;
    *(undefined **)(lVar1 + 0x28) = puVar6;
    *(ulong *)(unaff_x20 + lVar3) = uVar9;
    func_0x000107c614a8(auStack_68);
    func_0x000100070bfc();
  }
  else {
    func_0x000100070bfc();
    puVar6 = &UNK_1103c5e78;
    func_0x000107c613fc(&UNK_1103c5e78,0x38,7);
    *(int *)(puVar6 + 0x10) = (int)uVar2;
    puVar6[0x14] = (byte)(uVar2 >> 0x20) & 1;
    *(undefined8 *)(puVar6 + 0x18) = param_2;
    *(undefined8 *)(puVar6 + 0x20) = param_3;
    *(undefined8 *)(puVar6 + 0x28) = param_1;
    *(long *)(puVar6 + 0x30) = unaff_x20;
    puVar7 = &UNK_1103c5ea0;
    func_0x000107c613fc(&UNK_1103c5ea0,0x20,7);
    *(undefined **)(puVar7 + 0x10) = &UNK_10d946b88;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    func_0x000107c61174(unaff_x20);
    func_0x000107c6157c(param_3);
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d946b98,puVar7,PTR___sytN_11034f1b0 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 10148c3ec; end: 10148c463; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager requestLocationPermissionWithCompletionHandler:] */

void FUN_10148c3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103c5fb8;
  func_0x000107c613fc(&UNK_1103c5fb8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_10148c18c(2,0x10148d390,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10148c464; end: 10148c54f;  */

/* WARNING: Possible PIC construction at 0x00010148c530: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010148c534) */

void FUN_10148c464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_1103c5f68;
  func_0x000107c613fc(&UNK_1103c5f68,0x38,7);
  *(int *)(puVar1 + 0x10) = (int)param_1;
  puVar1[0x14] = (byte)((ulong)param_1 >> 0x20) & 1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  puVar2 = &UNK_1103c5f90;
  func_0x000107c613fc(&UNK_1103c5f90,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10d946bc8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_5);
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d946bd0,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10148c550; end: 10148c5e7;  */

void FUN_10148c550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10148d1ac(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10148c5e8,uVar2,uVar3);
  return;
}



/* Entry: 10148c5e8; end: 10148c6f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148c5e8(void)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  iVar2 = *(int *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  if (iVar2 == 2) {
    pcVar3 = *(code **)(unaff_x22 + 0x18);
    uVar1 = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x22 + 0x28);
    if (lVar5 != 3) goto LAB_10148c6c8;
    iVar2 = *(int *)(unaff_x22 + 0x10);
    if (iVar2 != 3) {
      uVar4 = *(ulong *)(*(long *)(unaff_x22 + 0x30) + _DAT_112da2540);
      uVar1 = 0xd000000000000029;
      func_0x000107c5fadc(0xd000000000000029,0x800000010ef84a30);
      func_0x000107c3ebc0();
      func_0x000107c61170(uVar1);
      if (iVar2 == 0) {
        if ((int)uVar4 != 0) {
          iVar2 = *(int *)(unaff_x22 + 0x10);
          goto LAB_10148c6b4;
        }
      }
      else {
        iVar2 = *(int *)(unaff_x22 + 0x10);
        if (iVar2 != 4 || (uVar4 & 1) != 0) {
LAB_10148c6b4:
          (**(code **)(unaff_x22 + 0x18))(iVar2 == 4);
          goto LAB_10148c6dc;
        }
      }
LAB_10148c6c8:
      FUN_10148c6f4(*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x18),
                    *(undefined8 *)(unaff_x22 + 0x20),lVar5 == 3);
      goto LAB_10148c6dc;
    }
    pcVar3 = *(code **)(unaff_x22 + 0x18);
    uVar1 = 1;
  }
  (*pcVar3)(uVar1);
LAB_10148c6dc:
                    /* WARNING: Could not recover jumptable at 0x00010148c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10148c6f4; end: 10148c8db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148c6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_78 [24];
  
  puVar3 = &UNK_1103c5ec8;
  func_0x000107c613fc(&UNK_1103c5ec8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  func_0x000107c6157c(param_3);
  func_0x00010006c804();
  puVar4 = &UNK_1103c5ef0;
  func_0x000107c613fc(&UNK_1103c5ef0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10148cee0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  lVar9 = _DAT_112da2568;
  func_0x000107c61428(unaff_x20 + _DAT_112da2568,auStack_78,0x21,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar9);
  func_0x000107c6157c(puVar3);
  uVar5 = uVar10;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + lVar9) = uVar10;
  uVar7 = uVar10;
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
    FUN_10148ccb8(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    *(ulong *)(unaff_x20 + lVar9) = uVar7;
  }
  uVar5 = *(ulong *)(uVar7 + 0x10);
  uVar10 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar5) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_10148ccb8(uVar10,uVar5 + 1,1,uVar7);
  }
  *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
  lVar1 = uVar10 + uVar5 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = 0x10148d3a0;
  *(undefined **)(lVar1 + 0x28) = puVar4;
  *(ulong *)(unaff_x20 + lVar9) = uVar10;
  func_0x000107c614a8(auStack_78);
  func_0x000100070bfc();
  func_0x000107c61574(puVar3);
  if ((param_4 & 1) == 0) {
    lVar9 = 0x10;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112da2540);
    uVar6 = 0xd000000000000029;
    func_0x000107c5fadc(0xd000000000000029,0x800000010ef84a30);
    func_0x000107c52de0(uVar8);
    func_0x000107c61170(uVar6);
    lVar9 = 8;
  }
  lVar1 = unaff_x20 + _DAT_112da2538;
  uVar6 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar6);
  (**(code **)(lVar2 + lVar9))(uVar6,lVar2);
  return;
}



/* Entry: 10148c8dc; end: 10148c917;  */

void FUN_10148c8dc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010148c914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10148c918; end: 10148ca6b; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager requestLocationPermissionWithRequestType:completionHandler:] */

void FUN_10148c918(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1103c5e00;
  func_0x000107c613fc(&UNK_1103c5e00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_10148c18c(param_3,FUN_10148cc50,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10148ca6c; end: 10148caff;  */

void FUN_10148ca6c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10148d1ac(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10148cb00,uVar2,uVar3);
  return;
}



/* Entry: 10148cb00; end: 10148cb47;  */

void FUN_10148cb00(void)

{
  undefined1 uVar1;
  code *pcVar2;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x28);
  pcVar2 = *(code **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  (*pcVar2)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010148cb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10148cb48; end: 10148cba7; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager init] */

void FUN_10148cb48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NextGenLocationSystemServicesImplementation.NextGenAuthorizationManager",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10148cb74);
  (*pcVar1)();
}



/* Entry: 10148cba8; end: 10148cc2f; -[_TtC43NextGenLocationSystemServicesImplementation27NextGenAuthorizationManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010148cbd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010148cbd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148cba8(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112da2538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da2540));
  return;
}



/* Entry: 10148cc30; end: 10148cc4f;  */

void FUN_10148cc30(void)

{
  func_0x000107c61168(&PTR_PTR_1127d9d28);
  return;
}



/* Entry: 10148cc50; end: 10148ccb7;  */

void FUN_10148cc50(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010148cc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 10148ccb8; end: 10148cde7;  */

undefined * FUN_10148ccb8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10148cde8);
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
    puVar3 = (undefined *)0x112da25a0;
    func_0x0001000285a8(0x112da25a0,&UNK_10d946bb8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112d3a690;
    func_0x0001000285a8(0x112d3a690,&UNK_10d93eac0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 10148cde8; end: 10148ce6f;  */

void FUN_10148cde8(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  uVar4 = *(uint *)(unaff_x20 + 0x10);
  uVar1 = 0x100000000;
  if (*(char *)(unaff_x20 + 0x14) == '\0') {
    uVar1 = 0;
  }
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  plVar9 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x10148d3b0;
  plVar9[5] = lVar6;
  plVar9[6] = lVar3;
  plVar9[3] = lVar7;
  plVar9[4] = lVar2;
  plVar9[2] = uVar1 | uVar4;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar5 = PTR___sScMMa_11034fc70;
  lVar7 = lVar6;
  func_0x000107c5fce8();
  plVar9[7] = lVar7;
  uVar8 = 0x112d45220;
  FUN_10148d1ac(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar6,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10148c5e8,lVar6,uVar8);
  return;
}



/* Entry: 10148ce70; end: 10148cedf;  */

void FUN_10148ce70(undefined8 param_1)

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
  plVar3[1] = 0x10148d3ac;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10148cee0; end: 10148ceef;  */

/* WARNING: Possible PIC construction at 0x00010148ca50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010148ca54) */

void FUN_10148cee0(int param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  iVar5 = 3;
  if (*(long *)(unaff_x20 + 0x10) != 3) {
    iVar5 = 4;
  }
  puVar2 = &UNK_1103c5f18;
  func_0x000107c613fc(&UNK_1103c5f18,0x21,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  puVar2[0x20] = iVar5 == param_1;
  puVar3 = &UNK_1103c5f40;
  func_0x000107c613fc(&UNK_1103c5f40,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10d946ba8;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c6157c(uVar4);
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d946bb0,puVar3,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 10148cef0; end: 10148cf4f;  */

void FUN_10148cef0(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x20);
  plVar6 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10148cf50;
  *(undefined1 *)(plVar6 + 5) = uVar1;
  plVar6[2] = lVar4;
  plVar6[3] = lVar3;
  lVar3 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar6[4] = lVar4;
  uVar5 = 0x112d45220;
  FUN_10148d1ac(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10148cb00,lVar3,uVar5);
  return;
}



/* Entry: 10148cf50; end: 10148cf8b;  */

void FUN_10148cf50(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010148cf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10148cf8c; end: 10148cffb;  */

void FUN_10148cf8c(undefined8 param_1)

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
  plVar3[1] = 0x10148d3b4;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10148cffc; end: 10148d027;  */

void FUN_10148cffc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10148d028; end: 10148d0af;  */

void FUN_10148d028(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  uVar4 = *(uint *)(unaff_x20 + 0x10);
  uVar1 = 0x100000000;
  if (*(char *)(unaff_x20 + 0x14) == '\0') {
    uVar1 = 0;
  }
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  plVar9 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x10148d3b8;
  plVar9[5] = lVar6;
  plVar9[6] = lVar3;
  plVar9[3] = lVar7;
  plVar9[4] = lVar2;
  plVar9[2] = uVar1 | uVar4;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar5 = PTR___sScMMa_11034fc70;
  lVar7 = lVar6;
  func_0x000107c5fce8();
  plVar9[7] = lVar7;
  uVar8 = 0x112d45220;
  FUN_10148d1ac(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar6,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10148c5e8,lVar6,uVar8);
  return;
}



/* Entry: 10148d0b0; end: 10148d11f;  */

void FUN_10148d0b0(undefined8 param_1)

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
  plVar3[1] = 0x10148d3bc;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10148d120; end: 10148d12f;  */

void FUN_10148d120(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010148d12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 10148d130; end: 10148d167;  */

void FUN_10148d130(ulong param_1)

{
  long unaff_x20;
  
  FUN_10148bee4(param_1 & 0x1ffffffff,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),&UNK_1103c60a8,
                0x10148d3c0,&UNK_1103c60c0);
  return;
}



/* Entry: 10148d168; end: 10148d18f;  */

void FUN_10148d168(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined4 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10148d190; end: 10148d1ab;  */

void FUN_10148d190(long param_1,long param_2)

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



/* Entry: 10148d1ac; end: 10148d1eb;  */

void FUN_10148d1ac(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10148d1ec; end: 10148d24f;  */

void FUN_10148d1ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10148d250; end: 10148d2ff;  */

void FUN_10148d250(uint *param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = 0x100000000;
  if ((char)param_1[1] == '\0') {
    uVar1 = 0;
  }
  (**(code **)(unaff_x20 + 0x10))(uVar1 | *param_1);
  return;
}



/* Entry: 10148d300; end: 10148d32f;  */

void FUN_10148d300(uint5 *param_1)

{
  uint5 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  if (((ulong)uVar1 & 0xff00000000) != 0x200000000) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_10148b24c((ulong)uVar1 & 0x1ffffffff);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10148d330; end: 10148d373;  */

void FUN_10148d330(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10148d374; end: 10148d3eb;  */

void FUN_10148d374(long param_1,long param_2)

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



/* Entry: 10148d3ec; end: 10148d43f;  */

void FUN_10148d3ec(undefined8 param_1)

{
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  func_0x00010148d2bc(param_1,auStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_10148cc30(0);
  func_0x000107c610f8();
  FUN_10148afec(auStack_48,uStack_50);
  return;
}



/* Entry: 10148d440; end: 10148d467;  */

void FUN_10148d440(void)

{
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  func_0x00010148d2bc(unaff_x20 + 0x10,auStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_10148cc30(0);
  func_0x000107c610f8();
  FUN_10148afec(auStack_48,uStack_50);
  return;
}



/* Entry: 10148d468; end: 10148d537;  */

undefined * FUN_10148d468(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x00010148d2bc(param_1,auStack_58);
  puVar2 = &UNK_1103c63e0;
  func_0x000107c613fc(&UNK_1103c63e0,0x40,7);
  func_0x00010148d3d4(auStack_58,puVar2 + 0x10);
  *(undefined **)(puVar2 + 0x38) = puVar1;
  func_0x000107c61174(puVar1);
  uVar3 = 0x22;
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d946d10,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  return puVar1;
}



/* Entry: 10148d538; end: 10148d53f;  */

undefined * FUN_10148d538(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_58 [40];
  
  puVar1 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x00010148d2bc(unaff_x20 + 0x10,auStack_58);
  puVar2 = &UNK_1103c63e0;
  func_0x000107c613fc(&UNK_1103c63e0,0x40,7);
  func_0x00010148d3d4(auStack_58,puVar2 + 0x10);
  *(undefined **)(puVar2 + 0x38) = puVar1;
  func_0x000107c61174(puVar1);
  uVar3 = 0x22;
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10d946d10,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  return puVar1;
}



/* Entry: 10148d540; end: 10148d67f;  */

void FUN_10148d540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  lVar1 = 0;
  func_0x0001019f4894();
  *(long *)(unaff_x22 + 0x20) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  lVar1 = 0x112da25c0;
  func_0x0001000285a8(0x112da25c0,&UNK_10d946d18);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  lVar1 = 0x112da25c8;
  func_0x0001000285a8(0x112da25c8,&UNK_10d946d20);
  *(long *)(unaff_x22 + 0x50) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  lVar1 = 0x112da25d0;
  func_0x0001000285a8(0x112da25d0,&UNK_10d946d28);
  *(long *)(unaff_x22 + 0x68) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10148d680,uVar4,uVar5);
  return;
}



/* Entry: 10148d680; end: 10148d743;  */

void FUN_10148d680(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
  lVar4 = *(long *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,uVar2);
  (**(code **)(lVar4 + 0x30))(uVar3,uVar2,lVar4);
  func_0x000107c5fd34(uVar7,uVar8);
  (**(code **)(lVar1 + 8))(uVar3,uVar8);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10148d744;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar6,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 10148d744; end: 10148d787;  */

void FUN_10148d744(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10148d788,*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(lVar1 + 0x90));
  return;
}



/* Entry: 10148d788; end: 10148d9c7;  */

void FUN_10148d788(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = uVar7;
  (**(code **)(*(long *)(unaff_x22 + 0x28) + 0x30))(uVar7,1,*(undefined8 *)(unaff_x22 + 0x20));
  if ((int)uVar8 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar8,*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c61574(uVar1);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010148d83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar10 = (undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *puVar10;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_10148da68(uVar7,uVar6);
  func_0x00010148daac(uVar6,uVar8);
  lVar3 = 0x112da24e8;
  func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
  pcVar11 = *(code **)(*(long *)(lVar3 + -8) + 0x30);
  (*pcVar11)(uVar8,1,lVar3);
  if ((int)uVar8 == 1) {
    puVar12 = (undefined8 *)(unaff_x22 + 0x30);
    uVar7 = *puVar12;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x00010148daf0(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x00010148daac(uVar8,uVar7);
    (*pcVar11)(uVar7,1,lVar3);
    if ((int)uVar7 != 1) {
      func_0x00010148daf0(*puVar10);
      goto LAB_10148d970;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x00010148daf0(*(undefined8 *)(unaff_x22 + 0x30));
    puVar4 = PTR_PTR_1126bc340;
    func_0x000107c61168(PTR_PTR_1126bc340);
    func_0x000107c5bea0();
    func_0x000107c61180();
    func_0x000107c4d664(uVar8);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 8))(uVar7,lVar3);
    puVar4 = PTR_PTR_1126bc340;
    func_0x000107c61168(PTR_PTR_1126bc340);
    func_0x000107c5bc60();
    func_0x000107c61180();
    func_0x000107c4d664(uVar8);
  }
  func_0x000107c61170(puVar4);
  puVar12 = puVar10;
LAB_10148d970:
  func_0x00010148daf0(*puVar12);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10148d744;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar5,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 10148d9c8; end: 10148da2b;  */

void FUN_10148d9c8(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x38);
  plVar4 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10148da2c;
  plVar4[2] = unaff_x20 + 0x10;
  plVar4[3] = lVar5;
  lVar5 = 0;
  func_0x0001019f4894();
  plVar4[4] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[5] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[6] = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[7] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[8] = uVar2;
  lVar5 = 0x112da25c0;
  func_0x0001000285a8(0x112da25c0,&UNK_10d946d18);
  uVar2 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[9] = uVar2;
  lVar5 = 0x112da25c8;
  func_0x0001000285a8(0x112da25c8,&UNK_10d946d20);
  plVar4[10] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0xb] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xc] = uVar2;
  lVar5 = 0x112da25d0;
  func_0x0001000285a8(0x112da25d0,&UNK_10d946d28);
  plVar4[0xd] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0xe] = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xf] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar5 = lVar3;
  func_0x000107c5fce8();
  plVar4[0x10] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[0x11] = lVar3;
  plVar4[0x12] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10148d680,lVar3,lVar5);
  return;
}



/* Entry: 10148da2c; end: 10148da67;  */

void FUN_10148da2c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010148da64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10148da68; end: 10148db2b;  */

undefined8 FUN_10148da68(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001019f4894();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10148db2c; end: 10148db47;  */

void FUN_10148db2c(long param_1,long param_2)

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



/* Entry: 10148db48; end: 10148db77;  */

void FUN_10148db48(void)

{
  func_0x000107c610f8(PTR_PTR_1126a71b8);
                    /* WARNING: Could not recover jumptable at 0x00010c026c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10148db78; end: 10148db8f;  */

void FUN_10148db78(long param_1,long param_2)

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



/* Entry: 10148db90; end: 10148dc2b;  */

long FUN_10148db90(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return unaff_x20;
}



/* Entry: 10148dc2c; end: 10148dc33;  */

void FUN_10148dc2c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10148dc34();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10148dc34; end: 10148de53;  */

void FUN_10148dc34(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  
  lVar1 = 0;
  func_0x000107c60010();
  puVar3 = PTR___sSo18OS_dispatch_sourceC8DispatchE19MemoryPressureEventVMa_11034f9e0;
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = uVar4;
  func_0x000107c614f0(uVar4);
  func_0x000107c615f0(uVar4);
  func_0x000107c600a0((long)puVar6 - extraout_x12,uVar5);
  func_0x000107c615e8(uVar4);
  func_0x000107c60004(puVar6);
  uVar5 = 0x112da2698;
  FUN_10148de88(0x112da2698,puVar3,
                PTR___sSo18OS_dispatch_sourceC8DispatchE19MemoryPressureEventVs10SetAlgebraACMc_11034f9f0
               );
  puVar2 = puVar6;
  func_0x000107c60250(puVar6,lVar1,uVar5);
  pcVar7 = *(code **)(lVar8 + 8);
  (*pcVar7)(puVar6,lVar1);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000107c60008(puVar6);
    puVar2 = puVar6;
    func_0x000107c60250(puVar6,lVar1,uVar5);
    (*pcVar7)(puVar6,lVar1);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000107c6000c(puVar6);
      puVar2 = puVar6;
      func_0x000107c60250(puVar6,lVar1,uVar5);
      (*pcVar7)(puVar6,lVar1);
      if (((ulong)puVar2 & 1) == 0) goto LAB_10148de2c;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
      puVar3 = PTR_PTR_1126daf98;
      func_0x000107c61168(PTR_PTR_1126daf98);
      func_0x000107c61174(uVar5);
      func_0x000107c40d88(puVar3);
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
      puVar3 = PTR_PTR_1126daf98;
      func_0x000107c61168(PTR_PTR_1126daf98);
      func_0x000107c61174(uVar5);
      func_0x000107c5e108(puVar3);
    }
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar3 = PTR_PTR_1126daf98;
    func_0x000107c61168(PTR_PTR_1126daf98);
    func_0x000107c61174(uVar5);
    func_0x000107c4d748(puVar3);
  }
  func_0x000107c61180();
  func_0x000107c4d664(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar3);
LAB_10148de2c:
  (*pcVar7)((long)puVar6 - extraout_x12,lVar1);
  return;
}



/* Entry: 10148de54; end: 10148de5b;  */

void FUN_10148de54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10148de5c; end: 10148de87;  */

void FUN_10148de5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10148de88; end: 10148dec7;  */

void FUN_10148de88(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10148dec8; end: 10148decb; -[_TtC33MemoryUsageServicesImplementation37MemoryUsageInfoProviderImplementation instrumentsMemory] */

long FUN_10148dec8(void)

{
  int iVar1;
  undefined4 uStack_198;
  undefined1 auStack_194 [48];
  long lStack_164;
  long lStack_134;
  long lStack_11c;
  
  uStack_198 = 0x5d;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  _task_info(iVar1,0x17,auStack_194,&uStack_198);
  if (iVar1 == 0) {
    lStack_134 = (lStack_11c + lStack_164) - lStack_134;
  }
  else {
    lStack_134 = 0;
  }
  return lStack_134;
}



/* Entry: 10148decc; end: 10148decf; -[_TtC33MemoryUsageServicesImplementation37MemoryUsageInfoProviderImplementation residentMemory] */

undefined8 FUN_10148decc(void)

{
  int iVar1;
  undefined4 uStack_3c;
  undefined1 auStack_38 [12];
  undefined8 uStack_2c;
  
  uStack_3c = 10;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  _task_info(iVar1,0x12,auStack_38,&uStack_3c);
  if (iVar1 != 0) {
    uStack_2c = 0;
  }
  return uStack_2c;
}



/* Entry: 10148ded0; end: 10148ded3; -[_TtC33MemoryUsageServicesImplementation37MemoryUsageInfoProviderImplementation mallocatedMemory] */

undefined8 FUN_10148ded0(void)

{
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  _malloc_zone_statistics(0,auStack_30);
  return uStack_18;
}



/* Entry: 10148ded4; end: 10148ded7; -[_TtC33MemoryUsageServicesImplementation37MemoryUsageInfoProviderImplementation virtualMemory] */

undefined8 FUN_10148ded4(void)

{
  int iVar1;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined8 uStack_34;
  
  uStack_3c = 10;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  _task_info(iVar1,0x12,auStack_38,&uStack_3c);
  if (iVar1 != 0) {
    uStack_34 = 0;
  }
  return uStack_34;
}



/* Entry: 10148ded8; end: 10148dedb; -[_TtC33MemoryUsageServicesImplementation37MemoryUsageInfoProviderImplementation regionCount] */

long FUN_10148ded8(void)

{
  int iVar1;
  undefined4 uStack_198;
  undefined1 auStack_194 [8];
  int iStack_18c;
  
  uStack_198 = 0x5d;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  _task_info(iVar1,0x16,auStack_194,&uStack_198);
  if (iVar1 != 0) {
    iStack_18c = 0;
  }
  return (long)iStack_18c;
}



/* Entry: 10148dedc; end: 10148df0f;  */

void FUN_10148dedc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10148df10; end: 10148df1f;  */

undefined1  [16] FUN_10148df10(void)

{
  return ZEXT816(0x1103c6768);
}



/* Entry: 10148df20; end: 10148df2f; -[_TtC33MemoryUsageServicesImplementation37MemoryUsageInfoProviderImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10148df20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112da26a8));
  return;
}



/* Entry: 10148df30; end: 10148df33; -[_TtC33MemoryUsageServicesImplementation37MemoryUsageInfoProviderImplementation xcodeFootprintMemory] */

undefined8 FUN_10148df30(void)

{
  int iVar1;
  undefined4 uStack_198;
  undefined1 auStack_194 [144];
  undefined8 uStack_104;
  
  uStack_198 = 0x5d;
  iVar1 = *(int *)PTR__mach_task_self__11034c5c8;
  func_0x000107c61678(iVar1,0x17,auStack_194,&uStack_198);
  if (iVar1 != 0) {
    uStack_104 = 0;
  }
  return uStack_104;
}



/* Entry: 10148df34; end: 10148df6f;  */

undefined8 FUN_10148df34(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000aa384(param_1);
  return unaff_x20;
}



/* Entry: 10148df70; end: 10148dfb7;  */

void FUN_10148df70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10148dfb8; end: 10148e01b;  */

undefined8
FUN_10148dfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001009d6cac(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 10148e01c; end: 10148e0b7;  */

void FUN_10148e01c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_10148f328();
  uVar1 = *param_1;
  func_0x000107c6157c(uVar1);
  func_0x0001014920b8(0x615779726f6d654d,0xed0000676e696e72,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10148e0b8; end: 10148e103;  */

void FUN_10148e0b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  FUN_10148f328();
  uVar2 = *puVar1;
  func_0x000107c6157c(uVar2);
  FUN_1014906a8(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10148e104; end: 10148e15f;  */

uint FUN_10148e104(uint param_1)

{
  ulong *puStack_28;
  
  func_0x000100083b20(&puStack_28);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_28) + 0x80))();
  func_0x000107c61170(puStack_28);
  return param_1 & 1;
}



/* Entry: 10148e160; end: 10148e18b;  */

void FUN_10148e160(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10148e18c; end: 10148e1e7;  */

undefined1  [16] FUN_10148e18c(void)

{
  return ZEXT816(0);
}



/* Entry: 10148e1e8; end: 10148e25b;  */

void FUN_10148e1e8(long *param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_10148f328();
  lVar1 = *param_1;
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  if (*(char *)(lVar1 + 0x10) == '\x01') {
    func_0x000107c6157c(lVar1);
    func_0x0001014920b8(0x6c61756e614d,0xe600000000000000,0);
    FUN_10148ede4();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10148e25c; end: 10148e263;  */

void FUN_10148e25c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10148e264; end: 10148e567;  */

undefined * FUN_10148e264(undefined *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar12;
    puVar10 = param_1;
    func_0x000107c61434();
    lStack_70 = 0;
  }
  else {
    puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar10 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    FUN_10148f2ac(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    FUN_100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar10,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    uVar9 = uStack_68;
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = lStack_70;
  do {
    uVar13 = uVar9;
    lVar2 = lVar14;
    if ((long)param_1 < 0) {
      func_0x000107c602ac();
      if (puVar10 == (undefined *)0x0) {
LAB_10148e524:
        puStack_58 = (undefined *)0x0;
LAB_10148e528:
        FUN_100deaf38(param_1,puVar12,uVar11,lVar14,uVar9);
        return puStack_98;
      }
      uVar5 = 0;
      puStack_90 = puVar10;
      FUN_10148f2ac(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
      func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
      puVar10 = puStack_58;
    }
    else {
      while (uVar13 == 0) {
        lVar1 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10148e568);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar1) {
          uVar9 = 0;
          goto LAB_10148e524;
        }
        lVar2 = lVar1;
        uVar13 = puVar12[lVar1];
      }
      uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
    if (puVar10 == (undefined *)0x0) goto LAB_10148e528;
    func_0x000107c61168(puVar7);
    puVar6 = puVar10;
    func_0x000107c6148c(puVar10,puVar7);
    uVar9 = uVar13;
    lVar14 = lVar2;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
    }
    else {
      puVar10 = puStack_98;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puStack_98 < 0)) || (((ulong)puStack_98 >> 0x3e & 1) != 0))
      {
        if ((ulong)puStack_98 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puStack_98 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puStack_98 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_98) {
            puVar7 = puStack_98;
          }
          func_0x000107c60480(puVar7);
        }
        puVar10 = (undefined *)0x0;
        FUN_10148e79c(0,puVar7 + 1,1,puStack_98,0x112d59528,
                      &PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59520,&UNK_10d9314f0);
        puStack_98 = puVar10;
      }
      uVar8 = (ulong)puStack_98 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar13) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_10148e79c(puVar10,uVar13 + 1,1,puStack_98,0x112d59528,
                      &PTR__OBJC_CLASS___UIWindowScene_1126b6b80,0x112d59520,&UNK_10d9314f0);
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        puStack_98 = puVar10;
      }
      *(ulong *)(uVar8 + 0x10) = uVar13 + 1;
      *(undefined **)(uVar8 + uVar13 * 8 + 0x20) = puVar6;
    }
  } while( true );
}


