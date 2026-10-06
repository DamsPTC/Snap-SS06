/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102660d74; end: 102660fe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102660d74(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar2 = PTR_PTR_1126b2050;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c55218(puVar2);
  func_0x000107c61170(param_2);
  puVar3 = PTR_PTR_1126bf1b0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126aace8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    FUN_102660784(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102660fe8);
      (*pcVar1)();
    }
    uVar10 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar10;
        FUN_1026605e8(uVar10,param_1);
      }
      puVar6 = PTR_PTR_1126bf1b8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c55ab8(*(undefined8 *)(uVar5 + _DAT_112fa9800));
      func_0x000107c55fc4(*(undefined8 *)(uVar5 + _DAT_112fa9808),puVar6);
      func_0x000107c61170(uVar5);
      uVar5 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
        FUN_102660784(1 < *(ulong *)(puVar7 + 0x18),uVar5 + 1,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar7 + 0x10) = uVar5 + 1;
      *(undefined **)(puVar7 + uVar5 * 8 + 0x20) = puVar6;
    } while (uVar9 != uVar10);
  }
  puVar6 = puVar7;
  func_0x00010265fc48(puVar7);
  func_0x000107c6142c(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar8 = puVar6;
  func_0x000107c5fc48(puVar6,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar6);
  func_0x000107c45788(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c55ac0(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c55f7c(puVar3);
  func_0x000107c54e50(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  return puVar2;
}



/* Entry: 102660fe8; end: 10266102b;  */

void FUN_102660fe8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2008 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bf1b8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112eb2008 = puVar1;
  return;
}



/* Entry: 10266102c; end: 102661047;  */

void FUN_10266102c(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1 + 0x10,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102661048; end: 102661087;  */

void FUN_102661048(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb2020 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac6a70;
  func_0x000107c61520(&UNK_10dac6a70,&UNK_11052f010);
  puRam0000000112eb2020 = puVar1;
  return;
}



/* Entry: 102661088; end: 102661133;  */

void FUN_102661088(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102661134; end: 10266116b;  */

void FUN_102661134(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 10266116c; end: 10266117b; -[_TtC32MapActionBarButtonImplementation23SnapshotActionBarButton identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10266116c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112eb2028);
}



/* Entry: 10266117c; end: 10266133f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10266117c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb2028) = 0;
  lVar1 = _DAT_112eb2030;
  func_0x000107c61614(unaff_x20 + _DAT_112eb2030,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eb2038) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb2040) = param_2;
  func_0x000107c61604(unaff_x20 + lVar1,param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  uVar2 = param_2;
  FUN_1026eb7f0(0x4061800000000000,0x4045000000000000);
  func_0x000107c61180();
  FUN_1026613a0();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  return uVar2;
}



/* Entry: 102661340; end: 10266139f; -[_TtC32MapActionBarButtonImplementation23SnapshotActionBarButton initWithScope:snapshotScopeExposer:delegate:] */

void FUN_102661340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000102661264(param_3,param_4,param_5);
  return;
}



/* Entry: 1026613a0; end: 102661543;  */

/* WARNING: Possible PIC construction at 0x000102661410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102661440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102661498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026614e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010266149c) */
/* WARNING: Removing unreachable block (ram,0x000102661444) */
/* WARNING: Removing unreachable block (ram,0x0001026614a4) */
/* WARNING: Removing unreachable block (ram,0x000102661458) */
/* WARNING: Removing unreachable block (ram,0x000102661414) */
/* WARNING: Removing unreachable block (ram,0x0001026614ec) */

void FUN_1026613a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c45098(0x4035000000000000,0x4033000000000000,puVar1,param_2,0x65,puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 102661544; end: 1026615e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102661544(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112eb2040;
  lVar2 = *(long *)(unaff_x20 + _DAT_112eb2040);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61174(uVar3);
    uVar4 = uVar3;
    func_0x000107c4ffe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar4);
  }
  lVar2 = unaff_x20 + _DAT_112eb2030;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c41d7c();
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + lVar1),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(unaff_x20 + _DAT_112eb2038));
  return;
}



/* Entry: 1026615e8; end: 10266160f; -[_TtC32MapActionBarButtonImplementation23SnapshotActionBarButton mapSnapButtonTapped] */

void FUN_1026615e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102661544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102661610; end: 10266164b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102661610(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112eb2038));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112eb2040));
  lVar1 = unaff_x20 + _DAT_112eb2030;
  func_0x000107c61610();
  return lVar1;
}



/* Entry: 10266164c; end: 10266166f;  */

undefined8 FUN_10266164c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102661670; end: 1026616bf;  */

void FUN_102661670(void)

{
  func_0x0001026616a0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026616c0; end: 102661707; -[_TtC32MapActionBarButtonImplementation23SnapshotActionBarButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026616c0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb2038));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb2040));
  param_1 = param_1 + _DAT_112eb2030;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102661708; end: 1026617cb;  */

