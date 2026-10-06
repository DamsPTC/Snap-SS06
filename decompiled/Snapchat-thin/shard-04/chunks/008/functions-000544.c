/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103918264; end: 103918277;  */

void FUN_103918264(undefined8 param_1)

{
  if (lRam000000011356d658 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e78c4b0);
  return;
}



/* Entry: 103918278; end: 1039182a7;  */

void FUN_103918278(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 1039182a8; end: 103918383;  */

undefined8 FUN_1039182a8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103918384; end: 10391843f;  */

long * FUN_103918384(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    bVar2 = (int)plVar3 != 1;
    if (bVar2) {
      *param_1 = *param_2;
      func_0x000107c61174();
    }
    else {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
    }
    func_0x000107c6159c(param_1,param_3,!bVar2);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103918440; end: 10391848f;  */

void FUN_103918440(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  func_0x000107c614c4();
  if ((int)puVar1 == 1) {
    lVar2 = 0;
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x00010391847c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 103918490; end: 1039185b7;  */

undefined8 * FUN_103918490(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  bVar1 = (int)puVar2 != 1;
  if (bVar1) {
    *param_1 = *param_2;
    func_0x000107c61174();
  }
  else {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
  }
  func_0x000107c6159c(param_1,param_3,!bVar1);
  return param_1;
}



/* Entry: 1039185b8; end: 1039185f3;  */

undefined8 FUN_1039185b8(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1039185f4; end: 103918733;  */

undefined8 FUN_1039185f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)uVar1 == 1) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
    func_0x000107c6159c(param_1,param_3,1);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  return param_1;
}



/* Entry: 103918734; end: 103918763;  */

void FUN_103918734(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010391873c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 103918764; end: 1039187d7;  */

void FUN_103918764(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61528(param_1,0x100,2,&puStack_30);
  }
  return;
}



/* Entry: 1039187d8; end: 1039188c3;  */

uint FUN_1039187d8(uint *param_1,int param_2)

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



/* Entry: 1039188c4; end: 1039189ab;  */

long * FUN_1039188c4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    uVar6 = 0;
    FUN_103918264(0);
    plVar7 = param_2;
    func_0x000107c614c4(param_2,uVar6);
    bVar5 = (int)plVar7 != 1;
    if (bVar5) {
      *param_1 = *param_2;
      func_0x000107c61174();
    }
    else {
      lVar8 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
    }
    func_0x000107c6159c(param_1,uVar6,!bVar5);
    iVar3 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    uVar6 = *(undefined8 *)((long)param_2 + (long)iVar3);
    *(undefined8 *)((long)param_1 + (long)iVar3) = uVar6;
    func_0x000107c61434();
    func_0x000107c61174(uVar6);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1039189ac; end: 103918a27;  */

/* WARNING: Possible PIC construction at 0x000103918a00: Changing call to branch */

void FUN_1039189ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = 0;
  FUN_103918264(0);
  puVar2 = param_1;
  func_0x000107c614c4(param_1,uVar1);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
    func_0x000107c6142c(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x14) + 8));
    uVar1 = *(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x18));
  }
  else {
    uVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103918a28; end: 103918d63;  */

undefined8 * FUN_103918a28(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  uVar4 = 0;
  FUN_103918264(0);
  puVar5 = param_2;
  func_0x000107c614c4(param_2,uVar4);
  bVar3 = (int)puVar5 != 1;
  if (bVar3) {
    *param_1 = *param_2;
    func_0x000107c61174();
  }
  else {
    lVar6 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
  }
  func_0x000107c6159c(param_1,uVar4,!bVar3);
  iVar2 = *(int *)(param_3 + 0x18);
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar4 = puVar1[1];
  *puVar5 = *puVar1;
  puVar5[1] = uVar4;
  uVar4 = *(undefined8 *)((long)param_2 + (long)iVar2);
  *(undefined8 *)((long)param_1 + (long)iVar2) = uVar4;
  func_0x000107c61434();
  func_0x000107c61174(uVar4);
  return param_1;
}



/* Entry: 103918d64; end: 103918d7b;  */

void FUN_103918d64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103918d7c; end: 103918dfb;  */

void FUN_103918d7c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_103918264();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dc22898;
    puStack_28 = PTR___sBOWV_11034d658 + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 103918dfc; end: 103918e03;  */

void FUN_103918dfc(void)

{
  undefined *puVar1;
  
  if (puRam000000011356d650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22960;
  func_0x000107c61520(&UNK_10dc22960,&UNK_1106ac508);
  puRam000000011356d650 = puVar1;
  return;
}



/* Entry: 103918e04; end: 103918e43;  */

void FUN_103918e04(void)

{
  undefined *puVar1;
  
  if (puRam000000011356d700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22938;
  func_0x000107c61520(&UNK_10dc22938,&UNK_1106ac508);
  puRam000000011356d700 = puVar1;
  return;
}



/* Entry: 103918e44; end: 103918e57;  */

void FUN_103918e44(long param_1,long param_2)

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



/* Entry: 103918e58; end: 103918ee3;  */

void FUN_103918e58(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c4548;
  func_0x000107c610f8();
  if (param_1 == -0x6c869c35) {
    func_0x000107c47cbc();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103918ee4);
      (*pcVar1)();
    }
  }
  else {
    if (param_1 != -0x51863cdb) {
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
    func_0x000107c47cbc();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103918eb0);
      (*pcVar1)();
    }
  }
  return;
}



