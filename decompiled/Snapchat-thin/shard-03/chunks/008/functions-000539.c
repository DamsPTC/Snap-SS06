/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d367d8; end: 102d369ab;  */

/* WARNING: Possible PIC construction at 0x000102d36820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3685c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d36888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d368a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d36910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d36924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d36934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d36988: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d36928) */
/* WARNING: Removing unreachable block (ram,0x000102d36914) */
/* WARNING: Removing unreachable block (ram,0x000102d368a8) */
/* WARNING: Removing unreachable block (ram,0x000102d3698c) */
/* WARNING: Removing unreachable block (ram,0x000102d368ac) */
/* WARNING: Removing unreachable block (ram,0x000102d36984) */
/* WARNING: Removing unreachable block (ram,0x000102d368c4) */
/* WARNING: Removing unreachable block (ram,0x000102d3688c) */
/* WARNING: Removing unreachable block (ram,0x000102d36860) */
/* WARNING: Removing unreachable block (ram,0x000102d36824) */
/* WARNING: Removing unreachable block (ram,0x000102d36948) */
/* WARNING: Removing unreachable block (ram,0x000102d36828) */
/* WARNING: Removing unreachable block (ram,0x000102d36964) */
/* WARNING: Removing unreachable block (ram,0x000102d36844) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000102d36938) */
/* WARNING: Removing unreachable block (ram,0x000102d36990) */

void FUN_102d367d8(undefined8 param_1)

{
  func_0x00010451338c();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d369ac; end: 102d369e7;  */

void FUN_102d369ac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d369e8; end: 102d36a53; -[_TtC19CallUILaunchingImpl20CallFeedbackLauncher callFeedbackScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x000102d36a30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d36a34) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_102d369e8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x18));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102d36a54; end: 102d36a73;  */

bool FUN_102d36a54(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102d36a74; end: 102d36ac7;  */

void FUN_102d36a74(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102d36ac8();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102d36ac8; end: 102d36c17;  */

/* WARNING: Possible PIC construction at 0x000102d36bf4: Changing call to branch */

void FUN_102d36ac8(undefined8 param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  
  uVar5 = *(ulong *)(unaff_x20 + 0xa0);
  if (uVar5 == 0) {
    return;
  }
  bVar1 = *(byte *)(unaff_x20 + 0xa8);
  uVar6 = *(ulong *)(unaff_x20 + 0xb0);
  if (uVar6 == 0) {
    func_0x000107c615f0(uVar5);
  }
  else {
    func_0x000107c615f0(uVar5);
    func_0x000107c40594();
    func_0x000107c61180();
    uVar2 = uVar6;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(uVar6);
    uVar6 = uVar5;
    func_0x000107c40594();
    func_0x000107c61180();
    uVar3 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
    if ((uVar2 == uVar3) && (param_2 == lVar4)) {
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar4);
    }
    else {
      func_0x000107c605b8(uVar2,param_2,uVar3,lVar4,0);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar4);
      if ((uVar2 & 1) == 0) goto code_r0x000107c615e8;
    }
  }
  if ((bVar1 & 1) == 0) {
    auStack_90[0] = 0;
    uStack_80 = 0x4000000000000000;
    func_0x000107c615f0(uVar5);
    FUN_102d36c18(auStack_90,uVar5);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
  return;
}



/* Entry: 102d36c18; end: 102d3704b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d36c18(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x20;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uStack_e4;
  undefined1 auStack_d0 [16];
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar10 = *unaff_x20;
  uStack_e4 = (uint)((ulong)param_1[2] >> 0x20);
  uVar9 = uStack_e4 >> 0x1e;
  uVar2 = param_2;
  if (uVar9 == 0) {
    uStack_e4 = 0;
    puVar11 = param_1;
  }
  else {
    if (uVar9 != 1) {
      return;
    }
    puVar11 = (undefined8 *)unaff_x20[0x14];
    unaff_x20[0x14] = param_2;
    uStack_e4 = uStack_e4 >> 0x1e;
    *(undefined1 *)(unaff_x20 + 0x15) = 1;
    func_0x000107c615f0(param_2);
    func_0x000107c615e8();
  }
  func_0x0001030f3c4c();
  uVar1 = unaff_x20[0x16];
  if (uVar1 == 0) {
    uVar4 = 0;
    uVar1 = 0;
    uVar7 = uVar2;
  }
  else {
    func_0x000107c40594();
    func_0x000107c61180();
    uVar4 = uVar1;
    func_0x000107c5faec();
    uVar7 = uVar2;
    func_0x000107c61170(uVar1);
    uVar1 = uVar2;
  }
  uVar2 = param_2;
  func_0x000107c40594();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar8 = uVar7;
  func_0x000107c61170(uVar2);
  if (uVar1 == 0) {
    func_0x000107c6142c(uVar7);
    uVar1 = uVar8;
joined_r0x000102d36d54:
    if (puVar11 != (undefined8 *)0x0) {
      uVar4 = *(ulong *)((long)puVar11 + _DAT_11307b7f8);
      func_0x000107c40594();
      func_0x000107c61180();
      uVar2 = uVar4;
      func_0x000107c5faec();
      uVar7 = uVar1;
      func_0x000107c61170(uVar4);
      uVar4 = param_2;
      func_0x000107c40594();
      func_0x000107c61180();
      uVar3 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      if (uVar2 == uVar3 && uVar1 == uVar7) goto LAB_102d36f90;
      func_0x000107c605b8(uVar2,uVar1,uVar3,uVar7,0);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(uVar7);
      if ((uVar2 & 1) != 0) goto LAB_102d36fa0;
    }
    uVar5 = unaff_x20[0x16];
    unaff_x20[0x16] = param_2;
    func_0x000107c615e8(uVar5);
    puVar6 = (undefined *)0x112f0f098;
    func_0x0001000285a8(0x112f0f098,&UNK_10db42850);
    func_0x000107c613fc();
    *(undefined **)(puVar6 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010006a340(0);
    func_0x000107c613fc();
    uVar2 = param_2;
    func_0x000107c615f0();
    func_0x00010006a360();
    *(ulong *)(puVar6 + 0x18) = uVar2;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    uVar5 = unaff_x20[0x13];
    unaff_x20[0x13] = puVar6;
    func_0x000107c6157c(puVar6);
    func_0x000107c61574(uVar5);
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    puStack_b8 = &uStack_a0;
    uVar5 = 0x112f0f0a0;
    puStack_c0 = puVar6;
    func_0x0001000285a8(0x112f0f0a0,&UNK_10db42858);
    func_0x000100087bd4(&lStack_a8,FUN_102d37b8c,auStack_d0,uVar5);
    if (lStack_a8 != 0) {
      func_0x000107c6157c(lStack_a8);
      func_0x000100087f6c(&uStack_a0);
      func_0x000107c61578(lStack_a8,2);
    }
    func_0x000107c61574(puVar6);
    if (((uStack_e4 & 1) == 0) && (unaff_x20[0x14] != 0)) {
      *(undefined1 *)(unaff_x20 + 0x15) = 0;
    }
    puVar6 = &UNK_1105c5fc0;
    func_0x000107c613fc(&UNK_1105c5fc0,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    puVar12 = &UNK_1105c5fe8;
    func_0x000107c613fc(&UNK_1105c5fe8,0x68,7);
    *(undefined **)(puVar12 + 0x10) = puVar6;
    *(ulong *)(puVar12 + 0x18) = param_2;
    uVar5 = *param_1;
    uVar14 = param_1[3];
    uVar13 = param_1[2];
    *(undefined8 *)(puVar12 + 0x28) = param_1[1];
    *(undefined8 *)(puVar12 + 0x20) = uVar5;
    *(undefined8 *)(puVar12 + 0x38) = uVar14;
    *(undefined8 *)(puVar12 + 0x30) = uVar13;
    uVar5 = param_1[4];
    uVar14 = param_1[7];
    uVar13 = param_1[6];
    *(undefined8 *)(puVar12 + 0x48) = param_1[5];
    *(undefined8 *)(puVar12 + 0x40) = uVar5;
    *(undefined8 *)(puVar12 + 0x58) = uVar14;
    *(undefined8 *)(puVar12 + 0x50) = uVar13;
    *(undefined8 *)(puVar12 + 0x60) = uVar10;
    func_0x000107c615f0(param_2);
    func_0x000107c6157c(puVar6);
    FUN_102d37c04(param_1,&uStack_a0);
    func_0x0001030f3c74(FUN_102d37bf4,puVar12);
    func_0x000107c61574(puVar6);
  }
  else {
    if ((uVar4 == uVar3) && (uVar1 == uVar7)) {
LAB_102d36f90:
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(uVar7);
    }
    else {
      uVar2 = uVar1;
      func_0x000107c605b8(uVar4,uVar1,uVar3,uVar7,0);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(uVar7);
      uVar1 = uVar2;
      if ((uVar4 & 1) == 0) goto joined_r0x000102d36d54;
    }
LAB_102d36fa0:
    puVar12 = (undefined *)unaff_x20[0x13];
    uStack_98 = param_1[1];
    uStack_a0 = *param_1;
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    puStack_b8 = &uStack_a0;
    puStack_c0 = puVar12;
    func_0x000107c6157c(puVar12);
    uVar10 = 0x112f0f0a0;
    func_0x0001000285a8(0x112f0f0a0,&UNK_10db42858);
    func_0x000100087bd4(&lStack_a8,FUN_102d37d4c,auStack_d0,uVar10);
    if (lStack_a8 != 0) {
      func_0x000107c6157c(lStack_a8);
      func_0x000100087f6c(&uStack_a0);
      func_0x000107c61578(lStack_a8,2);
    }
  }
  func_0x000107c61574(puVar12);
  func_0x000107c61170(puVar11);
  return;
}



/* Entry: 102d3704c; end: 102d3725f;  */

void FUN_102d3704c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_68 [24];
  
  puVar6 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar6,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0xb0);
  if (uVar1 == 0) {
    uVar10 = 0;
    puVar8 = (undefined1 *)0x0;
    puVar7 = puVar6;
  }
  else {
    func_0x000107c40594();
    func_0x000107c61180();
    uVar10 = uVar1;
    func_0x000107c5faec();
    puVar7 = puVar6;
    func_0x000107c61170(uVar1);
    puVar8 = puVar6;
  }
  uVar1 = param_2;
  func_0x000107c40594();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  if (puVar8 == (undefined1 *)0x0) {
    func_0x000107c6142c(puVar7);
LAB_102d3723c:
    func_0x000107c61574(param_1);
  }
  else {
    if ((uVar10 == uVar2) && (puVar8 == puVar7)) {
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(puVar7);
    }
    else {
      func_0x000107c605b8(uVar10,puVar8,uVar2,puVar7,0);
      func_0x000107c6142c(puVar8);
      func_0x000107c6142c(puVar7);
      if ((uVar10 & 1) == 0) goto LAB_102d3723c;
    }
    lVar3 = param_1 + 0xb8;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x0001000a8868(param_1 + 0x18,*(undefined8 *)(param_1 + 0x30));
      uVar9 = *(undefined8 *)(param_1 + 0x98);
      puVar4 = &UNK_1105c6010;
      func_0x000107c613fc(&UNK_1105c6010,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,uVar9);
      func_0x0001000285a8(0x112f0f0a8,&UNK_10db42860);
      func_0x000107c613fc();
      pcVar5 = FUN_102d37c40;
      func_0x0001000b64ac(FUN_102d37c40,puVar4);
      func_0x00010445ea74(param_2,pcVar5,param_1,&PTR_DAT_1105c5f88,lVar3);
      func_0x000107c61574(pcVar5);
      func_0x0001030f3c68(param_2);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(param_2);
    }
    uVar9 = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    func_0x000107c61574(param_1);
    func_0x000107c615e8(uVar9);
  }
  return;
}