undefined1  [16] FUN_102661708(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x70616e735f70616d;
  func_0x000107c5fadc(0x70616e735f70616d,0xe800000000000000);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0b4330);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026617cc);
  (*pcVar1)();
}



/* Entry: 1026617cc; end: 1026617df;  */

bool FUN_1026617cc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1026617e0; end: 10266188b;  */

void FUN_1026617e0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10266188c; end: 1026618b3;  */

void FUN_10266188c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 1026618b4; end: 1026619cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1026618b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_98 [8];
  undefined1 auStack_88 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112eb2098;
  func_0x000107c61614(unaff_x20 + _DAT_112eb2098,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb2070);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb2078);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eb2080) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb2088);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112eb2090) = param_8;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_88,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_9);
  puVar3 = auStack_98;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_9);
  return puVar3;
}



/* Entry: 1026619cc; end: 1026619fb;  */

undefined8 FUN_1026619cc(undefined8 param_1)

{
  undefined8 in_x6;
  
  FUN_102661b60();
  func_0x000107c615e8(in_x6);
  return param_1;
}



/* Entry: 1026619fc; end: 102661acb; -[_TtC13SnapshotScope13SnapshotScope initWithClusterCoordinate:clusterId:clusterMapPersons:sessionId:source:delegate:] */

undefined8
FUN_1026619fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_5);
  uVar1 = 0;
  func_0x000103a2db6c(0);
  func_0x000107c5fc54(param_6,uVar1);
  func_0x000107c5faec(param_7);
  func_0x000107c615f0(param_9);
  FUN_102661b60(param_1,param_2,param_5,param_4,param_6,param_7,uVar1,param_8,param_9);
  func_0x000107c615e8(param_9);
  return param_5;
}



/* Entry: 102661acc; end: 102661aff;  */

void FUN_102661acc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102661b00; end: 102661b5f; -[_TtC13SnapshotScope13SnapshotScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102661b00(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb2078 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb2080));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb2088 + 8));
  param_1 = param_1 + _DAT_112eb2098;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102661b60; end: 102661c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102661b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_88 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112eb2098;
  func_0x000107c61614(unaff_x20 + _DAT_112eb2098,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb2070);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb2078);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eb2080) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb2088);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112eb2090) = param_8;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_88,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_9);
  func_0x000107c61154(&stack0xffffffffffffff68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102661c68; end: 102661c8b;  */

undefined8 FUN_102661c68(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102661c8c; end: 102661c8f;  */

void FUN_102661c8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb20a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac6b50;
  func_0x000107c61520(&UNK_10dac6b50,&UNK_11052f120);
  puRam0000000112eb20a0 = puVar1;
  return;
}



/* Entry: 102661c90; end: 102661ccf;  */

void FUN_102661c90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb20a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac6b50;
  func_0x000107c61520(&UNK_10dac6b50,&UNK_11052f120);
  puRam0000000112eb20a0 = puVar1;
  return;
}



/* Entry: 102661cd0; end: 102661cdf;  */

undefined1  [16] FUN_102661cd0(void)

{
  return ZEXT816(0x11052f120);
}



/* Entry: 102661ce0; end: 102661cff;  */

void FUN_102661ce0(void)

{
  func_0x000107c61168(&PTR_PTR_112855f08);
  return;
}



/* Entry: 102661d00; end: 102661d0b;  */

void FUN_102661d00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 102661d0c; end: 102661ee3;  */

void FUN_102661d0c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = &UNK_11052f300;
  func_0x000107c613fc(&UNK_11052f300,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x102662808;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102662810;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x102662898;
  puStack_78 = &UNK_11052f318;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_11052f350;
  func_0x000107c613fc(&UNK_11052f350,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102662830;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcStack_70 = (code *)0x10266288c;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e27b38;
  puStack_78 = &UNK_11052f368;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x67,0x2b,0x2b,1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102661ee0);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x67,0x33,0x1c,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102661ee4);
  (*pcVar1)();
}



/* Entry: 102661ee4; end: 102662163;  */