/* Entry: 103918ee4; end: 103918efb; +[SCSnapDocMediaOriginUtil mediaOriginFrom:] */

void FUN_103918ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_103918e58(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103918efc; end: 103918f37; -[SCSnapDocMediaOriginUtil init] */

void FUN_103918efc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103918f38; end: 103918f8b;  */

void FUN_103918f38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103918f8c; end: 1039191c3;  */

undefined * FUN_103918f8c(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 unaff_x20;
  long lVar8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar8 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar2 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (lRam000000011356d890 != -1) {
    func_0x000107c61568(0x11356d890,FUN_1039192a0);
  }
  func_0x000107c613fc(param_1,0x20,7);
  *(undefined **)(param_1 + 0x10) = puVar3;
  *(undefined8 *)(param_1 + 0x18) = unaff_x20;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  ppuVar4 = &puStack_90;
  uStack_78 = param_3;
  uStack_70 = param_2;
  lStack_68 = param_1;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c6157c();
  func_0x000107c5f808(lVar2);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4af88;
  func_0x00010391a3c8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = 0x112d4af98;
  func_0x00010391a408(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar8,&puStack_98,uVar6,uVar7,lVar1,uVar5);
  func_0x000107c5ffe8(0,lVar2,lVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lStack_a0 + 8))(lVar8,lVar1);
  (**(code **)(lStack_b0 + 8))(lVar2,lStack_a8);
  func_0x000107c61574(lStack_68);
  return puVar3;
}



/* Entry: 1039191c4; end: 103919233; +[_TtC25MemoriesSnapComposerUtils25MemoriesSnapComposerUtils populateMemoriesSnapFieldsWithGallerySnapWithGallerySnap:memoriesSnap:dataObjectContext:] */

/* WARNING: Possible PIC construction at 0x000103919214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103919218) */

