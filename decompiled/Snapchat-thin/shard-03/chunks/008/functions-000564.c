/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102dc37cc; end: 102dc37d3;  */

undefined * FUN_102dc37cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c56ba8();
  func_0x000107c5a100(puVar1,param_2,0x17);
  func_0x000107c5a050(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c444ac();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5381c(0x437a0000,puVar1,param_2,0);
  return puVar1;
}



/* Entry: 102dc37d4; end: 102dc3acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc37d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_78 [8];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112f185a0;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f185a8) = 0;
  lVar3 = _DAT_112f185b0;
  lVar5 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(unaff_x20 + lVar3,1,1,lVar5);
  puVar1 = (undefined4 *)(unaff_x20 + _DAT_112f185b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f185c0) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f185c8);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112f185d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f185d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f185e0) = 0;
  lVar3 = _DAT_112f185e8;
  puVar6 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  *(undefined1 *)(unaff_x20 + _DAT_112f185f0) = 0;
  *(undefined **)(unaff_x20 + _DAT_112f185f8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(unaff_x20 + _DAT_112f18600) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f18608) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f18610) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f18618) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f18620) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f18628) = param_6;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f18630);
  *puVar2 = param_7;
  puVar2[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f18638) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f18640) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112f18648) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f18650) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f18658) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112f18660) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112f18668) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112f18670) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112f18678) = param_17;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f18680);
  *puVar2 = param_18;
  puVar2[1] = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112f18688) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112f18690) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112f18698) = param_22;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102dc3acc; end: 102dc3c17;  */

/* WARNING: Possible PIC construction at 0x000102dc3b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc3bd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc3bd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc3acc(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  long *plVar7;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112f18668);
  if (uVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      FUN_102dc4030();
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(unaff_x20 + _DAT_112f18610);
        if (lVar3 != 0) {
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar3 != 0) {
            func_0x000107c3d740();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
            return;
          }
        }
        FUN_102dc42a0();
        plVar7 = *(long **)(unaff_x20 + _DAT_112f18678);
        puVar4 = &UNK_1105d1958;
        func_0x000107c613fc(&UNK_1105d1958,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        pcVar5 = FUN_102dc4570;
        puVar6 = puVar4;
        (**(code **)(*plVar7 + 0x60))(FUN_102dc4570);
        func_0x000107c61574(puVar4);
        func_0x000107c614f0(pcVar5);
        (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f185a0),pcVar5,puVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
  }
  return;
}



/* Entry: 102dc3c18; end: 102dc3c3b;  */

void FUN_102dc3c18(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dc3c3c; end: 102dc3dcb;  */

undefined1  [16] FUN_102dc3c3c(long param_1,long param_2,char param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == '\0') {
    func_0x000107c602fc(0x28);
    func_0x000107c6142c(0xe000000000000000);
    uStack_40 = 0xd000000000000026;
    uStack_38 = 0x800000010f0a6b70;
  }
  else {
    if (param_3 != '\x01') {
      uStack_40 = 0xd000000000000022;
      uStack_38 = 0x800000010f0a6b40;
      if (param_2 != 0 || param_1 != 0) {
        uStack_40 = 0x206e776f6e6b6e55;
        uStack_38 = 0xed0000726f727265;
      }
      goto LAB_102dc3d3c;
    }
    uStack_40 = 0x206f4e;
    uStack_38 = 0xe300000000000000;
    func_0x000107c5fb78();
    param_1 = 0x62616c6961766120;
    param_2 = -0x15ffffffffff9a94;
  }
  func_0x000107c5fb78(param_1,param_2);
LAB_102dc3d3c:
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = uStack_40;
  return auVar1;
}



/* Entry: 102dc3dcc; end: 102dc3e63; -[_TtC27FriendingInteractivePopover35FriendingInteractivePopoverWorkflow dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc3dcc(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112f18610);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4ff64();
      func_0x000107c615e8(lVar2);
    }
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102dc3e64; end: 102dc402f; -[_TtC27FriendingInteractivePopover35FriendingInteractivePopoverWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc3e64(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18600));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18608));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18610));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f185a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18618));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18620));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18628));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f18630 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18638));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18640));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18648));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18650));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18658));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f18660));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18668));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f18670));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18690));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f18678));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f18698));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f185a8));
  FUN_102dca630(param_1 + _DAT_112f185b0,0x112d373d8,&UNK_10d9014c0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f185c0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f18680));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f18688));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f185e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f185f8));
  return;
}



/* Entry: 102dc4030; end: 102dc429f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102dc4030(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  uVar2 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f10dc00);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (param_2 == 0) {
    (**(code **)(lVar9 + 0x38))(puVar6,1,1,lVar1);
  }
  else {
    uVar2 = 0x112d373e8;
    lStack_68 = param_2;
    func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
    puVar3 = puVar6;
    func_0x000107c6147c(puVar6,&lStack_68,uVar2,lVar1,6);
    (**(code **)(lVar9 + 0x38))(puVar6,(uint)puVar3 ^ 1,1,lVar1);
    puVar3 = puVar6;
    (**(code **)(lVar9 + 0x30))(puVar6,1,lVar1);
    if ((int)puVar3 != 1) {
      (**(code **)(lVar9 + 0x20))(lVar8,puVar6,lVar1);
      lVar4 = *(long *)(unaff_x20 + _DAT_112f18670);
      func_0x000108c07b90();
      func_0x000107c5eea0(lVar7);
      func_0x000107c5ee68(lVar8);
      pcVar5 = *(code **)(lVar9 + 8);
      (*pcVar5)(lVar7,lVar1);
      (*pcVar5)(lVar8,lVar1);
      if (SUB168(SEXT816(lVar4) * SEXT816(0x18),8) != lVar4 * 0x18 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102dc4298);
        (*pcVar5)();
      }
      if (SUB168(SEXT816(lVar4 * 0x18) * SEXT816(0x3c),8) == lVar4 * 0x5a0 >> 0x3f) {
        if (SUB168(SEXT816(lVar4 * 0x5a0) * SEXT816(0x3c),8) == lVar4 * 0x15180 >> 0x3f) {
          return (double)(lVar4 * 0x15180) <= param_1;
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102dc42a0);
        (*pcVar5)();
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102dc429c);
      (*pcVar5)();
    }
  }
  FUN_102dca630(puVar6,0x112d373d8,&UNK_10d9014c0);
  return true;
}



/* Entry: 102dc42a0; end: 102dc456f;  */

/* WARNING: Possible PIC construction at 0x000102dc43d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc4518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc4528: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc451c) */
/* WARNING: Removing unreachable block (ram,0x000102dc43dc) */
/* WARNING: Removing unreachable block (ram,0x000102dc43ec) */
/* WARNING: Removing unreachable block (ram,0x000102dc443c) */
/* WARNING: Removing unreachable block (ram,0x000102dc4440) */
/* WARNING: Removing unreachable block (ram,0x000102dc452c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc42a0(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_70 + -extraout_x8;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f18668);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_112f18600);
      if (lVar2 != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar2 != 0) {
          func_0x000107c5eea0(puVar3);
          lVar2 = 0;
          func_0x000107c5eea4();
          (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,0,1,lVar2);
          lVar2 = _DAT_112f185b0;
          func_0x000107c61428(unaff_x20 + _DAT_112f185b0,auStack_68,0x21,0);
          func_0x000100ed9cbc(puVar3,unaff_x20 + lVar2);
          func_0x000107c614a8(auStack_68);
          lVar2 = -0x2fffffffffffffca;
          func_0x000107c5fadc(0xd000000000000036,0x800000010f10dc30);
          func_0x000107c4d9c0(lVar1);
          func_0x000107c61180();
          lVar1 = lVar2;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 102dc4570; end: 102dc45a7;  */

void FUN_102dc4570(void)

{
  func_0x000100876f7c(FUN_102dc45a8,0,FUN_102dc99b8);
  return;
}



/* Entry: 102dc45a8; end: 102dc45ab;  */

void FUN_102dc45a8(void)

{
  return;
}



/* Entry: 102dc45ac; end: 102dc4693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc45ac(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar4 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    puVar1 = (undefined4 *)(lVar4 + _DAT_112f185b8);
    *puVar1 = *(undefined4 *)(param_1 + _DAT_11307d738);
    *(undefined1 *)(puVar1 + 1) = 0;
    func_0x000107c61170();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  lVar4 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(lVar4 + _DAT_112f18680);
    lVar3 = ((undefined8 *)(lVar4 + _DAT_112f18680))[1];
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c614f0(uVar2);
    FUN_102dc4694(param_2);
    (**(code **)(lVar3 + 0x10))();
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 102dc4694; end: 102dc4777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102dc4694(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + _DAT_112f185b8);
    iVar2 = ((int *)(param_1 + _DAT_112f185b8))[1];
    func_0x000107c61170();
    if ((char)iVar2 != '\x01') {
      if (iVar1 == 1) {
        uVar4 = 0xe600000000000000;
        uVar3 = 0x6172656d6163;
        goto LAB_102dc46fc;
      }
      if (iVar1 == 7) {
        uVar4 = 0xec00000064656546;
        uVar3 = 0x7265766f63736964;
        goto LAB_102dc46fc;
      }
      if (iVar1 == 6) {
        uVar4 = 0xeb00000000646565;
        uVar3 = 0x4673646e65697266;
        goto LAB_102dc46fc;
      }
    }
  }
  uVar4 = 0xe700000000000000;
  uVar3 = 0x6e776f6e6b6e75;
LAB_102dc46fc:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 102dc4778; end: 102dc482b;  */

void FUN_102dc4778(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long alStack_48 [3];
  
  uVar3 = *param_1;
  alStack_48[0] = 0;
  uVar2 = 0;
  func_0x000102dca5e8(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c5fc50(uVar3,alStack_48,uVar2);
  lVar1 = alStack_48[0];
  if (alStack_48[0] != 0) {
    func_0x000107c61428(param_2 + 0x10,alStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c6142c(lVar1);
    }
    else {
      FUN_102dc482c(lVar1,param_3);
      func_0x000107c6142c(lVar1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 102dc482c; end: 102dc4cc3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc482c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  long unaff_x20;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *apuStack_78 [3];
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  uVar21 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar18 = *(ulong *)(uVar21 + 0x10);
  }
  else {
    uVar18 = uVar21;
    if (0x7fffffffffffffff < param_1) {
      uVar18 = param_1;
    }
    func_0x000107c60480();
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar18 != 0) {
    uVar20 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar21 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102dc4988);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(param_1 + uVar20 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar20;
          func_0x00010103193c(uVar20,param_1);
        }
        uVar1 = uVar20 + 1;
        if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102dc4984);
          (*pcVar2)();
        }
        uVar5 = uVar4;
        FUN_102dc4cc4(uVar4,param_2);
        if ((uVar5 & 1) != 0) break;
        func_0x000107c61170(uVar4);
        uVar20 = uVar20 + 1;
        if (uVar1 == uVar18) goto joined_r0x000102dc4978;
      }
      puVar15 = puVar8;
      func_0x000107c61558();
      apuStack_78[0] = puVar8;
      if (((ulong)puVar15 & 1) == 0) {
        func_0x0001010673e4(0,*(long *)(puVar8 + 0x10) + 1,1);
      }
      uVar20 = *(ulong *)(apuStack_78[0] + 0x10);
      if (*(ulong *)(apuStack_78[0] + 0x18) >> 1 <= uVar20) {
        func_0x0001010673e4(1 < *(ulong *)(apuStack_78[0] + 0x18),uVar20 + 1,1);
      }
      *(ulong *)(apuStack_78[0] + 0x10) = uVar20 + 1;
      *(ulong *)(apuStack_78[0] + uVar20 * 8 + 0x20) = uVar4;
      uVar20 = uVar1;
      puVar8 = apuStack_78[0];
    } while (uVar1 != uVar18);
  }
joined_r0x000102dc4978:
  if (((long)puVar8 < 0) || (((ulong)puVar8 >> 0x3e & 1) != 0)) {
    puVar15 = puVar8;
    func_0x000107c60480();
  }
  else {
    puVar15 = *(undefined **)(puVar8 + 0x10);
  }
  if (puVar15 == (undefined *)0x0) {
    func_0x000107c61574(puVar8);
  }
  else {
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      if (*(long *)(puVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102dc4cc4);
        (*pcVar2)();
      }
      lVar6 = *(long *)(puVar8 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar6 = 0;
      func_0x00010103193c(0,puVar8);
    }
    func_0x000107c61574(puVar8);
    lVar7 = lVar6;
    func_0x000107c452e8();
    func_0x000107c61180();
    lVar10 = _DAT_112f185f8;
    if (lVar7 != 0) {
      func_0x000107c61428(unaff_x20 + _DAT_112f185f8,apuStack_78,1,0);
      if (*(long *)(*(long *)(unaff_x20 + lVar10) + 0x10) != 0) {
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        FUN_102dc99c8();
        uVar16 = *(undefined8 *)(unaff_x20 + lVar10);
        *(undefined **)(unaff_x20 + lVar10) = puVar8;
        func_0x000107c6142c(uVar16);
      }
      uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112f18680);
      lVar10 = ((undefined8 *)(unaff_x20 + _DAT_112f18680))[1];
      lVar9 = lVar7;
      func_0x000107c49df0();
      func_0x000107c614f0();
      uVar17 = 1;
      if ((int)lVar9 != 0) {
        uVar17 = 2;
      }
      (**(code **)(lVar10 + 0x28))(uVar17,uVar16,lVar10);
      lVar10 = lVar6;
      func_0x000107c42120();
      func_0x000107c61180();
      if (lVar10 != 0) {
        lVar9 = lVar10;
        func_0x000107c5faec();
        uVar13 = uVar16;
        func_0x000107c61170(lVar10);
        lVar10 = lVar6;
        func_0x000107c5db08();
        func_0x000107c61180();
        if (lVar10 != 0) {
          lVar11 = lVar10;
          func_0x000107c5faec();
          uVar14 = uVar13;
          func_0x000107c61170(lVar10);
          lVar10 = lVar6;
          func_0x000107c5d984();
          func_0x000107c61180();
          if (lVar10 == 0) {
            func_0x000107c6142c(uVar16);
            uVar16 = uVar13;
          }
          else {
            lVar12 = lVar10;
            func_0x000107c5faec();
            func_0x000107c61170(lVar10);
            uVar19 = *(undefined8 *)(unaff_x20 + _DAT_112f185e8);
            func_0x000107c4b940(uVar19);
            if ((*(byte *)(unaff_x20 + _DAT_112f185f0) & 1) == 0) {
              *(undefined1 *)(unaff_x20 + _DAT_112f185f0) = 1;
              func_0x000107c5d278(uVar19);
              puVar8 = &UNK_1105d1ac0;
              func_0x000107c613fc(&UNK_1105d1ac0,0x60,7);
              *(long *)(puVar8 + 0x10) = unaff_x20;
              *(long *)(puVar8 + 0x18) = lVar6;
              *(long *)(puVar8 + 0x20) = lVar12;
              *(undefined8 *)(puVar8 + 0x28) = uVar14;
              *(long *)(puVar8 + 0x30) = lVar9;
              *(undefined8 *)(puVar8 + 0x38) = uVar16;
              *(long *)(puVar8 + 0x40) = lVar11;
              *(undefined8 *)(puVar8 + 0x48) = uVar13;
              *(long *)(puVar8 + 0x50) = lVar7;
              *(long *)(puVar8 + 0x58) = lVar3;
              func_0x000107c61174(unaff_x20);
              func_0x000107c61174(lVar6);
              func_0x000107c61174(lVar7);
              uVar16 = 2;
              func_0x0001001ca524(2,2,0x34,4,0,0,&UNK_10db4f038,puVar8,PTR___sytN_11034f1b0 + 8);
              func_0x000107c61170(lVar6);
              func_0x000107c61170(lVar7);
              func_0x000107c61574(puVar8);
              func_0x000107c61574(uVar16);
              return;
            }
            func_0x000107c5d278(uVar19);
            func_0x000107c6142c(uVar16);
            func_0x000107c6142c(uVar13);
            uVar16 = uVar14;
          }
        }
        func_0x000107c6142c(uVar16);
      }
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar6);
      return;
    }
    func_0x000107c61170(lVar6);
  }
  lVar3 = _DAT_112f185f8;
  func_0x000107c61428(unaff_x20 + _DAT_112f185f8,apuStack_78,1,0);
  if (*(long *)(*(long *)(unaff_x20 + lVar3) + 0x10) != 0) {
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102dc99c8();
    uVar16 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined **)(unaff_x20 + lVar3) = puVar8;
    func_0x000107c6142c(uVar16);
  }
  return;
}