void FUN_102661ee4(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_90;
  undefined *apuStack_88 [3];
  
  if (param_3 != 0) {
    func_0x000107c61174();
    uVar6 = param_3;
    func_0x000107c5bcc0();
    if (uVar6 == 0) {
      uVar6 = param_3;
      func_0x000107c4b8b0();
      func_0x000107c61180();
      uVar4 = 0;
      FUN_102662838(0);
      uVar2 = uVar6;
      func_0x000107c5fc54(uVar6,uVar4);
      func_0x000107c61170(uVar6);
      if (uVar2 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar6 = uVar2;
        }
        func_0x000107c60480();
      }
      if (uVar6 == 0) {
        func_0x000107c6142c(uVar2);
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        apuStack_88[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_1026623d4(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102662164);
          (*pcVar1)();
        }
        uVar7 = 0;
        do {
          puVar5 = apuStack_88[0];
          if ((uVar2 & 0xc000000000000001) == 0) {
            uVar3 = *(ulong *)(uVar2 + uVar7 * 8 + 0x20);
            func_0x000107c61174(uVar3);
          }
          else {
            uVar3 = uVar7;
            FUN_102662514(uVar7,uVar2);
          }
          func_0x000107c4b88c();
          uVar4 = 0;
          func_0x000103a2a260();
          func_0x000107c610f8();
          func_0x000103a2a220(param_1,param_2);
          func_0x000107c61170(uVar3);
          uVar3 = *(ulong *)(puVar5 + 0x10);
          apuStack_88[0] = puVar5;
          if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
            FUN_1026623d4(1 < *(ulong *)(puVar5 + 0x18),uVar3 + 1,1);
          }
          puVar5 = apuStack_88[0];
          uVar7 = uVar7 + 1;
          *(ulong *)(apuStack_88[0] + 0x10) = uVar3 + 1;
          *(undefined8 *)(apuStack_88[0] + uVar3 * 8 + 0x20) = uVar4;
        } while (uVar6 != uVar7);
        func_0x000107c6142c(uVar2);
      }
      func_0x000107c61428(param_4 + 0x10,apuStack_88,0,0);
      param_4 = param_4 + 0x10;
      func_0x000107c61648();
      if (param_4 == 0) {
        func_0x000107c6142c(puVar5);
      }
      else {
        uVar4 = *(undefined8 *)(param_4 + 0x20);
        func_0x000107c6157c(uVar4);
        func_0x000107c61574(param_4);
        puStack_90 = puVar5;
        func_0x000100087c34(&puStack_90);
        func_0x000107c6142c(puVar5);
        func_0x000107c61574(uVar4);
      }
      func_0x000107c61170(param_3);
      return;
    }
    func_0x000107c61170(param_3);
  }
  func_0x000107c61428(param_4 + 0x10,apuStack_88,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    uVar4 = *(undefined8 *)(param_4 + 0x20);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(param_4);
    puStack_90 = (undefined *)0x0;
    func_0x000100087c34(&puStack_90);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 102662164; end: 1026621d3;  */

void FUN_102662164(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_2);
    uStack_40 = 0;
    func_0x000100087c34(&uStack_40);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 1026621d4; end: 10266221f;  */

void FUN_1026621d4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102662220; end: 102662273;  */

void FUN_102662220(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102662274; end: 10266227b;  */

void FUN_102662274(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 10266227c; end: 1026622e3;  */

undefined8 * FUN_10266227c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1026622e4; end: 1026623d3;  */

int FUN_1026622e4(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 1026623d4; end: 1026623ef;  */

void FUN_1026623d4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1026623f0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1026623f0; end: 102662513;  */

undefined * FUN_1026623f0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102662514);
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
    func_0x000101b7300c();
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
    func_0x000103a2a260(0);
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



/* Entry: 102662514; end: 1026627e3;  */

ulong FUN_102662514(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026625f8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026625fc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bfa28;
    func_0x000107c61168(PTR_PTR_1126bfa28);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bfa28;
    func_0x000107c61168(PTR_PTR_1126bfa28);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_102662838(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026626c8);
  (*pcVar2)();
}



/* Entry: 1026627e4; end: 10266280f;  */

void FUN_1026627e4(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  puVar2 = &UNK_11052f300;
  func_0x000107c613fc(&UNK_11052f300,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x102662808;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102662810;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x102662898;
  puStack_78 = &UNK_11052f318;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_11052f350;
  func_0x000107c613fc(&UNK_11052f350,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102662830;
  *(undefined8 *)(puVar4 + 0x18) = unaff_x20;
  pcStack_70 = (code *)0x10266288c;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e27b38;
  puStack_78 = &UNK_11052f368;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574();
  puVar6 = puVar2;
  func_0x000107c61544(puVar2,"",0x67,0x2b,0x2b,1);
  func_0x000107c61574();
  func_0x000107c61574(puVar2);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102661ee0);
    (*pcVar1)();
  }
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x67,0x33,0x1c,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102661ee4);
  (*pcVar1)();
}



/* Entry: 102662810; end: 10266282f;  */

void FUN_102662810(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102662830; end: 102662837;  */

void FUN_102662830(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    uStack_40 = 0;
    func_0x000100087c34(&uStack_40);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 102662838; end: 10266287b;  */

void FUN_102662838(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2d1c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bfa28;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e2d1c8 = puVar1;
  return;
}



/* Entry: 10266287c; end: 10266289b;  */

void FUN_10266287c(long param_1,long param_2)

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



/* Entry: 10266289c; end: 10266297b;  */

void FUN_10266289c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  code *pcVar6;
  
  uVar5 = param_1;
  func_0x0001026626c8();
  func_0x000107c6157c();
  plVar1 = (long *)0x1;
  func_0x00010061b458();
  func_0x000107c61574(uVar5);
  puVar2 = &UNK_11052f3b8;
  func_0x000107c613fc(&UNK_11052f3b8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11052f4a8;
  func_0x000107c613fc(&UNK_11052f4a8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  pcVar6 = *(code **)(*plVar1 + 0x60);
  func_0x000107c6157c(param_2);
  pcVar4 = FUN_102663248;
  puVar2 = puVar3;
  (*pcVar6)();
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  *(code **)(unaff_x20 + 0x38) = pcVar4;
  *(undefined **)(unaff_x20 + 0x40) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
  return;
}



/* Entry: 10266297c; end: 1026629e7;  */

void FUN_10266297c(long *param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  (*param_2)(*param_1 != 0);
  func_0x000107c61428(param_4 + 0x10,auStack_38,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + 0x38);
    *(undefined8 *)(param_4 + 0x38) = 0;
    *(undefined8 *)(param_4 + 0x40) = 0;
    func_0x000107c61574();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 1026629e8; end: 102662abb;  */

void FUN_1026629e8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  uVar1 = 0x112eb2248;
  func_0x0001000285a8(0x112eb2248,&UNK_10dac6cf8);
  pcVar2 = FUN_102661d00;
  func_0x0001000bfde0(FUN_102661d00,0,uVar1);
  plVar3 = (long *)0x1;
  func_0x00010061b458();
  func_0x000107c61574(pcVar2);
  puVar4 = &UNK_11052f3b8;
  func_0x000107c613fc(&UNK_11052f3b8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uVar1 = 0x102663010;
  puVar6 = puVar4;
  (**(code **)(*plVar3 + 0x60))();
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  *(undefined **)(unaff_x20 + 0x30) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
  return;
}



/* Entry: 102662abc; end: 102662b17;  */

void FUN_102662abc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102662b18(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102662b18; end: 102662c2f;  */

void FUN_102662b18(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    uVar1 = 0;
    func_0x000103a2a260(0);
    func_0x000107c5fc48(param_1,uVar1);
  }
  func_0x000107c5c130(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c5c59c();
  func_0x000107c61180();
  puVar2 = &UNK_11052f3b8;
  func_0x000107c613fc(&UNK_11052f3b8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uStack_40 = 0x102663018;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_102662de8;
  puStack_48 = &UNK_11052f3d0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar1 = uVar4;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102662c30; end: 102662de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102662c30(long param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [24];
  
  if (*(int *)(param_1 + _DAT_112fcd2d0) == 3) {
    func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
    uVar2 = param_2 + 0x10;
    func_0x000107c61648();
    if (uVar2 == 0) {
      return;
    }
    uVar3 = uVar2;
    func_0x000109021b50();
    if ((int)uVar3 == 0) goto LAB_102662dc4;
    uVar8 = 0xd000000000000015;
    pcVar1 = "Memories Sync Failed!";
    puVar6 = &UNK_10dac6d18;
    puVar7 = &UNK_10dac6d08;
    puVar5 = &UNK_11052f430;
    puVar4 = &UNK_11052f408;
  }
  else {
    if (*(int *)(param_1 + _DAT_112fcd2d0) != 2) {
      return;
    }
    func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
    uVar2 = param_2 + 0x10;
    func_0x000107c61648();
    if (uVar2 == 0) {
      return;
    }
    uVar3 = uVar2;
    func_0x000109021b50();
    if ((uVar3 & 1) == 0) goto LAB_102662dc4;
    uVar8 = 0xd000000000000010;
    pcVar1 = "Memories Synced!";
    puVar6 = &UNK_10dac6d28;
    puVar7 = &UNK_10dac6d20;
    puVar5 = &UNK_11052f480;
    puVar4 = &UNK_11052f458;
  }
  func_0x000107c613fc(puVar4,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(ulong *)(puVar4 + 0x18) = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  *(ulong *)(puVar4 + 0x20) = uVar2;
  func_0x000107c613fc(puVar5,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar7;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  func_0x000107c6157c(uVar2);
  uVar8 = 0x31;
  func_0x0001001ca524(0x31,0,0x3c,4,0,0,puVar6,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar8);
LAB_102662dc4:
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 102662de8; end: 102662e33;  */

void FUN_102662de8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102662e34; end: 102662ea3;  */

void FUN_102662e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102662ea4,uVar1,uVar2);
  return;
}



/* Entry: 102662ea4; end: 102662f5f;  */

void FUN_102662ea4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  puVar2 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  func_0x000107c5fadc(uVar3,uVar4);
  uVar4 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0b43b0);
  func_0x000107c40930(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c5c2e0(*(undefined8 *)(lVar1 + 0x20));
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000102662f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102662f60; end: 102663007;  */

void FUN_102662f60(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102662f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102663008; end: 10266303b;  */

void FUN_102663008(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  code *pcVar6;
  
  uVar5 = param_1;
  func_0x0001026626c8();
  func_0x000107c6157c();
  plVar1 = (long *)0x1;
  func_0x00010061b458();
  func_0x000107c61574(uVar5);
  puVar2 = &UNK_11052f3b8;
  func_0x000107c613fc(&UNK_11052f3b8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11052f4a8;
  func_0x000107c613fc(&UNK_11052f4a8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  pcVar6 = *(code **)(*plVar1 + 0x60);
  func_0x000107c6157c(param_2);
  pcVar4 = FUN_102663248;
  puVar2 = puVar3;
  (*pcVar6)();
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  *(code **)(unaff_x20 + 0x38) = pcVar4;
  *(undefined **)(unaff_x20 + 0x40) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
  return;
}



/* Entry: 10266303c; end: 10266309b;  */

void FUN_10266303c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102663258;
  plVar3[3] = lVar1;
  plVar3[4] = lVar4;
  plVar3[2] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102662ea4,lVar1,lVar2);
  return;
}



/* Entry: 10266309c; end: 10266310b;  */

void FUN_10266309c(undefined8 param_1)

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
  plVar3[1] = 0x102663254;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10266310c; end: 10266316b;  */

void FUN_10266310c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10266316c;
  plVar3[3] = lVar1;
  plVar3[4] = lVar4;
  plVar3[2] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102662ea4,lVar1,lVar2);
  return;
}



/* Entry: 10266316c; end: 1026631a7;  */

void FUN_10266316c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026631a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026631a8; end: 102663217;  */

void FUN_1026631a8(undefined8 param_1)

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
  plVar3[1] = 0x10266325c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102663218; end: 102663247;  */

void FUN_102663218(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102663248; end: 10266325f;  */

void FUN_102663248(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x10))
            (*param_1 != 0,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    func_0x000107c61574();
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 102663260; end: 102663457;  */

void FUN_102663260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb2250,&UNK_10dac6d30);
  puVar1 = &UNK_11052f4d8;
  func_0x000107c613fc(&UNK_11052f4d8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102663458,puVar1);
  return;
}



/* Entry: 102663458; end: 102663473;  */

void FUN_102663458(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar4 = lStack_48;
  lVar1 = lStack_48;
  func_0x000107c4cbb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar1 != 0) {
    lVar4 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar4 != 0) {
      lVar1 = 0;
      func_0x000102662254();
      func_0x000107c613fc();
      puVar2 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar4);
      func_0x000107c453e4();
      *(long *)(lVar1 + 0x10) = lVar4;
      *(undefined **)(lVar1 + 0x18) = puVar2;
      func_0x0001000285a8(0x112eb2258,&UNK_10dac6d68);
      func_0x000107c613fc();
      uVar3 = 1;
      func_0x00010008747c();
      *(undefined8 *)(lVar1 + 0x20) = uVar3;
      func_0x000100083b20(&lStack_48);
      func_0x000100083b20(&uStack_50);
      func_0x000107c615e8(lVar4);
      lVar4 = 0;
      func_0x000102662fe8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x30) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x40) = 0;
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined8 *)(lVar4 + 0x48) = 0;
      *(long *)(lVar4 + 0x10) = lVar1;
      *(long *)(lVar4 + 0x18) = lStack_48;
      *(undefined8 *)(lVar4 + 0x20) = uStack_50;
      *param_1 = lVar4;
      param_1[1] = (long)&PTR_DAT_11052f390;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 102663474; end: 10266364f;  */

void FUN_102663474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb2260,&UNK_10dac6d70);
  puVar1 = &UNK_11052f5a8;
  func_0x000107c613fc(&UNK_11052f5a8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x102663554,puVar1);
  return;
}



/* Entry: 102663650; end: 10266365f;  */

undefined1  [16] FUN_102663650(void)

{
  return ZEXT816(0x11052f5d0);
}



/* Entry: 102663660; end: 1026636b3;  */

void FUN_102663660(void)

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



/* Entry: 1026636b4; end: 10266377f;  */

void FUN_1026636b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *param_2;
  func_0x0001000285a8(0x112eb2270,&UNK_10dac6dc0);
  puVar6 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec(puVar6);
  FUN_102663aa0(uVar7,uVar3,uVar1,uVar4,puVar6,uVar2,uVar5,uVar8);
  func_0x000107c61574(puVar6);
  func_0x000100082720("MapFootstepsOnboardingPresenterEntryPointProvider",0x31,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 102663780; end: 102663917;  */

undefined8 FUN_102663780(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_10266394c(param_1,param_2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return uVar1;
}



/* Entry: 102663918; end: 10266394b;  */

void FUN_102663918(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10266394c; end: 102663a7f;  */

void FUN_10266394c(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  puVar3 = PTR_PTR_1126a8b50;
  func_0x000107c610f8();
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102663a78);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      *(long *)(unaff_x20 + 0x28) = (long)param_1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102663a80);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102663a7c);
  (*pcVar1)();
}



/* Entry: 102663a80; end: 102663a9f;  */

void FUN_102663a80(void)

{
  func_0x000107c61168(&PTR_PTR_112eb22b8);
  return;
}



/* Entry: 102663aa0; end: 102663c67;  */

void FUN_102663aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb2330,&UNK_10dac6e40);
  puVar1 = &UNK_11052f6a0;
  func_0x000107c613fc(&UNK_11052f6a0,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_102663c68,puVar1);
  return;
}



/* Entry: 102663c68; end: 102663c7b;  */

void FUN_102663c68(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar8 = lVar1;
  func_0x000100083b20(&uStack_68);
  FUN_1026642a4();
  lVar9 = lVar8;
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x20) = uVar2;
  *(undefined8 *)(lVar9 + 0x28) = uVar5;
  *(long *)(lVar9 + 0x10) = lVar1;
  *(undefined8 *)(lVar9 + 0x18) = uVar6;
  *(undefined8 *)(lVar9 + 0x40) = uVar3;
  *(undefined8 *)(lVar9 + 0x48) = uStack_68;
  *(undefined8 *)(lVar9 + 0x30) = uVar7;
  *(undefined8 *)(lVar9 + 0x38) = uVar4;
  param_1[3] = lVar8;
  param_1[4] = (long)&PTR_DAT_11052f6b8;
  *param_1 = lVar9;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar7);
  return;
}