void FUN_1039191c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  FUN_10391966c(param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 103919234; end: 10391926f; -[_TtC25MemoriesSnapComposerUtils25MemoriesSnapComposerUtils init] */

void FUN_103919234(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103919820();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103919270; end: 10391929f;  */

void FUN_103919270(void)

{
  FUN_103919820();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039192a0; end: 10391947b;  */

void FUN_1039192a0(void)

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
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ffd8();
  lVar7 = *(long *)(lVar2 + -8);
  lStack_70 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  FUN_10391a388(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  uStack_78 = uVar4;
  func_0x000107c5f80c(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4ac68;
  func_0x00010391a3c8(0x112d4ac68,puVar1,
                      PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928
                     );
  uVar5 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar6 = 0x112d4ac78;
  func_0x00010391a408(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar9,&puStack_68,uVar5,uVar6,lVar2,uVar4);
  (**(code **)(lVar7 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_70);
  uVar4 = 0xd00000000000002f;
  func_0x000107c5ffec(0xd00000000000002f,0x800000010f175980,lVar3,lVar9,puVar8,0);
  uRam000000011356d898 = uVar4;
  return;
}



/* Entry: 10391947c; end: 1039194af;  */

void FUN_10391947c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039194b0; end: 10391966b;  */

ulong FUN_1039194b0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103919594);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103919598);
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
  FUN_10391a388(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10391966c);
  (*pcVar2)();
}



/* Entry: 10391966c; end: 10391981f;  */

void FUN_10391966c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar5 = &puStack_90;
  func_0x000107c5e304();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c5a724(param_2);
  func_0x000107c61170(puVar2);
  func_0x000107c44d98(param_1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  func_0x000107c550b8(param_2);
  func_0x000107c61170();
  func_0x000103919840();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = 0;
  puVar3[0x28] = 0;
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1039199bc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10103b950;
  puStack_78 = &UNK_1106ac728;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c54e70(param_2);
  func_0x000107c60bd0(ppuVar4);
  pcStack_70 = FUN_103919a04;
  puStack_90 = puVar2;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e46924;
  puStack_78 = &UNK_1106ac750;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c54ea8(param_2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 103919820; end: 10391985f;  */

void FUN_103919820(void)

{
  func_0x000107c61168(&PTR_PTR_1128ff890);
  return;
}



/* Entry: 103919860; end: 103919893;  */

undefined8 * FUN_103919860(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103919894; end: 10391989b;  */

void FUN_103919894(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 10391989c; end: 1039198e7;  */

undefined8 * FUN_10391989c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 1039198e8; end: 103919923;  */

undefined8 * FUN_1039198e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 103919924; end: 1039199bb;  */

int FUN_103919924(ulong *param_1,int param_2)

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



/* Entry: 1039199bc; end: 1039199e7;  */

void FUN_1039199bc(void)

{
  FUN_103918f8c(&UNK_1106ac7d8,FUN_10391a478,&UNK_1106ac7f0);
  return;
}



/* Entry: 1039199e8; end: 103919a03;  */

void FUN_1039199e8(long param_1,long param_2)

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



/* Entry: 103919a04; end: 103919a2f;  */

void FUN_103919a04(void)

{
  FUN_103918f8c(&UNK_1106ac788,FUN_103919a30,&UNK_1106ac7a0);
  return;
}



/* Entry: 103919a30; end: 103919ad3;  */

void FUN_103919a30(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x20);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    bVar6 = (byte)*(undefined8 *)(lVar2 + 0x18);
    FUN_103919ad4();
    uVar7 = *(undefined8 *)(lVar2 + 0x20);
    *(long *)(lVar2 + 0x20) = lVar4;
    *(byte *)(lVar2 + 0x28) = bVar6 & 1;
    func_0x000107c61434();
    func_0x000107c6142c(uVar7);
    lVar3 = 0;
  }
  func_0x000107c61434(lVar3);
  func_0x000107c6142c(lVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c43b74(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 103919ad4; end: 10391a387;  */

undefined1  [16] FUN_103919ad4(long param_1,undefined *param_2)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****pppppuVar23;
  undefined *puVar24;
  undefined8 *****pppppuVar25;
  uint uVar26;
  undefined8 *****pppppuVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  ulong uVar31;
  undefined8 ****ppppuVar32;
  undefined *puVar33;
  undefined1 auVar34 [16];
  undefined *puStack_70;
  undefined8 ****ppppuStack_68;
  
  puVar14 = param_2;
  func_0x000107c5b1b0();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar5 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
    lVar6 = lVar5;
    func_0x000107c5ee20(lVar5,puVar14);
    lVar7 = lVar6;
    func_0x000108020568();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar7 != 0) {
      lVar6 = lVar7;
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a388);
        (*pcVar4)();
      }
      lVar8 = lVar6;
      func_0x000107c4e928();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar8 == 0) {
LAB_103919e84:
        uVar26 = 0;
        puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        ppppuStack_68 = (undefined8 *****)0x0;
        uVar9 = 0;
        FUN_10391a388(0,0x112d55598,&PTR_PTR_1126b25d0);
        pppppuVar22 = &ppppuStack_68;
        func_0x000107c5fc50(lVar8,pppppuVar22,uVar9);
        func_0x000107c61170(lVar8);
        ppppuVar3 = ppppuStack_68;
        if ((undefined8 *****)ppppuStack_68 == (undefined8 *****)0x0) goto LAB_103919e84;
        pppppuVar25 = (undefined8 *****)((ulong)ppppuStack_68 & 0xffffffffffffff8);
        if ((ulong)ppppuStack_68 >> 0x3e == 0) {
          pppppuVar27 = (undefined8 *****)pppppuVar25[2];
        }
        else {
          pppppuVar27 = (undefined8 *****)ppppuStack_68;
          if (-1 < (long)ppppuStack_68) {
            pppppuVar27 = pppppuVar25;
          }
          func_0x000107c60480();
        }
        if (pppppuVar27 == (undefined8 *****)0x0) {
          uVar26 = 0;
          puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          ppppuVar32 = (undefined8 ****)0x0;
          uVar26 = 0;
          puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
          do {
            if (((ulong)ppppuVar3 & 0xc000000000000001) == 0) {
              if (pppppuVar25[2] <= ppppuVar32) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a124);
                (*pcVar4)();
              }
              ppppuVar10 = (undefined8 ****)ppppuVar3[(long)ppppuVar32 + 4];
              func_0x000107c61174();
            }
            else {
              ppppuVar10 = ppppuVar32;
              pppppuVar22 = (undefined8 *****)ppppuVar3;
              FUN_1039194b0(ppppuVar32,ppppuVar3,&PTR_PTR_1126b25d0,0x112d55598);
            }
            pppppuVar1 = (undefined8 *****)((long)ppppuVar32 + 1);
            if (SCARRY8((long)ppppuVar32,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a120);
              (*pcVar4)();
            }
            ppppuVar11 = ppppuVar10;
            func_0x000107c40dc8();
            func_0x000107c61180();
            if (ppppuVar11 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a35c);
              (*pcVar4)();
            }
            ppppuVar12 = ppppuVar11;
            func_0x000107c4ce20();
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar11);
            if (ppppuVar12 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a360);
              (*pcVar4)();
            }
            ppppuVar11 = ppppuVar12;
            func_0x000107c3f558();
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar12);
            if (ppppuVar11 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a364);
              (*pcVar4)();
            }
            ppppuVar12 = ppppuVar11;
            func_0x000107c5c82c();
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar11);
            if (ppppuVar12 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a368);
              (*pcVar4)();
            }
            ppppuVar11 = ppppuVar12;
            func_0x000107c5faec();
            pppppuVar23 = pppppuVar22;
            func_0x000107c61170(ppppuVar12);
            func_0x000107c6142c(pppppuVar22);
            uVar31 = (ulong)ppppuVar11 & 0xffffffffffff;
            if (((ulong)pppppuVar22 & 0x2000000000000000) != 0) {
              uVar31 = (ulong)pppppuVar22 >> 0x38 & 0xf;
            }
            pppppuVar22 = pppppuVar23;
            if (uVar31 != 0) {
              ppppuVar11 = ppppuVar10;
              func_0x000107c40dc8();
              func_0x000107c61180();
              if (ppppuVar11 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a380);
                (*pcVar4)();
              }
              ppppuVar12 = ppppuVar11;
              func_0x000107c4ce20();
              func_0x000107c61180();
              func_0x000107c61170(ppppuVar11);
              if (ppppuVar12 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a384);
                (*pcVar4)();
              }
              ppppuVar11 = ppppuVar12;
              func_0x000107c3f558();
              func_0x000107c61180();
              func_0x000107c61170(ppppuVar12);
              if (ppppuVar11 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a378);
                (*pcVar4)();
              }
              ppppuVar12 = ppppuVar11;
              func_0x000107c5c82c();
              func_0x000107c61180();
              func_0x000107c61170(ppppuVar11);
              if (ppppuVar12 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a37c);
                (*pcVar4)();
              }
              ppppuVar11 = ppppuVar12;
              func_0x000107c5faec();
              pppppuVar22 = pppppuVar23;
              func_0x000107c61170(ppppuVar12);
              puVar13 = puStack_70;
              func_0x000107c61558();
              if (((ulong)puVar13 & 1) == 0) {
                pppppuVar22 = (undefined8 *****)(*(long *)(puStack_70 + 0x10) + 1);
                puStack_70 = (undefined *)0x0;
                func_0x0001000d182c(0,pppppuVar22,1);
              }
              uVar31 = *(ulong *)(puStack_70 + 0x10);
              pppppuVar2 = (undefined8 *****)(uVar31 + 1);
              if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar31) {
                puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puStack_70 + 0x18));
                pppppuVar22 = pppppuVar2;
                func_0x0001000d182c(puVar13,pppppuVar2,1,puStack_70);
                puStack_70 = puVar13;
              }
              *(undefined8 ******)(puStack_70 + 0x10) = pppppuVar2;
              *(undefined8 *****)(puStack_70 + uVar31 * 0x10 + 0x20) = ppppuVar11;
              *(undefined8 ******)(puStack_70 + uVar31 * 0x10 + 0x28) = pppppuVar23;
            }
            ppppuVar11 = ppppuVar10;
            func_0x000107c40dc8();
            func_0x000107c61180();
            if (ppppuVar11 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a36c);
              (*pcVar4)();
            }
            ppppuVar12 = ppppuVar11;
            func_0x000107c4ce20();
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar11);
            if (ppppuVar12 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a370);
              (*pcVar4)();
            }
            ppppuVar11 = ppppuVar12;
            func_0x000107c453bc();
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar12);
            if (ppppuVar11 == (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a374);
              (*pcVar4)();
            }
            ppppuVar12 = ppppuVar11;
            func_0x000107c453c0(ppppuVar11);
            func_0x000107c61170(ppppuVar10);
            func_0x000107c61170(ppppuVar11);
            uVar26 = (int)ppppuVar12 == 0xb | uVar26;
            ppppuVar32 = (undefined8 ****)((long)ppppuVar32 + 1);
          } while (pppppuVar1 != pppppuVar27);
        }
        func_0x000107c6142c(ppppuVar3);
      }
      func_0x000107c61170(lVar7);
      func_0x00010006c090(lVar5,puVar14);
      goto LAB_10391a314;
    }
    func_0x00010006c090(lVar5);
  }
  puVar13 = PTR_PTR_1126bc7b8;
  func_0x000107c61168();
  func_0x000107c5c734(param_2);
  func_0x000107c61180();
  func_0x000107c430f0();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (puVar13 == (undefined *)0x0) {
LAB_103919f5c:
    puVar29 = (undefined *)0x0;
    uVar26 = 0;
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar29 = puVar13;
    func_0x000107c4e150();
    func_0x000107c61180();
    if (puVar29 == (undefined *)0x0) goto LAB_103919f5c;
    func_0x000107c61174();
    puVar30 = puVar29;
    func_0x000107c3f564();
    func_0x000107c61180();
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar30 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      FUN_10391a388(0,0x112e30008,&PTR_PTR_1126e0c30);
      puVar15 = puVar30;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar30);
    }
    puVar30 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((ulong)puVar15 >> 0x3e == 0) {
      puVar28 = *(undefined **)(puVar30 + 0x10);
    }
    else {
      puVar28 = puVar30;
      if ((undefined *)0x7fffffffffffffff < puVar15) {
        puVar28 = puVar15;
      }
      func_0x000107c60480();
    }
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar28 != (undefined *)0x0) {
      puVar24 = puVar14;
      puVar17 = (undefined *)0x0;
      do {
        while( true ) {
          if (((ulong)puVar15 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar30 + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a11c);
              (*pcVar4)();
            }
            puVar16 = *(undefined **)(puVar15 + (long)puVar17 * 8 + 0x20);
            func_0x000107c61174();
            puVar14 = puVar24;
          }
          else {
            puVar16 = puVar17;
            puVar14 = puVar15;
            FUN_1039194b0(puVar17,puVar15,&PTR_PTR_1126e0c30,0x112e30008);
          }
          if (SCARRY8((long)puVar17,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a118);
            (*pcVar4)();
          }
          puVar33 = puVar17 + 1;
          func_0x000107c61174();
          puVar18 = puVar16;
          func_0x000107c5c82c();
          func_0x000107c61180();
          if (puVar18 == (undefined *)0x0) break;
          puVar17 = puVar18;
          func_0x000107c5faec();
          puVar24 = puVar14;
          func_0x000107c61170(puVar18);
          func_0x000107c61170(puVar16);
          func_0x000107c61170(puVar16);
          puVar16 = puStack_70;
          func_0x000107c61558();
          if (((ulong)puVar16 & 1) == 0) {
            puVar24 = (undefined *)(*(long *)(puStack_70 + 0x10) + 1);
            puStack_70 = (undefined *)0x0;
            func_0x0001000d182c(0,puVar24,1);
          }
          uVar31 = *(ulong *)(puStack_70 + 0x10);
          puVar16 = (undefined *)(uVar31 + 1);
          if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar31) {
            puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puStack_70 + 0x18));
            puVar24 = puVar16;
            func_0x0001000d182c(puVar18,puVar16,1,puStack_70);
            puStack_70 = puVar18;
          }
          *(undefined **)(puStack_70 + 0x10) = puVar16;
          *(undefined **)(puStack_70 + uVar31 * 0x10 + 0x20) = puVar17;
          *(undefined **)(puStack_70 + uVar31 * 0x10 + 0x28) = puVar14;
          puVar14 = puVar24;
          puVar17 = puVar33;
          if (puVar33 == puVar28) goto LAB_10391a144;
        }
        func_0x000107c61170(puVar16);
        func_0x000107c61170(puVar16);
        puVar24 = puVar14;
        puVar17 = puVar17 + 1;
      } while (puVar33 != puVar28);
    }