/* Entry: 102dc4cc4; end: 102dc57d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102dc4cc4(double param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long extraout_x12;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  code *pcVar18;
  undefined1 auStack_c0 [8];
  code *pcStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar16 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar3 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar3 - extraout_x12;
  uVar17 = param_2;
  func_0x000107c452e8();
  func_0x000107c61180();
  uVar10 = 0;
  if (uVar17 == 0) goto LAB_102dc54dc;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f18680);
  lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112f18680))[1];
  uVar2 = uVar17;
  uStack_a8 = param_3;
  func_0x000107c49df0();
  uVar14 = uVar10;
  func_0x000107c614f0();
  uVar8 = 1;
  if ((int)uVar2 != 0) {
    uVar8 = 2;
  }
  uVar2 = (ulong)uVar8;
  uStack_98 = uVar14;
  (**(code **)(lVar7 + 0x28))(uVar2,uVar14,lVar7);
  func_0x000103e709ec();
  if (((uVar2 & 1) == 0) && (uVar2 = uVar17, func_0x000107c49eb8(), (int)uVar2 == 0)) {
    uVar2 = param_2;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (uVar2 == 0) {
      uVar5 = 0;
      uVar14 = 0;
    }
    else {
      uVar5 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
    }
    (**(code **)(lVar7 + 0x38))(0x40,uVar5,uVar14,uStack_98,lVar7);
    func_0x000107c6142c(uVar14);
    func_0x000107c5db08();
    func_0x000107c61180();
    if (param_2 == 0) {
      uVar2 = 0;
      uVar5 = 0xe000000000000000;
    }
    else {
      uVar2 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
    }
    lVar6 = _DAT_112f185f8;
    puVar3 = auStack_88;
    func_0x000107c61428(unaff_x20 + _DAT_112f185f8,puVar3,0x21,0);
    uVar9 = *(ulong *)(unaff_x20 + lVar6);
    func_0x000107c61558();
    uVar8 = (uint)uVar9;
    lVar1 = *(long *)(unaff_x20 + lVar6);
    *(undefined8 *)(unaff_x20 + lVar6) = 0x8000000000000000;
    uVar4 = 0;
    lStack_90 = lVar1;
    FUN_102dc91ec();
    uVar13 = (ulong)~(uint)puVar3 & 1;
    if (SCARRY8(*(long *)(lVar1 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x102dc56c4);
      (*pcVar18)();
    }
    if (*(long *)(lVar1 + 0x18) < (long)(*(long *)(lVar1 + 0x10) + uVar13)) {
      FUN_102dc94dc();
      lVar1 = lStack_90;
      uVar4 = 0;
      FUN_102dc91ec();
      if (((uint)puVar3 & 1) != (uVar8 & 1)) {
LAB_102dc57c8:
        func_0x000107c60624(&UNK_1105d1f68);
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x102dc57d8);
        (*pcVar18)();
      }
      *(long *)(unaff_x20 + lVar6) = lVar1;
    }
    else if ((uVar9 & 1) == 0) {
      FUN_102dc9380();
      *(long *)(unaff_x20 + lVar6) = lStack_90;
      lVar1 = lStack_90;
    }
    else {
      *(long *)(unaff_x20 + lVar6) = lVar1;
    }
    if (((ulong)puVar3 & 1) == 0) {
      lVar6 = lVar1 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(undefined1 *)(*(long *)(lVar1 + 0x30) + uVar4) = 0;
      *(undefined **)(*(long *)(lVar1 + 0x38) + uVar4 * 8) = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (SCARRY8(*(long *)(lVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x102dc5790);
        (*pcVar18)();
      }
      *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
    }
    lVar1 = *(long *)(lVar1 + 0x38);
    uVar12 = *(ulong *)(lVar1 + uVar4 * 8);
    uVar9 = uVar12;
    func_0x000107c61558();
    *(ulong *)(lVar1 + uVar4 * 8) = uVar12;
    uVar13 = uVar12;
    if ((uVar9 & 1) == 0) {
      uVar13 = 0;
      func_0x0001000d182c(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *(ulong *)(lVar1 + uVar4 * 8) = uVar13;
    }
    uVar9 = *(ulong *)(uVar13 + 0x10);
    uVar12 = uVar13;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar9) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
      func_0x0001000d182c(uVar12,uVar9 + 1,1,uVar13);
      *(ulong *)(lVar1 + uVar4 * 8) = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar9 + 1;
    lVar1 = uVar12 + uVar9 * 0x10;
    *(ulong *)(lVar1 + 0x20) = uVar2;
    *(ulong *)(lVar1 + 0x28) = uVar5;
    func_0x000107c614a8(auStack_88);
    func_0x000107c61170(uVar17);
    uVar10 = 0;
    goto LAB_102dc54dc;
  }
  uVar2 = uVar17;
  uStack_a0 = uVar10;
  func_0x000107c45220();
  lVar11 = *(long *)(unaff_x20 + _DAT_112f18670);
  lVar15 = lVar11;
  func_0x000108c07c08();
  if ((long)uVar2 < lVar15) {
    uStack_b0 = uVar17;
    func_0x000107c3d958(uVar17);
    func_0x000107c5ee88(lVar6);
    func_0x000108c07bcc();
    func_0x000107c5eea0(puVar3);
    func_0x000107c5ee68(lVar6);
    pcVar18 = *(code **)(lVar16 + 8);
    lVar16 = lVar1;
    (*pcVar18)(puVar3,lVar1);
    if (SUB168(SEXT816(lVar11) * SEXT816(0x18),8) != lVar11 * 0x18 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x102dc566c);
      (*pcVar18)();
    }
    if (SUB168(SEXT816(lVar11 * 0x18) * SEXT816(0x3c),8) != lVar11 * 0x5a0 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x102dc5674);
      (*pcVar18)();
    }
    if (SUB168(SEXT816(lVar11 * 0x5a0) * SEXT816(0x3c),8) != lVar11 * 0x15180 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x102dc56c0);
      (*pcVar18)();
    }
    if (param_1 <= (double)(lVar11 * 0x15180)) {
      func_0x000103e709ec();
      if (((ulong)puVar3 & 1) != 0) {
LAB_102dc4fc0:
        (*pcVar18)(lVar6,lVar1);
        func_0x000107c61170(uStack_b0);
        uVar10 = 1;
        goto LAB_102dc54dc;
      }
      uVar17 = param_2;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar17 == 0) goto LAB_102dc4fc0;
      uVar2 = uVar17;
      func_0x000107c5faec();
      func_0x000107c61170(uVar17);
      lVar15 = lVar16;
      func_0x000100077018(uVar2,lVar16,uStack_a8);
      func_0x000107c6142c(lVar16);
      if ((uVar2 & 1) == 0) goto LAB_102dc4fc0;
      uVar17 = param_2;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar17 == 0) {
        uVar2 = 0;
        lVar15 = 0;
      }
      else {
        uVar2 = uVar17;
        func_0x000107c5faec();
        func_0x000107c61170(uVar17);
      }
      (**(code **)(lVar7 + 0x38))(0x43,uVar2,lVar15,uStack_98,lVar7);
      func_0x000107c6142c(lVar15);
      func_0x000107c5db08();
      func_0x000107c61180();
      if (param_2 == 0) {
        uVar17 = 0;
        uVar2 = 0xe000000000000000;
        pcStack_b8 = pcVar18;
      }
      else {
        uVar17 = param_2;
        pcStack_b8 = pcVar18;
        func_0x000107c5faec();
        func_0x000107c61170(param_2);
      }
      lVar7 = _DAT_112f185f8;
      puVar3 = auStack_88;
      func_0x000107c61428(unaff_x20 + _DAT_112f185f8,puVar3,0x21,0);
      uVar4 = *(ulong *)(unaff_x20 + lVar7);
      func_0x000107c61558();
      uVar8 = (uint)uVar4;
      lVar16 = *(long *)(unaff_x20 + lVar7);
      *(undefined8 *)(unaff_x20 + lVar7) = 0x8000000000000000;
      uVar5 = 3;
      lStack_90 = lVar16;
      FUN_102dc91ec();
      uVar9 = (ulong)~(uint)puVar3 & 1;
      if (SCARRY8(*(long *)(lVar16 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x102dc57b0);
        (*pcVar18)();
      }
      if (*(long *)(lVar16 + 0x18) < (long)(*(long *)(lVar16 + 0x10) + uVar9)) {
        FUN_102dc94dc();
        lVar16 = lStack_90;
        uVar5 = 3;
        FUN_102dc91ec();
        if (((uint)puVar3 & 1) != (uVar8 & 1)) goto LAB_102dc57c8;
        *(long *)(unaff_x20 + lVar7) = lVar16;
        if (((ulong)puVar3 & 1) == 0) goto LAB_102dc5620;
        goto LAB_102dc5480;
      }
      if ((uVar4 & 1) == 0) {
        FUN_102dc9380();
        *(long *)(unaff_x20 + lVar7) = lStack_90;
        lVar16 = lStack_90;
      }
      else {
        *(long *)(unaff_x20 + lVar7) = lVar16;
      }
      if (((ulong)puVar3 & 1) != 0) goto LAB_102dc5480;
LAB_102dc5620:
      lVar7 = lVar16 + (uVar5 >> 6) * 8;
      *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(undefined1 *)(*(long *)(lVar16 + 0x30) + uVar5) = 3;
      *(undefined **)(*(long *)(lVar16 + 0x38) + uVar5 * 8) = PTR___swiftEmptyArrayStorage_11034f1c8
      ;
      lVar7 = *(long *)(lVar16 + 0x10);
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x102dc5668);
        (*pcVar18)();
      }
LAB_102dc547c:
      *(long *)(lVar16 + 0x10) = lVar7 + 1;
    }
    else {
      uVar17 = param_2;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar17 == 0) {
        uVar2 = 0;
        lVar16 = 0;
      }
      else {
        uVar2 = uVar17;
        func_0x000107c5faec();
        func_0x000107c61170(uVar17);
      }
      (**(code **)(lVar7 + 0x38))(0x42,uVar2,lVar16,uStack_98,lVar7);
      func_0x000107c6142c(lVar16);
      func_0x000107c5db08();
      func_0x000107c61180();
      if (param_2 == 0) {
        uVar17 = 0;
        uVar2 = 0xe000000000000000;
        pcStack_b8 = pcVar18;
      }
      else {
        uVar17 = param_2;
        pcStack_b8 = pcVar18;
        func_0x000107c5faec();
        func_0x000107c61170(param_2);
      }
      lVar7 = _DAT_112f185f8;
      puVar3 = auStack_88;
      func_0x000107c61428(unaff_x20 + _DAT_112f185f8,puVar3,0x21,0);
      uVar4 = *(ulong *)(unaff_x20 + lVar7);
      func_0x000107c61558();
      uVar8 = (uint)uVar4;
      lVar16 = *(long *)(unaff_x20 + lVar7);
      *(undefined8 *)(unaff_x20 + lVar7) = 0x8000000000000000;
      uVar5 = 2;
      lStack_90 = lVar16;
      FUN_102dc91ec();
      uVar9 = (ulong)~(uint)puVar3 & 1;
      if (SCARRY8(*(long *)(lVar16 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x102dc5774);
        (*pcVar18)();
      }
      if ((long)(*(long *)(lVar16 + 0x10) + uVar9) <= *(long *)(lVar16 + 0x18)) {
        if ((uVar4 & 1) == 0) {
          FUN_102dc9380();
          *(long *)(unaff_x20 + lVar7) = lStack_90;
          lVar16 = lStack_90;
          goto joined_r0x000102dc57a0;
        }
        *(long *)(unaff_x20 + lVar7) = lVar16;
        if (((ulong)puVar3 & 1) != 0) goto LAB_102dc5480;
LAB_102dc5438:
        lVar7 = lVar16 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
        *(undefined1 *)(*(long *)(lVar16 + 0x30) + uVar5) = 2;
        *(undefined **)(*(long *)(lVar16 + 0x38) + uVar5 * 8) =
             PTR___swiftEmptyArrayStorage_11034f1c8;
        lVar7 = *(long *)(lVar16 + 0x10);
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x102dc57ac);
          (*pcVar18)();
        }
        goto LAB_102dc547c;
      }
      FUN_102dc94dc();
      lVar16 = lStack_90;
      uVar5 = 2;
      FUN_102dc91ec();
      if (((uint)puVar3 & 1) != (uVar8 & 1)) goto LAB_102dc57c8;
      *(long *)(unaff_x20 + lVar7) = lVar16;
joined_r0x000102dc57a0:
      if (((ulong)puVar3 & 1) == 0) goto LAB_102dc5438;
    }
LAB_102dc5480:
    lVar16 = *(long *)(lVar16 + 0x38);
    uVar13 = *(ulong *)(lVar16 + uVar5 * 8);
    uVar4 = uVar13;
    func_0x000107c61558();
    *(ulong *)(lVar16 + uVar5 * 8) = uVar13;
    uVar9 = uVar13;
    if ((uVar4 & 1) == 0) {
      uVar9 = 0;
      func_0x0001000d182c(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
      *(ulong *)(lVar16 + uVar5 * 8) = uVar9;
    }
    uVar4 = *(ulong *)(uVar9 + 0x10);
    uVar13 = uVar9;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar4) {
      uVar13 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
      func_0x0001000d182c(uVar13,uVar4 + 1,1,uVar9);
      *(ulong *)(lVar16 + uVar5 * 8) = uVar13;
    }
    *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
    lVar16 = uVar13 + uVar4 * 0x10;
    *(ulong *)(lVar16 + 0x20) = uVar17;
    *(ulong *)(lVar16 + 0x28) = uVar2;
    func_0x000107c614a8(auStack_88);
    func_0x000107c61170(uStack_b0);
    (*pcStack_b8)(lVar6,lVar1);
  }
  else {
    uVar2 = param_2;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (uVar2 == 0) {
      uVar5 = 0;
      uVar14 = 0;
    }
    else {
      uVar5 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
    }
    (**(code **)(lVar7 + 0x38))(0x41,uVar5,uVar14,uStack_98,lVar7);
    func_0x000107c6142c(uVar14);
    func_0x000107c5db08();
    func_0x000107c61180();
    if (param_2 == 0) {
      uVar2 = 0;
      uVar5 = 0xe000000000000000;
    }
    else {
      uVar2 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
    }
    lVar6 = _DAT_112f185f8;
    puVar3 = auStack_88;
    func_0x000107c61428(unaff_x20 + _DAT_112f185f8,puVar3,0x21,0);
    uVar9 = *(ulong *)(unaff_x20 + lVar6);
    func_0x000107c61558();
    uVar8 = (uint)uVar9;
    lVar1 = *(long *)(unaff_x20 + lVar6);
    *(undefined8 *)(unaff_x20 + lVar6) = 0x8000000000000000;
    uVar4 = 1;
    lStack_90 = lVar1;
    FUN_102dc91ec();
    uVar13 = (ulong)~(uint)puVar3 & 1;
    if (SCARRY8(*(long *)(lVar1 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x102dc5670);
      (*pcVar18)();
    }
    if (*(long *)(lVar1 + 0x18) < (long)(*(long *)(lVar1 + 0x10) + uVar13)) {
      FUN_102dc94dc();
      lVar1 = lStack_90;
      uVar4 = 1;
      FUN_102dc91ec();
      if (((uint)puVar3 & 1) != (uVar8 & 1)) goto LAB_102dc57c8;
      *(long *)(unaff_x20 + lVar6) = lVar1;
    }
    else if ((uVar9 & 1) == 0) {
      FUN_102dc9380();
      *(long *)(unaff_x20 + lVar6) = lStack_90;
      lVar1 = lStack_90;
    }
    else {
      *(long *)(unaff_x20 + lVar6) = lVar1;
    }
    if (((ulong)puVar3 & 1) == 0) {
      lVar6 = lVar1 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(undefined1 *)(*(long *)(lVar1 + 0x30) + uVar4) = 1;
      *(undefined **)(*(long *)(lVar1 + 0x38) + uVar4 * 8) = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (SCARRY8(*(long *)(lVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x102dc5770);
        (*pcVar18)();
      }
      *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
    }
    lVar1 = *(long *)(lVar1 + 0x38);
    uVar12 = *(ulong *)(lVar1 + uVar4 * 8);
    uVar9 = uVar12;
    func_0x000107c61558();
    *(ulong *)(lVar1 + uVar4 * 8) = uVar12;
    uVar13 = uVar12;
    if ((uVar9 & 1) == 0) {
      uVar13 = 0;
      func_0x0001000d182c(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *(ulong *)(lVar1 + uVar4 * 8) = uVar13;
    }
    uVar9 = *(ulong *)(uVar13 + 0x10);
    uVar12 = uVar13;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar9) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
      func_0x0001000d182c(uVar12,uVar9 + 1,1,uVar13);
      *(ulong *)(lVar1 + uVar4 * 8) = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar9 + 1;
    lVar1 = uVar12 + uVar9 * 0x10;
    *(ulong *)(lVar1 + 0x20) = uVar2;
    *(ulong *)(lVar1 + 0x28) = uVar5;
    func_0x000107c614a8(auStack_88);
    func_0x000107c61170(uVar17);
  }
  uVar10 = 0;
LAB_102dc54dc:
  FUN_102dca6b8();
  return uVar10;
}



/* Entry: 102dc57d8; end: 102dc581b;  */

