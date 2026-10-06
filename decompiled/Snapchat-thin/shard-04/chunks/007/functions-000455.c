/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037a87e8; end: 1037a882f;  */

/* WARNING: Possible PIC construction at 0x0001037a87d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037a87d4) */

void FUN_1037a87e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR_PTR_1126ad738;
  func_0x000107c610f8(PTR_PTR_1126ad738);
  func_0x000107c453e4();
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000106cc7208(puVar2,uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1037a8830; end: 1037a8a53;  */

void FUN_1037a8830(undefined1 param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000112f93038 != -1) {
    func_0x000107c61568(0x112f93038,FUN_1037a838c);
  }
  uStack_a8 = uRam0000000112f93040;
  puVar3 = &UNK_110693350;
  func_0x000107c613fc(&UNK_110693350,0x12,7);
  puVar3[0x10] = param_2;
  puVar3[0x11] = param_1;
  pcStack_70 = FUN_1037a9520;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110693368;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4af88;
  FUN_1037a958c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = 0x112d4af98;
  func_0x0001037a95cc(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar8,&puStack_98,uVar6,uVar7,lVar1,uVar5);
  func_0x000107c5ffe8(0,lVar9,puVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lStack_a0 + 8))(puVar8,lVar1);
  (**(code **)(lVar10 + 8))(lVar9,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 1037a8a54; end: 1037a8d07;  */

/* WARNING: Possible PIC construction at 0x0001037a8ce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037a8ce4) */

void FUN_1037a8a54(byte param_1,byte param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x64657070696b73;
  puVar3 = PTR_PTR_1126ad738;
  func_0x000107c610f8(PTR_PTR_1126ad738);
  func_0x000107c453e4();
  if (param_1 < 4) {
    uVar4 = 0x656e696c65736162;
    if (param_1 != 2) {
      uVar4 = 0x645f6e6f5f766564;
    }
    uVar6 = 0xe800000000000000;
    if (param_1 != 2) {
      uVar6 = 0xed0000646e616d65;
    }
    uVar5 = uVar7;
    if (param_1 != 0) {
      uVar5 = 0xd000000000000015;
    }
    uVar1 = 0xe700000000000000;
    if (param_1 != 0) {
      uVar1 = 0x800000010f1646f0;
    }
    if (param_1 < 2) {
      uVar4 = uVar5;
      uVar6 = uVar1;
    }
  }
  else {
    pcVar2 = "spectrum_logger_nil";
    uVar5 = 0xd000000000000015;
    if (param_1 != 7) {
      pcVar2 = "rvicesLoader.swift";
      uVar5 = 0xd000000000000013;
    }
    uVar4 = 0x73736563637573;
    if (param_1 != 6) {
      uVar4 = uVar5;
    }
    uVar6 = 0xe700000000000000;
    if (param_1 != 6) {
      uVar6 = (ulong)pcVar2 | 0x8000000000000000;
    }
    uVar5 = 0x7472617473;
    if (param_1 != 4) {
      uVar5 = 0x646e65;
    }
    uVar1 = 0xe500000000000000;
    if (param_1 != 4) {
      uVar1 = 0xe300000000000000;
    }
    if (param_1 < 6) {
      uVar4 = uVar5;
      uVar6 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  if (param_2 < 4) {
    uVar5 = 0x656e696c65736162;
    if (param_2 != 2) {
      uVar5 = 0x645f6e6f5f766564;
    }
    uVar6 = 0xe800000000000000;
    if (param_2 != 2) {
      uVar6 = 0xed0000646e616d65;
    }
    if (param_2 != 0) {
      uVar7 = 0xd000000000000015;
    }
    uVar1 = 0xe700000000000000;
    if (param_2 != 0) {
      uVar1 = 0x800000010f1646f0;
    }
    if (param_2 < 2) {
      uVar5 = uVar7;
      uVar6 = uVar1;
    }
  }
  else {
    pcVar2 = "spectrum_logger_nil";
    uVar7 = 0xd000000000000015;
    if (param_2 != 7) {
      pcVar2 = "rvicesLoader.swift";
      uVar7 = 0xd000000000000013;
    }
    uVar5 = 0x73736563637573;
    if (param_2 != 6) {
      uVar5 = uVar7;
    }
    uVar6 = 0xe700000000000000;
    if (param_2 != 6) {
      uVar6 = (ulong)pcVar2 | 0x8000000000000000;
    }
    uVar7 = 0x7472617473;
    if (param_2 != 4) {
      uVar7 = 0x646e65;
    }
    uVar1 = 0xe500000000000000;
    if (param_2 != 4) {
      uVar1 = 0xe300000000000000;
    }
    if (param_2 < 6) {
      uVar5 = uVar7;
      uVar6 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000106cc6dec(puVar3,uVar4,uVar5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1037a8d08; end: 1037a8d1b;  */

void FUN_1037a8d08(void)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar7 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar8 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000112f93038 != -1) {
    func_0x000107c61568(0x112f93038,FUN_1037a838c);
  }
  pcStack_70 = FUN_1037a8f08;
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110693390;
  ppuVar3 = &puStack_90;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c5f808(lVar2);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4af88;
  FUN_1037a958c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = 0x112d4af98;
  func_0x0001037a95cc(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar7,&puStack_98,uVar5,uVar6,lVar1,uVar4);
  func_0x000107c5ffe8(0,lVar2,puVar7,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  (**(code **)(lStack_a0 + 8))(puVar7,lVar1);
  (**(code **)(lVar8 + 8))(lVar2,lStack_a8);
  return;
}



/* Entry: 1037a8d1c; end: 1037a8f07;  */

void FUN_1037a8d1c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar7 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar8 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000112f93038 != -1) {
    func_0x000107c61568(0x112f93038,FUN_1037a838c);
  }
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  ppuVar3 = &puStack_90;
  uStack_78 = param_2;
  uStack_70 = param_1;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c5f808(lVar2);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4af88;
  FUN_1037a958c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = 0x112d4af98;
  func_0x0001037a95cc(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar7,&puStack_98,uVar5,uVar6,lVar1,uVar4);
  func_0x000107c5ffe8(0,lVar2,puVar7,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  (**(code **)(lStack_a0 + 8))(puVar7,lVar1);
  (**(code **)(lVar8 + 8))(lVar2,lStack_a8);
  return;
}



/* Entry: 1037a8f08; end: 1037a8f13;  */

void FUN_1037a8f08(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ad738;
  func_0x000107c610f8(PTR_PTR_1126ad738);
  func_0x000107c453e4();
  (*(code *)&UNK_106cc74f0)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1037a8f14; end: 1037a8f4f;  */

void FUN_1037a8f14(code *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ad738;
  func_0x000107c610f8(PTR_PTR_1126ad738);
  func_0x000107c453e4();
  (*param_1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1037a8f50; end: 1037a916b;  */

void FUN_1037a8f50(undefined1 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000112f93038 != -1) {
    func_0x000107c61568(0x112f93038,FUN_1037a838c);
  }
  uStack_a8 = uRam0000000112f93040;
  puVar3 = &UNK_1106933c8;
  func_0x000107c613fc(&UNK_1106933c8,0x11,7);
  puVar3[0x10] = param_1;
  pcStack_70 = FUN_1037a952c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1106933e0;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4af88;
  FUN_1037a958c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = 0x112d4af98;
  func_0x0001037a95cc(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar8,&puStack_98,uVar6,uVar7,lVar1,uVar5);
  func_0x000107c5ffe8(0,lVar9,puVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lStack_a0 + 8))(puVar8,lVar1);
  (**(code **)(lVar10 + 8))(lVar9,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 1037a916c; end: 1037a92f3;  */

/* WARNING: Possible PIC construction at 0x0001037a92dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037a92e0) */

void FUN_1037a916c(byte param_1,code *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  puVar3 = PTR_PTR_1126ad738;
  func_0x000107c610f8(PTR_PTR_1126ad738);
  func_0x000107c453e4();
  if (param_1 < 4) {
    uVar5 = 0x64657070696b73;
    uVar4 = 0x656e696c65736162;
    if (param_1 != 2) {
      uVar4 = 0x645f6e6f5f766564;
    }
    uVar6 = 0xe800000000000000;
    if (param_1 != 2) {
      uVar6 = 0xed0000646e616d65;
    }
    if (param_1 != 0) {
      uVar5 = 0xd000000000000015;
    }
    uVar1 = 0xe700000000000000;
    if (param_1 != 0) {
      uVar1 = 0x800000010f1646f0;
    }
    if (param_1 < 2) {
      uVar4 = uVar5;
      uVar6 = uVar1;
    }
  }
  else {
    pcVar2 = "spectrum_logger_nil";
    uVar5 = 0xd000000000000015;
    if (param_1 != 7) {
      pcVar2 = "rvicesLoader.swift";
      uVar5 = 0xd000000000000013;
    }
    uVar4 = 0x73736563637573;
    if (param_1 != 6) {
      uVar4 = uVar5;
    }
    uVar6 = 0xe700000000000000;
    if (param_1 != 6) {
      uVar6 = (ulong)pcVar2 | 0x8000000000000000;
    }
    uVar5 = 0x7472617473;
    if (param_1 != 4) {
      uVar5 = 0x646e65;
    }
    uVar1 = 0xe500000000000000;
    if (param_1 != 4) {
      uVar1 = 0xe300000000000000;
    }
    if (param_1 < 6) {
      uVar4 = uVar5;
      uVar6 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  (*param_2)(puVar3,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1037a92f4; end: 1037a9303;  */

void FUN_1037a92f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037a9304; end: 1037a951f;  */

void FUN_1037a9304(undefined1 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000112f93038 != -1) {
    func_0x000107c61568(0x112f93038,FUN_1037a838c);
  }
  uStack_a8 = uRam0000000112f93040;
  puVar3 = &UNK_110693418;
  func_0x000107c613fc(&UNK_110693418,0x11,7);
  puVar3[0x10] = param_1;
  uStack_70 = 0x1037a956c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110693430;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4af88;
  FUN_1037a958c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = 0x112d4af98;
  func_0x0001037a95cc(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar8,&puStack_98,uVar6,uVar7,lVar1,uVar5);
  func_0x000107c5ffe8(0,lVar9,puVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lStack_a0 + 8))(puVar8,lVar1);
  (**(code **)(lVar10 + 8))(lVar9,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 1037a9520; end: 1037a952b;  */

/* WARNING: Possible PIC construction at 0x0001037a8ce0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037a8ce4) */

void FUN_1037a9520(void)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  
  bVar2 = *(byte *)(unaff_x20 + 0x11);
  bVar3 = *(byte *)(unaff_x20 + 0x10);
  uVar9 = 0x64657070696b73;
  puVar5 = PTR_PTR_1126ad738;
  func_0x000107c610f8(PTR_PTR_1126ad738);
  func_0x000107c453e4();
  if (bVar3 < 4) {
    uVar6 = 0x656e696c65736162;
    if (bVar3 != 2) {
      uVar6 = 0x645f6e6f5f766564;
    }
    uVar8 = 0xe800000000000000;
    if (bVar3 != 2) {
      uVar8 = 0xed0000646e616d65;
    }
    uVar7 = uVar9;
    if (bVar3 != 0) {
      uVar7 = 0xd000000000000015;
    }
    uVar1 = 0xe700000000000000;
    if (bVar3 != 0) {
      uVar1 = 0x800000010f1646f0;
    }
    if (bVar3 < 2) {
      uVar6 = uVar7;
      uVar8 = uVar1;
    }
  }
  else {
    pcVar4 = "spectrum_logger_nil";
    uVar7 = 0xd000000000000015;
    if (bVar3 != 7) {
      pcVar4 = "rvicesLoader.swift";
      uVar7 = 0xd000000000000013;
    }
    uVar6 = 0x73736563637573;
    if (bVar3 != 6) {
      uVar6 = uVar7;
    }
    uVar8 = 0xe700000000000000;
    if (bVar3 != 6) {
      uVar8 = (ulong)pcVar4 | 0x8000000000000000;
    }
    uVar7 = 0x7472617473;
    if (bVar3 != 4) {
      uVar7 = 0x646e65;
    }
    uVar1 = 0xe500000000000000;
    if (bVar3 != 4) {
      uVar1 = 0xe300000000000000;
    }
    if (bVar3 < 6) {
      uVar6 = uVar7;
      uVar8 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000107c6142c(uVar8);
  if (bVar2 < 4) {
    uVar7 = 0x656e696c65736162;
    if (bVar2 != 2) {
      uVar7 = 0x645f6e6f5f766564;
    }
    uVar8 = 0xe800000000000000;
    if (bVar2 != 2) {
      uVar8 = 0xed0000646e616d65;
    }
    if (bVar2 != 0) {
      uVar9 = 0xd000000000000015;
    }
    uVar1 = 0xe700000000000000;
    if (bVar2 != 0) {
      uVar1 = 0x800000010f1646f0;
    }
    if (bVar2 < 2) {
      uVar7 = uVar9;
      uVar8 = uVar1;
    }
  }
  else {
    pcVar4 = "spectrum_logger_nil";
    uVar9 = 0xd000000000000015;
    if (bVar2 != 7) {
      pcVar4 = "rvicesLoader.swift";
      uVar9 = 0xd000000000000013;
    }
    uVar7 = 0x73736563637573;
    if (bVar2 != 6) {
      uVar7 = uVar9;
    }
    uVar8 = 0xe700000000000000;
    if (bVar2 != 6) {
      uVar8 = (ulong)pcVar4 | 0x8000000000000000;
    }
    uVar9 = 0x7472617473;
    if (bVar2 != 4) {
      uVar9 = 0x646e65;
    }
    uVar1 = 0xe500000000000000;
    if (bVar2 != 4) {
      uVar1 = 0xe300000000000000;
    }
    if (bVar2 < 6) {
      uVar7 = uVar9;
      uVar8 = uVar1;
    }
  }
  func_0x000107c5fadc(uVar7,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000106cc6dec(puVar5,uVar6,uVar7,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1037a952c; end: 1037a958b;  */

void FUN_1037a952c(void)

{
  long unaff_x20;
  
  FUN_1037a916c(*(undefined1 *)(unaff_x20 + 0x10),&UNK_106cc737c);
  return;
}



/* Entry: 1037a958c; end: 1037a960f;  */

void FUN_1037a958c(long *param_1,code *param_2,long param_3)

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



/* Entry: 1037a9610; end: 1037a976b;  */

void FUN_1037a9610(long param_1,long param_2)

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



/* Entry: 1037a976c; end: 1037a97af;  */

void FUN_1037a976c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_1037a97b8(auStack_68,uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1037a97b0; end: 1037a97b7;  */

void FUN_1037a97b0(undefined8 param_1)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  if (bVar2 < 4) {
    uVar5 = 0x64657070696b73;
    uVar4 = 0x656e696c65736162;
    if (bVar2 != 2) {
      uVar4 = 0x645f6e6f5f766564;
    }
    uVar6 = 0xe800000000000000;
    if (bVar2 != 2) {
      uVar6 = 0xed0000646e616d65;
    }
    if (bVar2 != 0) {
      uVar5 = 0xd000000000000015;
    }
    uVar1 = 0xe700000000000000;
    if (bVar2 != 0) {
      uVar1 = 0x800000010f1646f0;
    }
    if (bVar2 < 2) {
      uVar4 = uVar5;
      uVar6 = uVar1;
    }
  }
  else {
    pcVar3 = "spectrum_logger_nil";
    uVar5 = 0xd000000000000015;
    if (bVar2 != 7) {
      pcVar3 = "rvicesLoader.swift";
      uVar5 = 0xd000000000000013;
    }
    uVar4 = 0x73736563637573;
    if (bVar2 != 6) {
      uVar4 = uVar5;
    }
    uVar6 = 0xe700000000000000;
    if (bVar2 != 6) {
      uVar6 = (ulong)pcVar3 | 0x8000000000000000;
    }
    uVar5 = 0x7472617473;
    if (bVar2 != 4) {
      uVar5 = 0x646e65;
    }
    uVar1 = 0xe500000000000000;
    if (bVar2 != 4) {
      uVar1 = 0xe300000000000000;
    }
    if (bVar2 < 6) {
      uVar4 = uVar5;
      uVar6 = uVar1;
    }
  }
  func_0x000107c5fb58(param_1,uVar4,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return;
}



/* Entry: 1037a97b8; end: 1037a99ef;  */

void FUN_1037a97b8(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_2 < 4) {
    uVar4 = 0x64657070696b73;
    uVar3 = 0x656e696c65736162;
    if (param_2 != 2) {
      uVar3 = 0x645f6e6f5f766564;
    }
    uVar5 = 0xe800000000000000;
    if (param_2 != 2) {
      uVar5 = 0xed0000646e616d65;
    }
    if (param_2 != 0) {
      uVar4 = 0xd000000000000015;
    }
    uVar1 = 0xe700000000000000;
    if (param_2 != 0) {
      uVar1 = 0x800000010f1646f0;
    }
    if (param_2 < 2) {
      uVar3 = uVar4;
      uVar5 = uVar1;
    }
  }
  else {
    pcVar2 = "spectrum_logger_nil";
    uVar4 = 0xd000000000000015;
    if (param_2 != 7) {
      pcVar2 = "rvicesLoader.swift";
      uVar4 = 0xd000000000000013;
    }
    uVar3 = 0x73736563637573;
    if (param_2 != 6) {
      uVar3 = uVar4;
    }
    uVar5 = 0xe700000000000000;
    if (param_2 != 6) {
      uVar5 = (ulong)pcVar2 | 0x8000000000000000;
    }
    uVar4 = 0x7472617473;
    if (param_2 != 4) {
      uVar4 = 0x646e65;
    }
    uVar1 = 0xe500000000000000;
    if (param_2 != 4) {
      uVar1 = 0xe300000000000000;
    }
    if (param_2 < 6) {
      uVar3 = uVar4;
      uVar5 = uVar1;
    }
  }
  func_0x000107c5fb58(param_1,uVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 1037a99f0; end: 1037a99f3;  */

void FUN_1037a99f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0bcd0;
  func_0x000107c61520(&UNK_10dc0bcd0,&UNK_1106934d8);
  puRam0000000112f93110 = puVar1;
  return;
}



/* Entry: 1037a99f4; end: 1037a9a33;  */

void FUN_1037a99f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0bcd0;
  func_0x000107c61520(&UNK_10dc0bcd0,&UNK_1106934d8);
  puRam0000000112f93110 = puVar1;
  return;
}



/* Entry: 1037a9a34; end: 1037a9b97;  */

int FUN_1037a9a34(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1037a9ab0;
        goto LAB_1037a9a94;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1037a9a94:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_1037a9ab0:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1037a9b98; end: 1037a9d63;  */

void FUN_1037a9b98(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ffd8();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_70 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  func_0x0001000295c4();
  uStack_78 = uVar4;
  func_0x000107c5f808(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4ac68;
  FUN_1037aa018(0x112d4ac68,puVar1,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar5 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar6 = 0x112d4ac78;
  func_0x0001037aa058(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar8,&puStack_68,uVar5,uVar6,lVar2,uVar4);
  (**(code **)(lVar9 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_70);
  uVar4 = 0xd000000000000018;
  func_0x000107c5ffec(0xd000000000000018,0x800000010f164760,lVar3,lVar8,puVar7,0);
  uRam0000000112f932b8 = uVar4;
  return;
}



/* Entry: 1037a9d64; end: 1037a9d7b;  */

void FUN_1037a9d64(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ad740;
  func_0x000107c610f8(PTR_PTR_1126ad740);
  func_0x000107c453e4();
  (*(code *)&UNK_106cc75e0)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1037a9d7c; end: 1037a9db7;  */

void FUN_1037a9d7c(code *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ad740;
  func_0x000107c610f8(PTR_PTR_1126ad740);
  func_0x000107c453e4();
  (*param_1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1037a9db8; end: 1037a9def;  */

void FUN_1037a9db8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037a9df0; end: 1037a9fdb;  */

void FUN_1037a9df0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar7 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar8 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (lRam0000000112f932b0 != -1) {
    func_0x000107c61568(0x112f932b0,FUN_1037a9b98);
  }
  uStack_68 = 0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  ppuVar3 = &puStack_90;
  uStack_78 = param_2;
  uStack_70 = param_1;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c5f808(lVar2);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4af88;
  FUN_1037aa018(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = 0x112d4af98;
  func_0x0001037aa058(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar7,&puStack_98,uVar5,uVar6,lVar1,uVar4);
  func_0x000107c5ffe8(0,lVar2,puVar7,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  (**(code **)(lStack_a0 + 8))(puVar7,lVar1);
  (**(code **)(lVar8 + 8))(lVar2,lStack_a8);
  return;
}



/* Entry: 1037a9fdc; end: 1037a9ffb;  */

void FUN_1037a9fdc(void)

{
  func_0x000107c61168(&PTR_PTR_112f93258);
  return;
}



/* Entry: 1037a9ffc; end: 1037aa017;  */

void FUN_1037a9ffc(long param_1,long param_2)

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



/* Entry: 1037aa018; end: 1037aa09b;  */

void FUN_1037aa018(long *param_1,code *param_2,long param_3)

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



/* Entry: 1037aa09c; end: 1037aa0a3;  */

void FUN_1037aa09c(long param_1,long param_2)

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



/* Entry: 1037aa0a4; end: 1037aa17b;  */

undefined1  [16] FUN_1037aa0a4(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar7 = 0xc;
  func_0x000101a50f98(0,0xc,0);
  do {
    puVar4 = puStack_48;
    uStack_50 = 0;
    lVar6 = 8;
    func_0x000107c61598(&uStack_50,8);
    uVar3 = uStack_50;
    uVar2 = *(ulong *)(puVar4 + 0x10);
    lVar1 = uVar2 + 1;
    puStack_48 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
      lVar6 = lVar1;
      func_0x000101a50f98(1 < *(ulong *)(puVar4 + 0x18),lVar1,1);
    }
    puVar4 = puStack_48;
    *(long *)(puStack_48 + 0x10) = lVar1;
    puStack_48[uVar2 + 0x20] = (char)uVar3;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar5 = puStack_48;
  func_0x0001004496cc(puStack_48);
  func_0x000107c61574(puVar4);
  auVar8._8_8_ = lVar6;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 1037aa17c; end: 1037aa25f;  */

byte FUN_1037aa17c(long param_1,long param_2)

{
  return ((*(long *)(param_1 + 8) != *(long *)(param_2 + 8) |
          *(byte *)(param_1 + 0x10) ^ *(byte *)(param_2 + 0x10) |
          *(byte *)(param_2 + 0x11) ^ *(byte *)(param_1 + 0x11)) ^ 0xff) & 1;
}



/* Entry: 1037aa260; end: 1037aa2bb;  */

uint FUN_1037aa260(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1037aa0a4();
  uVar1 = param_1;
  FUN_1037aa2bc();
  func_0x00010006c090(param_1,param_2);
  return (uint)uVar1 & 1;
}



/* Entry: 1037aa2bc; end: 1037aa3a3;  */

undefined1
FUN_1037aa2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 uStack_81;
  undefined1 auStack_80 [16];
  code *pcStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 *puStack_48;
  undefined2 uStack_32;
  
  uStack_32 = 0;
  pcStack_70 = (code *)((long)&uStack_32 + 1);
  puStack_48 = &uStack_32;
  pcVar1 = FUN_1037aaffc;
  puVar2 = auStack_80;
  puStack_68 = (undefined1 *)param_1;
  uStack_60 = param_2;
  uStack_58 = param_3;
  uStack_50 = param_4;
  func_0x0001009cd710();
  func_0x000107c61170();
  if ((uStack_32._1_1_ == '\x01') && (func_0x000100028c0c(), puVar2 != (undefined1 *)0x0)) {
    if (lRam0000000112f933a0 != -1) {
      func_0x000107c61568(0x112f933a0,&UNK_10002942c);
    }
    pcStack_70 = pcVar1;
    puStack_68 = puVar2;
    func_0x000107c5ffe4(&uStack_81,FUN_1037ab2f0,auStack_80,PTR___sSbN_11034dd40);
    func_0x000107c6142c(puVar2);
  }
  return (undefined1)uStack_32;
}



/* Entry: 1037aa3a4; end: 1037aa673;  */

ulong FUN_1037aa3a4(ulong param_1,undefined1 *param_2,long param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined1 *param_7)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = param_1;
  func_0x000107c49960();
  func_0x000107c61180();
  if ((uVar2 == 0) || (uVar3 = uVar2, func_0x000107c43690(), (uVar3 & 1) == 0)) {
    func_0x0001009cda5c(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c59fc4(param_1);
    func_0x000107c61170(puVar4);
    func_0x000107c600f0(puVar5);
    func_0x000107c59fc0(param_1);
    func_0x000107c61170(puVar5);
    func_0x0001009d9d18(param_1);
LAB_1037aa46c:
    func_0x000107c61174(param_1);
    func_0x000107c61170(uVar2);
    return param_1;
  }
  uVar3 = param_1;
  FUN_1037ab010(param_1,1);
  if ((uVar3 & 1) == 0) {
    func_0x0001009cda5c(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c59fc4(param_1);
    func_0x000107c61170(puVar4);
    func_0x000107c600f0(puVar5);
    func_0x000107c59fc0(param_1);
    func_0x000107c61170(puVar5);
    goto LAB_1037aa46c;
  }
  *param_2 = 1;
  uVar3 = param_1;
  func_0x000107c5cd48();
  if (uVar3 != 0) goto LAB_1037aa46c;
  uVar1 = (uint)(param_4 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      if ((param_4 & 0xff000000000000) == 0) goto LAB_1037aa568;
    }
    else {
      lVar7 = (long)(int)param_3;
      lVar8 = param_3 >> 0x20;
LAB_1037aa560:
      if (lVar7 == lVar8) goto LAB_1037aa568;
    }
    lVar7 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    lVar8 = lVar7;
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 2;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(undefined **)(lVar8 + 0x38) = PTR___s10Foundation4DataVN_110350ae0;
    *(long *)(lVar8 + 0x20) = param_3;
    *(ulong *)(lVar8 + 0x28) = param_4;
    func_0x0001009cda5c(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010006c00c(param_3,param_4);
    func_0x000107c600f0(lVar8);
    func_0x000107c59fc4(param_1);
    func_0x000107c61170(lVar8);
    func_0x000107c613fc(lVar7,0x40,7);
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    *(undefined **)(lVar7 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar7 + 0x20) = param_5;
    *(undefined8 *)(lVar7 + 0x28) = param_6;
    func_0x000107c61434(param_6);
    func_0x000107c600f0(lVar7);
    func_0x000107c59fc0(param_1);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(uVar2);
    *param_7 = 1;
  }
  else {
    if (uVar6 == 2) {
      lVar7 = *(long *)(param_3 + 0x10);
      lVar8 = *(long *)(param_3 + 0x18);
      goto LAB_1037aa560;
    }
LAB_1037aa568:
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61174(param_1);
  return param_1;
}



/* Entry: 1037aa674; end: 1037aa857;  */

undefined8 FUN_1037aa674(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  ppuVar4 = &puStack_90;
  uStack_48 = 0xf000000000000000;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_58 = 0;
  if (lRam0000000112f932c0 != -1) {
    func_0x000107c61568(0x112f932c0,&UNK_1009cd898);
  }
  uVar7 = uRam0000000112f932c8;
  puVar2 = &UNK_110693638;
  func_0x000107c613fc(&UNK_110693638,0x28,7);
  *(undefined8 **)(puVar2 + 0x10) = &uStack_50;
  *(undefined8 **)(puVar2 + 0x18) = &uStack_60;
  *(undefined8 *)(puVar2 + 0x20) = unaff_x20;
  puVar3 = &UNK_110693660;
  func_0x000107c613fc(&UNK_110693660,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1037ab308;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  pcStack_70 = FUN_1037ab314;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10006eb60;
  puStack_78 = &UNK_110693678;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar5 = puStack_68;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  func_0x00010006eaa4(uVar7,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  puVar5 = puVar3;
  func_0x000107c61544(puVar3,"",0x5a,0xab,0x1e,1);
  func_0x000107c61574(puVar3);
  uVar7 = uStack_50;
  lVar6 = lStack_58;
  if (((ulong)puVar5 & 1) == 0) {
    if (uStack_48 >> 0x3c < 0xf) {
      if (lStack_58 == 0) {
        lVar6 = 0;
        uVar7 = 0;
      }
      else {
        func_0x000100de78a0(uStack_50,uStack_48);
        func_0x000107c61434(lVar6);
        lVar6 = lStack_58;
      }
    }
    else {
      uVar7 = 0;
    }
    func_0x000107c6142c(lVar6);
    func_0x0001000b44c0(uStack_50,uStack_48);
    func_0x000107c61574(puVar2);
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037aa858);
  (*pcVar1)();
}



/* Entry: 1037aa858; end: 1037aab4f;  */

/* WARNING: Possible PIC construction at 0x0001037aa8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aa9fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aaaec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aab0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aab28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aa920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aa940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037aa924) */
/* WARNING: Removing unreachable block (ram,0x0001037aab10) */
/* WARNING: Removing unreachable block (ram,0x0001037aaaf0) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa00) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa38) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa04) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa40) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa80) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa50) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa74) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa78) */
/* WARNING: Removing unreachable block (ram,0x0001037aaaa0) */
/* WARNING: Removing unreachable block (ram,0x0001037aa8c4) */
/* WARNING: Removing unreachable block (ram,0x0001037aa96c) */
/* WARNING: Removing unreachable block (ram,0x0001037aa8c8) */
/* WARNING: Removing unreachable block (ram,0x0001037aa974) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa1c) */
/* WARNING: Removing unreachable block (ram,0x0001037aa984) */
/* WARNING: Removing unreachable block (ram,0x0001037aab1c) */
/* WARNING: Removing unreachable block (ram,0x0001037aa9ac) */
/* WARNING: Removing unreachable block (ram,0x0001037aab4c) */
/* WARNING: Removing unreachable block (ram,0x0001037aa9e4) */
/* WARNING: Removing unreachable block (ram,0x0001037aa944) */

void FUN_1037aa858(undefined *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x0001009cdf74();
  if (param_1 == (undefined *)0x0) {
    return;
  }
  puVar2 = param_1;
  FUN_1037ab010();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x0001009cda5c(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c59fc4(param_1);
  }
  else {
    func_0x000107c5cd44();
    func_0x000107c61180();
    if (param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037aab4c);
      (*pcVar1)();
    }
    func_0x000107c43638();
    func_0x000107c61180();
    puVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1037aab50; end: 1037aabe7;  */

undefined8 FUN_1037aab50(void)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 auStack_48 [3];
  
  if (lRam0000000112f932c0 != -1) {
    func_0x000107c61568(0x112f932c0,&UNK_1009cd898);
  }
  uVar1 = 0x112f932d0;
  func_0x0001000285a8(0x112f932d0,&UNK_10dc0be00);
  func_0x000107c5ffe4(auStack_48,FUN_1037ab350,auStack_70,uVar1);
  return auStack_48[0];
}



/* Entry: 1037aabe8; end: 1037aacbf;  */

void FUN_1037aabe8(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort uVar5;
  ulong uVar6;
  
  func_0x0001009cdf74();
  if (param_2 == 0) {
    FUN_1037a9304();
  }
  else {
    uVar1 = param_2;
    func_0x000107c49960();
    func_0x000107c61180();
    if (uVar1 != 0) {
      FUN_1037a9304(6);
      uVar6 = uVar1;
      func_0x000107c43690();
      uVar6 = uVar6 & 1;
      uVar2 = uVar1;
      func_0x000107c43690();
      uVar4 = uVar1;
      func_0x000107c4c878();
      uVar3 = uVar1;
      func_0x000107c41f04();
      func_0x000107c61170(uVar1);
      func_0x000107c61170(param_2);
      uVar5 = (ushort)uVar3 & 0xfe00 |
              (ushort)uVar3 & 0xff | (ushort)(((uint)(uVar2 >> 1) & 1) << 8);
      goto LAB_1037aac9c;
    }
    FUN_1037a9304();
    func_0x000107c61170(param_2);
  }
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 2;
LAB_1037aac9c:
  *param_1 = uVar6;
  param_1[1] = uVar4;
  *(ushort *)(param_1 + 2) = uVar5;
  return;
}



/* Entry: 1037aacc0; end: 1037aaccf;  */

void FUN_1037aacc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037aacd0; end: 1037aad3b;  */

void FUN_1037aacd0(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x0001009cda5c(0,0x112f93370,&PTR_PTR_1126d20d0);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f93378;
  plVar5 = (long *)&UNK_10dc0be28;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1037aad3c; end: 1037aadbb;  */

undefined * FUN_1037aad3c(undefined *param_1,undefined *param_2)

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
    FUN_1037aacd0();
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



/* Entry: 1037aadbc; end: 1037aaffb;  */

ulong FUN_1037aadbc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037aaee4);
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
  FUN_1037aad3c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037aaee0);
      (*pcVar1)();
    }
    func_0x0001037aaee4(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1037aaffc; end: 1037ab00f;  */

ulong FUN_1037aaffc(ulong param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar6 = *(undefined1 **)(unaff_x20 + 0x38);
  uVar8 = param_1;
  func_0x000107c49960();
  func_0x000107c61180();
  if ((uVar8 == 0) || (uVar9 = uVar8, func_0x000107c43690(), (uVar9 & 1) == 0)) {
    func_0x0001009cda5c(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c59fc4(param_1);
    func_0x000107c61170(puVar10);
    func_0x000107c600f0(puVar11);
    func_0x000107c59fc0(param_1);
    func_0x000107c61170(puVar11);
    func_0x0001009d9d18(param_1);
LAB_1037aa46c:
    func_0x000107c61174(param_1);
    func_0x000107c61170(uVar8);
    return param_1;
  }
  uVar9 = param_1;
  FUN_1037ab010(param_1,1);
  if ((uVar9 & 1) == 0) {
    func_0x0001009cda5c(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c59fc4(param_1);
    func_0x000107c61170(puVar10);
    func_0x000107c600f0(puVar11);
    func_0x000107c59fc0(param_1);
    func_0x000107c61170(puVar11);
    goto LAB_1037aa46c;
  }
  *puVar1 = 1;
  uVar9 = param_1;
  func_0x000107c5cd48();
  if (uVar9 != 0) goto LAB_1037aa46c;
  uVar7 = (uint)(uVar2 >> 0x20);
  uVar12 = uVar7 >> 0x1e;
  if (uVar7 >> 0x1e < 2) {
    if (uVar12 == 0) {
      if ((uVar2 & 0xff000000000000) == 0) goto LAB_1037aa568;
    }
    else {
      lVar13 = (long)(int)lVar4;
      lVar14 = lVar4 >> 0x20;
LAB_1037aa560:
      if (lVar13 == lVar14) goto LAB_1037aa568;
    }
    lVar13 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    lVar14 = lVar13;
    func_0x000107c613fc();
    *(undefined8 *)(lVar14 + 0x18) = 2;
    *(undefined8 *)(lVar14 + 0x10) = 1;
    *(undefined **)(lVar14 + 0x38) = PTR___s10Foundation4DataVN_110350ae0;
    *(long *)(lVar14 + 0x20) = lVar4;
    *(ulong *)(lVar14 + 0x28) = uVar2;
    func_0x0001009cda5c(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010006c00c(lVar4,uVar2);
    func_0x000107c600f0(lVar14);
    func_0x000107c59fc4(param_1);
    func_0x000107c61170(lVar14);
    func_0x000107c613fc(lVar13,0x40,7);
    *(undefined8 *)(lVar13 + 0x18) = 2;
    *(undefined8 *)(lVar13 + 0x10) = 1;
    *(undefined **)(lVar13 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 *)(lVar13 + 0x20) = uVar5;
    *(undefined8 *)(lVar13 + 0x28) = uVar3;
    func_0x000107c61434(uVar3);
    func_0x000107c600f0(lVar13);
    func_0x000107c59fc0(param_1);
    func_0x000107c61170(lVar13);
    func_0x000107c61170(uVar8);
    *puVar6 = 1;
  }
  else {
    if (uVar12 == 2) {
      lVar13 = *(long *)(lVar4 + 0x10);
      lVar14 = *(long *)(lVar4 + 0x18);
      goto LAB_1037aa560;
    }
LAB_1037aa568:
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61174(param_1);
  return param_1;
}



/* Entry: 1037ab010; end: 1037ab2ef;  */

bool FUN_1037ab010(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  bool bVar16;
  long lVar17;
  long lStack_e0;
  long lStack_d8;
  int iStack_cc;
  undefined1 auStack_c8 [32];
  long lStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar17 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c515fc();
  func_0x000107c61180();
  if (param_1 == 0) {
    bVar16 = false;
  }
  else {
    lStack_e0 = param_1;
    lStack_d8 = lVar14;
    func_0x000107c600f4(lVar17);
    uVar5 = 0x112d38ec0;
    func_0x0001009cda9c(0x112d38ec0,PTR___s10Foundation25NSFastEnumerationIteratorVMa_110350880,
                        PTR___s10Foundation25NSFastEnumerationIteratorVStAAMc_110350890);
    func_0x000107c601c0(auStack_80,lVar4,uVar5);
    puVar15 = PTR___sypN_11034f1a8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    iVar2 = iStack_cc;
    iStack_cc = param_2;
    while (lStack_68 != 0) {
      func_0x000100102924(auStack_80,auStack_a0);
      func_0x000100102924(auStack_a0,auStack_c8);
      uVar8 = 0;
      func_0x0001009cda5c(0,0x112f93370,&PTR_PTR_1126d20d0);
      plVar9 = &lStack_a8;
      func_0x000107c6147c(plVar9,auStack_c8,puVar15 + 8,uVar8,6);
      lVar14 = lStack_a8;
      if ((((ulong)plVar9 & 1) != 0) && (lStack_a8 != 0)) {
        puVar7 = puVar10;
        func_0x000107c61550();
        if (((int)puVar7 == 0) ||
           (((long)puVar10 < 0 || (puVar7 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              puVar6 = puVar10;
            }
            func_0x000107c60480(puVar6);
          }
          puVar7 = (undefined *)0x0;
          FUN_1037aadbc(0,puVar6 + 1,1,puVar10);
        }
        uVar13 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar13 + 0x10);
        puVar10 = puVar7;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar1) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_1037aadbc(puVar10,uVar1 + 1,1,puVar7);
          uVar13 = (ulong)puVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar13 + 0x10) = uVar1 + 1;
        *(long *)(uVar13 + uVar1 * 8 + 0x20) = lVar14;
        param_2 = iStack_cc;
      }
      func_0x000107c601c0(auStack_80,lVar4,uVar5);
      iVar2 = iStack_cc;
    }
    iStack_cc = iVar2;
    (**(code **)(lStack_d8 + 8))(lVar17,lVar4);
    puVar15 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar7 = *(undefined **)(puVar15 + 0x10);
    }
    else {
      puVar7 = puVar15;
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        puVar7 = puVar10;
      }
      func_0x000107c60480();
    }
    puVar6 = (undefined *)0x0;
    do {
      bVar16 = puVar7 != puVar6;
      if (puVar7 == puVar6) break;
      if (((ulong)puVar10 & 0xc000000000000001) == 0) {
        if (*(undefined **)(puVar15 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1037ab2dc);
          (*pcVar3)();
        }
        puVar11 = *(undefined **)(puVar10 + (long)puVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar11 = puVar6;
        FUN_1037abd8c(puVar6,puVar10);
      }
      if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1037ab2a4);
        (*pcVar3)();
      }
      puVar12 = puVar11;
      func_0x000107c4eb00();
      func_0x000107c61170(puVar11);
      puVar6 = puVar6 + 1;
    } while ((int)puVar12 != param_2);
    func_0x000107c61170(lStack_e0);
    func_0x000107c6142c(puVar10);
  }
  return bVar16;
}



/* Entry: 1037ab2f0; end: 1037ab307;  */

void FUN_1037ab2f0(void)

{
  long unaff_x20;
  
  FUN_1037ab4c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1037ab308; end: 1037ab313;  */

/* WARNING: Possible PIC construction at 0x0001037aa8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aa9fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aaaec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aab0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aab28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aa920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037aa940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037aa924) */
/* WARNING: Removing unreachable block (ram,0x0001037aab10) */
/* WARNING: Removing unreachable block (ram,0x0001037aaaf0) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa00) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa38) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa04) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa40) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa80) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa50) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa74) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa78) */
/* WARNING: Removing unreachable block (ram,0x0001037aaaa0) */
/* WARNING: Removing unreachable block (ram,0x0001037aa8c4) */
/* WARNING: Removing unreachable block (ram,0x0001037aa96c) */
/* WARNING: Removing unreachable block (ram,0x0001037aa8c8) */
/* WARNING: Removing unreachable block (ram,0x0001037aa974) */
/* WARNING: Removing unreachable block (ram,0x0001037aaa1c) */
/* WARNING: Removing unreachable block (ram,0x0001037aa984) */
/* WARNING: Removing unreachable block (ram,0x0001037aab1c) */
/* WARNING: Removing unreachable block (ram,0x0001037aa9ac) */
/* WARNING: Removing unreachable block (ram,0x0001037aab4c) */
/* WARNING: Removing unreachable block (ram,0x0001037aa9e4) */
/* WARNING: Removing unreachable block (ram,0x0001037aa944) */

void FUN_1037ab308(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = *(undefined **)(unaff_x20 + 0x10);
  func_0x0001009cdf74(puVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = puVar2;
  FUN_1037ab010();
  if (((ulong)puVar3 & 1) == 0) {
    func_0x0001009cda5c(0,0x112d538a8,&PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c59fc4(puVar2);
  }
  else {
    func_0x000107c5cd44();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1037aab4c);
      (*pcVar1)();
    }
    func_0x000107c43638();
    func_0x000107c61180();
    puVar3 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1037ab314; end: 1037ab333;  */

void FUN_1037ab314(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1037ab334; end: 1037ab34f;  */

void FUN_1037ab334(long param_1,long param_2)

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



/* Entry: 1037ab350; end: 1037ab367;  */

void FUN_1037ab350(void)

{
  long unaff_x20;
  
  FUN_1037aabe8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1037ab368; end: 1037ab4af;  */

/* WARNING: Possible PIC construction at 0x0001037ab3f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037ab3f4) */
/* WARNING: Removing unreachable block (ram,0x0001037ab438) */
/* WARNING: Removing unreachable block (ram,0x0001037ab45c) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_1037ab368(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001009ce2b4();
  if (param_2 == 0) {
    return;
  }
  func_0x000107c41214();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1037ab4b0; end: 1037ab4c3;  */

void FUN_1037ab4b0(void)

{
  FUN_1037ab2f0();
  return;
}



/* Entry: 1037ab4c4; end: 1037ab583;  */

void FUN_1037ab4c4(undefined1 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  
  lVar1 = param_2;
  func_0x000107c5fb28();
  lVar2 = lVar1 + 0x20;
  func_0x000107c60ec0(lVar2,0);
  func_0x000107c61574(lVar1);
  if ((int)lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(param_2,param_3);
    puVar4 = puVar3;
    func_0x000107c40a0c();
    uVar5 = SUB81(puVar4,0);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_2);
  }
  *param_1 = uVar5;
  return;
}



/* Entry: 1037ab584; end: 1037ab593;  */

void FUN_1037ab584(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037ab594; end: 1037ab5f7;  */

long FUN_1037ab594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  puVar1 = PTR_PTR_1126ad740;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  return unaff_x20;
}



/* Entry: 1037ab5f8; end: 1037ab613;  */

void FUN_1037ab5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037ab614,0,0);
  return;
}



/* Entry: 1037ab614; end: 1037ab717;  */

void FUN_1037ab614(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x40) = lVar3;
  if (lVar3 != 0) {
    plVar2 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x1037ab6a0;
    lVar1 = *(long *)(unaff_x22 + 0x30);
    plVar2[0x11] = *(long *)(unaff_x22 + 0x38);
    plVar2[0x12] = lVar3;
    plVar2[0x10] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1037ab7dc,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001037ab69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037ab718; end: 1037ab783;  */

void FUN_1037ab718(void)

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
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1037ab784;
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037ab614,0,0);
  return;
}



/* Entry: 1037ab784; end: 1037ab7bf;  */

void FUN_1037ab784(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001037ab7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1037ab7c0; end: 1037ab7db;  */

void FUN_1037ab7c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037ab7dc,0,0);
  return;
}



/* Entry: 1037ab7dc; end: 1037aba1b;  */

void FUN_1037ab7dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 *puVar9;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x90) + 0x20);
  func_0x000107c5b6b8();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x98) = lVar4;
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x0001037a9ddc();
    puVar5 = PTR_PTR_1126b0438;
    func_0x000107c61168(PTR_PTR_1126b0438);
    func_0x000107c5fadc(uVar7,uVar1);
    func_0x000107c4d3fc(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    puVar6 = PTR_PTR_1126b0440;
    func_0x000107c610f8();
    uVar7 = 0x6b6f546563617254;
    func_0x000107c5fadc(0x6b6f546563617254,0xea00000000006e65);
    func_0x000107c4709c();
    *(undefined **)(unaff_x22 + 0xa0) = puVar6;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar5);
    if (lRam0000000112f93550 != -1) {
      func_0x000107c61568(0x112f93550,FUN_1037abb48);
    }
    lVar8 = lVar4;
    func_0x000107c5c560();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xa8) = lVar8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1037aba1c;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    puVar5 = &UNK_110693768;
    func_0x000107c613fc(&UNK_110693768,0x28,7);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar5 + 0x10) = lVar4;
    *(undefined **)(puVar5 + 0x18) = puVar6;
    puVar9 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar9 = puVar2;
    *(long *)(puVar5 + 0x20) = lVar3;
    *(code **)(unaff_x22 + 0x70) = FUN_1037abb0c;
    *(undefined **)(unaff_x22 + 0x78) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_101297090;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110693780;
    func_0x000107c60bc4(puVar9);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c615f0(lVar4);
    func_0x000107c61174(puVar6);
    func_0x000107c61574(uVar7);
    func_0x0001009cd444();
    func_0x000107c5dc64(lVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c60bd0(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001037aba00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037aba1c; end: 1037aba5b;  */

void FUN_1037aba1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1037aba5c,0,0);
  return;
}



/* Entry: 1037aba5c; end: 1037aba9f;  */

void FUN_1037aba5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001037aba9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1037abaa0; end: 1037abae3;  */

void FUN_1037abaa0(void)

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



/* Entry: 1037abae4; end: 1037abb03;  */

void FUN_1037abae4(void)

{
  func_0x0001009ccbb4();
  return;
}



/* Entry: 1037abb04; end: 1037abb0b;  */

undefined8 FUN_1037abb04(void)

{
  return 0;
}



/* Entry: 1037abb0c; end: 1037abb3f;  */

void FUN_1037abb0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c3fb1c(*(undefined8 *)(unaff_x20 + 0x10),param_2,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(uVar1);
  return;
}



/* Entry: 1037abb40; end: 1037abb47;  */

void FUN_1037abb40(long param_1,long param_2)

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



/* Entry: 1037abb48; end: 1037abbaf;  */

void FUN_1037abb48(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b0448;
  func_0x000107c610f8();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f164820);
  func_0x000107c478bc();
  func_0x000107c61170(uVar2);
  puRam000000011380bb40 = puVar1;
  return;
}



/* Entry: 1037abbb0; end: 1037abc0f; -[_TtC28SCTracingServicesStartupInit28TraceTokenDeltaSyncProcessor init] */

void FUN_1037abbb0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTracingServicesStartupInit.TraceTokenDeltaSyncProcessor",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037abbdc);
  (*pcVar1)();
}



/* Entry: 1037abc10; end: 1037abc47; -[_TtC28SCTracingServicesStartupInit28TraceTokenDeltaSyncProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037abc2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037abc30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037abc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f93518));
  return;
}



/* Entry: 1037abc48; end: 1037abc87; -[_TtC28SCTracingServicesStartupInit28TraceTokenDeltaSyncProcessor type] */

void FUN_1037abc48(void)

{
  if (lRam0000000112f93550 != -1) {
    func_0x000107c61568(0x112f93550,FUN_1037abb48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380bb40);
  return;
}



/* Entry: 1037abc88; end: 1037abd8b; -[_TtC28SCTracingServicesStartupInit28TraceTokenDeltaSyncProcessor processDeltaSyncWithGroupKey:isFullSync:updates:deletions:transactionContext:] */

void FUN_1037abc88(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong in_x4;
  ulong uVar3;
  
  uVar2 = 0;
  func_0x000100c13ee8(0,0x112d6e3e8,&PTR_PTR_1126b8148);
  func_0x000107c5fc54(in_x4,uVar2);
  if (in_x4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((in_x4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = in_x4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < in_x4) {
      uVar3 = in_x4;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    if ((in_x4 & 0xc000000000000001) == 0) {
      if (*(long *)((in_x4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037abd8c);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(in_x4 + 0x20);
      func_0x000107c61174(param_1);
      func_0x000107c61174(uVar2);
    }
    else {
      func_0x000107c61174(param_1);
      uVar2 = 0;
      func_0x0001037abda0(0,in_x4,&PTR_PTR_1126b8148,0x112d6e3e8);
    }
    func_0x0001037abf5c();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1037abd8c; end: 1037abd9f;  */

ulong FUN_1037abd8c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037abe84);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037abe88);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d20d0;
    func_0x000107c61168(PTR_PTR_1126d20d0);
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
    puVar4 = PTR_PTR_1126d20d0;
    func_0x000107c61168(PTR_PTR_1126d20d0);
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
  func_0x000100c13ee8(0,0x112f93370,&PTR_PTR_1126d20d0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1037abf5c);
  (*pcVar2)();
}



/* Entry: 1037abda0; end: 1037ac167;  */

ulong FUN_1037abda0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037abe84);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037abe88);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000100c13ee8(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1037abf5c);
  (*pcVar2)();
}



/* Entry: 1037ac168; end: 1037ac1b7;  */

void FUN_1037ac168(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61434(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1037ac1b8; end: 1037ac1e3;  */

void FUN_1037ac1b8(long param_1,long param_2)

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



/* Entry: 1037ac1e4; end: 1037ac2a7;  */

void FUN_1037ac1e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f93558;
  func_0x0001000285a8(0x112f93558,&UNK_10dc0bf30);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1037ac2a8; end: 1037ac2ab;  */

void FUN_1037ac2a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0bf40;
  func_0x000107c61520(&UNK_10dc0bf40,&UNK_110693948);
  puRam0000000112f93568 = puVar1;
  return;
}



/* Entry: 1037ac2ac; end: 1037ac317;  */

void FUN_1037ac2ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0bf40;
  func_0x000107c61520(&UNK_10dc0bf40,&UNK_110693948);
  puRam0000000112f93568 = puVar1;
  return;
}



/* Entry: 1037ac318; end: 1037ac31b;  */

void FUN_1037ac318(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0bfe8;
  func_0x000107c61520(&UNK_10dc0bfe8,&UNK_1106939d8);
  puRam0000000112f93580 = puVar1;
  return;
}



/* Entry: 1037ac31c; end: 1037ac387;  */

void FUN_1037ac31c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0bfe8;
  func_0x000107c61520(&UNK_10dc0bfe8,&UNK_1106939d8);
  puRam0000000112f93580 = puVar1;
  return;
}



/* Entry: 1037ac388; end: 1037ac40b;  */

void FUN_1037ac388(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1037ac40c; end: 1037ac40f;  */

void FUN_1037ac40c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c058;
  func_0x000107c61520(&UNK_10dc0c058,&UNK_1106939d8);
  puRam0000000112f93598 = puVar1;
  return;
}



/* Entry: 1037ac410; end: 1037ac44f;  */

void FUN_1037ac410(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f93598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c058;
  func_0x000107c61520(&UNK_10dc0c058,&UNK_1106939d8);
  puRam0000000112f93598 = puVar1;
  return;
}



/* Entry: 1037ac450; end: 1037ac453;  */

void FUN_1037ac450(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f935a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c010;
  func_0x000107c61520(&UNK_10dc0c010,&UNK_1106939d8);
  puRam0000000112f935a0 = puVar1;
  return;
}



/* Entry: 1037ac454; end: 1037ac493;  */

void FUN_1037ac454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f935a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0c010;
  func_0x000107c61520(&UNK_10dc0c010,&UNK_1106939d8);
  puRam0000000112f935a0 = puVar1;
  return;
}



/* Entry: 1037ac494; end: 1037ac62b;  */

void FUN_1037ac494(void)

{
  return;
}



/* Entry: 1037ac62c; end: 1037ac65b;  */

void FUN_1037ac62c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1037ac65c; end: 1037ac66b;  */

undefined1  [16] FUN_1037ac65c(void)

{
  return ZEXT816(0x110693a58);
}



/* Entry: 1037ac66c; end: 1037ac6db;  */

undefined8 FUN_1037ac66c(void)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010076f7c8();
  return unaff_x20;
}



/* Entry: 1037ac6dc; end: 1037ac6eb;  */

undefined1  [16] FUN_1037ac6dc(void)

{
  return ZEXT816(0x110693aa0);
}



/* Entry: 1037ac6ec; end: 1037ac7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ac6ec(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_2;
  func_0x000100083b20(&uStack_38);
  FUN_1037acb4c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f93870) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112f93878) = uStack_38;
  puVar1 = PTR_s_init_1125d9248;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c6157c(param_2);
  plVar4 = &lStack_48;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 1037ac7d8; end: 1037ac7f7;  */

void FUN_1037ac7d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1037ac7f8; end: 1037ac857; -[_TtC61WebViewInjectionScriptSaberPluginScopedFactoryServiceProvider47WebViewInjectionScriptSaberPluginScopedServices init] */

void FUN_1037ac7f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebViewInjectionScriptSaberPluginScopedFactoryServiceProvider.WebViewInjectionScriptSaberPluginScopedServices"
                      ,0x6d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037ac824);
  (*pcVar1)();
}



/* Entry: 1037ac858; end: 1037ac88f; -[_TtC61WebViewInjectionScriptSaberPluginScopedFactoryServiceProvider47WebViewInjectionScriptSaberPluginScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037ac874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037ac878) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ac858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f93878));
  return;
}



/* Entry: 1037ac890; end: 1037ac8fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ac890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110693c90;
  func_0x000107c613fc(&UNK_110693c90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1037acbe4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1037ac8fc; end: 1037ac90b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037ac8fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f93870));
  return;
}



/* Entry: 1037ac90c; end: 1037ac9a7;  */

void FUN_1037ac90c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  func_0x000100083b20(auStack_50);
  func_0x000100083b20(&lStack_38);
  func_0x000107c61428(lStack_38 + 0x10,auStack_50,1,0);
  uVar2 = *(undefined8 *)(lStack_38 + 0x10);
  *(undefined8 *)(lStack_38 + 0x10) = auStack_50[0];
  *(undefined ***)(lStack_38 + 0x18) = &PTR_DAT_110693b88;
  uVar1 = auStack_50[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110693b98;
  return;
}



/* Entry: 1037ac9a8; end: 1037ac9df;  */

void FUN_1037ac9a8(long *param_1)

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