/* Entry: 102663c7c; end: 102663cf3;  */

void FUN_102663c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_8;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 102663cf4; end: 102663d0b;  */

void FUN_102663cf4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102663d0c,0,0);
  return;
}



/* Entry: 102663d0c; end: 1026640cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102663d0c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long unaff_x22;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uStack_68;
  long lStack_60;
  
  func_0x000100083b20(unaff_x22 + 0x30);
  lVar10 = *(long *)(unaff_x22 + 0x30);
  lVar4 = lVar10;
  func_0x000107c509b4();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x68) = lVar4;
  func_0x000107c615e8(lVar10);
  if (lVar4 != 0) {
    func_0x000100083b20(unaff_x22 + 0x38);
    lVar11 = *(long *)(unaff_x22 + 0x38);
    lVar10 = lVar11;
    func_0x000107c3e980();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    lVar11 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x70) = lVar11;
    func_0x000107c61170(lVar10);
    if (lVar11 != 0) {
      func_0x000100083b20(unaff_x22 + 0x40);
      puVar12 = *(undefined8 **)(unaff_x22 + 0x40);
      puVar5 = puVar12;
      func_0x000107c4c370();
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      puVar12 = puVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      *(undefined8 **)(unaff_x22 + 0x78) = puVar12;
      func_0x000107c61170(puVar5);
      if (puVar12 != (undefined8 *)0x0) {
        func_0x000100083b20(unaff_x22 + 0x10);
        lVar10 = *(long *)(unaff_x22 + 0x10);
        *(long *)(unaff_x22 + 0x80) = lVar10;
        if (lVar10 != 0) {
          lVar9 = *(long *)(unaff_x22 + 0x18);
          func_0x000100083b20(unaff_x22 + 0x48);
          uVar14 = *(undefined8 *)(unaff_x22 + 0x48);
          FUN_102663a80(0);
          func_0x000107c613fc();
          func_0x000107c615f0(puVar12);
          uVar6 = uVar14;
          puVar5 = puVar12;
          FUN_10266394c();
          *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
          func_0x000107c615e8(puVar12);
          func_0x000107c615e8(uVar14);
          func_0x000107c41050();
          func_0x000107c61180();
          if (lVar11 == 0) {
            lVar11 = 0;
            uVar14 = 0;
          }
          else {
            uStack_68 = 0;
            lStack_60 = 0;
            puVar5 = &uStack_68;
            func_0x000107c5fae8();
            func_0x000107c61170(lVar11);
            lVar11 = lStack_60;
            uVar14 = 0;
            if (lStack_60 != 0) {
              uVar14 = uStack_68;
            }
          }
          lVar15 = *(long *)(unaff_x22 + 0x60);
          func_0x000100083b20(unaff_x22 + 0x50);
          uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
          uVar1 = 0;
          if (lVar11 != 0) {
            uVar1 = uVar14;
          }
          lVar2 = -0x2000000000000000;
          if (lVar11 != 0) {
            lVar2 = lVar11;
          }
          func_0x000100083b20(unaff_x22 + 0x58);
          lVar11 = *(long *)(unaff_x22 + 0x58);
          uVar7 = *(undefined8 *)(lVar11 + _DAT_113083f78);
          func_0x000107c61174();
          func_0x000107c61170(lVar11);
          uVar14 = uVar7;
          func_0x000107c5d984();
          func_0x000107c61180();
          func_0x000107c61170(uVar7);
          uVar7 = uVar14;
          func_0x000107c5faec();
          func_0x000107c61170(uVar14);
          uVar14 = *(undefined8 *)(lVar15 + 0x48);
          lVar15 = 0;
          FUN_1026649dc();
          lVar11 = lVar15;
          func_0x000107c610f8();
          *(undefined1 *)(lVar11 + _DAT_112eb2448) = 1;
          *(undefined8 *)(lVar11 + _DAT_112eb2450) = 0;
          *(undefined8 *)(lVar11 + _DAT_112eb2458) = 0;
          *(undefined8 *)(lVar11 + _DAT_112eb2460) = 0;
          *(long *)(lVar11 + _DAT_112eb2410) = lVar4;
          plVar13 = (long *)(lVar11 + _DAT_112eb2418);
          *plVar13 = lVar10;
          plVar13[1] = lVar9;
          *(undefined8 *)(lVar11 + _DAT_112eb2420) = uVar16;
          puVar12 = (undefined8 *)(lVar11 + _DAT_112eb2428);
          *puVar12 = uVar1;
          puVar12[1] = lVar2;
          puVar12 = (undefined8 *)(lVar11 + _DAT_112eb2430);
          *puVar12 = uVar7;
          puVar12[1] = puVar5;
          *(undefined8 *)(lVar11 + _DAT_112eb2438) = uVar6;
          *(undefined8 *)(lVar11 + _DAT_112eb2440) = uVar14;
          plVar13 = (long *)(unaff_x22 + 0x20);
          *plVar13 = lVar11;
          *(long *)(unaff_x22 + 0x28) = lVar15;
          puVar3 = PTR_s_init_1125d9248;
          func_0x000107c6157c(uVar6);
          func_0x000107c615f0(lVar10);
          func_0x000107c615f0(lVar4);
          func_0x000107c615f0(uVar14);
          func_0x000107c61154(plVar13,puVar3);
          *(long **)(unaff_x22 + 0x90) = plVar13;
          plVar8 = (long *)0xa0;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x98) = plVar8;
          *plVar8 = unaff_x22;
          plVar8[1] = (long)FUN_1026640d0;
          plVar8[0x12] = (long)plVar13;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_1026642dc,0,0);
          return;
        }
        func_0x000107c615e8(puVar12);
      }
      func_0x000107c61170(lVar11);
    }
    func_0x000107c615e8(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000102663f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1026640d0; end: 10266411f;  */