void FUN_102dc57d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa70) = param_11;
  *(undefined8 *)(unaff_x22 + 0xa68) = param_10;
  *(undefined8 *)(unaff_x22 + 0xa60) = param_9;
  *(undefined8 *)(unaff_x22 + 0xa58) = param_8;
  *(undefined8 *)(unaff_x22 + 0xa28) = param_7;
  *(undefined8 *)(unaff_x22 + 0x9f8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x9c8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x998) = param_4;
  *(undefined8 *)(unaff_x22 + 0x968) = param_3;
  *(undefined8 *)(unaff_x22 + 0x938) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dc581c,0,0);
  return;
}



/* Entry: 102dc581c; end: 102dc58a7;  */

void FUN_102dc581c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa78) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102dca5a8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dc58a8,uVar2,uVar3);
  return;
}



/* Entry: 102dc58a8; end: 102dc5913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc58a8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x968);
  lVar2 = *(long *)(unaff_x22 + 0x938);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa78));
  uVar1 = *(undefined8 *)(lVar2 + _DAT_112f185a8);
  *(undefined8 *)(lVar2 + _DAT_112f185a8) = uVar3;
  func_0x000107c61170(uVar1);
  *(undefined1 *)(lVar2 + _DAT_112f185e0) = 0;
  func_0x000107c61174(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dc5914,0,0);
  return;
}



/* Entry: 102dc5914; end: 102dc5a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc5914(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar3 = *(long *)(unaff_x22 + 0x938);
  lVar2 = *(long *)(lVar3 + _DAT_112f18618);
  *(long *)(unaff_x22 + 0xa80) = lVar2;
  if (lVar2 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = *(long *)(unaff_x22 + 0x938);
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x9c8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x998);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x968);
      func_0x000107c615e8();
      *(long *)(unaff_x22 + 0x7a0) = lVar3;
      *(undefined8 *)(unaff_x22 + 0x7a8) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x7b0) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x7b8) = uVar4;
      uVar4 = 0;
      func_0x000102dca5e8(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
      lVar2 = unaff_x22 + 0x10;
      func_0x000107c61418(lVar2,0,uVar4,&UNK_10db4f048,unaff_x22 + 0x790,unaff_x22 + 0x8d8);
      (**(code **)(lVar3 + _DAT_112f18630))();
      *(long *)(unaff_x22 + 0xa88) = lVar2;
      *(long *)(unaff_x22 + 2000) = lVar3;
      *(undefined8 *)(unaff_x22 + 0x7d8) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x7e0) = uVar5;
      puVar1 = PTR___sSbN_11034dd40;
      func_0x000107c61418(unaff_x22 + 0x290,0,PTR___sSbN_11034dd40,&UNK_10db4f058,unaff_x22 + 0x7c0,
                          unaff_x22 + 0xab0);
      *(long *)(unaff_x22 + 0x880) = lVar3;
      *(undefined8 *)(unaff_x22 + 0x888) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x890) = uVar5;
      func_0x000107c61418(unaff_x22 + 0x510,0,puVar1,&UNK_10db4f068,unaff_x22 + 0x870,
                          unaff_x22 + 0xab1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_asyncLet_get_110350060)
                (unaff_x22 + 0x10,unaff_x22 + 0x8d8,FUN_102dc5a90,unaff_x22 + 0x8b0);
      return;
    }
  }
  uVar4 = *(undefined8 *)(lVar3 + _DAT_112f185e8);
  func_0x000107c4b940(uVar4);
  *(undefined1 *)(lVar3 + _DAT_112f185f0) = 0;
  func_0x000107c5d278(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102dc5a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102dc5a90; end: 102dc5ad3;  */

void FUN_102dc5a90(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa90) = *(undefined8 *)(unaff_x22 + 0x8d8);
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x290,unaff_x22 + 0xab0,FUN_102dc5ad4,unaff_x22 + 0x8e0);
  return;
}



/* Entry: 102dc5ad4; end: 102dc5b07;  */

void FUN_102dc5ad4(void)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xab2) = *(undefined1 *)(unaff_x22 + 0xab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x510,unaff_x22 + 0xab1,0x102dc5af4,unaff_x22 + 0x910);
  return;
}



/* Entry: 102dc5b08; end: 102dc5bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc5b08(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xab3) = *(undefined1 *)(unaff_x22 + 0xab1);
  func_0x0001000d224c(unaff_x22 + 0x848);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x860);
  lVar3 = *(long *)(unaff_x22 + 0x868);
  func_0x0001000a8868(unaff_x22 + 0x848,uVar2);
  (**(code **)(lVar3 + 0x10))(uVar2,lVar3);
  *(undefined8 *)(unaff_x22 + 0xa98) = uVar2;
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xaa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102dc5bb8;
                    /* WARNING: Could not recover jumptable at 0x000102dc5bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101b5668c)();
  return;
}



/* Entry: 102dc5bb8; end: 102dc5c0b;  */

void FUN_102dc5bb8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xaa8) = param_1;
  *(undefined1 *)(lVar1 + 0xab4) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xaa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dc5c0c,0,0);
  return;
}



