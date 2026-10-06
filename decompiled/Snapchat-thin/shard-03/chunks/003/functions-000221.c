/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027484e0; end: 102748507;  */

void FUN_1027484e0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102748508; end: 102748707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102748508(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ebbcc0);
    func_0x000107c6157c(uVar2);
    func_0x000100075034(FUN_102747ff0,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 102748708; end: 102748717;  */

undefined1  [16] FUN_102748708(void)

{
  return ZEXT816(0x110543378);
}



/* Entry: 102748718; end: 102748737;  */

void FUN_102748718(void)

{
  func_0x000107c61168(&PTR_PTR_11285eb68);
  return;
}



/* Entry: 102748738; end: 10274889b;  */

int FUN_102748738(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1027487b4;
        goto LAB_102748798;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102748798:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1027487b4:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10274889c; end: 1027488ef;  */

long FUN_10274889c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1027488f0; end: 10274898b;  */

undefined8 * FUN_1027488f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c6160c(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10274898c; end: 1027489b7;  */

undefined8 * FUN_10274898c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61620(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 1027489b8; end: 102748a03;  */

undefined8 * FUN_1027489b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61574(uVar1);
  func_0x000107c6161c(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 102748a04; end: 102748a9f;  */

int FUN_102748a04(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102748aa0; end: 102748adf;  */

void FUN_102748aa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebbd38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad4d54;
  func_0x000107c61520(&UNK_10dad4d54,&UNK_110543408);
  puRam0000000112ebbd38 = puVar1;
  return;
}



/* Entry: 102748ae0; end: 102748bd7;  */

undefined8 * FUN_102748ae0(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  func_0x000107c61620(param_2 + 1,param_1 + 1);
  return param_2;
}



/* Entry: 102748bd8; end: 102748c93;  */

void FUN_102748bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebbd40,&UNK_10dad4dc0);
  puVar1 = &UNK_110543610;
  func_0x000107c613fc(&UNK_110543610,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_102748c94,puVar1);
  return;
}



/* Entry: 102748c94; end: 102748f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102748c94(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar6 = &lStack_70;
  plVar9 = &lStack_70;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_10274cc7c();
  lVar5 = param_2;
  func_0x000107c610f8();
  lVar4 = _DAT_112ebbd48;
  lStack_70 = 0;
  func_0x0001000285a8(0x112ebbd50,&UNK_10dad4dc8);
  func_0x000107c613fc();
  func_0x00010006c248();
  *(long **)(lVar5 + lVar4) = plVar6;
  uVar7 = 0x112ebbd58;
  func_0x0001000285a8(0x112ebbd58,&UNK_10dad4dd0);
  pcVar8 = FUN_10274909c;
  func_0x00010072927c(FUN_10274909c,0,uVar7);
  *(code **)(lVar5 + _DAT_112ebbd60) = pcVar8;
  *(undefined8 *)(lVar5 + _DAT_112ebbd68) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112ebbd70) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112ebbd78) = uVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  uVar7 = 0x112ebbd80;
  func_0x0001000285a8(0x112ebbd80,&UNK_10dad4dd8);
  pcVar8 = FUN_1027490ec;
  func_0x00010072927c(FUN_1027490ec,0,uVar7);
  *(code **)(lVar5 + _DAT_112ebbd88) = pcVar8;
  lStack_70 = lVar5;
  lStack_68 = param_2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar9;
  return;
}



/* Entry: 102748f84; end: 102748f97;  */

bool FUN_102748f84(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102748f98; end: 102749043;  */

void FUN_102748f98(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102749044; end: 10274909b;  */

undefined1  [16] FUN_102749044(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0xd000000000000035;
  pcVar2 = "rviceSnapDocBundle";
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xd000000000000023;
    pcVar2 = "d camera roll SnapDoc";
  }
  auVar3._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10274909c; end: 1027490eb;  */

void FUN_10274909c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c41408();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1027490ec; end: 10274915b;  */

void FUN_1027490ec(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10dad4f88;
  func_0x000107c614e0(&UNK_10dad4f88);
  uVar2 = *param_2;
  uStack_38 = uVar2;
  func_0x000107c61174();
  func_0x000107c614bc(param_1,&uStack_38,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10274915c; end: 102749173;  */

void FUN_10274915c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102749174,0,0);
  return;
}



/* Entry: 102749174; end: 102749263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102749174(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  puVar3 = *(undefined1 **)(lVar5 + _DAT_112ff76b8);
  func_0x000107c61174();
  func_0x000107c61170(lVar5);
  puVar4 = puVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar4 == (undefined1 *)0x0) {
    FUN_10274dbb4();
    func_0x000107c613f8(&UNK_110543998,puVar3,0,0);
    *puVar3 = 0;
    func_0x000107c61654();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar1 = *(undefined8 **)(unaff_x22 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000107c53fcc(puVar4);
    func_0x000107c615e8(puVar4);
    *puVar1 = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    func_0x000107c61174(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102749260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102749264; end: 10274932b; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementation47MemTwoLandingPageSnapDocSendServiceProviderImpl getSnapDocSendService] */

void FUN_102749264(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112ebbd90,&UNK_10dad4de0);
  puVar1 = &UNK_110543770;
  func_0x000107c613fc(&UNK_110543770,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar2 = 0x40;
  func_0x000104887c7c(0x40,0,0x48,3,0xd000000000000017,0x800000010f0b9860,&UNK_10dad4ef0,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000103edf0bc();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10274932c; end: 102749453;  */

undefined8 FUN_10274932c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  uVar3 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001000285a8(0x112ebb4f8,&UNK_10dad3f50);
  puVar1 = &UNK_110543638;
  func_0x000107c613fc(&UNK_110543638,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  func_0x000107c61434(param_1);
  func_0x000107c615f0(param_2);
  uVar2 = 0x40;
  func_0x000104887c7c(0x40,0,0x48,3,0xd00000000000002d,0x800000010f0b9880,&UNK_10dad4df8,puVar1);
  func_0x000107c61574(puVar1);
  uVar3 = 0;
  func_0x00010488a3ec(0,1,FUN_10274b3a8,0);
  func_0x000107c61574(uVar2);
  func_0x000103edf0bc();
  func_0x000107c61574(uVar3);
  return uVar2;
}



/* Entry: 102749454; end: 1027494cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102749454(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  undefined1 *puVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  long unaff_x22;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  int *piVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(long **)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = puVar6;
  plVar3 = (long *)0x350;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027494cc;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3[0x4c] = (long)param_2;
  plVar3[0x4b] = unaff_x22 + 0x10;
  plVar3[0x4a] = param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    pcVar2 = FUN_102749ad8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = plVar3[0x4a];
  if (uVar13 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar4 = uVar13;
    }
    func_0x000107c60480();
  }
  plVar3[0x4d] = uVar4;
  plVar3[0x4e] = _DAT_112ebbd78;
  plVar3[0x4f] = _DAT_112ebbd88;
  if (uVar4 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x000102749c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar3[1])(PTR___swiftEmptyArrayStorage_11034f1c8);
      return;
    }
LAB_102749c3c:
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = *plVar3;
    plVar3 = (long *)*plVar3;
    *(long **)(lVar14 + 0x2a8) = param_2;
    func_0x000107c615c0(*(undefined8 *)(lVar14 + 0x2a0));
    func_0x000107c61170(*(undefined8 *)(lVar14 + 0x298));
    if (param_2 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_102749cf0;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      pcVar2 = FUN_10274b33c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11 = plVar3 + 8;
    if (*plVar11 == 0) {
      func_0x00010274dd58(plVar11,0x112ebbe10,&UNK_10dad4f60);
      lVar14 = 0;
    }
    else {
      plVar5 = plVar3 + 2;
      puVar18 = (ulong *)plVar3[0x4b];
      plVar3[3] = plVar3[9];
      *plVar5 = *plVar11;
      plVar3[5] = plVar3[0xb];
      plVar3[4] = plVar3[10];
      plVar3[7] = plVar3[0xd];
      plVar3[6] = plVar3[0xc];
      FUN_10274dd08(plVar5,plVar3 + 0x26);
      lVar14 = plVar3[0x26];
      func_0x0001000834e4(plVar3 + 0x27);
      FUN_10274dd08(plVar5,plVar3 + 0x2c);
      func_0x000107c61170(plVar3[0x2c]);
      uVar19 = *puVar18;
      uVar13 = uVar19;
      func_0x000107c61558();
      uVar4 = uVar19;
      if ((uVar13 & 1) == 0) {
        uVar4 = 0;
        func_0x000100fb5010(0,*(long *)(uVar19 + 0x10) + 1,1,uVar19);
      }
      uVar13 = *(ulong *)(uVar4 + 0x10);
      uVar19 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar13) {
        uVar19 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        func_0x000100fb5010(uVar19,uVar13 + 1,1,uVar4);
      }
      puVar18 = (ulong *)plVar3[0x4b];
      *(ulong *)(uVar19 + 0x10) = uVar13 + 1;
      func_0x000100fb8694(plVar3 + 0x2d,uVar19 + uVar13 * 0x28 + 0x20);
      func_0x00010274dd58(plVar5,0x112ebbe18,&UNK_10dad4f68);
      *puVar18 = uVar19;
    }
    plVar3[0x56] = lVar14;
    uVar13 = plVar3[0x51];
    func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,PTR_s_multisnap_112612448);
    if ((uVar13 & 1) == 0) {
LAB_102749e74:
      puVar32 = (undefined *)0x0;
      plVar3[0x57] = 0;
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar6 = (undefined *)plVar3[0x51];
      func_0x000107c4d1e0();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) goto LAB_102749e74;
      uVar7 = 0;
      FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
      puVar32 = puVar6;
      func_0x000107c5fc54(puVar6,uVar7);
      func_0x000107c61170(puVar6);
      plVar3[0x57] = (long)puVar32;
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar32 != (undefined *)0x0) {
        puVar6 = puVar32;
      }
    }
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar15 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar15 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar6) {
        puVar15 = puVar6;
      }
      func_0x000107c60480();
    }
    plVar3[0x59] = (long)puVar15;
    plVar3[0x58] = (ulong)puVar6 & 0xffffffffffffff8;
    plVar3[0x5a] = *(long *)(plVar3[0x4c] + plVar3[0x4e]);
    plVar3[0x5b] = *(long *)(plVar3[0x4c] + plVar3[0x4f]);
    plVar3[0x5c] = 0;
    func_0x000107c61434(puVar32);
    if (puVar15 != (undefined *)0x0) {
      uVar13 = 0;
      while( true ) {
        plVar3[0x5d] = uVar13;
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((undefined *)plVar3[0x57] != (undefined *)0x0) {
          puVar6 = (undefined *)plVar3[0x57];
        }
        if (((ulong)puVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)(plVar3[0x58] + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a474);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(puVar6 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar13;
          func_0x000101016c54();
        }
        plVar3[0x5e] = uVar4;
        plVar3[0x5f] = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a470);
          (*pcVar2)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar13 = uVar4;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar4);
        puVar32 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar4 = uVar13;
        func_0x000107c5ee20(uVar13,puVar6);
        plVar3[0x48] = 0;
        func_0x000107c4636c();
        plVar3[0x60] = (long)puVar32;
        func_0x000107c61170(uVar4);
        lVar14 = plVar3[0x48];
        if (puVar32 == (undefined *)0x0) {
          lVar31 = lVar14;
          func_0x000107c61174();
          func_0x000107c5ed30(lVar14);
          func_0x000107c61170(lVar31);
          func_0x000107c61654();
          func_0x000107c614ac(lVar14);
          func_0x00010006c090(uVar13,puVar6);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar13,puVar6);
          func_0x000100083b20(plVar3 + 0x32);
          lVar14 = plVar3[0x35];
          lVar31 = plVar3[0x36];
          func_0x0001000a8868(plVar3 + 0x32,lVar14);
          puVar6 = puVar32;
          (**(code **)(lVar31 + 8))(puVar32,lVar14,lVar31);
          func_0x0001000834e4(plVar3 + 0x32);
          if (((ulong)puVar6 & 1) != 0) {
            func_0x000100083b20(plVar3 + 0x37);
            pcVar2 = (code *)plVar3[0x3a];
            lVar14 = plVar3[0x3b];
            param_2 = plVar3 + 0x37;
            UNRECOVERED_JUMPTABLE = pcVar2;
            func_0x0001000a8868();
            piVar28 = *(int **)(lVar14 + 0x18);
            iVar1 = *piVar28;
            plVar5 = (long *)(ulong)(uint)piVar28[1];
            func_0x000107c615b8();
            plVar3[0x61] = (long)plVar5;
            *plVar5 = (long)plVar3;
            plVar5[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar28))(puVar32,pcVar2,lVar14);
              return;
            }
            goto LAB_10274a564;
          }
          func_0x000107c61170(puVar32);
        }
        plVar3[0x17] = 0;
        plVar3[0x16] = 0;
        plVar3[0x19] = 0;
        plVar3[0x18] = 0;
        plVar3[0x15] = 0;
        plVar3[0x14] = 0;
        lVar14 = plVar3[0x5f];
        lVar31 = plVar3[0x59];
        func_0x000107c61170(plVar3[0x5e]);
        func_0x00010274dd58(plVar3 + 0x14,0x112ebbe10,&UNK_10dad4f60);
        if (lVar14 == lVar31) break;
        uVar13 = plVar3[0x5f];
      }
    }
    lVar14 = plVar3[0x56];
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((undefined *)plVar3[0x57] != (undefined *)0x0) {
      puVar6 = (undefined *)plVar3[0x57];
    }
    func_0x000107c6142c(puVar6);
    lVar31 = plVar3[0x5c];
    if (lVar14 == 0) {
      if (lVar31 != 0) {
        lVar20 = plVar3[0x51];
        func_0x000107c4e090();
        func_0x000107c61180();
        lVar14 = 0;
        lVar31 = plVar3[0x5c];
        goto LAB_10274a0e0;
      }
      lVar14 = plVar3[0x51];
      plVar21 = (long *)plVar3[0x50];
      func_0x000107c6142c(plVar3[0x57]);
      func_0x000107c615f0(lVar14);
      plVar5 = plVar21;
      func_0x000107c61550();
      plVar24 = (long *)plVar3[0x50];
      if ((((int)plVar5 == 0) || (((ulong)plVar21 >> 0x3e & 1) != 0)) ||
         (plVar5 = plVar24, (long)plVar24 < 0)) {
        if ((ulong)plVar24 >> 0x3e == 0) {
          plVar21 = *(long **)(((ulong)plVar21 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar21 = (long *)((ulong)plVar21 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar24) {
            plVar21 = plVar24;
          }
          func_0x000107c60480(plVar21);
          plVar24 = (long *)plVar3[0x50];
        }
        plVar5 = (long *)0x0;
        FUN_102738e9c(0,(long)plVar21 + 1,1,plVar24);
        plVar21 = plVar5;
      }
      uVar4 = (ulong)plVar21 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar4 + 0x10);
      param_2 = plVar5;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar13) {
        param_2 = (long *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_102738e9c(param_2,uVar13 + 1,1,plVar5);
        uVar4 = (ulong)param_2 & 0xffffffffffffff8;
      }
      plVar5 = (long *)plVar3[0x51];
      *(ulong *)(uVar4 + 0x10) = uVar13 + 1;
      *(long **)(uVar4 + uVar13 * 8 + 0x20) = plVar5;
      func_0x000107c615e8();
    }
    else {
      lVar20 = plVar3[0x56];
      lVar14 = lVar20;
      if (lVar31 == 0) {
        func_0x000107c61174();
        plVar5 = plVar3 + 0x57;
      }
      else {
LAB_10274a0e0:
        plVar5 = plVar3 + 0x5c;
        lVar25 = plVar3[0x57];
        func_0x000107c61434(lVar31);
        func_0x000107c61174(lVar14);
        func_0x000107c6142c(lVar25);
      }
      lVar14 = *plVar5;
      uVar13 = plVar3[0x51];
      func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130
                         );
      if ((uVar13 & 1) == 0) {
LAB_10274a16c:
        uVar4 = 0;
      }
      else {
        uVar13 = plVar3[0x51];
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar13 == 0) goto LAB_10274a16c;
        uVar7 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar4 = uVar13;
        func_0x000107c5fc54(uVar13,uVar7);
        func_0x000107c61170();
      }
      plVar24 = (long *)plVar3[0x50];
      FUN_10274ce90();
      uVar19 = uVar13;
      func_0x000107c610f8();
      lVar31 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar19 + _DAT_112ebbdc8) = 0;
      lVar25 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar19 + _DAT_112ebbdd0) = 0;
      *(long *)(uVar19 + _DAT_112ebbdc0) = lVar20;
      *(long *)(uVar19 + lVar31) = lVar14;
      *(ulong *)(uVar19 + lVar25) = uVar4;
      plVar3[0x46] = uVar19;
      plVar3[0x47] = uVar13;
      plVar21 = plVar3 + 0x46;
      func_0x000107c61154(plVar21,PTR_s_init_1125d9248);
      plVar5 = plVar24;
      func_0x000107c61550();
      plVar16 = (long *)plVar3[0x50];
      if ((((int)plVar5 == 0) || (((ulong)plVar24 >> 0x3e & 1) != 0)) ||
         (plVar5 = plVar16, (long)plVar16 < 0)) {
        if ((ulong)plVar16 >> 0x3e == 0) {
          plVar24 = *(long **)(((ulong)plVar24 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar24 = (long *)((ulong)plVar24 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar16) {
            plVar24 = plVar16;
          }
          func_0x000107c60480(plVar24);
          plVar16 = (long *)plVar3[0x50];
        }
        plVar5 = (long *)0x0;
        FUN_102738e9c(0,(long)plVar24 + 1,1,plVar16);
        plVar24 = plVar5;
      }
      uVar4 = (ulong)plVar24 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar4 + 0x10);
      param_2 = plVar5;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar13) {
        param_2 = (long *)(ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_102738e9c(param_2,uVar13 + 1,1,plVar5);
        uVar4 = (ulong)param_2 & 0xffffffffffffff8;
      }
      plVar5 = (long *)plVar3[0x5c];
      lVar31 = plVar3[0x56];
      lVar14 = plVar3[0x51];
      *(ulong *)(uVar4 + 0x10) = uVar13 + 1;
      *(long **)(uVar4 + uVar13 * 8 + 0x20) = plVar21;
      func_0x000107c615e8(lVar14);
      func_0x000107c61170(lVar31);
      func_0x000107c6142c();
    }
    uVar4 = plVar3[0x52];
    if (uVar4 == plVar3[0x4d]) {
      UNRECOVERED_JUMPTABLE = (code *)plVar3[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_2);
        return;
      }
    }
    else {
      plVar3[0x50] = (long)param_2;
      UNRECOVERED_JUMPTABLE = (code *)plVar3[0x4a];
      if (((ulong)UNRECOVERED_JUMPTABLE & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a510);
          (*pcVar2)();
        }
        uVar13 = *(ulong *)(UNRECOVERED_JUMPTABLE + uVar4 * 8 + 0x20);
        func_0x000107c615f0();
      }
      else {
        uVar13 = uVar4;
        FUN_10274d138();
      }
      plVar3[0x51] = uVar13;
      plVar3[0x52] = uVar4 + 1;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a50c);
        (*pcVar2)();
      }
      func_0x000107c4e090();
      func_0x000107c61180();
      plVar3[0x53] = uVar13;
      plVar5 = (long *)0x120;
      func_0x000107c615b8();
      plVar3[0x54] = (long)plVar5;
      *plVar5 = (long)plVar3;
      plVar5[1] = (long)FUN_102749c40;
      param_2 = (long *)plVar3[0x4c];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) goto FUN_10274bdac;
    }
LAB_10274a564:
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = *plVar3;
    plVar3 = (long *)*plVar3;
    *(long **)(lVar14 + 0x310) = plVar5;
    *(long **)(lVar14 + 0x318) = param_2;
    func_0x000107c615c0(*(undefined8 *)(lVar14 + 0x308));
    if (param_2 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_10274a610;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      pcVar2 = FUN_10274a82c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar17 = (undefined1 *)plVar3[0x62];
    func_0x0001000834e4(plVar3 + 0x37);
    func_0x000107c5b198();
    func_0x000107c61180();
    plVar3[100] = (long)puVar17;
    puVar8 = puVar17;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar8 == (undefined1 *)0x0) {
      lVar14 = plVar3[0x62];
      lVar31 = plVar3[0x60];
      lVar20 = plVar3[0x57];
      FUN_10274dbb4();
      func_0x000107c613f8(&UNK_110543998,puVar8,0,0);
      *puVar8 = 1;
      func_0x000107c61654();
      func_0x000107c6142c(lVar20);
      func_0x000107c61170(puVar17);
      func_0x000107c615e8(lVar14);
      func_0x000107c61170(lVar31);
      lVar14 = plVar3[0x5c];
      puVar32 = (undefined *)plVar3[0x57];
      lVar31 = plVar3[0x56];
      lVar20 = plVar3[0x51];
      lVar25 = plVar3[0x50];
      func_0x000107c61170(plVar3[0x5e]);
      func_0x000107c615e8(lVar20);
      func_0x000107c6142c(lVar25);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar32 != (undefined *)0x0) {
        puVar6 = puVar32;
      }
      func_0x000107c6142c(puVar6);
      func_0x000107c61170(lVar31);
      func_0x000107c6142c(lVar14);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar3[1])();
        return;
      }
    }
    else {
      puVar9 = puVar8;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar8);
      plVar3[0x65] = (long)puVar9;
      plVar3[0x66] = (long)UNRECOVERED_JUMPTABLE;
      func_0x000100083b20(plVar3 + 0x41);
      lVar14 = plVar3[0x44];
      lVar31 = plVar3[0x45];
      func_0x0001000a8868(plVar3 + 0x41,lVar14);
      piVar28 = *(int **)(lVar31 + 0x20);
      iVar1 = *piVar28;
      puVar10 = (undefined8 *)(ulong)(uint)piVar28[1];
      func_0x000107c615b8();
      plVar3[0x67] = (long)puVar10;
      *puVar10 = plVar3;
      puVar10[1] = FUN_10274a908;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar28))
                  (puVar10,plVar3 + 0x3c,puVar17,"processedSnapDoc(from:)",0x17,0x9000000000000002,
                   0x10d,plVar3 + 0x49,lVar14);
        return;
      }
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = plVar3[0x57];
    func_0x000107c61170(plVar3[0x60]);
    func_0x000107c6142c(lVar14);
    func_0x0001000834e4(plVar3 + 0x37);
    lVar31 = plVar3[99];
    lVar14 = plVar3[0x5c];
    puVar32 = (undefined *)plVar3[0x57];
    lVar20 = plVar3[0x56];
    lVar25 = plVar3[0x51];
    lVar29 = plVar3[0x50];
    func_0x000107c61170(plVar3[0x5e]);
    func_0x000107c615e8(lVar25);
    func_0x000107c6142c(lVar29);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar32 != (undefined *)0x0) {
      puVar6 = puVar32;
    }
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(lVar20);
    func_0x000107c6142c(lVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar3[1])();
      return;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = *plVar3;
    puVar10 = *(undefined8 **)(lVar14 + 0x338);
    lVar20 = *plVar3;
    func_0x000107c615c0();
    if (lVar31 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_10274aaec;
        goto LAB_107c615e0;
      }
    }
    else {
      *(undefined8 *)(lVar14 + 0x340) = *(undefined8 *)(lVar14 + 0x248);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_10274a9b4;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar35 = *(undefined8 *)(lVar20 + 0x340);
    uVar7 = *(undefined8 *)(lVar20 + 0x330);
    uVar22 = *(undefined8 *)(lVar20 + 0x328);
    uVar26 = *(undefined8 *)(lVar20 + 800);
    uVar30 = *(undefined8 *)(lVar20 + 0x310);
    uVar33 = *(undefined8 *)(lVar20 + 0x300);
    uVar34 = *(undefined8 *)(lVar20 + 0x2b8);
    func_0x000100fb85f0();
    func_0x000107c613f8(&UNK_11072cd20,puVar10,0,0);
    *puVar10 = uVar35;
    func_0x000107c6142c(uVar34);
    func_0x00010006c090(uVar22,uVar7);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar26);
    func_0x000107c615e8(uVar30);
    func_0x0001000834e4(lVar20 + 0x208);
    uVar7 = *(undefined8 *)(lVar20 + 0x2e0);
    puVar32 = *(undefined **)(lVar20 + 0x2b8);
    uVar22 = *(undefined8 *)(lVar20 + 0x2b0);
    uVar26 = *(undefined8 *)(lVar20 + 0x288);
    uVar30 = *(undefined8 *)(lVar20 + 0x280);
    func_0x000107c61170(*(undefined8 *)(lVar20 + 0x2f0));
    func_0x000107c615e8(uVar26);
    func_0x000107c6142c(uVar30);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar32 != (undefined *)0x0) {
      puVar6 = puVar32;
    }
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(uVar22);
    func_0x000107c6142c(uVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar20 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar26 = *(undefined8 *)(lVar20 + 0x330);
    uVar22 = *(undefined8 *)(lVar20 + 0x328);
    uVar30 = *(undefined8 *)(lVar20 + 800);
    uVar33 = *(undefined8 *)(lVar20 + 0x310);
    uVar34 = *(undefined8 *)(lVar20 + 0x300);
    func_0x0001000834e4(lVar20 + 0x208);
    puVar6 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    uVar7 = uVar22;
    func_0x000107c5ee20(uVar22,uVar26);
    func_0x000107c45ae0();
    func_0x000107c61170(uVar7);
    func_0x00010006c090(uVar22,uVar26);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar30);
    func_0x000107c615e8(uVar33);
    plVar3 = (long *)(lVar20 + 0xa0);
    *plVar3 = (long)puVar6;
    func_0x000100fb8694(lVar20 + 0x1e0,lVar20 + 0xa8);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*plVar3 == 0) goto LAB_10274b260;
    plVar5 = (long *)(lVar20 + 0x70);
    uVar13 = *(ulong *)(lVar20 + 0x2e0);
    *(undefined8 *)(lVar20 + 0x78) = *(undefined8 *)(lVar20 + 0xa8);
    *plVar5 = *plVar3;
    *(undefined8 *)(lVar20 + 0x88) = *(undefined8 *)(lVar20 + 0xb8);
    *(undefined8 *)(lVar20 + 0x80) = *(undefined8 *)(lVar20 + 0xb0);
    *(undefined8 *)(lVar20 + 0x98) = *(undefined8 *)(lVar20 + 200);
    *(undefined8 *)(lVar20 + 0x90) = *(undefined8 *)(lVar20 + 0xc0);
    if (uVar13 == 0) {
      uVar13 = *(ulong *)(lVar20 + 0x2b8);
      if (uVar13 != 0) {
        func_0x000107c61434(uVar13);
        goto LAB_10274abe8;
      }
    }
    else {
LAB_10274abe8:
      FUN_10274dd08(plVar5,lVar20 + 0xd0);
      uVar7 = *(undefined8 *)(lVar20 + 0xd0);
      uVar4 = uVar13;
      func_0x000107c61550();
      if ((uVar13 >> 0x3e != 0) || ((uVar4 & 1) == 0)) {
        FUN_10274d478();
      }
      if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(lVar20 + 0x2e8)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
        (*pcVar2)();
      }
      lVar14 = (uVar13 & 0xffffffffffffff8) + *(ulong *)(lVar20 + 0x2e8) * 8;
      uVar22 = *(undefined8 *)(lVar14 + 0x20);
      *(undefined8 *)(lVar14 + 0x20) = uVar7;
      func_0x000107c61170(uVar22);
      func_0x0001000834e4(lVar20 + 0xd8);
    }
    puVar18 = *(ulong **)(lVar20 + 600);
    FUN_10274dd08(plVar5,lVar20 + 0x100);
    func_0x000107c61170(*(undefined8 *)(lVar20 + 0x100));
    uVar27 = *puVar18;
    uVar4 = uVar27;
    func_0x000107c61558();
    uVar19 = uVar27;
    if ((uVar4 & 1) == 0) {
      uVar19 = 0;
      func_0x000100fb5010(0,*(long *)(uVar27 + 0x10) + 1,1,uVar27);
    }
    uVar4 = *(ulong *)(uVar19 + 0x10);
    uVar27 = uVar19;
    if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar4) {
      uVar27 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
      func_0x000100fb5010(uVar27,uVar4 + 1,1,uVar19);
    }
    uVar7 = *(undefined8 *)(lVar20 + 0x2f0);
    puVar18 = *(ulong **)(lVar20 + 600);
    *(ulong *)(uVar27 + 0x10) = uVar4 + 1;
    func_0x000100fb8694(lVar20 + 0x108,uVar27 + uVar4 * 0x28 + 0x20);
    func_0x000107c61170(uVar7);
    func_0x00010274dd58(plVar5,0x112ebbe18,&UNK_10dad4f68);
    *puVar18 = uVar27;
    uVar4 = *(ulong *)(lVar20 + 0x2f8);
    *(ulong *)(lVar20 + 0x2e0) = uVar13;
    if (uVar4 != *(ulong *)(lVar20 + 0x2c8)) {
      while( true ) {
        *(ulong *)(lVar20 + 0x2e8) = uVar4;
        puVar32 = puVar6;
        if (*(undefined **)(lVar20 + 0x2b8) != (undefined *)0x0) {
          puVar32 = *(undefined **)(lVar20 + 0x2b8);
        }
        if (((ulong)puVar32 & 0xc000000000000001) == 0) {
          if (*(ulong *)(*(long *)(lVar20 + 0x2c0) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
            (*pcVar2)();
          }
          uVar13 = *(ulong *)(puVar32 + uVar4 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar13 = uVar4;
          func_0x000101016c54();
        }
        *(ulong *)(lVar20 + 0x2f0) = uVar13;
        *(ulong *)(lVar20 + 0x2f8) = uVar4 + 1;
        if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
          (*pcVar2)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar4 = uVar13;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar13);
        puVar15 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar13 = uVar4;
        func_0x000107c5ee20(uVar4,puVar32);
        *(undefined8 *)(lVar20 + 0x240) = 0;
        func_0x000107c4636c();
        *(undefined **)(lVar20 + 0x300) = puVar15;
        func_0x000107c61170(uVar13);
        uVar7 = *(undefined8 *)(lVar20 + 0x240);
        if (puVar15 == (undefined *)0x0) {
          uVar22 = uVar7;
          func_0x000107c61174();
          func_0x000107c5ed30(uVar7);
          func_0x000107c61170(uVar22);
          func_0x000107c61654();
          func_0x000107c614ac(uVar7);
          func_0x00010006c090(uVar4,puVar32);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar4,puVar32);
          func_0x000100083b20(lVar20 + 400);
          uVar7 = *(undefined8 *)(lVar20 + 0x1a8);
          lVar14 = *(long *)(lVar20 + 0x1b0);
          func_0x0001000a8868(lVar20 + 400,uVar7);
          puVar32 = puVar15;
          (**(code **)(lVar14 + 8))(puVar15,uVar7,lVar14);
          func_0x0001000834e4(lVar20 + 400);
          if (((ulong)puVar32 & 1) != 0) {
            func_0x000100083b20(lVar20 + 0x1b8);
            uVar7 = *(undefined8 *)(lVar20 + 0x1d0);
            lVar14 = *(long *)(lVar20 + 0x1d8);
            func_0x0001000a8868(lVar20 + 0x1b8,uVar7);
            piVar28 = *(int **)(lVar14 + 0x18);
            iVar1 = *piVar28;
            plVar3 = (long *)(ulong)(uint)piVar28[1];
            func_0x000107c615b8();
            *(long **)(lVar20 + 0x308) = plVar3;
            *plVar3 = lVar20;
            plVar3[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar28))(puVar15,uVar7,lVar14);
              return;
            }
            goto LAB_10274b338;
          }
          func_0x000107c61170(puVar15);
        }
        *(undefined8 *)(lVar20 + 0xb8) = 0;
        *(undefined8 *)(lVar20 + 0xb0) = 0;
        *(undefined8 *)(lVar20 + 200) = 0;
        *(undefined8 *)(lVar20 + 0xc0) = 0;
        *(undefined8 *)(lVar20 + 0xa8) = 0;
        *plVar3 = 0;
LAB_10274b260:
        lVar14 = *(long *)(lVar20 + 0x2f8);
        lVar31 = *(long *)(lVar20 + 0x2c8);
        func_0x000107c61170(*(undefined8 *)(lVar20 + 0x2f0));
        func_0x00010274dd58(plVar3,0x112ebbe10,&UNK_10dad4f60);
        if (lVar14 == lVar31) break;
        uVar4 = *(ulong *)(lVar20 + 0x2f8);
      }
    }
    lVar14 = *(long *)(lVar20 + 0x2b0);
    if (*(undefined **)(lVar20 + 0x2b8) != (undefined *)0x0) {
      puVar6 = *(undefined **)(lVar20 + 0x2b8);
    }
    func_0x000107c6142c(puVar6);
    lVar31 = *(long *)(lVar20 + 0x2e0);
    if (lVar14 == 0) {
      if (lVar31 != 0) {
        uVar22 = *(undefined8 *)(lVar20 + 0x288);
        func_0x000107c4e090();
        func_0x000107c61180();
        uVar7 = 0;
        lVar31 = *(long *)(lVar20 + 0x2e0);
        goto LAB_10274ad78;
      }
      uVar7 = *(undefined8 *)(lVar20 + 0x288);
      uVar19 = *(ulong *)(lVar20 + 0x280);
      func_0x000107c6142c(*(undefined8 *)(lVar20 + 0x2b8));
      func_0x000107c615f0(uVar7);
      uVar13 = uVar19;
      func_0x000107c61550();
      uVar4 = *(ulong *)(lVar20 + 0x280);
      if ((((int)uVar13 == 0) || ((uVar19 >> 0x3e & 1) != 0)) || ((long)uVar4 < 0)) {
        if (uVar4 >> 0x3e == 0) {
          uVar13 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar13 = uVar19 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar4) {
            uVar13 = uVar4;
          }
          func_0x000107c60480(uVar13);
          uVar4 = *(ulong *)(lVar20 + 0x280);
        }
        uVar19 = 0;
        FUN_102738e9c(0,uVar13 + 1,1,uVar4);
        uVar4 = uVar19;
      }
      uVar19 = uVar19 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar19 + 0x10);
      uVar27 = uVar4;
      if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar13) {
        uVar27 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
        FUN_102738e9c(uVar27,uVar13 + 1,1,uVar4);
        uVar19 = uVar27 & 0xffffffffffffff8;
      }
      uVar7 = *(undefined8 *)(lVar20 + 0x288);
      *(ulong *)(uVar19 + 0x10) = uVar13 + 1;
      *(undefined8 *)(uVar19 + uVar13 * 8 + 0x20) = uVar7;
      func_0x000107c615e8();
    }
    else {
      uVar22 = *(undefined8 *)(lVar20 + 0x2b0);
      uVar7 = uVar22;
      if (lVar31 == 0) {
        func_0x000107c61174();
        puVar10 = (undefined8 *)(lVar20 + 0x2b8);
      }
      else {
LAB_10274ad78:
        puVar10 = (undefined8 *)(lVar20 + 0x2e0);
        uVar26 = *(undefined8 *)(lVar20 + 0x2b8);
        func_0x000107c61434(lVar31);
        func_0x000107c61174(uVar7);
        func_0x000107c6142c(uVar26);
      }
      uVar7 = *puVar10;
      uVar13 = *(ulong *)(lVar20 + 0x288);
      func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130
                         );
      if ((uVar13 & 1) == 0) {
LAB_10274ae04:
        uVar4 = 0;
      }
      else {
        uVar13 = *(ulong *)(lVar20 + 0x288);
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar13 == 0) goto LAB_10274ae04;
        uVar26 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar4 = uVar13;
        func_0x000107c5fc54(uVar13,uVar26);
        func_0x000107c61170();
      }
      uVar23 = *(ulong *)(lVar20 + 0x280);
      FUN_10274ce90();
      uVar19 = uVar13;
      func_0x000107c610f8();
      lVar14 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar19 + _DAT_112ebbdc8) = 0;
      lVar31 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar19 + _DAT_112ebbdd0) = 0;
      *(undefined8 *)(uVar19 + _DAT_112ebbdc0) = uVar22;
      *(undefined8 *)(uVar19 + lVar14) = uVar7;
      *(ulong *)(uVar19 + lVar31) = uVar4;
      *(ulong *)(lVar20 + 0x230) = uVar19;
      *(ulong *)(lVar20 + 0x238) = uVar13;
      lVar14 = lVar20 + 0x230;
      func_0x000107c61154(lVar14,PTR_s_init_1125d9248);
      uVar13 = uVar23;
      func_0x000107c61550();
      uVar4 = *(ulong *)(lVar20 + 0x280);
      if ((((int)uVar13 == 0) || ((uVar23 >> 0x3e & 1) != 0)) || (uVar13 = uVar4, (long)uVar4 < 0))
      {
        if (uVar4 >> 0x3e == 0) {
          uVar19 = *(ulong *)((uVar23 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar19 = uVar23 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar4) {
            uVar19 = uVar4;
          }
          func_0x000107c60480(uVar19);
          uVar4 = *(ulong *)(lVar20 + 0x280);
        }
        uVar13 = 0;
        FUN_102738e9c(0,uVar19 + 1,1,uVar4);
        uVar23 = uVar13;
      }
      uVar23 = uVar23 & 0xffffffffffffff8;
      uVar4 = *(ulong *)(uVar23 + 0x10);
      uVar27 = uVar13;
      if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar4) {
        uVar27 = (ulong)(1 < *(ulong *)(uVar23 + 0x18));
        FUN_102738e9c(uVar27,uVar4 + 1,1,uVar13);
        uVar23 = uVar27 & 0xffffffffffffff8;
      }
      uVar22 = *(undefined8 *)(lVar20 + 0x2e0);
      uVar26 = *(undefined8 *)(lVar20 + 0x2b0);
      uVar7 = *(undefined8 *)(lVar20 + 0x288);
      *(ulong *)(uVar23 + 0x10) = uVar4 + 1;
      *(long *)(uVar23 + uVar4 * 8 + 0x20) = lVar14;
      func_0x000107c615e8(uVar7);
      func_0x000107c61170(uVar26);
      func_0x000107c6142c(uVar22);
    }
    uVar4 = *(ulong *)(lVar20 + 0x290);
    if (uVar4 == *(ulong *)(lVar20 + 0x268)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar20 + 8))(uVar27);
        return;
      }
LAB_10274b338:
      func_0x000107c60e78();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar7 = *(undefined8 *)(lVar20 + 0x280);
      func_0x000107c615e8(*(undefined8 *)(lVar20 + 0x288));
      func_0x000107c6142c(uVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        func_0x000107c60e78();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar20 + 8))();
      return;
    }
    *(ulong *)(lVar20 + 0x280) = uVar27;
    uVar13 = *(ulong *)(lVar20 + 0x250);
    if ((uVar13 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar13 = *(ulong *)(uVar13 + uVar4 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar13 = uVar4;
      FUN_10274d138();
    }
    *(ulong *)(lVar20 + 0x288) = uVar13;
    *(ulong *)(lVar20 + 0x290) = uVar4 + 1;
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(lVar20 + 0x298) = uVar13;
    plVar5 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(lVar20 + 0x2a0) = plVar5;
    *plVar5 = lVar20;
    plVar5[1] = (long)FUN_102749c40;
    param_2 = *(long **)(lVar20 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) goto LAB_10274b338;
    plVar11 = (long *)(lVar20 + 0x40);
  }
  else {
    uVar13 = plVar3[0x4a];
    plVar3[0x50] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar13 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar13 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102749c3c);
        (*pcVar2)();
      }
      uVar13 = *(ulong *)(uVar13 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar13 = 0;
      FUN_10274d138();
    }
    plVar3[0x51] = uVar13;
    plVar3[0x52] = 1;
    func_0x000107c4e090();
    func_0x000107c61180();
    plVar3[0x53] = uVar13;
    plVar5 = (long *)0x120;
    func_0x000107c615b8();
    plVar3[0x54] = (long)plVar5;
    *plVar5 = (long)plVar3;
    plVar5[1] = (long)FUN_102749c40;
    param_2 = (long *)plVar3[0x4c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) goto LAB_102749c3c;
    plVar11 = plVar3 + 8;
  }
FUN_10274bdac:
  plVar5[0x18] = uVar13;
  plVar5[0x19] = (long)param_2;
  plVar5[0x17] = (long)plVar11;
  pcVar2 = FUN_10274bdc8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1027494cc; end: 102749567;  */

void FUN_1027494cc(undefined8 param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x50) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x48));
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102749568;
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x10);
    *(long *)(lVar4 + 0x90) = unaff_x20;
    *(long *)(lVar4 + 0x98) = lVar3;
    plVar1 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(lVar4 + 0xa0) = plVar1;
    *plVar1 = lVar5;
    plVar1[1] = (long)FUN_102749968;
    plVar1[0xc] = lVar3;
    pcVar2 = FUN_10274d7a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102749568; end: 10274977f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102749568(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x18);
  lVar8 = *(long *)(unaff_x22 + 0x18);
  puVar1 = *(undefined1 **)(lVar8 + _DAT_112ff76b8);
  func_0x000107c61174();
  func_0x000107c61170(lVar8);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x58) = puVar2;
  func_0x000107c61170(puVar1);
  if (puVar2 == (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(unaff_x22 + 0x50);
    func_0x000107c6142c();
  }
  else {
    puVar3 = puVar2;
    func_0x000107c61150(puVar2,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_sendWithSnapDocBundles_sendParam_1126350b8);
    puVar1 = *(undefined1 **)(unaff_x22 + 0x50);
    if (((ulong)puVar3 & 1) == 0) {
      func_0x000107c615e8(puVar2);
      func_0x000107c6142c();
    }
    else {
      func_0x000107c615f0(puVar2);
      uVar4 = 0x112ebb4f0;
      func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
      puVar3 = puVar1;
      func_0x000107c5fc48(puVar1,uVar4);
      puVar5 = puVar2;
      func_0x000107c51ef4();
      func_0x000107c61180();
      *(undefined1 **)(unaff_x22 + 0x60) = puVar5;
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(puVar2);
      func_0x000107c6142c(puVar1);
      if (puVar5 != (undefined1 *)0x0) {
        func_0x0001000285a8(0x112ebb4f8,&UNK_10dad3f50);
        func_0x000103edf20c();
        *(undefined1 **)(unaff_x22 + 0x68) = puVar5;
        plVar7 = (long *)0x80;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x70) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_102749780;
                    /* WARNING: Could not recover jumptable at 0x0001027496e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        FUN_10274d348();
        return;
      }
      func_0x000107c615e8();
      puVar1 = puVar2;
    }
  }
  FUN_10274dbb4();
  puVar6 = &UNK_110543998;
  func_0x000107c613f8(&UNK_110543998,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
  lVar8 = *(long *)(unaff_x22 + 0x10);
  *(undefined **)(unaff_x22 + 0x90) = puVar6;
  *(long *)(unaff_x22 + 0x98) = lVar8;
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102749968;
  plVar7[0xc] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274d7a8,0,0);
  return;
}



/* Entry: 102749780; end: 1027497d3;  */

void FUN_102749780(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  *(undefined1 *)(lVar1 + 0xa8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027497d4,0,0);
  return;
}



/* Entry: 1027497d4; end: 1027498c7;  */

void FUN_1027497d4(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xa8) == '\x01') {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar5);
    lVar6 = *(long *)(unaff_x22 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x90) = uVar7;
    *(long *)(unaff_x22 + 0x98) = lVar6;
    plVar3 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa0) = plVar3;
    pcVar4 = FUN_102749968;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    lVar6 = *(long *)(unaff_x22 + 0x10);
    *(long *)(unaff_x22 + 0x80) = lVar6;
    plVar3 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar3;
    pcVar4 = FUN_1027498c8;
  }
  *plVar3 = unaff_x22;
  plVar3[1] = (long)pcVar4;
  plVar3[0xc] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274d7a8,0,0);
  return;
}



/* Entry: 1027498c8; end: 10274990f;  */

void FUN_1027498c8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102749910,0,0);
  return;
}



/* Entry: 102749910; end: 102749967;  */

void FUN_102749910(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615e8(uVar2);
  func_0x000107c6142c(uVar3);
  *puVar4 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000102749964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102749968; end: 1027499af;  */

void FUN_102749968(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027499b0,0,0);
  return;
}



/* Entry: 1027499b0; end: 1027499f3;  */

void FUN_1027499b0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61654();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001027499f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027499f4; end: 102749a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027499f4(long param_1)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x20;
  long *plVar16;
  undefined *puVar17;
  long *plVar18;
  long *plVar19;
  undefined1 *puVar20;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  long unaff_x22;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  int *piVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  plVar16 = *(long **)(unaff_x20 + 0x10);
  lVar15 = *(long *)(unaff_x20 + 0x18);
  lVar13 = *(long *)(unaff_x20 + 0x20);
  lVar32 = *(long *)(unaff_x20 + 0x28);
  plVar4 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10274dfbc;
  plVar4[7] = lVar13;
  plVar4[8] = lVar32;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar4[5] = param_1;
  plVar4[6] = (long)plVar16;
  plVar4[2] = (long)puVar6;
  plVar3 = (long *)0x350;
  func_0x000107c615b8();
  plVar4[9] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_1027494cc;
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3[0x4c] = (long)plVar16;
  plVar3[0x4b] = (long)(plVar4 + 2);
  plVar3[0x4a] = lVar15;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    pcVar2 = FUN_102749ad8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = plVar3[0x4a];
  if (uVar14 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar5 = uVar14;
    }
    func_0x000107c60480();
  }
  plVar3[0x4d] = uVar5;
  plVar3[0x4e] = _DAT_112ebbd78;
  plVar3[0x4f] = _DAT_112ebbd88;
  if (uVar5 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x000102749c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar3[1])(PTR___swiftEmptyArrayStorage_11034f1c8);
      return;
    }
LAB_102749c3c:
    func_0x000107c60e78();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = *plVar3;
    plVar3 = (long *)*plVar3;
    *(long **)(lVar15 + 0x2a8) = plVar16;
    func_0x000107c615c0(*(undefined8 *)(lVar15 + 0x2a0));
    func_0x000107c61170(*(undefined8 *)(lVar15 + 0x298));
    if (plVar16 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        pcVar2 = FUN_102749cf0;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      pcVar2 = FUN_10274b33c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar12 = plVar3 + 8;
    if (*plVar12 == 0) {
      func_0x00010274dd58(plVar12,0x112ebbe10,&UNK_10dad4f60);
      lVar15 = 0;
    }
    else {
      plVar16 = plVar3 + 2;
      puVar21 = (ulong *)plVar3[0x4b];
      plVar3[3] = plVar3[9];
      *plVar16 = *plVar12;
      plVar3[5] = plVar3[0xb];
      plVar3[4] = plVar3[10];
      plVar3[7] = plVar3[0xd];
      plVar3[6] = plVar3[0xc];
      FUN_10274dd08(plVar16,plVar3 + 0x26);
      lVar15 = plVar3[0x26];
      func_0x0001000834e4(plVar3 + 0x27);
      FUN_10274dd08(plVar16,plVar3 + 0x2c);
      func_0x000107c61170(plVar3[0x2c]);
      uVar22 = *puVar21;
      uVar14 = uVar22;
      func_0x000107c61558();
      uVar5 = uVar22;
      if ((uVar14 & 1) == 0) {
        uVar5 = 0;
        func_0x000100fb5010(0,*(long *)(uVar22 + 0x10) + 1,1,uVar22);
      }
      uVar14 = *(ulong *)(uVar5 + 0x10);
      uVar22 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar14) {
        uVar22 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        func_0x000100fb5010(uVar22,uVar14 + 1,1,uVar5);
      }
      puVar21 = (ulong *)plVar3[0x4b];
      *(ulong *)(uVar22 + 0x10) = uVar14 + 1;
      func_0x000100fb8694(plVar3 + 0x2d,uVar22 + uVar14 * 0x28 + 0x20);
      func_0x00010274dd58(plVar16,0x112ebbe18,&UNK_10dad4f68);
      *puVar21 = uVar22;
    }
    plVar3[0x56] = lVar15;
    uVar14 = plVar3[0x51];
    func_0x000107c61150(uVar14,PTR_s_respondsToSelector__11262c7e0,PTR_s_multisnap_112612448);
    if ((uVar14 & 1) == 0) {
LAB_102749e74:
      puVar33 = (undefined *)0x0;
      plVar3[0x57] = 0;
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar6 = (undefined *)plVar3[0x51];
      func_0x000107c4d1e0();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) goto LAB_102749e74;
      uVar7 = 0;
      FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
      puVar33 = puVar6;
      func_0x000107c5fc54(puVar6,uVar7);
      func_0x000107c61170(puVar6);
      plVar3[0x57] = (long)puVar33;
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar33 != (undefined *)0x0) {
        puVar6 = puVar33;
      }
    }
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar17 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar17 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar6) {
        puVar17 = puVar6;
      }
      func_0x000107c60480();
    }
    plVar3[0x59] = (long)puVar17;
    plVar3[0x58] = (ulong)puVar6 & 0xffffffffffffff8;
    plVar3[0x5a] = *(long *)(plVar3[0x4c] + plVar3[0x4e]);
    plVar3[0x5b] = *(long *)(plVar3[0x4c] + plVar3[0x4f]);
    plVar3[0x5c] = 0;
    func_0x000107c61434(puVar33);
    if (puVar17 != (undefined *)0x0) {
      uVar14 = 0;
      while( true ) {
        plVar3[0x5d] = uVar14;
        puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((undefined *)plVar3[0x57] != (undefined *)0x0) {
          puVar6 = (undefined *)plVar3[0x57];
        }
        if (((ulong)puVar6 & 0xc000000000000001) == 0) {
          if (*(ulong *)(plVar3[0x58] + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a474);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(puVar6 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar14;
          func_0x000101016c54();
        }
        plVar3[0x5e] = uVar5;
        plVar3[0x5f] = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a470);
          (*pcVar2)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar14 = uVar5;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar5);
        puVar33 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar5 = uVar14;
        func_0x000107c5ee20(uVar14,puVar6);
        plVar3[0x48] = 0;
        func_0x000107c4636c();
        plVar3[0x60] = (long)puVar33;
        func_0x000107c61170(uVar5);
        lVar15 = plVar3[0x48];
        if (puVar33 == (undefined *)0x0) {
          lVar32 = lVar15;
          func_0x000107c61174();
          func_0x000107c5ed30(lVar15);
          func_0x000107c61170(lVar32);
          func_0x000107c61654();
          func_0x000107c614ac(lVar15);
          func_0x00010006c090(uVar14,puVar6);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar14,puVar6);
          func_0x000100083b20(plVar3 + 0x32);
          lVar15 = plVar3[0x35];
          lVar32 = plVar3[0x36];
          func_0x0001000a8868(plVar3 + 0x32,lVar15);
          puVar6 = puVar33;
          (**(code **)(lVar32 + 8))(puVar33,lVar15,lVar32);
          func_0x0001000834e4(plVar3 + 0x32);
          if (((ulong)puVar6 & 1) != 0) {
            func_0x000100083b20(plVar3 + 0x37);
            pcVar2 = (code *)plVar3[0x3a];
            lVar15 = plVar3[0x3b];
            plVar16 = plVar3 + 0x37;
            UNRECOVERED_JUMPTABLE = pcVar2;
            func_0x0001000a8868();
            piVar29 = *(int **)(lVar15 + 0x18);
            iVar1 = *piVar29;
            plVar4 = (long *)(ulong)(uint)piVar29[1];
            func_0x000107c615b8();
            plVar3[0x61] = (long)plVar4;
            *plVar4 = (long)plVar3;
            plVar4[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010274a3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar29))(puVar33,pcVar2,lVar15);
              return;
            }
            goto LAB_10274a564;
          }
          func_0x000107c61170(puVar33);
        }
        plVar3[0x17] = 0;
        plVar3[0x16] = 0;
        plVar3[0x19] = 0;
        plVar3[0x18] = 0;
        plVar3[0x15] = 0;
        plVar3[0x14] = 0;
        lVar15 = plVar3[0x5f];
        lVar32 = plVar3[0x59];
        func_0x000107c61170(plVar3[0x5e]);
        func_0x00010274dd58(plVar3 + 0x14,0x112ebbe10,&UNK_10dad4f60);
        if (lVar15 == lVar32) break;
        uVar14 = plVar3[0x5f];
      }
    }
    lVar15 = plVar3[0x56];
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((undefined *)plVar3[0x57] != (undefined *)0x0) {
      puVar6 = (undefined *)plVar3[0x57];
    }
    func_0x000107c6142c(puVar6);
    lVar32 = plVar3[0x5c];
    if (lVar15 == 0) {
      if (lVar32 != 0) {
        lVar23 = plVar3[0x51];
        func_0x000107c4e090();
        func_0x000107c61180();
        lVar15 = 0;
        lVar32 = plVar3[0x5c];
        goto LAB_10274a0e0;
      }
      lVar15 = plVar3[0x51];
      plVar4 = (long *)plVar3[0x50];
      func_0x000107c6142c(plVar3[0x57]);
      func_0x000107c615f0(lVar15);
      plVar16 = plVar4;
      func_0x000107c61550();
      plVar19 = (long *)plVar3[0x50];
      if ((((int)plVar16 == 0) || (((ulong)plVar4 >> 0x3e & 1) != 0)) ||
         (plVar18 = plVar19, (long)plVar19 < 0)) {
        if ((ulong)plVar19 >> 0x3e == 0) {
          plVar16 = *(long **)(((ulong)plVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar16 = (long *)((ulong)plVar4 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar19) {
            plVar16 = plVar19;
          }
          func_0x000107c60480(plVar16);
          plVar19 = (long *)plVar3[0x50];
        }
        plVar18 = (long *)0x0;
        FUN_102738e9c(0,(long)plVar16 + 1,1,plVar19);
        plVar4 = plVar18;
      }
      uVar5 = (ulong)plVar4 & 0xffffffffffffff8;
      uVar14 = *(ulong *)(uVar5 + 0x10);
      plVar16 = plVar18;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar14) {
        plVar16 = (long *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_102738e9c(plVar16,uVar14 + 1,1,plVar18);
        uVar5 = (ulong)plVar16 & 0xffffffffffffff8;
      }
      plVar4 = (long *)plVar3[0x51];
      *(ulong *)(uVar5 + 0x10) = uVar14 + 1;
      *(long **)(uVar5 + uVar14 * 8 + 0x20) = plVar4;
      func_0x000107c615e8();
    }
    else {
      lVar23 = plVar3[0x56];
      lVar15 = lVar23;
      if (lVar32 == 0) {
        func_0x000107c61174();
        plVar16 = plVar3 + 0x57;
      }
      else {
LAB_10274a0e0:
        plVar16 = plVar3 + 0x5c;
        lVar26 = plVar3[0x57];
        func_0x000107c61434(lVar32);
        func_0x000107c61174(lVar15);
        func_0x000107c6142c(lVar26);
      }
      lVar15 = *plVar16;
      uVar14 = plVar3[0x51];
      func_0x000107c61150(uVar14,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130
                         );
      if ((uVar14 & 1) == 0) {
LAB_10274a16c:
        uVar5 = 0;
      }
      else {
        uVar14 = plVar3[0x51];
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar14 == 0) goto LAB_10274a16c;
        uVar7 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar5 = uVar14;
        func_0x000107c5fc54(uVar14,uVar7);
        func_0x000107c61170();
      }
      plVar4 = (long *)plVar3[0x50];
      FUN_10274ce90();
      uVar22 = uVar14;
      func_0x000107c610f8();
      lVar32 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar22 + _DAT_112ebbdc8) = 0;
      lVar26 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar22 + _DAT_112ebbdd0) = 0;
      *(long *)(uVar22 + _DAT_112ebbdc0) = lVar23;
      *(long *)(uVar22 + lVar32) = lVar15;
      *(ulong *)(uVar22 + lVar26) = uVar5;
      plVar3[0x46] = uVar22;
      plVar3[0x47] = uVar14;
      plVar19 = plVar3 + 0x46;
      func_0x000107c61154(plVar19,PTR_s_init_1125d9248);
      plVar16 = plVar4;
      func_0x000107c61550();
      plVar18 = (long *)plVar3[0x50];
      if ((((int)plVar16 == 0) || (((ulong)plVar4 >> 0x3e & 1) != 0)) ||
         (plVar8 = plVar18, (long)plVar18 < 0)) {
        if ((ulong)plVar18 >> 0x3e == 0) {
          plVar16 = *(long **)(((ulong)plVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar16 = (long *)((ulong)plVar4 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar18) {
            plVar16 = plVar18;
          }
          func_0x000107c60480(plVar16);
          plVar18 = (long *)plVar3[0x50];
        }
        plVar8 = (long *)0x0;
        FUN_102738e9c(0,(long)plVar16 + 1,1,plVar18);
        plVar4 = plVar8;
      }
      uVar5 = (ulong)plVar4 & 0xffffffffffffff8;
      uVar14 = *(ulong *)(uVar5 + 0x10);
      plVar16 = plVar8;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar14) {
        plVar16 = (long *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_102738e9c(plVar16,uVar14 + 1,1,plVar8);
        uVar5 = (ulong)plVar16 & 0xffffffffffffff8;
      }
      plVar4 = (long *)plVar3[0x5c];
      lVar32 = plVar3[0x56];
      lVar15 = plVar3[0x51];
      *(ulong *)(uVar5 + 0x10) = uVar14 + 1;
      *(long **)(uVar5 + uVar14 * 8 + 0x20) = plVar19;
      func_0x000107c615e8(lVar15);
      func_0x000107c61170(lVar32);
      func_0x000107c6142c();
    }
    uVar5 = plVar3[0x52];
    if (uVar5 == plVar3[0x4d]) {
      UNRECOVERED_JUMPTABLE = (code *)plVar3[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010274a29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar16);
        return;
      }
    }
    else {
      plVar3[0x50] = (long)plVar16;
      UNRECOVERED_JUMPTABLE = (code *)plVar3[0x4a];
      if (((ulong)UNRECOVERED_JUMPTABLE & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a510);
          (*pcVar2)();
        }
        uVar14 = *(ulong *)(UNRECOVERED_JUMPTABLE + uVar5 * 8 + 0x20);
        func_0x000107c615f0();
      }
      else {
        uVar14 = uVar5;
        FUN_10274d138();
      }
      plVar3[0x51] = uVar14;
      plVar3[0x52] = uVar5 + 1;
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a50c);
        (*pcVar2)();
      }
      func_0x000107c4e090();
      func_0x000107c61180();
      plVar3[0x53] = uVar14;
      plVar4 = (long *)0x120;
      func_0x000107c615b8();
      plVar3[0x54] = (long)plVar4;
      *plVar4 = (long)plVar3;
      plVar4[1] = (long)FUN_102749c40;
      plVar16 = (long *)plVar3[0x4c];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) goto FUN_10274bdac;
    }
LAB_10274a564:
    func_0x000107c60e78();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = *plVar3;
    plVar3 = (long *)*plVar3;
    *(long **)(lVar15 + 0x310) = plVar4;
    *(long **)(lVar15 + 0x318) = plVar16;
    func_0x000107c615c0(*(undefined8 *)(lVar15 + 0x308));
    if (plVar16 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        pcVar2 = FUN_10274a610;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      pcVar2 = FUN_10274a82c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar20 = (undefined1 *)plVar3[0x62];
    func_0x0001000834e4(plVar3 + 0x37);
    func_0x000107c5b198();
    func_0x000107c61180();
    plVar3[100] = (long)puVar20;
    puVar9 = puVar20;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar9 == (undefined1 *)0x0) {
      lVar15 = plVar3[0x62];
      lVar32 = plVar3[0x60];
      lVar23 = plVar3[0x57];
      FUN_10274dbb4();
      func_0x000107c613f8(&UNK_110543998,puVar9,0,0);
      *puVar9 = 1;
      func_0x000107c61654();
      func_0x000107c6142c(lVar23);
      func_0x000107c61170(puVar20);
      func_0x000107c615e8(lVar15);
      func_0x000107c61170(lVar32);
      lVar15 = plVar3[0x5c];
      puVar33 = (undefined *)plVar3[0x57];
      lVar32 = plVar3[0x56];
      lVar23 = plVar3[0x51];
      lVar26 = plVar3[0x50];
      func_0x000107c61170(plVar3[0x5e]);
      func_0x000107c615e8(lVar23);
      func_0x000107c6142c(lVar26);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar33 != (undefined *)0x0) {
        puVar6 = puVar33;
      }
      func_0x000107c6142c(puVar6);
      func_0x000107c61170(lVar32);
      func_0x000107c6142c(lVar15);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010274a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar3[1])();
        return;
      }
    }
    else {
      puVar10 = puVar9;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar9);
      plVar3[0x65] = (long)puVar10;
      plVar3[0x66] = (long)UNRECOVERED_JUMPTABLE;
      func_0x000100083b20(plVar3 + 0x41);
      lVar15 = plVar3[0x44];
      lVar32 = plVar3[0x45];
      func_0x0001000a8868(plVar3 + 0x41,lVar15);
      piVar29 = *(int **)(lVar32 + 0x20);
      iVar1 = *piVar29;
      puVar11 = (undefined8 *)(ulong)(uint)piVar29[1];
      func_0x000107c615b8();
      plVar3[0x67] = (long)puVar11;
      *puVar11 = plVar3;
      puVar11[1] = FUN_10274a908;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010274a740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar29))
                  (puVar11,plVar3 + 0x3c,puVar20,"processedSnapDoc(from:)",0x17,0x9000000000000002,
                   0x10d,plVar3 + 0x49,lVar15);
        return;
      }
    }
    func_0x000107c60e78();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = plVar3[0x57];
    func_0x000107c61170(plVar3[0x60]);
    func_0x000107c6142c(lVar15);
    func_0x0001000834e4(plVar3 + 0x37);
    lVar32 = plVar3[99];
    lVar15 = plVar3[0x5c];
    puVar33 = (undefined *)plVar3[0x57];
    lVar23 = plVar3[0x56];
    lVar26 = plVar3[0x51];
    lVar30 = plVar3[0x50];
    func_0x000107c61170(plVar3[0x5e]);
    func_0x000107c615e8(lVar26);
    func_0x000107c6142c(lVar30);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar33 != (undefined *)0x0) {
      puVar6 = puVar33;
    }
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(lVar23);
    func_0x000107c6142c(lVar15);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010274a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar3[1])();
      return;
    }
    func_0x000107c60e78();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar15 = *plVar3;
    puVar11 = *(undefined8 **)(lVar15 + 0x338);
    lVar23 = *plVar3;
    func_0x000107c615c0();
    if (lVar32 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        pcVar2 = FUN_10274aaec;
        goto LAB_107c615e0;
      }
    }
    else {
      *(undefined8 *)(lVar15 + 0x340) = *(undefined8 *)(lVar15 + 0x248);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        pcVar2 = FUN_10274a9b4;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar36 = *(undefined8 *)(lVar23 + 0x340);
    uVar7 = *(undefined8 *)(lVar23 + 0x330);
    uVar24 = *(undefined8 *)(lVar23 + 0x328);
    uVar27 = *(undefined8 *)(lVar23 + 800);
    uVar31 = *(undefined8 *)(lVar23 + 0x310);
    uVar34 = *(undefined8 *)(lVar23 + 0x300);
    uVar35 = *(undefined8 *)(lVar23 + 0x2b8);
    func_0x000100fb85f0();
    func_0x000107c613f8(&UNK_11072cd20,puVar11,0,0);
    *puVar11 = uVar36;
    func_0x000107c6142c(uVar35);
    func_0x00010006c090(uVar24,uVar7);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar27);
    func_0x000107c615e8(uVar31);
    func_0x0001000834e4(lVar23 + 0x208);
    uVar7 = *(undefined8 *)(lVar23 + 0x2e0);
    puVar33 = *(undefined **)(lVar23 + 0x2b8);
    uVar24 = *(undefined8 *)(lVar23 + 0x2b0);
    uVar27 = *(undefined8 *)(lVar23 + 0x288);
    uVar31 = *(undefined8 *)(lVar23 + 0x280);
    func_0x000107c61170(*(undefined8 *)(lVar23 + 0x2f0));
    func_0x000107c615e8(uVar27);
    func_0x000107c6142c(uVar31);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar33 != (undefined *)0x0) {
      puVar6 = puVar33;
    }
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(uVar24);
    func_0x000107c6142c(uVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar23 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar27 = *(undefined8 *)(lVar23 + 0x330);
    uVar24 = *(undefined8 *)(lVar23 + 0x328);
    uVar31 = *(undefined8 *)(lVar23 + 800);
    uVar34 = *(undefined8 *)(lVar23 + 0x310);
    uVar35 = *(undefined8 *)(lVar23 + 0x300);
    func_0x0001000834e4(lVar23 + 0x208);
    puVar6 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    uVar7 = uVar24;
    func_0x000107c5ee20(uVar24,uVar27);
    func_0x000107c45ae0();
    func_0x000107c61170(uVar7);
    func_0x00010006c090(uVar24,uVar27);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar31);
    func_0x000107c615e8(uVar34);
    plVar16 = (long *)(lVar23 + 0xa0);
    *plVar16 = (long)puVar6;
    func_0x000100fb8694(lVar23 + 0x1e0,lVar23 + 0xa8);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*plVar16 == 0) goto LAB_10274b260;
    plVar3 = (long *)(lVar23 + 0x70);
    uVar14 = *(ulong *)(lVar23 + 0x2e0);
    *(undefined8 *)(lVar23 + 0x78) = *(undefined8 *)(lVar23 + 0xa8);
    *plVar3 = *plVar16;
    *(undefined8 *)(lVar23 + 0x88) = *(undefined8 *)(lVar23 + 0xb8);
    *(undefined8 *)(lVar23 + 0x80) = *(undefined8 *)(lVar23 + 0xb0);
    *(undefined8 *)(lVar23 + 0x98) = *(undefined8 *)(lVar23 + 200);
    *(undefined8 *)(lVar23 + 0x90) = *(undefined8 *)(lVar23 + 0xc0);
    if (uVar14 == 0) {
      uVar14 = *(ulong *)(lVar23 + 0x2b8);
      if (uVar14 != 0) {
        func_0x000107c61434(uVar14);
        goto LAB_10274abe8;
      }
    }
    else {
LAB_10274abe8:
      FUN_10274dd08(plVar3,lVar23 + 0xd0);
      uVar7 = *(undefined8 *)(lVar23 + 0xd0);
      uVar5 = uVar14;
      func_0x000107c61550();
      if ((uVar14 >> 0x3e != 0) || ((uVar5 & 1) == 0)) {
        FUN_10274d478();
      }
      if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(lVar23 + 0x2e8)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
        (*pcVar2)();
      }
      lVar15 = (uVar14 & 0xffffffffffffff8) + *(ulong *)(lVar23 + 0x2e8) * 8;
      uVar24 = *(undefined8 *)(lVar15 + 0x20);
      *(undefined8 *)(lVar15 + 0x20) = uVar7;
      func_0x000107c61170(uVar24);
      func_0x0001000834e4(lVar23 + 0xd8);
    }
    puVar21 = *(ulong **)(lVar23 + 600);
    FUN_10274dd08(plVar3,lVar23 + 0x100);
    func_0x000107c61170(*(undefined8 *)(lVar23 + 0x100));
    uVar28 = *puVar21;
    uVar5 = uVar28;
    func_0x000107c61558();
    uVar22 = uVar28;
    if ((uVar5 & 1) == 0) {
      uVar22 = 0;
      func_0x000100fb5010(0,*(long *)(uVar28 + 0x10) + 1,1,uVar28);
    }
    uVar5 = *(ulong *)(uVar22 + 0x10);
    uVar28 = uVar22;
    if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar5) {
      uVar28 = (ulong)(1 < *(ulong *)(uVar22 + 0x18));
      func_0x000100fb5010(uVar28,uVar5 + 1,1,uVar22);
    }
    uVar7 = *(undefined8 *)(lVar23 + 0x2f0);
    puVar21 = *(ulong **)(lVar23 + 600);
    *(ulong *)(uVar28 + 0x10) = uVar5 + 1;
    func_0x000100fb8694(lVar23 + 0x108,uVar28 + uVar5 * 0x28 + 0x20);
    func_0x000107c61170(uVar7);
    func_0x00010274dd58(plVar3,0x112ebbe18,&UNK_10dad4f68);
    *puVar21 = uVar28;
    uVar5 = *(ulong *)(lVar23 + 0x2f8);
    *(ulong *)(lVar23 + 0x2e0) = uVar14;
    if (uVar5 != *(ulong *)(lVar23 + 0x2c8)) {
      while( true ) {
        *(ulong *)(lVar23 + 0x2e8) = uVar5;
        puVar33 = puVar6;
        if (*(undefined **)(lVar23 + 0x2b8) != (undefined *)0x0) {
          puVar33 = *(undefined **)(lVar23 + 0x2b8);
        }
        if (((ulong)puVar33 & 0xc000000000000001) == 0) {
          if (*(ulong *)(*(long *)(lVar23 + 0x2c0) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
            (*pcVar2)();
          }
          uVar14 = *(ulong *)(puVar33 + uVar5 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar14 = uVar5;
          func_0x000101016c54();
        }
        *(ulong *)(lVar23 + 0x2f0) = uVar14;
        *(ulong *)(lVar23 + 0x2f8) = uVar5 + 1;
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
          (*pcVar2)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar5 = uVar14;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar14);
        puVar17 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar14 = uVar5;
        func_0x000107c5ee20(uVar5,puVar33);
        *(undefined8 *)(lVar23 + 0x240) = 0;
        func_0x000107c4636c();
        *(undefined **)(lVar23 + 0x300) = puVar17;
        func_0x000107c61170(uVar14);
        uVar7 = *(undefined8 *)(lVar23 + 0x240);
        if (puVar17 == (undefined *)0x0) {
          uVar24 = uVar7;
          func_0x000107c61174();
          func_0x000107c5ed30(uVar7);
          func_0x000107c61170(uVar24);
          func_0x000107c61654();
          func_0x000107c614ac(uVar7);
          func_0x00010006c090(uVar5,puVar33);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar5,puVar33);
          func_0x000100083b20(lVar23 + 400);
          uVar7 = *(undefined8 *)(lVar23 + 0x1a8);
          lVar15 = *(long *)(lVar23 + 0x1b0);
          func_0x0001000a8868(lVar23 + 400,uVar7);
          puVar33 = puVar17;
          (**(code **)(lVar15 + 8))(puVar17,uVar7,lVar15);
          func_0x0001000834e4(lVar23 + 400);
          if (((ulong)puVar33 & 1) != 0) {
            func_0x000100083b20(lVar23 + 0x1b8);
            uVar7 = *(undefined8 *)(lVar23 + 0x1d0);
            lVar15 = *(long *)(lVar23 + 0x1d8);
            func_0x0001000a8868(lVar23 + 0x1b8,uVar7);
            piVar29 = *(int **)(lVar15 + 0x18);
            iVar1 = *piVar29;
            plVar16 = (long *)(ulong)(uint)piVar29[1];
            func_0x000107c615b8();
            *(long **)(lVar23 + 0x308) = plVar16;
            *plVar16 = lVar23;
            plVar16[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar29))(puVar17,uVar7,lVar15);
              return;
            }
            goto LAB_10274b338;
          }
          func_0x000107c61170(puVar17);
        }
        *(undefined8 *)(lVar23 + 0xb8) = 0;
        *(undefined8 *)(lVar23 + 0xb0) = 0;
        *(undefined8 *)(lVar23 + 200) = 0;
        *(undefined8 *)(lVar23 + 0xc0) = 0;
        *(undefined8 *)(lVar23 + 0xa8) = 0;
        *plVar16 = 0;
LAB_10274b260:
        lVar15 = *(long *)(lVar23 + 0x2f8);
        lVar32 = *(long *)(lVar23 + 0x2c8);
        func_0x000107c61170(*(undefined8 *)(lVar23 + 0x2f0));
        func_0x00010274dd58(plVar16,0x112ebbe10,&UNK_10dad4f60);
        if (lVar15 == lVar32) break;
        uVar5 = *(ulong *)(lVar23 + 0x2f8);
      }
    }
    lVar15 = *(long *)(lVar23 + 0x2b0);
    if (*(undefined **)(lVar23 + 0x2b8) != (undefined *)0x0) {
      puVar6 = *(undefined **)(lVar23 + 0x2b8);
    }
    func_0x000107c6142c(puVar6);
    lVar32 = *(long *)(lVar23 + 0x2e0);
    if (lVar15 == 0) {
      if (lVar32 != 0) {
        uVar24 = *(undefined8 *)(lVar23 + 0x288);
        func_0x000107c4e090();
        func_0x000107c61180();
        uVar7 = 0;
        lVar32 = *(long *)(lVar23 + 0x2e0);
        goto LAB_10274ad78;
      }
      uVar7 = *(undefined8 *)(lVar23 + 0x288);
      uVar22 = *(ulong *)(lVar23 + 0x280);
      func_0x000107c6142c(*(undefined8 *)(lVar23 + 0x2b8));
      func_0x000107c615f0(uVar7);
      uVar14 = uVar22;
      func_0x000107c61550();
      uVar5 = *(ulong *)(lVar23 + 0x280);
      if ((((int)uVar14 == 0) || ((uVar22 >> 0x3e & 1) != 0)) || ((long)uVar5 < 0)) {
        if (uVar5 >> 0x3e == 0) {
          uVar14 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar14 = uVar22 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar5) {
            uVar14 = uVar5;
          }
          func_0x000107c60480(uVar14);
          uVar5 = *(ulong *)(lVar23 + 0x280);
        }
        uVar22 = 0;
        FUN_102738e9c(0,uVar14 + 1,1,uVar5);
        uVar5 = uVar22;
      }
      uVar22 = uVar22 & 0xffffffffffffff8;
      uVar14 = *(ulong *)(uVar22 + 0x10);
      uVar28 = uVar5;
      if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar14) {
        uVar28 = (ulong)(1 < *(ulong *)(uVar22 + 0x18));
        FUN_102738e9c(uVar28,uVar14 + 1,1,uVar5);
        uVar22 = uVar28 & 0xffffffffffffff8;
      }
      uVar7 = *(undefined8 *)(lVar23 + 0x288);
      *(ulong *)(uVar22 + 0x10) = uVar14 + 1;
      *(undefined8 *)(uVar22 + uVar14 * 8 + 0x20) = uVar7;
      func_0x000107c615e8();
    }
    else {
      uVar24 = *(undefined8 *)(lVar23 + 0x2b0);
      uVar7 = uVar24;
      if (lVar32 == 0) {
        func_0x000107c61174();
        puVar11 = (undefined8 *)(lVar23 + 0x2b8);
      }
      else {
LAB_10274ad78:
        puVar11 = (undefined8 *)(lVar23 + 0x2e0);
        uVar27 = *(undefined8 *)(lVar23 + 0x2b8);
        func_0x000107c61434(lVar32);
        func_0x000107c61174(uVar7);
        func_0x000107c6142c(uVar27);
      }
      uVar7 = *puVar11;
      uVar14 = *(ulong *)(lVar23 + 0x288);
      func_0x000107c61150(uVar14,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130
                         );
      if ((uVar14 & 1) == 0) {
LAB_10274ae04:
        uVar5 = 0;
      }
      else {
        uVar14 = *(ulong *)(lVar23 + 0x288);
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar14 == 0) goto LAB_10274ae04;
        uVar27 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar5 = uVar14;
        func_0x000107c5fc54(uVar14,uVar27);
        func_0x000107c61170();
      }
      uVar25 = *(ulong *)(lVar23 + 0x280);
      FUN_10274ce90();
      uVar22 = uVar14;
      func_0x000107c610f8();
      lVar15 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar22 + _DAT_112ebbdc8) = 0;
      lVar32 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar22 + _DAT_112ebbdd0) = 0;
      *(undefined8 *)(uVar22 + _DAT_112ebbdc0) = uVar24;
      *(undefined8 *)(uVar22 + lVar15) = uVar7;
      *(ulong *)(uVar22 + lVar32) = uVar5;
      *(ulong *)(lVar23 + 0x230) = uVar22;
      *(ulong *)(lVar23 + 0x238) = uVar14;
      lVar15 = lVar23 + 0x230;
      func_0x000107c61154(lVar15,PTR_s_init_1125d9248);
      uVar14 = uVar25;
      func_0x000107c61550();
      uVar5 = *(ulong *)(lVar23 + 0x280);
      if ((((int)uVar14 == 0) || ((uVar25 >> 0x3e & 1) != 0)) || (uVar14 = uVar5, (long)uVar5 < 0))
      {
        if (uVar5 >> 0x3e == 0) {
          uVar22 = *(ulong *)((uVar25 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar22 = uVar25 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar5) {
            uVar22 = uVar5;
          }
          func_0x000107c60480(uVar22);
          uVar5 = *(ulong *)(lVar23 + 0x280);
        }
        uVar14 = 0;
        FUN_102738e9c(0,uVar22 + 1,1,uVar5);
        uVar25 = uVar14;
      }
      uVar25 = uVar25 & 0xffffffffffffff8;
      uVar5 = *(ulong *)(uVar25 + 0x10);
      uVar28 = uVar14;
      if (*(ulong *)(uVar25 + 0x18) >> 1 <= uVar5) {
        uVar28 = (ulong)(1 < *(ulong *)(uVar25 + 0x18));
        FUN_102738e9c(uVar28,uVar5 + 1,1,uVar14);
        uVar25 = uVar28 & 0xffffffffffffff8;
      }
      uVar24 = *(undefined8 *)(lVar23 + 0x2e0);
      uVar27 = *(undefined8 *)(lVar23 + 0x2b0);
      uVar7 = *(undefined8 *)(lVar23 + 0x288);
      *(ulong *)(uVar25 + 0x10) = uVar5 + 1;
      *(long *)(uVar25 + uVar5 * 8 + 0x20) = lVar15;
      func_0x000107c615e8(uVar7);
      func_0x000107c61170(uVar27);
      func_0x000107c6142c(uVar24);
    }
    uVar5 = *(ulong *)(lVar23 + 0x290);
    if (uVar5 == *(ulong *)(lVar23 + 0x268)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar23 + 8))(uVar28);
        return;
      }
LAB_10274b338:
      func_0x000107c60e78();
      lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar7 = *(undefined8 *)(lVar23 + 0x280);
      func_0x000107c615e8(*(undefined8 *)(lVar23 + 0x288));
      func_0x000107c6142c(uVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
        func_0x000107c60e78();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar23 + 8))();
      return;
    }
    *(ulong *)(lVar23 + 0x280) = uVar28;
    uVar14 = *(ulong *)(lVar23 + 0x250);
    if ((uVar14 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar14 = *(ulong *)(uVar14 + uVar5 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar14 = uVar5;
      FUN_10274d138();
    }
    *(ulong *)(lVar23 + 0x288) = uVar14;
    *(ulong *)(lVar23 + 0x290) = uVar5 + 1;
    if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(lVar23 + 0x298) = uVar14;
    plVar4 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(lVar23 + 0x2a0) = plVar4;
    *plVar4 = lVar23;
    plVar4[1] = (long)FUN_102749c40;
    plVar16 = *(long **)(lVar23 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) goto LAB_10274b338;
    plVar12 = (long *)(lVar23 + 0x40);
  }
  else {
    uVar14 = plVar3[0x4a];
    plVar3[0x50] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar14 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar14 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102749c3c);
        (*pcVar2)();
      }
      uVar14 = *(ulong *)(uVar14 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar14 = 0;
      FUN_10274d138();
    }
    plVar3[0x51] = uVar14;
    plVar3[0x52] = 1;
    func_0x000107c4e090();
    func_0x000107c61180();
    plVar3[0x53] = uVar14;
    plVar4 = (long *)0x120;
    func_0x000107c615b8();
    plVar3[0x54] = (long)plVar4;
    *plVar4 = (long)plVar3;
    plVar4[1] = (long)FUN_102749c40;
    plVar16 = (long *)plVar3[0x4c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) goto LAB_102749c3c;
    plVar12 = plVar3 + 8;
  }
FUN_10274bdac:
  plVar4[0x18] = uVar14;
  plVar4[0x19] = (long)plVar16;
  plVar4[0x17] = (long)plVar12;
  pcVar2 = FUN_10274bdc8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102749a6c; end: 102749ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102749a6c(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *unaff_x20;
  undefined *puVar14;
  long *plVar15;
  undefined1 *puVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  ulong uVar22;
  long *unaff_x22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  int *piVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x4c] = (long)unaff_x20;
  unaff_x22[0x4b] = param_2;
  unaff_x22[0x4a] = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    pcVar2 = FUN_102749ad8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = unaff_x22[0x4a];
  if (uVar12 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar3 = uVar12;
    }
    func_0x000107c60480();
  }
  unaff_x22[0x4d] = uVar3;
  unaff_x22[0x4e] = _DAT_112ebbd78;
  unaff_x22[0x4f] = _DAT_112ebbd88;
  if (uVar3 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000102749c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])(PTR___swiftEmptyArrayStorage_11034f1c8);
      return;
    }
LAB_102749c3c:
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = *unaff_x22;
    plVar23 = (long *)*unaff_x22;
    *(long **)(lVar13 + 0x2a8) = unaff_x20;
    func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x2a0));
    func_0x000107c61170(*(undefined8 *)(lVar13 + 0x298));
    if (unaff_x20 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        pcVar2 = FUN_102749cf0;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      pcVar2 = FUN_10274b33c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10 = plVar23 + 8;
    if (*plVar10 == 0) {
      func_0x00010274dd58(plVar10,0x112ebbe10,&UNK_10dad4f60);
      lVar13 = 0;
    }
    else {
      plVar4 = plVar23 + 2;
      puVar17 = (ulong *)plVar23[0x4b];
      plVar23[3] = plVar23[9];
      *plVar4 = *plVar10;
      plVar23[5] = plVar23[0xb];
      plVar23[4] = plVar23[10];
      plVar23[7] = plVar23[0xd];
      plVar23[6] = plVar23[0xc];
      FUN_10274dd08(plVar4,plVar23 + 0x26);
      lVar13 = plVar23[0x26];
      func_0x0001000834e4(plVar23 + 0x27);
      FUN_10274dd08(plVar4,plVar23 + 0x2c);
      func_0x000107c61170(plVar23[0x2c]);
      uVar18 = *puVar17;
      uVar12 = uVar18;
      func_0x000107c61558();
      uVar3 = uVar18;
      if ((uVar12 & 1) == 0) {
        uVar3 = 0;
        func_0x000100fb5010(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18);
      }
      uVar12 = *(ulong *)(uVar3 + 0x10);
      uVar18 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar12) {
        uVar18 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        func_0x000100fb5010(uVar18,uVar12 + 1,1,uVar3);
      }
      puVar17 = (ulong *)plVar23[0x4b];
      *(ulong *)(uVar18 + 0x10) = uVar12 + 1;
      func_0x000100fb8694(plVar23 + 0x2d,uVar18 + uVar12 * 0x28 + 0x20);
      func_0x00010274dd58(plVar4,0x112ebbe18,&UNK_10dad4f68);
      *puVar17 = uVar18;
    }
    plVar23[0x56] = lVar13;
    uVar12 = plVar23[0x51];
    func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,PTR_s_multisnap_112612448);
    if ((uVar12 & 1) == 0) {
LAB_102749e74:
      puVar32 = (undefined *)0x0;
      plVar23[0x57] = 0;
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar5 = (undefined *)plVar23[0x51];
      func_0x000107c4d1e0();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) goto LAB_102749e74;
      uVar6 = 0;
      FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
      puVar32 = puVar5;
      func_0x000107c5fc54(puVar5,uVar6);
      func_0x000107c61170(puVar5);
      plVar23[0x57] = (long)puVar32;
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar32 != (undefined *)0x0) {
        puVar5 = puVar32;
      }
    }
    if ((ulong)puVar5 >> 0x3e == 0) {
      puVar14 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar14 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        puVar14 = puVar5;
      }
      func_0x000107c60480();
    }
    plVar23[0x59] = (long)puVar14;
    plVar23[0x58] = (ulong)puVar5 & 0xffffffffffffff8;
    plVar23[0x5a] = *(long *)(plVar23[0x4c] + plVar23[0x4e]);
    plVar23[0x5b] = *(long *)(plVar23[0x4c] + plVar23[0x4f]);
    plVar23[0x5c] = 0;
    func_0x000107c61434(puVar32);
    if (puVar14 != (undefined *)0x0) {
      uVar12 = 0;
      while( true ) {
        plVar23[0x5d] = uVar12;
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((undefined *)plVar23[0x57] != (undefined *)0x0) {
          puVar5 = (undefined *)plVar23[0x57];
        }
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(plVar23[0x58] + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a474);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(puVar5 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar12;
          func_0x000101016c54();
        }
        plVar23[0x5e] = uVar3;
        plVar23[0x5f] = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a470);
          (*pcVar2)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar12 = uVar3;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar3);
        puVar32 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar3 = uVar12;
        func_0x000107c5ee20(uVar12,puVar5);
        plVar23[0x48] = 0;
        func_0x000107c4636c();
        plVar23[0x60] = (long)puVar32;
        func_0x000107c61170(uVar3);
        lVar13 = plVar23[0x48];
        if (puVar32 == (undefined *)0x0) {
          lVar31 = lVar13;
          func_0x000107c61174();
          func_0x000107c5ed30(lVar13);
          func_0x000107c61170(lVar31);
          func_0x000107c61654();
          func_0x000107c614ac(lVar13);
          func_0x00010006c090(uVar12,puVar5);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar12,puVar5);
          func_0x000100083b20(plVar23 + 0x32);
          lVar13 = plVar23[0x35];
          lVar31 = plVar23[0x36];
          func_0x0001000a8868(plVar23 + 0x32,lVar13);
          puVar5 = puVar32;
          (**(code **)(lVar31 + 8))(puVar32,lVar13,lVar31);
          func_0x0001000834e4(plVar23 + 0x32);
          if (((ulong)puVar5 & 1) != 0) {
            func_0x000100083b20(plVar23 + 0x37);
            pcVar2 = (code *)plVar23[0x3a];
            lVar13 = plVar23[0x3b];
            unaff_x20 = plVar23 + 0x37;
            UNRECOVERED_JUMPTABLE = pcVar2;
            func_0x0001000a8868();
            piVar28 = *(int **)(lVar13 + 0x18);
            iVar1 = *piVar28;
            plVar4 = (long *)(ulong)(uint)piVar28[1];
            func_0x000107c615b8();
            plVar23[0x61] = (long)plVar4;
            *plVar4 = (long)plVar23;
            plVar4[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274a3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar28))(puVar32,pcVar2,lVar13);
              return;
            }
            goto LAB_10274a564;
          }
          func_0x000107c61170(puVar32);
        }
        plVar23[0x17] = 0;
        plVar23[0x16] = 0;
        plVar23[0x19] = 0;
        plVar23[0x18] = 0;
        plVar23[0x15] = 0;
        plVar23[0x14] = 0;
        lVar13 = plVar23[0x5f];
        lVar31 = plVar23[0x59];
        func_0x000107c61170(plVar23[0x5e]);
        func_0x00010274dd58(plVar23 + 0x14,0x112ebbe10,&UNK_10dad4f60);
        if (lVar13 == lVar31) break;
        uVar12 = plVar23[0x5f];
      }
    }
    lVar13 = plVar23[0x56];
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((undefined *)plVar23[0x57] != (undefined *)0x0) {
      puVar5 = (undefined *)plVar23[0x57];
    }
    func_0x000107c6142c(puVar5);
    lVar31 = plVar23[0x5c];
    if (lVar13 == 0) {
      if (lVar31 != 0) {
        lVar19 = plVar23[0x51];
        func_0x000107c4e090();
        func_0x000107c61180();
        lVar13 = 0;
        lVar31 = plVar23[0x5c];
        goto LAB_10274a0e0;
      }
      lVar13 = plVar23[0x51];
      plVar20 = (long *)plVar23[0x50];
      func_0x000107c6142c(plVar23[0x57]);
      func_0x000107c615f0(lVar13);
      plVar4 = plVar20;
      func_0x000107c61550();
      plVar24 = (long *)plVar23[0x50];
      if ((((int)plVar4 == 0) || (((ulong)plVar20 >> 0x3e & 1) != 0)) ||
         (plVar4 = plVar24, (long)plVar24 < 0)) {
        if ((ulong)plVar24 >> 0x3e == 0) {
          plVar20 = *(long **)(((ulong)plVar20 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar20 = (long *)((ulong)plVar20 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar24) {
            plVar20 = plVar24;
          }
          func_0x000107c60480(plVar20);
          plVar24 = (long *)plVar23[0x50];
        }
        plVar4 = (long *)0x0;
        FUN_102738e9c(0,(long)plVar20 + 1,1,plVar24);
        plVar20 = plVar4;
      }
      uVar3 = (ulong)plVar20 & 0xffffffffffffff8;
      uVar12 = *(ulong *)(uVar3 + 0x10);
      unaff_x20 = plVar4;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar12) {
        unaff_x20 = (long *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_102738e9c(unaff_x20,uVar12 + 1,1,plVar4);
        uVar3 = (ulong)unaff_x20 & 0xffffffffffffff8;
      }
      plVar4 = (long *)plVar23[0x51];
      *(ulong *)(uVar3 + 0x10) = uVar12 + 1;
      *(long **)(uVar3 + uVar12 * 8 + 0x20) = plVar4;
      func_0x000107c615e8();
    }
    else {
      lVar19 = plVar23[0x56];
      lVar13 = lVar19;
      if (lVar31 == 0) {
        func_0x000107c61174();
        plVar4 = plVar23 + 0x57;
      }
      else {
LAB_10274a0e0:
        plVar4 = plVar23 + 0x5c;
        lVar25 = plVar23[0x57];
        func_0x000107c61434(lVar31);
        func_0x000107c61174(lVar13);
        func_0x000107c6142c(lVar25);
      }
      lVar13 = *plVar4;
      uVar12 = plVar23[0x51];
      func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130
                         );
      if ((uVar12 & 1) == 0) {
LAB_10274a16c:
        uVar3 = 0;
      }
      else {
        uVar12 = plVar23[0x51];
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_10274a16c;
        uVar6 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar3 = uVar12;
        func_0x000107c5fc54(uVar12,uVar6);
        func_0x000107c61170();
      }
      plVar24 = (long *)plVar23[0x50];
      FUN_10274ce90();
      uVar18 = uVar12;
      func_0x000107c610f8();
      lVar31 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar18 + _DAT_112ebbdc8) = 0;
      lVar25 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar18 + _DAT_112ebbdd0) = 0;
      *(long *)(uVar18 + _DAT_112ebbdc0) = lVar19;
      *(long *)(uVar18 + lVar31) = lVar13;
      *(ulong *)(uVar18 + lVar25) = uVar3;
      plVar23[0x46] = uVar18;
      plVar23[0x47] = uVar12;
      plVar20 = plVar23 + 0x46;
      func_0x000107c61154(plVar20,PTR_s_init_1125d9248);
      plVar4 = plVar24;
      func_0x000107c61550();
      plVar15 = (long *)plVar23[0x50];
      if ((((int)plVar4 == 0) || (((ulong)plVar24 >> 0x3e & 1) != 0)) ||
         (plVar4 = plVar15, (long)plVar15 < 0)) {
        if ((ulong)plVar15 >> 0x3e == 0) {
          plVar24 = *(long **)(((ulong)plVar24 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar24 = (long *)((ulong)plVar24 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar15) {
            plVar24 = plVar15;
          }
          func_0x000107c60480(plVar24);
          plVar15 = (long *)plVar23[0x50];
        }
        plVar4 = (long *)0x0;
        FUN_102738e9c(0,(long)plVar24 + 1,1,plVar15);
        plVar24 = plVar4;
      }
      uVar3 = (ulong)plVar24 & 0xffffffffffffff8;
      uVar12 = *(ulong *)(uVar3 + 0x10);
      unaff_x20 = plVar4;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar12) {
        unaff_x20 = (long *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_102738e9c(unaff_x20,uVar12 + 1,1,plVar4);
        uVar3 = (ulong)unaff_x20 & 0xffffffffffffff8;
      }
      plVar4 = (long *)plVar23[0x5c];
      lVar31 = plVar23[0x56];
      lVar13 = plVar23[0x51];
      *(ulong *)(uVar3 + 0x10) = uVar12 + 1;
      *(long **)(uVar3 + uVar12 * 8 + 0x20) = plVar20;
      func_0x000107c615e8(lVar13);
      func_0x000107c61170(lVar31);
      func_0x000107c6142c();
    }
    uVar3 = plVar23[0x52];
    if (uVar3 == plVar23[0x4d]) {
      UNRECOVERED_JUMPTABLE = (code *)plVar23[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274a29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(unaff_x20);
        return;
      }
    }
    else {
      plVar23[0x50] = (long)unaff_x20;
      UNRECOVERED_JUMPTABLE = (code *)plVar23[0x4a];
      if (((ulong)UNRECOVERED_JUMPTABLE & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a510);
          (*pcVar2)();
        }
        uVar12 = *(ulong *)(UNRECOVERED_JUMPTABLE + uVar3 * 8 + 0x20);
        func_0x000107c615f0();
      }
      else {
        uVar12 = uVar3;
        FUN_10274d138();
      }
      plVar23[0x51] = uVar12;
      plVar23[0x52] = uVar3 + 1;
      if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a50c);
        (*pcVar2)();
      }
      func_0x000107c4e090();
      func_0x000107c61180();
      plVar23[0x53] = uVar12;
      plVar4 = (long *)0x120;
      func_0x000107c615b8();
      plVar23[0x54] = (long)plVar4;
      *plVar4 = (long)plVar23;
      plVar4[1] = (long)FUN_102749c40;
      unaff_x20 = (long *)plVar23[0x4c];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) goto FUN_10274bdac;
    }
LAB_10274a564:
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = *plVar23;
    plVar23 = (long *)*plVar23;
    *(long **)(lVar13 + 0x310) = plVar4;
    *(long **)(lVar13 + 0x318) = unaff_x20;
    func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x308));
    if (unaff_x20 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        pcVar2 = FUN_10274a610;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      pcVar2 = FUN_10274a82c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar16 = (undefined1 *)plVar23[0x62];
    func_0x0001000834e4(plVar23 + 0x37);
    func_0x000107c5b198();
    func_0x000107c61180();
    plVar23[100] = (long)puVar16;
    puVar7 = puVar16;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar7 == (undefined1 *)0x0) {
      lVar13 = plVar23[0x62];
      lVar31 = plVar23[0x60];
      lVar19 = plVar23[0x57];
      FUN_10274dbb4();
      func_0x000107c613f8(&UNK_110543998,puVar7,0,0);
      *puVar7 = 1;
      func_0x000107c61654();
      func_0x000107c6142c(lVar19);
      func_0x000107c61170(puVar16);
      func_0x000107c615e8(lVar13);
      func_0x000107c61170(lVar31);
      lVar13 = plVar23[0x5c];
      puVar32 = (undefined *)plVar23[0x57];
      lVar31 = plVar23[0x56];
      lVar19 = plVar23[0x51];
      lVar25 = plVar23[0x50];
      func_0x000107c61170(plVar23[0x5e]);
      func_0x000107c615e8(lVar19);
      func_0x000107c6142c(lVar25);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar32 != (undefined *)0x0) {
        puVar5 = puVar32;
      }
      func_0x000107c6142c(puVar5);
      func_0x000107c61170(lVar31);
      func_0x000107c6142c(lVar13);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar23[1])();
        return;
      }
    }
    else {
      puVar8 = puVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar7);
      plVar23[0x65] = (long)puVar8;
      plVar23[0x66] = (long)UNRECOVERED_JUMPTABLE;
      func_0x000100083b20(plVar23 + 0x41);
      lVar13 = plVar23[0x44];
      lVar31 = plVar23[0x45];
      func_0x0001000a8868(plVar23 + 0x41,lVar13);
      piVar28 = *(int **)(lVar31 + 0x20);
      iVar1 = *piVar28;
      puVar9 = (undefined8 *)(ulong)(uint)piVar28[1];
      func_0x000107c615b8();
      plVar23[0x67] = (long)puVar9;
      *puVar9 = plVar23;
      puVar9[1] = FUN_10274a908;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274a740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar28))
                  (puVar9,plVar23 + 0x3c,puVar16,"processedSnapDoc(from:)",0x17,0x9000000000000002,
                   0x10d,plVar23 + 0x49,lVar13);
        return;
      }
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = plVar23[0x57];
    func_0x000107c61170(plVar23[0x60]);
    func_0x000107c6142c(lVar13);
    func_0x0001000834e4(plVar23 + 0x37);
    lVar31 = plVar23[99];
    lVar13 = plVar23[0x5c];
    puVar32 = (undefined *)plVar23[0x57];
    lVar19 = plVar23[0x56];
    lVar25 = plVar23[0x51];
    lVar29 = plVar23[0x50];
    func_0x000107c61170(plVar23[0x5e]);
    func_0x000107c615e8(lVar25);
    func_0x000107c6142c(lVar29);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar32 != (undefined *)0x0) {
      puVar5 = puVar32;
    }
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(lVar19);
    func_0x000107c6142c(lVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar23[1])();
      return;
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = *plVar23;
    puVar9 = *(undefined8 **)(lVar13 + 0x338);
    lVar19 = *plVar23;
    func_0x000107c615c0();
    if (lVar31 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        pcVar2 = FUN_10274aaec;
        goto LAB_107c615e0;
      }
    }
    else {
      *(undefined8 *)(lVar13 + 0x340) = *(undefined8 *)(lVar13 + 0x248);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        pcVar2 = FUN_10274a9b4;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar35 = *(undefined8 *)(lVar19 + 0x340);
    uVar6 = *(undefined8 *)(lVar19 + 0x330);
    uVar21 = *(undefined8 *)(lVar19 + 0x328);
    uVar26 = *(undefined8 *)(lVar19 + 800);
    uVar30 = *(undefined8 *)(lVar19 + 0x310);
    uVar33 = *(undefined8 *)(lVar19 + 0x300);
    uVar34 = *(undefined8 *)(lVar19 + 0x2b8);
    func_0x000100fb85f0();
    func_0x000107c613f8(&UNK_11072cd20,puVar9,0,0);
    *puVar9 = uVar35;
    func_0x000107c6142c(uVar34);
    func_0x00010006c090(uVar21,uVar6);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar26);
    func_0x000107c615e8(uVar30);
    func_0x0001000834e4(lVar19 + 0x208);
    uVar6 = *(undefined8 *)(lVar19 + 0x2e0);
    puVar32 = *(undefined **)(lVar19 + 0x2b8);
    uVar21 = *(undefined8 *)(lVar19 + 0x2b0);
    uVar26 = *(undefined8 *)(lVar19 + 0x288);
    uVar30 = *(undefined8 *)(lVar19 + 0x280);
    func_0x000107c61170(*(undefined8 *)(lVar19 + 0x2f0));
    func_0x000107c615e8(uVar26);
    func_0x000107c6142c(uVar30);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar32 != (undefined *)0x0) {
      puVar5 = puVar32;
    }
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(uVar21);
    func_0x000107c6142c(uVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar19 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar26 = *(undefined8 *)(lVar19 + 0x330);
    uVar21 = *(undefined8 *)(lVar19 + 0x328);
    uVar30 = *(undefined8 *)(lVar19 + 800);
    uVar33 = *(undefined8 *)(lVar19 + 0x310);
    uVar34 = *(undefined8 *)(lVar19 + 0x300);
    func_0x0001000834e4(lVar19 + 0x208);
    puVar5 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    uVar6 = uVar21;
    func_0x000107c5ee20(uVar21,uVar26);
    func_0x000107c45ae0();
    func_0x000107c61170(uVar6);
    func_0x00010006c090(uVar21,uVar26);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar30);
    func_0x000107c615e8(uVar33);
    plVar4 = (long *)(lVar19 + 0xa0);
    *plVar4 = (long)puVar5;
    func_0x000100fb8694(lVar19 + 0x1e0,lVar19 + 0xa8);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*plVar4 == 0) goto LAB_10274b260;
    plVar23 = (long *)(lVar19 + 0x70);
    uVar12 = *(ulong *)(lVar19 + 0x2e0);
    *(undefined8 *)(lVar19 + 0x78) = *(undefined8 *)(lVar19 + 0xa8);
    *plVar23 = *plVar4;
    *(undefined8 *)(lVar19 + 0x88) = *(undefined8 *)(lVar19 + 0xb8);
    *(undefined8 *)(lVar19 + 0x80) = *(undefined8 *)(lVar19 + 0xb0);
    *(undefined8 *)(lVar19 + 0x98) = *(undefined8 *)(lVar19 + 200);
    *(undefined8 *)(lVar19 + 0x90) = *(undefined8 *)(lVar19 + 0xc0);
    if (uVar12 == 0) {
      uVar12 = *(ulong *)(lVar19 + 0x2b8);
      if (uVar12 != 0) {
        func_0x000107c61434(uVar12);
        goto LAB_10274abe8;
      }
    }
    else {
LAB_10274abe8:
      FUN_10274dd08(plVar23,lVar19 + 0xd0);
      uVar6 = *(undefined8 *)(lVar19 + 0xd0);
      uVar3 = uVar12;
      func_0x000107c61550();
      if ((uVar12 >> 0x3e != 0) || ((uVar3 & 1) == 0)) {
        FUN_10274d478();
      }
      if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(lVar19 + 0x2e8)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
        (*pcVar2)();
      }
      lVar13 = (uVar12 & 0xffffffffffffff8) + *(ulong *)(lVar19 + 0x2e8) * 8;
      uVar21 = *(undefined8 *)(lVar13 + 0x20);
      *(undefined8 *)(lVar13 + 0x20) = uVar6;
      func_0x000107c61170(uVar21);
      func_0x0001000834e4(lVar19 + 0xd8);
    }
    puVar17 = *(ulong **)(lVar19 + 600);
    FUN_10274dd08(plVar23,lVar19 + 0x100);
    func_0x000107c61170(*(undefined8 *)(lVar19 + 0x100));
    uVar27 = *puVar17;
    uVar3 = uVar27;
    func_0x000107c61558();
    uVar18 = uVar27;
    if ((uVar3 & 1) == 0) {
      uVar18 = 0;
      func_0x000100fb5010(0,*(long *)(uVar27 + 0x10) + 1,1,uVar27);
    }
    uVar3 = *(ulong *)(uVar18 + 0x10);
    uVar27 = uVar18;
    if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar3) {
      uVar27 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
      func_0x000100fb5010(uVar27,uVar3 + 1,1,uVar18);
    }
    uVar6 = *(undefined8 *)(lVar19 + 0x2f0);
    puVar17 = *(ulong **)(lVar19 + 600);
    *(ulong *)(uVar27 + 0x10) = uVar3 + 1;
    func_0x000100fb8694(lVar19 + 0x108,uVar27 + uVar3 * 0x28 + 0x20);
    func_0x000107c61170(uVar6);
    func_0x00010274dd58(plVar23,0x112ebbe18,&UNK_10dad4f68);
    *puVar17 = uVar27;
    uVar3 = *(ulong *)(lVar19 + 0x2f8);
    *(ulong *)(lVar19 + 0x2e0) = uVar12;
    if (uVar3 != *(ulong *)(lVar19 + 0x2c8)) {
      while( true ) {
        *(ulong *)(lVar19 + 0x2e8) = uVar3;
        puVar32 = puVar5;
        if (*(undefined **)(lVar19 + 0x2b8) != (undefined *)0x0) {
          puVar32 = *(undefined **)(lVar19 + 0x2b8);
        }
        if (((ulong)puVar32 & 0xc000000000000001) == 0) {
          if (*(ulong *)(*(long *)(lVar19 + 0x2c0) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
            (*pcVar2)();
          }
          uVar12 = *(ulong *)(puVar32 + uVar3 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar12 = uVar3;
          func_0x000101016c54();
        }
        *(ulong *)(lVar19 + 0x2f0) = uVar12;
        *(ulong *)(lVar19 + 0x2f8) = uVar3 + 1;
        if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
          (*pcVar2)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar3 = uVar12;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar12);
        puVar14 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar12 = uVar3;
        func_0x000107c5ee20(uVar3,puVar32);
        *(undefined8 *)(lVar19 + 0x240) = 0;
        func_0x000107c4636c();
        *(undefined **)(lVar19 + 0x300) = puVar14;
        func_0x000107c61170(uVar12);
        uVar6 = *(undefined8 *)(lVar19 + 0x240);
        if (puVar14 == (undefined *)0x0) {
          uVar21 = uVar6;
          func_0x000107c61174();
          func_0x000107c5ed30(uVar6);
          func_0x000107c61170(uVar21);
          func_0x000107c61654();
          func_0x000107c614ac(uVar6);
          func_0x00010006c090(uVar3,puVar32);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar3,puVar32);
          func_0x000100083b20(lVar19 + 400);
          uVar6 = *(undefined8 *)(lVar19 + 0x1a8);
          lVar13 = *(long *)(lVar19 + 0x1b0);
          func_0x0001000a8868(lVar19 + 400,uVar6);
          puVar32 = puVar14;
          (**(code **)(lVar13 + 8))(puVar14,uVar6,lVar13);
          func_0x0001000834e4(lVar19 + 400);
          if (((ulong)puVar32 & 1) != 0) {
            func_0x000100083b20(lVar19 + 0x1b8);
            uVar6 = *(undefined8 *)(lVar19 + 0x1d0);
            lVar13 = *(long *)(lVar19 + 0x1d8);
            func_0x0001000a8868(lVar19 + 0x1b8,uVar6);
            piVar28 = *(int **)(lVar13 + 0x18);
            iVar1 = *piVar28;
            plVar4 = (long *)(ulong)(uint)piVar28[1];
            func_0x000107c615b8();
            *(long **)(lVar19 + 0x308) = plVar4;
            *plVar4 = lVar19;
            plVar4[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar28))(puVar14,uVar6,lVar13);
              return;
            }
            goto LAB_10274b338;
          }
          func_0x000107c61170(puVar14);
        }
        *(undefined8 *)(lVar19 + 0xb8) = 0;
        *(undefined8 *)(lVar19 + 0xb0) = 0;
        *(undefined8 *)(lVar19 + 200) = 0;
        *(undefined8 *)(lVar19 + 0xc0) = 0;
        *(undefined8 *)(lVar19 + 0xa8) = 0;
        *plVar4 = 0;
LAB_10274b260:
        lVar13 = *(long *)(lVar19 + 0x2f8);
        lVar31 = *(long *)(lVar19 + 0x2c8);
        func_0x000107c61170(*(undefined8 *)(lVar19 + 0x2f0));
        func_0x00010274dd58(plVar4,0x112ebbe10,&UNK_10dad4f60);
        if (lVar13 == lVar31) break;
        uVar3 = *(ulong *)(lVar19 + 0x2f8);
      }
    }
    lVar13 = *(long *)(lVar19 + 0x2b0);
    if (*(undefined **)(lVar19 + 0x2b8) != (undefined *)0x0) {
      puVar5 = *(undefined **)(lVar19 + 0x2b8);
    }
    func_0x000107c6142c(puVar5);
    lVar31 = *(long *)(lVar19 + 0x2e0);
    if (lVar13 == 0) {
      if (lVar31 != 0) {
        uVar21 = *(undefined8 *)(lVar19 + 0x288);
        func_0x000107c4e090();
        func_0x000107c61180();
        uVar6 = 0;
        lVar31 = *(long *)(lVar19 + 0x2e0);
        goto LAB_10274ad78;
      }
      uVar6 = *(undefined8 *)(lVar19 + 0x288);
      uVar18 = *(ulong *)(lVar19 + 0x280);
      func_0x000107c6142c(*(undefined8 *)(lVar19 + 0x2b8));
      func_0x000107c615f0(uVar6);
      uVar12 = uVar18;
      func_0x000107c61550();
      uVar3 = *(ulong *)(lVar19 + 0x280);
      if ((((int)uVar12 == 0) || ((uVar18 >> 0x3e & 1) != 0)) || ((long)uVar3 < 0)) {
        if (uVar3 >> 0x3e == 0) {
          uVar12 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar12 = uVar18 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar3) {
            uVar12 = uVar3;
          }
          func_0x000107c60480(uVar12);
          uVar3 = *(ulong *)(lVar19 + 0x280);
        }
        uVar18 = 0;
        FUN_102738e9c(0,uVar12 + 1,1,uVar3);
        uVar3 = uVar18;
      }
      uVar18 = uVar18 & 0xffffffffffffff8;
      uVar12 = *(ulong *)(uVar18 + 0x10);
      uVar27 = uVar3;
      if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar12) {
        uVar27 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
        FUN_102738e9c(uVar27,uVar12 + 1,1,uVar3);
        uVar18 = uVar27 & 0xffffffffffffff8;
      }
      uVar6 = *(undefined8 *)(lVar19 + 0x288);
      *(ulong *)(uVar18 + 0x10) = uVar12 + 1;
      *(undefined8 *)(uVar18 + uVar12 * 8 + 0x20) = uVar6;
      func_0x000107c615e8();
    }
    else {
      uVar21 = *(undefined8 *)(lVar19 + 0x2b0);
      uVar6 = uVar21;
      if (lVar31 == 0) {
        func_0x000107c61174();
        puVar9 = (undefined8 *)(lVar19 + 0x2b8);
      }
      else {
LAB_10274ad78:
        puVar9 = (undefined8 *)(lVar19 + 0x2e0);
        uVar26 = *(undefined8 *)(lVar19 + 0x2b8);
        func_0x000107c61434(lVar31);
        func_0x000107c61174(uVar6);
        func_0x000107c6142c(uVar26);
      }
      uVar6 = *puVar9;
      uVar12 = *(ulong *)(lVar19 + 0x288);
      func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130
                         );
      if ((uVar12 & 1) == 0) {
LAB_10274ae04:
        uVar3 = 0;
      }
      else {
        uVar12 = *(ulong *)(lVar19 + 0x288);
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_10274ae04;
        uVar26 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar3 = uVar12;
        func_0x000107c5fc54(uVar12,uVar26);
        func_0x000107c61170();
      }
      uVar22 = *(ulong *)(lVar19 + 0x280);
      FUN_10274ce90();
      uVar18 = uVar12;
      func_0x000107c610f8();
      lVar13 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar18 + _DAT_112ebbdc8) = 0;
      lVar31 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar18 + _DAT_112ebbdd0) = 0;
      *(undefined8 *)(uVar18 + _DAT_112ebbdc0) = uVar21;
      *(undefined8 *)(uVar18 + lVar13) = uVar6;
      *(ulong *)(uVar18 + lVar31) = uVar3;
      *(ulong *)(lVar19 + 0x230) = uVar18;
      *(ulong *)(lVar19 + 0x238) = uVar12;
      lVar13 = lVar19 + 0x230;
      func_0x000107c61154(lVar13,PTR_s_init_1125d9248);
      uVar12 = uVar22;
      func_0x000107c61550();
      uVar3 = *(ulong *)(lVar19 + 0x280);
      if ((((int)uVar12 == 0) || ((uVar22 >> 0x3e & 1) != 0)) || (uVar12 = uVar3, (long)uVar3 < 0))
      {
        if (uVar3 >> 0x3e == 0) {
          uVar18 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar18 = uVar22 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar3) {
            uVar18 = uVar3;
          }
          func_0x000107c60480(uVar18);
          uVar3 = *(ulong *)(lVar19 + 0x280);
        }
        uVar12 = 0;
        FUN_102738e9c(0,uVar18 + 1,1,uVar3);
        uVar22 = uVar12;
      }
      uVar22 = uVar22 & 0xffffffffffffff8;
      uVar3 = *(ulong *)(uVar22 + 0x10);
      uVar27 = uVar12;
      if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar3) {
        uVar27 = (ulong)(1 < *(ulong *)(uVar22 + 0x18));
        FUN_102738e9c(uVar27,uVar3 + 1,1,uVar12);
        uVar22 = uVar27 & 0xffffffffffffff8;
      }
      uVar21 = *(undefined8 *)(lVar19 + 0x2e0);
      uVar26 = *(undefined8 *)(lVar19 + 0x2b0);
      uVar6 = *(undefined8 *)(lVar19 + 0x288);
      *(ulong *)(uVar22 + 0x10) = uVar3 + 1;
      *(long *)(uVar22 + uVar3 * 8 + 0x20) = lVar13;
      func_0x000107c615e8(uVar6);
      func_0x000107c61170(uVar26);
      func_0x000107c6142c(uVar21);
    }
    uVar3 = *(ulong *)(lVar19 + 0x290);
    if (uVar3 == *(ulong *)(lVar19 + 0x268)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar19 + 8))(uVar27);
        return;
      }
LAB_10274b338:
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar6 = *(undefined8 *)(lVar19 + 0x280);
      func_0x000107c615e8(*(undefined8 *)(lVar19 + 0x288));
      func_0x000107c6142c(uVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
        func_0x000107c60e78();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar19 + 8))();
      return;
    }
    *(ulong *)(lVar19 + 0x280) = uVar27;
    uVar12 = *(ulong *)(lVar19 + 0x250);
    if ((uVar12 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar12 = *(ulong *)(uVar12 + uVar3 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar12 = uVar3;
      FUN_10274d138();
    }
    *(ulong *)(lVar19 + 0x288) = uVar12;
    *(ulong *)(lVar19 + 0x290) = uVar3 + 1;
    if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(lVar19 + 0x298) = uVar12;
    plVar4 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(lVar19 + 0x2a0) = plVar4;
    *plVar4 = lVar19;
    plVar4[1] = (long)FUN_102749c40;
    unaff_x20 = *(long **)(lVar19 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) goto LAB_10274b338;
    plVar10 = (long *)(lVar19 + 0x40);
  }
  else {
    uVar12 = unaff_x22[0x4a];
    unaff_x22[0x50] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar12 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102749c3c);
        (*pcVar2)();
      }
      uVar12 = *(ulong *)(uVar12 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar12 = 0;
      FUN_10274d138();
    }
    unaff_x22[0x51] = uVar12;
    unaff_x22[0x52] = 1;
    func_0x000107c4e090();
    func_0x000107c61180();
    unaff_x22[0x53] = uVar12;
    plVar4 = (long *)0x120;
    func_0x000107c615b8();
    unaff_x22[0x54] = (long)plVar4;
    *plVar4 = (long)unaff_x22;
    plVar4[1] = (long)FUN_102749c40;
    unaff_x20 = (long *)unaff_x22[0x4c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) goto LAB_102749c3c;
    plVar10 = unaff_x22 + 8;
  }
FUN_10274bdac:
  plVar4[0x18] = uVar12;
  plVar4[0x19] = (long)unaff_x20;
  plVar4[0x17] = (long)plVar10;
  pcVar2 = FUN_10274bdc8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102749ad8; end: 102749c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102749ad8(void)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *unaff_x20;
  undefined *puVar14;
  long *plVar15;
  undefined1 *puVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  ulong uVar22;
  long *unaff_x22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  int *piVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = unaff_x22[0x4a];
  if (uVar12 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar3 = uVar12;
    }
    func_0x000107c60480();
  }
  unaff_x22[0x4d] = uVar3;
  unaff_x22[0x4e] = _DAT_112ebbd78;
  unaff_x22[0x4f] = _DAT_112ebbd88;
  if (uVar3 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000102749c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])(PTR___swiftEmptyArrayStorage_11034f1c8);
      return;
    }
LAB_102749c3c:
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = *unaff_x22;
    plVar23 = (long *)*unaff_x22;
    *(long **)(lVar13 + 0x2a8) = unaff_x20;
    func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x2a0));
    func_0x000107c61170(*(undefined8 *)(lVar13 + 0x298));
    if (unaff_x20 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        pcVar2 = FUN_102749cf0;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      pcVar2 = FUN_10274b33c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar10 = plVar23 + 8;
    if (*plVar10 == 0) {
      func_0x00010274dd58(plVar10,0x112ebbe10,&UNK_10dad4f60);
      lVar13 = 0;
    }
    else {
      plVar4 = plVar23 + 2;
      puVar17 = (ulong *)plVar23[0x4b];
      plVar23[3] = plVar23[9];
      *plVar4 = *plVar10;
      plVar23[5] = plVar23[0xb];
      plVar23[4] = plVar23[10];
      plVar23[7] = plVar23[0xd];
      plVar23[6] = plVar23[0xc];
      FUN_10274dd08(plVar4,plVar23 + 0x26);
      lVar13 = plVar23[0x26];
      func_0x0001000834e4(plVar23 + 0x27);
      FUN_10274dd08(plVar4,plVar23 + 0x2c);
      func_0x000107c61170(plVar23[0x2c]);
      uVar18 = *puVar17;
      uVar12 = uVar18;
      func_0x000107c61558();
      uVar3 = uVar18;
      if ((uVar12 & 1) == 0) {
        uVar3 = 0;
        func_0x000100fb5010(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18);
      }
      uVar12 = *(ulong *)(uVar3 + 0x10);
      uVar18 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar12) {
        uVar18 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        func_0x000100fb5010(uVar18,uVar12 + 1,1,uVar3);
      }
      puVar17 = (ulong *)plVar23[0x4b];
      *(ulong *)(uVar18 + 0x10) = uVar12 + 1;
      func_0x000100fb8694(plVar23 + 0x2d,uVar18 + uVar12 * 0x28 + 0x20);
      func_0x00010274dd58(plVar4,0x112ebbe18,&UNK_10dad4f68);
      *puVar17 = uVar18;
    }
    plVar23[0x56] = lVar13;
    uVar12 = plVar23[0x51];
    func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,PTR_s_multisnap_112612448);
    if ((uVar12 & 1) == 0) {
LAB_102749e74:
      puVar32 = (undefined *)0x0;
      plVar23[0x57] = 0;
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar5 = (undefined *)plVar23[0x51];
      func_0x000107c4d1e0();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) goto LAB_102749e74;
      uVar6 = 0;
      FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
      puVar32 = puVar5;
      func_0x000107c5fc54(puVar5,uVar6);
      func_0x000107c61170(puVar5);
      plVar23[0x57] = (long)puVar32;
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar32 != (undefined *)0x0) {
        puVar5 = puVar32;
      }
    }
    if ((ulong)puVar5 >> 0x3e == 0) {
      puVar14 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar14 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        puVar14 = puVar5;
      }
      func_0x000107c60480();
    }
    plVar23[0x59] = (long)puVar14;
    plVar23[0x58] = (ulong)puVar5 & 0xffffffffffffff8;
    plVar23[0x5a] = *(long *)(plVar23[0x4c] + plVar23[0x4e]);
    plVar23[0x5b] = *(long *)(plVar23[0x4c] + plVar23[0x4f]);
    plVar23[0x5c] = 0;
    func_0x000107c61434(puVar32);
    if (puVar14 != (undefined *)0x0) {
      uVar12 = 0;
      while( true ) {
        plVar23[0x5d] = uVar12;
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((undefined *)plVar23[0x57] != (undefined *)0x0) {
          puVar5 = (undefined *)plVar23[0x57];
        }
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(plVar23[0x58] + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a474);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(puVar5 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar12;
          func_0x000101016c54();
        }
        plVar23[0x5e] = uVar3;
        plVar23[0x5f] = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a470);
          (*pcVar2)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar12 = uVar3;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar3);
        puVar32 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar3 = uVar12;
        func_0x000107c5ee20(uVar12,puVar5);
        plVar23[0x48] = 0;
        func_0x000107c4636c();
        plVar23[0x60] = (long)puVar32;
        func_0x000107c61170(uVar3);
        lVar13 = plVar23[0x48];
        if (puVar32 == (undefined *)0x0) {
          lVar31 = lVar13;
          func_0x000107c61174();
          func_0x000107c5ed30(lVar13);
          func_0x000107c61170(lVar31);
          func_0x000107c61654();
          func_0x000107c614ac(lVar13);
          func_0x00010006c090(uVar12,puVar5);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar12,puVar5);
          func_0x000100083b20(plVar23 + 0x32);
          lVar13 = plVar23[0x35];
          lVar31 = plVar23[0x36];
          func_0x0001000a8868(plVar23 + 0x32,lVar13);
          puVar5 = puVar32;
          (**(code **)(lVar31 + 8))(puVar32,lVar13,lVar31);
          func_0x0001000834e4(plVar23 + 0x32);
          if (((ulong)puVar5 & 1) != 0) {
            func_0x000100083b20(plVar23 + 0x37);
            pcVar2 = (code *)plVar23[0x3a];
            lVar13 = plVar23[0x3b];
            unaff_x20 = plVar23 + 0x37;
            UNRECOVERED_JUMPTABLE = pcVar2;
            func_0x0001000a8868();
            piVar28 = *(int **)(lVar13 + 0x18);
            iVar1 = *piVar28;
            plVar4 = (long *)(ulong)(uint)piVar28[1];
            func_0x000107c615b8();
            plVar23[0x61] = (long)plVar4;
            *plVar4 = (long)plVar23;
            plVar4[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274a3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar28))(puVar32,pcVar2,lVar13);
              return;
            }
            goto LAB_10274a564;
          }
          func_0x000107c61170(puVar32);
        }
        plVar23[0x17] = 0;
        plVar23[0x16] = 0;
        plVar23[0x19] = 0;
        plVar23[0x18] = 0;
        plVar23[0x15] = 0;
        plVar23[0x14] = 0;
        lVar13 = plVar23[0x5f];
        lVar31 = plVar23[0x59];
        func_0x000107c61170(plVar23[0x5e]);
        func_0x00010274dd58(plVar23 + 0x14,0x112ebbe10,&UNK_10dad4f60);
        if (lVar13 == lVar31) break;
        uVar12 = plVar23[0x5f];
      }
    }
    lVar13 = plVar23[0x56];
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((undefined *)plVar23[0x57] != (undefined *)0x0) {
      puVar5 = (undefined *)plVar23[0x57];
    }
    func_0x000107c6142c(puVar5);
    lVar31 = plVar23[0x5c];
    if (lVar13 == 0) {
      if (lVar31 != 0) {
        lVar19 = plVar23[0x51];
        func_0x000107c4e090();
        func_0x000107c61180();
        lVar13 = 0;
        lVar31 = plVar23[0x5c];
        goto LAB_10274a0e0;
      }
      lVar13 = plVar23[0x51];
      plVar20 = (long *)plVar23[0x50];
      func_0x000107c6142c(plVar23[0x57]);
      func_0x000107c615f0(lVar13);
      plVar4 = plVar20;
      func_0x000107c61550();
      plVar24 = (long *)plVar23[0x50];
      if ((((int)plVar4 == 0) || (((ulong)plVar20 >> 0x3e & 1) != 0)) ||
         (plVar4 = plVar24, (long)plVar24 < 0)) {
        if ((ulong)plVar24 >> 0x3e == 0) {
          plVar20 = *(long **)(((ulong)plVar20 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar20 = (long *)((ulong)plVar20 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar24) {
            plVar20 = plVar24;
          }
          func_0x000107c60480(plVar20);
          plVar24 = (long *)plVar23[0x50];
        }
        plVar4 = (long *)0x0;
        FUN_102738e9c(0,(long)plVar20 + 1,1,plVar24);
        plVar20 = plVar4;
      }
      uVar3 = (ulong)plVar20 & 0xffffffffffffff8;
      uVar12 = *(ulong *)(uVar3 + 0x10);
      unaff_x20 = plVar4;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar12) {
        unaff_x20 = (long *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_102738e9c(unaff_x20,uVar12 + 1,1,plVar4);
        uVar3 = (ulong)unaff_x20 & 0xffffffffffffff8;
      }
      plVar4 = (long *)plVar23[0x51];
      *(ulong *)(uVar3 + 0x10) = uVar12 + 1;
      *(long **)(uVar3 + uVar12 * 8 + 0x20) = plVar4;
      func_0x000107c615e8();
    }
    else {
      lVar19 = plVar23[0x56];
      lVar13 = lVar19;
      if (lVar31 == 0) {
        func_0x000107c61174();
        plVar4 = plVar23 + 0x57;
      }
      else {
LAB_10274a0e0:
        plVar4 = plVar23 + 0x5c;
        lVar25 = plVar23[0x57];
        func_0x000107c61434(lVar31);
        func_0x000107c61174(lVar13);
        func_0x000107c6142c(lVar25);
      }
      lVar13 = *plVar4;
      uVar12 = plVar23[0x51];
      func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130
                         );
      if ((uVar12 & 1) == 0) {
LAB_10274a16c:
        uVar3 = 0;
      }
      else {
        uVar12 = plVar23[0x51];
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_10274a16c;
        uVar6 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar3 = uVar12;
        func_0x000107c5fc54(uVar12,uVar6);
        func_0x000107c61170();
      }
      plVar24 = (long *)plVar23[0x50];
      FUN_10274ce90();
      uVar18 = uVar12;
      func_0x000107c610f8();
      lVar31 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar18 + _DAT_112ebbdc8) = 0;
      lVar25 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar18 + _DAT_112ebbdd0) = 0;
      *(long *)(uVar18 + _DAT_112ebbdc0) = lVar19;
      *(long *)(uVar18 + lVar31) = lVar13;
      *(ulong *)(uVar18 + lVar25) = uVar3;
      plVar23[0x46] = uVar18;
      plVar23[0x47] = uVar12;
      plVar20 = plVar23 + 0x46;
      func_0x000107c61154(plVar20,PTR_s_init_1125d9248);
      plVar4 = plVar24;
      func_0x000107c61550();
      plVar15 = (long *)plVar23[0x50];
      if ((((int)plVar4 == 0) || (((ulong)plVar24 >> 0x3e & 1) != 0)) ||
         (plVar4 = plVar15, (long)plVar15 < 0)) {
        if ((ulong)plVar15 >> 0x3e == 0) {
          plVar24 = *(long **)(((ulong)plVar24 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar24 = (long *)((ulong)plVar24 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar15) {
            plVar24 = plVar15;
          }
          func_0x000107c60480(plVar24);
          plVar15 = (long *)plVar23[0x50];
        }
        plVar4 = (long *)0x0;
        FUN_102738e9c(0,(long)plVar24 + 1,1,plVar15);
        plVar24 = plVar4;
      }
      uVar3 = (ulong)plVar24 & 0xffffffffffffff8;
      uVar12 = *(ulong *)(uVar3 + 0x10);
      unaff_x20 = plVar4;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar12) {
        unaff_x20 = (long *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_102738e9c(unaff_x20,uVar12 + 1,1,plVar4);
        uVar3 = (ulong)unaff_x20 & 0xffffffffffffff8;
      }
      plVar4 = (long *)plVar23[0x5c];
      lVar31 = plVar23[0x56];
      lVar13 = plVar23[0x51];
      *(ulong *)(uVar3 + 0x10) = uVar12 + 1;
      *(long **)(uVar3 + uVar12 * 8 + 0x20) = plVar20;
      func_0x000107c615e8(lVar13);
      func_0x000107c61170(lVar31);
      func_0x000107c6142c();
    }
    uVar3 = plVar23[0x52];
    if (uVar3 == plVar23[0x4d]) {
      UNRECOVERED_JUMPTABLE = (code *)plVar23[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274a29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(unaff_x20);
        return;
      }
    }
    else {
      plVar23[0x50] = (long)unaff_x20;
      UNRECOVERED_JUMPTABLE = (code *)plVar23[0x4a];
      if (((ulong)UNRECOVERED_JUMPTABLE & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a510);
          (*pcVar2)();
        }
        uVar12 = *(ulong *)(UNRECOVERED_JUMPTABLE + uVar3 * 8 + 0x20);
        func_0x000107c615f0();
      }
      else {
        uVar12 = uVar3;
        FUN_10274d138();
      }
      plVar23[0x51] = uVar12;
      plVar23[0x52] = uVar3 + 1;
      if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a50c);
        (*pcVar2)();
      }
      func_0x000107c4e090();
      func_0x000107c61180();
      plVar23[0x53] = uVar12;
      plVar4 = (long *)0x120;
      func_0x000107c615b8();
      plVar23[0x54] = (long)plVar4;
      *plVar4 = (long)plVar23;
      plVar4[1] = (long)FUN_102749c40;
      unaff_x20 = (long *)plVar23[0x4c];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) goto FUN_10274bdac;
    }
LAB_10274a564:
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = *plVar23;
    plVar23 = (long *)*plVar23;
    *(long **)(lVar13 + 0x310) = plVar4;
    *(long **)(lVar13 + 0x318) = unaff_x20;
    func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x308));
    if (unaff_x20 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        pcVar2 = FUN_10274a610;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      pcVar2 = FUN_10274a82c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar16 = (undefined1 *)plVar23[0x62];
    func_0x0001000834e4(plVar23 + 0x37);
    func_0x000107c5b198();
    func_0x000107c61180();
    plVar23[100] = (long)puVar16;
    puVar7 = puVar16;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar7 == (undefined1 *)0x0) {
      lVar13 = plVar23[0x62];
      lVar31 = plVar23[0x60];
      lVar19 = plVar23[0x57];
      FUN_10274dbb4();
      func_0x000107c613f8(&UNK_110543998,puVar7,0,0);
      *puVar7 = 1;
      func_0x000107c61654();
      func_0x000107c6142c(lVar19);
      func_0x000107c61170(puVar16);
      func_0x000107c615e8(lVar13);
      func_0x000107c61170(lVar31);
      lVar13 = plVar23[0x5c];
      puVar32 = (undefined *)plVar23[0x57];
      lVar31 = plVar23[0x56];
      lVar19 = plVar23[0x51];
      lVar25 = plVar23[0x50];
      func_0x000107c61170(plVar23[0x5e]);
      func_0x000107c615e8(lVar19);
      func_0x000107c6142c(lVar25);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar32 != (undefined *)0x0) {
        puVar5 = puVar32;
      }
      func_0x000107c6142c(puVar5);
      func_0x000107c61170(lVar31);
      func_0x000107c6142c(lVar13);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar23[1])();
        return;
      }
    }
    else {
      puVar8 = puVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar7);
      plVar23[0x65] = (long)puVar8;
      plVar23[0x66] = (long)UNRECOVERED_JUMPTABLE;
      func_0x000100083b20(plVar23 + 0x41);
      lVar13 = plVar23[0x44];
      lVar31 = plVar23[0x45];
      func_0x0001000a8868(plVar23 + 0x41,lVar13);
      piVar28 = *(int **)(lVar31 + 0x20);
      iVar1 = *piVar28;
      puVar9 = (undefined8 *)(ulong)(uint)piVar28[1];
      func_0x000107c615b8();
      plVar23[0x67] = (long)puVar9;
      *puVar9 = plVar23;
      puVar9[1] = FUN_10274a908;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274a740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar28))
                  (puVar9,plVar23 + 0x3c,puVar16,"processedSnapDoc(from:)",0x17,0x9000000000000002,
                   0x10d,plVar23 + 0x49,lVar13);
        return;
      }
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = plVar23[0x57];
    func_0x000107c61170(plVar23[0x60]);
    func_0x000107c6142c(lVar13);
    func_0x0001000834e4(plVar23 + 0x37);
    lVar31 = plVar23[99];
    lVar13 = plVar23[0x5c];
    puVar32 = (undefined *)plVar23[0x57];
    lVar19 = plVar23[0x56];
    lVar25 = plVar23[0x51];
    lVar29 = plVar23[0x50];
    func_0x000107c61170(plVar23[0x5e]);
    func_0x000107c615e8(lVar25);
    func_0x000107c6142c(lVar29);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar32 != (undefined *)0x0) {
      puVar5 = puVar32;
    }
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(lVar19);
    func_0x000107c6142c(lVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar23[1])();
      return;
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = *plVar23;
    puVar9 = *(undefined8 **)(lVar13 + 0x338);
    lVar19 = *plVar23;
    func_0x000107c615c0();
    if (lVar31 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        pcVar2 = FUN_10274aaec;
        goto LAB_107c615e0;
      }
    }
    else {
      *(undefined8 *)(lVar13 + 0x340) = *(undefined8 *)(lVar13 + 0x248);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
        pcVar2 = FUN_10274a9b4;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar35 = *(undefined8 *)(lVar19 + 0x340);
    uVar6 = *(undefined8 *)(lVar19 + 0x330);
    uVar21 = *(undefined8 *)(lVar19 + 0x328);
    uVar26 = *(undefined8 *)(lVar19 + 800);
    uVar30 = *(undefined8 *)(lVar19 + 0x310);
    uVar33 = *(undefined8 *)(lVar19 + 0x300);
    uVar34 = *(undefined8 *)(lVar19 + 0x2b8);
    func_0x000100fb85f0();
    func_0x000107c613f8(&UNK_11072cd20,puVar9,0,0);
    *puVar9 = uVar35;
    func_0x000107c6142c(uVar34);
    func_0x00010006c090(uVar21,uVar6);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar26);
    func_0x000107c615e8(uVar30);
    func_0x0001000834e4(lVar19 + 0x208);
    uVar6 = *(undefined8 *)(lVar19 + 0x2e0);
    puVar32 = *(undefined **)(lVar19 + 0x2b8);
    uVar21 = *(undefined8 *)(lVar19 + 0x2b0);
    uVar26 = *(undefined8 *)(lVar19 + 0x288);
    uVar30 = *(undefined8 *)(lVar19 + 0x280);
    func_0x000107c61170(*(undefined8 *)(lVar19 + 0x2f0));
    func_0x000107c615e8(uVar26);
    func_0x000107c6142c(uVar30);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar32 != (undefined *)0x0) {
      puVar5 = puVar32;
    }
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(uVar21);
    func_0x000107c6142c(uVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar19 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar26 = *(undefined8 *)(lVar19 + 0x330);
    uVar21 = *(undefined8 *)(lVar19 + 0x328);
    uVar30 = *(undefined8 *)(lVar19 + 800);
    uVar33 = *(undefined8 *)(lVar19 + 0x310);
    uVar34 = *(undefined8 *)(lVar19 + 0x300);
    func_0x0001000834e4(lVar19 + 0x208);
    puVar5 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    uVar6 = uVar21;
    func_0x000107c5ee20(uVar21,uVar26);
    func_0x000107c45ae0();
    func_0x000107c61170(uVar6);
    func_0x00010006c090(uVar21,uVar26);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar30);
    func_0x000107c615e8(uVar33);
    plVar4 = (long *)(lVar19 + 0xa0);
    *plVar4 = (long)puVar5;
    func_0x000100fb8694(lVar19 + 0x1e0,lVar19 + 0xa8);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*plVar4 == 0) goto LAB_10274b260;
    plVar23 = (long *)(lVar19 + 0x70);
    uVar12 = *(ulong *)(lVar19 + 0x2e0);
    *(undefined8 *)(lVar19 + 0x78) = *(undefined8 *)(lVar19 + 0xa8);
    *plVar23 = *plVar4;
    *(undefined8 *)(lVar19 + 0x88) = *(undefined8 *)(lVar19 + 0xb8);
    *(undefined8 *)(lVar19 + 0x80) = *(undefined8 *)(lVar19 + 0xb0);
    *(undefined8 *)(lVar19 + 0x98) = *(undefined8 *)(lVar19 + 200);
    *(undefined8 *)(lVar19 + 0x90) = *(undefined8 *)(lVar19 + 0xc0);
    if (uVar12 == 0) {
      uVar12 = *(ulong *)(lVar19 + 0x2b8);
      if (uVar12 != 0) {
        func_0x000107c61434(uVar12);
        goto LAB_10274abe8;
      }
    }
    else {
LAB_10274abe8:
      FUN_10274dd08(plVar23,lVar19 + 0xd0);
      uVar6 = *(undefined8 *)(lVar19 + 0xd0);
      uVar3 = uVar12;
      func_0x000107c61550();
      if ((uVar12 >> 0x3e != 0) || ((uVar3 & 1) == 0)) {
        FUN_10274d478();
      }
      if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(lVar19 + 0x2e8)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
        (*pcVar2)();
      }
      lVar13 = (uVar12 & 0xffffffffffffff8) + *(ulong *)(lVar19 + 0x2e8) * 8;
      uVar21 = *(undefined8 *)(lVar13 + 0x20);
      *(undefined8 *)(lVar13 + 0x20) = uVar6;
      func_0x000107c61170(uVar21);
      func_0x0001000834e4(lVar19 + 0xd8);
    }
    puVar17 = *(ulong **)(lVar19 + 600);
    FUN_10274dd08(plVar23,lVar19 + 0x100);
    func_0x000107c61170(*(undefined8 *)(lVar19 + 0x100));
    uVar27 = *puVar17;
    uVar3 = uVar27;
    func_0x000107c61558();
    uVar18 = uVar27;
    if ((uVar3 & 1) == 0) {
      uVar18 = 0;
      func_0x000100fb5010(0,*(long *)(uVar27 + 0x10) + 1,1,uVar27);
    }
    uVar3 = *(ulong *)(uVar18 + 0x10);
    uVar27 = uVar18;
    if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar3) {
      uVar27 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
      func_0x000100fb5010(uVar27,uVar3 + 1,1,uVar18);
    }
    uVar6 = *(undefined8 *)(lVar19 + 0x2f0);
    puVar17 = *(ulong **)(lVar19 + 600);
    *(ulong *)(uVar27 + 0x10) = uVar3 + 1;
    func_0x000100fb8694(lVar19 + 0x108,uVar27 + uVar3 * 0x28 + 0x20);
    func_0x000107c61170(uVar6);
    func_0x00010274dd58(plVar23,0x112ebbe18,&UNK_10dad4f68);
    *puVar17 = uVar27;
    uVar3 = *(ulong *)(lVar19 + 0x2f8);
    *(ulong *)(lVar19 + 0x2e0) = uVar12;
    if (uVar3 != *(ulong *)(lVar19 + 0x2c8)) {
      while( true ) {
        *(ulong *)(lVar19 + 0x2e8) = uVar3;
        puVar32 = puVar5;
        if (*(undefined **)(lVar19 + 0x2b8) != (undefined *)0x0) {
          puVar32 = *(undefined **)(lVar19 + 0x2b8);
        }
        if (((ulong)puVar32 & 0xc000000000000001) == 0) {
          if (*(ulong *)(*(long *)(lVar19 + 0x2c0) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
            (*pcVar2)();
          }
          uVar12 = *(ulong *)(puVar32 + uVar3 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar12 = uVar3;
          func_0x000101016c54();
        }
        *(ulong *)(lVar19 + 0x2f0) = uVar12;
        *(ulong *)(lVar19 + 0x2f8) = uVar3 + 1;
        if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
          (*pcVar2)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar3 = uVar12;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar12);
        puVar14 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar12 = uVar3;
        func_0x000107c5ee20(uVar3,puVar32);
        *(undefined8 *)(lVar19 + 0x240) = 0;
        func_0x000107c4636c();
        *(undefined **)(lVar19 + 0x300) = puVar14;
        func_0x000107c61170(uVar12);
        uVar6 = *(undefined8 *)(lVar19 + 0x240);
        if (puVar14 == (undefined *)0x0) {
          uVar21 = uVar6;
          func_0x000107c61174();
          func_0x000107c5ed30(uVar6);
          func_0x000107c61170(uVar21);
          func_0x000107c61654();
          func_0x000107c614ac(uVar6);
          func_0x00010006c090(uVar3,puVar32);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar3,puVar32);
          func_0x000100083b20(lVar19 + 400);
          uVar6 = *(undefined8 *)(lVar19 + 0x1a8);
          lVar13 = *(long *)(lVar19 + 0x1b0);
          func_0x0001000a8868(lVar19 + 400,uVar6);
          puVar32 = puVar14;
          (**(code **)(lVar13 + 8))(puVar14,uVar6,lVar13);
          func_0x0001000834e4(lVar19 + 400);
          if (((ulong)puVar32 & 1) != 0) {
            func_0x000100083b20(lVar19 + 0x1b8);
            uVar6 = *(undefined8 *)(lVar19 + 0x1d0);
            lVar13 = *(long *)(lVar19 + 0x1d8);
            func_0x0001000a8868(lVar19 + 0x1b8,uVar6);
            piVar28 = *(int **)(lVar13 + 0x18);
            iVar1 = *piVar28;
            plVar4 = (long *)(ulong)(uint)piVar28[1];
            func_0x000107c615b8();
            *(long **)(lVar19 + 0x308) = plVar4;
            *plVar4 = lVar19;
            plVar4[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar28))(puVar14,uVar6,lVar13);
              return;
            }
            goto LAB_10274b338;
          }
          func_0x000107c61170(puVar14);
        }
        *(undefined8 *)(lVar19 + 0xb8) = 0;
        *(undefined8 *)(lVar19 + 0xb0) = 0;
        *(undefined8 *)(lVar19 + 200) = 0;
        *(undefined8 *)(lVar19 + 0xc0) = 0;
        *(undefined8 *)(lVar19 + 0xa8) = 0;
        *plVar4 = 0;
LAB_10274b260:
        lVar13 = *(long *)(lVar19 + 0x2f8);
        lVar31 = *(long *)(lVar19 + 0x2c8);
        func_0x000107c61170(*(undefined8 *)(lVar19 + 0x2f0));
        func_0x00010274dd58(plVar4,0x112ebbe10,&UNK_10dad4f60);
        if (lVar13 == lVar31) break;
        uVar3 = *(ulong *)(lVar19 + 0x2f8);
      }
    }
    lVar13 = *(long *)(lVar19 + 0x2b0);
    if (*(undefined **)(lVar19 + 0x2b8) != (undefined *)0x0) {
      puVar5 = *(undefined **)(lVar19 + 0x2b8);
    }
    func_0x000107c6142c(puVar5);
    lVar31 = *(long *)(lVar19 + 0x2e0);
    if (lVar13 == 0) {
      if (lVar31 != 0) {
        uVar21 = *(undefined8 *)(lVar19 + 0x288);
        func_0x000107c4e090();
        func_0x000107c61180();
        uVar6 = 0;
        lVar31 = *(long *)(lVar19 + 0x2e0);
        goto LAB_10274ad78;
      }
      uVar6 = *(undefined8 *)(lVar19 + 0x288);
      uVar18 = *(ulong *)(lVar19 + 0x280);
      func_0x000107c6142c(*(undefined8 *)(lVar19 + 0x2b8));
      func_0x000107c615f0(uVar6);
      uVar12 = uVar18;
      func_0x000107c61550();
      uVar3 = *(ulong *)(lVar19 + 0x280);
      if ((((int)uVar12 == 0) || ((uVar18 >> 0x3e & 1) != 0)) || ((long)uVar3 < 0)) {
        if (uVar3 >> 0x3e == 0) {
          uVar12 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar12 = uVar18 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar3) {
            uVar12 = uVar3;
          }
          func_0x000107c60480(uVar12);
          uVar3 = *(ulong *)(lVar19 + 0x280);
        }
        uVar18 = 0;
        FUN_102738e9c(0,uVar12 + 1,1,uVar3);
        uVar3 = uVar18;
      }
      uVar18 = uVar18 & 0xffffffffffffff8;
      uVar12 = *(ulong *)(uVar18 + 0x10);
      uVar27 = uVar3;
      if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar12) {
        uVar27 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
        FUN_102738e9c(uVar27,uVar12 + 1,1,uVar3);
        uVar18 = uVar27 & 0xffffffffffffff8;
      }
      uVar6 = *(undefined8 *)(lVar19 + 0x288);
      *(ulong *)(uVar18 + 0x10) = uVar12 + 1;
      *(undefined8 *)(uVar18 + uVar12 * 8 + 0x20) = uVar6;
      func_0x000107c615e8();
    }
    else {
      uVar21 = *(undefined8 *)(lVar19 + 0x2b0);
      uVar6 = uVar21;
      if (lVar31 == 0) {
        func_0x000107c61174();
        puVar9 = (undefined8 *)(lVar19 + 0x2b8);
      }
      else {
LAB_10274ad78:
        puVar9 = (undefined8 *)(lVar19 + 0x2e0);
        uVar26 = *(undefined8 *)(lVar19 + 0x2b8);
        func_0x000107c61434(lVar31);
        func_0x000107c61174(uVar6);
        func_0x000107c6142c(uVar26);
      }
      uVar6 = *puVar9;
      uVar12 = *(ulong *)(lVar19 + 0x288);
      func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130
                         );
      if ((uVar12 & 1) == 0) {
LAB_10274ae04:
        uVar3 = 0;
      }
      else {
        uVar12 = *(ulong *)(lVar19 + 0x288);
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar12 == 0) goto LAB_10274ae04;
        uVar26 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar3 = uVar12;
        func_0x000107c5fc54(uVar12,uVar26);
        func_0x000107c61170();
      }
      uVar22 = *(ulong *)(lVar19 + 0x280);
      FUN_10274ce90();
      uVar18 = uVar12;
      func_0x000107c610f8();
      lVar13 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar18 + _DAT_112ebbdc8) = 0;
      lVar31 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar18 + _DAT_112ebbdd0) = 0;
      *(undefined8 *)(uVar18 + _DAT_112ebbdc0) = uVar21;
      *(undefined8 *)(uVar18 + lVar13) = uVar6;
      *(ulong *)(uVar18 + lVar31) = uVar3;
      *(ulong *)(lVar19 + 0x230) = uVar18;
      *(ulong *)(lVar19 + 0x238) = uVar12;
      lVar13 = lVar19 + 0x230;
      func_0x000107c61154(lVar13,PTR_s_init_1125d9248);
      uVar12 = uVar22;
      func_0x000107c61550();
      uVar3 = *(ulong *)(lVar19 + 0x280);
      if ((((int)uVar12 == 0) || ((uVar22 >> 0x3e & 1) != 0)) || (uVar12 = uVar3, (long)uVar3 < 0))
      {
        if (uVar3 >> 0x3e == 0) {
          uVar18 = *(ulong *)((uVar22 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar18 = uVar22 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar3) {
            uVar18 = uVar3;
          }
          func_0x000107c60480(uVar18);
          uVar3 = *(ulong *)(lVar19 + 0x280);
        }
        uVar12 = 0;
        FUN_102738e9c(0,uVar18 + 1,1,uVar3);
        uVar22 = uVar12;
      }
      uVar22 = uVar22 & 0xffffffffffffff8;
      uVar3 = *(ulong *)(uVar22 + 0x10);
      uVar27 = uVar12;
      if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar3) {
        uVar27 = (ulong)(1 < *(ulong *)(uVar22 + 0x18));
        FUN_102738e9c(uVar27,uVar3 + 1,1,uVar12);
        uVar22 = uVar27 & 0xffffffffffffff8;
      }
      uVar21 = *(undefined8 *)(lVar19 + 0x2e0);
      uVar26 = *(undefined8 *)(lVar19 + 0x2b0);
      uVar6 = *(undefined8 *)(lVar19 + 0x288);
      *(ulong *)(uVar22 + 0x10) = uVar3 + 1;
      *(long *)(uVar22 + uVar3 * 8 + 0x20) = lVar13;
      func_0x000107c615e8(uVar6);
      func_0x000107c61170(uVar26);
      func_0x000107c6142c(uVar21);
    }
    uVar3 = *(ulong *)(lVar19 + 0x290);
    if (uVar3 == *(ulong *)(lVar19 + 0x268)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar19 + 8))(uVar27);
        return;
      }
LAB_10274b338:
      func_0x000107c60e78();
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar6 = *(undefined8 *)(lVar19 + 0x280);
      func_0x000107c615e8(*(undefined8 *)(lVar19 + 0x288));
      func_0x000107c6142c(uVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
        func_0x000107c60e78();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar19 + 8))();
      return;
    }
    *(ulong *)(lVar19 + 0x280) = uVar27;
    uVar12 = *(ulong *)(lVar19 + 0x250);
    if ((uVar12 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar12 = *(ulong *)(uVar12 + uVar3 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar12 = uVar3;
      FUN_10274d138();
    }
    *(ulong *)(lVar19 + 0x288) = uVar12;
    *(ulong *)(lVar19 + 0x290) = uVar3 + 1;
    if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(lVar19 + 0x298) = uVar12;
    plVar4 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(lVar19 + 0x2a0) = plVar4;
    *plVar4 = lVar19;
    plVar4[1] = (long)FUN_102749c40;
    unaff_x20 = *(long **)(lVar19 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) goto LAB_10274b338;
    plVar10 = (long *)(lVar19 + 0x40);
  }
  else {
    uVar12 = unaff_x22[0x4a];
    unaff_x22[0x50] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar12 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102749c3c);
        (*pcVar2)();
      }
      uVar12 = *(ulong *)(uVar12 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar12 = 0;
      FUN_10274d138();
    }
    unaff_x22[0x51] = uVar12;
    unaff_x22[0x52] = 1;
    func_0x000107c4e090();
    func_0x000107c61180();
    unaff_x22[0x53] = uVar12;
    plVar4 = (long *)0x120;
    func_0x000107c615b8();
    unaff_x22[0x54] = (long)plVar4;
    *plVar4 = (long)unaff_x22;
    plVar4[1] = (long)FUN_102749c40;
    unaff_x20 = (long *)unaff_x22[0x4c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) goto LAB_102749c3c;
    plVar10 = unaff_x22 + 8;
  }
FUN_10274bdac:
  plVar4[0x18] = uVar12;
  plVar4[0x19] = (long)unaff_x20;
  plVar4[0x17] = (long)plVar10;
  pcVar2 = FUN_10274bdc8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102749c40; end: 102749cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102749c40(void)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  long lVar13;
  long unaff_x20;
  undefined *puVar14;
  long *plVar15;
  long *plVar16;
  undefined1 *puVar17;
  long *plVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  long *unaff_x22;
  long *plVar24;
  long *plVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  int *piVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = *unaff_x22;
  plVar24 = (long *)*unaff_x22;
  *(long *)(lVar13 + 0x2a8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x2a0));
  func_0x000107c61170(*(undefined8 *)(lVar13 + 0x298));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      pcVar2 = FUN_102749cf0;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    pcVar2 = FUN_10274b33c;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar18 = plVar24 + 8;
  if (*plVar18 == 0) {
    func_0x00010274dd58(plVar18,0x112ebbe10,&UNK_10dad4f60);
    lVar13 = 0;
  }
  else {
    plVar7 = plVar24 + 2;
    puVar19 = (ulong *)plVar24[0x4b];
    plVar24[3] = plVar24[9];
    *plVar7 = *plVar18;
    plVar24[5] = plVar24[0xb];
    plVar24[4] = plVar24[10];
    plVar24[7] = plVar24[0xd];
    plVar24[6] = plVar24[0xc];
    FUN_10274dd08(plVar7,plVar24 + 0x26);
    lVar13 = plVar24[0x26];
    func_0x0001000834e4(plVar24 + 0x27);
    FUN_10274dd08(plVar7,plVar24 + 0x2c);
    func_0x000107c61170(plVar24[0x2c]);
    uVar20 = *puVar19;
    uVar3 = uVar20;
    func_0x000107c61558();
    uVar6 = uVar20;
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
      func_0x000100fb5010(0,*(long *)(uVar20 + 0x10) + 1,1,uVar20);
    }
    uVar3 = *(ulong *)(uVar6 + 0x10);
    uVar20 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar3) {
      uVar20 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      func_0x000100fb5010(uVar20,uVar3 + 1,1,uVar6);
    }
    puVar19 = (ulong *)plVar24[0x4b];
    *(ulong *)(uVar20 + 0x10) = uVar3 + 1;
    func_0x000100fb8694(plVar24 + 0x2d,uVar20 + uVar3 * 0x28 + 0x20);
    func_0x00010274dd58(plVar7,0x112ebbe18,&UNK_10dad4f68);
    *puVar19 = uVar20;
  }
  plVar24[0x56] = lVar13;
  uVar3 = plVar24[0x51];
  func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,PTR_s_multisnap_112612448);
  if ((uVar3 & 1) == 0) {
LAB_102749e74:
    puVar33 = (undefined *)0x0;
    plVar24[0x57] = 0;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar4 = (undefined *)plVar24[0x51];
    func_0x000107c4d1e0();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) goto LAB_102749e74;
    uVar5 = 0;
    FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
    puVar33 = puVar4;
    func_0x000107c5fc54(puVar4,uVar5);
    func_0x000107c61170(puVar4);
    plVar24[0x57] = (long)puVar33;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar33 != (undefined *)0x0) {
      puVar4 = puVar33;
    }
  }
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar14 = puVar4;
    }
    func_0x000107c60480();
  }
  plVar24[0x59] = (long)puVar14;
  plVar24[0x58] = (ulong)puVar4 & 0xffffffffffffff8;
  plVar24[0x5a] = *(long *)(plVar24[0x4c] + plVar24[0x4e]);
  plVar24[0x5b] = *(long *)(plVar24[0x4c] + plVar24[0x4f]);
  plVar24[0x5c] = 0;
  func_0x000107c61434(puVar33);
  if (puVar14 != (undefined *)0x0) {
    uVar3 = 0;
    while( true ) {
      plVar24[0x5d] = uVar3;
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((undefined *)plVar24[0x57] != (undefined *)0x0) {
        puVar4 = (undefined *)plVar24[0x57];
      }
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(plVar24[0x58] + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a474);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(puVar4 + uVar3 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar3;
        func_0x000101016c54();
      }
      plVar24[0x5e] = uVar6;
      plVar24[0x5f] = uVar3 + 1;
      if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a470);
        (*pcVar2)();
      }
      func_0x000107c3eea8();
      func_0x000107c61180();
      uVar3 = uVar6;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar6);
      puVar33 = PTR_PTR_1126b25c0;
      func_0x000107c610f8();
      uVar6 = uVar3;
      func_0x000107c5ee20(uVar3,puVar4);
      plVar24[0x48] = 0;
      func_0x000107c4636c();
      plVar24[0x60] = (long)puVar33;
      func_0x000107c61170(uVar6);
      lVar13 = plVar24[0x48];
      if (puVar33 == (undefined *)0x0) {
        lVar32 = lVar13;
        func_0x000107c61174();
        func_0x000107c5ed30(lVar13);
        func_0x000107c61170(lVar32);
        func_0x000107c61654();
        func_0x000107c614ac(lVar13);
        func_0x00010006c090(uVar3,puVar4);
      }
      else {
        func_0x000107c61174();
        func_0x00010006c090(uVar3,puVar4);
        func_0x000100083b20(plVar24 + 0x32);
        lVar13 = plVar24[0x35];
        lVar32 = plVar24[0x36];
        func_0x0001000a8868(plVar24 + 0x32,lVar13);
        puVar4 = puVar33;
        (**(code **)(lVar32 + 8))(puVar33,lVar13,lVar32);
        func_0x0001000834e4(plVar24 + 0x32);
        if (((ulong)puVar4 & 1) != 0) {
          func_0x000100083b20(plVar24 + 0x37);
          pcVar2 = (code *)plVar24[0x3a];
          lVar13 = plVar24[0x3b];
          plVar7 = plVar24 + 0x37;
          UNRECOVERED_JUMPTABLE = pcVar2;
          func_0x0001000a8868();
          piVar29 = *(int **)(lVar13 + 0x18);
          iVar1 = *piVar29;
          plVar25 = (long *)(ulong)(uint)piVar29[1];
          func_0x000107c615b8();
          plVar24[0x61] = (long)plVar25;
          *plVar25 = (long)plVar24;
          plVar25[1] = (long)FUN_10274a568;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar29))(puVar33,pcVar2,lVar13);
            return;
          }
          goto LAB_10274a564;
        }
        func_0x000107c61170(puVar33);
      }
      plVar24[0x17] = 0;
      plVar24[0x16] = 0;
      plVar24[0x19] = 0;
      plVar24[0x18] = 0;
      plVar24[0x15] = 0;
      plVar24[0x14] = 0;
      lVar13 = plVar24[0x5f];
      lVar32 = plVar24[0x59];
      func_0x000107c61170(plVar24[0x5e]);
      func_0x00010274dd58(plVar24 + 0x14,0x112ebbe10,&UNK_10dad4f60);
      if (lVar13 == lVar32) break;
      uVar3 = plVar24[0x5f];
    }
  }
  lVar13 = plVar24[0x56];
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((undefined *)plVar24[0x57] != (undefined *)0x0) {
    puVar4 = (undefined *)plVar24[0x57];
  }
  func_0x000107c6142c(puVar4);
  lVar32 = plVar24[0x5c];
  if (lVar13 == 0) {
    if (lVar32 != 0) {
      lVar21 = plVar24[0x51];
      func_0x000107c4e090();
      func_0x000107c61180();
      lVar13 = 0;
      lVar32 = plVar24[0x5c];
      goto LAB_10274a0e0;
    }
    lVar13 = plVar24[0x51];
    plVar25 = (long *)plVar24[0x50];
    func_0x000107c6142c(plVar24[0x57]);
    func_0x000107c615f0(lVar13);
    plVar7 = plVar25;
    func_0x000107c61550();
    plVar16 = (long *)plVar24[0x50];
    if ((((int)plVar7 == 0) || (((ulong)plVar25 >> 0x3e & 1) != 0)) ||
       (plVar15 = plVar16, (long)plVar16 < 0)) {
      if ((ulong)plVar16 >> 0x3e == 0) {
        plVar7 = *(long **)(((ulong)plVar25 & 0xffffffffffffff8) + 0x10);
      }
      else {
        plVar7 = (long *)((ulong)plVar25 & 0xffffffffffffff8);
        if ((long *)0x7fffffffffffffff < plVar16) {
          plVar7 = plVar16;
        }
        func_0x000107c60480(plVar7);
        plVar16 = (long *)plVar24[0x50];
      }
      plVar15 = (long *)0x0;
      FUN_102738e9c(0,(long)plVar7 + 1,1,plVar16);
      plVar25 = plVar15;
    }
    uVar6 = (ulong)plVar25 & 0xffffffffffffff8;
    uVar3 = *(ulong *)(uVar6 + 0x10);
    plVar7 = plVar15;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar3) {
      plVar7 = (long *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_102738e9c(plVar7,uVar3 + 1,1,plVar15);
      uVar6 = (ulong)plVar7 & 0xffffffffffffff8;
    }
    plVar25 = (long *)plVar24[0x51];
    *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
    *(long **)(uVar6 + uVar3 * 8 + 0x20) = plVar25;
    func_0x000107c615e8();
  }
  else {
    lVar21 = plVar24[0x56];
    lVar13 = lVar21;
    if (lVar32 == 0) {
      func_0x000107c61174();
      plVar7 = plVar24 + 0x57;
    }
    else {
LAB_10274a0e0:
      plVar7 = plVar24 + 0x5c;
      lVar26 = plVar24[0x57];
      func_0x000107c61434(lVar32);
      func_0x000107c61174(lVar13);
      func_0x000107c6142c(lVar26);
    }
    lVar13 = *plVar7;
    uVar3 = plVar24[0x51];
    func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130);
    if ((uVar3 & 1) == 0) {
LAB_10274a16c:
      uVar6 = 0;
    }
    else {
      uVar3 = plVar24[0x51];
      func_0x000107c44a00();
      func_0x000107c61180();
      if (uVar3 == 0) goto LAB_10274a16c;
      uVar5 = 0;
      FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar6 = uVar3;
      func_0x000107c5fc54(uVar3,uVar5);
      func_0x000107c61170();
    }
    plVar25 = (long *)plVar24[0x50];
    FUN_10274ce90();
    uVar20 = uVar3;
    func_0x000107c610f8();
    lVar32 = _DAT_112ebbdc8;
    *(undefined8 *)(uVar20 + _DAT_112ebbdc8) = 0;
    lVar26 = _DAT_112ebbdd0;
    *(undefined8 *)(uVar20 + _DAT_112ebbdd0) = 0;
    *(long *)(uVar20 + _DAT_112ebbdc0) = lVar21;
    *(long *)(uVar20 + lVar32) = lVar13;
    *(ulong *)(uVar20 + lVar26) = uVar6;
    plVar24[0x46] = uVar20;
    plVar24[0x47] = uVar3;
    plVar16 = plVar24 + 0x46;
    func_0x000107c61154(plVar16,PTR_s_init_1125d9248);
    plVar7 = plVar25;
    func_0x000107c61550();
    plVar15 = (long *)plVar24[0x50];
    if ((((int)plVar7 == 0) || (((ulong)plVar25 >> 0x3e & 1) != 0)) ||
       (plVar8 = plVar15, (long)plVar15 < 0)) {
      if ((ulong)plVar15 >> 0x3e == 0) {
        plVar7 = *(long **)(((ulong)plVar25 & 0xffffffffffffff8) + 0x10);
      }
      else {
        plVar7 = (long *)((ulong)plVar25 & 0xffffffffffffff8);
        if ((long *)0x7fffffffffffffff < plVar15) {
          plVar7 = plVar15;
        }
        func_0x000107c60480(plVar7);
        plVar15 = (long *)plVar24[0x50];
      }
      plVar8 = (long *)0x0;
      FUN_102738e9c(0,(long)plVar7 + 1,1,plVar15);
      plVar25 = plVar8;
    }
    uVar6 = (ulong)plVar25 & 0xffffffffffffff8;
    uVar3 = *(ulong *)(uVar6 + 0x10);
    plVar7 = plVar8;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar3) {
      plVar7 = (long *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_102738e9c(plVar7,uVar3 + 1,1,plVar8);
      uVar6 = (ulong)plVar7 & 0xffffffffffffff8;
    }
    plVar25 = (long *)plVar24[0x5c];
    lVar32 = plVar24[0x56];
    lVar13 = plVar24[0x51];
    *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
    *(long **)(uVar6 + uVar3 * 8 + 0x20) = plVar16;
    func_0x000107c615e8(lVar13);
    func_0x000107c61170(lVar32);
    func_0x000107c6142c();
  }
  uVar3 = plVar24[0x52];
  if (uVar3 == plVar24[0x4d]) {
    UNRECOVERED_JUMPTABLE = (code *)plVar24[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar7);
      return;
    }
LAB_10274a564:
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = *plVar24;
    plVar24 = (long *)*plVar24;
    *(long **)(lVar13 + 0x310) = plVar25;
    *(long **)(lVar13 + 0x318) = plVar7;
    func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x308));
    if (plVar7 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_10274a610;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      pcVar2 = FUN_10274a82c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar17 = (undefined1 *)plVar24[0x62];
    func_0x0001000834e4(plVar24 + 0x37);
    func_0x000107c5b198();
    func_0x000107c61180();
    plVar24[100] = (long)puVar17;
    puVar9 = puVar17;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar9 == (undefined1 *)0x0) {
      lVar13 = plVar24[0x62];
      lVar32 = plVar24[0x60];
      lVar21 = plVar24[0x57];
      FUN_10274dbb4();
      func_0x000107c613f8(&UNK_110543998,puVar9,0,0);
      *puVar9 = 1;
      func_0x000107c61654();
      func_0x000107c6142c(lVar21);
      func_0x000107c61170(puVar17);
      func_0x000107c615e8(lVar13);
      func_0x000107c61170(lVar32);
      lVar13 = plVar24[0x5c];
      puVar33 = (undefined *)plVar24[0x57];
      lVar32 = plVar24[0x56];
      lVar21 = plVar24[0x51];
      lVar26 = plVar24[0x50];
      func_0x000107c61170(plVar24[0x5e]);
      func_0x000107c615e8(lVar21);
      func_0x000107c6142c(lVar26);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar33 != (undefined *)0x0) {
        puVar4 = puVar33;
      }
      func_0x000107c6142c(puVar4);
      func_0x000107c61170(lVar32);
      func_0x000107c6142c(lVar13);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar24[1])();
        return;
      }
    }
    else {
      puVar10 = puVar9;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar9);
      plVar24[0x65] = (long)puVar10;
      plVar24[0x66] = (long)UNRECOVERED_JUMPTABLE;
      func_0x000100083b20(plVar24 + 0x41);
      lVar13 = plVar24[0x44];
      lVar32 = plVar24[0x45];
      func_0x0001000a8868(plVar24 + 0x41,lVar13);
      piVar29 = *(int **)(lVar32 + 0x20);
      iVar1 = *piVar29;
      puVar11 = (undefined8 *)(ulong)(uint)piVar29[1];
      func_0x000107c615b8();
      plVar24[0x67] = (long)puVar11;
      *puVar11 = plVar24;
      puVar11[1] = FUN_10274a908;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar29))
                  (puVar11,plVar24 + 0x3c,puVar17,"processedSnapDoc(from:)",0x17,0x9000000000000002,
                   0x10d,plVar24 + 0x49,lVar13);
        return;
      }
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = plVar24[0x57];
    func_0x000107c61170(plVar24[0x60]);
    func_0x000107c6142c(lVar13);
    func_0x0001000834e4(plVar24 + 0x37);
    lVar32 = plVar24[99];
    lVar13 = plVar24[0x5c];
    puVar33 = (undefined *)plVar24[0x57];
    lVar21 = plVar24[0x56];
    lVar26 = plVar24[0x51];
    lVar30 = plVar24[0x50];
    func_0x000107c61170(plVar24[0x5e]);
    func_0x000107c615e8(lVar26);
    func_0x000107c6142c(lVar30);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar33 != (undefined *)0x0) {
      puVar4 = puVar33;
    }
    func_0x000107c6142c(puVar4);
    func_0x000107c61170(lVar21);
    func_0x000107c6142c(lVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar24[1])();
      return;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = *plVar24;
    puVar11 = *(undefined8 **)(lVar13 + 0x338);
    lVar21 = *plVar24;
    func_0x000107c615c0();
    if (lVar32 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_10274aaec;
        goto LAB_107c615e0;
      }
    }
    else {
      *(undefined8 *)(lVar13 + 0x340) = *(undefined8 *)(lVar13 + 0x248);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_10274a9b4;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar36 = *(undefined8 *)(lVar21 + 0x340);
    uVar5 = *(undefined8 *)(lVar21 + 0x330);
    uVar22 = *(undefined8 *)(lVar21 + 0x328);
    uVar27 = *(undefined8 *)(lVar21 + 800);
    uVar31 = *(undefined8 *)(lVar21 + 0x310);
    uVar34 = *(undefined8 *)(lVar21 + 0x300);
    uVar35 = *(undefined8 *)(lVar21 + 0x2b8);
    func_0x000100fb85f0();
    func_0x000107c613f8(&UNK_11072cd20,puVar11,0,0);
    *puVar11 = uVar36;
    func_0x000107c6142c(uVar35);
    func_0x00010006c090(uVar22,uVar5);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar27);
    func_0x000107c615e8(uVar31);
    func_0x0001000834e4(lVar21 + 0x208);
    uVar5 = *(undefined8 *)(lVar21 + 0x2e0);
    puVar33 = *(undefined **)(lVar21 + 0x2b8);
    uVar22 = *(undefined8 *)(lVar21 + 0x2b0);
    uVar27 = *(undefined8 *)(lVar21 + 0x288);
    uVar31 = *(undefined8 *)(lVar21 + 0x280);
    func_0x000107c61170(*(undefined8 *)(lVar21 + 0x2f0));
    func_0x000107c615e8(uVar27);
    func_0x000107c6142c(uVar31);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar33 != (undefined *)0x0) {
      puVar4 = puVar33;
    }
    func_0x000107c6142c(puVar4);
    func_0x000107c61170(uVar22);
    func_0x000107c6142c(uVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar21 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar27 = *(undefined8 *)(lVar21 + 0x330);
    uVar22 = *(undefined8 *)(lVar21 + 0x328);
    uVar31 = *(undefined8 *)(lVar21 + 800);
    uVar34 = *(undefined8 *)(lVar21 + 0x310);
    uVar35 = *(undefined8 *)(lVar21 + 0x300);
    func_0x0001000834e4(lVar21 + 0x208);
    puVar4 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    uVar5 = uVar22;
    func_0x000107c5ee20(uVar22,uVar27);
    func_0x000107c45ae0();
    func_0x000107c61170(uVar5);
    func_0x00010006c090(uVar22,uVar27);
    func_0x000107c61170(uVar35);
    func_0x000107c61170(uVar31);
    func_0x000107c615e8(uVar34);
    plVar24 = (long *)(lVar21 + 0xa0);
    *plVar24 = (long)puVar4;
    func_0x000100fb8694(lVar21 + 0x1e0,lVar21 + 0xa8);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*plVar24 == 0) goto LAB_10274b260;
    plVar18 = (long *)(lVar21 + 0x70);
    uVar3 = *(ulong *)(lVar21 + 0x2e0);
    *(undefined8 *)(lVar21 + 0x78) = *(undefined8 *)(lVar21 + 0xa8);
    *plVar18 = *plVar24;
    *(undefined8 *)(lVar21 + 0x88) = *(undefined8 *)(lVar21 + 0xb8);
    *(undefined8 *)(lVar21 + 0x80) = *(undefined8 *)(lVar21 + 0xb0);
    *(undefined8 *)(lVar21 + 0x98) = *(undefined8 *)(lVar21 + 200);
    *(undefined8 *)(lVar21 + 0x90) = *(undefined8 *)(lVar21 + 0xc0);
    if (uVar3 == 0) {
      uVar3 = *(ulong *)(lVar21 + 0x2b8);
      if (uVar3 != 0) {
        func_0x000107c61434(uVar3);
        goto LAB_10274abe8;
      }
    }
    else {
LAB_10274abe8:
      FUN_10274dd08(plVar18,lVar21 + 0xd0);
      uVar5 = *(undefined8 *)(lVar21 + 0xd0);
      uVar6 = uVar3;
      func_0x000107c61550();
      if ((uVar3 >> 0x3e != 0) || ((uVar6 & 1) == 0)) {
        FUN_10274d478();
      }
      if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(lVar21 + 0x2e8)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
        (*pcVar2)();
      }
      lVar13 = (uVar3 & 0xffffffffffffff8) + *(ulong *)(lVar21 + 0x2e8) * 8;
      uVar22 = *(undefined8 *)(lVar13 + 0x20);
      *(undefined8 *)(lVar13 + 0x20) = uVar5;
      func_0x000107c61170(uVar22);
      func_0x0001000834e4(lVar21 + 0xd8);
    }
    puVar19 = *(ulong **)(lVar21 + 600);
    FUN_10274dd08(plVar18,lVar21 + 0x100);
    func_0x000107c61170(*(undefined8 *)(lVar21 + 0x100));
    uVar28 = *puVar19;
    uVar6 = uVar28;
    func_0x000107c61558();
    uVar20 = uVar28;
    if ((uVar6 & 1) == 0) {
      uVar20 = 0;
      func_0x000100fb5010(0,*(long *)(uVar28 + 0x10) + 1,1,uVar28);
    }
    uVar6 = *(ulong *)(uVar20 + 0x10);
    uVar28 = uVar20;
    if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar6) {
      uVar28 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
      func_0x000100fb5010(uVar28,uVar6 + 1,1,uVar20);
    }
    uVar5 = *(undefined8 *)(lVar21 + 0x2f0);
    puVar19 = *(ulong **)(lVar21 + 600);
    *(ulong *)(uVar28 + 0x10) = uVar6 + 1;
    func_0x000100fb8694(lVar21 + 0x108,uVar28 + uVar6 * 0x28 + 0x20);
    func_0x000107c61170(uVar5);
    func_0x00010274dd58(plVar18,0x112ebbe18,&UNK_10dad4f68);
    *puVar19 = uVar28;
    uVar6 = *(ulong *)(lVar21 + 0x2f8);
    *(ulong *)(lVar21 + 0x2e0) = uVar3;
    if (uVar6 != *(ulong *)(lVar21 + 0x2c8)) {
      while( true ) {
        *(ulong *)(lVar21 + 0x2e8) = uVar6;
        puVar33 = puVar4;
        if (*(undefined **)(lVar21 + 0x2b8) != (undefined *)0x0) {
          puVar33 = *(undefined **)(lVar21 + 0x2b8);
        }
        if (((ulong)puVar33 & 0xc000000000000001) == 0) {
          if (*(ulong *)(*(long *)(lVar21 + 0x2c0) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(puVar33 + uVar6 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar6;
          func_0x000101016c54();
        }
        *(ulong *)(lVar21 + 0x2f0) = uVar3;
        *(ulong *)(lVar21 + 0x2f8) = uVar6 + 1;
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
          (*pcVar2)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar6 = uVar3;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar3);
        puVar14 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar3 = uVar6;
        func_0x000107c5ee20(uVar6,puVar33);
        *(undefined8 *)(lVar21 + 0x240) = 0;
        func_0x000107c4636c();
        *(undefined **)(lVar21 + 0x300) = puVar14;
        func_0x000107c61170(uVar3);
        uVar5 = *(undefined8 *)(lVar21 + 0x240);
        if (puVar14 == (undefined *)0x0) {
          uVar22 = uVar5;
          func_0x000107c61174();
          func_0x000107c5ed30(uVar5);
          func_0x000107c61170(uVar22);
          func_0x000107c61654();
          func_0x000107c614ac(uVar5);
          func_0x00010006c090(uVar6,puVar33);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar6,puVar33);
          func_0x000100083b20(lVar21 + 400);
          uVar5 = *(undefined8 *)(lVar21 + 0x1a8);
          lVar13 = *(long *)(lVar21 + 0x1b0);
          func_0x0001000a8868(lVar21 + 400,uVar5);
          puVar33 = puVar14;
          (**(code **)(lVar13 + 8))(puVar14,uVar5,lVar13);
          func_0x0001000834e4(lVar21 + 400);
          if (((ulong)puVar33 & 1) != 0) {
            func_0x000100083b20(lVar21 + 0x1b8);
            uVar5 = *(undefined8 *)(lVar21 + 0x1d0);
            lVar13 = *(long *)(lVar21 + 0x1d8);
            func_0x0001000a8868(lVar21 + 0x1b8,uVar5);
            piVar29 = *(int **)(lVar13 + 0x18);
            iVar1 = *piVar29;
            plVar24 = (long *)(ulong)(uint)piVar29[1];
            func_0x000107c615b8();
            *(long **)(lVar21 + 0x308) = plVar24;
            *plVar24 = lVar21;
            plVar24[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar29))(puVar14,uVar5,lVar13);
              return;
            }
            goto LAB_10274b338;
          }
          func_0x000107c61170(puVar14);
        }
        *(undefined8 *)(lVar21 + 0xb8) = 0;
        *(undefined8 *)(lVar21 + 0xb0) = 0;
        *(undefined8 *)(lVar21 + 200) = 0;
        *(undefined8 *)(lVar21 + 0xc0) = 0;
        *(undefined8 *)(lVar21 + 0xa8) = 0;
        *plVar24 = 0;
LAB_10274b260:
        lVar13 = *(long *)(lVar21 + 0x2f8);
        lVar32 = *(long *)(lVar21 + 0x2c8);
        func_0x000107c61170(*(undefined8 *)(lVar21 + 0x2f0));
        func_0x00010274dd58(plVar24,0x112ebbe10,&UNK_10dad4f60);
        if (lVar13 == lVar32) break;
        uVar6 = *(ulong *)(lVar21 + 0x2f8);
      }
    }
    lVar13 = *(long *)(lVar21 + 0x2b0);
    if (*(undefined **)(lVar21 + 0x2b8) != (undefined *)0x0) {
      puVar4 = *(undefined **)(lVar21 + 0x2b8);
    }
    func_0x000107c6142c(puVar4);
    lVar32 = *(long *)(lVar21 + 0x2e0);
    if (lVar13 == 0) {
      if (lVar32 != 0) {
        uVar22 = *(undefined8 *)(lVar21 + 0x288);
        func_0x000107c4e090();
        func_0x000107c61180();
        uVar5 = 0;
        lVar32 = *(long *)(lVar21 + 0x2e0);
        goto LAB_10274ad78;
      }
      uVar5 = *(undefined8 *)(lVar21 + 0x288);
      uVar20 = *(ulong *)(lVar21 + 0x280);
      func_0x000107c6142c(*(undefined8 *)(lVar21 + 0x2b8));
      func_0x000107c615f0(uVar5);
      uVar3 = uVar20;
      func_0x000107c61550();
      uVar6 = *(ulong *)(lVar21 + 0x280);
      if ((((int)uVar3 == 0) || ((uVar20 >> 0x3e & 1) != 0)) || ((long)uVar6 < 0)) {
        if (uVar6 >> 0x3e == 0) {
          uVar3 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar3 = uVar20 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar3 = uVar6;
          }
          func_0x000107c60480(uVar3);
          uVar6 = *(ulong *)(lVar21 + 0x280);
        }
        uVar20 = 0;
        FUN_102738e9c(0,uVar3 + 1,1,uVar6);
        uVar6 = uVar20;
      }
      uVar20 = uVar20 & 0xffffffffffffff8;
      uVar3 = *(ulong *)(uVar20 + 0x10);
      uVar28 = uVar6;
      if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar3) {
        uVar28 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
        FUN_102738e9c(uVar28,uVar3 + 1,1,uVar6);
        uVar20 = uVar28 & 0xffffffffffffff8;
      }
      uVar5 = *(undefined8 *)(lVar21 + 0x288);
      *(ulong *)(uVar20 + 0x10) = uVar3 + 1;
      *(undefined8 *)(uVar20 + uVar3 * 8 + 0x20) = uVar5;
      func_0x000107c615e8();
    }
    else {
      uVar22 = *(undefined8 *)(lVar21 + 0x2b0);
      uVar5 = uVar22;
      if (lVar32 == 0) {
        func_0x000107c61174();
        puVar11 = (undefined8 *)(lVar21 + 0x2b8);
      }
      else {
LAB_10274ad78:
        puVar11 = (undefined8 *)(lVar21 + 0x2e0);
        uVar27 = *(undefined8 *)(lVar21 + 0x2b8);
        func_0x000107c61434(lVar32);
        func_0x000107c61174(uVar5);
        func_0x000107c6142c(uVar27);
      }
      uVar5 = *puVar11;
      uVar3 = *(ulong *)(lVar21 + 0x288);
      func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130)
      ;
      if ((uVar3 & 1) == 0) {
LAB_10274ae04:
        uVar6 = 0;
      }
      else {
        uVar3 = *(ulong *)(lVar21 + 0x288);
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar3 == 0) goto LAB_10274ae04;
        uVar27 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar6 = uVar3;
        func_0x000107c5fc54(uVar3,uVar27);
        func_0x000107c61170();
      }
      uVar23 = *(ulong *)(lVar21 + 0x280);
      FUN_10274ce90();
      uVar20 = uVar3;
      func_0x000107c610f8();
      lVar13 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar20 + _DAT_112ebbdc8) = 0;
      lVar32 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar20 + _DAT_112ebbdd0) = 0;
      *(undefined8 *)(uVar20 + _DAT_112ebbdc0) = uVar22;
      *(undefined8 *)(uVar20 + lVar13) = uVar5;
      *(ulong *)(uVar20 + lVar32) = uVar6;
      *(ulong *)(lVar21 + 0x230) = uVar20;
      *(ulong *)(lVar21 + 0x238) = uVar3;
      lVar13 = lVar21 + 0x230;
      func_0x000107c61154(lVar13,PTR_s_init_1125d9248);
      uVar3 = uVar23;
      func_0x000107c61550();
      uVar6 = *(ulong *)(lVar21 + 0x280);
      if ((((int)uVar3 == 0) || ((uVar23 >> 0x3e & 1) != 0)) || (uVar3 = uVar6, (long)uVar6 < 0)) {
        if (uVar6 >> 0x3e == 0) {
          uVar20 = *(ulong *)((uVar23 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar20 = uVar23 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar20 = uVar6;
          }
          func_0x000107c60480(uVar20);
          uVar6 = *(ulong *)(lVar21 + 0x280);
        }
        uVar3 = 0;
        FUN_102738e9c(0,uVar20 + 1,1,uVar6);
        uVar23 = uVar3;
      }
      uVar23 = uVar23 & 0xffffffffffffff8;
      uVar6 = *(ulong *)(uVar23 + 0x10);
      uVar28 = uVar3;
      if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar6) {
        uVar28 = (ulong)(1 < *(ulong *)(uVar23 + 0x18));
        FUN_102738e9c(uVar28,uVar6 + 1,1,uVar3);
        uVar23 = uVar28 & 0xffffffffffffff8;
      }
      uVar22 = *(undefined8 *)(lVar21 + 0x2e0);
      uVar27 = *(undefined8 *)(lVar21 + 0x2b0);
      uVar5 = *(undefined8 *)(lVar21 + 0x288);
      *(ulong *)(uVar23 + 0x10) = uVar6 + 1;
      *(long *)(uVar23 + uVar6 * 8 + 0x20) = lVar13;
      func_0x000107c615e8(uVar5);
      func_0x000107c61170(uVar27);
      func_0x000107c6142c(uVar22);
    }
    uVar3 = *(ulong *)(lVar21 + 0x290);
    if (uVar3 == *(ulong *)(lVar21 + 0x268)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar21 + 8))(uVar28);
        return;
      }
LAB_10274b338:
      func_0x000107c60e78();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar5 = *(undefined8 *)(lVar21 + 0x280);
      func_0x000107c615e8(*(undefined8 *)(lVar21 + 0x288));
      func_0x000107c6142c(uVar5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        func_0x000107c60e78();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar21 + 8))();
      return;
    }
    *(ulong *)(lVar21 + 0x280) = uVar28;
    uVar6 = *(ulong *)(lVar21 + 0x250);
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(uVar6 + uVar3 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar6 = uVar3;
      FUN_10274d138();
    }
    *(ulong *)(lVar21 + 0x288) = uVar6;
    *(ulong *)(lVar21 + 0x290) = uVar3 + 1;
    if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(lVar21 + 0x298) = uVar6;
    plVar25 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(lVar21 + 0x2a0) = plVar25;
    *plVar25 = lVar21;
    plVar25[1] = (long)FUN_102749c40;
    plVar7 = *(long **)(lVar21 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) goto LAB_10274b338;
    plVar18 = (long *)(lVar21 + 0x40);
  }
  else {
    plVar24[0x50] = (long)plVar7;
    UNRECOVERED_JUMPTABLE = (code *)plVar24[0x4a];
    if (((ulong)UNRECOVERED_JUMPTABLE & 0xc000000000000001) == 0) {
      if (*(ulong *)(((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a510);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(UNRECOVERED_JUMPTABLE + uVar3 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar6 = uVar3;
      FUN_10274d138();
    }
    plVar24[0x51] = uVar6;
    plVar24[0x52] = uVar3 + 1;
    if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a50c);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    plVar24[0x53] = uVar6;
    plVar25 = (long *)0x120;
    func_0x000107c615b8();
    plVar24[0x54] = (long)plVar25;
    *plVar25 = (long)plVar24;
    plVar25[1] = (long)FUN_102749c40;
    plVar7 = (long *)plVar24[0x4c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) goto LAB_10274a564;
  }
  plVar25[0x18] = uVar6;
  plVar25[0x19] = (long)plVar7;
  plVar25[0x17] = (long)plVar18;
  pcVar2 = FUN_10274bdc8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102749cf0; end: 10274a567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102749cf0(void)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  undefined1 *puVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  long *unaff_x22;
  long *plVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  int *piVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar22 = unaff_x22 + 8;
  if (*plVar22 == 0) {
    func_0x00010274dd58(plVar22,0x112ebbe10,&UNK_10dad4f60);
    lVar27 = 0;
  }
  else {
    plVar7 = unaff_x22 + 2;
    puVar17 = (ulong *)unaff_x22[0x4b];
    unaff_x22[3] = unaff_x22[9];
    *plVar7 = *plVar22;
    unaff_x22[5] = unaff_x22[0xb];
    unaff_x22[4] = unaff_x22[10];
    unaff_x22[7] = unaff_x22[0xd];
    unaff_x22[6] = unaff_x22[0xc];
    FUN_10274dd08(plVar7,unaff_x22 + 0x26);
    lVar27 = unaff_x22[0x26];
    func_0x0001000834e4(unaff_x22 + 0x27);
    FUN_10274dd08(plVar7,unaff_x22 + 0x2c);
    func_0x000107c61170(unaff_x22[0x2c]);
    uVar18 = *puVar17;
    uVar3 = uVar18;
    func_0x000107c61558();
    uVar6 = uVar18;
    if ((uVar3 & 1) == 0) {
      uVar6 = 0;
      func_0x000100fb5010(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18);
    }
    uVar3 = *(ulong *)(uVar6 + 0x10);
    uVar18 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar3) {
      uVar18 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      func_0x000100fb5010(uVar18,uVar3 + 1,1,uVar6);
    }
    puVar17 = (ulong *)unaff_x22[0x4b];
    *(ulong *)(uVar18 + 0x10) = uVar3 + 1;
    func_0x000100fb8694(unaff_x22 + 0x2d,uVar18 + uVar3 * 0x28 + 0x20);
    func_0x00010274dd58(plVar7,0x112ebbe18,&UNK_10dad4f68);
    *puVar17 = uVar18;
  }
  unaff_x22[0x56] = lVar27;
  uVar3 = unaff_x22[0x51];
  func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,PTR_s_multisnap_112612448);
  if ((uVar3 & 1) == 0) {
LAB_102749e74:
    puVar32 = (undefined *)0x0;
    unaff_x22[0x57] = 0;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar4 = (undefined *)unaff_x22[0x51];
    func_0x000107c4d1e0();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) goto LAB_102749e74;
    uVar5 = 0;
    FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
    puVar32 = puVar4;
    func_0x000107c5fc54(puVar4,uVar5);
    func_0x000107c61170(puVar4);
    unaff_x22[0x57] = (long)puVar32;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar32 != (undefined *)0x0) {
      puVar4 = puVar32;
    }
  }
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar13 = puVar4;
    }
    func_0x000107c60480();
  }
  unaff_x22[0x59] = (long)puVar13;
  unaff_x22[0x58] = (ulong)puVar4 & 0xffffffffffffff8;
  unaff_x22[0x5a] = *(long *)(unaff_x22[0x4c] + unaff_x22[0x4e]);
  unaff_x22[0x5b] = *(long *)(unaff_x22[0x4c] + unaff_x22[0x4f]);
  unaff_x22[0x5c] = 0;
  func_0x000107c61434(puVar32);
  if (puVar13 != (undefined *)0x0) {
    uVar3 = 0;
    while( true ) {
      unaff_x22[0x5d] = uVar3;
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((undefined *)unaff_x22[0x57] != (undefined *)0x0) {
        puVar4 = (undefined *)unaff_x22[0x57];
      }
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(unaff_x22[0x58] + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a474);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(puVar4 + uVar3 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar3;
        func_0x000101016c54();
      }
      unaff_x22[0x5e] = uVar6;
      unaff_x22[0x5f] = uVar3 + 1;
      if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a470);
        (*pcVar2)();
      }
      func_0x000107c3eea8();
      func_0x000107c61180();
      uVar3 = uVar6;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar6);
      puVar32 = PTR_PTR_1126b25c0;
      func_0x000107c610f8();
      uVar6 = uVar3;
      func_0x000107c5ee20(uVar3,puVar4);
      unaff_x22[0x48] = 0;
      func_0x000107c4636c();
      unaff_x22[0x60] = (long)puVar32;
      func_0x000107c61170(uVar6);
      lVar27 = unaff_x22[0x48];
      if (puVar32 == (undefined *)0x0) {
        lVar31 = lVar27;
        func_0x000107c61174();
        func_0x000107c5ed30(lVar27);
        func_0x000107c61170(lVar31);
        func_0x000107c61654();
        func_0x000107c614ac(lVar27);
        func_0x00010006c090(uVar3,puVar4);
      }
      else {
        func_0x000107c61174();
        func_0x00010006c090(uVar3,puVar4);
        func_0x000100083b20(unaff_x22 + 0x32);
        lVar27 = unaff_x22[0x35];
        lVar31 = unaff_x22[0x36];
        func_0x0001000a8868(unaff_x22 + 0x32,lVar27);
        puVar4 = puVar32;
        (**(code **)(lVar31 + 8))(puVar32,lVar27,lVar31);
        func_0x0001000834e4(unaff_x22 + 0x32);
        if (((ulong)puVar4 & 1) != 0) {
          func_0x000100083b20(unaff_x22 + 0x37);
          pcVar2 = (code *)unaff_x22[0x3a];
          lVar27 = unaff_x22[0x3b];
          plVar7 = unaff_x22 + 0x37;
          UNRECOVERED_JUMPTABLE = pcVar2;
          func_0x0001000a8868();
          piVar28 = *(int **)(lVar27 + 0x18);
          iVar1 = *piVar28;
          plVar23 = (long *)(ulong)(uint)piVar28[1];
          func_0x000107c615b8();
          unaff_x22[0x61] = (long)plVar23;
          *plVar23 = (long)unaff_x22;
          plVar23[1] = (long)FUN_10274a568;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar28))(puVar32,pcVar2,lVar27);
            return;
          }
          goto LAB_10274a564;
        }
        func_0x000107c61170(puVar32);
      }
      unaff_x22[0x17] = 0;
      unaff_x22[0x16] = 0;
      unaff_x22[0x19] = 0;
      unaff_x22[0x18] = 0;
      unaff_x22[0x15] = 0;
      unaff_x22[0x14] = 0;
      lVar27 = unaff_x22[0x5f];
      lVar31 = unaff_x22[0x59];
      func_0x000107c61170(unaff_x22[0x5e]);
      func_0x00010274dd58(unaff_x22 + 0x14,0x112ebbe10,&UNK_10dad4f60);
      if (lVar27 == lVar31) break;
      uVar3 = unaff_x22[0x5f];
    }
  }
  lVar27 = unaff_x22[0x56];
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((undefined *)unaff_x22[0x57] != (undefined *)0x0) {
    puVar4 = (undefined *)unaff_x22[0x57];
  }
  func_0x000107c6142c(puVar4);
  lVar31 = unaff_x22[0x5c];
  if (lVar27 == 0) {
    if (lVar31 != 0) {
      lVar19 = unaff_x22[0x51];
      func_0x000107c4e090();
      func_0x000107c61180();
      lVar27 = 0;
      lVar31 = unaff_x22[0x5c];
      goto LAB_10274a0e0;
    }
    lVar27 = unaff_x22[0x51];
    plVar23 = (long *)unaff_x22[0x50];
    func_0x000107c6142c(unaff_x22[0x57]);
    func_0x000107c615f0(lVar27);
    plVar7 = plVar23;
    func_0x000107c61550();
    plVar15 = (long *)unaff_x22[0x50];
    if ((((int)plVar7 == 0) || (((ulong)plVar23 >> 0x3e & 1) != 0)) ||
       (plVar14 = plVar15, (long)plVar15 < 0)) {
      if ((ulong)plVar15 >> 0x3e == 0) {
        plVar7 = *(long **)(((ulong)plVar23 & 0xffffffffffffff8) + 0x10);
      }
      else {
        plVar7 = (long *)((ulong)plVar23 & 0xffffffffffffff8);
        if ((long *)0x7fffffffffffffff < plVar15) {
          plVar7 = plVar15;
        }
        func_0x000107c60480(plVar7);
        plVar15 = (long *)unaff_x22[0x50];
      }
      plVar14 = (long *)0x0;
      FUN_102738e9c(0,(long)plVar7 + 1,1,plVar15);
      plVar23 = plVar14;
    }
    uVar6 = (ulong)plVar23 & 0xffffffffffffff8;
    uVar3 = *(ulong *)(uVar6 + 0x10);
    plVar7 = plVar14;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar3) {
      plVar7 = (long *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_102738e9c(plVar7,uVar3 + 1,1,plVar14);
      uVar6 = (ulong)plVar7 & 0xffffffffffffff8;
    }
    plVar23 = (long *)unaff_x22[0x51];
    *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
    *(long **)(uVar6 + uVar3 * 8 + 0x20) = plVar23;
    func_0x000107c615e8();
  }
  else {
    lVar19 = unaff_x22[0x56];
    lVar27 = lVar19;
    if (lVar31 == 0) {
      func_0x000107c61174();
      plVar7 = unaff_x22 + 0x57;
    }
    else {
LAB_10274a0e0:
      plVar7 = unaff_x22 + 0x5c;
      lVar24 = unaff_x22[0x57];
      func_0x000107c61434(lVar31);
      func_0x000107c61174(lVar27);
      func_0x000107c6142c(lVar24);
    }
    lVar27 = *plVar7;
    uVar3 = unaff_x22[0x51];
    func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130);
    if ((uVar3 & 1) == 0) {
LAB_10274a16c:
      uVar6 = 0;
    }
    else {
      uVar3 = unaff_x22[0x51];
      func_0x000107c44a00();
      func_0x000107c61180();
      if (uVar3 == 0) goto LAB_10274a16c;
      uVar5 = 0;
      FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar6 = uVar3;
      func_0x000107c5fc54(uVar3,uVar5);
      func_0x000107c61170();
    }
    plVar23 = (long *)unaff_x22[0x50];
    FUN_10274ce90();
    uVar18 = uVar3;
    func_0x000107c610f8();
    lVar31 = _DAT_112ebbdc8;
    *(undefined8 *)(uVar18 + _DAT_112ebbdc8) = 0;
    lVar24 = _DAT_112ebbdd0;
    *(undefined8 *)(uVar18 + _DAT_112ebbdd0) = 0;
    *(long *)(uVar18 + _DAT_112ebbdc0) = lVar19;
    *(long *)(uVar18 + lVar31) = lVar27;
    *(ulong *)(uVar18 + lVar24) = uVar6;
    unaff_x22[0x46] = uVar18;
    unaff_x22[0x47] = uVar3;
    plVar15 = unaff_x22 + 0x46;
    func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
    plVar7 = plVar23;
    func_0x000107c61550();
    plVar14 = (long *)unaff_x22[0x50];
    if ((((int)plVar7 == 0) || (((ulong)plVar23 >> 0x3e & 1) != 0)) ||
       (plVar8 = plVar14, (long)plVar14 < 0)) {
      if ((ulong)plVar14 >> 0x3e == 0) {
        plVar7 = *(long **)(((ulong)plVar23 & 0xffffffffffffff8) + 0x10);
      }
      else {
        plVar7 = (long *)((ulong)plVar23 & 0xffffffffffffff8);
        if ((long *)0x7fffffffffffffff < plVar14) {
          plVar7 = plVar14;
        }
        func_0x000107c60480(plVar7);
        plVar14 = (long *)unaff_x22[0x50];
      }
      plVar8 = (long *)0x0;
      FUN_102738e9c(0,(long)plVar7 + 1,1,plVar14);
      plVar23 = plVar8;
    }
    uVar6 = (ulong)plVar23 & 0xffffffffffffff8;
    uVar3 = *(ulong *)(uVar6 + 0x10);
    plVar7 = plVar8;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar3) {
      plVar7 = (long *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_102738e9c(plVar7,uVar3 + 1,1,plVar8);
      uVar6 = (ulong)plVar7 & 0xffffffffffffff8;
    }
    plVar23 = (long *)unaff_x22[0x5c];
    lVar31 = unaff_x22[0x56];
    lVar27 = unaff_x22[0x51];
    *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
    *(long **)(uVar6 + uVar3 * 8 + 0x20) = plVar15;
    func_0x000107c615e8(lVar27);
    func_0x000107c61170(lVar31);
    func_0x000107c6142c();
  }
  uVar3 = unaff_x22[0x52];
  if (uVar3 == unaff_x22[0x4d]) {
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar7);
      return;
    }
LAB_10274a564:
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar27 = *unaff_x22;
    plVar22 = (long *)*unaff_x22;
    *(long **)(lVar27 + 0x310) = plVar23;
    *(long **)(lVar27 + 0x318) = plVar7;
    func_0x000107c615c0(*(undefined8 *)(lVar27 + 0x308));
    if (plVar7 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_10274a610;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      pcVar2 = FUN_10274a82c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar16 = (undefined1 *)plVar22[0x62];
    func_0x0001000834e4(plVar22 + 0x37);
    func_0x000107c5b198();
    func_0x000107c61180();
    plVar22[100] = (long)puVar16;
    puVar9 = puVar16;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar9 == (undefined1 *)0x0) {
      lVar27 = plVar22[0x62];
      lVar31 = plVar22[0x60];
      lVar19 = plVar22[0x57];
      FUN_10274dbb4();
      func_0x000107c613f8(&UNK_110543998,puVar9,0,0);
      *puVar9 = 1;
      func_0x000107c61654();
      func_0x000107c6142c(lVar19);
      func_0x000107c61170(puVar16);
      func_0x000107c615e8(lVar27);
      func_0x000107c61170(lVar31);
      lVar27 = plVar22[0x5c];
      puVar32 = (undefined *)plVar22[0x57];
      lVar31 = plVar22[0x56];
      lVar19 = plVar22[0x51];
      lVar24 = plVar22[0x50];
      func_0x000107c61170(plVar22[0x5e]);
      func_0x000107c615e8(lVar19);
      func_0x000107c6142c(lVar24);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar32 != (undefined *)0x0) {
        puVar4 = puVar32;
      }
      func_0x000107c6142c(puVar4);
      func_0x000107c61170(lVar31);
      func_0x000107c6142c(lVar27);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar22[1])();
        return;
      }
    }
    else {
      puVar10 = puVar9;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar9);
      plVar22[0x65] = (long)puVar10;
      plVar22[0x66] = (long)UNRECOVERED_JUMPTABLE;
      func_0x000100083b20(plVar22 + 0x41);
      lVar27 = plVar22[0x44];
      lVar31 = plVar22[0x45];
      func_0x0001000a8868(plVar22 + 0x41,lVar27);
      piVar28 = *(int **)(lVar31 + 0x20);
      iVar1 = *piVar28;
      puVar11 = (undefined8 *)(ulong)(uint)piVar28[1];
      func_0x000107c615b8();
      plVar22[0x67] = (long)puVar11;
      *puVar11 = plVar22;
      puVar11[1] = FUN_10274a908;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar28))
                  (puVar11,plVar22 + 0x3c,puVar16,"processedSnapDoc(from:)",0x17,0x9000000000000002,
                   0x10d,plVar22 + 0x49,lVar27);
        return;
      }
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar27 = plVar22[0x57];
    func_0x000107c61170(plVar22[0x60]);
    func_0x000107c6142c(lVar27);
    func_0x0001000834e4(plVar22 + 0x37);
    lVar31 = plVar22[99];
    lVar27 = plVar22[0x5c];
    puVar32 = (undefined *)plVar22[0x57];
    lVar19 = plVar22[0x56];
    lVar24 = plVar22[0x51];
    lVar29 = plVar22[0x50];
    func_0x000107c61170(plVar22[0x5e]);
    func_0x000107c615e8(lVar24);
    func_0x000107c6142c(lVar29);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar32 != (undefined *)0x0) {
      puVar4 = puVar32;
    }
    func_0x000107c6142c(puVar4);
    func_0x000107c61170(lVar19);
    func_0x000107c6142c(lVar27);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar22[1])();
      return;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar27 = *plVar22;
    puVar11 = *(undefined8 **)(lVar27 + 0x338);
    lVar19 = *plVar22;
    func_0x000107c615c0();
    if (lVar31 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_10274aaec;
        goto LAB_107c615e0;
      }
    }
    else {
      *(undefined8 *)(lVar27 + 0x340) = *(undefined8 *)(lVar27 + 0x248);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_10274a9b4;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar35 = *(undefined8 *)(lVar19 + 0x340);
    uVar5 = *(undefined8 *)(lVar19 + 0x330);
    uVar20 = *(undefined8 *)(lVar19 + 0x328);
    uVar25 = *(undefined8 *)(lVar19 + 800);
    uVar30 = *(undefined8 *)(lVar19 + 0x310);
    uVar33 = *(undefined8 *)(lVar19 + 0x300);
    uVar34 = *(undefined8 *)(lVar19 + 0x2b8);
    func_0x000100fb85f0();
    func_0x000107c613f8(&UNK_11072cd20,puVar11,0,0);
    *puVar11 = uVar35;
    func_0x000107c6142c(uVar34);
    func_0x00010006c090(uVar20,uVar5);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar25);
    func_0x000107c615e8(uVar30);
    func_0x0001000834e4(lVar19 + 0x208);
    uVar5 = *(undefined8 *)(lVar19 + 0x2e0);
    puVar32 = *(undefined **)(lVar19 + 0x2b8);
    uVar20 = *(undefined8 *)(lVar19 + 0x2b0);
    uVar25 = *(undefined8 *)(lVar19 + 0x288);
    uVar30 = *(undefined8 *)(lVar19 + 0x280);
    func_0x000107c61170(*(undefined8 *)(lVar19 + 0x2f0));
    func_0x000107c615e8(uVar25);
    func_0x000107c6142c(uVar30);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar32 != (undefined *)0x0) {
      puVar4 = puVar32;
    }
    func_0x000107c6142c(puVar4);
    func_0x000107c61170(uVar20);
    func_0x000107c6142c(uVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar19 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar25 = *(undefined8 *)(lVar19 + 0x330);
    uVar20 = *(undefined8 *)(lVar19 + 0x328);
    uVar30 = *(undefined8 *)(lVar19 + 800);
    uVar33 = *(undefined8 *)(lVar19 + 0x310);
    uVar34 = *(undefined8 *)(lVar19 + 0x300);
    func_0x0001000834e4(lVar19 + 0x208);
    puVar4 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    uVar5 = uVar20;
    func_0x000107c5ee20(uVar20,uVar25);
    func_0x000107c45ae0();
    func_0x000107c61170(uVar5);
    func_0x00010006c090(uVar20,uVar25);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar30);
    func_0x000107c615e8(uVar33);
    plVar22 = (long *)(lVar19 + 0xa0);
    *plVar22 = (long)puVar4;
    func_0x000100fb8694(lVar19 + 0x1e0,lVar19 + 0xa8);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*plVar22 == 0) goto LAB_10274b260;
    plVar7 = (long *)(lVar19 + 0x70);
    uVar3 = *(ulong *)(lVar19 + 0x2e0);
    *(undefined8 *)(lVar19 + 0x78) = *(undefined8 *)(lVar19 + 0xa8);
    *plVar7 = *plVar22;
    *(undefined8 *)(lVar19 + 0x88) = *(undefined8 *)(lVar19 + 0xb8);
    *(undefined8 *)(lVar19 + 0x80) = *(undefined8 *)(lVar19 + 0xb0);
    *(undefined8 *)(lVar19 + 0x98) = *(undefined8 *)(lVar19 + 200);
    *(undefined8 *)(lVar19 + 0x90) = *(undefined8 *)(lVar19 + 0xc0);
    if (uVar3 == 0) {
      uVar3 = *(ulong *)(lVar19 + 0x2b8);
      if (uVar3 != 0) {
        func_0x000107c61434(uVar3);
        goto LAB_10274abe8;
      }
    }
    else {
LAB_10274abe8:
      FUN_10274dd08(plVar7,lVar19 + 0xd0);
      uVar5 = *(undefined8 *)(lVar19 + 0xd0);
      uVar6 = uVar3;
      func_0x000107c61550();
      if ((uVar3 >> 0x3e != 0) || ((uVar6 & 1) == 0)) {
        FUN_10274d478();
      }
      if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(lVar19 + 0x2e8)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
        (*pcVar2)();
      }
      lVar27 = (uVar3 & 0xffffffffffffff8) + *(ulong *)(lVar19 + 0x2e8) * 8;
      uVar20 = *(undefined8 *)(lVar27 + 0x20);
      *(undefined8 *)(lVar27 + 0x20) = uVar5;
      func_0x000107c61170(uVar20);
      func_0x0001000834e4(lVar19 + 0xd8);
    }
    puVar17 = *(ulong **)(lVar19 + 600);
    FUN_10274dd08(plVar7,lVar19 + 0x100);
    func_0x000107c61170(*(undefined8 *)(lVar19 + 0x100));
    uVar26 = *puVar17;
    uVar6 = uVar26;
    func_0x000107c61558();
    uVar18 = uVar26;
    if ((uVar6 & 1) == 0) {
      uVar18 = 0;
      func_0x000100fb5010(0,*(long *)(uVar26 + 0x10) + 1,1,uVar26);
    }
    uVar6 = *(ulong *)(uVar18 + 0x10);
    uVar26 = uVar18;
    if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar6) {
      uVar26 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
      func_0x000100fb5010(uVar26,uVar6 + 1,1,uVar18);
    }
    uVar5 = *(undefined8 *)(lVar19 + 0x2f0);
    puVar17 = *(ulong **)(lVar19 + 600);
    *(ulong *)(uVar26 + 0x10) = uVar6 + 1;
    func_0x000100fb8694(lVar19 + 0x108,uVar26 + uVar6 * 0x28 + 0x20);
    func_0x000107c61170(uVar5);
    func_0x00010274dd58(plVar7,0x112ebbe18,&UNK_10dad4f68);
    *puVar17 = uVar26;
    uVar6 = *(ulong *)(lVar19 + 0x2f8);
    *(ulong *)(lVar19 + 0x2e0) = uVar3;
    if (uVar6 != *(ulong *)(lVar19 + 0x2c8)) {
      while( true ) {
        *(ulong *)(lVar19 + 0x2e8) = uVar6;
        puVar32 = puVar4;
        if (*(undefined **)(lVar19 + 0x2b8) != (undefined *)0x0) {
          puVar32 = *(undefined **)(lVar19 + 0x2b8);
        }
        if (((ulong)puVar32 & 0xc000000000000001) == 0) {
          if (*(ulong *)(*(long *)(lVar19 + 0x2c0) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(puVar32 + uVar6 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar6;
          func_0x000101016c54();
        }
        *(ulong *)(lVar19 + 0x2f0) = uVar3;
        *(ulong *)(lVar19 + 0x2f8) = uVar6 + 1;
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
          (*pcVar2)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar6 = uVar3;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar3);
        puVar13 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar3 = uVar6;
        func_0x000107c5ee20(uVar6,puVar32);
        *(undefined8 *)(lVar19 + 0x240) = 0;
        func_0x000107c4636c();
        *(undefined **)(lVar19 + 0x300) = puVar13;
        func_0x000107c61170(uVar3);
        uVar5 = *(undefined8 *)(lVar19 + 0x240);
        if (puVar13 == (undefined *)0x0) {
          uVar20 = uVar5;
          func_0x000107c61174();
          func_0x000107c5ed30(uVar5);
          func_0x000107c61170(uVar20);
          func_0x000107c61654();
          func_0x000107c614ac(uVar5);
          func_0x00010006c090(uVar6,puVar32);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar6,puVar32);
          func_0x000100083b20(lVar19 + 400);
          uVar5 = *(undefined8 *)(lVar19 + 0x1a8);
          lVar27 = *(long *)(lVar19 + 0x1b0);
          func_0x0001000a8868(lVar19 + 400,uVar5);
          puVar32 = puVar13;
          (**(code **)(lVar27 + 8))(puVar13,uVar5,lVar27);
          func_0x0001000834e4(lVar19 + 400);
          if (((ulong)puVar32 & 1) != 0) {
            func_0x000100083b20(lVar19 + 0x1b8);
            uVar5 = *(undefined8 *)(lVar19 + 0x1d0);
            lVar27 = *(long *)(lVar19 + 0x1d8);
            func_0x0001000a8868(lVar19 + 0x1b8,uVar5);
            piVar28 = *(int **)(lVar27 + 0x18);
            iVar1 = *piVar28;
            plVar22 = (long *)(ulong)(uint)piVar28[1];
            func_0x000107c615b8();
            *(long **)(lVar19 + 0x308) = plVar22;
            *plVar22 = lVar19;
            plVar22[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar28))(puVar13,uVar5,lVar27);
              return;
            }
            goto LAB_10274b338;
          }
          func_0x000107c61170(puVar13);
        }
        *(undefined8 *)(lVar19 + 0xb8) = 0;
        *(undefined8 *)(lVar19 + 0xb0) = 0;
        *(undefined8 *)(lVar19 + 200) = 0;
        *(undefined8 *)(lVar19 + 0xc0) = 0;
        *(undefined8 *)(lVar19 + 0xa8) = 0;
        *plVar22 = 0;
LAB_10274b260:
        lVar27 = *(long *)(lVar19 + 0x2f8);
        lVar31 = *(long *)(lVar19 + 0x2c8);
        func_0x000107c61170(*(undefined8 *)(lVar19 + 0x2f0));
        func_0x00010274dd58(plVar22,0x112ebbe10,&UNK_10dad4f60);
        if (lVar27 == lVar31) break;
        uVar6 = *(ulong *)(lVar19 + 0x2f8);
      }
    }
    lVar27 = *(long *)(lVar19 + 0x2b0);
    if (*(undefined **)(lVar19 + 0x2b8) != (undefined *)0x0) {
      puVar4 = *(undefined **)(lVar19 + 0x2b8);
    }
    func_0x000107c6142c(puVar4);
    lVar31 = *(long *)(lVar19 + 0x2e0);
    if (lVar27 == 0) {
      if (lVar31 != 0) {
        uVar20 = *(undefined8 *)(lVar19 + 0x288);
        func_0x000107c4e090();
        func_0x000107c61180();
        uVar5 = 0;
        lVar31 = *(long *)(lVar19 + 0x2e0);
        goto LAB_10274ad78;
      }
      uVar5 = *(undefined8 *)(lVar19 + 0x288);
      uVar18 = *(ulong *)(lVar19 + 0x280);
      func_0x000107c6142c(*(undefined8 *)(lVar19 + 0x2b8));
      func_0x000107c615f0(uVar5);
      uVar3 = uVar18;
      func_0x000107c61550();
      uVar6 = *(ulong *)(lVar19 + 0x280);
      if ((((int)uVar3 == 0) || ((uVar18 >> 0x3e & 1) != 0)) || ((long)uVar6 < 0)) {
        if (uVar6 >> 0x3e == 0) {
          uVar3 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar3 = uVar18 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar3 = uVar6;
          }
          func_0x000107c60480(uVar3);
          uVar6 = *(ulong *)(lVar19 + 0x280);
        }
        uVar18 = 0;
        FUN_102738e9c(0,uVar3 + 1,1,uVar6);
        uVar6 = uVar18;
      }
      uVar18 = uVar18 & 0xffffffffffffff8;
      uVar3 = *(ulong *)(uVar18 + 0x10);
      uVar26 = uVar6;
      if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar3) {
        uVar26 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
        FUN_102738e9c(uVar26,uVar3 + 1,1,uVar6);
        uVar18 = uVar26 & 0xffffffffffffff8;
      }
      uVar5 = *(undefined8 *)(lVar19 + 0x288);
      *(ulong *)(uVar18 + 0x10) = uVar3 + 1;
      *(undefined8 *)(uVar18 + uVar3 * 8 + 0x20) = uVar5;
      func_0x000107c615e8();
    }
    else {
      uVar20 = *(undefined8 *)(lVar19 + 0x2b0);
      uVar5 = uVar20;
      if (lVar31 == 0) {
        func_0x000107c61174();
        puVar11 = (undefined8 *)(lVar19 + 0x2b8);
      }
      else {
LAB_10274ad78:
        puVar11 = (undefined8 *)(lVar19 + 0x2e0);
        uVar25 = *(undefined8 *)(lVar19 + 0x2b8);
        func_0x000107c61434(lVar31);
        func_0x000107c61174(uVar5);
        func_0x000107c6142c(uVar25);
      }
      uVar5 = *puVar11;
      uVar3 = *(ulong *)(lVar19 + 0x288);
      func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130)
      ;
      if ((uVar3 & 1) == 0) {
LAB_10274ae04:
        uVar6 = 0;
      }
      else {
        uVar3 = *(ulong *)(lVar19 + 0x288);
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar3 == 0) goto LAB_10274ae04;
        uVar25 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar6 = uVar3;
        func_0x000107c5fc54(uVar3,uVar25);
        func_0x000107c61170();
      }
      uVar21 = *(ulong *)(lVar19 + 0x280);
      FUN_10274ce90();
      uVar18 = uVar3;
      func_0x000107c610f8();
      lVar27 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar18 + _DAT_112ebbdc8) = 0;
      lVar31 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar18 + _DAT_112ebbdd0) = 0;
      *(undefined8 *)(uVar18 + _DAT_112ebbdc0) = uVar20;
      *(undefined8 *)(uVar18 + lVar27) = uVar5;
      *(ulong *)(uVar18 + lVar31) = uVar6;
      *(ulong *)(lVar19 + 0x230) = uVar18;
      *(ulong *)(lVar19 + 0x238) = uVar3;
      lVar27 = lVar19 + 0x230;
      func_0x000107c61154(lVar27,PTR_s_init_1125d9248);
      uVar3 = uVar21;
      func_0x000107c61550();
      uVar6 = *(ulong *)(lVar19 + 0x280);
      if ((((int)uVar3 == 0) || ((uVar21 >> 0x3e & 1) != 0)) || (uVar3 = uVar6, (long)uVar6 < 0)) {
        if (uVar6 >> 0x3e == 0) {
          uVar18 = *(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar18 = uVar21 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar18 = uVar6;
          }
          func_0x000107c60480(uVar18);
          uVar6 = *(ulong *)(lVar19 + 0x280);
        }
        uVar3 = 0;
        FUN_102738e9c(0,uVar18 + 1,1,uVar6);
        uVar21 = uVar3;
      }
      uVar21 = uVar21 & 0xffffffffffffff8;
      uVar6 = *(ulong *)(uVar21 + 0x10);
      uVar26 = uVar3;
      if (*(ulong *)(uVar21 + 0x18) >> 1 <= uVar6) {
        uVar26 = (ulong)(1 < *(ulong *)(uVar21 + 0x18));
        FUN_102738e9c(uVar26,uVar6 + 1,1,uVar3);
        uVar21 = uVar26 & 0xffffffffffffff8;
      }
      uVar20 = *(undefined8 *)(lVar19 + 0x2e0);
      uVar25 = *(undefined8 *)(lVar19 + 0x2b0);
      uVar5 = *(undefined8 *)(lVar19 + 0x288);
      *(ulong *)(uVar21 + 0x10) = uVar6 + 1;
      *(long *)(uVar21 + uVar6 * 8 + 0x20) = lVar27;
      func_0x000107c615e8(uVar5);
      func_0x000107c61170(uVar25);
      func_0x000107c6142c(uVar20);
    }
    uVar3 = *(ulong *)(lVar19 + 0x290);
    if (uVar3 == *(ulong *)(lVar19 + 0x268)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar19 + 8))(uVar26);
        return;
      }
LAB_10274b338:
      func_0x000107c60e78();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar5 = *(undefined8 *)(lVar19 + 0x280);
      func_0x000107c615e8(*(undefined8 *)(lVar19 + 0x288));
      func_0x000107c6142c(uVar5);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        func_0x000107c60e78();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar19 + 8))();
      return;
    }
    *(ulong *)(lVar19 + 0x280) = uVar26;
    uVar6 = *(ulong *)(lVar19 + 0x250);
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(uVar6 + uVar3 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar6 = uVar3;
      FUN_10274d138();
    }
    *(ulong *)(lVar19 + 0x288) = uVar6;
    *(ulong *)(lVar19 + 0x290) = uVar3 + 1;
    if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(lVar19 + 0x298) = uVar6;
    plVar23 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(lVar19 + 0x2a0) = plVar23;
    *plVar23 = lVar19;
    plVar23[1] = (long)FUN_102749c40;
    plVar7 = *(long **)(lVar19 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) goto LAB_10274b338;
    plVar22 = (long *)(lVar19 + 0x40);
  }
  else {
    unaff_x22[0x50] = (long)plVar7;
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x4a];
    if (((ulong)UNRECOVERED_JUMPTABLE & 0xc000000000000001) == 0) {
      if (*(ulong *)(((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a510);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(UNRECOVERED_JUMPTABLE + uVar3 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar6 = uVar3;
      FUN_10274d138();
    }
    unaff_x22[0x51] = uVar6;
    unaff_x22[0x52] = uVar3 + 1;
    if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a50c);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    unaff_x22[0x53] = uVar6;
    plVar23 = (long *)0x120;
    func_0x000107c615b8();
    unaff_x22[0x54] = (long)plVar23;
    *plVar23 = (long)unaff_x22;
    plVar23[1] = (long)FUN_102749c40;
    plVar7 = (long *)unaff_x22[0x4c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) goto LAB_10274a564;
  }
  plVar23[0x18] = uVar6;
  plVar23[0x19] = (long)plVar7;
  plVar23[0x17] = (long)plVar22;
  pcVar2 = FUN_10274bdc8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10274a568; end: 10274a60f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274a568(undefined8 param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined1 *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x22;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  ulong *puVar23;
  ulong uVar24;
  int *piVar25;
  long lVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *unaff_x22;
  plVar19 = (long *)*unaff_x22;
  *(undefined8 *)(lVar10 + 0x310) = param_1;
  *(long *)(lVar10 + 0x318) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar10 + 0x308));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      pcVar2 = FUN_10274a610;
      goto LAB_107c615e0;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    pcVar2 = FUN_10274a82c;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = (undefined1 *)plVar19[0x62];
  func_0x0001000834e4(plVar19 + 0x37);
  func_0x000107c5b198();
  func_0x000107c61180();
  plVar19[100] = (long)puVar12;
  puVar3 = puVar12;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar3 == (undefined1 *)0x0) {
    lVar10 = plVar19[0x62];
    lVar20 = plVar19[0x60];
    lVar15 = plVar19[0x57];
    FUN_10274dbb4();
    func_0x000107c613f8(&UNK_110543998,puVar3,0,0);
    *puVar3 = 1;
    func_0x000107c61654();
    func_0x000107c6142c(lVar15);
    func_0x000107c61170(puVar12);
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(lVar20);
    lVar10 = plVar19[0x5c];
    puVar28 = (undefined *)plVar19[0x57];
    lVar20 = plVar19[0x56];
    lVar15 = plVar19[0x51];
    lVar21 = plVar19[0x50];
    func_0x000107c61170(plVar19[0x5e]);
    func_0x000107c615e8(lVar15);
    func_0x000107c6142c(lVar21);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar28 != (undefined *)0x0) {
      puVar6 = puVar28;
    }
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(lVar20);
    func_0x000107c6142c(lVar10);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010274a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar19[1])();
      return;
    }
  }
  else {
    puVar4 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    plVar19[0x65] = (long)puVar4;
    plVar19[0x66] = param_2;
    func_0x000100083b20(plVar19 + 0x41);
    lVar10 = plVar19[0x44];
    lVar20 = plVar19[0x45];
    func_0x0001000a8868(plVar19 + 0x41,lVar10);
    piVar25 = *(int **)(lVar20 + 0x20);
    iVar1 = *piVar25;
    puVar5 = (undefined8 *)(ulong)(uint)piVar25[1];
    func_0x000107c615b8();
    plVar19[0x67] = (long)puVar5;
    *puVar5 = plVar19;
    puVar5[1] = FUN_10274a908;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010274a740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar25))
                (puVar5,plVar19 + 0x3c,puVar12,"processedSnapDoc(from:)",0x17,0x9000000000000002,
                 0x10d,plVar19 + 0x49,lVar10);
      return;
    }
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = plVar19[0x57];
  func_0x000107c61170(plVar19[0x60]);
  func_0x000107c6142c(lVar10);
  func_0x0001000834e4(plVar19 + 0x37);
  lVar20 = plVar19[99];
  lVar10 = plVar19[0x5c];
  puVar28 = (undefined *)plVar19[0x57];
  lVar15 = plVar19[0x56];
  lVar21 = plVar19[0x51];
  lVar26 = plVar19[0x50];
  func_0x000107c61170(plVar19[0x5e]);
  func_0x000107c615e8(lVar21);
  func_0x000107c6142c(lVar26);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar28 != (undefined *)0x0) {
    puVar6 = puVar28;
  }
  func_0x000107c6142c(puVar6);
  func_0x000107c61170(lVar15);
  func_0x000107c6142c(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010274a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar19[1])();
    return;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *plVar19;
  puVar5 = *(undefined8 **)(lVar10 + 0x338);
  lVar15 = *plVar19;
  func_0x000107c615c0();
  if (lVar20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      pcVar2 = FUN_10274aaec;
      goto LAB_107c615e0;
    }
  }
  else {
    *(undefined8 *)(lVar10 + 0x340) = *(undefined8 *)(lVar10 + 0x248);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      pcVar2 = FUN_10274a9b4;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar31 = *(undefined8 *)(lVar15 + 0x340);
  uVar11 = *(undefined8 *)(lVar15 + 0x330);
  uVar16 = *(undefined8 *)(lVar15 + 0x328);
  uVar22 = *(undefined8 *)(lVar15 + 800);
  uVar27 = *(undefined8 *)(lVar15 + 0x310);
  uVar29 = *(undefined8 *)(lVar15 + 0x300);
  uVar30 = *(undefined8 *)(lVar15 + 0x2b8);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,puVar5,0,0);
  *puVar5 = uVar31;
  func_0x000107c6142c(uVar30);
  func_0x00010006c090(uVar16,uVar11);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar22);
  func_0x000107c615e8(uVar27);
  func_0x0001000834e4(lVar15 + 0x208);
  uVar11 = *(undefined8 *)(lVar15 + 0x2e0);
  puVar28 = *(undefined **)(lVar15 + 0x2b8);
  uVar16 = *(undefined8 *)(lVar15 + 0x2b0);
  uVar22 = *(undefined8 *)(lVar15 + 0x288);
  uVar27 = *(undefined8 *)(lVar15 + 0x280);
  func_0x000107c61170(*(undefined8 *)(lVar15 + 0x2f0));
  func_0x000107c615e8(uVar22);
  func_0x000107c6142c(uVar27);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar28 != (undefined *)0x0) {
    puVar6 = puVar28;
  }
  func_0x000107c6142c(puVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c6142c(uVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar15 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar22 = *(undefined8 *)(lVar15 + 0x330);
  uVar16 = *(undefined8 *)(lVar15 + 0x328);
  uVar27 = *(undefined8 *)(lVar15 + 800);
  uVar29 = *(undefined8 *)(lVar15 + 0x310);
  uVar30 = *(undefined8 *)(lVar15 + 0x300);
  func_0x0001000834e4(lVar15 + 0x208);
  puVar6 = PTR_PTR_1126bcf68;
  func_0x000107c610f8();
  uVar11 = uVar16;
  func_0x000107c5ee20(uVar16,uVar22);
  func_0x000107c45ae0();
  func_0x000107c61170(uVar11);
  func_0x00010006c090(uVar16,uVar22);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar27);
  func_0x000107c615e8(uVar29);
  plVar19 = (long *)(lVar15 + 0xa0);
  *plVar19 = (long)puVar6;
  func_0x000100fb8694(lVar15 + 0x1e0,lVar15 + 0xa8);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*plVar19 == 0) goto LAB_10274b260;
  plVar13 = (long *)(lVar15 + 0x70);
  uVar17 = *(ulong *)(lVar15 + 0x2e0);
  *(undefined8 *)(lVar15 + 0x78) = *(undefined8 *)(lVar15 + 0xa8);
  *plVar13 = *plVar19;
  *(undefined8 *)(lVar15 + 0x88) = *(undefined8 *)(lVar15 + 0xb8);
  *(undefined8 *)(lVar15 + 0x80) = *(undefined8 *)(lVar15 + 0xb0);
  *(undefined8 *)(lVar15 + 0x98) = *(undefined8 *)(lVar15 + 200);
  *(undefined8 *)(lVar15 + 0x90) = *(undefined8 *)(lVar15 + 0xc0);
  if (uVar17 == 0) {
    uVar17 = *(ulong *)(lVar15 + 0x2b8);
    if (uVar17 != 0) {
      func_0x000107c61434(uVar17);
      goto LAB_10274abe8;
    }
  }
  else {
LAB_10274abe8:
    FUN_10274dd08(plVar13,lVar15 + 0xd0);
    uVar11 = *(undefined8 *)(lVar15 + 0xd0);
    uVar14 = uVar17;
    func_0x000107c61550();
    if ((uVar17 >> 0x3e != 0) || ((uVar14 & 1) == 0)) {
      FUN_10274d478();
    }
    if (*(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(lVar15 + 0x2e8)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
      (*pcVar2)();
    }
    lVar10 = (uVar17 & 0xffffffffffffff8) + *(ulong *)(lVar15 + 0x2e8) * 8;
    uVar16 = *(undefined8 *)(lVar10 + 0x20);
    *(undefined8 *)(lVar10 + 0x20) = uVar11;
    func_0x000107c61170(uVar16);
    func_0x0001000834e4(lVar15 + 0xd8);
  }
  puVar23 = *(ulong **)(lVar15 + 600);
  FUN_10274dd08(plVar13,lVar15 + 0x100);
  func_0x000107c61170(*(undefined8 *)(lVar15 + 0x100));
  uVar24 = *puVar23;
  uVar14 = uVar24;
  func_0x000107c61558();
  uVar7 = uVar24;
  if ((uVar14 & 1) == 0) {
    uVar7 = 0;
    func_0x000100fb5010(0,*(long *)(uVar24 + 0x10) + 1,1,uVar24);
  }
  uVar14 = *(ulong *)(uVar7 + 0x10);
  uVar24 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar14) {
    uVar24 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    func_0x000100fb5010(uVar24,uVar14 + 1,1,uVar7);
  }
  uVar11 = *(undefined8 *)(lVar15 + 0x2f0);
  puVar23 = *(ulong **)(lVar15 + 600);
  *(ulong *)(uVar24 + 0x10) = uVar14 + 1;
  func_0x000100fb8694(lVar15 + 0x108,uVar24 + uVar14 * 0x28 + 0x20);
  func_0x000107c61170(uVar11);
  func_0x00010274dd58(plVar13,0x112ebbe18,&UNK_10dad4f68);
  *puVar23 = uVar24;
  uVar14 = *(ulong *)(lVar15 + 0x2f8);
  *(ulong *)(lVar15 + 0x2e0) = uVar17;
  if (uVar14 != *(ulong *)(lVar15 + 0x2c8)) {
    while( true ) {
      *(ulong *)(lVar15 + 0x2e8) = uVar14;
      puVar28 = puVar6;
      if (*(undefined **)(lVar15 + 0x2b8) != (undefined *)0x0) {
        puVar28 = *(undefined **)(lVar15 + 0x2b8);
      }
      if (((ulong)puVar28 & 0xc000000000000001) == 0) {
        if (*(ulong *)(*(long *)(lVar15 + 0x2c0) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
          (*pcVar2)();
        }
        uVar17 = *(ulong *)(puVar28 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar17 = uVar14;
        func_0x000101016c54();
      }
      *(ulong *)(lVar15 + 0x2f0) = uVar17;
      *(ulong *)(lVar15 + 0x2f8) = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
        (*pcVar2)();
      }
      func_0x000107c3eea8();
      func_0x000107c61180();
      uVar14 = uVar17;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar17);
      puVar8 = PTR_PTR_1126b25c0;
      func_0x000107c610f8();
      uVar17 = uVar14;
      func_0x000107c5ee20(uVar14,puVar28);
      *(undefined8 *)(lVar15 + 0x240) = 0;
      func_0x000107c4636c();
      *(undefined **)(lVar15 + 0x300) = puVar8;
      func_0x000107c61170(uVar17);
      uVar11 = *(undefined8 *)(lVar15 + 0x240);
      if (puVar8 == (undefined *)0x0) {
        uVar16 = uVar11;
        func_0x000107c61174();
        func_0x000107c5ed30(uVar11);
        func_0x000107c61170(uVar16);
        func_0x000107c61654();
        func_0x000107c614ac(uVar11);
        func_0x00010006c090(uVar14,puVar28);
      }
      else {
        func_0x000107c61174();
        func_0x00010006c090(uVar14,puVar28);
        func_0x000100083b20(lVar15 + 400);
        uVar11 = *(undefined8 *)(lVar15 + 0x1a8);
        lVar10 = *(long *)(lVar15 + 0x1b0);
        func_0x0001000a8868(lVar15 + 400,uVar11);
        puVar28 = puVar8;
        (**(code **)(lVar10 + 8))(puVar8,uVar11,lVar10);
        func_0x0001000834e4(lVar15 + 400);
        if (((ulong)puVar28 & 1) != 0) {
          func_0x000100083b20(lVar15 + 0x1b8);
          uVar11 = *(undefined8 *)(lVar15 + 0x1d0);
          lVar10 = *(long *)(lVar15 + 0x1d8);
          func_0x0001000a8868(lVar15 + 0x1b8,uVar11);
          piVar25 = *(int **)(lVar10 + 0x18);
          iVar1 = *piVar25;
          plVar19 = (long *)(ulong)(uint)piVar25[1];
          func_0x000107c615b8();
          *(long **)(lVar15 + 0x308) = plVar19;
          *plVar19 = lVar15;
          plVar19[1] = (long)FUN_10274a568;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar25))(puVar8,uVar11,lVar10);
            return;
          }
          goto LAB_10274b338;
        }
        func_0x000107c61170(puVar8);
      }
      *(undefined8 *)(lVar15 + 0xb8) = 0;
      *(undefined8 *)(lVar15 + 0xb0) = 0;
      *(undefined8 *)(lVar15 + 200) = 0;
      *(undefined8 *)(lVar15 + 0xc0) = 0;
      *(undefined8 *)(lVar15 + 0xa8) = 0;
      *plVar19 = 0;
LAB_10274b260:
      lVar10 = *(long *)(lVar15 + 0x2f8);
      lVar20 = *(long *)(lVar15 + 0x2c8);
      func_0x000107c61170(*(undefined8 *)(lVar15 + 0x2f0));
      func_0x00010274dd58(plVar19,0x112ebbe10,&UNK_10dad4f60);
      if (lVar10 == lVar20) break;
      uVar14 = *(ulong *)(lVar15 + 0x2f8);
    }
  }
  lVar10 = *(long *)(lVar15 + 0x2b0);
  if (*(undefined **)(lVar15 + 0x2b8) != (undefined *)0x0) {
    puVar6 = *(undefined **)(lVar15 + 0x2b8);
  }
  func_0x000107c6142c(puVar6);
  lVar20 = *(long *)(lVar15 + 0x2e0);
  if (lVar10 == 0) {
    if (lVar20 != 0) {
      uVar16 = *(undefined8 *)(lVar15 + 0x288);
      func_0x000107c4e090();
      func_0x000107c61180();
      uVar11 = 0;
      lVar20 = *(long *)(lVar15 + 0x2e0);
      goto LAB_10274ad78;
    }
    uVar11 = *(undefined8 *)(lVar15 + 0x288);
    uVar7 = *(ulong *)(lVar15 + 0x280);
    func_0x000107c6142c(*(undefined8 *)(lVar15 + 0x2b8));
    func_0x000107c615f0(uVar11);
    uVar17 = uVar7;
    func_0x000107c61550();
    uVar14 = *(ulong *)(lVar15 + 0x280);
    if ((((int)uVar17 == 0) || ((uVar7 >> 0x3e & 1) != 0)) || ((long)uVar14 < 0)) {
      if (uVar14 >> 0x3e == 0) {
        uVar17 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar17 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar14) {
          uVar17 = uVar14;
        }
        func_0x000107c60480(uVar17);
        uVar14 = *(ulong *)(lVar15 + 0x280);
      }
      uVar7 = 0;
      FUN_102738e9c(0,uVar17 + 1,1,uVar14);
      uVar14 = uVar7;
    }
    uVar7 = uVar7 & 0xffffffffffffff8;
    uVar17 = *(ulong *)(uVar7 + 0x10);
    uVar24 = uVar14;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar17) {
      uVar24 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_102738e9c(uVar24,uVar17 + 1,1,uVar14);
      uVar7 = uVar24 & 0xffffffffffffff8;
    }
    uVar11 = *(undefined8 *)(lVar15 + 0x288);
    *(ulong *)(uVar7 + 0x10) = uVar17 + 1;
    *(undefined8 *)(uVar7 + uVar17 * 8 + 0x20) = uVar11;
    func_0x000107c615e8();
  }
  else {
    uVar16 = *(undefined8 *)(lVar15 + 0x2b0);
    uVar11 = uVar16;
    if (lVar20 == 0) {
      func_0x000107c61174();
      puVar5 = (undefined8 *)(lVar15 + 0x2b8);
    }
    else {
LAB_10274ad78:
      puVar5 = (undefined8 *)(lVar15 + 0x2e0);
      uVar22 = *(undefined8 *)(lVar15 + 0x2b8);
      func_0x000107c61434(lVar20);
      func_0x000107c61174(uVar11);
      func_0x000107c6142c(uVar22);
    }
    uVar11 = *puVar5;
    uVar17 = *(ulong *)(lVar15 + 0x288);
    func_0x000107c61150(uVar17,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130);
    if ((uVar17 & 1) == 0) {
LAB_10274ae04:
      uVar14 = 0;
    }
    else {
      uVar17 = *(ulong *)(lVar15 + 0x288);
      func_0x000107c44a00();
      func_0x000107c61180();
      if (uVar17 == 0) goto LAB_10274ae04;
      uVar22 = 0;
      FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar14 = uVar17;
      func_0x000107c5fc54(uVar17,uVar22);
      func_0x000107c61170();
    }
    uVar18 = *(ulong *)(lVar15 + 0x280);
    FUN_10274ce90();
    uVar7 = uVar17;
    func_0x000107c610f8();
    lVar10 = _DAT_112ebbdc8;
    *(undefined8 *)(uVar7 + _DAT_112ebbdc8) = 0;
    lVar20 = _DAT_112ebbdd0;
    *(undefined8 *)(uVar7 + _DAT_112ebbdd0) = 0;
    *(undefined8 *)(uVar7 + _DAT_112ebbdc0) = uVar16;
    *(undefined8 *)(uVar7 + lVar10) = uVar11;
    *(ulong *)(uVar7 + lVar20) = uVar14;
    *(ulong *)(lVar15 + 0x230) = uVar7;
    *(ulong *)(lVar15 + 0x238) = uVar17;
    lVar10 = lVar15 + 0x230;
    func_0x000107c61154(lVar10,PTR_s_init_1125d9248);
    uVar17 = uVar18;
    func_0x000107c61550();
    uVar14 = *(ulong *)(lVar15 + 0x280);
    if ((((int)uVar17 == 0) || ((uVar18 >> 0x3e & 1) != 0)) || (uVar17 = uVar14, (long)uVar14 < 0))
    {
      if (uVar14 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar18 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar14) {
          uVar7 = uVar14;
        }
        func_0x000107c60480(uVar7);
        uVar14 = *(ulong *)(lVar15 + 0x280);
      }
      uVar17 = 0;
      FUN_102738e9c(0,uVar7 + 1,1,uVar14);
      uVar18 = uVar17;
    }
    uVar18 = uVar18 & 0xffffffffffffff8;
    uVar14 = *(ulong *)(uVar18 + 0x10);
    uVar24 = uVar17;
    if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar14) {
      uVar24 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
      FUN_102738e9c(uVar24,uVar14 + 1,1,uVar17);
      uVar18 = uVar24 & 0xffffffffffffff8;
    }
    uVar16 = *(undefined8 *)(lVar15 + 0x2e0);
    uVar22 = *(undefined8 *)(lVar15 + 0x2b0);
    uVar11 = *(undefined8 *)(lVar15 + 0x288);
    *(ulong *)(uVar18 + 0x10) = uVar14 + 1;
    *(long *)(uVar18 + uVar14 * 8 + 0x20) = lVar10;
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(uVar22);
    func_0x000107c6142c(uVar16);
  }
  uVar17 = *(ulong *)(lVar15 + 0x290);
  if (uVar17 == *(ulong *)(lVar15 + 0x268)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar15 + 8))(uVar24);
      return;
    }
  }
  else {
    *(ulong *)(lVar15 + 0x280) = uVar24;
    uVar14 = *(ulong *)(lVar15 + 0x250);
    if ((uVar14 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar14 = *(ulong *)(uVar14 + uVar17 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar14 = uVar17;
      FUN_10274d138();
    }
    *(ulong *)(lVar15 + 0x288) = uVar14;
    *(ulong *)(lVar15 + 0x290) = uVar17 + 1;
    if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(lVar15 + 0x298) = uVar14;
    plVar19 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(lVar15 + 0x2a0) = plVar19;
    *plVar19 = lVar15;
    plVar19[1] = (long)FUN_102749c40;
    lVar10 = *(long *)(lVar15 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      plVar19[0x18] = uVar14;
      plVar19[0x19] = lVar10;
      plVar19[0x17] = lVar15 + 0x40;
      pcVar2 = FUN_10274bdc8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
      return;
    }
  }
LAB_10274b338:
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(lVar15 + 0x280);
  func_0x000107c615e8(*(undefined8 *)(lVar15 + 0x288));
  func_0x000107c6142c(uVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    func_0x000107c60e78();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar15 + 8))();
  return;
}



/* Entry: 10274a610; end: 10274a82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274a610(undefined8 param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 *puVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  long *unaff_x22;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  ulong *puVar23;
  ulong uVar24;
  int *piVar25;
  long lVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = (undefined1 *)unaff_x22[0x62];
  func_0x0001000834e4(unaff_x22 + 0x37);
  func_0x000107c5b198();
  func_0x000107c61180();
  unaff_x22[100] = (long)puVar12;
  puVar3 = puVar12;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar3 == (undefined1 *)0x0) {
    lVar15 = unaff_x22[0x62];
    lVar20 = unaff_x22[0x60];
    lVar16 = unaff_x22[0x57];
    FUN_10274dbb4();
    func_0x000107c613f8(&UNK_110543998,puVar3,0,0);
    *puVar3 = 1;
    func_0x000107c61654();
    func_0x000107c6142c(lVar16);
    func_0x000107c61170(puVar12);
    func_0x000107c615e8(lVar15);
    func_0x000107c61170(lVar20);
    lVar15 = unaff_x22[0x5c];
    puVar28 = (undefined *)unaff_x22[0x57];
    lVar20 = unaff_x22[0x56];
    lVar16 = unaff_x22[0x51];
    lVar21 = unaff_x22[0x50];
    func_0x000107c61170(unaff_x22[0x5e]);
    func_0x000107c615e8(lVar16);
    func_0x000107c6142c(lVar21);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar28 != (undefined *)0x0) {
      puVar6 = puVar28;
    }
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(lVar20);
    func_0x000107c6142c(lVar15);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010274a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])();
      return;
    }
  }
  else {
    puVar4 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    unaff_x22[0x65] = (long)puVar4;
    unaff_x22[0x66] = param_2;
    func_0x000100083b20(unaff_x22 + 0x41);
    lVar15 = unaff_x22[0x44];
    lVar20 = unaff_x22[0x45];
    func_0x0001000a8868(unaff_x22 + 0x41,lVar15);
    piVar25 = *(int **)(lVar20 + 0x20);
    iVar1 = *piVar25;
    puVar5 = (undefined8 *)(ulong)(uint)piVar25[1];
    func_0x000107c615b8();
    unaff_x22[0x67] = (long)puVar5;
    *puVar5 = unaff_x22;
    puVar5[1] = FUN_10274a908;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010274a740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar25))
                (puVar5,unaff_x22 + 0x3c,puVar12,"processedSnapDoc(from:)",0x17,0x9000000000000002,
                 0x10d,unaff_x22 + 0x49,lVar15);
      return;
    }
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = unaff_x22[0x57];
  func_0x000107c61170(unaff_x22[0x60]);
  func_0x000107c6142c(lVar15);
  func_0x0001000834e4(unaff_x22 + 0x37);
  lVar20 = unaff_x22[99];
  lVar15 = unaff_x22[0x5c];
  puVar28 = (undefined *)unaff_x22[0x57];
  lVar16 = unaff_x22[0x56];
  lVar21 = unaff_x22[0x51];
  lVar26 = unaff_x22[0x50];
  func_0x000107c61170(unaff_x22[0x5e]);
  func_0x000107c615e8(lVar21);
  func_0x000107c6142c(lVar26);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar28 != (undefined *)0x0) {
    puVar6 = puVar28;
  }
  func_0x000107c6142c(puVar6);
  func_0x000107c61170(lVar16);
  func_0x000107c6142c(lVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010274a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *unaff_x22;
  puVar5 = *(undefined8 **)(lVar15 + 0x338);
  lVar16 = *unaff_x22;
  func_0x000107c615c0();
  if (lVar20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      pcVar2 = FUN_10274aaec;
      goto LAB_107c615e0;
    }
  }
  else {
    *(undefined8 *)(lVar15 + 0x340) = *(undefined8 *)(lVar15 + 0x248);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      pcVar2 = FUN_10274a9b4;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar31 = *(undefined8 *)(lVar16 + 0x340);
  uVar10 = *(undefined8 *)(lVar16 + 0x330);
  uVar17 = *(undefined8 *)(lVar16 + 0x328);
  uVar22 = *(undefined8 *)(lVar16 + 800);
  uVar27 = *(undefined8 *)(lVar16 + 0x310);
  uVar29 = *(undefined8 *)(lVar16 + 0x300);
  uVar30 = *(undefined8 *)(lVar16 + 0x2b8);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,puVar5,0,0);
  *puVar5 = uVar31;
  func_0x000107c6142c(uVar30);
  func_0x00010006c090(uVar17,uVar10);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar22);
  func_0x000107c615e8(uVar27);
  func_0x0001000834e4(lVar16 + 0x208);
  uVar10 = *(undefined8 *)(lVar16 + 0x2e0);
  puVar28 = *(undefined **)(lVar16 + 0x2b8);
  uVar17 = *(undefined8 *)(lVar16 + 0x2b0);
  uVar22 = *(undefined8 *)(lVar16 + 0x288);
  uVar27 = *(undefined8 *)(lVar16 + 0x280);
  func_0x000107c61170(*(undefined8 *)(lVar16 + 0x2f0));
  func_0x000107c615e8(uVar22);
  func_0x000107c6142c(uVar27);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar28 != (undefined *)0x0) {
    puVar6 = puVar28;
  }
  func_0x000107c6142c(puVar6);
  func_0x000107c61170(uVar17);
  func_0x000107c6142c(uVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar22 = *(undefined8 *)(lVar16 + 0x330);
  uVar17 = *(undefined8 *)(lVar16 + 0x328);
  uVar27 = *(undefined8 *)(lVar16 + 800);
  uVar29 = *(undefined8 *)(lVar16 + 0x310);
  uVar30 = *(undefined8 *)(lVar16 + 0x300);
  func_0x0001000834e4(lVar16 + 0x208);
  puVar6 = PTR_PTR_1126bcf68;
  func_0x000107c610f8();
  uVar10 = uVar17;
  func_0x000107c5ee20(uVar17,uVar22);
  func_0x000107c45ae0();
  func_0x000107c61170(uVar10);
  func_0x00010006c090(uVar17,uVar22);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar27);
  func_0x000107c615e8(uVar29);
  plVar11 = (long *)(lVar16 + 0xa0);
  *plVar11 = (long)puVar6;
  func_0x000100fb8694(lVar16 + 0x1e0,lVar16 + 0xa8);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*plVar11 == 0) goto LAB_10274b260;
  plVar13 = (long *)(lVar16 + 0x70);
  uVar18 = *(ulong *)(lVar16 + 0x2e0);
  *(undefined8 *)(lVar16 + 0x78) = *(undefined8 *)(lVar16 + 0xa8);
  *plVar13 = *plVar11;
  *(undefined8 *)(lVar16 + 0x88) = *(undefined8 *)(lVar16 + 0xb8);
  *(undefined8 *)(lVar16 + 0x80) = *(undefined8 *)(lVar16 + 0xb0);
  *(undefined8 *)(lVar16 + 0x98) = *(undefined8 *)(lVar16 + 200);
  *(undefined8 *)(lVar16 + 0x90) = *(undefined8 *)(lVar16 + 0xc0);
  if (uVar18 == 0) {
    uVar18 = *(ulong *)(lVar16 + 0x2b8);
    if (uVar18 != 0) {
      func_0x000107c61434(uVar18);
      goto LAB_10274abe8;
    }
  }
  else {
LAB_10274abe8:
    FUN_10274dd08(plVar13,lVar16 + 0xd0);
    uVar10 = *(undefined8 *)(lVar16 + 0xd0);
    uVar14 = uVar18;
    func_0x000107c61550();
    if ((uVar18 >> 0x3e != 0) || ((uVar14 & 1) == 0)) {
      FUN_10274d478();
    }
    if (*(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(lVar16 + 0x2e8)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
      (*pcVar2)();
    }
    lVar15 = (uVar18 & 0xffffffffffffff8) + *(ulong *)(lVar16 + 0x2e8) * 8;
    uVar17 = *(undefined8 *)(lVar15 + 0x20);
    *(undefined8 *)(lVar15 + 0x20) = uVar10;
    func_0x000107c61170(uVar17);
    func_0x0001000834e4(lVar16 + 0xd8);
  }
  puVar23 = *(ulong **)(lVar16 + 600);
  FUN_10274dd08(plVar13,lVar16 + 0x100);
  func_0x000107c61170(*(undefined8 *)(lVar16 + 0x100));
  uVar24 = *puVar23;
  uVar14 = uVar24;
  func_0x000107c61558();
  uVar7 = uVar24;
  if ((uVar14 & 1) == 0) {
    uVar7 = 0;
    func_0x000100fb5010(0,*(long *)(uVar24 + 0x10) + 1,1,uVar24);
  }
  uVar14 = *(ulong *)(uVar7 + 0x10);
  uVar24 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar14) {
    uVar24 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    func_0x000100fb5010(uVar24,uVar14 + 1,1,uVar7);
  }
  uVar10 = *(undefined8 *)(lVar16 + 0x2f0);
  puVar23 = *(ulong **)(lVar16 + 600);
  *(ulong *)(uVar24 + 0x10) = uVar14 + 1;
  func_0x000100fb8694(lVar16 + 0x108,uVar24 + uVar14 * 0x28 + 0x20);
  func_0x000107c61170(uVar10);
  func_0x00010274dd58(plVar13,0x112ebbe18,&UNK_10dad4f68);
  *puVar23 = uVar24;
  uVar14 = *(ulong *)(lVar16 + 0x2f8);
  *(ulong *)(lVar16 + 0x2e0) = uVar18;
  if (uVar14 != *(ulong *)(lVar16 + 0x2c8)) {
    while( true ) {
      *(ulong *)(lVar16 + 0x2e8) = uVar14;
      puVar28 = puVar6;
      if (*(undefined **)(lVar16 + 0x2b8) != (undefined *)0x0) {
        puVar28 = *(undefined **)(lVar16 + 0x2b8);
      }
      if (((ulong)puVar28 & 0xc000000000000001) == 0) {
        if (*(ulong *)(*(long *)(lVar16 + 0x2c0) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
          (*pcVar2)();
        }
        uVar18 = *(ulong *)(puVar28 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar18 = uVar14;
        func_0x000101016c54();
      }
      *(ulong *)(lVar16 + 0x2f0) = uVar18;
      *(ulong *)(lVar16 + 0x2f8) = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
        (*pcVar2)();
      }
      func_0x000107c3eea8();
      func_0x000107c61180();
      uVar14 = uVar18;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar18);
      puVar8 = PTR_PTR_1126b25c0;
      func_0x000107c610f8();
      uVar18 = uVar14;
      func_0x000107c5ee20(uVar14,puVar28);
      *(undefined8 *)(lVar16 + 0x240) = 0;
      func_0x000107c4636c();
      *(undefined **)(lVar16 + 0x300) = puVar8;
      func_0x000107c61170(uVar18);
      uVar10 = *(undefined8 *)(lVar16 + 0x240);
      if (puVar8 == (undefined *)0x0) {
        uVar17 = uVar10;
        func_0x000107c61174();
        func_0x000107c5ed30(uVar10);
        func_0x000107c61170(uVar17);
        func_0x000107c61654();
        func_0x000107c614ac(uVar10);
        func_0x00010006c090(uVar14,puVar28);
      }
      else {
        func_0x000107c61174();
        func_0x00010006c090(uVar14,puVar28);
        func_0x000100083b20(lVar16 + 400);
        uVar10 = *(undefined8 *)(lVar16 + 0x1a8);
        lVar15 = *(long *)(lVar16 + 0x1b0);
        func_0x0001000a8868(lVar16 + 400,uVar10);
        puVar28 = puVar8;
        (**(code **)(lVar15 + 8))(puVar8,uVar10,lVar15);
        func_0x0001000834e4(lVar16 + 400);
        if (((ulong)puVar28 & 1) != 0) {
          func_0x000100083b20(lVar16 + 0x1b8);
          uVar10 = *(undefined8 *)(lVar16 + 0x1d0);
          lVar15 = *(long *)(lVar16 + 0x1d8);
          func_0x0001000a8868(lVar16 + 0x1b8,uVar10);
          piVar25 = *(int **)(lVar15 + 0x18);
          iVar1 = *piVar25;
          plVar11 = (long *)(ulong)(uint)piVar25[1];
          func_0x000107c615b8();
          *(long **)(lVar16 + 0x308) = plVar11;
          *plVar11 = lVar16;
          plVar11[1] = (long)FUN_10274a568;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar25))(puVar8,uVar10,lVar15);
            return;
          }
          goto LAB_10274b338;
        }
        func_0x000107c61170(puVar8);
      }
      *(undefined8 *)(lVar16 + 0xb8) = 0;
      *(undefined8 *)(lVar16 + 0xb0) = 0;
      *(undefined8 *)(lVar16 + 200) = 0;
      *(undefined8 *)(lVar16 + 0xc0) = 0;
      *(undefined8 *)(lVar16 + 0xa8) = 0;
      *plVar11 = 0;
LAB_10274b260:
      lVar15 = *(long *)(lVar16 + 0x2f8);
      lVar20 = *(long *)(lVar16 + 0x2c8);
      func_0x000107c61170(*(undefined8 *)(lVar16 + 0x2f0));
      func_0x00010274dd58(plVar11,0x112ebbe10,&UNK_10dad4f60);
      if (lVar15 == lVar20) break;
      uVar14 = *(ulong *)(lVar16 + 0x2f8);
    }
  }
  lVar15 = *(long *)(lVar16 + 0x2b0);
  if (*(undefined **)(lVar16 + 0x2b8) != (undefined *)0x0) {
    puVar6 = *(undefined **)(lVar16 + 0x2b8);
  }
  func_0x000107c6142c(puVar6);
  lVar20 = *(long *)(lVar16 + 0x2e0);
  if (lVar15 == 0) {
    if (lVar20 != 0) {
      uVar17 = *(undefined8 *)(lVar16 + 0x288);
      func_0x000107c4e090();
      func_0x000107c61180();
      uVar10 = 0;
      lVar20 = *(long *)(lVar16 + 0x2e0);
      goto LAB_10274ad78;
    }
    uVar10 = *(undefined8 *)(lVar16 + 0x288);
    uVar7 = *(ulong *)(lVar16 + 0x280);
    func_0x000107c6142c(*(undefined8 *)(lVar16 + 0x2b8));
    func_0x000107c615f0(uVar10);
    uVar18 = uVar7;
    func_0x000107c61550();
    uVar14 = *(ulong *)(lVar16 + 0x280);
    if ((((int)uVar18 == 0) || ((uVar7 >> 0x3e & 1) != 0)) || ((long)uVar14 < 0)) {
      if (uVar14 >> 0x3e == 0) {
        uVar18 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar18 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar14) {
          uVar18 = uVar14;
        }
        func_0x000107c60480(uVar18);
        uVar14 = *(ulong *)(lVar16 + 0x280);
      }
      uVar7 = 0;
      FUN_102738e9c(0,uVar18 + 1,1,uVar14);
      uVar14 = uVar7;
    }
    uVar7 = uVar7 & 0xffffffffffffff8;
    uVar18 = *(ulong *)(uVar7 + 0x10);
    uVar24 = uVar14;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar18) {
      uVar24 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_102738e9c(uVar24,uVar18 + 1,1,uVar14);
      uVar7 = uVar24 & 0xffffffffffffff8;
    }
    uVar10 = *(undefined8 *)(lVar16 + 0x288);
    *(ulong *)(uVar7 + 0x10) = uVar18 + 1;
    *(undefined8 *)(uVar7 + uVar18 * 8 + 0x20) = uVar10;
    func_0x000107c615e8();
  }
  else {
    uVar17 = *(undefined8 *)(lVar16 + 0x2b0);
    uVar10 = uVar17;
    if (lVar20 == 0) {
      func_0x000107c61174();
      puVar5 = (undefined8 *)(lVar16 + 0x2b8);
    }
    else {
LAB_10274ad78:
      puVar5 = (undefined8 *)(lVar16 + 0x2e0);
      uVar22 = *(undefined8 *)(lVar16 + 0x2b8);
      func_0x000107c61434(lVar20);
      func_0x000107c61174(uVar10);
      func_0x000107c6142c(uVar22);
    }
    uVar10 = *puVar5;
    uVar18 = *(ulong *)(lVar16 + 0x288);
    func_0x000107c61150(uVar18,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130);
    if ((uVar18 & 1) == 0) {
LAB_10274ae04:
      uVar14 = 0;
    }
    else {
      uVar18 = *(ulong *)(lVar16 + 0x288);
      func_0x000107c44a00();
      func_0x000107c61180();
      if (uVar18 == 0) goto LAB_10274ae04;
      uVar22 = 0;
      FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar14 = uVar18;
      func_0x000107c5fc54(uVar18,uVar22);
      func_0x000107c61170();
    }
    uVar19 = *(ulong *)(lVar16 + 0x280);
    FUN_10274ce90();
    uVar7 = uVar18;
    func_0x000107c610f8();
    lVar15 = _DAT_112ebbdc8;
    *(undefined8 *)(uVar7 + _DAT_112ebbdc8) = 0;
    lVar20 = _DAT_112ebbdd0;
    *(undefined8 *)(uVar7 + _DAT_112ebbdd0) = 0;
    *(undefined8 *)(uVar7 + _DAT_112ebbdc0) = uVar17;
    *(undefined8 *)(uVar7 + lVar15) = uVar10;
    *(ulong *)(uVar7 + lVar20) = uVar14;
    *(ulong *)(lVar16 + 0x230) = uVar7;
    *(ulong *)(lVar16 + 0x238) = uVar18;
    lVar15 = lVar16 + 0x230;
    func_0x000107c61154(lVar15,PTR_s_init_1125d9248);
    uVar18 = uVar19;
    func_0x000107c61550();
    uVar14 = *(ulong *)(lVar16 + 0x280);
    if ((((int)uVar18 == 0) || ((uVar19 >> 0x3e & 1) != 0)) || (uVar18 = uVar14, (long)uVar14 < 0))
    {
      if (uVar14 >> 0x3e == 0) {
        uVar7 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar7 = uVar19 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar14) {
          uVar7 = uVar14;
        }
        func_0x000107c60480(uVar7);
        uVar14 = *(ulong *)(lVar16 + 0x280);
      }
      uVar18 = 0;
      FUN_102738e9c(0,uVar7 + 1,1,uVar14);
      uVar19 = uVar18;
    }
    uVar19 = uVar19 & 0xffffffffffffff8;
    uVar14 = *(ulong *)(uVar19 + 0x10);
    uVar24 = uVar18;
    if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar14) {
      uVar24 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
      FUN_102738e9c(uVar24,uVar14 + 1,1,uVar18);
      uVar19 = uVar24 & 0xffffffffffffff8;
    }
    uVar17 = *(undefined8 *)(lVar16 + 0x2e0);
    uVar22 = *(undefined8 *)(lVar16 + 0x2b0);
    uVar10 = *(undefined8 *)(lVar16 + 0x288);
    *(ulong *)(uVar19 + 0x10) = uVar14 + 1;
    *(long *)(uVar19 + uVar14 * 8 + 0x20) = lVar15;
    func_0x000107c615e8(uVar10);
    func_0x000107c61170(uVar22);
    func_0x000107c6142c(uVar17);
  }
  uVar18 = *(ulong *)(lVar16 + 0x290);
  if (uVar18 == *(ulong *)(lVar16 + 0x268)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar16 + 8))(uVar24);
      return;
    }
  }
  else {
    *(ulong *)(lVar16 + 0x280) = uVar24;
    uVar14 = *(ulong *)(lVar16 + 0x250);
    if ((uVar14 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar14 = *(ulong *)(uVar14 + uVar18 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar14 = uVar18;
      FUN_10274d138();
    }
    *(ulong *)(lVar16 + 0x288) = uVar14;
    *(ulong *)(lVar16 + 0x290) = uVar18 + 1;
    if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(lVar16 + 0x298) = uVar14;
    plVar11 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(lVar16 + 0x2a0) = plVar11;
    *plVar11 = lVar16;
    plVar11[1] = (long)FUN_102749c40;
    lVar15 = *(long *)(lVar16 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      plVar11[0x18] = uVar14;
      plVar11[0x19] = lVar15;
      plVar11[0x17] = lVar16 + 0x40;
      pcVar2 = FUN_10274bdc8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
      return;
    }
  }
LAB_10274b338:
  func_0x000107c60e78();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined8 *)(lVar16 + 0x280);
  func_0x000107c615e8(*(undefined8 *)(lVar16 + 0x288));
  func_0x000107c6142c(uVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    func_0x000107c60e78();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 8))();
  return;
}



/* Entry: 10274a82c; end: 10274a907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274a82c(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x22;
  long lVar18;
  undefined8 uVar19;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  int *piVar24;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = unaff_x22[0x57];
  func_0x000107c61170(unaff_x22[0x60]);
  func_0x000107c6142c(lVar10);
  func_0x0001000834e4(unaff_x22 + 0x37);
  lVar11 = unaff_x22[99];
  lVar10 = unaff_x22[0x5c];
  puVar25 = (undefined *)unaff_x22[0x57];
  lVar14 = unaff_x22[0x56];
  lVar18 = unaff_x22[0x51];
  lVar22 = unaff_x22[0x50];
  func_0x000107c61170(unaff_x22[0x5e]);
  func_0x000107c615e8(lVar18);
  func_0x000107c6142c(lVar22);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar25 != (undefined *)0x0) {
    puVar4 = puVar25;
  }
  func_0x000107c6142c(puVar4);
  func_0x000107c61170(lVar14);
  func_0x000107c6142c(lVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010274a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *unaff_x22;
  puVar3 = *(undefined8 **)(lVar10 + 0x338);
  lVar14 = *unaff_x22;
  func_0x000107c615c0();
  if (lVar11 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      pcVar2 = FUN_10274aaec;
      goto LAB_107c615e0;
    }
  }
  else {
    *(undefined8 *)(lVar10 + 0x340) = *(undefined8 *)(lVar10 + 0x248);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      pcVar2 = FUN_10274a9b4;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar28 = *(undefined8 *)(lVar14 + 0x340);
  uVar8 = *(undefined8 *)(lVar14 + 0x330);
  uVar15 = *(undefined8 *)(lVar14 + 0x328);
  uVar19 = *(undefined8 *)(lVar14 + 800);
  uVar23 = *(undefined8 *)(lVar14 + 0x310);
  uVar26 = *(undefined8 *)(lVar14 + 0x300);
  uVar27 = *(undefined8 *)(lVar14 + 0x2b8);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,puVar3,0,0);
  *puVar3 = uVar28;
  func_0x000107c6142c(uVar27);
  func_0x00010006c090(uVar15,uVar8);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar19);
  func_0x000107c615e8(uVar23);
  func_0x0001000834e4(lVar14 + 0x208);
  uVar8 = *(undefined8 *)(lVar14 + 0x2e0);
  puVar25 = *(undefined **)(lVar14 + 0x2b8);
  uVar15 = *(undefined8 *)(lVar14 + 0x2b0);
  uVar19 = *(undefined8 *)(lVar14 + 0x288);
  uVar23 = *(undefined8 *)(lVar14 + 0x280);
  func_0x000107c61170(*(undefined8 *)(lVar14 + 0x2f0));
  func_0x000107c615e8(uVar19);
  func_0x000107c6142c(uVar23);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar25 != (undefined *)0x0) {
    puVar4 = puVar25;
  }
  func_0x000107c6142c(puVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c6142c(uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar14 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = *(undefined8 *)(lVar14 + 0x330);
  uVar15 = *(undefined8 *)(lVar14 + 0x328);
  uVar23 = *(undefined8 *)(lVar14 + 800);
  uVar26 = *(undefined8 *)(lVar14 + 0x310);
  uVar27 = *(undefined8 *)(lVar14 + 0x300);
  func_0x0001000834e4(lVar14 + 0x208);
  puVar4 = PTR_PTR_1126bcf68;
  func_0x000107c610f8();
  uVar8 = uVar15;
  func_0x000107c5ee20(uVar15,uVar19);
  func_0x000107c45ae0();
  func_0x000107c61170(uVar8);
  func_0x00010006c090(uVar15,uVar19);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar23);
  func_0x000107c615e8(uVar26);
  plVar9 = (long *)(lVar14 + 0xa0);
  *plVar9 = (long)puVar4;
  func_0x000100fb8694(lVar14 + 0x1e0,lVar14 + 0xa8);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*plVar9 == 0) goto LAB_10274b260;
  plVar12 = (long *)(lVar14 + 0x70);
  uVar16 = *(ulong *)(lVar14 + 0x2e0);
  *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(lVar14 + 0xa8);
  *plVar12 = *plVar9;
  *(undefined8 *)(lVar14 + 0x88) = *(undefined8 *)(lVar14 + 0xb8);
  *(undefined8 *)(lVar14 + 0x80) = *(undefined8 *)(lVar14 + 0xb0);
  *(undefined8 *)(lVar14 + 0x98) = *(undefined8 *)(lVar14 + 200);
  *(undefined8 *)(lVar14 + 0x90) = *(undefined8 *)(lVar14 + 0xc0);
  if (uVar16 == 0) {
    uVar16 = *(ulong *)(lVar14 + 0x2b8);
    if (uVar16 != 0) {
      func_0x000107c61434(uVar16);
      goto LAB_10274abe8;
    }
  }
  else {
LAB_10274abe8:
    FUN_10274dd08(plVar12,lVar14 + 0xd0);
    uVar8 = *(undefined8 *)(lVar14 + 0xd0);
    uVar13 = uVar16;
    func_0x000107c61550();
    if ((uVar16 >> 0x3e != 0) || ((uVar13 & 1) == 0)) {
      FUN_10274d478();
    }
    if (*(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(lVar14 + 0x2e8)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
      (*pcVar2)();
    }
    lVar10 = (uVar16 & 0xffffffffffffff8) + *(ulong *)(lVar14 + 0x2e8) * 8;
    uVar15 = *(undefined8 *)(lVar10 + 0x20);
    *(undefined8 *)(lVar10 + 0x20) = uVar8;
    func_0x000107c61170(uVar15);
    func_0x0001000834e4(lVar14 + 0xd8);
  }
  puVar20 = *(ulong **)(lVar14 + 600);
  FUN_10274dd08(plVar12,lVar14 + 0x100);
  func_0x000107c61170(*(undefined8 *)(lVar14 + 0x100));
  uVar21 = *puVar20;
  uVar13 = uVar21;
  func_0x000107c61558();
  uVar5 = uVar21;
  if ((uVar13 & 1) == 0) {
    uVar5 = 0;
    func_0x000100fb5010(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
  }
  uVar13 = *(ulong *)(uVar5 + 0x10);
  uVar21 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar13) {
    uVar21 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x000100fb5010(uVar21,uVar13 + 1,1,uVar5);
  }
  uVar8 = *(undefined8 *)(lVar14 + 0x2f0);
  puVar20 = *(ulong **)(lVar14 + 600);
  *(ulong *)(uVar21 + 0x10) = uVar13 + 1;
  func_0x000100fb8694(lVar14 + 0x108,uVar21 + uVar13 * 0x28 + 0x20);
  func_0x000107c61170(uVar8);
  func_0x00010274dd58(plVar12,0x112ebbe18,&UNK_10dad4f68);
  *puVar20 = uVar21;
  uVar13 = *(ulong *)(lVar14 + 0x2f8);
  *(ulong *)(lVar14 + 0x2e0) = uVar16;
  if (uVar13 != *(ulong *)(lVar14 + 0x2c8)) {
    while( true ) {
      *(ulong *)(lVar14 + 0x2e8) = uVar13;
      puVar25 = puVar4;
      if (*(undefined **)(lVar14 + 0x2b8) != (undefined *)0x0) {
        puVar25 = *(undefined **)(lVar14 + 0x2b8);
      }
      if (((ulong)puVar25 & 0xc000000000000001) == 0) {
        if (*(ulong *)(*(long *)(lVar14 + 0x2c0) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
          (*pcVar2)();
        }
        uVar16 = *(ulong *)(puVar25 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar16 = uVar13;
        func_0x000101016c54();
      }
      *(ulong *)(lVar14 + 0x2f0) = uVar16;
      *(ulong *)(lVar14 + 0x2f8) = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
        (*pcVar2)();
      }
      func_0x000107c3eea8();
      func_0x000107c61180();
      uVar13 = uVar16;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar16);
      puVar6 = PTR_PTR_1126b25c0;
      func_0x000107c610f8();
      uVar16 = uVar13;
      func_0x000107c5ee20(uVar13,puVar25);
      *(undefined8 *)(lVar14 + 0x240) = 0;
      func_0x000107c4636c();
      *(undefined **)(lVar14 + 0x300) = puVar6;
      func_0x000107c61170(uVar16);
      uVar8 = *(undefined8 *)(lVar14 + 0x240);
      if (puVar6 == (undefined *)0x0) {
        uVar15 = uVar8;
        func_0x000107c61174();
        func_0x000107c5ed30(uVar8);
        func_0x000107c61170(uVar15);
        func_0x000107c61654();
        func_0x000107c614ac(uVar8);
        func_0x00010006c090(uVar13,puVar25);
      }
      else {
        func_0x000107c61174();
        func_0x00010006c090(uVar13,puVar25);
        func_0x000100083b20(lVar14 + 400);
        uVar8 = *(undefined8 *)(lVar14 + 0x1a8);
        lVar10 = *(long *)(lVar14 + 0x1b0);
        func_0x0001000a8868(lVar14 + 400,uVar8);
        puVar25 = puVar6;
        (**(code **)(lVar10 + 8))(puVar6,uVar8,lVar10);
        func_0x0001000834e4(lVar14 + 400);
        if (((ulong)puVar25 & 1) != 0) {
          func_0x000100083b20(lVar14 + 0x1b8);
          uVar8 = *(undefined8 *)(lVar14 + 0x1d0);
          lVar10 = *(long *)(lVar14 + 0x1d8);
          func_0x0001000a8868(lVar14 + 0x1b8,uVar8);
          piVar24 = *(int **)(lVar10 + 0x18);
          iVar1 = *piVar24;
          plVar9 = (long *)(ulong)(uint)piVar24[1];
          func_0x000107c615b8();
          *(long **)(lVar14 + 0x308) = plVar9;
          *plVar9 = lVar14;
          plVar9[1] = (long)FUN_10274a568;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar24))(puVar6,uVar8,lVar10);
            return;
          }
          goto LAB_10274b338;
        }
        func_0x000107c61170(puVar6);
      }
      *(undefined8 *)(lVar14 + 0xb8) = 0;
      *(undefined8 *)(lVar14 + 0xb0) = 0;
      *(undefined8 *)(lVar14 + 200) = 0;
      *(undefined8 *)(lVar14 + 0xc0) = 0;
      *(undefined8 *)(lVar14 + 0xa8) = 0;
      *plVar9 = 0;
LAB_10274b260:
      lVar10 = *(long *)(lVar14 + 0x2f8);
      lVar11 = *(long *)(lVar14 + 0x2c8);
      func_0x000107c61170(*(undefined8 *)(lVar14 + 0x2f0));
      func_0x00010274dd58(plVar9,0x112ebbe10,&UNK_10dad4f60);
      if (lVar10 == lVar11) break;
      uVar13 = *(ulong *)(lVar14 + 0x2f8);
    }
  }
  lVar10 = *(long *)(lVar14 + 0x2b0);
  if (*(undefined **)(lVar14 + 0x2b8) != (undefined *)0x0) {
    puVar4 = *(undefined **)(lVar14 + 0x2b8);
  }
  func_0x000107c6142c(puVar4);
  lVar11 = *(long *)(lVar14 + 0x2e0);
  if (lVar10 == 0) {
    if (lVar11 != 0) {
      uVar15 = *(undefined8 *)(lVar14 + 0x288);
      func_0x000107c4e090();
      func_0x000107c61180();
      uVar8 = 0;
      lVar11 = *(long *)(lVar14 + 0x2e0);
      goto LAB_10274ad78;
    }
    uVar8 = *(undefined8 *)(lVar14 + 0x288);
    uVar5 = *(ulong *)(lVar14 + 0x280);
    func_0x000107c6142c(*(undefined8 *)(lVar14 + 0x2b8));
    func_0x000107c615f0(uVar8);
    uVar16 = uVar5;
    func_0x000107c61550();
    uVar13 = *(ulong *)(lVar14 + 0x280);
    if ((((int)uVar16 == 0) || ((uVar5 >> 0x3e & 1) != 0)) || ((long)uVar13 < 0)) {
      if (uVar13 >> 0x3e == 0) {
        uVar16 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar16 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar16 = uVar13;
        }
        func_0x000107c60480(uVar16);
        uVar13 = *(ulong *)(lVar14 + 0x280);
      }
      uVar5 = 0;
      FUN_102738e9c(0,uVar16 + 1,1,uVar13);
      uVar13 = uVar5;
    }
    uVar5 = uVar5 & 0xffffffffffffff8;
    uVar16 = *(ulong *)(uVar5 + 0x10);
    uVar21 = uVar13;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar16) {
      uVar21 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_102738e9c(uVar21,uVar16 + 1,1,uVar13);
      uVar5 = uVar21 & 0xffffffffffffff8;
    }
    uVar8 = *(undefined8 *)(lVar14 + 0x288);
    *(ulong *)(uVar5 + 0x10) = uVar16 + 1;
    *(undefined8 *)(uVar5 + uVar16 * 8 + 0x20) = uVar8;
    func_0x000107c615e8();
  }
  else {
    uVar15 = *(undefined8 *)(lVar14 + 0x2b0);
    uVar8 = uVar15;
    if (lVar11 == 0) {
      func_0x000107c61174();
      puVar3 = (undefined8 *)(lVar14 + 0x2b8);
    }
    else {
LAB_10274ad78:
      puVar3 = (undefined8 *)(lVar14 + 0x2e0);
      uVar19 = *(undefined8 *)(lVar14 + 0x2b8);
      func_0x000107c61434(lVar11);
      func_0x000107c61174(uVar8);
      func_0x000107c6142c(uVar19);
    }
    uVar8 = *puVar3;
    uVar16 = *(ulong *)(lVar14 + 0x288);
    func_0x000107c61150(uVar16,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130);
    if ((uVar16 & 1) == 0) {
LAB_10274ae04:
      uVar13 = 0;
    }
    else {
      uVar16 = *(ulong *)(lVar14 + 0x288);
      func_0x000107c44a00();
      func_0x000107c61180();
      if (uVar16 == 0) goto LAB_10274ae04;
      uVar19 = 0;
      FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar13 = uVar16;
      func_0x000107c5fc54(uVar16,uVar19);
      func_0x000107c61170();
    }
    uVar17 = *(ulong *)(lVar14 + 0x280);
    FUN_10274ce90();
    uVar5 = uVar16;
    func_0x000107c610f8();
    lVar10 = _DAT_112ebbdc8;
    *(undefined8 *)(uVar5 + _DAT_112ebbdc8) = 0;
    lVar11 = _DAT_112ebbdd0;
    *(undefined8 *)(uVar5 + _DAT_112ebbdd0) = 0;
    *(undefined8 *)(uVar5 + _DAT_112ebbdc0) = uVar15;
    *(undefined8 *)(uVar5 + lVar10) = uVar8;
    *(ulong *)(uVar5 + lVar11) = uVar13;
    *(ulong *)(lVar14 + 0x230) = uVar5;
    *(ulong *)(lVar14 + 0x238) = uVar16;
    lVar10 = lVar14 + 0x230;
    func_0x000107c61154(lVar10,PTR_s_init_1125d9248);
    uVar16 = uVar17;
    func_0x000107c61550();
    uVar13 = *(ulong *)(lVar14 + 0x280);
    if ((((int)uVar16 == 0) || ((uVar17 >> 0x3e & 1) != 0)) || (uVar16 = uVar13, (long)uVar13 < 0))
    {
      if (uVar13 >> 0x3e == 0) {
        uVar5 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar5 = uVar17 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar5 = uVar13;
        }
        func_0x000107c60480(uVar5);
        uVar13 = *(ulong *)(lVar14 + 0x280);
      }
      uVar16 = 0;
      FUN_102738e9c(0,uVar5 + 1,1,uVar13);
      uVar17 = uVar16;
    }
    uVar17 = uVar17 & 0xffffffffffffff8;
    uVar13 = *(ulong *)(uVar17 + 0x10);
    uVar21 = uVar16;
    if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar13) {
      uVar21 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
      FUN_102738e9c(uVar21,uVar13 + 1,1,uVar16);
      uVar17 = uVar21 & 0xffffffffffffff8;
    }
    uVar15 = *(undefined8 *)(lVar14 + 0x2e0);
    uVar19 = *(undefined8 *)(lVar14 + 0x2b0);
    uVar8 = *(undefined8 *)(lVar14 + 0x288);
    *(ulong *)(uVar17 + 0x10) = uVar13 + 1;
    *(long *)(uVar17 + uVar13 * 8 + 0x20) = lVar10;
    func_0x000107c615e8(uVar8);
    func_0x000107c61170(uVar19);
    func_0x000107c6142c(uVar15);
  }
  uVar16 = *(ulong *)(lVar14 + 0x290);
  if (uVar16 == *(ulong *)(lVar14 + 0x268)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar14 + 8))(uVar21);
      return;
    }
  }
  else {
    *(ulong *)(lVar14 + 0x280) = uVar21;
    uVar13 = *(ulong *)(lVar14 + 0x250);
    if ((uVar13 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar13 = *(ulong *)(uVar13 + uVar16 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar13 = uVar16;
      FUN_10274d138();
    }
    *(ulong *)(lVar14 + 0x288) = uVar13;
    *(ulong *)(lVar14 + 0x290) = uVar16 + 1;
    if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(lVar14 + 0x298) = uVar13;
    plVar9 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(lVar14 + 0x2a0) = plVar9;
    *plVar9 = lVar14;
    plVar9[1] = (long)FUN_102749c40;
    lVar10 = *(long *)(lVar14 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      plVar9[0x18] = uVar13;
      plVar9[0x19] = lVar10;
      plVar9[0x17] = lVar14 + 0x40;
      pcVar2 = FUN_10274bdc8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
      return;
    }
  }
LAB_10274b338:
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(lVar14 + 0x280);
  func_0x000107c615e8(*(undefined8 *)(lVar14 + 0x288));
  func_0x000107c6142c(uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    func_0x000107c60e78();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar14 + 8))();
  return;
}



/* Entry: 10274a908; end: 10274a9b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274a908(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x20;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x22;
  long lVar17;
  undefined8 uVar18;
  ulong *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *unaff_x22;
  puVar3 = *(undefined8 **)(lVar9 + 0x338);
  lVar17 = *unaff_x22;
  func_0x000107c615c0();
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      pcVar2 = FUN_10274aaec;
      goto LAB_107c615e0;
    }
  }
  else {
    *(undefined8 *)(lVar9 + 0x340) = *(undefined8 *)(lVar9 + 0x248);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      pcVar2 = FUN_10274a9b4;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar26 = *(undefined8 *)(lVar17 + 0x340);
  uVar10 = *(undefined8 *)(lVar17 + 0x330);
  uVar14 = *(undefined8 *)(lVar17 + 0x328);
  uVar18 = *(undefined8 *)(lVar17 + 800);
  uVar21 = *(undefined8 *)(lVar17 + 0x310);
  uVar23 = *(undefined8 *)(lVar17 + 0x300);
  uVar25 = *(undefined8 *)(lVar17 + 0x2b8);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,puVar3,0,0);
  *puVar3 = uVar26;
  func_0x000107c6142c(uVar25);
  func_0x00010006c090(uVar14,uVar10);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar18);
  func_0x000107c615e8(uVar21);
  func_0x0001000834e4(lVar17 + 0x208);
  uVar10 = *(undefined8 *)(lVar17 + 0x2e0);
  puVar24 = *(undefined **)(lVar17 + 0x2b8);
  uVar14 = *(undefined8 *)(lVar17 + 0x2b0);
  uVar18 = *(undefined8 *)(lVar17 + 0x288);
  uVar21 = *(undefined8 *)(lVar17 + 0x280);
  func_0x000107c61170(*(undefined8 *)(lVar17 + 0x2f0));
  func_0x000107c615e8(uVar18);
  func_0x000107c6142c(uVar21);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar24 != (undefined *)0x0) {
    puVar4 = puVar24;
  }
  func_0x000107c6142c(puVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c6142c(uVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar17 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = *(undefined8 *)(lVar17 + 0x330);
  uVar14 = *(undefined8 *)(lVar17 + 0x328);
  uVar21 = *(undefined8 *)(lVar17 + 800);
  uVar23 = *(undefined8 *)(lVar17 + 0x310);
  uVar25 = *(undefined8 *)(lVar17 + 0x300);
  func_0x0001000834e4(lVar17 + 0x208);
  puVar4 = PTR_PTR_1126bcf68;
  func_0x000107c610f8();
  uVar10 = uVar14;
  func_0x000107c5ee20(uVar14,uVar18);
  func_0x000107c45ae0();
  func_0x000107c61170(uVar10);
  func_0x00010006c090(uVar14,uVar18);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar21);
  func_0x000107c615e8(uVar23);
  plVar11 = (long *)(lVar17 + 0xa0);
  *plVar11 = (long)puVar4;
  func_0x000100fb8694(lVar17 + 0x1e0,lVar17 + 0xa8);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*plVar11 == 0) goto LAB_10274b260;
  plVar12 = (long *)(lVar17 + 0x70);
  uVar15 = *(ulong *)(lVar17 + 0x2e0);
  *(undefined8 *)(lVar17 + 0x78) = *(undefined8 *)(lVar17 + 0xa8);
  *plVar12 = *plVar11;
  *(undefined8 *)(lVar17 + 0x88) = *(undefined8 *)(lVar17 + 0xb8);
  *(undefined8 *)(lVar17 + 0x80) = *(undefined8 *)(lVar17 + 0xb0);
  *(undefined8 *)(lVar17 + 0x98) = *(undefined8 *)(lVar17 + 200);
  *(undefined8 *)(lVar17 + 0x90) = *(undefined8 *)(lVar17 + 0xc0);
  if (uVar15 == 0) {
    uVar15 = *(ulong *)(lVar17 + 0x2b8);
    if (uVar15 != 0) {
      func_0x000107c61434(uVar15);
      goto LAB_10274abe8;
    }
  }
  else {
LAB_10274abe8:
    FUN_10274dd08(plVar12,lVar17 + 0xd0);
    uVar10 = *(undefined8 *)(lVar17 + 0xd0);
    uVar13 = uVar15;
    func_0x000107c61550();
    if ((uVar15 >> 0x3e != 0) || ((uVar13 & 1) == 0)) {
      FUN_10274d478();
    }
    if (*(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(lVar17 + 0x2e8)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
      (*pcVar2)();
    }
    lVar9 = (uVar15 & 0xffffffffffffff8) + *(ulong *)(lVar17 + 0x2e8) * 8;
    uVar14 = *(undefined8 *)(lVar9 + 0x20);
    *(undefined8 *)(lVar9 + 0x20) = uVar10;
    func_0x000107c61170(uVar14);
    func_0x0001000834e4(lVar17 + 0xd8);
  }
  puVar19 = *(ulong **)(lVar17 + 600);
  FUN_10274dd08(plVar12,lVar17 + 0x100);
  func_0x000107c61170(*(undefined8 *)(lVar17 + 0x100));
  uVar20 = *puVar19;
  uVar13 = uVar20;
  func_0x000107c61558();
  uVar6 = uVar20;
  if ((uVar13 & 1) == 0) {
    uVar6 = 0;
    func_0x000100fb5010(0,*(long *)(uVar20 + 0x10) + 1,1,uVar20);
  }
  uVar13 = *(ulong *)(uVar6 + 0x10);
  uVar20 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar13) {
    uVar20 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x000100fb5010(uVar20,uVar13 + 1,1,uVar6);
  }
  uVar10 = *(undefined8 *)(lVar17 + 0x2f0);
  puVar19 = *(ulong **)(lVar17 + 600);
  *(ulong *)(uVar20 + 0x10) = uVar13 + 1;
  func_0x000100fb8694(lVar17 + 0x108,uVar20 + uVar13 * 0x28 + 0x20);
  func_0x000107c61170(uVar10);
  func_0x00010274dd58(plVar12,0x112ebbe18,&UNK_10dad4f68);
  *puVar19 = uVar20;
  uVar13 = *(ulong *)(lVar17 + 0x2f8);
  *(ulong *)(lVar17 + 0x2e0) = uVar15;
  if (uVar13 != *(ulong *)(lVar17 + 0x2c8)) {
    while( true ) {
      *(ulong *)(lVar17 + 0x2e8) = uVar13;
      puVar24 = puVar4;
      if (*(undefined **)(lVar17 + 0x2b8) != (undefined *)0x0) {
        puVar24 = *(undefined **)(lVar17 + 0x2b8);
      }
      if (((ulong)puVar24 & 0xc000000000000001) == 0) {
        if (*(ulong *)(*(long *)(lVar17 + 0x2c0) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
          (*pcVar2)();
        }
        uVar15 = *(ulong *)(puVar24 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar15 = uVar13;
        func_0x000101016c54();
      }
      *(ulong *)(lVar17 + 0x2f0) = uVar15;
      *(ulong *)(lVar17 + 0x2f8) = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
        (*pcVar2)();
      }
      func_0x000107c3eea8();
      func_0x000107c61180();
      uVar13 = uVar15;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar15);
      puVar7 = PTR_PTR_1126b25c0;
      func_0x000107c610f8();
      uVar15 = uVar13;
      func_0x000107c5ee20(uVar13,puVar24);
      *(undefined8 *)(lVar17 + 0x240) = 0;
      func_0x000107c4636c();
      *(undefined **)(lVar17 + 0x300) = puVar7;
      func_0x000107c61170(uVar15);
      uVar10 = *(undefined8 *)(lVar17 + 0x240);
      if (puVar7 == (undefined *)0x0) {
        uVar14 = uVar10;
        func_0x000107c61174();
        func_0x000107c5ed30(uVar10);
        func_0x000107c61170(uVar14);
        func_0x000107c61654();
        func_0x000107c614ac(uVar10);
        func_0x00010006c090(uVar13,puVar24);
      }
      else {
        func_0x000107c61174();
        func_0x00010006c090(uVar13,puVar24);
        func_0x000100083b20(lVar17 + 400);
        uVar10 = *(undefined8 *)(lVar17 + 0x1a8);
        lVar9 = *(long *)(lVar17 + 0x1b0);
        func_0x0001000a8868(lVar17 + 400,uVar10);
        puVar24 = puVar7;
        (**(code **)(lVar9 + 8))(puVar7,uVar10,lVar9);
        func_0x0001000834e4(lVar17 + 400);
        if (((ulong)puVar24 & 1) != 0) {
          func_0x000100083b20(lVar17 + 0x1b8);
          uVar10 = *(undefined8 *)(lVar17 + 0x1d0);
          lVar9 = *(long *)(lVar17 + 0x1d8);
          func_0x0001000a8868(lVar17 + 0x1b8,uVar10);
          piVar22 = *(int **)(lVar9 + 0x18);
          iVar1 = *piVar22;
          plVar11 = (long *)(ulong)(uint)piVar22[1];
          func_0x000107c615b8();
          *(long **)(lVar17 + 0x308) = plVar11;
          *plVar11 = lVar17;
          plVar11[1] = (long)FUN_10274a568;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar22))(puVar7,uVar10,lVar9);
            return;
          }
          goto LAB_10274b338;
        }
        func_0x000107c61170(puVar7);
      }
      *(undefined8 *)(lVar17 + 0xb8) = 0;
      *(undefined8 *)(lVar17 + 0xb0) = 0;
      *(undefined8 *)(lVar17 + 200) = 0;
      *(undefined8 *)(lVar17 + 0xc0) = 0;
      *(undefined8 *)(lVar17 + 0xa8) = 0;
      *plVar11 = 0;
LAB_10274b260:
      lVar9 = *(long *)(lVar17 + 0x2f8);
      lVar5 = *(long *)(lVar17 + 0x2c8);
      func_0x000107c61170(*(undefined8 *)(lVar17 + 0x2f0));
      func_0x00010274dd58(plVar11,0x112ebbe10,&UNK_10dad4f60);
      if (lVar9 == lVar5) break;
      uVar13 = *(ulong *)(lVar17 + 0x2f8);
    }
  }
  lVar9 = *(long *)(lVar17 + 0x2b0);
  if (*(undefined **)(lVar17 + 0x2b8) != (undefined *)0x0) {
    puVar4 = *(undefined **)(lVar17 + 0x2b8);
  }
  func_0x000107c6142c(puVar4);
  lVar5 = *(long *)(lVar17 + 0x2e0);
  if (lVar9 == 0) {
    if (lVar5 != 0) {
      uVar14 = *(undefined8 *)(lVar17 + 0x288);
      func_0x000107c4e090();
      func_0x000107c61180();
      uVar10 = 0;
      lVar5 = *(long *)(lVar17 + 0x2e0);
      goto LAB_10274ad78;
    }
    uVar10 = *(undefined8 *)(lVar17 + 0x288);
    uVar6 = *(ulong *)(lVar17 + 0x280);
    func_0x000107c6142c(*(undefined8 *)(lVar17 + 0x2b8));
    func_0x000107c615f0(uVar10);
    uVar15 = uVar6;
    func_0x000107c61550();
    uVar13 = *(ulong *)(lVar17 + 0x280);
    if ((((int)uVar15 == 0) || ((uVar6 >> 0x3e & 1) != 0)) || ((long)uVar13 < 0)) {
      if (uVar13 >> 0x3e == 0) {
        uVar15 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar15 = uVar6 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar15 = uVar13;
        }
        func_0x000107c60480(uVar15);
        uVar13 = *(ulong *)(lVar17 + 0x280);
      }
      uVar6 = 0;
      FUN_102738e9c(0,uVar15 + 1,1,uVar13);
      uVar13 = uVar6;
    }
    uVar6 = uVar6 & 0xffffffffffffff8;
    uVar15 = *(ulong *)(uVar6 + 0x10);
    uVar20 = uVar13;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar15) {
      uVar20 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_102738e9c(uVar20,uVar15 + 1,1,uVar13);
      uVar6 = uVar20 & 0xffffffffffffff8;
    }
    uVar10 = *(undefined8 *)(lVar17 + 0x288);
    *(ulong *)(uVar6 + 0x10) = uVar15 + 1;
    *(undefined8 *)(uVar6 + uVar15 * 8 + 0x20) = uVar10;
    func_0x000107c615e8();
  }
  else {
    uVar14 = *(undefined8 *)(lVar17 + 0x2b0);
    uVar10 = uVar14;
    if (lVar5 == 0) {
      func_0x000107c61174();
      puVar3 = (undefined8 *)(lVar17 + 0x2b8);
    }
    else {
LAB_10274ad78:
      puVar3 = (undefined8 *)(lVar17 + 0x2e0);
      uVar18 = *(undefined8 *)(lVar17 + 0x2b8);
      func_0x000107c61434(lVar5);
      func_0x000107c61174(uVar10);
      func_0x000107c6142c(uVar18);
    }
    uVar10 = *puVar3;
    uVar15 = *(ulong *)(lVar17 + 0x288);
    func_0x000107c61150(uVar15,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130);
    if ((uVar15 & 1) == 0) {
LAB_10274ae04:
      uVar13 = 0;
    }
    else {
      uVar15 = *(ulong *)(lVar17 + 0x288);
      func_0x000107c44a00();
      func_0x000107c61180();
      if (uVar15 == 0) goto LAB_10274ae04;
      uVar18 = 0;
      FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar13 = uVar15;
      func_0x000107c5fc54(uVar15,uVar18);
      func_0x000107c61170();
    }
    uVar16 = *(ulong *)(lVar17 + 0x280);
    FUN_10274ce90();
    uVar6 = uVar15;
    func_0x000107c610f8();
    lVar9 = _DAT_112ebbdc8;
    *(undefined8 *)(uVar6 + _DAT_112ebbdc8) = 0;
    lVar5 = _DAT_112ebbdd0;
    *(undefined8 *)(uVar6 + _DAT_112ebbdd0) = 0;
    *(undefined8 *)(uVar6 + _DAT_112ebbdc0) = uVar14;
    *(undefined8 *)(uVar6 + lVar9) = uVar10;
    *(ulong *)(uVar6 + lVar5) = uVar13;
    *(ulong *)(lVar17 + 0x230) = uVar6;
    *(ulong *)(lVar17 + 0x238) = uVar15;
    lVar9 = lVar17 + 0x230;
    func_0x000107c61154(lVar9,PTR_s_init_1125d9248);
    uVar15 = uVar16;
    func_0x000107c61550();
    uVar13 = *(ulong *)(lVar17 + 0x280);
    if ((((int)uVar15 == 0) || ((uVar16 >> 0x3e & 1) != 0)) || (uVar15 = uVar13, (long)uVar13 < 0))
    {
      if (uVar13 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar16 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar6 = uVar13;
        }
        func_0x000107c60480(uVar6);
        uVar13 = *(ulong *)(lVar17 + 0x280);
      }
      uVar15 = 0;
      FUN_102738e9c(0,uVar6 + 1,1,uVar13);
      uVar16 = uVar15;
    }
    uVar16 = uVar16 & 0xffffffffffffff8;
    uVar13 = *(ulong *)(uVar16 + 0x10);
    uVar20 = uVar15;
    if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar13) {
      uVar20 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
      FUN_102738e9c(uVar20,uVar13 + 1,1,uVar15);
      uVar16 = uVar20 & 0xffffffffffffff8;
    }
    uVar14 = *(undefined8 *)(lVar17 + 0x2e0);
    uVar18 = *(undefined8 *)(lVar17 + 0x2b0);
    uVar10 = *(undefined8 *)(lVar17 + 0x288);
    *(ulong *)(uVar16 + 0x10) = uVar13 + 1;
    *(long *)(uVar16 + uVar13 * 8 + 0x20) = lVar9;
    func_0x000107c615e8(uVar10);
    func_0x000107c61170(uVar18);
    func_0x000107c6142c(uVar14);
  }
  uVar15 = *(ulong *)(lVar17 + 0x290);
  if (uVar15 == *(ulong *)(lVar17 + 0x268)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar17 + 8))(uVar20);
      return;
    }
  }
  else {
    *(ulong *)(lVar17 + 0x280) = uVar20;
    uVar13 = *(ulong *)(lVar17 + 0x250);
    if ((uVar13 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar13 = *(ulong *)(uVar13 + uVar15 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar13 = uVar15;
      FUN_10274d138();
    }
    *(ulong *)(lVar17 + 0x288) = uVar13;
    *(ulong *)(lVar17 + 0x290) = uVar15 + 1;
    if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(lVar17 + 0x298) = uVar13;
    plVar11 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(lVar17 + 0x2a0) = plVar11;
    *plVar11 = lVar17;
    plVar11[1] = (long)FUN_102749c40;
    lVar9 = *(long *)(lVar17 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      plVar11[0x18] = uVar13;
      plVar11[0x19] = lVar9;
      plVar11[0x17] = lVar17 + 0x40;
      pcVar2 = FUN_10274bdc8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
      return;
    }
  }
LAB_10274b338:
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined8 *)(lVar17 + 0x280);
  func_0x000107c615e8(*(undefined8 *)(lVar17 + 0x288));
  func_0x000107c6142c(uVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    func_0x000107c60e78();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar17 + 8))();
  return;
}



/* Entry: 10274a9b4; end: 10274aaeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274a9b4(undefined8 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x22;
  undefined8 uVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  int *piVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar25 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar16 = *(undefined8 *)(unaff_x22 + 800);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2b8);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar25;
  func_0x000107c6142c(uVar24);
  func_0x00010006c090(uVar13,uVar8);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar16);
  func_0x000107c615e8(uVar20);
  func_0x0001000834e4(unaff_x22 + 0x208);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2e0);
  puVar23 = *(undefined **)(unaff_x22 + 0x2b8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x280);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x2f0));
  func_0x000107c615e8(uVar16);
  func_0x000107c6142c(uVar20);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar23 != (undefined *)0x0) {
    puVar3 = puVar23;
  }
  func_0x000107c6142c(puVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c6142c(uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar20 = *(undefined8 *)(unaff_x22 + 800);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x300);
  func_0x0001000834e4(unaff_x22 + 0x208);
  puVar3 = PTR_PTR_1126bcf68;
  func_0x000107c610f8();
  uVar8 = uVar13;
  func_0x000107c5ee20(uVar13,uVar16);
  func_0x000107c45ae0();
  func_0x000107c61170(uVar8);
  func_0x00010006c090(uVar13,uVar16);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar20);
  func_0x000107c615e8(uVar22);
  plVar9 = (long *)(unaff_x22 + 0xa0);
  *plVar9 = (long)puVar3;
  func_0x000100fb8694(unaff_x22 + 0x1e0,unaff_x22 + 0xa8);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*plVar9 == 0) goto LAB_10274b260;
  plVar10 = (long *)(unaff_x22 + 0x70);
  uVar14 = *(ulong *)(unaff_x22 + 0x2e0);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xa8);
  *plVar10 = *plVar9;
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xc0);
  if (uVar14 == 0) {
    uVar14 = *(ulong *)(unaff_x22 + 0x2b8);
    if (uVar14 != 0) {
      func_0x000107c61434(uVar14);
      goto LAB_10274abe8;
    }
  }
  else {
LAB_10274abe8:
    FUN_10274dd08(plVar10,unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar11 = uVar14;
    func_0x000107c61550();
    if ((uVar14 >> 0x3e != 0) || ((uVar11 & 1) == 0)) {
      FUN_10274d478();
    }
    if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(unaff_x22 + 0x2e8)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
      (*pcVar2)();
    }
    lVar12 = (uVar14 & 0xffffffffffffff8) + *(ulong *)(unaff_x22 + 0x2e8) * 8;
    uVar13 = *(undefined8 *)(lVar12 + 0x20);
    *(undefined8 *)(lVar12 + 0x20) = uVar8;
    func_0x000107c61170(uVar13);
    func_0x0001000834e4(unaff_x22 + 0xd8);
  }
  puVar17 = *(ulong **)(unaff_x22 + 600);
  FUN_10274dd08(plVar10,unaff_x22 + 0x100);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x100));
  uVar18 = *puVar17;
  uVar11 = uVar18;
  func_0x000107c61558();
  uVar5 = uVar18;
  if ((uVar11 & 1) == 0) {
    uVar5 = 0;
    func_0x000100fb5010(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18);
  }
  uVar11 = *(ulong *)(uVar5 + 0x10);
  uVar18 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar11) {
    uVar18 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x000100fb5010(uVar18,uVar11 + 1,1,uVar5);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2f0);
  puVar17 = *(ulong **)(unaff_x22 + 600);
  *(ulong *)(uVar18 + 0x10) = uVar11 + 1;
  func_0x000100fb8694(unaff_x22 + 0x108,uVar18 + uVar11 * 0x28 + 0x20);
  func_0x000107c61170(uVar8);
  func_0x00010274dd58(plVar10,0x112ebbe18,&UNK_10dad4f68);
  *puVar17 = uVar18;
  uVar11 = *(ulong *)(unaff_x22 + 0x2f8);
  *(ulong *)(unaff_x22 + 0x2e0) = uVar14;
  if (uVar11 != *(ulong *)(unaff_x22 + 0x2c8)) {
    while( true ) {
      *(ulong *)(unaff_x22 + 0x2e8) = uVar11;
      puVar23 = puVar3;
      if (*(undefined **)(unaff_x22 + 0x2b8) != (undefined *)0x0) {
        puVar23 = *(undefined **)(unaff_x22 + 0x2b8);
      }
      if (((ulong)puVar23 & 0xc000000000000001) == 0) {
        if (*(ulong *)(*(long *)(unaff_x22 + 0x2c0) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
          (*pcVar2)();
        }
        uVar14 = *(ulong *)(puVar23 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar14 = uVar11;
        func_0x000101016c54();
      }
      *(ulong *)(unaff_x22 + 0x2f0) = uVar14;
      *(ulong *)(unaff_x22 + 0x2f8) = uVar11 + 1;
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
        (*pcVar2)();
      }
      func_0x000107c3eea8();
      func_0x000107c61180();
      uVar11 = uVar14;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar14);
      puVar6 = PTR_PTR_1126b25c0;
      func_0x000107c610f8();
      uVar14 = uVar11;
      func_0x000107c5ee20(uVar11,puVar23);
      *(undefined8 *)(unaff_x22 + 0x240) = 0;
      func_0x000107c4636c();
      *(undefined **)(unaff_x22 + 0x300) = puVar6;
      func_0x000107c61170(uVar14);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x240);
      if (puVar6 == (undefined *)0x0) {
        uVar13 = uVar8;
        func_0x000107c61174();
        func_0x000107c5ed30(uVar8);
        func_0x000107c61170(uVar13);
        func_0x000107c61654();
        func_0x000107c614ac(uVar8);
        func_0x00010006c090(uVar11,puVar23);
      }
      else {
        func_0x000107c61174();
        func_0x00010006c090(uVar11,puVar23);
        func_0x000100083b20(unaff_x22 + 400);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
        lVar12 = *(long *)(unaff_x22 + 0x1b0);
        func_0x0001000a8868(unaff_x22 + 400,uVar8);
        puVar23 = puVar6;
        (**(code **)(lVar12 + 8))(puVar6,uVar8,lVar12);
        func_0x0001000834e4(unaff_x22 + 400);
        if (((ulong)puVar23 & 1) != 0) {
          func_0x000100083b20(unaff_x22 + 0x1b8);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
          lVar12 = *(long *)(unaff_x22 + 0x1d8);
          func_0x0001000a8868(unaff_x22 + 0x1b8,uVar8);
          piVar21 = *(int **)(lVar12 + 0x18);
          iVar1 = *piVar21;
          plVar9 = (long *)(ulong)(uint)piVar21[1];
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x308) = plVar9;
          *plVar9 = unaff_x22;
          plVar9[1] = (long)FUN_10274a568;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar21))(puVar6,uVar8,lVar12);
            return;
          }
          goto LAB_10274b338;
        }
        func_0x000107c61170(puVar6);
      }
      *(undefined8 *)(unaff_x22 + 0xb8) = 0;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0;
      *(undefined8 *)(unaff_x22 + 200) = 0;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0;
      *plVar9 = 0;
LAB_10274b260:
      lVar12 = *(long *)(unaff_x22 + 0x2f8);
      lVar4 = *(long *)(unaff_x22 + 0x2c8);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x2f0));
      func_0x00010274dd58(plVar9,0x112ebbe10,&UNK_10dad4f60);
      if (lVar12 == lVar4) break;
      uVar11 = *(ulong *)(unaff_x22 + 0x2f8);
    }
  }
  lVar12 = *(long *)(unaff_x22 + 0x2b0);
  if (*(undefined **)(unaff_x22 + 0x2b8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(unaff_x22 + 0x2b8);
  }
  func_0x000107c6142c(puVar3);
  lVar4 = *(long *)(unaff_x22 + 0x2e0);
  if (lVar12 == 0) {
    if (lVar4 == 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x288);
      uVar5 = *(ulong *)(unaff_x22 + 0x280);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2b8));
      func_0x000107c615f0(uVar8);
      uVar14 = uVar5;
      func_0x000107c61550();
      uVar11 = *(ulong *)(unaff_x22 + 0x280);
      if ((((int)uVar14 == 0) || ((uVar5 >> 0x3e & 1) != 0)) || ((long)uVar11 < 0)) {
        if (uVar11 >> 0x3e == 0) {
          uVar14 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar14 = uVar5 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar11) {
            uVar14 = uVar11;
          }
          func_0x000107c60480(uVar14);
          uVar11 = *(ulong *)(unaff_x22 + 0x280);
        }
        uVar5 = 0;
        FUN_102738e9c(0,uVar14 + 1,1,uVar11);
        uVar11 = uVar5;
      }
      uVar5 = uVar5 & 0xffffffffffffff8;
      uVar14 = *(ulong *)(uVar5 + 0x10);
      uVar18 = uVar11;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar14) {
        uVar18 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_102738e9c(uVar18,uVar14 + 1,1,uVar11);
        uVar5 = uVar18 & 0xffffffffffffff8;
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x288);
      *(ulong *)(uVar5 + 0x10) = uVar14 + 1;
      *(undefined8 *)(uVar5 + uVar14 * 8 + 0x20) = uVar8;
      func_0x000107c615e8();
      goto LAB_10274aee4;
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x288);
    func_0x000107c4e090();
    func_0x000107c61180();
    uVar8 = 0;
    lVar4 = *(long *)(unaff_x22 + 0x2e0);
LAB_10274ad78:
    puVar19 = (undefined8 *)(unaff_x22 + 0x2e0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2b8);
    func_0x000107c61434(lVar4);
    func_0x000107c61174(uVar8);
    func_0x000107c6142c(uVar16);
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar8 = uVar13;
    if (lVar4 != 0) goto LAB_10274ad78;
    func_0x000107c61174();
    puVar19 = (undefined8 *)(unaff_x22 + 0x2b8);
  }
  uVar8 = *puVar19;
  uVar14 = *(ulong *)(unaff_x22 + 0x288);
  func_0x000107c61150(uVar14,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130);
  if ((uVar14 & 1) == 0) {
LAB_10274ae04:
    uVar11 = 0;
  }
  else {
    uVar14 = *(ulong *)(unaff_x22 + 0x288);
    func_0x000107c44a00();
    func_0x000107c61180();
    if (uVar14 == 0) goto LAB_10274ae04;
    uVar16 = 0;
    FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar11 = uVar14;
    func_0x000107c5fc54(uVar14,uVar16);
    func_0x000107c61170();
  }
  uVar15 = *(ulong *)(unaff_x22 + 0x280);
  FUN_10274ce90();
  uVar5 = uVar14;
  func_0x000107c610f8();
  lVar12 = _DAT_112ebbdc8;
  *(undefined8 *)(uVar5 + _DAT_112ebbdc8) = 0;
  lVar4 = _DAT_112ebbdd0;
  *(undefined8 *)(uVar5 + _DAT_112ebbdd0) = 0;
  *(undefined8 *)(uVar5 + _DAT_112ebbdc0) = uVar13;
  *(undefined8 *)(uVar5 + lVar12) = uVar8;
  *(ulong *)(uVar5 + lVar4) = uVar11;
  *(ulong *)(unaff_x22 + 0x230) = uVar5;
  *(ulong *)(unaff_x22 + 0x238) = uVar14;
  lVar12 = unaff_x22 + 0x230;
  func_0x000107c61154(lVar12,PTR_s_init_1125d9248);
  uVar14 = uVar15;
  func_0x000107c61550();
  uVar11 = *(ulong *)(unaff_x22 + 0x280);
  if ((((int)uVar14 == 0) || ((uVar15 >> 0x3e & 1) != 0)) || (uVar14 = uVar11, (long)uVar11 < 0)) {
    if (uVar11 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar15 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar11) {
        uVar5 = uVar11;
      }
      func_0x000107c60480(uVar5);
      uVar11 = *(ulong *)(unaff_x22 + 0x280);
    }
    uVar14 = 0;
    FUN_102738e9c(0,uVar5 + 1,1,uVar11);
    uVar15 = uVar14;
  }
  uVar15 = uVar15 & 0xffffffffffffff8;
  uVar11 = *(ulong *)(uVar15 + 0x10);
  uVar18 = uVar14;
  if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar11) {
    uVar18 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
    FUN_102738e9c(uVar18,uVar11 + 1,1,uVar14);
    uVar15 = uVar18 & 0xffffffffffffff8;
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x288);
  *(ulong *)(uVar15 + 0x10) = uVar11 + 1;
  *(long *)(uVar15 + uVar11 * 8 + 0x20) = lVar12;
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c6142c(uVar13);
LAB_10274aee4:
  uVar14 = *(ulong *)(unaff_x22 + 0x290);
  if (uVar14 == *(ulong *)(unaff_x22 + 0x268)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar18);
      return;
    }
  }
  else {
    *(ulong *)(unaff_x22 + 0x280) = uVar18;
    uVar11 = *(ulong *)(unaff_x22 + 0x250);
    if ((uVar11 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar11 = *(ulong *)(uVar11 + uVar14 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar11 = uVar14;
      FUN_10274d138();
    }
    *(ulong *)(unaff_x22 + 0x288) = uVar11;
    *(ulong *)(unaff_x22 + 0x290) = uVar14 + 1;
    if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(unaff_x22 + 0x298) = uVar11;
    plVar9 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x2a0) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_102749c40;
    lVar12 = *(long *)(unaff_x22 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      plVar9[0x18] = uVar11;
      plVar9[0x19] = lVar12;
      plVar9[0x17] = unaff_x22 + 0x40;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10274bdc8,0,0);
      return;
    }
  }
LAB_10274b338:
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x280);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x288));
  func_0x000107c6142c(uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    func_0x000107c60e78();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274aaec; end: 10274b33b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274aaec(void)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  int *piVar24;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar15 = *(undefined8 *)(unaff_x22 + 800);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x300);
  func_0x0001000834e4(unaff_x22 + 0x208);
  puVar3 = PTR_PTR_1126bcf68;
  func_0x000107c610f8();
  uVar19 = uVar9;
  func_0x000107c5ee20(uVar9,uVar11);
  func_0x000107c45ae0();
  func_0x000107c61170(uVar19);
  func_0x00010006c090(uVar9,uVar11);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar15);
  func_0x000107c615e8(uVar18);
  plVar10 = (long *)(unaff_x22 + 0xa0);
  *plVar10 = (long)puVar3;
  func_0x000100fb8694(unaff_x22 + 0x1e0,unaff_x22 + 0xa8);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*plVar10 == 0) goto LAB_10274b260;
  plVar12 = (long *)(unaff_x22 + 0x70);
  uVar16 = *(ulong *)(unaff_x22 + 0x2e0);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xa8);
  *plVar12 = *plVar10;
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xc0);
  if (uVar16 == 0) {
    uVar16 = *(ulong *)(unaff_x22 + 0x2b8);
    if (uVar16 != 0) {
      func_0x000107c61434(uVar16);
      goto LAB_10274abe8;
    }
  }
  else {
LAB_10274abe8:
    FUN_10274dd08(plVar12,unaff_x22 + 0xd0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar13 = uVar16;
    func_0x000107c61550();
    if ((uVar16 >> 0x3e != 0) || ((uVar13 & 1) == 0)) {
      FUN_10274d478();
    }
    if (*(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(unaff_x22 + 0x2e8)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
      (*pcVar2)();
    }
    lVar14 = (uVar16 & 0xffffffffffffff8) + *(ulong *)(unaff_x22 + 0x2e8) * 8;
    uVar9 = *(undefined8 *)(lVar14 + 0x20);
    *(undefined8 *)(lVar14 + 0x20) = uVar19;
    func_0x000107c61170(uVar9);
    func_0x0001000834e4(unaff_x22 + 0xd8);
  }
  puVar20 = *(ulong **)(unaff_x22 + 600);
  FUN_10274dd08(plVar12,unaff_x22 + 0x100);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x100));
  uVar21 = *puVar20;
  uVar13 = uVar21;
  func_0x000107c61558();
  uVar5 = uVar21;
  if ((uVar13 & 1) == 0) {
    uVar5 = 0;
    func_0x000100fb5010(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
  }
  uVar13 = *(ulong *)(uVar5 + 0x10);
  uVar21 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar13) {
    uVar21 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    func_0x000100fb5010(uVar21,uVar13 + 1,1,uVar5);
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0x2f0);
  puVar20 = *(ulong **)(unaff_x22 + 600);
  *(ulong *)(uVar21 + 0x10) = uVar13 + 1;
  func_0x000100fb8694(unaff_x22 + 0x108,uVar21 + uVar13 * 0x28 + 0x20);
  func_0x000107c61170(uVar19);
  func_0x00010274dd58(plVar12,0x112ebbe18,&UNK_10dad4f68);
  *puVar20 = uVar21;
  uVar13 = *(ulong *)(unaff_x22 + 0x2f8);
  *(ulong *)(unaff_x22 + 0x2e0) = uVar16;
  if (uVar13 != *(ulong *)(unaff_x22 + 0x2c8)) {
    while( true ) {
      *(ulong *)(unaff_x22 + 0x2e8) = uVar13;
      puVar7 = puVar3;
      if (*(undefined **)(unaff_x22 + 0x2b8) != (undefined *)0x0) {
        puVar7 = *(undefined **)(unaff_x22 + 0x2b8);
      }
      if (((ulong)puVar7 & 0xc000000000000001) == 0) {
        if (*(ulong *)(*(long *)(unaff_x22 + 0x2c0) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
          (*pcVar2)();
        }
        uVar16 = *(ulong *)(puVar7 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar16 = uVar13;
        func_0x000101016c54();
      }
      *(ulong *)(unaff_x22 + 0x2f0) = uVar16;
      *(ulong *)(unaff_x22 + 0x2f8) = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
        (*pcVar2)();
      }
      func_0x000107c3eea8();
      func_0x000107c61180();
      uVar13 = uVar16;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar16);
      puVar6 = PTR_PTR_1126b25c0;
      func_0x000107c610f8();
      uVar16 = uVar13;
      func_0x000107c5ee20(uVar13,puVar7);
      *(undefined8 *)(unaff_x22 + 0x240) = 0;
      func_0x000107c4636c();
      *(undefined **)(unaff_x22 + 0x300) = puVar6;
      func_0x000107c61170(uVar16);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x240);
      if (puVar6 == (undefined *)0x0) {
        uVar9 = uVar19;
        func_0x000107c61174();
        func_0x000107c5ed30(uVar19);
        func_0x000107c61170(uVar9);
        func_0x000107c61654();
        func_0x000107c614ac(uVar19);
        func_0x00010006c090(uVar13,puVar7);
      }
      else {
        func_0x000107c61174();
        func_0x00010006c090(uVar13,puVar7);
        func_0x000100083b20(unaff_x22 + 400);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x1a8);
        lVar14 = *(long *)(unaff_x22 + 0x1b0);
        func_0x0001000a8868(unaff_x22 + 400,uVar19);
        puVar7 = puVar6;
        (**(code **)(lVar14 + 8))(puVar6,uVar19,lVar14);
        func_0x0001000834e4(unaff_x22 + 400);
        if (((ulong)puVar7 & 1) != 0) {
          func_0x000100083b20(unaff_x22 + 0x1b8);
          uVar19 = *(undefined8 *)(unaff_x22 + 0x1d0);
          lVar14 = *(long *)(unaff_x22 + 0x1d8);
          func_0x0001000a8868(unaff_x22 + 0x1b8,uVar19);
          piVar24 = *(int **)(lVar14 + 0x18);
          iVar1 = *piVar24;
          plVar10 = (long *)(ulong)(uint)piVar24[1];
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x308) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_10274a568;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar24))(puVar6,uVar19,lVar14);
            return;
          }
          goto LAB_10274b338;
        }
        func_0x000107c61170(puVar6);
      }
      *(undefined8 *)(unaff_x22 + 0xb8) = 0;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0;
      *(undefined8 *)(unaff_x22 + 200) = 0;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0;
      *plVar10 = 0;
LAB_10274b260:
      lVar14 = *(long *)(unaff_x22 + 0x2f8);
      lVar4 = *(long *)(unaff_x22 + 0x2c8);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x2f0));
      func_0x00010274dd58(plVar10,0x112ebbe10,&UNK_10dad4f60);
      if (lVar14 == lVar4) break;
      uVar13 = *(ulong *)(unaff_x22 + 0x2f8);
    }
  }
  lVar14 = *(long *)(unaff_x22 + 0x2b0);
  if (*(undefined **)(unaff_x22 + 0x2b8) != (undefined *)0x0) {
    puVar3 = *(undefined **)(unaff_x22 + 0x2b8);
  }
  func_0x000107c6142c(puVar3);
  lVar4 = *(long *)(unaff_x22 + 0x2e0);
  if (lVar14 == 0) {
    if (lVar4 == 0) {
      uVar19 = *(undefined8 *)(unaff_x22 + 0x288);
      uVar5 = *(ulong *)(unaff_x22 + 0x280);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2b8));
      func_0x000107c615f0(uVar19);
      uVar16 = uVar5;
      func_0x000107c61550();
      uVar13 = *(ulong *)(unaff_x22 + 0x280);
      if ((((int)uVar16 == 0) || ((uVar5 >> 0x3e & 1) != 0)) || ((long)uVar13 < 0)) {
        if (uVar13 >> 0x3e == 0) {
          uVar16 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar16 = uVar5 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar13) {
            uVar16 = uVar13;
          }
          func_0x000107c60480(uVar16);
          uVar13 = *(ulong *)(unaff_x22 + 0x280);
        }
        uVar5 = 0;
        FUN_102738e9c(0,uVar16 + 1,1,uVar13);
        uVar13 = uVar5;
      }
      uVar5 = uVar5 & 0xffffffffffffff8;
      uVar16 = *(ulong *)(uVar5 + 0x10);
      uVar21 = uVar13;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar16) {
        uVar21 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_102738e9c(uVar21,uVar16 + 1,1,uVar13);
        uVar5 = uVar21 & 0xffffffffffffff8;
      }
      uVar19 = *(undefined8 *)(unaff_x22 + 0x288);
      *(ulong *)(uVar5 + 0x10) = uVar16 + 1;
      *(undefined8 *)(uVar5 + uVar16 * 8 + 0x20) = uVar19;
      func_0x000107c615e8();
      goto LAB_10274aee4;
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x288);
    func_0x000107c4e090();
    func_0x000107c61180();
    uVar19 = 0;
    lVar4 = *(long *)(unaff_x22 + 0x2e0);
LAB_10274ad78:
    puVar22 = (undefined8 *)(unaff_x22 + 0x2e0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x2b8);
    func_0x000107c61434(lVar4);
    func_0x000107c61174(uVar19);
    func_0x000107c6142c(uVar11);
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar19 = uVar9;
    if (lVar4 != 0) goto LAB_10274ad78;
    func_0x000107c61174();
    puVar22 = (undefined8 *)(unaff_x22 + 0x2b8);
  }
  uVar19 = *puVar22;
  uVar16 = *(ulong *)(unaff_x22 + 0x288);
  func_0x000107c61150(uVar16,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130);
  if ((uVar16 & 1) == 0) {
LAB_10274ae04:
    uVar13 = 0;
  }
  else {
    uVar16 = *(ulong *)(unaff_x22 + 0x288);
    func_0x000107c44a00();
    func_0x000107c61180();
    if (uVar16 == 0) goto LAB_10274ae04;
    uVar11 = 0;
    FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar13 = uVar16;
    func_0x000107c5fc54(uVar16,uVar11);
    func_0x000107c61170();
  }
  uVar17 = *(ulong *)(unaff_x22 + 0x280);
  FUN_10274ce90();
  uVar5 = uVar16;
  func_0x000107c610f8();
  lVar14 = _DAT_112ebbdc8;
  *(undefined8 *)(uVar5 + _DAT_112ebbdc8) = 0;
  lVar4 = _DAT_112ebbdd0;
  *(undefined8 *)(uVar5 + _DAT_112ebbdd0) = 0;
  *(undefined8 *)(uVar5 + _DAT_112ebbdc0) = uVar9;
  *(undefined8 *)(uVar5 + lVar14) = uVar19;
  *(ulong *)(uVar5 + lVar4) = uVar13;
  *(ulong *)(unaff_x22 + 0x230) = uVar5;
  *(ulong *)(unaff_x22 + 0x238) = uVar16;
  lVar14 = unaff_x22 + 0x230;
  func_0x000107c61154(lVar14,PTR_s_init_1125d9248);
  uVar16 = uVar17;
  func_0x000107c61550();
  uVar13 = *(ulong *)(unaff_x22 + 0x280);
  if ((((int)uVar16 == 0) || ((uVar17 >> 0x3e & 1) != 0)) || (uVar16 = uVar13, (long)uVar13 < 0)) {
    if (uVar13 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar17 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar13) {
        uVar5 = uVar13;
      }
      func_0x000107c60480(uVar5);
      uVar13 = *(ulong *)(unaff_x22 + 0x280);
    }
    uVar16 = 0;
    FUN_102738e9c(0,uVar5 + 1,1,uVar13);
    uVar17 = uVar16;
  }
  uVar17 = uVar17 & 0xffffffffffffff8;
  uVar13 = *(ulong *)(uVar17 + 0x10);
  uVar21 = uVar16;
  if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar13) {
    uVar21 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
    FUN_102738e9c(uVar21,uVar13 + 1,1,uVar16);
    uVar17 = uVar21 & 0xffffffffffffff8;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x288);
  *(ulong *)(uVar17 + 0x10) = uVar13 + 1;
  *(long *)(uVar17 + uVar13 * 8 + 0x20) = lVar14;
  func_0x000107c615e8(uVar19);
  func_0x000107c61170(uVar11);
  func_0x000107c6142c(uVar9);
LAB_10274aee4:
  uVar16 = *(ulong *)(unaff_x22 + 0x290);
  if (uVar16 == *(ulong *)(unaff_x22 + 0x268)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar21);
      return;
    }
  }
  else {
    *(ulong *)(unaff_x22 + 0x280) = uVar21;
    uVar13 = *(ulong *)(unaff_x22 + 0x250);
    if ((uVar13 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar13 = *(ulong *)(uVar13 + uVar16 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar13 = uVar16;
      FUN_10274d138();
    }
    *(ulong *)(unaff_x22 + 0x288) = uVar13;
    *(ulong *)(unaff_x22 + 0x290) = uVar16 + 1;
    if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(unaff_x22 + 0x298) = uVar13;
    plVar10 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x2a0) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_102749c40;
    lVar14 = *(long *)(unaff_x22 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      plVar10[0x18] = uVar13;
      plVar10[0x19] = lVar14;
      plVar10[0x17] = unaff_x22 + 0x40;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_10274bdc8,0,0);
      return;
    }
  }
LAB_10274b338:
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = *(undefined8 *)(unaff_x22 + 0x280);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x288));
  func_0x000107c6142c(uVar19);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    func_0x000107c60e78();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274b33c; end: 10274b3a7;  */

void FUN_10274b33c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x288));
  func_0x000107c6142c(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  return;
}



/* Entry: 10274b3a8; end: 10274b3ab;  */

void FUN_10274b3a8(void)

{
  return;
}



/* Entry: 10274b3ac; end: 10274b45b; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementation47MemTwoLandingPageSnapDocSendServiceProviderImpl sendWithSnapDocBundles:sendParameters:snapDocSendHandler:] */

void FUN_10274b3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ebb4f0;
  func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10274932c(param_3,param_4,param_5);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10274b45c; end: 10274b477;  */

void FUN_10274b45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274b478,0,0);
  return;
}



/* Entry: 10274b478; end: 10274b583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274b478(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar6 = *(long *)(unaff_x22 + 0x10);
  uVar1 = *(ulong *)(lVar6 + _DAT_112ff76b8);
  func_0x000107c61174();
  func_0x000107c61170(lVar6);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 == 0) {
    bVar5 = true;
  }
  else {
    uVar1 = uVar2;
    func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_preloadSendToWithSnapDocBundles__11261fcc0);
    bVar5 = (uVar1 & 1) == 0;
    if (!bVar5) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar3 = 0x112ebb4f0;
      func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
      func_0x000107c5fc48(uVar4,uVar3);
      func_0x000107c4eda8(uVar2);
      func_0x000107c61170(uVar4);
    }
    func_0x000107c615e8(uVar2);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x18) = bVar5;
                    /* WARNING: Could not recover jumptable at 0x00010274b580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274b584; end: 10274b68f; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementation47MemTwoLandingPageSnapDocSendServiceProviderImpl preloadSendToWithSnapDocBundles:sendParameters:] */

void FUN_10274b584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = 0x112ebb4f0;
  func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
  func_0x000107c5fc54(param_3,uVar1);
  puVar2 = &UNK_110543748;
  func_0x000107c613fc(&UNK_110543748,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  func_0x000107c615f4(param_4,2);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_3);
  uVar1 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar3 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10dad4ee8,puVar2,uVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_3);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10274b690; end: 10274b713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274b690(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  code *UNRECOVERED_JUMPTABLE;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  long *plVar16;
  undefined1 *puVar17;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
  ulong uVar23;
  long unaff_x22;
  long *plVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  int *piVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  *(undefined8 *)(unaff_x22 + 200) = param_8;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_9;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(long **)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = puVar5;
  plVar10 = (long *)0x350;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_10274b714;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10[0x4c] = (long)param_2;
  plVar10[0x4b] = unaff_x22 + 0x88;
  plVar10[0x4a] = param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    pcVar2 = FUN_102749ad8;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = plVar10[0x4a];
  if (uVar13 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar3 = uVar13;
    }
    func_0x000107c60480();
  }
  plVar10[0x4d] = uVar3;
  plVar10[0x4e] = _DAT_112ebbd78;
  plVar10[0x4f] = _DAT_112ebbd88;
  if (uVar3 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x000102749c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar10[1])(PTR___swiftEmptyArrayStorage_11034f1c8);
      return;
    }
LAB_102749c3c:
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = *plVar10;
    plVar10 = (long *)*plVar10;
    *(long **)(lVar14 + 0x2a8) = param_2;
    func_0x000107c615c0(*(undefined8 *)(lVar14 + 0x2a0));
    func_0x000107c61170(*(undefined8 *)(lVar14 + 0x298));
    if (param_2 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_102749cf0;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      pcVar2 = FUN_10274b33c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar11 = plVar10 + 8;
    if (*plVar11 == 0) {
      func_0x00010274dd58(plVar11,0x112ebbe10,&UNK_10dad4f60);
      lVar14 = 0;
    }
    else {
      plVar4 = plVar10 + 2;
      puVar18 = (ulong *)plVar10[0x4b];
      plVar10[3] = plVar10[9];
      *plVar4 = *plVar11;
      plVar10[5] = plVar10[0xb];
      plVar10[4] = plVar10[10];
      plVar10[7] = plVar10[0xd];
      plVar10[6] = plVar10[0xc];
      FUN_10274dd08(plVar4,plVar10 + 0x26);
      lVar14 = plVar10[0x26];
      func_0x0001000834e4(plVar10 + 0x27);
      FUN_10274dd08(plVar4,plVar10 + 0x2c);
      func_0x000107c61170(plVar10[0x2c]);
      uVar19 = *puVar18;
      uVar13 = uVar19;
      func_0x000107c61558();
      uVar3 = uVar19;
      if ((uVar13 & 1) == 0) {
        uVar3 = 0;
        func_0x000100fb5010(0,*(long *)(uVar19 + 0x10) + 1,1,uVar19);
      }
      uVar13 = *(ulong *)(uVar3 + 0x10);
      uVar19 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar13) {
        uVar19 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        func_0x000100fb5010(uVar19,uVar13 + 1,1,uVar3);
      }
      puVar18 = (ulong *)plVar10[0x4b];
      *(ulong *)(uVar19 + 0x10) = uVar13 + 1;
      func_0x000100fb8694(plVar10 + 0x2d,uVar19 + uVar13 * 0x28 + 0x20);
      func_0x00010274dd58(plVar4,0x112ebbe18,&UNK_10dad4f68);
      *puVar18 = uVar19;
    }
    plVar10[0x56] = lVar14;
    uVar13 = plVar10[0x51];
    func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,PTR_s_multisnap_112612448);
    if ((uVar13 & 1) == 0) {
LAB_102749e74:
      puVar32 = (undefined *)0x0;
      plVar10[0x57] = 0;
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar5 = (undefined *)plVar10[0x51];
      func_0x000107c4d1e0();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) goto LAB_102749e74;
      uVar6 = 0;
      FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
      puVar32 = puVar5;
      func_0x000107c5fc54(puVar5,uVar6);
      func_0x000107c61170(puVar5);
      plVar10[0x57] = (long)puVar32;
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar32 != (undefined *)0x0) {
        puVar5 = puVar32;
      }
    }
    if ((ulong)puVar5 >> 0x3e == 0) {
      puVar15 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar15 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar5) {
        puVar15 = puVar5;
      }
      func_0x000107c60480();
    }
    plVar10[0x59] = (long)puVar15;
    plVar10[0x58] = (ulong)puVar5 & 0xffffffffffffff8;
    plVar10[0x5a] = *(long *)(plVar10[0x4c] + plVar10[0x4e]);
    plVar10[0x5b] = *(long *)(plVar10[0x4c] + plVar10[0x4f]);
    plVar10[0x5c] = 0;
    func_0x000107c61434(puVar32);
    if (puVar15 != (undefined *)0x0) {
      uVar13 = 0;
      while( true ) {
        plVar10[0x5d] = uVar13;
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((undefined *)plVar10[0x57] != (undefined *)0x0) {
          puVar5 = (undefined *)plVar10[0x57];
        }
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(plVar10[0x58] + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a474);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(puVar5 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar13;
          func_0x000101016c54();
        }
        plVar10[0x5e] = uVar3;
        plVar10[0x5f] = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a470);
          (*pcVar2)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar13 = uVar3;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar3);
        puVar32 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar3 = uVar13;
        func_0x000107c5ee20(uVar13,puVar5);
        plVar10[0x48] = 0;
        func_0x000107c4636c();
        plVar10[0x60] = (long)puVar32;
        func_0x000107c61170(uVar3);
        lVar14 = plVar10[0x48];
        if (puVar32 == (undefined *)0x0) {
          lVar31 = lVar14;
          func_0x000107c61174();
          func_0x000107c5ed30(lVar14);
          func_0x000107c61170(lVar31);
          func_0x000107c61654();
          func_0x000107c614ac(lVar14);
          func_0x00010006c090(uVar13,puVar5);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar13,puVar5);
          func_0x000100083b20(plVar10 + 0x32);
          lVar14 = plVar10[0x35];
          lVar31 = plVar10[0x36];
          func_0x0001000a8868(plVar10 + 0x32,lVar14);
          puVar5 = puVar32;
          (**(code **)(lVar31 + 8))(puVar32,lVar14,lVar31);
          func_0x0001000834e4(plVar10 + 0x32);
          if (((ulong)puVar5 & 1) != 0) {
            func_0x000100083b20(plVar10 + 0x37);
            pcVar2 = (code *)plVar10[0x3a];
            lVar14 = plVar10[0x3b];
            param_2 = plVar10 + 0x37;
            UNRECOVERED_JUMPTABLE = pcVar2;
            func_0x0001000a8868();
            piVar28 = *(int **)(lVar14 + 0x18);
            iVar1 = *piVar28;
            plVar4 = (long *)(ulong)(uint)piVar28[1];
            func_0x000107c615b8();
            plVar10[0x61] = (long)plVar4;
            *plVar4 = (long)plVar10;
            plVar4[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar28))(puVar32,pcVar2,lVar14);
              return;
            }
            goto LAB_10274a564;
          }
          func_0x000107c61170(puVar32);
        }
        plVar10[0x17] = 0;
        plVar10[0x16] = 0;
        plVar10[0x19] = 0;
        plVar10[0x18] = 0;
        plVar10[0x15] = 0;
        plVar10[0x14] = 0;
        lVar14 = plVar10[0x5f];
        lVar31 = plVar10[0x59];
        func_0x000107c61170(plVar10[0x5e]);
        func_0x00010274dd58(plVar10 + 0x14,0x112ebbe10,&UNK_10dad4f60);
        if (lVar14 == lVar31) break;
        uVar13 = plVar10[0x5f];
      }
    }
    lVar14 = plVar10[0x56];
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((undefined *)plVar10[0x57] != (undefined *)0x0) {
      puVar5 = (undefined *)plVar10[0x57];
    }
    func_0x000107c6142c(puVar5);
    lVar31 = plVar10[0x5c];
    if (lVar14 == 0) {
      if (lVar31 != 0) {
        lVar20 = plVar10[0x51];
        func_0x000107c4e090();
        func_0x000107c61180();
        lVar14 = 0;
        lVar31 = plVar10[0x5c];
        goto LAB_10274a0e0;
      }
      lVar14 = plVar10[0x51];
      plVar21 = (long *)plVar10[0x50];
      func_0x000107c6142c(plVar10[0x57]);
      func_0x000107c615f0(lVar14);
      plVar4 = plVar21;
      func_0x000107c61550();
      plVar24 = (long *)plVar10[0x50];
      if ((((int)plVar4 == 0) || (((ulong)plVar21 >> 0x3e & 1) != 0)) ||
         (plVar4 = plVar24, (long)plVar24 < 0)) {
        if ((ulong)plVar24 >> 0x3e == 0) {
          plVar21 = *(long **)(((ulong)plVar21 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar21 = (long *)((ulong)plVar21 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar24) {
            plVar21 = plVar24;
          }
          func_0x000107c60480(plVar21);
          plVar24 = (long *)plVar10[0x50];
        }
        plVar4 = (long *)0x0;
        FUN_102738e9c(0,(long)plVar21 + 1,1,plVar24);
        plVar21 = plVar4;
      }
      uVar3 = (ulong)plVar21 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar3 + 0x10);
      param_2 = plVar4;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar13) {
        param_2 = (long *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_102738e9c(param_2,uVar13 + 1,1,plVar4);
        uVar3 = (ulong)param_2 & 0xffffffffffffff8;
      }
      plVar4 = (long *)plVar10[0x51];
      *(ulong *)(uVar3 + 0x10) = uVar13 + 1;
      *(long **)(uVar3 + uVar13 * 8 + 0x20) = plVar4;
      func_0x000107c615e8();
    }
    else {
      lVar20 = plVar10[0x56];
      lVar14 = lVar20;
      if (lVar31 == 0) {
        func_0x000107c61174();
        plVar4 = plVar10 + 0x57;
      }
      else {
LAB_10274a0e0:
        plVar4 = plVar10 + 0x5c;
        lVar25 = plVar10[0x57];
        func_0x000107c61434(lVar31);
        func_0x000107c61174(lVar14);
        func_0x000107c6142c(lVar25);
      }
      lVar14 = *plVar4;
      uVar13 = plVar10[0x51];
      func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130
                         );
      if ((uVar13 & 1) == 0) {
LAB_10274a16c:
        uVar3 = 0;
      }
      else {
        uVar13 = plVar10[0x51];
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar13 == 0) goto LAB_10274a16c;
        uVar6 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar3 = uVar13;
        func_0x000107c5fc54(uVar13,uVar6);
        func_0x000107c61170();
      }
      plVar24 = (long *)plVar10[0x50];
      FUN_10274ce90();
      uVar19 = uVar13;
      func_0x000107c610f8();
      lVar31 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar19 + _DAT_112ebbdc8) = 0;
      lVar25 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar19 + _DAT_112ebbdd0) = 0;
      *(long *)(uVar19 + _DAT_112ebbdc0) = lVar20;
      *(long *)(uVar19 + lVar31) = lVar14;
      *(ulong *)(uVar19 + lVar25) = uVar3;
      plVar10[0x46] = uVar19;
      plVar10[0x47] = uVar13;
      plVar21 = plVar10 + 0x46;
      func_0x000107c61154(plVar21,PTR_s_init_1125d9248);
      plVar4 = plVar24;
      func_0x000107c61550();
      plVar16 = (long *)plVar10[0x50];
      if ((((int)plVar4 == 0) || (((ulong)plVar24 >> 0x3e & 1) != 0)) ||
         (plVar4 = plVar16, (long)plVar16 < 0)) {
        if ((ulong)plVar16 >> 0x3e == 0) {
          plVar24 = *(long **)(((ulong)plVar24 & 0xffffffffffffff8) + 0x10);
        }
        else {
          plVar24 = (long *)((ulong)plVar24 & 0xffffffffffffff8);
          if ((long *)0x7fffffffffffffff < plVar16) {
            plVar24 = plVar16;
          }
          func_0x000107c60480(plVar24);
          plVar16 = (long *)plVar10[0x50];
        }
        plVar4 = (long *)0x0;
        FUN_102738e9c(0,(long)plVar24 + 1,1,plVar16);
        plVar24 = plVar4;
      }
      uVar3 = (ulong)plVar24 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar3 + 0x10);
      param_2 = plVar4;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar13) {
        param_2 = (long *)(ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_102738e9c(param_2,uVar13 + 1,1,plVar4);
        uVar3 = (ulong)param_2 & 0xffffffffffffff8;
      }
      plVar4 = (long *)plVar10[0x5c];
      lVar31 = plVar10[0x56];
      lVar14 = plVar10[0x51];
      *(ulong *)(uVar3 + 0x10) = uVar13 + 1;
      *(long **)(uVar3 + uVar13 * 8 + 0x20) = plVar21;
      func_0x000107c615e8(lVar14);
      func_0x000107c61170(lVar31);
      func_0x000107c6142c();
    }
    uVar3 = plVar10[0x52];
    if (uVar3 == plVar10[0x4d]) {
      UNRECOVERED_JUMPTABLE = (code *)plVar10[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_2);
        return;
      }
    }
    else {
      plVar10[0x50] = (long)param_2;
      UNRECOVERED_JUMPTABLE = (code *)plVar10[0x4a];
      if (((ulong)UNRECOVERED_JUMPTABLE & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)UNRECOVERED_JUMPTABLE & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a510);
          (*pcVar2)();
        }
        uVar13 = *(ulong *)(UNRECOVERED_JUMPTABLE + uVar3 * 8 + 0x20);
        func_0x000107c615f0();
      }
      else {
        uVar13 = uVar3;
        FUN_10274d138();
      }
      plVar10[0x51] = uVar13;
      plVar10[0x52] = uVar3 + 1;
      if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274a50c);
        (*pcVar2)();
      }
      func_0x000107c4e090();
      func_0x000107c61180();
      plVar10[0x53] = uVar13;
      plVar4 = (long *)0x120;
      func_0x000107c615b8();
      plVar10[0x54] = (long)plVar4;
      *plVar4 = (long)plVar10;
      plVar4[1] = (long)FUN_102749c40;
      param_2 = (long *)plVar10[0x4c];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) goto FUN_10274bdac;
    }
LAB_10274a564:
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = *plVar10;
    plVar10 = (long *)*plVar10;
    *(long **)(lVar14 + 0x310) = plVar4;
    *(long **)(lVar14 + 0x318) = param_2;
    func_0x000107c615c0(*(undefined8 *)(lVar14 + 0x308));
    if (param_2 == (long *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_10274a610;
        goto LAB_107c615e0;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
      pcVar2 = FUN_10274a82c;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar17 = (undefined1 *)plVar10[0x62];
    func_0x0001000834e4(plVar10 + 0x37);
    func_0x000107c5b198();
    func_0x000107c61180();
    plVar10[100] = (long)puVar17;
    puVar7 = puVar17;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar7 == (undefined1 *)0x0) {
      lVar14 = plVar10[0x62];
      lVar31 = plVar10[0x60];
      lVar20 = plVar10[0x57];
      FUN_10274dbb4();
      func_0x000107c613f8(&UNK_110543998,puVar7,0,0);
      *puVar7 = 1;
      func_0x000107c61654();
      func_0x000107c6142c(lVar20);
      func_0x000107c61170(puVar17);
      func_0x000107c615e8(lVar14);
      func_0x000107c61170(lVar31);
      lVar14 = plVar10[0x5c];
      puVar32 = (undefined *)plVar10[0x57];
      lVar31 = plVar10[0x56];
      lVar20 = plVar10[0x51];
      lVar25 = plVar10[0x50];
      func_0x000107c61170(plVar10[0x5e]);
      func_0x000107c615e8(lVar20);
      func_0x000107c6142c(lVar25);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar32 != (undefined *)0x0) {
        puVar5 = puVar32;
      }
      func_0x000107c6142c(puVar5);
      func_0x000107c61170(lVar31);
      func_0x000107c6142c(lVar14);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar10[1])();
        return;
      }
    }
    else {
      puVar8 = puVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar7);
      plVar10[0x65] = (long)puVar8;
      plVar10[0x66] = (long)UNRECOVERED_JUMPTABLE;
      func_0x000100083b20(plVar10 + 0x41);
      lVar14 = plVar10[0x44];
      lVar31 = plVar10[0x45];
      func_0x0001000a8868(plVar10 + 0x41,lVar14);
      piVar28 = *(int **)(lVar31 + 0x20);
      iVar1 = *piVar28;
      puVar9 = (undefined8 *)(ulong)(uint)piVar28[1];
      func_0x000107c615b8();
      plVar10[0x67] = (long)puVar9;
      *puVar9 = plVar10;
      puVar9[1] = FUN_10274a908;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar28))
                  (puVar9,plVar10 + 0x3c,puVar17,"processedSnapDoc(from:)",0x17,0x9000000000000002,
                   0x10d,plVar10 + 0x49,lVar14);
        return;
      }
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = plVar10[0x57];
    func_0x000107c61170(plVar10[0x60]);
    func_0x000107c6142c(lVar14);
    func_0x0001000834e4(plVar10 + 0x37);
    lVar31 = plVar10[99];
    lVar14 = plVar10[0x5c];
    puVar32 = (undefined *)plVar10[0x57];
    lVar20 = plVar10[0x56];
    lVar25 = plVar10[0x51];
    lVar29 = plVar10[0x50];
    func_0x000107c61170(plVar10[0x5e]);
    func_0x000107c615e8(lVar25);
    func_0x000107c6142c(lVar29);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar32 != (undefined *)0x0) {
      puVar5 = puVar32;
    }
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(lVar20);
    func_0x000107c6142c(lVar14);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar10[1])();
      return;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar14 = *plVar10;
    puVar9 = *(undefined8 **)(lVar14 + 0x338);
    lVar20 = *plVar10;
    func_0x000107c615c0();
    if (lVar31 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_10274aaec;
        goto LAB_107c615e0;
      }
    }
    else {
      *(undefined8 *)(lVar14 + 0x340) = *(undefined8 *)(lVar14 + 0x248);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        pcVar2 = FUN_10274a9b4;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar35 = *(undefined8 *)(lVar20 + 0x340);
    uVar6 = *(undefined8 *)(lVar20 + 0x330);
    uVar22 = *(undefined8 *)(lVar20 + 0x328);
    uVar26 = *(undefined8 *)(lVar20 + 800);
    uVar30 = *(undefined8 *)(lVar20 + 0x310);
    uVar33 = *(undefined8 *)(lVar20 + 0x300);
    uVar34 = *(undefined8 *)(lVar20 + 0x2b8);
    func_0x000100fb85f0();
    func_0x000107c613f8(&UNK_11072cd20,puVar9,0,0);
    *puVar9 = uVar35;
    func_0x000107c6142c(uVar34);
    func_0x00010006c090(uVar22,uVar6);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(uVar26);
    func_0x000107c615e8(uVar30);
    func_0x0001000834e4(lVar20 + 0x208);
    uVar6 = *(undefined8 *)(lVar20 + 0x2e0);
    puVar32 = *(undefined **)(lVar20 + 0x2b8);
    uVar22 = *(undefined8 *)(lVar20 + 0x2b0);
    uVar26 = *(undefined8 *)(lVar20 + 0x288);
    uVar30 = *(undefined8 *)(lVar20 + 0x280);
    func_0x000107c61170(*(undefined8 *)(lVar20 + 0x2f0));
    func_0x000107c615e8(uVar26);
    func_0x000107c6142c(uVar30);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar32 != (undefined *)0x0) {
      puVar5 = puVar32;
    }
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(uVar22);
    func_0x000107c6142c(uVar6);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274aae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar20 + 8))();
      return;
    }
    func_0x000107c60e78();
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar26 = *(undefined8 *)(lVar20 + 0x330);
    uVar22 = *(undefined8 *)(lVar20 + 0x328);
    uVar30 = *(undefined8 *)(lVar20 + 800);
    uVar33 = *(undefined8 *)(lVar20 + 0x310);
    uVar34 = *(undefined8 *)(lVar20 + 0x300);
    func_0x0001000834e4(lVar20 + 0x208);
    puVar5 = PTR_PTR_1126bcf68;
    func_0x000107c610f8();
    uVar6 = uVar22;
    func_0x000107c5ee20(uVar22,uVar26);
    func_0x000107c45ae0();
    func_0x000107c61170(uVar6);
    func_0x00010006c090(uVar22,uVar26);
    func_0x000107c61170(uVar34);
    func_0x000107c61170(uVar30);
    func_0x000107c615e8(uVar33);
    plVar10 = (long *)(lVar20 + 0xa0);
    *plVar10 = (long)puVar5;
    func_0x000100fb8694(lVar20 + 0x1e0,lVar20 + 0xa8);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (*plVar10 == 0) goto LAB_10274b260;
    plVar4 = (long *)(lVar20 + 0x70);
    uVar13 = *(ulong *)(lVar20 + 0x2e0);
    *(undefined8 *)(lVar20 + 0x78) = *(undefined8 *)(lVar20 + 0xa8);
    *plVar4 = *plVar10;
    *(undefined8 *)(lVar20 + 0x88) = *(undefined8 *)(lVar20 + 0xb8);
    *(undefined8 *)(lVar20 + 0x80) = *(undefined8 *)(lVar20 + 0xb0);
    *(undefined8 *)(lVar20 + 0x98) = *(undefined8 *)(lVar20 + 200);
    *(undefined8 *)(lVar20 + 0x90) = *(undefined8 *)(lVar20 + 0xc0);
    if (uVar13 == 0) {
      uVar13 = *(ulong *)(lVar20 + 0x2b8);
      if (uVar13 != 0) {
        func_0x000107c61434(uVar13);
        goto LAB_10274abe8;
      }
    }
    else {
LAB_10274abe8:
      FUN_10274dd08(plVar4,lVar20 + 0xd0);
      uVar6 = *(undefined8 *)(lVar20 + 0xd0);
      uVar3 = uVar13;
      func_0x000107c61550();
      if ((uVar13 >> 0x3e != 0) || ((uVar3 & 1) == 0)) {
        FUN_10274d478();
      }
      if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= *(ulong *)(lVar20 + 0x2e8)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274ad1c);
        (*pcVar2)();
      }
      lVar14 = (uVar13 & 0xffffffffffffff8) + *(ulong *)(lVar20 + 0x2e8) * 8;
      uVar22 = *(undefined8 *)(lVar14 + 0x20);
      *(undefined8 *)(lVar14 + 0x20) = uVar6;
      func_0x000107c61170(uVar22);
      func_0x0001000834e4(lVar20 + 0xd8);
    }
    puVar18 = *(ulong **)(lVar20 + 600);
    FUN_10274dd08(plVar4,lVar20 + 0x100);
    func_0x000107c61170(*(undefined8 *)(lVar20 + 0x100));
    uVar27 = *puVar18;
    uVar3 = uVar27;
    func_0x000107c61558();
    uVar19 = uVar27;
    if ((uVar3 & 1) == 0) {
      uVar19 = 0;
      func_0x000100fb5010(0,*(long *)(uVar27 + 0x10) + 1,1,uVar27);
    }
    uVar3 = *(ulong *)(uVar19 + 0x10);
    uVar27 = uVar19;
    if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar3) {
      uVar27 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
      func_0x000100fb5010(uVar27,uVar3 + 1,1,uVar19);
    }
    uVar6 = *(undefined8 *)(lVar20 + 0x2f0);
    puVar18 = *(ulong **)(lVar20 + 600);
    *(ulong *)(uVar27 + 0x10) = uVar3 + 1;
    func_0x000100fb8694(lVar20 + 0x108,uVar27 + uVar3 * 0x28 + 0x20);
    func_0x000107c61170(uVar6);
    func_0x00010274dd58(plVar4,0x112ebbe18,&UNK_10dad4f68);
    *puVar18 = uVar27;
    uVar3 = *(ulong *)(lVar20 + 0x2f8);
    *(ulong *)(lVar20 + 0x2e0) = uVar13;
    if (uVar3 != *(ulong *)(lVar20 + 0x2c8)) {
      while( true ) {
        *(ulong *)(lVar20 + 0x2e8) = uVar3;
        puVar32 = puVar5;
        if (*(undefined **)(lVar20 + 0x2b8) != (undefined *)0x0) {
          puVar32 = *(undefined **)(lVar20 + 0x2b8);
        }
        if (((ulong)puVar32 & 0xc000000000000001) == 0) {
          if (*(ulong *)(*(long *)(lVar20 + 0x2c0) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b338);
            (*pcVar2)();
          }
          uVar13 = *(ulong *)(puVar32 + uVar3 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar13 = uVar3;
          func_0x000101016c54();
        }
        *(ulong *)(lVar20 + 0x2f0) = uVar13;
        *(ulong *)(lVar20 + 0x2f8) = uVar3 + 1;
        if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b334);
          (*pcVar2)();
        }
        func_0x000107c3eea8();
        func_0x000107c61180();
        uVar3 = uVar13;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar13);
        puVar15 = PTR_PTR_1126b25c0;
        func_0x000107c610f8();
        uVar13 = uVar3;
        func_0x000107c5ee20(uVar3,puVar32);
        *(undefined8 *)(lVar20 + 0x240) = 0;
        func_0x000107c4636c();
        *(undefined **)(lVar20 + 0x300) = puVar15;
        func_0x000107c61170(uVar13);
        uVar6 = *(undefined8 *)(lVar20 + 0x240);
        if (puVar15 == (undefined *)0x0) {
          uVar22 = uVar6;
          func_0x000107c61174();
          func_0x000107c5ed30(uVar6);
          func_0x000107c61170(uVar22);
          func_0x000107c61654();
          func_0x000107c614ac(uVar6);
          func_0x00010006c090(uVar3,puVar32);
        }
        else {
          func_0x000107c61174();
          func_0x00010006c090(uVar3,puVar32);
          func_0x000100083b20(lVar20 + 400);
          uVar6 = *(undefined8 *)(lVar20 + 0x1a8);
          lVar14 = *(long *)(lVar20 + 0x1b0);
          func_0x0001000a8868(lVar20 + 400,uVar6);
          puVar32 = puVar15;
          (**(code **)(lVar14 + 8))(puVar15,uVar6,lVar14);
          func_0x0001000834e4(lVar20 + 400);
          if (((ulong)puVar32 & 1) != 0) {
            func_0x000100083b20(lVar20 + 0x1b8);
            uVar6 = *(undefined8 *)(lVar20 + 0x1d0);
            lVar14 = *(long *)(lVar20 + 0x1d8);
            func_0x0001000a8868(lVar20 + 0x1b8,uVar6);
            piVar28 = *(int **)(lVar14 + 0x18);
            iVar1 = *piVar28;
            plVar10 = (long *)(ulong)(uint)piVar28[1];
            func_0x000107c615b8();
            *(long **)(lVar20 + 0x308) = plVar10;
            *plVar10 = lVar20;
            plVar10[1] = (long)FUN_10274a568;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar1 + (long)piVar28))(puVar15,uVar6,lVar14);
              return;
            }
            goto LAB_10274b338;
          }
          func_0x000107c61170(puVar15);
        }
        *(undefined8 *)(lVar20 + 0xb8) = 0;
        *(undefined8 *)(lVar20 + 0xb0) = 0;
        *(undefined8 *)(lVar20 + 200) = 0;
        *(undefined8 *)(lVar20 + 0xc0) = 0;
        *(undefined8 *)(lVar20 + 0xa8) = 0;
        *plVar10 = 0;
LAB_10274b260:
        lVar14 = *(long *)(lVar20 + 0x2f8);
        lVar31 = *(long *)(lVar20 + 0x2c8);
        func_0x000107c61170(*(undefined8 *)(lVar20 + 0x2f0));
        func_0x00010274dd58(plVar10,0x112ebbe10,&UNK_10dad4f60);
        if (lVar14 == lVar31) break;
        uVar3 = *(ulong *)(lVar20 + 0x2f8);
      }
    }
    lVar14 = *(long *)(lVar20 + 0x2b0);
    if (*(undefined **)(lVar20 + 0x2b8) != (undefined *)0x0) {
      puVar5 = *(undefined **)(lVar20 + 0x2b8);
    }
    func_0x000107c6142c(puVar5);
    lVar31 = *(long *)(lVar20 + 0x2e0);
    if (lVar14 == 0) {
      if (lVar31 != 0) {
        uVar22 = *(undefined8 *)(lVar20 + 0x288);
        func_0x000107c4e090();
        func_0x000107c61180();
        uVar6 = 0;
        lVar31 = *(long *)(lVar20 + 0x2e0);
        goto LAB_10274ad78;
      }
      uVar6 = *(undefined8 *)(lVar20 + 0x288);
      uVar19 = *(ulong *)(lVar20 + 0x280);
      func_0x000107c6142c(*(undefined8 *)(lVar20 + 0x2b8));
      func_0x000107c615f0(uVar6);
      uVar13 = uVar19;
      func_0x000107c61550();
      uVar3 = *(ulong *)(lVar20 + 0x280);
      if ((((int)uVar13 == 0) || ((uVar19 >> 0x3e & 1) != 0)) || ((long)uVar3 < 0)) {
        if (uVar3 >> 0x3e == 0) {
          uVar13 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar13 = uVar19 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar3) {
            uVar13 = uVar3;
          }
          func_0x000107c60480(uVar13);
          uVar3 = *(ulong *)(lVar20 + 0x280);
        }
        uVar19 = 0;
        FUN_102738e9c(0,uVar13 + 1,1,uVar3);
        uVar3 = uVar19;
      }
      uVar19 = uVar19 & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar19 + 0x10);
      uVar27 = uVar3;
      if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar13) {
        uVar27 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
        FUN_102738e9c(uVar27,uVar13 + 1,1,uVar3);
        uVar19 = uVar27 & 0xffffffffffffff8;
      }
      uVar6 = *(undefined8 *)(lVar20 + 0x288);
      *(ulong *)(uVar19 + 0x10) = uVar13 + 1;
      *(undefined8 *)(uVar19 + uVar13 * 8 + 0x20) = uVar6;
      func_0x000107c615e8();
    }
    else {
      uVar22 = *(undefined8 *)(lVar20 + 0x2b0);
      uVar6 = uVar22;
      if (lVar31 == 0) {
        func_0x000107c61174();
        puVar9 = (undefined8 *)(lVar20 + 0x2b8);
      }
      else {
LAB_10274ad78:
        puVar9 = (undefined8 *)(lVar20 + 0x2e0);
        uVar26 = *(undefined8 *)(lVar20 + 0x2b8);
        func_0x000107c61434(lVar31);
        func_0x000107c61174(uVar6);
        func_0x000107c6142c(uVar26);
      }
      uVar6 = *puVar9;
      uVar13 = *(ulong *)(lVar20 + 0x288);
      func_0x000107c61150(uVar13,PTR_s_respondsToSelector__11262c7e0,PTR_s_hasOverlayImage_1125d4130
                         );
      if ((uVar13 & 1) == 0) {
LAB_10274ae04:
        uVar3 = 0;
      }
      else {
        uVar13 = *(ulong *)(lVar20 + 0x288);
        func_0x000107c44a00();
        func_0x000107c61180();
        if (uVar13 == 0) goto LAB_10274ae04;
        uVar26 = 0;
        FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar3 = uVar13;
        func_0x000107c5fc54(uVar13,uVar26);
        func_0x000107c61170();
      }
      uVar23 = *(ulong *)(lVar20 + 0x280);
      FUN_10274ce90();
      uVar19 = uVar13;
      func_0x000107c610f8();
      lVar14 = _DAT_112ebbdc8;
      *(undefined8 *)(uVar19 + _DAT_112ebbdc8) = 0;
      lVar31 = _DAT_112ebbdd0;
      *(undefined8 *)(uVar19 + _DAT_112ebbdd0) = 0;
      *(undefined8 *)(uVar19 + _DAT_112ebbdc0) = uVar22;
      *(undefined8 *)(uVar19 + lVar14) = uVar6;
      *(ulong *)(uVar19 + lVar31) = uVar3;
      *(ulong *)(lVar20 + 0x230) = uVar19;
      *(ulong *)(lVar20 + 0x238) = uVar13;
      lVar14 = lVar20 + 0x230;
      func_0x000107c61154(lVar14,PTR_s_init_1125d9248);
      uVar13 = uVar23;
      func_0x000107c61550();
      uVar3 = *(ulong *)(lVar20 + 0x280);
      if ((((int)uVar13 == 0) || ((uVar23 >> 0x3e & 1) != 0)) || (uVar13 = uVar3, (long)uVar3 < 0))
      {
        if (uVar3 >> 0x3e == 0) {
          uVar19 = *(ulong *)((uVar23 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar19 = uVar23 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar3) {
            uVar19 = uVar3;
          }
          func_0x000107c60480(uVar19);
          uVar3 = *(ulong *)(lVar20 + 0x280);
        }
        uVar13 = 0;
        FUN_102738e9c(0,uVar19 + 1,1,uVar3);
        uVar23 = uVar13;
      }
      uVar23 = uVar23 & 0xffffffffffffff8;
      uVar3 = *(ulong *)(uVar23 + 0x10);
      uVar27 = uVar13;
      if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar3) {
        uVar27 = (ulong)(1 < *(ulong *)(uVar23 + 0x18));
        FUN_102738e9c(uVar27,uVar3 + 1,1,uVar13);
        uVar23 = uVar27 & 0xffffffffffffff8;
      }
      uVar22 = *(undefined8 *)(lVar20 + 0x2e0);
      uVar26 = *(undefined8 *)(lVar20 + 0x2b0);
      uVar6 = *(undefined8 *)(lVar20 + 0x288);
      *(ulong *)(uVar23 + 0x10) = uVar3 + 1;
      *(long *)(uVar23 + uVar3 * 8 + 0x20) = lVar14;
      func_0x000107c615e8(uVar6);
      func_0x000107c61170(uVar26);
      func_0x000107c6142c(uVar22);
    }
    uVar3 = *(ulong *)(lVar20 + 0x290);
    if (uVar3 == *(ulong *)(lVar20 + 0x268)) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010274af34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar20 + 8))(uVar27);
        return;
      }
LAB_10274b338:
      func_0x000107c60e78();
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar6 = *(undefined8 *)(lVar20 + 0x280);
      func_0x000107c615e8(*(undefined8 *)(lVar20 + 0x288));
      func_0x000107c6142c(uVar6);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
        func_0x000107c60e78();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010274b3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar20 + 8))();
      return;
    }
    *(ulong *)(lVar20 + 0x280) = uVar27;
    uVar13 = *(ulong *)(lVar20 + 0x250);
    if ((uVar13 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0b0);
        (*pcVar2)();
      }
      uVar13 = *(ulong *)(uVar13 + uVar3 * 8 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar13 = uVar3;
      FUN_10274d138();
    }
    *(ulong *)(lVar20 + 0x288) = uVar13;
    *(ulong *)(lVar20 + 0x290) = uVar3 + 1;
    if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10274b0ac);
      (*pcVar2)();
    }
    func_0x000107c4e090();
    func_0x000107c61180();
    *(ulong *)(lVar20 + 0x298) = uVar13;
    plVar4 = (long *)0x120;
    func_0x000107c615b8();
    *(long **)(lVar20 + 0x2a0) = plVar4;
    *plVar4 = lVar20;
    plVar4[1] = (long)FUN_102749c40;
    param_2 = *(long **)(lVar20 + 0x260);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) goto LAB_10274b338;
    plVar11 = (long *)(lVar20 + 0x40);
  }
  else {
    uVar13 = plVar10[0x4a];
    plVar10[0x50] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar13 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar13 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102749c3c);
        (*pcVar2)();
      }
      uVar13 = *(ulong *)(uVar13 + 0x20);
      func_0x000107c615f0();
    }
    else {
      uVar13 = 0;
      FUN_10274d138();
    }
    plVar10[0x51] = uVar13;
    plVar10[0x52] = 1;
    func_0x000107c4e090();
    func_0x000107c61180();
    plVar10[0x53] = uVar13;
    plVar4 = (long *)0x120;
    func_0x000107c615b8();
    plVar10[0x54] = (long)plVar4;
    *plVar4 = (long)plVar10;
    plVar4[1] = (long)FUN_102749c40;
    param_2 = (long *)plVar10[0x4c];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) goto LAB_102749c3c;
    plVar11 = plVar10 + 8;
  }
FUN_10274bdac:
  plVar4[0x18] = uVar13;
  plVar4[0x19] = (long)param_2;
  plVar4[0x17] = (long)plVar11;
  pcVar2 = FUN_10274bdc8;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10274b714; end: 10274b7af;  */

void FUN_10274b714(undefined8 param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0xe0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10274b7b0;
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x88);
    *(long *)(lVar4 + 0xe8) = unaff_x20;
    *(long *)(lVar4 + 0xf0) = lVar3;
    plVar1 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(lVar4 + 0xf8) = plVar1;
    *plVar1 = lVar5;
    plVar1[1] = (long)FUN_10274baa8;
    plVar1[0xc] = lVar3;
    pcVar2 = FUN_10274d7a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10274b7b0; end: 10274baa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274b7b0(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  func_0x000100083b20(unaff_x22 + 0x98);
  lVar11 = *(long *)(unaff_x22 + 0x98);
  uVar2 = *(ulong *)(lVar11 + _DAT_112ff76b8);
  func_0x000107c61174();
  func_0x000107c61170(lVar11);
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 == 0) {
    puVar10 = *(undefined1 **)(unaff_x22 + 0xe0);
  }
  else {
    uVar2 = uVar3;
    func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_presentExternalShareSheetWithSna_112620a30);
    if ((uVar2 & 1) != 0) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
      puVar7 = &UNK_110543838;
      func_0x000107c613fc(&UNK_110543838,0x30,7);
      *(undefined8 *)(puVar7 + 0x10) = uVar9;
      uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xb0);
      *(undefined8 *)(puVar7 + 0x20) = *(undefined8 *)(unaff_x22 + 0xb8);
      *(undefined8 *)(puVar7 + 0x18) = uVar14;
      *(undefined8 *)(puVar7 + 0x28) = uVar15;
      puVar4 = &UNK_110543860;
      func_0x000107c613fc(&UNK_110543860,0x30,7);
      *(undefined8 *)(puVar4 + 0x10) = uVar9;
      uVar14 = *(undefined8 *)(unaff_x22 + 200);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
      *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)(unaff_x22 + 200);
      *(undefined8 *)(puVar4 + 0x18) = uVar16;
      *(undefined8 *)(puVar4 + 0x28) = uVar15;
      func_0x000107c61438(uVar9,2);
      func_0x000107c6157c(uVar13);
      func_0x000107c6157c(uVar14);
      uVar13 = 0x112ebb4f0;
      func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
      uVar14 = uVar12;
      func_0x000107c5fc48(uVar12,uVar13);
      *(code **)(unaff_x22 + 0x30) = FUN_10274dbf4;
      *(undefined **)(unaff_x22 + 0x38) = puVar7;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puVar5 = (undefined8 *)(unaff_x22 + 0x10);
      *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_110543878;
      func_0x000107c60bc4();
      *(code **)(unaff_x22 + 0x60) = FUN_10274dc54;
      *(undefined **)(unaff_x22 + 0x68) = puVar4;
      puVar6 = (undefined8 *)(unaff_x22 + 0x40);
      *puVar6 = puVar1;
      *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x50) = &UNK_100c75f50;
      *(undefined **)(unaff_x22 + 0x58) = &UNK_1105438a0;
      func_0x000107c60bc4();
      func_0x000107c6157c(puVar7);
      func_0x000107c6157c(puVar4);
      func_0x000107c4eef0(uVar3);
      func_0x000107c6142c(uVar12);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar7);
      func_0x000107c615e8(uVar3);
      func_0x000107c60bd0(puVar6);
      func_0x000107c60bd0(puVar5);
      func_0x000107c61170(uVar14);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
      func_0x000107c6142c(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010274ba0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    puVar10 = *(undefined1 **)(unaff_x22 + 0xe0);
    func_0x000107c615e8(uVar3);
  }
  func_0x000107c6142c();
  FUN_10274dbb4();
  puVar7 = &UNK_110543998;
  func_0x000107c613f8(&UNK_110543998,puVar10,0,0);
  *puVar10 = 0;
  func_0x000107c61654();
  lVar11 = *(long *)(unaff_x22 + 0x88);
  *(undefined **)(unaff_x22 + 0xe8) = puVar7;
  *(long *)(unaff_x22 + 0xf0) = lVar11;
  plVar8 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10274baa8;
  plVar8[0xc] = lVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274d7a8,0,0);
  return;
}



/* Entry: 10274baa8; end: 10274baef;  */

void FUN_10274baa8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274baf0,0,0);
  return;
}



/* Entry: 10274baf0; end: 10274bb6f;  */

void FUN_10274baf0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  pcVar2 = *(code **)(unaff_x22 + 0xc0);
  func_0x000107c614cc(uVar1,unaff_x22 + 0x90,unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c60640(*(undefined8 *)(unaff_x22 + 0x78),uVar4);
  (*pcVar2)();
  func_0x000107c614ac(uVar1);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010274bb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274bb70; end: 10274bc07;  */

/* WARNING: Possible PIC construction at 0x00010274bbec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010274bbf0) */

void FUN_10274bb70(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_1105438d8;
  func_0x000107c613fc(&UNK_1105438d8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20;
  func_0x000107c61434(param_1);
  func_0x0001009548b0(0x40,0,0x48,4,0,0,&UNK_10dad4f50,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10274bc08; end: 10274bdab; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementation47MemTwoLandingPageSnapDocSendServiceProviderImpl presentExternalShareSheetWithSnapDocBundles:sendParameters:onComplete:onError:] */

void FUN_10274bc08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  uVar5 = 0x112ebb4f0;
  func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
  func_0x000107c5fc54(param_3,uVar5);
  puVar2 = &UNK_1105436d0;
  func_0x000107c613fc(&UNK_1105436d0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  puVar3 = &UNK_1105436f8;
  func_0x000107c613fc(&UNK_1105436f8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  puVar4 = &UNK_110543720;
  func_0x000107c613fc(&UNK_110543720,0x50,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(code **)(puVar4 + 0x28) = FUN_10274cef0;
  *(undefined **)(puVar4 + 0x30) = puVar2;
  *(code **)(puVar4 + 0x38) = FUN_10274cefc;
  *(undefined **)(puVar4 + 0x40) = puVar3;
  *(undefined8 *)(puVar4 + 0x48) = uVar1;
  func_0x000107c615f4(param_4,2);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_3);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  uVar5 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10dad4ee0,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c6142c(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10274bdac; end: 10274bdc7;  */

void FUN_10274bdac(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274bdc8,0,0);
  return;
}



/* Entry: 10274bdc8; end: 10274bf53;  */

/* WARNING: Removing unreachable block (ram,0x00010274be44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274bdc8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  long unaff_x22;
  
  uVar4 = *(ulong *)(unaff_x22 + 0xc0);
  func_0x000107c3eea8();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar4);
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  uVar4 = uVar5;
  func_0x0001010282b0(uVar5,param_2);
  *(ulong *)(unaff_x22 + 0xd0) = uVar4;
  func_0x00010006c090(uVar5,param_2);
  if (uVar4 != 0) {
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
    uVar5 = uVar4;
    (**(code **)(lVar3 + 8))(uVar4,uVar2,lVar3);
    func_0x0001000834e4(unaff_x22 + 0x10);
    if ((uVar5 & 1) != 0) {
      func_0x000100083b20(unaff_x22 + 0x38);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar3 = *(long *)(unaff_x22 + 0x58);
      func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
      piVar8 = *(int **)(lVar3 + 0x18);
      iVar1 = *piVar8;
      plVar6 = (long *)(ulong)(uint)piVar8[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xd8) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_10274bf54;
                    /* WARNING: Could not recover jumptable at 0x00010274bf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar8))(uVar4,uVar2,lVar3);
      return;
    }
    func_0x000107c61170(uVar4);
  }
  puVar7 = *(undefined8 **)(unaff_x22 + 0xb8);
  puVar7[3] = 0;
  puVar7[2] = 0;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010274be78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274bf54; end: 10274bfb3;  */

void FUN_10274bf54(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xe0) = param_1;
  *(long *)(lVar2 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10274bfb4;
  }
  else {
    pcVar1 = FUN_10274c308;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10274bfb4; end: 10274c133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274bfb4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  puVar7 = *(undefined1 **)(unaff_x22 + 0xe0);
  func_0x0001000834e4(unaff_x22 + 0x38);
  func_0x000107c5b198();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0xf0) = puVar7;
  puVar3 = puVar7;
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar3);
    *(undefined1 **)(unaff_x22 + 0xf8) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x100) = param_2;
    func_0x000100083b20(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar2 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,uVar8);
    piVar6 = *(int **)(lVar2 + 0x20);
    iVar1 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x108) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_10274c134;
                    /* WARNING: Could not recover jumptable at 0x00010274c0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))
              (unaff_x22 + 0x60,puVar7,"processedSnapDoc(from:)",0x17,0x9000000000000002,0x10d,
               unaff_x22 + 0xb0,uVar8,lVar2);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
  FUN_10274dbb4();
  func_0x000107c613f8(&UNK_110543998,puVar3,0,0);
  *puVar3 = 1;
  func_0x000107c61654();
  func_0x000107c61170(puVar7);
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010274c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274c134; end: 10274c193;  */

void FUN_10274c134(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x108));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10274c23c;
  }
  else {
    *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(lVar2 + 0xb0);
    pcVar1 = FUN_10274c194;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10274c194; end: 10274c23b;  */

void FUN_10274c194(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar6;
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar4);
  func_0x0001000834e4(unaff_x22 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010274c238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274c23c; end: 10274c307;  */

void FUN_10274c23c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar8 = *(undefined8 **)(unaff_x22 + 0xb8);
  func_0x0001000834e4(unaff_x22 + 0x88);
  puVar3 = PTR_PTR_1126bcf68;
  func_0x000107c610f8();
  uVar4 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x000107c45ae0();
  func_0x000107c61170(uVar4);
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar6);
  *puVar8 = puVar3;
  func_0x000100fb8694(unaff_x22 + 0x60,puVar8 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010274c304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274c308; end: 10274c343;  */

void FUN_10274c308(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010274c340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274c344; end: 10274c35b;  */

void FUN_10274c344(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274c35c,0,0);
  return;
}



/* Entry: 10274c35c; end: 10274c417;  */

void FUN_10274c35c(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x60) + 0x10);
  *(long *)(unaff_x22 + 0x68) = lVar5;
  if (lVar5 != 0) {
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    func_0x000100fb8650(*(long *)(unaff_x22 + 0x60) + 0x20,unaff_x22 + 0x10);
    func_0x000100fb8694(unaff_x22 + 0x10,unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar5 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
    piVar4 = *(int **)(lVar5 + 0x18);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10274c418;
                    /* WARNING: Could not recover jumptable at 0x00010274c3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(uVar2,lVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010274c414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274c418; end: 10274c477;  */

void FUN_10274c418(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10274c478;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = (code *)0x10274dfac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10274c478; end: 10274c54f;  */

void FUN_10274c478(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x38);
  if (lVar3 + 1 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010274c4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0x70);
  *(long *)(unaff_x22 + 0x70) = lVar5 + 1;
  func_0x000100fb8650(*(long *)(unaff_x22 + 0x60) + lVar5 * 0x28 + 0x48,unaff_x22 + 0x10);
  func_0x000100fb8694(unaff_x22 + 0x10,unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar6 = *(int **)(lVar5 + 0x18);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10274c418;
                    /* WARNING: Could not recover jumptable at 0x00010274c54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar5);
  return;
}



/* Entry: 10274c550; end: 10274c703;  */

void FUN_10274c550(ulong *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((char)uVar2 != '\x01') {
      uVar2 = uVar6;
      FUN_10274d99c();
      puVar1 = PTR___sytN_11034f1b0;
      if ((uVar2 & 1) != 0) {
        puVar3 = &UNK_1105437e8;
        func_0x000107c613fc(&UNK_1105437e8,0x18,7);
        *(long *)(puVar3 + 0x10) = param_2;
        puVar4 = &UNK_110543810;
        func_0x000107c613fc(&UNK_110543810,0x20,7);
        *(undefined **)(puVar4 + 0x10) = &UNK_10dad4f20;
        *(undefined **)(puVar4 + 0x18) = puVar3;
        func_0x000107c61174(param_2);
        uVar5 = 0x40;
        func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10dad4f28,puVar4,puVar1 + 8);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(uVar5);
      }
      uVar2 = uVar6;
      func_0x000107c5d0f0();
      if ((uVar2 & 0xfffffffd) == 0) {
        puVar3 = &UNK_110543798;
        func_0x000107c613fc(&UNK_110543798,0x18,7);
        *(long *)(puVar3 + 0x10) = param_2;
        puVar4 = &UNK_1105437c0;
        func_0x000107c613fc(&UNK_1105437c0,0x20,7);
        *(undefined **)(puVar4 + 0x10) = &UNK_10dad4f00;
        *(undefined **)(puVar4 + 0x18) = puVar3;
        func_0x000107c61174(param_2);
        uVar5 = 0x40;
        func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10dad4f10,puVar4,puVar1 + 8);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(uVar5);
      }
      func_0x000107c5d0f0(uVar6);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10274c704; end: 10274c70b;  */

void FUN_10274c704(ulong *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(lVar6 + 0x10,auStack_58,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    if ((char)uVar2 != '\x01') {
      uVar2 = uVar7;
      FUN_10274d99c();
      puVar1 = PTR___sytN_11034f1b0;
      if ((uVar2 & 1) != 0) {
        puVar3 = &UNK_1105437e8;
        func_0x000107c613fc(&UNK_1105437e8,0x18,7);
        *(long *)(puVar3 + 0x10) = lVar6;
        puVar4 = &UNK_110543810;
        func_0x000107c613fc(&UNK_110543810,0x20,7);
        *(undefined **)(puVar4 + 0x10) = &UNK_10dad4f20;
        *(undefined **)(puVar4 + 0x18) = puVar3;
        func_0x000107c61174(lVar6);
        uVar5 = 0x40;
        func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10dad4f28,puVar4,puVar1 + 8);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(uVar5);
      }
      uVar2 = uVar7;
      func_0x000107c5d0f0();
      if ((uVar2 & 0xfffffffd) == 0) {
        puVar3 = &UNK_110543798;
        func_0x000107c613fc(&UNK_110543798,0x18,7);
        *(long *)(puVar3 + 0x10) = lVar6;
        puVar4 = &UNK_1105437c0;
        func_0x000107c613fc(&UNK_1105437c0,0x20,7);
        *(undefined **)(puVar4 + 0x10) = &UNK_10dad4f00;
        *(undefined **)(puVar4 + 0x18) = puVar3;
        func_0x000107c61174(lVar6);
        uVar5 = 0x40;
        func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10dad4f10,puVar4,puVar1 + 8);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(uVar5);
      }
      func_0x000107c5d0f0(uVar7);
    }
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 10274c70c; end: 10274c777;  */

void FUN_10274c70c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274c778,uVar1,uVar2);
  return;
}



/* Entry: 10274c778; end: 10274c817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274c778(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  uVar2 = *(undefined8 *)(lVar3 + _DAT_112ebbd48);
  func_0x000107c6157c(uVar2);
  uVar1 = 0x112ebbe00;
  func_0x0001000285a8(0x112ebbe00,&UNK_10dad4f30);
  func_0x000100075034(unaff_x22 + 0x10,0x10274ca78,0,uVar1);
  func_0x000107c61574(uVar2);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  if (lVar3 != 0) {
    func_0x000107c41864(lVar3);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010274c814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274c818; end: 10274c853;  */

void FUN_10274c818(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010274c850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10274c854; end: 10274c93f; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementation47MemTwoLandingPageSnapDocSendServiceProviderImpl sendDidReturnPromise:] */

/* WARNING: Possible PIC construction at 0x00010274c924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010274c928) */

void FUN_10274c854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x0001000285a8(0x112ebb4f8,&UNK_10dad3f50);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  func_0x000103edf20c(param_3);
  puVar3 = &UNK_110543660;
  func_0x000107c613fc(&UNK_110543660,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_1);
  puVar4 = &UNK_1105436a8;
  func_0x000107c613fc(&UNK_1105436a8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  func_0x00010075a04c(0,1,0x10274dfdc,puVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10274c940; end: 10274c9e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10274c940(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 auStack_50 [4];
  
  func_0x000100083b20(auStack_50);
  uVar1 = auStack_50[0];
  func_0x000107c4d06c();
  func_0x000107c61180();
  func_0x000107c615e8(auStack_50[0]);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ebbd48);
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_10274c9e8,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  return uVar1;
}



/* Entry: 10274c9e8; end: 10274ca2b;  */

void FUN_10274c9e8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c615e8(*param_1);
  *param_1 = uVar1;
  func_0x000107c615f0(uVar1);
  return;
}



/* Entry: 10274ca2c; end: 10274ca5f; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementation47MemTwoLandingPageSnapDocSendServiceProviderImpl uiContainer] */

void FUN_10274ca2c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10274c940();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10274ca60; end: 10274ca67; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementation47MemTwoLandingPageSnapDocSendServiceProviderImpl uiViewController] */

void FUN_10274ca60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10274ca68; end: 10274ca6f; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementation47MemTwoLandingPageSnapDocSendServiceProviderImpl mediaSource] */

undefined8 FUN_10274ca68(void)

{
  return 1;
}



/* Entry: 10274ca70; end: 10274ca87; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementation47MemTwoLandingPageSnapDocSendServiceProviderImpl shouldSendAsExternalMedia] */

undefined8 FUN_10274ca70(void)

{
  return 0;
}



/* Entry: 10274ca88; end: 10274caf3;  */

void FUN_10274ca88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10274caf4,uVar1,uVar2);
  return;
}



/* Entry: 10274caf4; end: 10274cbef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274caf4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  lVar1 = 0x6375735f746e6573;
  func_0x000107c5fadc(0x6375735f746e6573,0xee00646564656563);
  uVar2 = 0;
  func_0x000107c5fe40(0);
  lVar3 = lVar1;
  func_0x000107c312f4(lVar1,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    func_0x000107c40930();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000107c5c2e0(uVar2);
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010274cbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10274cbf0; end: 10274cc03;  */

void FUN_10274cbf0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10274cc04; end: 10274cc7b; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementation47MemTwoLandingPageSnapDocSendServiceProviderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010274cc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010274cc40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010274cc60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010274cc44) */
/* WARNING: Removing unreachable block (ram,0x00010274cc24) */
/* WARNING: Removing unreachable block (ram,0x00010274cc64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274cc04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebbd60));
  return;
}



/* Entry: 10274cc7c; end: 10274cc9b;  */

void FUN_10274cc7c(void)

{
  func_0x000107c61168(&PTR_PTR_11285ec48);
  return;
}



/* Entry: 10274cc9c; end: 10274ccab; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementationP33_076DDA447F7FE545F2A6852A25377CA422ProcessedSnapDocBundle original] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274cc9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ebbdc0));
  return;
}



/* Entry: 10274ccac; end: 10274ccdf; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementationP33_076DDA447F7FE545F2A6852A25377CA422ProcessedSnapDocBundle setOriginal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274ccac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebbdc0);
  *(undefined8 *)(param_1 + _DAT_112ebbdc0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10274cce0; end: 10274ccfb; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementationP33_076DDA447F7FE545F2A6852A25377CA422ProcessedSnapDocBundle multisnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274cce0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ebbdc8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10274ccfc; end: 10274cd17; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementationP33_076DDA447F7FE545F2A6852A25377CA422ProcessedSnapDocBundle setMultisnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274ccfc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_10274ceb0(0,0x112d54e00,&PTR_PTR_1126bcf68);
    func_0x000107c5fc54(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebbdc8);
  *(long *)(param_1 + _DAT_112ebbdc8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10274cd18; end: 10274cd33; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementationP33_076DDA447F7FE545F2A6852A25377CA422ProcessedSnapDocBundle hasOverlayImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274cd18(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ebbdd0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10274cd34; end: 10274cd93;  */

void FUN_10274cd34(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10274ceb0(0,param_4,param_5);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10274cd94; end: 10274cdaf; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementationP33_076DDA447F7FE545F2A6852A25377CA422ProcessedSnapDocBundle setHasOverlayImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274cd94(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_10274ceb0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c5fc54(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebbdd0);
  *(long *)(param_1 + _DAT_112ebbdd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10274cdb0; end: 10274ce13;  */

void FUN_10274cdb0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long *param_6)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar1 = 0;
    FUN_10274ceb0(0,param_4,param_5);
    func_0x000107c5fc54(param_3,uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + *param_6);
  *(long *)(param_1 + *param_6) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10274ce14; end: 10274ce47;  */

void FUN_10274ce14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10274ce48; end: 10274ce8f; -[_TtC49MemTwoLandingPageSnapDocSendServiceImplementationP33_076DDA447F7FE545F2A6852A25377CA422ProcessedSnapDocBundle .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010274ce74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010274ce78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274ce48(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebbdc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ebbdc8));
  return;
}



/* Entry: 10274ce90; end: 10274ceaf;  */

void FUN_10274ce90(void)

{
  func_0x000107c61168(&PTR_PTR_11285ed38);
  return;
}



/* Entry: 10274ceb0; end: 10274ceef;  */

void FUN_10274ceb0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10274cef0; end: 10274cefb;  */

void FUN_10274cef0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010274cef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10274cefc; end: 10274cf33;  */

void FUN_10274cefc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10274cf34; end: 10274cf77;  */

void FUN_10274cf34(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