LAB_10391a144:
    func_0x000107c6142c(puVar15);
    puVar30 = puVar29;
    func_0x000107c5bddc();
    func_0x000107c61180();
    if (puVar30 == (undefined *)0x0) {
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) goto LAB_10391a1a0;
LAB_10391a2b0:
      puVar30 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar15) {
        puVar30 = puVar15;
      }
      func_0x000107c60480();
      if (puVar30 != (undefined *)0x0) goto LAB_10391a1ac;
LAB_10391a2c8:
      uVar26 = 0;
    }
    else {
      puVar14 = (undefined *)0x0;
      FUN_10391a388(0,0x112e293a0,&PTR_PTR_1126e0e80);
      puVar15 = puVar30;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar30);
      if ((ulong)puVar15 >> 0x3e != 0) goto LAB_10391a2b0;
LAB_10391a1a0:
      puVar30 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
      if (puVar30 == (undefined *)0x0) goto LAB_10391a2c8;
LAB_10391a1ac:
      uVar31 = 0;
      do {
        if (((ulong)puVar15 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a344);
            (*pcVar4)();
          }
          uVar19 = *(ulong *)(puVar15 + uVar31 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar19 = uVar31;
          puVar14 = puVar15;
          FUN_1039194b0(uVar31,puVar15,&PTR_PTR_1126e0e80,0x112e293a0);
        }
        puVar28 = (undefined *)(uVar31 + 1);
        if (SCARRY8(uVar31,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10391a340);
          (*pcVar4)();
        }
        uVar20 = uVar19;
        func_0x000107c453d0();
        func_0x000107c61180();
        if (uVar20 != 0) {
          uVar21 = uVar20;
          func_0x000107c5faec();
          func_0x000107c61170(uVar20);
          if ((uVar21 == 0x434953554d) && (puVar14 == (undefined *)0xe500000000000000)) {
            func_0x000107c61170(uVar19);
            func_0x000107c6142c(0xe500000000000000);
          }
          else {
            puVar24 = puVar14;
            func_0x000107c605b8(uVar21,puVar14,0x434953554d,0xe500000000000000,0);
            func_0x000107c61170(uVar19);
            func_0x000107c6142c(puVar14);
            puVar14 = puVar24;
            if ((uVar21 & 1) == 0) goto LAB_10391a1d4;
          }
          uVar26 = 1;
          goto LAB_10391a2f0;
        }
        func_0x000107c61170(uVar19);
LAB_10391a1d4:
        uVar31 = uVar31 + 1;
      } while (puVar28 != puVar30);
      uVar26 = 0;
    }