/* Entry: 102dc5c0c; end: 102dc6327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc5c0c(double param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long unaff_x22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  if (*(char *)(unaff_x22 + 0xab4) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x908) = *(undefined8 *)(unaff_x22 + 0xaa8);
    iVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      uVar18 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x908,uVar18,PTR___ss5ErrorWS_11034ee10);
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0xaa8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa98));
    func_0x000101b56b9c(uVar18,1);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa98));
  }
  lVar28 = *(long *)(unaff_x22 + 0x938);
  func_0x0001000834e4(unaff_x22 + 0x848);
  lVar5 = *(long *)(lVar28 + _DAT_112f18670);
  func_0x000108c07c44();
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar25 = *(long *)(lVar6 + -8);
  uVar10 = *(long *)(lVar25 + 0x40) + 0xf;
  uVar7 = uVar10 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  lVar11 = _DAT_112f185b0;
  func_0x000107c61428(lVar28 + _DAT_112f185b0,unaff_x22 + 0x898,0,0);
  lVar21 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar8 = *(long *)(*(long *)(lVar21 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  func_0x000102dca670(lVar28 + lVar11,uVar8,0x112d373d8,&UNK_10d9014c0);
  uVar9 = uVar8;
  (**(code **)(lVar25 + 0x30))(uVar8,1,lVar6);
  if ((int)uVar9 == 1) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0xa90);
    lVar21 = *(long *)(unaff_x22 + 0x938);
    func_0x000102dca630(uVar8,0x112d373d8,&UNK_10d9014c0);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar7);
    uVar19 = *(undefined8 *)(lVar21 + _DAT_112f185e8);
    func_0x000107c4b940(uVar19);
    *(undefined1 *)(lVar21 + _DAT_112f185f0) = 0;
    func_0x000107c5d278(uVar19);
    func_0x000107c61170(uVar18);
    pcVar16 = FUN_102dc6328;
    lVar21 = unaff_x22 + 0x940;
  }
  else {
    (**(code **)(lVar25 + 0x20))(uVar7,uVar8,lVar6);
    func_0x000107c615c0(uVar8);
    uVar10 = uVar10 & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar10);
    func_0x000107c5eea0(uVar10);
    func_0x000107c5ee68(uVar7);
    pcVar16 = *(code **)(lVar25 + 8);
    lVar21 = lVar6;
    (*pcVar16)(uVar10);
    func_0x000107c615c0(uVar10);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x102dc6320);
      (*pcVar16)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x102dc6324);
      (*pcVar16)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x102dc6328);
      (*pcVar16)();
    }
    if ((long)param_1 < lVar5) {
      uVar1 = *(undefined1 *)(unaff_x22 + 0xab3);
      uVar2 = *(undefined1 *)(unaff_x22 + 0xab2);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xa90);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xa88);
      lVar11 = *(long *)(unaff_x22 + 0xa70);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xa68);
      uVar22 = *(undefined8 *)(unaff_x22 + 0xa60);
      uVar26 = *(undefined8 *)(unaff_x22 + 0xa58);
      uVar30 = *(undefined8 *)(unaff_x22 + 0xa28);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x9f8);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x9c8);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x998);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x938);
      uVar19 = 0;
      func_0x000107c60714();
      puVar12 = &UNK_1105d1ae8;
      func_0x000107c613fc(&UNK_1105d1ae8,0x70,7);
      *(undefined8 *)(puVar12 + 0x10) = uVar29;
      *(undefined8 *)(puVar12 + 0x18) = uVar20;
      *(undefined8 *)(puVar12 + 0x20) = uVar30;
      *(undefined8 *)(puVar12 + 0x28) = uVar26;
      *(undefined8 *)(puVar12 + 0x30) = uVar22;
      *(undefined8 *)(puVar12 + 0x38) = uVar23;
      *(undefined8 *)(puVar12 + 0x40) = uVar18;
      puVar12[0x48] = uVar2;
      *(undefined8 *)(puVar12 + 0x50) = uVar17;
      puVar12[0x58] = uVar1;
      *(undefined8 *)(puVar12 + 0x60) = uVar27;
      *(undefined8 *)(puVar12 + 0x68) = uVar24;
      *(code **)(unaff_x22 + 0x808) = FUN_102dc9d30;
      *(undefined **)(unaff_x22 + 0x810) = puVar12;
      *(undefined **)(unaff_x22 + 0x7e8) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x7f0) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x7f8) = &UNK_1000f6b44;
      *(undefined **)(unaff_x22 + 0x800) = &UNK_1105d1b00;
      lVar21 = unaff_x22 + 0x7e8;
      func_0x000107c60bc4(lVar21);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x810);
      func_0x000107c61174(uVar18);
      func_0x000107c61174(uVar17);
      func_0x000107c61434(uVar24);
      func_0x000107c61434(uVar30);
      func_0x000107c61434(uVar22);
      func_0x000107c61174(uVar29);
      func_0x000107c61174(uVar23);
      func_0x000107c61574(uVar20);
      func_0x000107c5fb28(lVar11,uVar19);
      func_0x000107c6142c(uVar19);
      func_0x000100c749e0((float)((double)lVar5 - param_1),lVar11 + 0x20,lVar21);
      func_0x000107c60bd0(lVar21);
      func_0x000107c61170(uVar18);
      (*pcVar16)(uVar7,lVar6);
      func_0x000107c61574(lVar11);
    }
    else {
      lVar11 = *(long *)(unaff_x22 + 0xa68);
      func_0x000107c3d888();
      func_0x000107c61180();
      if (lVar11 == 0) {
        lVar5 = 0;
        lVar21 = -0x2000000000000000;
      }
      else {
        lVar5 = lVar11;
        func_0x000107c5faec();
        func_0x000107c61170(lVar11);
      }
      cVar3 = *(char *)(unaff_x22 + 0xab2);
      lVar11 = *(long *)(unaff_x22 + 0xa88);
      if (cVar3 == '\x01') {
        uVar1 = *(undefined1 *)(lVar11 + _DAT_113021ed8);
      }
      else {
        uVar1 = 0;
      }
      lVar25 = *(long *)(unaff_x22 + 0xa80);
      puVar12 = &UNK_1105d1b38;
      func_0x000107c613fc(&UNK_1105d1b38,0x20,7);
      puVar12[0x10] = cVar3;
      *(long *)(puVar12 + 0x18) = lVar11;
      func_0x000107c61174(lVar11);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar25 == 0) {
        uVar19 = *(undefined8 *)(unaff_x22 + 0xa90);
        lVar11 = *(long *)(unaff_x22 + 0x938);
        uVar18 = *(undefined8 *)(lVar11 + _DAT_112f185e8);
        func_0x000107c4b940(uVar18);
        *(undefined1 *)(lVar11 + _DAT_112f185f0) = 0;
        func_0x000107c5d278(uVar18);
        func_0x000107c61574(puVar12);
        func_0x000107c6142c(lVar21);
        func_0x000107c61170(uVar19);
      }
      else {
        uVar2 = *(undefined1 *)(unaff_x22 + 0xab3);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xa90);
        uVar20 = *(undefined8 *)(unaff_x22 + 0xa60);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xa58);
        uVar23 = *(undefined8 *)(unaff_x22 + 0xa28);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x9f8);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x9c8);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x998);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x938);
        pcVar13 = 
        "submitNotification(_:username:subtext:bitmojiImage:isRecentlyActive:hasActiveStory:userId:onSubmitted:)"
        ;
        func_0x0001000c10c0();
        func_0x000107c61180();
        puVar14 = &UNK_1105d1958;
        func_0x000107c613fc(&UNK_1105d1958,0x18,7);
        func_0x000107c61614(puVar14 + 0x10,uVar22);
        puVar15 = &UNK_1105d1b60;
        func_0x000107c613fc(&UNK_1105d1b60,0x80,7);
        *(undefined **)(puVar15 + 0x10) = puVar14;
        *(undefined8 *)(puVar15 + 0x18) = uVar24;
        *(undefined8 *)(puVar15 + 0x20) = uVar26;
        *(undefined8 *)(puVar15 + 0x28) = uVar17;
        *(undefined8 *)(puVar15 + 0x30) = uVar23;
        *(undefined8 *)(puVar15 + 0x38) = uVar19;
        *(undefined8 *)(puVar15 + 0x40) = uVar20;
        *(long *)(puVar15 + 0x48) = lVar5;
        *(long *)(puVar15 + 0x50) = lVar21;
        *(undefined8 *)(puVar15 + 0x58) = uVar18;
        puVar15[0x60] = uVar1;
        puVar15[0x61] = uVar2;
        *(long *)(puVar15 + 0x68) = lVar25;
        *(code **)(puVar15 + 0x70) = FUN_102dc9d78;
        *(undefined **)(puVar15 + 0x78) = puVar12;
        *(undefined8 *)(unaff_x22 + 0x838) = 0x102dc9d7c;
        *(undefined **)(unaff_x22 + 0x840) = puVar15;
        *(undefined **)(unaff_x22 + 0x818) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x820) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x828) = &UNK_1000f6b44;
        *(undefined **)(unaff_x22 + 0x830) = &UNK_1105d1b78;
        lVar11 = unaff_x22 + 0x818;
        func_0x000107c60bc4(lVar11);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x840);
        func_0x000107c61174();
        func_0x000107c61434(uVar26);
        func_0x000107c61434(uVar23);
        func_0x000107c61434(uVar20);
        func_0x000107c61434(lVar21);
        func_0x000107c615f0(lVar25);
        func_0x000107c6157c(puVar12);
        func_0x000107c61574(uVar19);
        func_0x000107c4e524(pcVar13);
        func_0x000107c60bd0(lVar11);
        func_0x000107c615e8(pcVar13);
        func_0x000107c61574(puVar12);
        func_0x000107c615e8(lVar25);
        func_0x000107c6142c(lVar21);
        func_0x000107c61170(uVar18);
      }
      (*pcVar16)(uVar7,lVar6);
    }
    func_0x000107c615c0(uVar7);
    pcVar16 = (code *)0x102dc63c4;
    lVar21 = unaff_x22 + 0x9d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x510,unaff_x22 + 0xab1,pcVar16,lVar21);
  return;
}



/* Entry: 102dc6328; end: 102dc6367;  */

void FUN_102dc6328(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102dc633c,0,0);
  return;
}



/* Entry: 102dc6368; end: 102dc63a7;  */

void FUN_102dc6368(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x10,unaff_x22 + 0x8d8,FUN_102dc63a8,unaff_x22 + 0x9a0);
  return;
}



/* Entry: 102dc63a8; end: 102dc6403;  */

void FUN_102dc63a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102dc63bc,0,0);
  return;
}



/* Entry: 102dc6404; end: 102dc6443;  */

void FUN_102dc6404(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x10,unaff_x22 + 0x8d8,FUN_102dc6444,unaff_x22 + 0xa30);
  return;
}



/* Entry: 102dc6444; end: 102dc6477;  */

void FUN_102dc6444(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102dca730,0,0);
  return;
}



/* Entry: 102dc6478; end: 102dc659f;  */

void FUN_102dc6478(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c3e9e8();
  func_0x000107c61180();
  lVar7 = param_2;
  if (lVar2 == 0) {
LAB_102dc64e4:
    lVar2 = 0;
    param_2 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar7 = param_2;
    if (lVar3 == 0) goto LAB_102dc64e4;
    lVar2 = lVar3;
    func_0x000107c5faec();
    lVar7 = param_2;
    func_0x000107c61170(lVar3);
  }
  *(long *)(unaff_x22 + 0x38) = param_2;
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c3ea1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
      goto LAB_102dc6548;
    }
  }
  lVar3 = 0;
  lVar7 = 0;
LAB_102dc6548:
  *(long *)(unaff_x22 + 0x40) = lVar7;
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102dc65a0;
  lVar4 = *(long *)(unaff_x22 + 0x20);
  lVar1 = *(long *)(unaff_x22 + 0x28);
  lVar6 = *(long *)(unaff_x22 + 0x18);
  plVar5[0x10] = lVar7;
  plVar5[0x11] = lVar6;
  plVar5[0xe] = param_2;
  plVar5[0xf] = lVar3;
  plVar5[0xc] = lVar1;
  plVar5[0xd] = lVar2;
  plVar5[0xb] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dc744c,0,0);
  return;
}



/* Entry: 102dc65a0; end: 102dc661b;  */

void FUN_102dc65a0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x48));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x38);
    func_0x000107c6142c(*(undefined8 *)(lVar3 + 0x40));
    func_0x000107c6142c(uVar1);
    *(undefined8 *)(lVar3 + 0x58) = param_1;
    pcVar2 = FUN_102dc66cc;
  }
  else {
    pcVar2 = FUN_102dc661c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102dc661c; end: 102dc66cb;  */

void FUN_102dc661c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c5fadc(uVar4,*(undefined8 *)(unaff_x22 + 0x28));
  uVar3 = uVar4;
  func_0x000108ffe710();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = 1;
  func_0x000108ffef38(1,uVar3,1);
  func_0x000107c61180();
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c614ac(uVar5);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dc66cc,0,0);
  return;
}



/* Entry: 102dc66cc; end: 102dc66ff;  */

void FUN_102dc66cc(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000102dc66e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102dc6700; end: 102dc6763;  */

void FUN_102dc6700(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102dc6764;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_102dc9fd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102dc6764; end: 102dc679b;  */

void FUN_102dc6764(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102dc6798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 8))();
  return;
}



/* Entry: 102dc679c; end: 102dc67b7;  */

void FUN_102dc679c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dc67b8,0,0);
  return;
}



/* Entry: 102dc67b8; end: 102dc681b;  */