void FUN_1026640d0(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xa0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102664120,0,0);
  return;
}



/* Entry: 102664120; end: 102664193;  */

void FUN_102664120(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar3);
  func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102664190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 102664194; end: 102664293;  */

void FUN_102664194(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102664294; end: 1026642a3;  */

undefined1  [16] FUN_102664294(void)

{
  return ZEXT816(0x11052f6d8);
}



/* Entry: 1026642a4; end: 1026642c3;  */

void FUN_1026642a4(void)

{
  func_0x000107c61168(&PTR_PTR_112eb2378);
  return;
}



/* Entry: 1026642c4; end: 1026642db;  */

void FUN_1026642c4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026642dc,0,0);
  return;
}



/* Entry: 1026642dc; end: 1026643cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026642dc(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x90);
  if (*(long *)(lVar5 + _DAT_112eb2458) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102664328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1026643cc;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,0);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112eb2418);
  uVar3 = *puVar1;
  lVar5 = puVar1[1];
  func_0x000107c614f0(uVar3);
  puVar4 = &UNK_11052f700;
  func_0x000107c613fc(&UNK_11052f700,0x18,7);
  *(long *)(puVar4 + 0x10) = lVar2;
  (**(code **)(lVar5 + 8))(FUN_102664c10,puVar4,uVar3,lVar5);
  func_0x000107c61574(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1026643cc; end: 10266440b;  */