/* Entry: 102d37260; end: 102d372db;  */

void FUN_102d37260(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x0001000834e4(unaff_x20 + 0x48);
  func_0x0001000834e4(unaff_x20 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb0));
  FUN_102d37d28(unaff_x20 + 0xb8);
  return;
}



/* Entry: 102d372dc; end: 102d372e3;  */

void FUN_102d372dc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*param_1);
  return;
}



/* Entry: 102d372e4; end: 102d3732f;  */

undefined8 * FUN_102d372e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 102d37330; end: 102d3736b;  */

undefined8 * FUN_102d37330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615e8(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 102d3736c; end: 102d3740b;  */

int FUN_102d3736c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102d3740c; end: 102d37483;  */

undefined1 * FUN_102d3740c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c615f0();
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 102d37484; end: 102d374bf;  */

void FUN_102d37484(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 102d374c0; end: 102d37607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d374c0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + 0xa0);
  if (uVar1 == 0) {
    uVar6 = 0;
    lVar5 = 0;
    lVar4 = param_2;
  }
  else {
    func_0x000107c40594();
    func_0x000107c61180();
    uVar6 = uVar1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(uVar1);
    lVar5 = param_2;
  }
  uVar2 = *(ulong *)(param_1 + _DAT_11307b7f8);
  func_0x000107c40594();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(lVar4);
LAB_102d37598:
    lVar4 = *(long *)(unaff_x20 + 0xa0);
  }
  else {
    if (uVar6 == uVar1 && lVar5 == lVar4) {
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(lVar4);
    }
    else {
      func_0x000107c605b8(uVar6,lVar5,uVar1,lVar4,0);
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(lVar4);
      if ((uVar6 & 1) == 0) goto LAB_102d37598;
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
    *(undefined8 *)(unaff_x20 + 0xa0) = 0;
    *(undefined1 *)(unaff_x20 + 0xa8) = 0;
    func_0x000107c615e8(uVar3);
    lVar4 = *(long *)(unaff_x20 + 0xa0);
  }
  if (lVar4 != 0) {
    *(undefined1 *)(unaff_x20 + 0xa8) = 0;
  }
  func_0x0001030f3c74(0,0);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001007d6d78(&uStack_50);
  return;
}



/* Entry: 102d37608; end: 102d3760b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d37608(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + 0xa0);
  if (uVar1 == 0) {
    uVar6 = 0;
    lVar5 = 0;
    lVar4 = param_2;
  }
  else {
    func_0x000107c40594();
    func_0x000107c61180();
    uVar6 = uVar1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(uVar1);
    lVar5 = param_2;
  }
  uVar2 = *(ulong *)(param_1 + _DAT_11307b7f8);
  func_0x000107c40594();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(lVar4);
LAB_102d37598:
    lVar4 = *(long *)(unaff_x20 + 0xa0);
  }
  else {
    if (uVar6 == uVar1 && lVar5 == lVar4) {
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(lVar4);
    }
    else {
      func_0x000107c605b8(uVar6,lVar5,uVar1,lVar4,0);
      func_0x000107c6142c(lVar5);
      func_0x000107c6142c(lVar4);
      if ((uVar6 & 1) == 0) goto LAB_102d37598;
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
    *(undefined8 *)(unaff_x20 + 0xa0) = 0;
    *(undefined1 *)(unaff_x20 + 0xa8) = 0;
    func_0x000107c615e8(uVar3);
    lVar4 = *(long *)(unaff_x20 + 0xa0);
  }
  if (lVar4 != 0) {
    *(undefined1 *)(unaff_x20 + 0xa8) = 0;
  }
  func_0x0001030f3c74(0,0);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x0001007d6d78(&uStack_50);
  return;
}



/* Entry: 102d3760c; end: 102d3765f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3760c(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11307b7f8);
  uStack_30 = param_2 & 0xff;
  uStack_28 = uVar1;
  func_0x000107c615f0(uVar1);
  func_0x0001007d6d78(&uStack_30);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 102d37660; end: 102d376e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d37660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11307b7f8);
  uVar1 = param_2;
  func_0x000107c614f0(uVar2);
  func_0x00010446afdc();
  func_0x0001000a8868(unaff_x20 + 0x48,*(undefined8 *)(unaff_x20 + 0x60));
  FUN_102d394c0(param_3,uVar2,uVar1,param_2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 102d376e8; end: 102d3772b;  */