void FUN_102dc67b8(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x102dca710;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_102dc799c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102dc681c; end: 102dc6ad7;  */

/* WARNING: Possible PIC construction at 0x000102dc6a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc6a40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc6a24) */
/* WARNING: Removing unreachable block (ram,0x000102dc6a44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc681c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,byte param_8,long param_9,
                  byte param_10,undefined4 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar4 = param_2;
  func_0x000107c3d888();
  func_0x000107c61180();
  if (param_6 == 0) {
    lVar5 = 0;
    uVar4 = 0xe000000000000000;
    if ((param_8 & 1) == 0) goto LAB_102dc68b4;
LAB_102dc6894:
    uVar7 = *(undefined1 *)(param_9 + _DAT_113021ed8);
  }
  else {
    lVar5 = param_6;
    func_0x000107c5faec();
    func_0x000107c61170(param_6);
    if ((param_8 & 1) != 0) goto LAB_102dc6894;
LAB_102dc68b4:
    uVar7 = 0;
  }
  puVar1 = &UNK_1105d1bb0;
  func_0x000107c613fc(&UNK_1105d1bb0,0x20,7);
  puVar1[0x10] = param_8 & 1;
  *(long *)(puVar1 + 0x18) = param_9;
  lVar8 = *(long *)(param_1 + _DAT_112f18618);
  if (lVar8 == 0) {
    func_0x000107c61174(param_9);
  }
  else {
    func_0x000107c61174(param_9);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      func_0x0001000c10c0();
      func_0x000107c61180();
      puVar2 = &UNK_1105d1958;
      func_0x000107c613fc(&UNK_1105d1958,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_1);
      puVar3 = &UNK_1105d1bd8;
      func_0x000107c613fc(&UNK_1105d1bd8,0x80,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      *(undefined8 *)(puVar3 + 0x18) = param_12;
      *(undefined8 *)(puVar3 + 0x20) = param_13;
      *(undefined8 *)(puVar3 + 0x28) = param_2;
      *(undefined8 *)(puVar3 + 0x30) = param_3;
      *(undefined8 *)(puVar3 + 0x38) = param_4;
      *(undefined8 *)(puVar3 + 0x40) = param_5;
      *(long *)(puVar3 + 0x48) = lVar5;
      *(undefined8 *)(puVar3 + 0x50) = uVar4;
      *(undefined8 *)(puVar3 + 0x58) = param_7;
      puVar3[0x60] = uVar7;
      puVar3[0x61] = param_10 & 1;
      *(long *)(puVar3 + 0x68) = lVar8;
      *(undefined8 *)(puVar3 + 0x70) = 0x102dca728;
      *(undefined **)(puVar3 + 0x78) = puVar1;
      uStack_70 = 0x102dca72c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1105d1bf0;
      puStack_68 = puVar3;
      func_0x000107c60bc4(&puStack_90);
      puVar2 = puStack_68;
      func_0x000107c61434(param_13);
      func_0x000107c61434(param_3);
      func_0x000107c61434(param_5);
      func_0x000107c61434(uVar4);
      func_0x000107c61174(param_7);
      func_0x000107c615f0(lVar8);
      func_0x000107c6157c(puVar1);
      puVar1 = puVar2;
      goto code_r0x000107c61574;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + _DAT_112f185e8);
  func_0x000107c4b940(uVar6);
  *(undefined1 *)(param_1 + _DAT_112f185f0) = 0;
  func_0x000107c5d278(uVar6);
  func_0x000107c6142c(uVar4);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102dc6ad8; end: 102dc7417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc6ad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,code *param_14)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
  plVar4 = (long *)(param_1 + 0x10);
  func_0x000107c61618();
  if (plVar4 == (long *)0x0) {
    return;
  }
  uVar2 = *(uint *)((long)plVar4 + _DAT_112f185b8);
  if (((char)((uint *)((long)plVar4 + _DAT_112f185b8))[1] == '\x01' || uVar2 == 1) ||
      (uVar2 & 0xfffffffe) == 6) {
    if (*(char *)((long)plVar4 + _DAT_112f185e0) != '\x01') {
      lVar6 = *(long *)((long)plVar4 + _DAT_112f18670);
      func_0x000108c07c80();
      lVar7 = 0;
      FUN_102dc1230();
      lVar8 = lVar7;
      func_0x000107c610f8();
      *(undefined8 *)(lVar8 + _DAT_112f18488) = 0;
      *(undefined8 *)(lVar8 + _DAT_112f18490) = 0;
      *(undefined8 *)(lVar8 + _DAT_112f18498) = 0;
      puVar1 = (undefined8 *)(lVar8 + _DAT_112f184a8);
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar9 = lVar8 + _DAT_112f184b0;
      *(undefined8 *)(lVar9 + 8) = 0;
      uVar19 = 0;
      func_0x000107c61614();
      *(double *)(lVar8 + _DAT_112f18480) = (double)lVar6;
      FUN_102dcba0c();
      lVar10 = 0;
      func_0x000102dc1f48();
      lVar11 = lVar10;
      func_0x000107c610f8();
      lVar6 = _DAT_112f184e0;
      func_0x000107c61434(param_5);
      func_0x000107c61434(param_7);
      func_0x000107c61434(param_9);
      func_0x000107c61174();
      uVar20 = param_10;
      FUN_102dc1a18();
      *(undefined8 *)(lVar11 + lVar6) = uVar20;
      lVar6 = _DAT_112f184e8;
      FUN_102dc37cc();
      *(undefined8 *)(lVar11 + lVar6) = uVar20;
      lVar6 = _DAT_112f184f0;
      FUN_102dc37cc();
      *(undefined8 *)(lVar11 + lVar6) = uVar20;
      lVar6 = _DAT_112f184f8;
      puVar12 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c61180();
      func_0x000107c53840();
      func_0x000107c5a050(puVar12);
      puVar13 = puVar12;
      func_0x000107c61170();
      *(undefined **)(lVar11 + lVar6) = puVar12;
      lVar6 = _DAT_112f18500;
      func_0x000102dc1b60();
      *(undefined **)(lVar11 + lVar6) = puVar13;
      lVar6 = _DAT_112f18508;
      func_0x000102dc1c10();
      *(undefined **)(lVar11 + lVar6) = puVar13;
      lVar6 = _DAT_112f18510;
      puVar12 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5a050();
      puVar13 = PTR_PTR_1126b0c40;
      func_0x000107c61168(PTR_PTR_1126b0c40);
      puVar14 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168();
      puVar15 = puVar14;
      func_0x000107c3ea80();
      func_0x000107c61180();
      puVar16 = puVar13;
      func_0x000107c45098(0x4032000000000000,0x4034000000000000,puVar13);
      func_0x000107c61180();
      func_0x000107c61170(puVar15);
      func_0x000107c55258(puVar12);
      func_0x000107c61170(puVar16);
      *(undefined **)(lVar11 + lVar6) = puVar12;
      lVar6 = _DAT_112f18518;
      puVar12 = PTR_PTR_1126aeff0;
      func_0x000107c610f8();
      func_0x000107c45eac();
      func_0x000107c5a050();
      *(undefined **)(lVar11 + lVar6) = puVar12;
      lVar6 = _DAT_112f18520;
      puVar12 = PTR_PTR_1126aec40;
      func_0x000107c61168();
      func_0x000107c3ee98();
      func_0x000107c61180();
      func_0x000107c59a2c();
      func_0x000107c5a050(puVar12);
      *(undefined **)(lVar11 + lVar6) = puVar12;
      lVar6 = _DAT_112f18528;
      puVar12 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5a050();
      func_0x000107c450a4(0x4030000000000000,0x4030000000000000,puVar13);
      func_0x000107c61180();
      func_0x000107c55258(puVar12);
      func_0x000107c61170(puVar13);
      func_0x000107c5a378(puVar12);
      *(undefined **)(lVar11 + lVar6) = puVar12;
      lVar6 = lVar11 + _DAT_112f18530;
      *(undefined8 *)(lVar6 + 8) = 0;
      func_0x000107c61614(lVar6,0);
      plVar17 = &lStack_a0;
      lStack_a0 = lVar11;
      lStack_98 = lVar10;
      func_0x000107c61154(0,0,0,0,plVar17,PTR_s_initWithFrame__1125e2948);
      lVar6 = _DAT_112f184e0;
      uVar20 = *(undefined8 *)((long)plVar17 + _DAT_112f184e0);
      plVar18 = plVar17;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174(uVar20);
      func_0x000107c5fadc(param_4,param_5);
      func_0x000107c6142c(param_5);
      func_0x000107c59c6c(uVar20);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(param_4);
      lVar11 = _DAT_112f184e8;
      uVar20 = *(undefined8 *)((long)plVar18 + _DAT_112f184e8);
      func_0x000107c61174(uVar20);
      func_0x000107c5fadc(param_6,param_7);
      func_0x000107c6142c(param_7);
      func_0x000107c59c6c(uVar20);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(param_6);
      lVar10 = _DAT_112f184f0;
      uVar20 = *(undefined8 *)((long)plVar18 + _DAT_112f184f0);
      func_0x000107c61174();
      func_0x000107c5fadc(param_8,param_9);
      func_0x000107c6142c(param_9);
      func_0x000107c59c6c(uVar20);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(param_8);
      func_0x000107c55258(*(undefined8 *)((long)plVar18 + _DAT_112f184f8));
      lVar3 = _DAT_112f18520;
      uVar20 = *(undefined8 *)((long)plVar18 + _DAT_112f18520);
      func_0x000107c61174();
      func_0x000107c5fadc(lVar9,uVar19);
      func_0x000107c6142c(uVar19);
      func_0x000107c59e1c(uVar20);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(lVar9);
      func_0x000107c52124(*(undefined8 *)((long)plVar18 + lVar3));
      func_0x000107c5a378(plVar18);
      puVar13 = puVar14;
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c52b50(plVar18);
      uVar20 = *(undefined8 *)((long)plVar17 + lVar6);
      func_0x000107c61174();
      puVar12 = puVar14;
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c59c78(uVar20);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(puVar12);
      uVar20 = *(undefined8 *)((long)plVar18 + lVar11);
      func_0x000107c61174();
      puVar12 = puVar14;
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c59c78(uVar20);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(puVar12);
      uVar20 = *(undefined8 *)((long)plVar18 + lVar10);
      func_0x000107c61174();
      func_0x000107c5af88(puVar14);
      func_0x000107c61180();
      func_0x000107c59c78(uVar20);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(puVar14);
      lVar9 = _DAT_112f18500;
      lVar6 = *(long *)((long)plVar18 + _DAT_112f18500);
      uVar20 = *(undefined8 *)(lVar6 + _DAT_112f18538);
      *(undefined **)(lVar6 + _DAT_112f18538) = puVar13;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(uVar20);
      lVar6 = _DAT_112f18508;
      uVar20 = *(undefined8 *)(*(long *)((long)plVar18 + _DAT_112f18508) + _DAT_112f18540);
      *(undefined **)(*(long *)((long)plVar18 + _DAT_112f18508) + _DAT_112f18540) = puVar13;
      func_0x000107c61174(puVar13);
      func_0x000107c61170(uVar20);
      plVar17 = plVar18;
      func_0x000107c4aba4(plVar18);
      func_0x000107c61180();
      func_0x000107c539d4(0x4032000000000000);
      func_0x000107c61170(plVar17);
      func_0x000107c3d8b8(*(undefined8 *)((long)plVar18 + lVar3));
      uVar20 = *(undefined8 *)((long)plVar18 + _DAT_112f18528);
      puVar12 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
      func_0x000107c61174(uVar20);
      func_0x000107c48c2c(puVar12);
      func_0x000107c61170(plVar18);
      func_0x000107c3d6fc(uVar20);
      func_0x000107c61170(uVar20);
      func_0x000107c61170(puVar12);
      puVar12 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
      func_0x000107c610f8();
      func_0x000107c48c2c();
      func_0x000107c3d6fc(plVar18);
      func_0x000107c61170(puVar12);
      func_0x000107c550d8(*(undefined8 *)((long)plVar18 + lVar6));
      func_0x000107c550d8(*(undefined8 *)((long)plVar18 + lVar9));
      func_0x000102dc1e98();
      func_0x000107c61170(plVar18);
      func_0x000107c61170(param_10);
      func_0x000107c61170(puVar13);
      *(long **)(lVar8 + _DAT_112f184a0) = plVar18;
      func_0x000107c5a050(plVar18);
      plVar17 = &lStack_b0;
      lStack_b0 = lVar8;
      lStack_a8 = lVar7;
      func_0x000107c61154(plVar17,PTR_s_init_1125d9248);
      *(undefined ***)((long)plVar17 + _DAT_112f184b0 + 8) = &PTR_DAT_1105d1a38;
      func_0x000107c61604((long)plVar17 + _DAT_112f184b0,plVar4);
      uVar20 = *(undefined8 *)((long)plVar4 + _DAT_112f185c0);
      *(long **)((long)plVar4 + _DAT_112f185c0) = plVar17;
      func_0x000107c61174(plVar17);
      func_0x000107c61170(uVar20);
      func_0x000107c5c2e0(param_13);
      (*param_14)();
      func_0x000107c61170(plVar4);
      goto LAB_102dc73ec;
    }
    uVar20 = *(undefined8 *)((long)plVar4 + _DAT_112f18680);
    lVar9 = ((undefined8 *)((long)plVar4 + _DAT_112f18680))[1];
    uVar19 = uVar20;
    func_0x000107c614f0(uVar20);
    pcVar21 = *(code **)(lVar9 + 0x38);
    func_0x000107c615f0(uVar20);
    uVar5 = 0x43;
  }
  else {
    uVar20 = *(undefined8 *)((long)plVar4 + _DAT_112f18680);
    lVar9 = ((undefined8 *)((long)plVar4 + _DAT_112f18680))[1];
    uVar19 = uVar20;
    func_0x000107c614f0(uVar20);
    pcVar21 = *(code **)(lVar9 + 0x38);
    func_0x000107c615f0(uVar20);
    uVar5 = 0x44;
  }
  (*pcVar21)(uVar5,param_2,param_3,uVar19,lVar9);
  func_0x000107c615e8(uVar20);
  lVar9 = _DAT_112f185e8;
  func_0x000107c4b940(*(undefined8 *)((long)plVar4 + _DAT_112f185e8));
  *(undefined1 *)((long)plVar4 + _DAT_112f185f0) = 0;
  func_0x000107c5d278(*(undefined8 *)((long)plVar4 + lVar9));
  plVar17 = plVar4;
LAB_102dc73ec:
  func_0x000107c61170(plVar17);
  return;
}



/* Entry: 102dc7418; end: 102dc744b;  */

void FUN_102dc7418(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 102dc744c; end: 102dc75f7;  */

void FUN_102dc744c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(unaff_x22 + 0x80);
  lVar6 = *(long *)(unaff_x22 + 0x70);
  if (lVar6 == 0 || lVar4 == 0) {
    FUN_102dc9e7c(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),0);
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102dc74bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar2 = PTR_PTR_1126afd38;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x90) = puVar2;
  func_0x000107c5fadc(uVar7,uVar1);
  func_0x000107c5e868(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(uVar3,lVar6);
  func_0x000107c5e458(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar3);
  func_0x000107c5fadc(uVar5,lVar4);
  func_0x000107c5e780(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar5);
  func_0x000107c5e770(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5e89c(puVar2);
  func_0x000107c61180();
  func_0x000107c61170();
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102dc75f8;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  func_0x000102dc7c90();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102dc75f8; end: 102dc7663;  */

void FUN_102dc75f8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_102dc7664;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x102dc769c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102dc7664; end: 102dc76cf;  */

void FUN_102dc7664(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000102dc7698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 102dc76d0; end: 102dc78c7;  */

/* WARNING: Possible PIC construction at 0x000102dc774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc7814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc77a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc7818) */
/* WARNING: Removing unreachable block (ram,0x000102dc782c) */
/* WARNING: Removing unreachable block (ram,0x000102dc7780) */
/* WARNING: Removing unreachable block (ram,0x000102dc7834) */
/* WARNING: Removing unreachable block (ram,0x000102dc7854) */
/* WARNING: Removing unreachable block (ram,0x000102dc785c) */
/* WARNING: Removing unreachable block (ram,0x000102dc7750) */
/* WARNING: Removing unreachable block (ram,0x000102dc7754) */
/* WARNING: Removing unreachable block (ram,0x000102dc7874) */
/* WARNING: Removing unreachable block (ram,0x000102dc7878) */
/* WARNING: Removing unreachable block (ram,0x000102dc7764) */
/* WARNING: Removing unreachable block (ram,0x000102dc7888) */
/* WARNING: Removing unreachable block (ram,0x000102dc776c) */
/* WARNING: Removing unreachable block (ram,0x000102dc77ac) */
/* WARNING: Removing unreachable block (ram,0x000102dc7848) */
/* WARNING: Removing unreachable block (ram,0x000102dc7864) */
/* WARNING: Removing unreachable block (ram,0x000102dc7890) */
/* WARNING: Removing unreachable block (ram,0x000102dc77b8) */
/* WARNING: Removing unreachable block (ram,0x000102dc7838) */
/* WARNING: Removing unreachable block (ram,0x000102dc77c0) */
/* WARNING: Removing unreachable block (ram,0x000102dc7870) */
/* WARNING: Removing unreachable block (ram,0x000102dc77cc) */
/* WARNING: Removing unreachable block (ram,0x000102dc77d8) */
/* WARNING: Removing unreachable block (ram,0x000102dc786c) */
/* WARNING: Removing unreachable block (ram,0x000102dc77e4) */
/* WARNING: Removing unreachable block (ram,0x000102dc77a4) */
/* WARNING: Removing unreachable block (ram,0x000102dc77f8) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_102dc76d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x000107c4b940(uVar1);
  if (*(char *)(param_3 + 0x18) != '\x01') {
    *(undefined1 *)(param_3 + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 102dc78c8; end: 102dc793b;  */

/* WARNING: Possible PIC construction at 0x000102dc7918: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc791c) */
/* WARNING: Removing unreachable block (ram,0x000107c6144c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0074) */

void FUN_102dc78c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4b940(uVar1);
  if (*(char *)(param_1 + 0x18) != '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 102dc793c; end: 102dc799b;  */

void FUN_102dc793c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x0;
  func_0x000107c5f7f0();
  func_0x000100028750();
  puVar2 = puVar1;
  func_0x000100028790(puVar1,0x112f18788);
  *puVar2 = 2000;
                    /* WARNING: Could not recover jumptable at 0x000102dc7998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1[-1] + 0x68))();
  return;
}



/* Entry: 102dc799c; end: 102dc7b67;  */

/* WARNING: Possible PIC construction at 0x000102dc7b10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc7b14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc799c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  
  lVar1 = *(long *)(param_2 + _DAT_112f18638);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x0001000285a8(0x112d5ec78,&UNK_10d9a0280);
    lVar2 = lVar1;
    func_0x000107c3d1b0(lVar1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    uVar4 = 0x112ee5e30;
    func_0x0001000285a8(0x112ee5e30,&UNK_10db11220);
    func_0x0001000bfde0(FUN_102dc7b68,0,uVar4);
    func_0x000107c61574(lVar3);
    plVar5 = (long *)0x1;
    func_0x00010061b458();
    puVar6 = &UNK_1105d1958;
    func_0x000107c613fc(&UNK_1105d1958,0x18,7);
    func_0x000107c61614(puVar6 + 0x10,param_2);
    puVar7 = &UNK_1105d1c28;
    func_0x000107c613fc(&UNK_1105d1c28,0x30,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = param_1;
    *(undefined8 *)(puVar7 + 0x20) = param_3;
    *(undefined8 *)(puVar7 + 0x28) = param_4;
    pcVar9 = *(code **)(*plVar5 + 0x60);
    func_0x000107c61434(param_4);
    pcVar8 = FUN_102dc9e70;
    puVar6 = puVar7;
    (*pcVar9)(FUN_102dc9e70);
    func_0x000107c61574(plVar5);
    func_0x000107c61574(puVar7);
    func_0x000107c614f0(pcVar8);
    (**(code **)(puVar6 + 0x10))(*(undefined8 *)(param_2 + _DAT_112f185a0),pcVar8,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_1);
  return;
}



/* Entry: 102dc7b68; end: 102dc7bcb;  */

void FUN_102dc7b68(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puStack_28 = (undefined *)0x0;
  func_0x000107c5f9e4(*param_2,&puStack_28,PTR___sSSN_11034da80,PTR___sSiN_11034deb0,
                      PTR___sSSSHsWP_11034da90);
  puVar1 = puStack_28;
  if (puStack_28 == (undefined *)0x0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001003d21d8();
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 102dc7bcc; end: 102dc7e53;  */

void FUN_102dc7bcc(long *param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  lVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c61170();
    bVar1 = false;
    if (*(long *)(lVar2 + 0x10) == 0) goto LAB_102dc7c64;
    func_0x000107c61434(lVar2);
    func_0x000100029284();
    if ((param_5 & 1) != 0) {
      lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + param_4 * 8);
      func_0x000107c6142c(lVar2);
      bVar1 = 0 < lVar3;
      goto LAB_102dc7c64;
    }
    func_0x000107c6142c(lVar2);
  }
  bVar1 = false;
LAB_102dc7c64:
  *(bool *)*(undefined8 *)(*(long *)(param_3 + 0x40) + 0x28) = bVar1;
  func_0x000107c6144c(param_3);
  return;
}



/* Entry: 102dc7e54; end: 102dc7f6b;  */

void FUN_102dc7e54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_1 != 0) {
    **(long **)(*(long *)(param_4 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_4);
    return;
  }
  FUN_102dc9e7c(0,0,2);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *plVar2 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_4,uVar1);
  return;
}



/* Entry: 102dc7f6c; end: 102dc8167;  */

/* WARNING: Possible PIC construction at 0x000102dc8020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc8040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc8070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc810c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc8120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc8130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc8124) */
/* WARNING: Removing unreachable block (ram,0x000102dc8110) */
/* WARNING: Removing unreachable block (ram,0x000102dc8074) */
/* WARNING: Removing unreachable block (ram,0x000102dc8044) */
/* WARNING: Removing unreachable block (ram,0x000102dc8048) */
/* WARNING: Removing unreachable block (ram,0x000102dc8024) */
/* WARNING: Removing unreachable block (ram,0x000102dc8158) */
/* WARNING: Removing unreachable block (ram,0x000102dc8028) */
/* WARNING: Removing unreachable block (ram,0x000102dc8134) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc7f6c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f18658);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112f185a8);
  if (lVar1 != 0) {
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5faec();
      func_0x000104513428();
      func_0x000107c5c734();
      func_0x000107c61180();
      goto code_r0x000107c61170;
    }
  }
  return;
}



/* Entry: 102dc8168; end: 102dc8277;  */

/* WARNING: Possible PIC construction at 0x000102dc81e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc825c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc81ec) */
/* WARNING: Removing unreachable block (ram,0x000102dc8260) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc8168(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112f18648);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f185a8);
    if (lVar1 != 0) {
      func_0x000107c5d984();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c5c734(*(undefined8 *)(unaff_x20 + _DAT_112f18668));
        func_0x000107c61180();
        func_0x000107c573b8();
        goto code_r0x000107c61170;
      }
    }
    puVar2 = PTR_PTR_1126af668;
    func_0x000107c610f8(PTR_PTR_1126af668);
    func_0x000107c47d3c();
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f18650);
    func_0x000107c3ed20(uVar3,param_2,puVar2,*(undefined8 *)(unaff_x20 + _DAT_112f18660),0,0x43,0);
    func_0x000107c61180();
    func_0x000107c42c1c(lVar4,param_2,uVar3);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102dc8278; end: 102dc84e7;  */

/* WARNING: Possible PIC construction at 0x000102dc8488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc8498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc848c) */
/* WARNING: Removing unreachable block (ram,0x000102dc849c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc8278(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 auStack_c0 [4];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_a0 + lVar1;
  lVar6 = *(long *)(unaff_x20 + _DAT_112f185a8);
  if ((lVar6 != 0) && (lVar7 = *(long *)(unaff_x20 + _DAT_112f18608), lVar7 != 0)) {
    func_0x000107c61174(lVar6);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f185d8) = 1;
      puVar3 = PTR_PTR_1126ae5c0;
      func_0x000107c61168();
      *(undefined8 *)((long)auStack_c0 + lVar1 + 8) = 0;
      *(undefined8 *)((long)auStack_c0 + lVar1) = 0;
      *(undefined8 *)((long)auStack_c0 + lVar1 + 0x18) = 0;
      *(undefined8 *)((long)auStack_c0 + lVar1 + 0x10) = 0;
      func_0x000107c3d954();
      func_0x000107c61180();
      puStack_98 = puVar3;
      func_0x000102dca5e8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      (**(code **)(lVar8 + 0x68))
                (puVar9,*(undefined4 *)
                         PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2);
      func_0x000107c5fff0(puVar9);
      (**(code **)(lVar8 + 8))(puVar9,lVar2);
      puVar3 = &UNK_1105d1958;
      func_0x000107c613fc(&UNK_1105d1958,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_1105d1980;
      func_0x000107c613fc(&UNK_1105d1980,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(undefined8 *)(puVar4 + 0x20) = param_2;
      pcStack_70 = FUN_102dc8600;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1013b7310;
      puStack_78 = &UNK_1105d1998;
      ppuVar5 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar3 = puStack_68;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar3);
      func_0x000107c3d6c4(lVar7);
      func_0x000107c60bd0(ppuVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 102dc84e8; end: 102dc85ff;  */

void FUN_102dc84e8(ulong param_1,undefined8 param_2,long param_3,code *param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if ((param_1 & 1) == 0) {
      func_0x000107c61170();
    }
    else {
      (*param_4)();
      pcVar1 = "navigateToPage()";
      func_0x0001000c10c0("navigateToPage()");
      func_0x000107c61180();
      puVar2 = &UNK_1105d1958;
      func_0x000107c613fc(&UNK_1105d1958,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_3);
      uStack_58 = 0x102dca724;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1105d1a60;
      ppuVar3 = &puStack_78;
      puStack_50 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(pcVar1);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(param_3);
      func_0x000107c615e8(pcVar1);
    }
  }
  return;
}



/* Entry: 102dc8600; end: 102dc8627;  */

void FUN_102dc8600(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((param_1 & 1) == 0) {
      func_0x000107c61170();
    }
    else {
      (*pcVar1)();
      pcVar3 = "navigateToPage()";
      func_0x0001000c10c0("navigateToPage()");
      func_0x000107c61180();
      puVar4 = &UNK_1105d1958;
      func_0x000107c613fc(&UNK_1105d1958,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,lVar2);
      uStack_58 = 0x102dca724;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000f6b44;
      puStack_60 = &UNK_1105d1a60;
      ppuVar5 = &puStack_78;
      puStack_50 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_50);
      func_0x000107c4e524(pcVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(pcVar3);
    }
  }
  return;
}



/* Entry: 102dc8628; end: 102dc8a17;  */

/* WARNING: Possible PIC construction at 0x000102dc88c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc88f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc88cc) */
/* WARNING: Removing unreachable block (ram,0x000102dc88f4) */
/* WARNING: Removing unreachable block (ram,0x000102dc89f0) */
/* WARNING: Removing unreachable block (ram,0x000102dc8924) */
/* WARNING: Removing unreachable block (ram,0x000102dc8930) */
/* WARNING: Removing unreachable block (ram,0x000102dc8934) */
/* WARNING: Removing unreachable block (ram,0x000102dc89f4) */
/* WARNING: Removing unreachable block (ram,0x000102dc8938) */
/* WARNING: Removing unreachable block (ram,0x000102dc8940) */
/* WARNING: Removing unreachable block (ram,0x000102dc8944) */
/* WARNING: Removing unreachable block (ram,0x000102dc89f8) */
/* WARNING: Removing unreachable block (ram,0x000102dc8948) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc8628(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = *(long *)(unaff_x20 + _DAT_112f185a8);
  if (lVar3 != 0) {
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      puVar5 = *(undefined **)(unaff_x20 + _DAT_112f18668);
      if (puVar5 != (undefined *)0x0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (puVar5 != (undefined *)0x0) {
          puVar9 = puVar5;
          func_0x000107c5eea0(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          func_0x000107c5ee70();
          uVar6 = 0xd00000000000002a;
          func_0x000107c5fadc(0xd00000000000002a,0x800000010f10dc00);
          func_0x000107c56bcc(puVar5);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(uVar6);
          (**(code **)(lVar12 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
          uVar6 = 0xd000000000000036;
          func_0x000107c5fadc(0xd000000000000036,0x800000010f10dc30);
          puVar10 = puVar5;
          func_0x000107c4d9c0();
          func_0x000107c61180();
          func_0x000107c61170(uVar6);
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar11 = puVar9;
          if (puVar10 != (undefined *)0x0) {
            uVar6 = 0x112d373e8;
            puStack_78 = puVar10;
            func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
            uVar7 = 0x112d38270;
            func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
            ppuVar8 = &puStack_80;
            func_0x000107c6147c(ppuVar8,&puStack_78,uVar6,uVar7,6);
            puVar11 = puStack_80;
            if ((int)ppuVar8 == 0) {
              puVar11 = puVar9;
            }
          }
          func_0x000107c61434(param_2);
          puVar9 = puVar11;
          func_0x000107c61558();
          puVar10 = puVar11;
          if (((ulong)puVar9 & 1) == 0) {
            puVar10 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
          }
          uVar1 = *(ulong *)(puVar10 + 0x10);
          lVar2 = uVar1 + 1;
          puVar9 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            lStack_88 = lVar2;
            func_0x0001000d182c(puVar9,lVar2,1,puVar10);
            lVar2 = lStack_88;
          }
          *(long *)(puVar9 + 0x10) = lVar2;
          *(long *)(puVar9 + uVar1 * 0x10 + 0x20) = lVar4;
          *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x28) = param_2;
          puVar10 = puVar9;
          if (0x62 < uVar1) {
            if (*(ulong *)(puVar9 + 0x18) >> 1 < uVar1) {
              puVar10 = (undefined *)0x1;
              puStack_78 = puVar9;
              func_0x0001000d182c(1,lVar2,1,puVar9);
            }
            puStack_78 = puVar10;
            func_0x000101755ed8(0,1,0);
          }
          func_0x000107c5fc48(puVar10,PTR___sSSN_11034da80);
          uVar6 = 0xd000000000000036;
          func_0x000107c5fadc(0xd000000000000036,0x800000010f10dc30);
          func_0x000107c56bcc(puVar5);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(uVar6);
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f18680);
          lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f18680))[1];
          func_0x000107c614f0(uVar6);
          (**(code **)(lVar2 + 0x38))(0x80,lVar4,param_2,uVar6,lVar2);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 102dc8a18; end: 102dc8bab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc8a18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  code *pcVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f185a8);
  if (lVar1 != 0) {
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f18680);
      lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f18680))[1];
      func_0x000107c614f0(uVar3);
      pcVar7 = *(code **)(lVar1 + 0x38);
      func_0x000107c61434(param_2);
      (*pcVar7)(param_1,lVar2,param_2,uVar3,lVar1);
      func_0x000107c6142c(param_2);
      FUN_102dc8bac(param_1,lVar2,param_2);
      func_0x000107c6142c(param_2);
      if (*(char *)(unaff_x20 + _DAT_112f185d8) == '\x01') {
        pcVar4 = "navigateToPage()";
        func_0x0001000c10c0("navigateToPage()");
        func_0x000107c61180();
        puVar5 = &UNK_1105d1958;
        func_0x000107c613fc(&UNK_1105d1958,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        uStack_60 = 0x102dc983c;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_1105d19c0;
        puStack_58 = puVar5;
        func_0x000107c60bc4(&puStack_80);
        func_0x000107c61574(puStack_58);
        func_0x000107c4e524(pcVar4);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(pcVar4);
      }
    }
  }
  return;
}



/* Entry: 102dc8bac; end: 102dc8d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc8bac(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  undefined1 auStack_a0 [48];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar4 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f185c8);
  if (*(char *)(puVar1 + 1) != '\x01') {
    uVar6 = *puVar1;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    uVar7 = *(undefined8 *)(&UNK_10db4f090 + (param_2 & 0xff) * 8);
    func_0x000107c5eea0(puVar4);
    func_0x000107c5ee8c();
    (**(code **)(lVar8 + 8))(puVar4,lVar3);
    dVar9 = (double)(long)(param_1 * 1000.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102dc8d84);
      (*pcVar2)();
    }
    if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102dc8d88);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102dc8d8c);
      (*pcVar2)();
    }
    func_0x0001024ed180();
    func_0x000107c61534();
    *(undefined8 *)(puVar4 + 0x18) = 3;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    uVar5 = 0;
    func_0x000102dccbd8(0);
    func_0x000107c610f8();
    func_0x000107c61434(param_4);
    func_0x000102dcbe70(param_3,param_4,0);
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    FUN_102dcc0b0(0,2,0,0,uVar7,uVar6,(long)dVar9,puVar4);
    func_0x000107c61588(puVar4);
    func_0x000107c61408(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),uVar5);
  }
  return;
}



/* Entry: 102dc8d8c; end: 102dc8e0f;  */

/* WARNING: Possible PIC construction at 0x000102dc8dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc8de4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc8dcc) */
/* WARNING: Removing unreachable block (ram,0x000102dc8de8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc8d8c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102dc8e10; end: 102dc8e93; -[_TtC27FriendingInteractivePopover35FriendingInteractivePopoverWorkflow chatScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000102dc8e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc8e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc8e50) */
/* WARNING: Removing unreachable block (ram,0x000102dc8e6c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc8e10(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102dc8e94; end: 102dc8ebf; -[_TtC27FriendingInteractivePopover35FriendingInteractivePopoverWorkflow init] */

void FUN_102dc8e94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingInteractivePopover.FriendingInteractivePopoverWorkflow",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102dc8ec0);
  (*pcVar1)();
}