LAB_10391a2f0:
    func_0x000107c6142c(puVar15);
    func_0x000107c61170(puVar29);
  }
  func_0x000107c615e8(puVar13);
  func_0x000107c61170(puVar29);
LAB_10391a314:
  auVar34._8_4_ = uVar26;
  auVar34._0_8_ = puStack_70;
  auVar34._12_4_ = 0;
  return auVar34;
}



/* Entry: 10391a388; end: 10391a44b;  */

void FUN_10391a388(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10391a44c; end: 10391a477;  */

void FUN_10391a44c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10391a478; end: 10391a547;  */

/* WARNING: Possible PIC construction at 0x00010391a524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010391a528) */

void FUN_10391a478(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(lVar3 + 0x20);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = *(long *)(lVar3 + 0x10);
    bVar5 = (byte)*(undefined8 *)(lVar3 + 0x18);
    FUN_103919ad4();
    uVar6 = *(undefined8 *)(lVar3 + 0x20);
    *(long *)(lVar3 + 0x20) = lVar2;
    *(byte *)(lVar3 + 0x28) = bVar5 & 1;
    func_0x000107c61434();
    func_0x000107c6142c(uVar6);
    lVar1 = 0;
  }
  func_0x000107c61434(lVar1);
  lVar3 = lVar2;
  func_0x00010102c3b8(lVar2);
  func_0x000107c6142c(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  lVar2 = lVar3;
  func_0x000107c5fc48(lVar3,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(lVar3);
  func_0x000107c45788(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10391a548; end: 10391a563;  */

void FUN_10391a548(long param_1,long param_2)

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



/* Entry: 10391a564; end: 10391a5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391a564(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  func_0x00010033ea54();
  lVar1 = param_2;
  func_0x000107c610f8();
  lVar2 = lVar1;
  func_0x0001000ad7c4();
  *(long *)(lVar1 + _DAT_112fae368) = lVar2;
  lStack_40 = lVar1;
  lStack_38 = param_2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 10391a5cc; end: 10391a5d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391a5cc(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar2 = auStack_40;
  func_0x00010033ea54();
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112fae368) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  *param_1 = puVar2;
  return;
}



/* Entry: 10391a5d4; end: 10391a643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10391a5d4(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112fae368) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 10391a644; end: 10391a653; -[_TtC18PromoteSnapService19PromoteSnapServices lazyPromoteSnapService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391a644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fae368));
  return;
}



/* Entry: 10391a654; end: 10391a6b3; -[_TtC18PromoteSnapService19PromoteSnapServices init] */

void FUN_10391a654(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PromoteSnapService.PromoteSnapServices",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391a680);
  (*pcVar1)();
}



/* Entry: 10391a6b4; end: 10391a6c3;  */

undefined1  [16] FUN_10391a6b4(void)

{
  return ZEXT816(0x1106ac8a8);
}



/* Entry: 10391a6c4; end: 10391a6d3; -[_TtC18PromoteSnapService19PromoteSnapServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391a6c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fae368));
  return;
}



/* Entry: 10391a6d4; end: 10391a757;  */

void FUN_10391a6d4(void)

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



/* Entry: 10391a758; end: 10391a75b;  */

void FUN_10391a758(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fae398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22ac0;
  func_0x000107c61520(&UNK_10dc22ac0,&UNK_1106ac948);
  puRam0000000112fae398 = puVar1;
  return;
}



/* Entry: 10391a75c; end: 10391a79b;  */

void FUN_10391a75c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fae398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22ac0;
  func_0x000107c61520(&UNK_10dc22ac0,&UNK_1106ac948);
  puRam0000000112fae398 = puVar1;
  return;
}



/* Entry: 10391a79c; end: 10391a79f;  */

void FUN_10391a79c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fae3a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22b60;
  func_0x000107c61520(&UNK_10dc22b60,&UNK_1106ac968);
  puRam0000000112fae3a0 = puVar1;
  return;
}



/* Entry: 10391a7a0; end: 10391a7df;  */

void FUN_10391a7a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fae3a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22b60;
  func_0x000107c61520(&UNK_10dc22b60,&UNK_1106ac968);
  puRam0000000112fae3a0 = puVar1;
  return;
}



/* Entry: 10391a7e0; end: 10391a82f;  */

undefined1  [16] FUN_10391a7e0(void)

{
  return ZEXT816(0x1106ac948);
}



/* Entry: 10391a830; end: 10391a87b;  */

void FUN_10391a830(undefined8 param_1)

{
  func_0x0001000285a8(0x112fae3a8,&UNK_10dc22c70);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10391a8e8,param_1);
  return;
}