void FUN_102d376e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + 0x70,*(undefined8 *)(unaff_x20 + 0x88));
  FUN_102d367d8(param_2,param_3);
  return;
}



/* Entry: 102d3772c; end: 102d379b3;  */

void FUN_102d3772c(ulong param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined1 auStack_140 [64];
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  uVar3 = param_2 + 0x10;
  func_0x000107c61648();
  if (uVar3 == 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(FUN_102d383c4,0);
  }
  else {
    uVar5 = *(undefined8 *)(uVar3 + 0x18);
    func_0x000107c6157c(uVar5);
    func_0x000100087bd4(&uStack_c0,0x102d37c48,uVar3,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar5);
    if ((uStack_c0 & 1) == 0) {
      uVar6 = *(undefined8 *)(uVar3 + 0x18);
      func_0x000107c6157c(uVar6);
      uVar5 = 0x112f0f0b0;
      func_0x0001000285a8(0x112f0f0b0,&UNK_10db42868);
      func_0x000100087bd4(&uStack_c0,FUN_102d37c5c,uVar3,uVar5);
      func_0x000107c61574(uVar6);
      uVar1 = uStack_c0;
      uVar7 = *(ulong *)(uStack_c0 + 0x10);
      func_0x000107c6157c(param_1);
      if (uVar7 != 0) {
        uVar8 = 0;
        puVar9 = (ulong *)(uVar1 + 0x20);
        do {
          if (*(ulong *)(uVar1 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102d379b4);
            (*pcVar2)();
          }
          uStack_b8 = puVar9[1];
          uStack_c0 = *puVar9;
          uStack_a8 = puVar9[3];
          uStack_b0 = puVar9[2];
          uStack_98 = puVar9[5];
          uStack_a0 = puVar9[4];
          uStack_88 = puVar9[7];
          uStack_90 = puVar9[6];
          uVar8 = uVar8 + 1;
          uStack_f8 = puVar9[1];
          uStack_100 = *puVar9;
          uStack_e8 = puVar9[3];
          uStack_f0 = puVar9[2];
          uStack_d8 = puVar9[5];
          uStack_e0 = puVar9[4];
          uStack_c8 = puVar9[7];
          uStack_d0 = puVar9[6];
          FUN_102d37c04(&uStack_c0,auStack_140);
          func_0x000100087f6c(&uStack_100);
          FUN_102d37ca8(&uStack_c0);
          puVar9 = puVar9 + 8;
        } while (uVar7 != uVar8);
      }
      func_0x000107c61574(param_1);
      func_0x000107c6142c(uVar1);
      uVar5 = *(undefined8 *)(uVar3 + 0x18);
      uStack_b0 = uVar3;
      uStack_a8 = param_1;
      func_0x000107c6157c(uVar5);
      func_0x000100087bd4(FUN_102d37cdc,&uStack_c0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar5);
      puVar4 = &UNK_1105c6010;
      func_0x000107c613fc(&UNK_1105c6010,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,uVar3);
      func_0x0001000b6d30(0);
      func_0x000107c613fc();
      func_0x000107c6157c(puVar4);
      func_0x0001000b6d50(FUN_102d37cf4,puVar4);
      func_0x000107c61574(puVar4);
    }
    else {
      func_0x000100c7f554();
      func_0x0001000b6d30(0);
      func_0x000107c613fc();
      func_0x0001000b6d50(0x102d383c8,0);
    }
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 102d379b4; end: 102d37a27;  */

void FUN_102d379b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_2;
  func_0x000107c61574(uVar1);
  func_0x000107c6157c(param_2);
  return;
}



/* Entry: 102d37a28; end: 102d37ab3;  */

void FUN_102d37a28(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c6157c(uVar1);
    func_0x000100087bd4(FUN_102d37cfc,param_1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_1);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 102d37ab4; end: 102d37b8b;  */

uint FUN_102d37ab4(char param_1,long param_2,char param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if (param_1 == param_3) {
    lVar3 = param_2;
    func_0x000107c40594();
    func_0x000107c61180();
    lVar1 = param_2;
    func_0x000107c5faec();
    lVar4 = lVar3;
    func_0x000107c61170(param_2);
    func_0x000107c40594();
    func_0x000107c61180();
    lVar2 = param_4;
    func_0x000107c5faec();
    func_0x000107c61170(param_4);
    if ((lVar1 == lVar2) && (lVar3 == lVar4)) {
      uVar5 = 1;
    }
    else {
      func_0x000107c605b8(lVar1,lVar3,lVar2,lVar4,0);
      uVar5 = (uint)lVar1;
    }
    func_0x000107c6142c(lVar3);
    func_0x000107c6142c(lVar4);
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 1;
}



/* Entry: 102d37b8c; end: 102d37ba3;  */

void FUN_102d37b8c(void)

{
  long unaff_x20;
  
  FUN_102d392c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102d37ba4; end: 102d37bf3;  */

void FUN_102d37ba4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  if (param_3 >> 0x3e != 0) {
    return;
  }
  func_0x000107c61170(param_4);
  func_0x000107c6142c(param_6);
  if (param_7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_8);
    return;
  }
  return;
}



/* Entry: 102d37bf4; end: 102d37c03;  */

void FUN_102d37bf4(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  ulong uVar12;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(ulong *)(unaff_x20 + 0x18);
  puVar8 = auStack_68;
  func_0x000107c61428(lVar1 + 0x10,puVar8,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = *(ulong *)(lVar1 + 0xb0);
  if (uVar2 == 0) {
    uVar12 = 0;
    puVar10 = (undefined1 *)0x0;
    puVar9 = puVar8;
  }
  else {
    func_0x000107c40594();
    func_0x000107c61180();
    uVar12 = uVar2;
    func_0x000107c5faec();
    puVar9 = puVar8;
    func_0x000107c61170(uVar2);
    puVar10 = puVar8;
  }
  uVar2 = uVar7;
  func_0x000107c40594();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  if (puVar10 == (undefined1 *)0x0) {
    func_0x000107c6142c(puVar9);
LAB_102d3723c:
    func_0x000107c61574(lVar1);
  }
  else {
    if ((uVar12 == uVar3) && (puVar10 == puVar9)) {
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar9);
    }
    else {
      func_0x000107c605b8(uVar12,puVar10,uVar3,puVar9,0);
      func_0x000107c6142c(puVar10);
      func_0x000107c6142c(puVar9);
      if ((uVar12 & 1) == 0) goto LAB_102d3723c;
    }
    lVar4 = lVar1 + 0xb8;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x0001000a8868(lVar1 + 0x18,*(undefined8 *)(lVar1 + 0x30));
      uVar11 = *(undefined8 *)(lVar1 + 0x98);
      puVar5 = &UNK_1105c6010;
      func_0x000107c613fc(&UNK_1105c6010,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,uVar11);
      func_0x0001000285a8(0x112f0f0a8,&UNK_10db42860);
      func_0x000107c613fc();
      pcVar6 = FUN_102d37c40;
      func_0x0001000b64ac(FUN_102d37c40,puVar5);
      func_0x00010445ea74(uVar7,pcVar6,lVar1,&PTR_DAT_1105c5f88,lVar4);
      func_0x000107c61574(pcVar6);
      func_0x0001030f3c68(uVar7);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar7);
    }
    uVar11 = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(uVar11);
  }
  return;
}



/* Entry: 102d37c04; end: 102d37c3f;  */

undefined8 FUN_102d37c04(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10445e5c0)(param_2,param_1);
  return param_2;
}



/* Entry: 102d37c40; end: 102d37c5b;  */