/* Entry: 102dc8ec0; end: 102dc8ec3;  */

/* WARNING: Possible PIC construction at 0x000102dc8488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc8498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc848c) */
/* WARNING: Removing unreachable block (ram,0x000102dc849c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc8ec0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 auStack_c0 [4];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_a0 + lVar1;
  lVar6 = *(long *)(unaff_x20 + _DAT_112f185a8);
  if ((lVar6 != 0) && (lVar7 = *(long *)(unaff_x20 + _DAT_112f18608), lVar7 != 0)) {
    func_0x000107c61174(lVar6);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar7 != 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f185d8) = 1;
      puVar3 = PTR_PTR_1126ae5c0;
      func_0x000107c61168();
      *(undefined8 *)((long)auStack_c0 + lVar1 + 8) = 0;
      *(undefined8 *)((long)auStack_c0 + lVar1) = 0;
      *(undefined8 *)((long)auStack_c0 + lVar1 + 0x18) = 0;
      *(undefined8 *)((long)auStack_c0 + lVar1 + 0x10) = 0;
      func_0x000107c3d954();
      func_0x000107c61180();
      puStack_98 = puVar3;
      func_0x000102dca5e8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      (**(code **)(lVar8 + 0x68))
                (puVar9,*(undefined4 *)
                         PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2);
      func_0x000107c5fff0(puVar9);
      (**(code **)(lVar8 + 8))(puVar9,lVar2);
      puVar3 = &UNK_1105d1958;
      func_0x000107c613fc(&UNK_1105d1958,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_1105d1980;
      func_0x000107c613fc(&UNK_1105d1980,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(undefined8 *)(puVar4 + 0x20) = param_2;
      pcStack_70 = FUN_102dc8600;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1013b7310;
      puStack_78 = &UNK_1105d1998;
      ppuVar5 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar3 = puStack_68;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar3);
      func_0x000107c3d6c4(lVar7);
      func_0x000107c60bd0(ppuVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 102dc8ec4; end: 102dc8eef;  */