/* Entry: 10391a87c; end: 10391a8e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391a87c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10391ab10();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fae3b0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10391a8e8; end: 10391a8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391a8e8(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10391ab10();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fae3b0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10391a8f0; end: 10391a93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391a8f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fae3b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10391a93c; end: 10391a9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10391a93c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61614(auStack_58,0);
  func_0x000107c61614(auStack_50,0);
  func_0x000107c61614(auStack_48,0);
  func_0x000107c61604(auStack_58,param_1);
  func_0x000107c61604(auStack_50,param_2);
  func_0x000107c61604(auStack_48,param_3);
  func_0x00010008a7c8(&uStack_60,auStack_58);
  func_0x000100083b20(&uStack_68);
  func_0x000107c61574(uStack_60);
  func_0x0001022a1970(auStack_58);
  return uStack_68;
}



/* Entry: 10391a9fc; end: 10391aa8f; -[_TtC29MemoriesSelectionFooterBarAPI43MemoriesSelectionFooterBarControllerFactory buildWithPresentingViewController:delegate:dataSource:] */

void FUN_10391a9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10391a93c(param_3,param_4,param_5);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10391aa90; end: 10391aaef; -[_TtC29MemoriesSelectionFooterBarAPI43MemoriesSelectionFooterBarControllerFactory init] */