void FUN_102d37c40(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined1 auStack_140 [64];
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  uVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (uVar3 == 0) {
    func_0x000100c7f554();
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(FUN_102d383c4,0);
  }
  else {
    uVar5 = *(undefined8 *)(uVar3 + 0x18);
    func_0x000107c6157c(uVar5);
    func_0x000100087bd4(&uStack_c0,0x102d37c48,uVar3,PTR___sSbN_11034dd40);
    func_0x000107c61574(uVar5);
    if ((uStack_c0 & 1) == 0) {
      uVar6 = *(undefined8 *)(uVar3 + 0x18);
      func_0x000107c6157c(uVar6);
      uVar5 = 0x112f0f0b0;
      func_0x0001000285a8(0x112f0f0b0,&UNK_10db42868);
      func_0x000100087bd4(&uStack_c0,FUN_102d37c5c,uVar3,uVar5);
      func_0x000107c61574(uVar6);
      uVar1 = uStack_c0;
      uVar7 = *(ulong *)(uStack_c0 + 0x10);
      func_0x000107c6157c(param_1);
      if (uVar7 != 0) {
        uVar8 = 0;
        puVar9 = (ulong *)(uVar1 + 0x20);
        do {
          if (*(ulong *)(uVar1 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102d379b4);
            (*pcVar2)();
          }
          uStack_b8 = puVar9[1];
          uStack_c0 = *puVar9;
          uStack_a8 = puVar9[3];
          uStack_b0 = puVar9[2];
          uStack_98 = puVar9[5];
          uStack_a0 = puVar9[4];
          uStack_88 = puVar9[7];
          uStack_90 = puVar9[6];
          uVar8 = uVar8 + 1;
          uStack_f8 = puVar9[1];
          uStack_100 = *puVar9;
          uStack_e8 = puVar9[3];
          uStack_f0 = puVar9[2];
          uStack_d8 = puVar9[5];
          uStack_e0 = puVar9[4];
          uStack_c8 = puVar9[7];
          uStack_d0 = puVar9[6];
          FUN_102d37c04(&uStack_c0,auStack_140);
          func_0x000100087f6c(&uStack_100);
          FUN_102d37ca8(&uStack_c0);
          puVar9 = puVar9 + 8;
        } while (uVar7 != uVar8);
      }
      func_0x000107c61574(param_1);
      func_0x000107c6142c(uVar1);
      uVar5 = *(undefined8 *)(uVar3 + 0x18);
      uStack_b0 = uVar3;
      uStack_a8 = param_1;
      func_0x000107c6157c(uVar5);
      func_0x000100087bd4(FUN_102d37cdc,&uStack_c0,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar5);
      puVar4 = &UNK_1105c6010;
      func_0x000107c613fc(&UNK_1105c6010,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,uVar3);
      func_0x0001000b6d30(0);
      func_0x000107c613fc();
      func_0x000107c6157c(puVar4);
      func_0x0001000b6d50(FUN_102d37cf4,puVar4);
      func_0x000107c61574(puVar4);
    }
    else {
      func_0x000100c7f554();
      func_0x0001000b6d30(0);
      func_0x000107c613fc();
      func_0x0001000b6d50(0x102d383c8,0);
    }
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 102d37c5c; end: 102d37ca7;  */

void FUN_102d37c5c(undefined8 *param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61434();
  return;
}



/* Entry: 102d37ca8; end: 102d37cdb;  */

undefined8 FUN_102d37ca8(undefined8 param_1)

{
  (*(code *)&DAT_10445e5a8)();
  return param_1;
}



/* Entry: 102d37cdc; end: 102d37cf3;  */

void FUN_102d37cdc(void)

{
  long unaff_x20;
  
  FUN_102d379b4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102d37cf4; end: 102d37cfb;  */

void FUN_102d37cf4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    func_0x000107c6157c(uVar2);
    func_0x000100087bd4(FUN_102d37cfc,lVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 102d37cfc; end: 102d37d27;  */

void FUN_102d37cfc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 102d37d28; end: 102d37d4b;  */

undefined8 FUN_102d37d28(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d37d4c; end: 102d37d5f;  */

void FUN_102d37d4c(void)

{
  FUN_102d37b8c();
  return;
}



/* Entry: 102d37d60; end: 102d37d6f;  */

undefined8 * FUN_102d37d60(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  func_0x000107c615f0();
  return param_1;
}



/* Entry: 102d37d70; end: 102d380ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d37d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar2 = param_10;
  func_0x000107c4e26c();
  func_0x000107c61180();
  lVar3 = 0;
  func_0x0001007ebd28();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112f0f378) = param_6;
  *(undefined8 *)(lVar4 + _DAT_112f0f380) = uVar2;
  *(undefined8 *)(lVar4 + _DAT_112f0f388) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c61174();
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar1);
  lVar6 = 0;
  func_0x0001007ebd48();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = param_6;
  *(undefined8 *)(lVar6 + 0x18) = param_13;
  *(undefined8 *)(lVar6 + 0x20) = param_8;
  *(undefined8 *)(lVar6 + 0x28) = param_2;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  func_0x000107c6157c(lVar6);
  lVar4 = param_12;
  func_0x0001007ebd68(param_12,param_9,plVar5,lVar6);
  *(long *)(unaff_x20 + 0x10) = lVar4;
  func_0x0001000285a8(0x112f0f0b8,&UNK_10db42870);
  func_0x000107c613fc();
  func_0x000107c6157c(param_5);
  pcVar7 = FUN_102d381f4;
  func_0x0001000bdd8c(FUN_102d381f4,param_5);
  lVar8 = 0;
  func_0x0001007ec224();
  func_0x000107c613fc();
  *(long *)(lVar8 + 0x10) = lVar4;
  *(code **)(lVar8 + 0x18) = pcVar7;
  *(long *)(unaff_x20 + 0x18) = lVar8;
  func_0x000107c61604(lVar4 + 0xb8,lVar8);
  func_0x0001000285a8(0x112f0f0c0,&UNK_10db89390);
  func_0x000107c6157c(lVar4);
  func_0x000107c6157c(pcVar7);
  uVar2 = param_4;
  func_0x000107c3efb8();
  func_0x000107c61180();
  uVar9 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  lVar10 = 0;
  func_0x0001007ec244();
  func_0x000107c613fc();
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  lVar3 = lVar4;
  func_0x000107c6157c();
  func_0x0001005f60d4();
  *(long *)(lVar10 + 0x20) = lVar3;
  *(undefined8 *)(lVar10 + 0x28) = 0;
  *(undefined8 *)(lVar10 + 0x10) = uVar9;
  *(long *)(lVar10 + 0x18) = lVar4;
  *(long *)(unaff_x20 + 0x20) = lVar10;
  func_0x000107c6157c(lVar10);
  func_0x0001007ec264();
  func_0x000107c61574(lVar10);
  func_0x00010036e178(0);
  func_0x000107c610f8();
  func_0x000107c6157c(lVar8);
  func_0x0001007eca6c();
  func_0x000107c42c20(param_11);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(plVar5);
  func_0x000107c61574(lVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61170(lVar8);
  return unaff_x20;
}



/* Entry: 102d380f0; end: 102d38167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d380f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_11307bf18);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(lStack_38);
  func_0x0001000d224c(&uStack_40);
  func_0x000107c61574(uVar1);
  *param_1 = uStack_40;
  return;
}



/* Entry: 102d38168; end: 102d3818f;  */

undefined8 FUN_102d38168(void)

{
  func_0x000100c82230();
  return 0;
}



/* Entry: 102d38190; end: 102d381c3;  */

void FUN_102d38190(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d381c4; end: 102d381c7;  */

void FUN_102d381c4(void)

{
  return;
}



/* Entry: 102d381c8; end: 102d381f3;  */

undefined8 FUN_102d381c8(void)

{
  func_0x000100c82230();
  return 0;
}



/* Entry: 102d381f4; end: 102d38207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d381f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_11307bf18);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(lStack_38);
  func_0x0001000d224c(&uStack_40);
  func_0x000107c61574(uVar1);
  *param_1 = uStack_40;
  return;
}



/* Entry: 102d38208; end: 102d3836f;  */

/* WARNING: Possible PIC construction at 0x000102d382a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d382f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d382c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d382f4) */
/* WARNING: Removing unreachable block (ram,0x000102d38300) */
/* WARNING: Removing unreachable block (ram,0x000102d382a4) */
/* WARNING: Removing unreachable block (ram,0x000102d382cc) */
/* WARNING: Removing unreachable block (ram,0x000102d3831c) */
/* WARNING: Removing unreachable block (ram,0x000107c615f0) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0590) */

void FUN_102d38208(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  if (lVar1 == 0) {
    lVar5 = 0;
    lVar1 = 0;
    lVar4 = param_2;
  }
  else {
    func_0x000107c40594();
    func_0x000107c61180();
    lVar5 = lVar1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(lVar1);
    lVar1 = param_2;
  }
  func_0x000107c40594();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  lVar3 = lVar4;
  if ((lVar1 != 0) && ((lVar3 = lVar1, lVar5 != lVar2 || (lVar1 != lVar4)))) {
    func_0x000107c605b8(lVar5,lVar1,lVar2,lVar4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
  return;
}



/* Entry: 102d38370; end: 102d383c3;  */

void FUN_102d38370(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d383c4; end: 102d383cb;  */

void FUN_102d383c4(void)

{
  return;
}



/* Entry: 102d383cc; end: 102d3841f;  */

void FUN_102d383cc(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000100c7f554();
    func_0x000107c61574(lVar1);
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102d38420; end: 102d3843f;  */

void FUN_102d38420(void)

{
  FUN_102d383cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d38440; end: 102d3874f;  */

void FUN_102d38440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar6 = *unaff_x20;
  uVar5 = 0;
  lVar1 = lVar6;
  func_0x000107c60714();
  puVar2 = &UNK_1105c6178;
  func_0x000107c613fc(&UNK_1105c6178,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1105c6290;
  func_0x000107c613fc(&UNK_1105c6290,0x68,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_5;
  *(undefined8 *)(puVar3 + 0x28) = param_6;
  *(undefined8 *)(puVar3 + 0x30) = param_7;
  *(undefined8 *)(puVar3 + 0x38) = param_8;
  *(undefined8 *)(puVar3 + 0x40) = param_9;
  *(undefined8 *)(puVar3 + 0x48) = param_1;
  *(undefined8 *)(puVar3 + 0x50) = param_2;
  *(undefined8 *)(puVar3 + 0x58) = param_3;
  *(long *)(puVar3 + 0x60) = lVar6;
  uStack_70 = 0x102d39470;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105c62a8;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_68;
  func_0x000107c61434(param_7);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000101237340(param_8,param_9);
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c5fb28(lVar1,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x0001000d76cc(lVar1 + 0x20,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 102d38750; end: 102d38a0b; -[_TtC19CallUILaunchingImpl19ModularCallLauncher launchFor:convoMetadata:callLaunchAction:on:notificationId:onNotificationCleared:] */

/* WARNING: Possible PIC construction at 0x000102d38874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d38878) */

void FUN_102d38750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  func_0x000107c5faec();
  if (param_7 == 0) {
    param_7 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_7);
  }
  if (param_8 == 0) {
    puVar3 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = &UNK_1105c6268;
    func_0x000107c613fc(&UNK_1105c6268,0x18,7);
    *(long *)(puVar3 + 0x10) = param_8;
    uVar4 = 0x102d394bc;
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c6157c(param_1);
  FUN_102d38440(param_3,param_2,param_4,param_5,param_6,param_7,uVar2,uVar4,puVar3);
  func_0x000101237350(uVar4,puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d38a0c; end: 102d38b13;  */

void FUN_102d38a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined1 *puStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = auStack_a8;
  uVar2 = 0;
  func_0x000107c61428(param_1 + 0x10,puVar1,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61174();
    func_0x000104460630();
    uStack_80 = uVar2 & 0xc1;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uStack_90 = param_2;
    puStack_88 = puVar1;
    uStack_78 = param_3;
    uStack_70 = param_4;
    uStack_68 = param_5;
    uStack_60 = param_6;
    uStack_58 = param_7;
    func_0x000107c61434(param_5);
    func_0x000107c61174(param_3);
    func_0x000101237340(param_6,param_7);
    func_0x000107c6157c(uVar3);
    FUN_102d36c18(&uStack_90,param_8);
    func_0x000107c6142c(param_5);
    func_0x000107c61170(param_3);
    func_0x000107c61574(uVar3);
    func_0x000101237350(param_6,param_7);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102d38b14; end: 102d38c2f; -[_TtC19CallUILaunchingImpl19ModularCallLauncher launchFor:callLaunchAction:on:notificationId:onNotificationCleared:] */

void FUN_102d38b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  if (param_7 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1105c61f0;
    func_0x000107c613fc(&UNK_1105c61f0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_7;
    pcVar3 = FUN_102d39428;
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c6157c(param_1);
  func_0x000102d3889c(param_3,param_4,param_5,param_6,param_2,pcVar3,puVar2);
  func_0x000101237350(pcVar3,puVar2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d38c30; end: 102d38d33;  */

void FUN_102d38c30(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar6 = *unaff_x20;
  uVar5 = 0;
  lVar1 = lVar6;
  func_0x000107c60714(lVar6,0);
  puVar2 = &UNK_1105c6178;
  func_0x000107c613fc(&UNK_1105c6178,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1105c61a0;
  func_0x000107c613fc(&UNK_1105c61a0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar6;
  pcStack_50 = FUN_102d3919c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105c61b8;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c5fb28(lVar1,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x0001000d76cc(lVar1 + 0x20,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 102d38d34; end: 102d38e1b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_102d38d34(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  long *plStack_98;
  long alStack_90 [9];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x98);
    alStack_90[1] = 0;
    alStack_90[2] = 0;
    alStack_90[3] = 0x8000000000000000;
    alStack_90[5] = 0;
    alStack_90[4] = 0;
    alStack_90[7] = 0;
    alStack_90[6] = 0;
    alStack_90[8] = 0;
    plStack_98 = alStack_90 + 1;
    uStack_a0 = uVar2;
    func_0x000107c6157c(uVar2);
    uVar1 = 0x112f0f0a0;
    func_0x0001000285a8(0x112f0f0a0,&UNK_10db42858);
    func_0x000100087bd4(alStack_90,FUN_102d39310,auStack_b0,uVar1);
    if (alStack_90[0] != 0) {
      func_0x000107c6157c(alStack_90[0]);
      func_0x000100087f6c(alStack_90 + 1);
      func_0x000107c61578(alStack_90[0],2);
    }
    func_0x000107c61574(uVar2);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102d38e1c; end: 102d38e43; -[_TtC19CallUILaunchingImpl19ModularCallLauncher dismiss] */

void FUN_102d38e1c(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_102d38c30();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102d38e44; end: 102d38f63;  */

/* WARNING: Removing unreachable block (ram,0x000102d38e7c) */

uint FUN_102d38e44(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char acStack_50 [8];
  long lStack_48;
  
  lVar2 = param_2;
  func_0x000104886d18(acStack_50);
  if (lStack_48 != 0) {
    if (acStack_50[0] == '\0') {
      if (param_2 == 0) {
        func_0x000107c615e8(lStack_48);
        uVar3 = 1;
      }
      else {
        lVar1 = lStack_48;
        func_0x000107c614f0();
        func_0x000107c615f0(lStack_48);
        func_0x00010446afdc();
        func_0x000107c615e8(lStack_48);
        func_0x000107c61170(param_3);
        if ((lVar1 == param_1) && (param_2 == lVar2)) {
          func_0x000107c615e8(lStack_48);
          func_0x000107c6142c(lVar2);
          uVar3 = 1;
        }
        else {
          func_0x000107c605b8(lVar1,lVar2,param_1,param_2,0);
          uVar3 = (uint)lVar1;
          func_0x000107c615e8(lStack_48);
          func_0x000107c6142c(lVar2);
        }
      }
      goto LAB_102d38e88;
    }
    func_0x000107c615e8(lStack_48);
  }
  uVar3 = 0;
LAB_102d38e88:
  return uVar3 & 1;
}



/* Entry: 102d38f64; end: 102d38fd3; -[_TtC19CallUILaunchingImpl19ModularCallLauncher isCallLaunchedFor:] */

uint FUN_102d38f64(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c6157c(param_1);
  FUN_102d38e44(param_3,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 102d38fd4; end: 102d39117;  */

/* WARNING: Removing unreachable block (ram,0x000102d3900c) */

uint FUN_102d38fd4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  char acStack_60 [8];
  long lStack_58;
  
  func_0x000104886d18(acStack_60);
  if (lStack_58 != 0) {
    if (acStack_60[0] == '\0') {
      if (param_1 == 0) {
        func_0x000107c615e8(lStack_58);
        uVar5 = 1;
      }
      else {
        func_0x000107c615f0(param_1);
        lVar1 = lStack_58;
        func_0x000107c40594();
        func_0x000107c61180();
        lVar2 = lVar1;
        func_0x000107c5faec();
        lVar4 = param_2;
        func_0x000107c61170(lVar1);
        lVar1 = param_1;
        func_0x000107c40594();
        func_0x000107c61180();
        lVar3 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        if ((lVar2 == lVar3) && (param_2 == lVar4)) {
          uVar5 = 1;
        }
        else {
          func_0x000107c605b8(lVar2,param_2,lVar3,lVar4,0);
          uVar5 = (uint)lVar2;
        }
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(lVar4);
        func_0x000107c615e8(lStack_58);
        func_0x000107c615e8(param_1);
      }
      goto LAB_102d39018;
    }
    func_0x000107c615e8(lStack_58);
  }
  uVar5 = 0;
LAB_102d39018:
  return uVar5 & 1;
}



/* Entry: 102d39118; end: 102d3916f; -[_TtC19CallUILaunchingImpl19ModularCallLauncher isCallLaunchedForTalkContext:] */

uint FUN_102d39118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_1);
  uVar1 = param_3;
  FUN_102d38fd4(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61574(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102d39170; end: 102d3919b;  */

void FUN_102d39170(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d3919c; end: 102d391bf;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_102d3919c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  long *plStack_98;
  long alStack_90 [9];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x98);
    alStack_90[1] = 0;
    alStack_90[2] = 0;
    alStack_90[3] = 0x8000000000000000;
    alStack_90[5] = 0;
    alStack_90[4] = 0;
    alStack_90[7] = 0;
    alStack_90[6] = 0;
    alStack_90[8] = 0;
    plStack_98 = alStack_90 + 1;
    uStack_a0 = uVar3;
    func_0x000107c6157c(uVar3);
    uVar2 = 0x112f0f0a0;
    func_0x0001000285a8(0x112f0f0a0,&UNK_10db42858);
    func_0x000100087bd4(alStack_90,FUN_102d39310,auStack_b0,uVar2);
    if (alStack_90[0] != 0) {
      func_0x000107c6157c(alStack_90[0]);
      func_0x000100087f6c(alStack_90 + 1);
      func_0x000107c61578(alStack_90[0],2);
    }
    func_0x000107c61574(uVar3);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102d391c0; end: 102d392c7;  */

undefined * FUN_102d391c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d392c8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f0f370;
    func_0x0001000285a8(0x112f0f370,&UNK_10db429f0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_110772810);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102d392c8; end: 102d3930f;  */

void FUN_102d392c8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long unaff_x21;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_58 = param_3[1];
  uStack_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  uStack_38 = param_3[5];
  uStack_40 = param_3[4];
  uStack_28 = param_3[7];
  uStack_30 = param_3[6];
  FUN_102d39328(param_2,&uStack_60);
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    func_0x000107c6157c();
  }
  return;
}



/* Entry: 102d39310; end: 102d39327;  */

void FUN_102d39310(void)

{
  long unaff_x20;
  
  FUN_102d392c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102d39328; end: 102d39427;  */

long FUN_102d39328(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_90 [64];
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    func_0x000107c61428(param_1 + 0x10,auStack_90,0x21,0);
    uVar5 = *(ulong *)(param_1 + 0x10);
    uVar2 = uVar5;
    func_0x000107c61558();
    *(ulong *)(param_1 + 0x10) = uVar5;
    uVar3 = uVar5;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_102d391c0(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      *(ulong *)(param_1 + 0x10) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_102d391c0(uVar5,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
    lVar1 = uVar5 + uVar2 * 0x40;
    uVar7 = param_2[1];
    uVar6 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    uVar10 = param_2[4];
    uVar12 = param_2[7];
    uVar11 = param_2[6];
    *(undefined8 *)(lVar1 + 0x48) = param_2[5];
    *(undefined8 *)(lVar1 + 0x40) = uVar10;
    *(undefined8 *)(lVar1 + 0x58) = uVar12;
    *(undefined8 *)(lVar1 + 0x50) = uVar11;
    *(undefined8 *)(lVar1 + 0x28) = uVar7;
    *(undefined8 *)(lVar1 + 0x20) = uVar6;
    *(undefined8 *)(lVar1 + 0x38) = uVar9;
    *(undefined8 *)(lVar1 + 0x30) = uVar8;
    *(ulong *)(param_1 + 0x10) = uVar5;
    func_0x000107c614a8(auStack_90);
    FUN_102d37c04(param_2,auStack_90);
  }
  return lVar4;
}



/* Entry: 102d39428; end: 102d3943b;  */

void FUN_102d39428(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102d39438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102d3943c; end: 102d394ab;  */

void FUN_102d3943c(void)

{
  long unaff_x20;
  
  FUN_102d38a0c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102d394ac; end: 102d394bf;  */

void FUN_102d394ac(long param_1,long param_2)

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



/* Entry: 102d394c0; end: 102d395bf;  */

void FUN_102d394c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_a0 [16];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c614f0();
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x00010446dcb4(FUN_102d39e10,auStack_70,0x102d39e1c,auStack_a0);
  return;
}



/* Entry: 102d395c0; end: 102d39953;  */

/* WARNING: Possible PIC construction at 0x000102d39614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d39650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d39784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d397b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d397c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d398b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d398c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d39924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d39914: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d39928) */
/* WARNING: Removing unreachable block (ram,0x000102d398c4) */
/* WARNING: Removing unreachable block (ram,0x000102d398b4) */
/* WARNING: Removing unreachable block (ram,0x000102d397bc) */
/* WARNING: Removing unreachable block (ram,0x000102d39788) */
/* WARNING: Removing unreachable block (ram,0x000102d39654) */
/* WARNING: Removing unreachable block (ram,0x000102d396bc) */
/* WARNING: Removing unreachable block (ram,0x000102d397cc) */
/* WARNING: Removing unreachable block (ram,0x000102d397d4) */
/* WARNING: Removing unreachable block (ram,0x000102d39910) */
/* WARNING: Removing unreachable block (ram,0x000102d3988c) */
/* WARNING: Removing unreachable block (ram,0x000102d396d0) */
/* WARNING: Removing unreachable block (ram,0x000102d39618) */
/* WARNING: Removing unreachable block (ram,0x000102d398cc) */
/* WARNING: Removing unreachable block (ram,0x000102d3961c) */
/* WARNING: Removing unreachable block (ram,0x000102d398ec) */
/* WARNING: Removing unreachable block (ram,0x000102d39638) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000102d39918) */
/* WARNING: Removing unreachable block (ram,0x000102d3991c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d395c0(undefined8 param_1)

{
  func_0x00010451338c();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d39954; end: 102d39a13;  */

/* WARNING: Possible PIC construction at 0x000102d399f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d399f8) */

void FUN_102d39954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_1105c62f0;
  func_0x000107c613fc(&UNK_1105c62f0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  puVar2 = &UNK_1105c6318;
  func_0x000107c613fc(&UNK_1105c6318,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(puVar1);
  FUN_102d39ac4(param_1,param_2,0x102d39e28,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102d39a14; end: 102d39ac3;  */

void FUN_102d39a14(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c5db08();
    func_0x000107c61180();
    if (param_1 != 0) {
      puVar1 = PTR_PTR_1126ae6c0;
      func_0x000107c61168(PTR_PTR_1126ae6c0);
      func_0x000107c5daf4();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 != 0) {
        FUN_102d395c0(puVar1,param_3);
        func_0x000107c61170(param_2);
      }
      func_0x000107c61170(puVar1);
    }
  }
  return;
}



/* Entry: 102d39ac4; end: 102d39c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d39ac4(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar3 = *(long *)(unaff_x20 + _DAT_112f0f388);
  func_0x000107c5b484();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      (*param_3)(0);
    }
    else {
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      *(undefined8 *)(lVar3 + 0x20) = param_1;
      *(undefined8 *)(lVar3 + 0x28) = param_2;
      func_0x000107c61434(param_2);
      lVar5 = lVar3;
      func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar3);
      uVar6 = 0;
      FUN_102d39e5c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      puVar7 = &UNK_1105c6340;
      func_0x000107c613fc(&UNK_1105c6340,0x28,7);
      *(code **)(puVar7 + 0x10) = param_3;
      *(undefined8 *)(puVar7 + 0x18) = param_4;
      *(long *)(puVar7 + 0x20) = lVar2;
      uStack_60 = 0x102d39e34;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100f6151c;
      puStack_68 = &UNK_1105c6358;
      puStack_58 = puVar7;
      func_0x000107c60bc4(&puStack_80);
      puVar7 = puStack_58;
      func_0x000107c6157c(param_4);
      func_0x000107c61574(puVar7);
      func_0x000107c4b7e8(lVar4);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar6);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d39c94);
  (*pcVar1)();
}



/* Entry: 102d39c94; end: 102d39d67;  */

void FUN_102d39c94(ulong param_1,long param_2,code *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 != 0) {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar3 = *(ulong *)(uVar4 + 0x10);
    }
    else {
      uVar3 = param_1;
      if (-1 < (long)param_1) {
        uVar3 = uVar4;
      }
      func_0x000107c60480();
    }
    if ((uVar3 != 0) && (param_2 == 0)) {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102d39d68);
          (*pcVar1)();
        }
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c61174(uVar2);
      }
      else {
        uVar2 = 0;
        func_0x00010103193c(0,param_1);
      }
      (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  (*param_3)(0);
  return;
}



/* Entry: 102d39d68; end: 102d39dc7; -[_TtC19CallUILaunchingImpl21ReplyWithSnapLauncher init] */

void FUN_102d39d68(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallUILaunchingImpl.ReplyWithSnapLauncher",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d39d94);
  (*pcVar1)();
}



/* Entry: 102d39dc8; end: 102d39e0f; -[_TtC19CallUILaunchingImpl21ReplyWithSnapLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d39de4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d39de8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d39dc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0f378));
  return;
}



/* Entry: 102d39e10; end: 102d39e5b;  */

/* WARNING: Possible PIC construction at 0x000102d39598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3959c) */

void FUN_102d39e10(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR_PTR_1126ae6c0;
  func_0x000107c61168(PTR_PTR_1126ae6c0,uVar1,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c44550(puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102d39e5c; end: 102d39e9b;  */

void FUN_102d39e5c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102d39e9c; end: 102d39fbb;  */

/* WARNING: Possible PIC construction at 0x000102d39edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d39f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d39f9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d39f84) */
/* WARNING: Removing unreachable block (ram,0x000102d39ee0) */
/* WARNING: Removing unreachable block (ram,0x000102d39fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d39e9c(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0f3b8);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126aead8;
    func_0x000107c610f8(PTR_PTR_1126aead8);
    func_0x000107c4807c();
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0f3c0);
    func_0x000107c610f8(PTR_PTR_1126af668);
    func_0x000107c47d3c();
    func_0x000107c61174(puVar1);
    func_0x000107c3ed20(uVar3);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d39fbc; end: 102d3a03f;  */

/* WARNING: Possible PIC construction at 0x000102d39ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3a014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d39ffc) */
/* WARNING: Removing unreachable block (ram,0x000102d3a018) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d39fbc(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d3a040; end: 102d3a09f; -[_TtC30ContactsNavigationServicesImpl23AddFriendsSheetLauncher init] */

void FUN_102d3a040(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactsNavigationServicesImpl.AddFriendsSheetLauncher",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d3a06c);
  (*pcVar1)();
}



/* Entry: 102d3a0a0; end: 102d3a0d7; -[_TtC30ContactsNavigationServicesImpl23AddFriendsSheetLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d3a0bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3a0c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3a0a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0f3b8));
  return;
}



/* Entry: 102d3a0d8; end: 102d3a0db; -[_TtC30ContactsNavigationServicesImpl23AddFriendsSheetLauncher addFriendsWorkflowCompleted:] */

/* WARNING: Possible PIC construction at 0x000102d39ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3a014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d39ffc) */
/* WARNING: Removing unreachable block (ram,0x000102d3a018) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3a0d8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d3a0dc; end: 102d3a0df; -[_TtC30ContactsNavigationServicesImpl23AddFriendsSheetLauncher addFriendsWorkflowSkipped:] */

/* WARNING: Possible PIC construction at 0x000102d39ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3a014: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d39ffc) */
/* WARNING: Removing unreachable block (ram,0x000102d3a018) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3a0dc(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102d3a0e0; end: 102d3a183;  */

undefined * FUN_102d3a0e0(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR_PTR_1126c82f8;
  func_0x000107c61168();
  func_0x000107c3d130();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar4 = puVar2;
    func_0x000107c508f0();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar4;
      func_0x000107c4f078();
      func_0x000107c61180();
      while (puVar2 != (undefined *)0x0) {
        func_0x000107c61170(puVar4);
        puVar3 = puVar2;
        func_0x000107c4f078();
        func_0x000107c61180();
        puVar4 = puVar2;
        puVar2 = puVar3;
      }
    }
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d3a184);
  (*pcVar1)();
}



/* Entry: 102d3a184; end: 102d3a51f;  */

/* WARNING: Possible PIC construction at 0x000102d3a1e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3a268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3a1ec) */
/* WARNING: Removing unreachable block (ram,0x000102d3a23c) */
/* WARNING: Removing unreachable block (ram,0x000102d3a294) */
/* WARNING: Removing unreachable block (ram,0x000102d3a244) */
/* WARNING: Removing unreachable block (ram,0x000102d3a234) */
/* WARNING: Removing unreachable block (ram,0x000102d3a248) */
/* WARNING: Removing unreachable block (ram,0x000102d3a26c) */

void FUN_102d3a184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ac310;
  func_0x000107c610f8(PTR_PTR_1126ac310);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c53964(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d3a520; end: 102d3a553;  */

void FUN_102d3a520(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102d3a554; end: 102d3a55b;  */

/* WARNING: Possible PIC construction at 0x000102d3a1e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3a268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3a1ec) */
/* WARNING: Removing unreachable block (ram,0x000102d3a23c) */
/* WARNING: Removing unreachable block (ram,0x000102d3a294) */
/* WARNING: Removing unreachable block (ram,0x000102d3a244) */
/* WARNING: Removing unreachable block (ram,0x000102d3a234) */
/* WARNING: Removing unreachable block (ram,0x000102d3a248) */
/* WARNING: Removing unreachable block (ram,0x000102d3a26c) */

void FUN_102d3a554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ac310;
  func_0x000107c610f8(PTR_PTR_1126ac310);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c53964(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d3a55c; end: 102d3a5df;  */

void FUN_102d3a55c(long param_1,code *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))();
  if (param_1 != 0) {
    FUN_102d39e9c();
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 102d3a5e0; end: 102d3a607;  */

void FUN_102d3a5e0(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 102d3a608; end: 102d3a623;  */

void FUN_102d3a608(long param_1,long param_2)

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



/* Entry: 102d3a624; end: 102d3a6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3a624(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112f0f4a0;
  puVar3 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0f4a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0f4b0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[6] = 0;
  puVar1[5] = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0f4b8) = 0x402e000000000000;
  lVar2 = _DAT_112f0f4c0;
  puVar3 = &UNK_10db42b20;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0f4c8) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d3a6fc; end: 102d3a9a7;  */

/* WARNING: Possible PIC construction at 0x000102d3a834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3a838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3a6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_c8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f0f4a0);
  func_0x000107c4b940(uVar9);
  lVar13 = *(long *)(unaff_x20 + _DAT_112f0f4a8);
  if (lVar13 == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0f4b0);
    lVar13 = puVar1[5];
    if (lVar13 != 1) {
      uVar7 = *puVar1;
      uVar2 = puVar1[1];
      uVar14 = puVar1[2];
      uVar12 = puVar1[6];
      uVar5 = *(undefined1 *)(puVar1 + 3);
      if (lVar13 == 0) {
        uStack_c8 = 0;
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = &UNK_1105c6490;
        func_0x000107c613fc(&UNK_1105c6490,0x20,7);
        *(long *)(puVar11 + 0x10) = lVar13;
        *(undefined8 *)(puVar11 + 0x18) = uVar12;
        uStack_c8 = 0x102d3ab90;
      }
      func_0x000102d3ab40(uVar7,uVar2,uVar14,uVar5);
      func_0x000100b64c10(lVar13,uVar12);
      func_0x000101c92590(uVar7,uVar2,uVar14,uVar5);
      func_0x0001008f65e4(uStack_c8,puVar11);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f0f4c8);
    func_0x000102d3ab40(param_2,param_3,param_4,param_5);
    func_0x000107c40fd4(uVar7);
    uVar7 = *puVar1;
    uVar14 = puVar1[1];
    uVar2 = puVar1[2];
    uVar3 = puVar1[3];
    uVar12 = puVar1[4];
    uVar4 = puVar1[5];
    uVar10 = puVar1[6];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = param_5 & 0xff;
    puVar1[4] = param_1;
    puVar1[5] = param_6;
    puVar1[6] = param_7;
    func_0x000100b64c10();
    FUN_102d3ab58(uVar7,uVar14,uVar2,uVar3,uVar12,uVar4,uVar10);
  }
  else {
    lVar8 = ((long *)(unaff_x20 + _DAT_112f0f4a8))[1];
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f0f4c0);
    puVar11 = &UNK_1105c64b8;
    func_0x000107c613fc(&UNK_1105c64b8,0x50,7);
    *(undefined8 *)(puVar11 + 0x10) = param_2;
    *(undefined8 *)(puVar11 + 0x18) = param_3;
    *(undefined8 *)(puVar11 + 0x20) = param_4;
    puVar11[0x28] = (char)param_5;
    *(long *)(puVar11 + 0x30) = lVar13;
    *(long *)(puVar11 + 0x38) = lVar8;
    *(undefined8 *)(puVar11 + 0x40) = param_6;
    *(undefined8 *)(puVar11 + 0x48) = param_7;
    pcStack_70 = FUN_102d3abb0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105c64d0;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar11;
    func_0x000107c60bc4(ppuVar6);
    puVar11 = puStack_68;
    func_0x000107c615f4(lVar13,2);
    FUN_102d3ab3c(param_2,param_3,param_4,param_5);
    func_0x000100b64c10(param_6,param_7);
    func_0x000107c61574(puVar11);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar9,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 102d3a9a8; end: 102d3aa63;  */

void FUN_102d3a9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  
  if (param_4 == '\0') {
    func_0x000107c614f0(param_5);
    pcVar1 = *(code **)(param_6 + 8);
  }
  else {
    if (param_4 != '\x01') {
      func_0x000107c614f0(param_5);
      (**(code **)(param_6 + 0x18))(param_1,param_7,param_8,param_5,param_6);
      return;
    }
    func_0x000107c614f0();
    pcVar1 = *(code **)(param_6 + 0x10);
  }
  (*pcVar1)(param_1,param_2,param_3,param_7,param_8,param_5,param_6);
  return;
}



/* Entry: 102d3aa64; end: 102d3aac3; -[_TtC30ContactsNavigationServicesImpl24ContactsNavigationBroker init] */

void FUN_102d3aa64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactsNavigationServicesImpl.ContactsNavigationBroker",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d3aa90);
  (*pcVar1)();
}



/* Entry: 102d3aac4; end: 102d3ab3b; -[_TtC30ContactsNavigationServicesImpl24ContactsNavigationBroker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d3aaf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d3ab20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3aaf4) */
/* WARNING: Removing unreachable block (ram,0x000102d3ab24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3aac4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0f4a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f0f4a8));
  return;
}



/* Entry: 102d3ab3c; end: 102d3ab57;  */

/* WARNING: Possible PIC construction at 0x000102d3a834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d3a838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d3ab3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_c8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f0f4a0);
  func_0x000107c4b940(uVar9);
  lVar13 = *(long *)(unaff_x20 + _DAT_112f0f4a8);
  if (lVar13 == 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0f4b0);
    lVar13 = puVar1[5];
    if (lVar13 != 1) {
      uVar7 = *puVar1;
      uVar2 = puVar1[1];
      uVar14 = puVar1[2];
      uVar12 = puVar1[6];
      uVar5 = *(undefined1 *)(puVar1 + 3);
      if (lVar13 == 0) {
        uStack_c8 = 0;
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = &UNK_1105c6490;
        func_0x000107c613fc(&UNK_1105c6490,0x20,7);
        *(long *)(puVar11 + 0x10) = lVar13;
        *(undefined8 *)(puVar11 + 0x18) = uVar12;
        uStack_c8 = 0x102d3ab90;
      }
      FUN_102d3ab3c(uVar7,uVar2,uVar14,uVar5);
      func_0x000100b64c10(lVar13,uVar12);
      func_0x000101c92590(uVar7,uVar2,uVar14,uVar5);
      func_0x0001008f65e4(uStack_c8,puVar11);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f0f4c8);
    FUN_102d3ab3c(param_2,param_3,param_4,param_5);
    func_0x000107c40fd4(uVar7);
    uVar7 = *puVar1;
    uVar14 = puVar1[1];
    uVar2 = puVar1[2];
    uVar3 = puVar1[3];
    uVar12 = puVar1[4];
    uVar4 = puVar1[5];
    uVar10 = puVar1[6];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = param_5 & 0xff;
    puVar1[4] = param_1;
    puVar1[5] = param_6;
    puVar1[6] = param_7;
    func_0x000100b64c10();
    FUN_102d3ab58(uVar7,uVar14,uVar2,uVar3,uVar12,uVar4,uVar10);
  }
  else {
    lVar8 = ((long *)(unaff_x20 + _DAT_112f0f4a8))[1];
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f0f4c0);
    puVar11 = &UNK_1105c64b8;
    func_0x000107c613fc(&UNK_1105c64b8,0x50,7);
    *(undefined8 *)(puVar11 + 0x10) = param_2;
    *(undefined8 *)(puVar11 + 0x18) = param_3;
    *(undefined8 *)(puVar11 + 0x20) = param_4;
    puVar11[0x28] = (char)param_5;
    *(long *)(puVar11 + 0x30) = lVar13;
    *(long *)(puVar11 + 0x38) = lVar8;
    *(undefined8 *)(puVar11 + 0x40) = param_6;
    *(undefined8 *)(puVar11 + 0x48) = param_7;
    pcStack_70 = FUN_102d3abb0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105c64d0;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar11;
    func_0x000107c60bc4(ppuVar6);
    puVar11 = puStack_68;
    func_0x000107c615f4(lVar13,2);
    FUN_102d3ab3c(param_2,param_3,param_4,param_5);
    func_0x000100b64c10(param_6,param_7);
    func_0x000107c61574(puVar11);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar9,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 102d3ab58; end: 102d3abaf;  */

void FUN_102d3ab58(void)

{
  long in_x5;
  undefined8 in_x6;
  
  if (in_x5 == 1) {
    return;
  }
  func_0x000101c92590();
  if (in_x5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(in_x6);
    return;
  }
  return;
}



/* Entry: 102d3abb0; end: 102d3abcf;  */

void FUN_102d3abb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  if (*(char *)(unaff_x20 + 0x28) == '\0') {
    func_0x000107c614f0(uVar6);
    pcVar8 = *(code **)(lVar4 + 8);
  }
  else {
    if (*(char *)(unaff_x20 + 0x28) != '\x01') {
      func_0x000107c614f0(uVar6);
      (**(code **)(lVar4 + 0x18))(uVar1,uVar2,uVar5,uVar6,lVar4);
      return;
    }
    func_0x000107c614f0();
    pcVar8 = *(code **)(lVar4 + 0x10);
  }
  (*pcVar8)(uVar1,uVar3,uVar7,uVar2,uVar5,uVar6,lVar4);
  return;
}