/* WARNING: Possible PIC construction at 0x000102dc81e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc825c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc81ec) */
/* WARNING: Removing unreachable block (ram,0x000102dc8260) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc8ec4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f18670);
  func_0x000108c07d08();
  if (iVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f18648);
  lVar2 = lVar5;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f185a8);
    if (lVar2 != 0) {
      func_0x000107c5d984();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c5c734(*(undefined8 *)(unaff_x20 + _DAT_112f18668));
        func_0x000107c61180();
        func_0x000107c573b8();
        goto code_r0x000107c61170;
      }
    }
    puVar3 = PTR_PTR_1126af668;
    func_0x000107c610f8(PTR_PTR_1126af668);
    func_0x000107c47d3c();
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f18650);
    func_0x000107c3ed20(uVar4,param_2,puVar3,*(undefined8 *)(unaff_x20 + _DAT_112f18660),0,0x43,0);
    func_0x000107c61180();
    func_0x000107c42c1c(lVar5,param_2,uVar4);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102dc8ef0; end: 102dc8ef7;  */

/* WARNING: Possible PIC construction at 0x000102dc88c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc88f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc88cc) */
/* WARNING: Removing unreachable block (ram,0x000102dc88f4) */
/* WARNING: Removing unreachable block (ram,0x000102dc89f0) */
/* WARNING: Removing unreachable block (ram,0x000102dc8924) */
/* WARNING: Removing unreachable block (ram,0x000102dc8930) */
/* WARNING: Removing unreachable block (ram,0x000102dc8934) */
/* WARNING: Removing unreachable block (ram,0x000102dc89f4) */
/* WARNING: Removing unreachable block (ram,0x000102dc8938) */
/* WARNING: Removing unreachable block (ram,0x000102dc8940) */
/* WARNING: Removing unreachable block (ram,0x000102dc8944) */
/* WARNING: Removing unreachable block (ram,0x000102dc89f8) */
/* WARNING: Removing unreachable block (ram,0x000102dc8948) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc8ef0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar11;
  long lVar12;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = *(long *)(unaff_x20 + _DAT_112f185a8);
  if (lVar3 != 0) {
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      puVar5 = *(undefined **)(unaff_x20 + _DAT_112f18668);
      if (puVar5 != (undefined *)0x0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (puVar5 != (undefined *)0x0) {
          puVar9 = puVar5;
          func_0x000107c5eea0(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          func_0x000107c5ee70();
          uVar6 = 0xd00000000000002a;
          func_0x000107c5fadc(0xd00000000000002a,0x800000010f10dc00);
          func_0x000107c56bcc(puVar5);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(uVar6);
          (**(code **)(lVar12 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
          uVar6 = 0xd000000000000036;
          func_0x000107c5fadc(0xd000000000000036,0x800000010f10dc30);
          puVar10 = puVar5;
          func_0x000107c4d9c0();
          func_0x000107c61180();
          func_0x000107c61170(uVar6);
          puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar11 = puVar9;
          if (puVar10 != (undefined *)0x0) {
            uVar6 = 0x112d373e8;
            puStack_78 = puVar10;
            func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
            uVar7 = 0x112d38270;
            func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
            ppuVar8 = &puStack_80;
            func_0x000107c6147c(ppuVar8,&puStack_78,uVar6,uVar7,6);
            puVar11 = puStack_80;
            if ((int)ppuVar8 == 0) {
              puVar11 = puVar9;
            }
          }
          func_0x000107c61434(param_2);
          puVar9 = puVar11;
          func_0x000107c61558();
          puVar10 = puVar11;
          if (((ulong)puVar9 & 1) == 0) {
            puVar10 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
          }
          uVar1 = *(ulong *)(puVar10 + 0x10);
          lVar2 = uVar1 + 1;
          puVar9 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            lStack_88 = lVar2;
            func_0x0001000d182c(puVar9,lVar2,1,puVar10);
            lVar2 = lStack_88;
          }
          *(long *)(puVar9 + 0x10) = lVar2;
          *(long *)(puVar9 + uVar1 * 0x10 + 0x20) = lVar4;
          *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x28) = param_2;
          puVar10 = puVar9;
          if (0x62 < uVar1) {
            if (*(ulong *)(puVar9 + 0x18) >> 1 < uVar1) {
              puVar10 = (undefined *)0x1;
              puStack_78 = puVar9;
              func_0x0001000d182c(1,lVar2,1,puVar9);
            }
            puStack_78 = puVar10;
            func_0x000101755ed8(0,1,0);
          }
          func_0x000107c5fc48(puVar10,PTR___sSSN_11034da80);
          uVar6 = 0xd000000000000036;
          func_0x000107c5fadc(0xd000000000000036,0x800000010f10dc30);
          func_0x000107c56bcc(puVar5);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(uVar6);
          uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f18680);
          lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f18680))[1];
          func_0x000107c614f0(uVar6);
          (**(code **)(lVar2 + 0x38))(0x80,lVar4,param_2,uVar6,lVar2);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
      return;
    }
  }
  return;
}



/* Entry: 102dc8ef8; end: 102dc8fff;  */

void FUN_102dc8ef8(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  if (param_1 != 0) {
    func_0x000107c61174();
    pcVar1 = "didStart(_:)";
    func_0x0001000c10c0("didStart(_:)");
    func_0x000107c61180();
    puVar2 = &UNK_1105d1958;
    func_0x000107c613fc(&UNK_1105d1958,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1105d19f8;
    func_0x000107c613fc(&UNK_1105d19f8,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = param_1;
    uStack_40 = 0x102dc9844;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_1105d1a10;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    puVar2 = puStack_38;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 102dc9000; end: 102dc9193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc9000(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_68 [24];
  
  puVar6 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar6,0,0);
  uVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar3 = param_2;
    func_0x000107c3e1d8();
    func_0x000107c61180();
    if (uVar3 != 0) {
      uVar2 = uVar3;
      func_0x000107c5faec();
      puVar7 = puVar6;
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(uVar1 + _DAT_112f185a8);
      if (uVar3 == 0) {
        func_0x000107c6142c(puVar6);
      }
      else {
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c5d984();
        func_0x000107c61180();
        if (uVar4 == 0) {
          func_0x000107c6142c(puVar6);
          func_0x000107c61170(uVar1);
          uVar1 = uVar3;
        }
        else {
          uVar5 = uVar4;
          func_0x000107c5faec();
          func_0x000107c61170(uVar4);
          if (uVar2 == uVar5 && puVar6 == puVar7) {
            func_0x000107c6142c(puVar7);
          }
          else {
            func_0x000107c605b8(uVar2,puVar6,uVar5,puVar7,0);
            func_0x000107c6142c(puVar7);
            if ((uVar2 & 1) == 0) {
              func_0x000107c61170(uVar1);
              func_0x000107c61170(uVar3);
              func_0x000107c6142c(puVar6);
              return;
            }
          }
          func_0x000107c3e1b4();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          func_0x000107c6142c(puVar6);
          if (param_2 != 0) {
            func_0x000107c61170(param_2);
            *(undefined1 *)(uVar1 + _DAT_112f185e0) = 1;
          }
        }
      }
    }
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 102dc9194; end: 102dc91e7; -[_TtC27FriendingInteractivePopover35FriendingInteractivePopoverWorkflow didStartSnapchattersUpdateDataRequest:] */

/* WARNING: Possible PIC construction at 0x000102dc91d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc91d4) */

void FUN_102dc9194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102dc8ef8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102dc91e8; end: 102dc91eb; -[_TtC27FriendingInteractivePopover35FriendingInteractivePopoverWorkflow didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_102dc91e8(void)

{
  return;
}



/* Entry: 102dc91ec; end: 102dc9317;  */

void FUN_102dc91ec(byte param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar6 = 0x800000010f10dd60;
  uVar2 = 0xd000000000000010;
  if (param_1 != 4) {
    uVar6 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  uVar5 = 0xed00006e776f6873;
  uVar3 = 0x5f79646165726c61;
  if (param_1 != 3) {
    uVar5 = uVar6;
    uVar3 = uVar2;
  }
  uVar6 = 0x800000010f10dd80;
  uVar2 = 0xd000000000000010;
  if (param_1 != 1) {
    uVar6 = 0xe600000000000000;
    uVar2 = 0x6572756e6574;
  }
  uVar1 = 0x800000010f10dda0;
  uVar4 = 0xd000000000000010;
  if (param_1 != 0) {
    uVar1 = uVar6;
    uVar4 = uVar2;
  }
  if (param_1 < 3) {
    uVar5 = uVar1;
    uVar3 = uVar4;
  }
  func_0x000107c5fb58(auStack_78,uVar3,uVar5);
  func_0x000107c6142c();
  func_0x000107c606a8();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
    do {
      if (*(byte *)(*(long *)(unaff_x20 + 0x30) + uVar5) == param_1) {
        return;
      }
      uVar5 = uVar5 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
    return;
  }
  return;
}



/* Entry: 102dc9318; end: 102dc937f;  */

void FUN_102dc9318(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 102dc9380; end: 102dc94db;  */

void FUN_102dc9380(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112f187a0,&UNK_10db4f080);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_102dc945c;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined1 *)(*(long *)(lVar4 + 0x30) + uVar8) =
             *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61434();
        if (uVar6 != 0) break;
LAB_102dc945c:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102dc94dc);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_102dc94b4;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_102dc94b4:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102dc94dc; end: 102dc966b;  */

void FUN_102dc94dc(long param_1,ulong param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar7 = *unaff_x20;
  lVar5 = *(long *)(lVar7 + 0x18);
  if (*(long *)(lVar7 + 0x18) <= param_1) {
    lVar5 = param_1;
  }
  uVar9 = 0x112f187a0;
  func_0x0001000285a8(0x112f187a0,&UNK_10db4f080);
  lVar3 = lVar7;
  func_0x000107c60490(lVar7,lVar5,param_2,uVar9);
  if (*(long *)(lVar7 + 0x10) == 0) {
LAB_102dc9640:
    func_0x000107c61574(lVar7);
    *unaff_x20 = lVar3;
    return;
  }
  puVar8 = (ulong *)(lVar7 + 0x40);
  uVar6 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(lVar7 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  lVar5 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar10 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102dc966c);
          (*pcVar2)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar10) {
          if ((param_2 & 1) != 0) {
            uVar11 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
            if ((*(byte *)(lVar7 + 0x20) & 0x3f) < 6) {
              *puVar8 = -1L << (uVar11 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar8,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar7 + 0x10) = 0;
          }
          goto LAB_102dc9640;
        }
        uVar11 = puVar8[lVar10];
        lVar5 = lVar5 + 1;
      } while (uVar11 == 0);
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar10 = lVar5;
    }
    uVar4 = LZCOUNT(uVar4) | lVar10 << 6;
    uVar1 = *(undefined1 *)(*(long *)(lVar7 + 0x30) + uVar4);
    uVar9 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar4 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar9);
    }
    FUN_102dc966c(uVar1,uVar9,lVar3);
    lVar5 = lVar10;
  } while( true );
}



/* Entry: 102dc966c; end: 102dc97eb;  */

void FUN_102dc966c(byte param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(param_3 + 0x28));
  uVar7 = 0x800000010f10dd60;
  uVar3 = 0xd000000000000010;
  if (param_1 != 4) {
    uVar7 = 0xe700000000000000;
    uVar3 = 0x6e776f6e6b6e75;
  }
  uVar6 = 0xed00006e776f6873;
  uVar4 = 0x5f79646165726c61;
  if (param_1 != 3) {
    uVar6 = uVar7;
    uVar4 = uVar3;
  }
  uVar7 = 0x800000010f10dd80;
  uVar3 = 0xd000000000000010;
  if (param_1 != 1) {
    uVar7 = 0xe600000000000000;
    uVar3 = 0x6572756e6574;
  }
  uVar2 = 0x800000010f10dda0;
  uVar5 = 0xd000000000000010;
  if (param_1 != 0) {
    uVar2 = uVar7;
    uVar5 = uVar3;
  }
  if (param_1 < 3) {
    uVar6 = uVar2;
    uVar4 = uVar5;
  }
  func_0x000107c5fb58(auStack_78,uVar4,uVar6);
  func_0x000107c6142c();
  func_0x000107c606a8();
  lVar1 = param_3 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
  func_0x000107c60274(uVar6,lVar1,~uVar7);
  uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar7);
  *(byte *)(*(long *)(param_3 + 0x30) + uVar6) = param_1;
  *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar6 * 8) = param_2;
  *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + 1;
  return;
}



/* Entry: 102dc97ec; end: 102dc982b;  */

void FUN_102dc97ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dc982c,0,0);
  return;
}



/* Entry: 102dc982c; end: 102dc984b;  */

void FUN_102dc982c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102dc9838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102dc984c; end: 102dc986b;  */

void FUN_102dc984c(void)

{
  func_0x000107c61168(&PTR_PTR_112f186e0);
  return;
}



/* Entry: 102dc986c; end: 102dc9873;  */

void FUN_102dc986c(void)