void FUN_10391aa90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSelectionFooterBarAPI.MemoriesSelectionFooterBarControllerFactory",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391aabc);
  (*pcVar1)();
}



/* Entry: 10391aaf0; end: 10391aaff;  */

undefined1  [16] FUN_10391aaf0(void)

{
  return ZEXT816(0x1106ac9e0);
}



/* Entry: 10391ab00; end: 10391ab0f; -[_TtC29MemoriesSelectionFooterBarAPI43MemoriesSelectionFooterBarControllerFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391ab00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fae3b0));
  return;
}



/* Entry: 10391ab10; end: 10391ab2f;  */

void FUN_10391ab10(void)

{
  func_0x000107c61168(&PTR_PTR_1128ffa00);
  return;
}



/* Entry: 10391ab30; end: 10391ac93;  */

long FUN_10391ab30(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10391ac94; end: 10391ad2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391ac94(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fae3e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10391ad2c; end: 10391ad83; -[_TtC38PlusOpenSubscriptionManagementServices38PlusOpenSubscriptionManagementServices initWithLauncher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391ad2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fae3e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10391ad84; end: 10391adeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391ad84(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112fae3e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4de48();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 10391adec; end: 10391ae6f; -[_TtC38PlusOpenSubscriptionManagementServices38PlusOpenSubscriptionManagementServices openSubscriptionManagementWithUiContainer:type:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391adec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112fae3e0);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4de48();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10391ae70; end: 10391aea3;  */

void FUN_10391ae70(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10391aea4; end: 10391aeb3; -[_TtC38PlusOpenSubscriptionManagementServices38PlusOpenSubscriptionManagementServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391aea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fae3e0));
  return;
}



/* Entry: 10391aeb4; end: 10391af1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391aeb4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010037e090();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fae418) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10391af1c; end: 10391af67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391af1c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fae418) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10391af68; end: 10391b0b3; -[_TtC30SCMemoriesActionMenuScopeProxy33SCMemoriesActionMenuScopeServices buildWithActionMenuDataModel:sourcePageName:sourceView:viewController:type:subType:memoriesTabType:delegate:dataSource:shouldShowSpinner:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391af68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined *puVar1;
  undefined *apuStack_78 [2];
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126a9fa0;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_10);
  func_0x000107c615f0(param_11);
  func_0x000107c61174();
  func_0x000107c4550c(puVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12);
  apuStack_78[0] = puVar1;
  func_0x00010008a7c8(&uStack_68,apuStack_78);
  func_0x000100083b20(apuStack_78);
  func_0x000107c61574(uStack_68);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_10);
  func_0x000107c615e8(param_11);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_78[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10391b0b4; end: 10391b0e7;  */

void FUN_10391b0b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10391b0e8; end: 10391b117; -[_TtC30SCMemoriesActionMenuScopeProxy33SCMemoriesActionMenuScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391b0e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fae418));
  return;
}



/* Entry: 10391b118; end: 10391b16b;  */

long FUN_10391b118(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61614(unaff_x20 + 0x20,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x18) = param_2;
  return unaff_x20;
}



/* Entry: 10391b16c; end: 10391b197;  */

void FUN_10391b16c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001027a8fe4(unaff_x20 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10391b198; end: 10391b203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391b198(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100371310();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fae468) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10391b204; end: 10391b20b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391b204(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x000100371310();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fae468) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10391b20c; end: 10391b257;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391b20c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fae468) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10391b258; end: 10391b333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10391b258(long param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1;
  func_0x000100370740();
  func_0x000107c613fc();
  func_0x000107c61614(lVar2 + 0x20,0);
  *(long *)(lVar2 + 0x10) = param_1;
  *(undefined1 *)(lVar2 + 0x18) = param_2;
  func_0x000107c61428(lVar2 + 0x20,auStack_58,1,0);
  func_0x000107c61604(lVar2 + 0x20,param_3);
  func_0x000107c615f0(param_1);
  func_0x000100083b20(&uStack_60);
  uVar1 = uStack_60;
  lStack_68 = lVar2;
  func_0x00010008a7c8(&uStack_60,&lStack_68);
  func_0x000107c61574(uVar1);
  func_0x0001048580f8(&lStack_68);
  func_0x000107c61574(uStack_60);
  func_0x000107c61574(lVar2);
  return lStack_68;
}



/* Entry: 10391b334; end: 10391b3b3; -[_TtC29MemoriesLinkManagementUIScope37MemoriesLinkManagementUIScopeServices buildWithUiContainer:isModalPresentation:delegate:] */

void FUN_10391b334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10391b258(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10391b3b4; end: 10391b413; -[_TtC29MemoriesLinkManagementUIScope37MemoriesLinkManagementUIScopeServices init] */

void FUN_10391b3b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesLinkManagementUIScope.MemoriesLinkManagementUIScopeServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391b3e0);
  (*pcVar1)();
}