void FUN_1026643cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10266440c,0,0);
  return;
}



/* Entry: 10266440c; end: 10266451f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266440c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x98) == '\x01') {
    lVar4 = *(long *)(unaff_x22 + 0x90);
    *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x98;
    *(long *)(unaff_x22 + 0x50) = unaff_x22;
    *(code **)(unaff_x22 + 0x58) = FUN_102664520;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c61448(lVar1,0);
    *(long *)(lVar4 + _DAT_112eb2460) = lVar1;
    puVar2 = &UNK_11052f728;
    func_0x000107c613fc(&UNK_11052f728,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar4;
    puVar3 = &UNK_11052f750;
    func_0x000107c613fc(&UNK_11052f750,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10dac6f40;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c61174(lVar4);
    func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10dac6f50,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010266451c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102664520; end: 10266455f;  */

void FUN_102664520(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102664560,0,0);
  return;
}



/* Entry: 102664560; end: 10266456b;  */

void FUN_102664560(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102664568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 10266456c; end: 1026645d7;  */

void FUN_10266456c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026645d8,uVar1,uVar2);
  return;
}



/* Entry: 1026645d8; end: 10266460b;  */

void FUN_1026645d8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  FUN_10266460c();
                    /* WARNING: Could not recover jumptable at 0x000102664608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10266460c; end: 10266488f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266460c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar6 = _DAT_112eb2460;
  lVar1 = _DAT_112eb2458;
  plVar7 = &lStack_70;
  if (*(long *)(unaff_x20 + _DAT_112eb2458) == 0) {
    puVar2 = PTR_PTR_1126aacf0;
    func_0x000107c610f8(PTR_PTR_1126aacf0);
    func_0x000107c453e4();
    puVar3 = PTR_PTR_1126aacf8;
    func_0x000107c610f8(PTR_PTR_1126aacf8);
    func_0x000107c453e4();
    func_0x000107c52168();
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112eb2428);
    func_0x000107c5fadc(uVar11,((undefined8 *)(unaff_x20 + _DAT_112eb2428))[1]);
    func_0x000107c52ae0(puVar3);
    func_0x000107c61170(uVar11);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112eb2430);
    func_0x000107c5fadc(uVar11,((undefined8 *)(unaff_x20 + _DAT_112eb2430))[1]);
    func_0x000107c5a344(puVar3);
    func_0x000107c61170(uVar11);
    puVar4 = PTR_PTR_1126aad00;
    func_0x000107c610f8();
    func_0x000107c49520();
    lVar5 = 0;
    FUN_102665170();
    lVar6 = lVar5;
    func_0x000107c610f8();
    *(undefined **)(lVar6 + _DAT_112eb2490) = puVar4;
    puVar8 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_70 = lVar6;
    lStack_68 = lVar5;
    func_0x000107c61174(puVar4);
    func_0x000107c61154(&lStack_70,puVar8,0,0);
    func_0x000107c61180();
    func_0x000107c53dec();
    FUN_102664e58();
    puVar8 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    func_0x000107c61170(plVar7);
    func_0x000107c52684(puVar8);
    func_0x000107c5a074(puVar8);
    func_0x000107c52aa4(puVar8);
    puVar9 = *(undefined **)(unaff_x20 + _DAT_112eb2440);
    puVar10 = puVar9;
    if (puVar9 == (undefined *)0x0) {
      uVar11 = *(undefined8 *)PTR__UIWindowLevelAlert_110345e80;
      puVar10 = PTR_PTR_1126b1c10;
      func_0x000107c610f8(PTR_PTR_1126b1c10);
      func_0x000107c495dc(uVar11);
      puVar9 = (undefined *)0x0;
    }
    func_0x000107c615f0(puVar9);
    func_0x000107c4ef3c(0x3fe0000000000000,puVar8);
    func_0x000107c615e8(puVar10);
    func_0x0001026637e0();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112eb2450);
    *(long **)(unaff_x20 + _DAT_112eb2450) = plVar7;
    func_0x000107c61170(uVar11);
    uVar11 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar8;
    func_0x000107c61170(uVar11);
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_112eb2460) != 0) {
      **(undefined1 **)(*(long *)(*(long *)(unaff_x20 + _DAT_112eb2460) + 0x40) + 0x28) = 0;
      func_0x000107c6144c();
    }
    *(undefined8 *)(unaff_x20 + lVar6) = 0;
  }
  return;
}



/* Entry: 102664890; end: 1026648cb;  */

void FUN_102664890(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026648c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026648cc; end: 10266492b; -[_TtC36MapFootstepsOnboardingImplementation28MapFootstepsOnboardingPrompt init] */

void FUN_1026648cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFootstepsOnboardingImplementation.MapFootstepsOnboardingPrompt",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026648f8);
  (*pcVar1)();
}



/* Entry: 10266492c; end: 1026649db; -[_TtC36MapFootstepsOnboardingImplementation28MapFootstepsOnboardingPrompt .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102664968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026649c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010266496c) */
/* WARNING: Removing unreachable block (ram,0x0001026649c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266492c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eb2410));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eb2418));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb2420));
  return;
}



/* Entry: 1026649dc; end: 1026649fb;  */

void FUN_1026649dc(void)

{
  func_0x000107c61168(&PTR_PTR_112855ff0);
  return;
}



/* Entry: 1026649fc; end: 102664a4f; -[_TtC36MapFootstepsOnboardingImplementation28MapFootstepsOnboardingPrompt tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x000102664a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102664a3c) */

void FUN_1026649fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000102664b9c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