{
  if (lRam0000000112f18770 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e730804);
  return;
}



/* Entry: 102dc9874; end: 102dc98ab;  */

void FUN_102dc9874(undefined8 param_1)

{
  if (lRam0000000112f18770 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e730804);
  return;
}



/* Entry: 102dc98ac; end: 102dc99b7;  */

void FUN_102dc98ac(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_130 = &UNK_10db4ef98;
  puStack_128 = &UNK_10db4ef98;
  puStack_118 = PTR___sBoWV_11034d678 + 0x40;
  puStack_120 = &UNK_10db4ef98;
  puStack_110 = &UNK_10db4ef98;
  puStack_108 = &UNK_10db4ef98;
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  puStack_f8 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_c8 = &UNK_10db4efb0;
  puStack_c0 = &UNK_10db4ef98;
  puStack_b8 = &UNK_10db4efb0;
  puStack_98 = &UNK_10db4ef98;
  lVar2 = 0x13f;
  puStack_100 = puVar1;
  puStack_f0 = puVar1;
  puStack_e8 = puVar1;
  puStack_e0 = puVar1;
  puStack_d8 = puVar1;
  puStack_d0 = puVar1;
  puStack_b0 = puVar1;
  puStack_a8 = puStack_118;
  puStack_a0 = puStack_118;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_90 = *(long *)(lVar2 + -8) + 0x40;
    puStack_88 = &UNK_10db4efc8;
    puStack_80 = &UNK_10db4ef98;
    puStack_78 = &UNK_10db4efe0;
    puStack_68 = &UNK_10db4eff8;
    puStack_60 = &UNK_10db4f010;
    puStack_58 = &UNK_10db4f010;
    puStack_50 = &UNK_10db4f010;
    puStack_38 = PTR___sBbWV_11034d660 + 0x40;
    puStack_40 = &UNK_10db4f010;
    puStack_70 = puVar1;
    puStack_48 = puVar1;
    func_0x000107c61630(param_1,0x100,0x20,&puStack_130,param_1 + 0x50);
  }
  return;
}



/* Entry: 102dc99b8; end: 102dc99c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc99b8(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    puVar1 = (undefined4 *)(lVar4 + _DAT_112f185b8);
    *puVar1 = *(undefined4 *)(param_1 + _DAT_11307d738);
    *(undefined1 *)(puVar1 + 1) = 0;
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(lVar4 + _DAT_112f18680);
    lVar3 = ((undefined8 *)(lVar4 + _DAT_112f18680))[1];
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c614f0(uVar2);
    FUN_102dc4694();
    (**(code **)(lVar3 + 0x10))();
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 102dc99c8; end: 102dc9ab3;  */

undefined * FUN_102dc99c8(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    uVar4 = 0;
    func_0x0001000285a8(0x112f187a0);
    puVar3 = puVar6;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      bVar1 = *(byte *)(puVar9 + -1);
      uVar8 = (ulong)bVar1;
      uVar7 = *puVar9;
      func_0x000107c61434(uVar7);
      FUN_102dc91ec();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102dc9ab0);
        (*pcVar2)();
      }
      uVar5 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar8 & 0x3f);
      *(byte *)(*(long *)(puVar3 + 0x30) + uVar8) = bVar1;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar8 * 8) = uVar7;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102dc9ab4);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar6 = puVar6 + -1;
      puVar9 = puVar9 + 2;
    } while (puVar6 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 102dc9ab4; end: 102dc9b67;  */

void FUN_102dc9ab4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  lVar11 = *(long *)(unaff_x20 + 0x50);
  lVar10 = *(long *)(unaff_x20 + 0x48);
  lVar8 = *(long *)(unaff_x20 + 0x58);
  plVar7 = (long *)0xac0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102dc9b68;
  plVar7[0x14e] = lVar8;
  plVar7[0x14d] = lVar11;
  plVar7[0x14c] = lVar10;
  plVar7[0x14b] = lVar9;
  plVar7[0x145] = lVar6;
  plVar7[0x13f] = lVar3;
  plVar7[0x139] = lVar5;
  plVar7[0x133] = lVar2;
  plVar7[0x12d] = lVar4;
  plVar7[0x127] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dc581c,0,0);
  return;
}



/* Entry: 102dc9b68; end: 102dc9ba3;  */

void FUN_102dc9b68(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102dc9ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102dc9ba4; end: 102dc9c1b;  */

void FUN_102dc9ba4(long param_1)

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
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102dca71c;
  plVar5[5] = lVar2;
  plVar5[6] = lVar4;
  plVar5[3] = lVar1;
  plVar5[4] = lVar3;
  plVar5[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dc6478,0,0);
  return;
}



/* Entry: 102dc9c1c; end: 102dc9c87;  */

void FUN_102dc9c1c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102dc9c88;
  plVar3[0xc] = lVar2;
  plVar3[0xd] = lVar4;
  plVar3[10] = param_1;
  plVar3[0xb] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dc6700,0,0);
  return;
}



/* Entry: 102dc9c88; end: 102dc9cc3;  */

void FUN_102dc9c88(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x280));
                    /* WARNING: Could not recover jumptable at 0x000102dc9cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102dc9cc4; end: 102dc9d2f;  */

void FUN_102dc9cc4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102dca720;
  plVar3[0xc] = lVar2;
  plVar3[0xd] = lVar4;
  plVar3[10] = param_1;
  plVar3[0xb] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102dc67b8,0,0);
  return;
}



/* Entry: 102dc9d30; end: 102dc9d77;  */

void FUN_102dc9d30(void)

{
  long unaff_x20;
  
  FUN_102dc681c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined1 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102dc9d78; end: 102dc9d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc9d78(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    (**(code **)(*(long *)(unaff_x20 + 0x18) + _DAT_113021ee0))();
  }
  return;
}



/* Entry: 102dc9d80; end: 102dc9dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc9d80(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    (**(code **)(*(long *)(unaff_x20 + 0x18) + _DAT_113021ee0))();
  }
  return;
}



/* Entry: 102dc9dc0; end: 102dc9e6f;  */

void FUN_102dc9dc0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102dc9e70; end: 102dc9e7b;  */

void FUN_102dc9e70(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(ulong *)(unaff_x20 + 0x28);
  lVar5 = *param_1;
  func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000107c61170();
    bVar4 = false;
    if (*(long *)(lVar5 + 0x10) == 0) goto LAB_102dc7c64;
    func_0x000107c61434(lVar5);
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      lVar6 = *(long *)(*(long *)(lVar5 + 0x38) + lVar2 * 8);
      func_0x000107c6142c(lVar5);
      bVar4 = 0 < lVar6;
      goto LAB_102dc7c64;
    }
    func_0x000107c6142c(lVar5);
  }
  bVar4 = false;
LAB_102dc7c64:
  *(bool *)*(undefined8 *)(*(long *)(lVar1 + 0x40) + 0x28) = bVar4;
  func_0x000107c6144c(lVar1);
  return;
}



/* Entry: 102dc9e7c; end: 102dc9fd3;  */

undefined * FUN_102dc9e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [80];
  
  puVar6 = auStack_90;
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  FUN_102dc3c3c(param_1,param_2,param_3);
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  FUN_102dca630((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0x6e69646e65697266;
  func_0x000107c5fadc(0x6e69646e65697266,0xe900000000000067);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 102dc9fd4; end: 102dca54f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dc9fd4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_130 [8];
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar2 = 0;
  lStack_b8 = param_1;
  func_0x000107c5f7fc();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar3 = 0;
  puStack_c0 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f824();
  lStack_d0 = *(long *)(lVar3 + -8);
  lStack_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d0 + 0x40));
  lVar12 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_d8 = lVar12;
  func_0x000107c5f7f0();
  lStack_f0 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_f8 = lVar12;
  func_0x000107c5f83c();
  lStack_100 = *(long *)(lVar4 + -8);
  lStack_e0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_100 + 0x40));
  lVar12 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = 0;
  lStack_e8 = lVar12 - extraout_x12;
  func_0x000107c5f804();
  lVar16 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar13 = (lVar12 - extraout_x12) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_2 + _DAT_112f18628);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    lStack_120 = lVar3;
    lStack_110 = lVar15;
    lStack_108 = lVar2;
    FUN_102dc984c();
    func_0x000107c613fc();
    puVar7 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar6 + 0x10) = puVar7;
    *(undefined1 *)(lVar6 + 0x18) = 0;
    lVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = param_3;
    *(undefined8 *)(lVar2 + 0x28) = param_4;
    func_0x000107c61434(param_4);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar2);
    puVar7 = &UNK_1105d1c50;
    func_0x000107c613fc(&UNK_1105d1c50,0x30,7);
    *(long *)(puVar7 + 0x10) = lVar6;
    *(undefined8 *)(puVar7 + 0x18) = param_3;
    *(undefined8 *)(puVar7 + 0x20) = param_4;
    *(long *)(puVar7 + 0x28) = lStack_b8;
    pcStack_88 = FUN_102dca594;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = FUN_1024dc3a4;
    puStack_90 = &UNK_1105d1c68;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_80;
    func_0x000107c61434(param_4);
    func_0x000107c6157c(lVar6);
    func_0x000107c61574(puVar7);
    lStack_118 = lVar5;
    func_0x000107c43278(lVar5);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar3);
    func_0x000102dca5e8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    (**(code **)(lVar16 + 0x68))
              (lVar13,*(undefined4 *)
                       PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar4);
    lVar2 = lVar13;
    func_0x000107c5fff0();
    lStack_128 = lVar2;
    (**(code **)(lVar16 + 8))(lVar13,lVar4);
    func_0x000107c5f830(lVar12);
    if (lRam0000000112f18780 != -1) {
      func_0x000107c61568(0x112f18780,FUN_102dc793c);
    }
    lVar2 = lStack_120;
    lVar5 = lStack_120;
    func_0x000100028790(lStack_120,0x112f18788);
    lVar4 = lStack_f0;
    lVar3 = lStack_f8;
    (**(code **)(lStack_f0 + 0x10))(lStack_f8,lVar5,lVar2);
    lVar5 = lStack_e8;
    func_0x000107c5f858(lStack_e8,lVar12,lVar3);
    (**(code **)(lVar4 + 8))(lVar3,lVar2);
    lVar4 = lStack_e0;
    pcVar14 = *(code **)(lStack_100 + 8);
    (*pcVar14)(lVar12,lStack_e0);
    puVar7 = &UNK_1105d1ca0;
    func_0x000107c613fc(&UNK_1105d1ca0,0x20,7);
    *(long *)(puVar7 + 0x10) = lVar6;
    *(long *)(puVar7 + 0x18) = lStack_b8;
    pcStack_88 = (code *)0x102dca5a0;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_1000b0c7c;
    puStack_90 = &UNK_1105d1cb8;
    ppuVar8 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c6157c(lVar6);
    lVar12 = lStack_d8;
    func_0x000107c5f808(lStack_d8);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar9 = 0x112d4af88;
    func_0x000102dca5a8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar10 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar11 = uVar10;
    func_0x0001001c7f30();
    puVar1 = puStack_c0;
    lVar3 = lStack_108;
    func_0x000107c60264(puStack_c0,&puStack_b0,uVar10,uVar11,lStack_108,uVar9);
    lVar2 = lStack_128;
    func_0x000107c5ffc8(lVar5,lVar12,puVar1,ppuVar8);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(lVar6);
    func_0x000107c615e8(lStack_118);
    func_0x000107c61170(lVar2);
    (**(code **)(lStack_110 + 8))(puVar1,lVar3);
    (**(code **)(lStack_d0 + 8))(lVar12,lStack_c8);
    (*pcVar14)(lVar5,lVar4);
    func_0x000107c61574(puStack_80);
    return;
  }
  **(undefined1 **)(*(long *)(lStack_b8 + 0x40) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 102dca550; end: 102dca593;  */

void FUN_102dca550(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102dca594; end: 102dca5a7;  */

/* WARNING: Possible PIC construction at 0x000102dc774c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc7814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102dc77a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dc7818) */
/* WARNING: Removing unreachable block (ram,0x000102dc782c) */
/* WARNING: Removing unreachable block (ram,0x000102dc7780) */
/* WARNING: Removing unreachable block (ram,0x000102dc7834) */
/* WARNING: Removing unreachable block (ram,0x000102dc7854) */
/* WARNING: Removing unreachable block (ram,0x000102dc785c) */
/* WARNING: Removing unreachable block (ram,0x000102dc7750) */
/* WARNING: Removing unreachable block (ram,0x000102dc7754) */
/* WARNING: Removing unreachable block (ram,0x000102dc7874) */
/* WARNING: Removing unreachable block (ram,0x000102dc7878) */
/* WARNING: Removing unreachable block (ram,0x000102dc7764) */
/* WARNING: Removing unreachable block (ram,0x000102dc7888) */
/* WARNING: Removing unreachable block (ram,0x000102dc776c) */
/* WARNING: Removing unreachable block (ram,0x000102dc77ac) */
/* WARNING: Removing unreachable block (ram,0x000102dc7848) */
/* WARNING: Removing unreachable block (ram,0x000102dc7864) */
/* WARNING: Removing unreachable block (ram,0x000102dc7890) */
/* WARNING: Removing unreachable block (ram,0x000102dc77b8) */
/* WARNING: Removing unreachable block (ram,0x000102dc7838) */
/* WARNING: Removing unreachable block (ram,0x000102dc77c0) */
/* WARNING: Removing unreachable block (ram,0x000102dc7870) */
/* WARNING: Removing unreachable block (ram,0x000102dc77cc) */
/* WARNING: Removing unreachable block (ram,0x000102dc77d8) */
/* WARNING: Removing unreachable block (ram,0x000102dc786c) */
/* WARNING: Removing unreachable block (ram,0x000102dc77e4) */
/* WARNING: Removing unreachable block (ram,0x000102dc77a4) */
/* WARNING: Removing unreachable block (ram,0x000102dc77f8) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_102dca594(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c4b940(uVar2,param_2,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  if (*(char *)(lVar1 + 0x18) != '\x01') {
    *(undefined1 *)(lVar1 + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 102dca5a8; end: 102dca627;  */

void FUN_102dca5a8(long *param_1,code *param_2,long param_3)

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



/* Entry: 102dca628; end: 102dca62f;  */

void FUN_102dca628(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    **(long **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar1);
    return;
  }
  FUN_102dc9e7c(0,0,2,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *plVar3 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar1,uVar2);
  return;
}



/* Entry: 102dca630; end: 102dca6b7;  */

undefined8 FUN_102dca630(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}