/* Entry: 10391b414; end: 10391b457; -[_TtC29MemoriesLinkManagementUIScope37MemoriesLinkManagementUIScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391b414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fae468));
  return;
}



/* Entry: 10391b458; end: 10391b483;  */

long FUN_10391b458(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10391b484; end: 10391b497;  */

/* WARNING: Possible PIC construction at 0x0001027ad40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ad424: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027ad410) */
/* WARNING: Removing unreachable block (ram,0x0001027ad428) */

void FUN_10391b484(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  bVar2 = *(byte *)(param_1 + 3);
  if (bVar2 < 3) {
    if (bVar2 == 0) {
_swift_errorRelease:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)();
      return;
    }
    if (bVar2 == 1) {
      func_0x000107c615e8(uVar1,uVar3,param_1[2]);
    }
    else if (bVar2 != 2) {
      return;
    }
  }
  else {
    uVar3 = uVar1;
    if (bVar2 < 5) {
      if ((bVar2 != 3) && (bVar2 != 4)) {
        return;
      }
    }
    else if (bVar2 != 5) {
      if (bVar2 != 6) {
        return;
      }
      goto _swift_errorRelease;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10391b498; end: 10391b55f;  */

undefined8 * FUN_10391b498(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  func_0x0001027ad2ec(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 10391b560; end: 10391b5ab;  */

undefined8 * FUN_10391b560(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  func_0x0001027ad390(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 10391b5ac; end: 10391b65f;  */

int FUN_10391b5ac(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf9 < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xfa;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 7) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10391b660; end: 10391b807;  */

/* WARNING: Possible PIC construction at 0x000100fad130: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fad134) */
/* WARNING: Removing unreachable block (ram,0x000100fad14c) */
/* WARNING: Removing unreachable block (ram,0x000100fad13c) */

void FUN_10391b660(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Entry: 10391b808; end: 10391b873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391b808(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x000100326dc0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fae550) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10391b874; end: 10391b87b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391b874(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x000100326dc0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fae550) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10391b87c; end: 10391b8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10391b87c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fae550) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10391b8f0; end: 10391b94f; -[_TtC35MemoriesSnapDocProvisionServicesAPI32MemoriesSnapDocProvisionServices init] */

void FUN_10391b8f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapDocProvisionServicesAPI.MemoriesSnapDocProvisionServices",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391b91c);
  (*pcVar1)();
}


