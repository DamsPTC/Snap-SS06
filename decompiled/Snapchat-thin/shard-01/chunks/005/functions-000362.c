/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101196088; end: 1011960bb;  */

void FUN_101196088(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011960bc; end: 101196133; -[SCMemoriesSnapsTabBackupBannerPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011960bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d633e8);
  func_0x000107c61610(param_1 + _DAT_112d633f0);
  func_0x000107c61610(param_1 + _DAT_112d633f8);
  func_0x000107c61610(param_1 + _DAT_112d63400);
  func_0x000107c61610(param_1 + _DAT_112d63408);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d63410));
  return;
}



/* Entry: 101196134; end: 101196153;  */

void FUN_101196134(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4568);
  return;
}



/* Entry: 101196154; end: 1011965f7;  */

long FUN_101196154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_9;
  *(undefined8 *)(unaff_x20 + 0x20) = param_7;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_8;
  func_0x000107c44ee4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_11038c300;
  func_0x000107c613fc(&UNK_11038c300,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  *(undefined8 *)(puVar3 + 0x38) = param_8;
  pcStack_70 = FUN_1011965f8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1011965fc;
  puStack_78 = &UNK_11038c318;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_68;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_8);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c60bd0(ppuVar4);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  return unaff_x20;
}



/* Entry: 1011965f8; end: 1011965fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011965f8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  long unaff_x20;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar1 = 0;
  uVar10 = uVar3;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar1 + -8);
  lStack_68 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(lVar2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar10);
  }
  func_0x000107c4cba8();
  func_0x000107c61180();
  func_0x000107c4cd6c();
  func_0x000107c61180();
  func_0x000107c3ef74();
  func_0x000107c61180();
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c44ee4();
  func_0x000107c61180();
  lVar7 = 0;
  func_0x000101198410();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = uVar3;
  *(undefined8 *)(lVar7 + 0x18) = uVar9;
  *(undefined8 *)(lVar7 + 0x20) = uVar4;
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  *(undefined8 *)(lVar7 + 0x40) = uVar6;
  puVar8 = PTR_PTR_1126ba528;
  func_0x000107c610f8();
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uStack_70 = uVar9;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(uVar6);
  func_0x000107c4547c();
  func_0x000107c61170(lVar2);
  *(undefined **)(lVar7 + 0x48) = puVar8;
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000107c5a9ec();
    func_0x000107c61180();
  }
  lVar2 = lStack_68;
  *(undefined **)(lVar7 + 0x50) = puVar8;
  (**(code **)(lVar11 + 0x68))
            (lVar1,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
             lStack_68);
  puVar8 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar9 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef2a320);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar9);
  (**(code **)(lVar11 + 8))(lVar1,lVar2);
  *(undefined **)(lVar7 + 0x30) = puVar8;
  puVar8 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar6);
  *(undefined **)(lVar7 + 0x38) = puVar8;
  return lVar7;
}



/* Entry: 1011965fc; end: 101196633;  */

void FUN_1011965fc(long param_1)

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



/* Entry: 101196634; end: 10119664f;  */

void FUN_101196634(long param_1,long param_2)

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



/* Entry: 101196650; end: 10119669b;  */

void FUN_101196650(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10119669c; end: 1011966ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10119669c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  long unaff_x20;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar1 = 0;
  uVar10 = uVar3;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar1 + -8);
  lStack_68 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(lVar2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar10);
  }
  func_0x000107c4cba8();
  func_0x000107c61180();
  func_0x000107c4cd6c();
  func_0x000107c61180();
  func_0x000107c3ef74();
  func_0x000107c61180();
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c44ee4();
  func_0x000107c61180();
  lVar7 = 0;
  func_0x000101198410();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = uVar3;
  *(undefined8 *)(lVar7 + 0x18) = uVar9;
  *(undefined8 *)(lVar7 + 0x20) = uVar4;
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  *(undefined8 *)(lVar7 + 0x40) = uVar6;
  puVar8 = PTR_PTR_1126ba528;
  func_0x000107c610f8();
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uStack_70 = uVar9;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(uVar6);
  func_0x000107c4547c();
  func_0x000107c61170(lVar2);
  *(undefined **)(lVar7 + 0x48) = puVar8;
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000107c5a9ec();
    func_0x000107c61180();
  }
  lVar2 = lStack_68;
  *(undefined **)(lVar7 + 0x50) = puVar8;
  (**(code **)(lVar11 + 0x68))
            (lVar1,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
             lStack_68);
  puVar8 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar9 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef2a320);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar9);
  (**(code **)(lVar11 + 8))(lVar1,lVar2);
  *(undefined **)(lVar7 + 0x30) = puVar8;
  puVar8 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar6);
  *(undefined **)(lVar7 + 0x38) = puVar8;
  return lVar7;
}



/* Entry: 1011966ac; end: 101196913;  */

void FUN_1011966ac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  
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
  lVar10 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x00010119b758(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar7);
  func_0x00010119b71c();
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000295c4(0);
  (**(code **)(lVar9 + 0x68))
            (lVar11,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar3
            );
  lVar2 = lVar11;
  func_0x000107c5fff0(lVar11);
  (**(code **)(lVar9 + 8))(lVar11,lVar3);
  pcStack_70 = FUN_101196958;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_11038c340;
  ppuVar4 = &puStack_90;
  func_0x000107c60bc4(ppuVar4);
  lVar3 = unaff_x20;
  func_0x000107c6157c();
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = uVar5;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar8,&puStack_98,uVar5,uVar6,lVar1,lVar3);
  func_0x000107c5ffe8(0,lVar10,lVar8,ppuVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar2);
  (**(code **)(lStack_a0 + 8))(lVar8,lVar1);
  (**(code **)(lStack_b0 + 8))(lVar10,lStack_a8);
  func_0x000107c61574(unaff_x20);
  return;
}



/* Entry: 101196914; end: 101196957;  */

void FUN_101196914(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5bb34();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101196958; end: 10119695f;  */

void FUN_101196958(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5bb34();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101196960; end: 101196b8f;  */

undefined8 FUN_101196960(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar12 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f804();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000295c4(0);
  (**(code **)(lVar9 + 0x68))
            (lVar11,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar3
            );
  lVar2 = lVar11;
  func_0x000107c5fff0(lVar11);
  (**(code **)(lVar9 + 8))(lVar11,lVar3);
  pcStack_70 = FUN_101196bd4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_11038c368;
  ppuVar4 = &puStack_90;
  func_0x000107c60bc4(ppuVar4);
  uVar5 = unaff_x20;
  func_0x000107c6157c();
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = uVar6;
  func_0x0001001c7f30();
  func_0x000107c60264(puVar8,&puStack_98,uVar6,uVar7,lVar1,uVar5);
  func_0x000107c5ffe8(0,lVar10,puVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar2);
  (**(code **)(lStack_a0 + 8))(puVar8,lVar1);
  (**(code **)(lVar12 + 8))(lVar10,lStack_a8);
  func_0x000107c61574(unaff_x20);
  return 0;
}



/* Entry: 101196b90; end: 101196bd3;  */

void FUN_101196b90(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3faac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101196bd4; end: 101196bdb;  */

void FUN_101196bd4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3faac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 101196bdc; end: 101196c17;  */

void FUN_101196bdc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101196c18; end: 101196c5b;  */

void FUN_101196c18(void)

{
  FUN_1011966ac();
  return;
}



/* Entry: 101196c5c; end: 101196c7b;  */

void FUN_101196c5c(void)

{
  func_0x000107c61168(&PTR_PTR_112d63480);
  return;
}



/* Entry: 101196c7c; end: 101196c8b;  */

void FUN_101196c7c(long param_1,long param_2)

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



/* Entry: 101196c8c; end: 101196edb;  */

long FUN_101196c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0;
  uStack_80 = param_1;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar2 + -8);
  lStack_68 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar2 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  puVar3 = PTR_PTR_1126ba528;
  func_0x000107c610f8();
  func_0x000107c61174();
  uStack_78 = param_3;
  func_0x000107c61174();
  uStack_70 = param_5;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110e567b8);
  uVar4 = uStack_80;
  func_0x000107c5fadc(uStack_80,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c4547c();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(&PTR____CFConstantStringClassReference_110e567b8);
  *(undefined **)(unaff_x20 + 0x48) = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x000107c5a9ec();
    func_0x000107c61180();
  }
  lVar1 = lStack_68;
  *(undefined **)(unaff_x20 + 0x50) = puVar3;
  (**(code **)(lVar5 + 0x68))
            (lVar2,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
             lStack_68);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef2a320);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar5 + 8))(lVar2,lVar1);
  *(undefined **)(unaff_x20 + 0x30) = puVar3;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  return unaff_x20;
}



/* Entry: 101196edc; end: 101197087;  */

void FUN_101196edc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar7 = &puStack_80;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c4da4c();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_101197088;
    puStack_58 = (undefined *)0x0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = (undefined *)0x10117fbac;
    puStack_68 = &UNK_11038c3b0;
    func_0x000107c60bc4(&puStack_80);
    lVar5 = lVar3;
    func_0x000107c4c280(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar3);
    lVar3 = lVar5;
    func_0x000107c421ac(lVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    lVar5 = lVar3;
    func_0x000107c4da88(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    puVar6 = &UNK_11038c3e8;
    func_0x000107c613fc(&UNK_11038c3e8,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    pcStack_60 = FUN_1011973dc;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1008561f0;
    puStack_68 = &UNK_11038c400;
    puStack_58 = puVar6;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    lVar3 = lVar5;
    func_0x000107c5c320(lVar5);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c3e924(lVar3);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101197088; end: 1011972af;  */

void FUN_101197088(ulong *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong *puStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar2 = 0;
  puStack_d0 = param_1;
  func_0x000107c5ed50();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)&puStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c600f4(lVar12);
  func_0x000107c5ed4c(auStack_80);
  puVar1 = PTR___sypN_11034f1a8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    if (lStack_68 == 0) {
      (**(code **)(lVar13 + 8))(lVar12,lVar2);
      uVar10 = 0x112d63630;
      func_0x0001000285a8(0x112d63630,&UNK_10d929158);
      puStack_d0[3] = uVar10;
      *puStack_d0 = (ulong)puVar9;
      return;
    }
    func_0x000100102924(auStack_80,auStack_a0);
    func_0x0001000bb420(auStack_a0,auStack_c0);
    uVar5 = 0;
    FUN_10119a6e4(0,0x112d63640,&PTR_PTR_1126bf970);
    plVar6 = &lStack_c8;
    func_0x000107c6147c(plVar6,auStack_c0,puVar1 + 8,uVar5,6);
    lVar8 = lStack_c8;
    if (((ulong)plVar6 & 1) == 0) {
LAB_101197178:
      func_0x000100183ab8(auStack_a0);
    }
    else {
      lVar7 = lStack_c8;
      func_0x000107c42eec();
      if (lVar7 == 0) {
        func_0x000107c61174();
        puVar4 = puVar9;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar9 < 0)) ||
           (puVar4 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar9 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar9) {
              puVar3 = puVar9;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_1011984a8(0,puVar3 + 1,1,puVar9);
        }
        uVar11 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar10 = *(ulong *)(uVar11 + 0x10);
        puVar9 = puVar4;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar10) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_1011984a8(puVar9,uVar10 + 1,1,puVar4);
          uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar10 + 1;
        *(long *)(uVar11 + uVar10 * 8 + 0x20) = lVar8;
        func_0x000107c61170(lVar8);
        goto LAB_101197178;
      }
      func_0x000100183ab8(auStack_a0);
      func_0x000107c61170(lVar8);
    }
    func_0x000107c5ed4c(auStack_80);
  } while( true );
}



/* Entry: 1011972b0; end: 1011972cb;  */

void FUN_1011972b0(long param_1,long param_2)

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



/* Entry: 1011972cc; end: 1011973db;  */

void FUN_1011972cc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uStack_60 = param_1;
    func_0x000107c615f0(param_1);
    uVar2 = 0x112d63630;
    func_0x0001000285a8(0x112d63630,&UNK_10d929158);
    puVar3 = &uStack_68;
    func_0x000107c6147c(puVar3,&uStack_60,PTR___syXlN_11034f1a0 + 8,uVar2,6);
    if ((int)puVar3 != 0) {
      puVar3 = *(undefined8 **)(param_2 + 0x40);
      func_0x000107c4fd94();
      func_0x000102ab88d4();
      uVar2 = *puVar3;
      uVar1 = puVar3[1];
      puVar4 = &UNK_11038c488;
      func_0x000107c613fc(&UNK_11038c488,0x20,7);
      *(long *)(puVar4 + 0x10) = param_2;
      *(undefined8 *)(puVar4 + 0x18) = uStack_68;
      func_0x000107c61434(uVar1);
      func_0x000107c6157c(param_2);
      FUN_10119b7e4(uVar2,uVar1,FUN_101198430,puVar4);
      func_0x000107c6142c(uVar1);
      func_0x000107c61574(puVar4);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1011973dc; end: 1011973e3;  */

void FUN_1011973dc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uStack_60 = param_1;
    func_0x000107c615f0(param_1);
    uVar3 = 0x112d63630;
    func_0x0001000285a8(0x112d63630,&UNK_10d929158);
    puVar4 = &uStack_68;
    func_0x000107c6147c(puVar4,&uStack_60,PTR___syXlN_11034f1a0 + 8,uVar3,6);
    if ((int)puVar4 != 0) {
      puVar4 = *(undefined8 **)(lVar2 + 0x40);
      func_0x000107c4fd94();
      func_0x000102ab88d4();
      uVar3 = *puVar4;
      uVar1 = puVar4[1];
      puVar5 = &UNK_11038c488;
      func_0x000107c613fc(&UNK_11038c488,0x20,7);
      *(long *)(puVar5 + 0x10) = lVar2;
      *(undefined8 *)(puVar5 + 0x18) = uStack_68;
      func_0x000107c61434(uVar1);
      func_0x000107c6157c(lVar2);
      FUN_10119b7e4(uVar3,uVar1,FUN_101198430,puVar5);
      func_0x000107c6142c(uVar1);
      func_0x000107c61574(puVar5);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1011973e4; end: 10119740b; -[_TtC32SCMemoriesWidgetDataProviderImpl32SCMemoriesWidgetDataProviderImpl startObservingData] */

void FUN_1011973e4(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_101196edc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10119740c; end: 1011974a3;  */

void FUN_10119740c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  
  ppuVar1 = &puStack_60;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  pcStack_40 = FUN_1011974ec;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11038c428;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c4e524(uVar2,param_2,ppuVar1);
  func_0x000107c60bd0(ppuVar1);
  return;
}



/* Entry: 1011974a4; end: 1011974eb;  */

void FUN_1011974a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4fe58();
    func_0x000107c4fd94(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011974ec; end: 1011974f3;  */

void FUN_1011974ec(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c4fe58();
    func_0x000107c4fd94(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1011974f4; end: 10119777f; -[_TtC32SCMemoriesWidgetDataProviderImpl32SCMemoriesWidgetDataProviderImpl clearData] */

void FUN_1011974f4(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = 0x10119a7a8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11038c450;
  lStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  lVar1 = lStack_38;
  func_0x000107c61580(param_1,2);
  func_0x000107c61574(lVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 101197780; end: 10119802f;  */

void FUN_101197780(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,long param_10,long param_11,undefined8 param_12)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar6 = auStack_78;
  func_0x000107c61428(param_4 + 0x10,puVar6,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 == 0) {
    func_0x000107c60f3c(param_6);
    return;
  }
  if (param_1 == (undefined *)0x0) {
    lVar3 = *(long *)(param_4 + 0x28);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c4cba0();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101197b00);
        (*pcVar1)();
      }
      puVar10 = PTR_PTR_1126b2438;
      func_0x000107c61168(PTR_PTR_1126b2438);
      func_0x000107c4cadc();
      func_0x000107c61180();
      func_0x000107c45314(lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(puVar10);
    }
    func_0x000107c60f3c(param_6);
    func_0x000107c61574(param_4);
    return;
  }
  func_0x000107c61174();
  puVar10 = param_1;
  func_0x000107c60bb4(0x3fe0000000000000);
  func_0x000107c61180();
  if (puVar10 != (undefined *)0x0) {
    puVar9 = puVar10;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar10);
    puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    puVar2 = puVar9;
    func_0x000107c5ee20(puVar9,puVar6);
    func_0x000107c4635c();
    func_0x000107c61170(puVar2);
    func_0x00010006c090(puVar9);
    if (puVar10 != (undefined *)0x0) goto LAB_101197870;
  }
  puVar10 = param_1;
  func_0x000107c61174();
LAB_101197870:
  puVar9 = puVar10;
  func_0x000107c60bb4(0x3ff0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  if (puVar9 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    puVar11 = (undefined1 *)0xf000000000000000;
    puVar7 = puVar6;
  }
  else {
    puVar10 = puVar9;
    func_0x000107c5ee30(puVar9);
    puVar7 = puVar6;
    func_0x000107c61170(puVar9);
    puVar11 = puVar6;
  }
  lVar3 = param_5;
  func_0x000107c42370();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c5b2d0();
    func_0x000107c61180();
    lVar3 = param_5;
    if (param_5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101197b04);
      (*pcVar1)();
    }
  }
  lVar4 = lVar3;
  func_0x000107c5faec();
  func_0x000107c61170(lVar3);
  uVar5 = 0;
  if (param_8 != 0) {
    func_0x000107c5fadc(param_7,param_8);
    uVar5 = param_7;
  }
  if (param_10 == 0) {
    param_9 = 0;
  }
  else {
    func_0x000107c5fadc(param_9,param_10);
  }
  if ((ulong)puVar11 >> 0x3c < 0xf) {
    puVar9 = puVar10;
    func_0x000107c5ee20(puVar10,puVar11);
    func_0x0001000b44c0(puVar10,puVar11);
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  puVar10 = PTR_PTR_1126a64a8;
  func_0x000107c610f8(PTR_PTR_1126a64a8);
  func_0x000107c5fadc(lVar4,puVar7);
  func_0x000107c6142c(puVar7);
  func_0x000107c48d94(puVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(param_9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar4);
  func_0x000107c61428(param_11 + 0x10,auStack_90,0x21,0);
  func_0x000107c61174(puVar10);
  uVar5 = *(undefined8 *)(param_11 + 0x10);
  func_0x000107c61558(uVar5);
  uVar8 = *(undefined8 *)(param_11 + 0x10);
  *(undefined8 *)(param_11 + 0x10) = 0x8000000000000000;
  FUN_101198dc8(puVar10,param_12,uVar5);
  *(undefined8 *)(param_11 + 0x10) = uVar8;
  func_0x000107c614a8(auStack_90);
  func_0x000107c60f3c(param_6);
  func_0x000107c61574(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar10);
  return;
}



/* Entry: 101198030; end: 10119808f;  */

void FUN_101198030(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  func_0x000107c61434(uVar1);
  (*param_1)();
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 101198090; end: 101198393;  */

/* WARNING: Possible PIC construction at 0x000101198130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101198154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101198194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011981c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101198208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011982e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101198228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101198268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119829c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119826c) */
/* WARNING: Removing unreachable block (ram,0x000101198270) */
/* WARNING: Removing unreachable block (ram,0x00010119822c) */
/* WARNING: Removing unreachable block (ram,0x000101198250) */
/* WARNING: Removing unreachable block (ram,0x0001011982e8) */
/* WARNING: Removing unreachable block (ram,0x00010119820c) */
/* WARNING: Removing unreachable block (ram,0x0001011981cc) */
/* WARNING: Removing unreachable block (ram,0x000101198390) */
/* WARNING: Removing unreachable block (ram,0x0001011981d0) */
/* WARNING: Removing unreachable block (ram,0x000101198198) */
/* WARNING: Removing unreachable block (ram,0x0001011982b8) */
/* WARNING: Removing unreachable block (ram,0x00010119819c) */
/* WARNING: Removing unreachable block (ram,0x0001011982d4) */
/* WARNING: Removing unreachable block (ram,0x0001011982e0) */
/* WARNING: Removing unreachable block (ram,0x0001011981b0) */
/* WARNING: Removing unreachable block (ram,0x000101198158) */
/* WARNING: Removing unreachable block (ram,0x0001011982a8) */
/* WARNING: Removing unreachable block (ram,0x000101198160) */
/* WARNING: Removing unreachable block (ram,0x000101198134) */
/* WARNING: Removing unreachable block (ram,0x000101198218) */
/* WARNING: Removing unreachable block (ram,0x000101198140) */
/* WARNING: Removing unreachable block (ram,0x0001011982a0) */
/* WARNING: Removing unreachable block (ram,0x0001011982ec) */

void FUN_101198090(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar2 = param_1;
    }
    func_0x000107c60480();
    puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  }
  PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0 = puVar3;
  if (uVar2 == 0) {
    param_1 = *(ulong *)(unaff_x20 + 0x48);
    if (param_1 == 0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return;
      }
    }
    else {
      func_0x000107c61174();
      func_0x000107c4fe58();
      func_0x000107c4fd94(*(undefined8 *)(unaff_x20 + 0x40));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) goto code_r0x000107c61170;
    }
    func_0x000107c60e78();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101198390);
    (*pcVar1)();
  }
  func_0x000107c61168(puVar3);
  uVar4 = 0;
  FUN_10119a6e4(0,0x112d63628,&PTR_PTR_1126a64a8);
  func_0x000107c5fc48(param_1,uVar4);
  func_0x000107c3e100(puVar3);
  func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101198394; end: 10119842f;  */

void FUN_101198394(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101198430; end: 101198437;  */

void FUN_101198430(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = 6;
  if ((param_1 & 1) == 0) {
    uVar1 = 1;
  }
  puVar4 = &UNK_11038c3e8;
  func_0x000107c613fc(&UNK_11038c3e8,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,uVar2);
  FUN_101199b20(uVar3,uVar1,uVar2,puVar4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 101198438; end: 1011984a7;  */

void FUN_101198438(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    func_0x0001011985f0(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1011984a8; end: 101198737;  */

ulong FUN_1011984a8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011985f0);
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
  FUN_101198738(uVar2,uVar4,0x112d63640,&PTR_PTR_1126bf970,0x112d63648,&UNK_10d929168);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011985ec);
      (*pcVar1)();
    }
    FUN_1011987c8(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101198738; end: 1011987c7;  */

undefined *
FUN_101198738(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1011989f8(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1011987c8; end: 1011989f7;  */

long FUN_1011987c8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1011988dc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1011988e0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_10119a6e4(0,0x112d63640,&PTR_PTR_1126bf970);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_10119a6e4(0,0x112d63640,&PTR_PTR_1126bf970);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1011988d8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1011989f8; end: 101198a6f;  */

void FUN_1011989f8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10119a6e4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101198a70; end: 101198c0b;  */

void FUN_101198a70(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x000101198b5c(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_1011992b8(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101198b58);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101198b5c);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101198b54);
  (*pcVar1)();
}



/* Entry: 101198c0c; end: 101198dc7;  */

ulong FUN_101198c0c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101198cf0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101198cf4);
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
  FUN_10119a6e4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101198dc8);
  (*pcVar2)();
}



/* Entry: 101198dc8; end: 101198ef7;  */

void FUN_101198dc8(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x00010035a314();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101198e8c);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_101199054(lVar5);
    uVar2 = param_2;
    func_0x00010035a314();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101198e58);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_101198ef8();
    lVar5 = *unaff_x20;
    goto joined_r0x000101198ea0;
  }
  lVar5 = *unaff_x20;
joined_r0x000101198ea0:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101198ef8);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 101198ef8; end: 101199053;  */

void FUN_101198ef8(void)

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
  
  func_0x0001000285a8(0x112d63658,&UNK_10d929180);
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
    if (uVar6 == 0) goto LAB_101198fd4;
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
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_101198fd4:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101199054);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_10119902c;
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
LAB_10119902c:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101199054; end: 1011992b7;  */

void FUN_101199054(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112d63658;
  func_0x0001000285a8(0x112d63658,&UNK_10d929180);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_101199284:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1011992b4);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_101199284;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1011992b8);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 1011992b8; end: 101199437;  */

ulong FUN_1011992b8(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101199438);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10119942c);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_10119a6e4(0,0x112d63628,&PTR_PTR_1126a64a8);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101199430);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101199434);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_101198c0c(uVar7,param_3,&PTR_PTR_1126a64a8,0x112d63628);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 101199438; end: 101199b1f;  */

/* WARNING: Possible PIC construction at 0x000101199748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101199784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101199794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119985c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011999ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101199a34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101199a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101199b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011998c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119988c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119984c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101199abc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101199850) */
/* WARNING: Removing unreachable block (ram,0x000101199890) */
/* WARNING: Removing unreachable block (ram,0x00010119989c) */
/* WARNING: Removing unreachable block (ram,0x000101199b1c) */
/* WARNING: Removing unreachable block (ram,0x000101199a48) */
/* WARNING: Removing unreachable block (ram,0x000101199a38) */
/* WARNING: Removing unreachable block (ram,0x0001011999f0) */
/* WARNING: Removing unreachable block (ram,0x000101199860) */
/* WARNING: Removing unreachable block (ram,0x0001011998cc) */
/* WARNING: Removing unreachable block (ram,0x000101199b08) */
/* WARNING: Removing unreachable block (ram,0x0001011998e0) */
/* WARNING: Removing unreachable block (ram,0x000101199798) */
/* WARNING: Removing unreachable block (ram,0x000101199858) */
/* WARNING: Removing unreachable block (ram,0x000101199788) */
/* WARNING: Removing unreachable block (ram,0x00010119974c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x000101199ac0) */

void FUN_101199438(long param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uStack_130;
  ulong uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)&uStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar4 = &UNK_11038c5c8;
  func_0x000107c613fc(&UNK_11038c5c8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined **)(puVar4 + 0x18) = param_4;
  if (param_1 < 1) {
    if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) ||
       (puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8, func_0x000107c60480(),
       puVar8 == (undefined *)0x0)) {
      func_0x000107c6157c(param_3);
      func_0x000107c61434(param_4);
    }
    else {
      puStack_b8 = param_4;
      func_0x000107c61438(param_4,2);
      func_0x000107c6157c(param_3);
      FUN_101198a70(PTR___swiftEmptyArrayStorage_11034f1c8);
      FUN_101198090(puStack_b8);
    }
  }
  else {
    uVar10 = *(ulong *)(param_2 + 0x20);
    lStack_f0 = lVar2;
    puStack_e8 = puVar4;
    func_0x000107c6157c(param_3);
    func_0x000107c61434(param_4);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar10 == 0) {
      func_0x0001011976dc(PTR___swiftEmptyArrayStorage_11034f1c8,param_3,param_4);
      puVar4 = puStack_e8;
    }
    else {
      lVar2 = *(long *)(param_2 + 0x18);
      puStack_f8 = param_4;
      func_0x000107c5c734();
      func_0x000107c61180();
      lStack_c8 = lVar2;
      if (lVar2 == 0) {
        func_0x0001011976dc(PTR___swiftEmptyArrayStorage_11034f1c8,param_3,puStack_f8);
        puVar4 = puStack_e8;
      }
      else {
        uVar15 = uVar10;
        func_0x000107c43270();
        func_0x000107c61180();
        puVar4 = puStack_e8;
        if (uVar15 == 0) {
          func_0x0001011976dc(PTR___swiftEmptyArrayStorage_11034f1c8,param_3,puStack_f8);
        }
        else {
          uVar11 = 0x112d508c0;
          uStack_130 = param_3;
          lStack_120 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
          lStack_118 = lVar14;
          lStack_110 = lVar3;
          lStack_108 = lVar13;
          lStack_100 = lVar12;
          func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
          uVar5 = uVar15;
          func_0x000107c5fc54(uVar15,uVar11);
          func_0x000107c61170(uVar15);
          puVar8 = &UNK_11038c5f0;
          func_0x000107c613fc(&UNK_11038c5f0,0x18,7);
          *(undefined **)(puVar8 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar6 = puVar8;
          func_0x000107c60f34();
          if (uVar5 >> 0x3e == 0) {
            uVar15 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar15 = uVar5 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar5) {
              uVar15 = uVar5;
            }
            func_0x000107c60480();
          }
          uStack_128 = uVar10;
          if (uVar15 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
            return;
          }
          puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          lStack_d0 = param_2;
          func_0x000107c61168();
          puStack_d8 = puVar4;
          if ((long)uVar15 < 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101199b08);
            (*pcVar1)();
          }
          uVar11 = *(undefined8 *)(lStack_d0 + 0x30);
          uStack_e0 = uVar5 & 0xc000000000000001;
          if (uStack_e0 == 0) {
            uVar9 = *(undefined8 *)(uVar5 + 0x20);
            func_0x000107c615f0(uVar9);
          }
          else {
            uVar9 = 0;
            FUN_100fb0ba0(0,uVar5);
          }
          func_0x000107c60f38(puVar6);
          puVar4 = puStack_d8;
          func_0x000107c4c194(puStack_d8);
          func_0x000107c61180();
          func_0x000107c51820();
          func_0x000107c61170(puVar4);
          func_0x000107c4f7c0(uVar11);
          func_0x000107c61180();
          puVar4 = &UNK_11038c3e8;
          func_0x000107c613fc(&UNK_11038c3e8,0x18,7);
          func_0x000107c61644(puVar4 + 0x10,lStack_d0);
          puVar7 = &UNK_11038c618;
          func_0x000107c613fc(&UNK_11038c618,0x30,7);
          *(undefined **)(puVar7 + 0x10) = puVar4;
          *(undefined8 *)(puVar7 + 0x18) = uVar9;
          *(undefined **)(puVar7 + 0x20) = puVar6;
          *(undefined **)(puVar7 + 0x28) = puVar8;
          uStack_98 = 0x10119a758;
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          pcStack_a8 = FUN_100f9ebfc;
          puStack_a0 = &UNK_11038c630;
          puStack_90 = puVar7;
          func_0x000107c60bc4(&puStack_b8);
          puVar4 = puStack_90;
          func_0x000107c6157c(puVar8);
          func_0x000107c615f0(uVar9);
          func_0x000107c61174(puVar6);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 101199b20; end: 10119a697;  */

void FUN_101199b20(double param_1,ulong param_2,ulong param_3,long param_4,long param_5,long param_6
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined8 auStack_170 [2];
  ulong uStack_160;
  long lStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar5 = 0;
  uStack_c0 = param_3;
  func_0x000107c5f7fc();
  lVar21 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar24 = (long)&uStack_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x000107c5f824();
  lVar25 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar25 + 0x40));
  lVar16 = lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &UNK_11038c4b0;
  lStack_108 = lVar16;
  func_0x000107c613fc(&UNK_11038c4b0,0x20,7);
  *(long *)(puVar7 + 0x10) = param_5;
  *(long *)(puVar7 + 0x18) = param_6;
  lVar19 = *(long *)(param_4 + 0x18);
  lStack_e8 = param_4;
  func_0x000107c6157c(param_5);
  func_0x000107c5c734();
  func_0x000107c61180();
  lStack_f0 = lVar19;
  if (lVar19 == 0) {
    func_0x000107c61428(param_5 + 0x10,&puStack_a8,0,0);
    param_5 = param_5 + 0x10;
    func_0x000107c61648();
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (param_5 != 0) {
      FUN_101198090(PTR___swiftEmptyArrayStorage_11034f1c8);
      if ((ulong)puVar15 >> 0x3e != 0) {
        puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c60480();
        bVar4 = SBORROW8(param_6,(long)puVar15);
        param_6 = param_6 - (long)puVar15;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10119a68c);
          (*pcVar3)();
        }
      }
      func_0x000107c6157c(param_5);
      FUN_101199438(param_6,param_5,param_5,PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c61574(puVar7);
      func_0x000107c61578(param_5,2);
      return;
    }
  }
  else {
    puVar15 = &UNK_11038c4d8;
    func_0x000107c613fc(&UNK_11038c4d8,0x18,7);
    *(undefined **)(puVar15 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
    lStack_138 = lVar25;
    lStack_130 = lVar6;
    lStack_128 = lVar24;
    lStack_120 = lVar21;
    lStack_118 = lVar5;
    puStack_110 = puVar7;
    puStack_d8 = puVar15;
    if (param_2 >> 0x3e == 0) {
      uVar20 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar20 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar20 = param_2;
      }
      func_0x000107c60480();
    }
    lStack_b8 = param_5;
    if (uVar20 != 0) {
      uVar18 = 0;
      uVar22 = param_2 & 0xffffffffffffff8;
      uStack_c8 = uVar22;
      if ((param_2 & 0xc000000000000001) == 0) goto LAB_101199cb0;
LAB_101199c94:
      uVar11 = uVar18;
      FUN_101198c0c(uVar18,param_2,&PTR_PTR_1126bf970,0x112d63640);
      do {
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101199f98);
          (*pcVar3)();
        }
        uVar10 = uVar11;
        func_0x000107c4fd30();
        func_0x000107c61180();
        if (uVar10 == 0) {
LAB_101199e7c:
          func_0x000107c61170(uVar11);
        }
        else {
          uVar26 = uVar10;
          func_0x000107c40440();
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
          if (uVar26 == 0) goto LAB_101199e7c;
          uVar10 = uVar26;
          func_0x000107c49eac();
          if (((uVar10 & 1) != 0) || (uVar10 = uVar26, func_0x000107c4a274(), (int)uVar10 != 0)) {
LAB_101199e74:
            func_0x000107c615e8(uVar26);
            goto LAB_101199e7c;
          }
          uVar10 = uVar11;
          func_0x000107c4fd30();
          func_0x000107c61180();
          if (uVar10 == 0) goto LAB_101199e74;
          uVar22 = uVar10;
          func_0x000107c5b538();
          func_0x000107c61180();
          func_0x000107c61170(uVar10);
          uVar8 = 0;
          FUN_10119a6e4(0,0x112d63638,&PTR_PTR_1126af4d0);
          uVar10 = uVar22;
          func_0x000107c5fc54(uVar22,uVar8);
          func_0x000107c61170(uVar22);
          uVar9 = uVar26;
          func_0x000107c5b558();
          if (uVar10 >> 0x3e == 0) {
            uVar23 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar23 = uVar10 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar10) {
              uVar23 = uVar10;
            }
            func_0x000107c60480();
          }
          func_0x000107c6142c(uVar10);
          func_0x000107c615e8(uVar26);
          uVar22 = uStack_c8;
          puVar7 = puStack_d8;
          if ((long)uVar23 <= (long)(int)uVar9) goto LAB_101199e7c;
          uVar26 = *(ulong *)(puStack_d8 + 0x10);
          func_0x000107c61174();
          uVar10 = uVar26;
          func_0x000107c61550();
          *(ulong *)(puVar7 + 0x10) = uVar26;
          if ((((int)uVar10 == 0) || ((long)uVar26 < 0)) ||
             (uVar10 = uVar26, (uVar26 >> 0x3e & 1) != 0)) {
            if (uVar26 >> 0x3e == 0) {
              uVar9 = *(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar9 = uVar26 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar26) {
                uVar9 = uVar26;
              }
              func_0x000107c60480(uVar9);
            }
            uVar10 = 0;
            FUN_1011984a8(0,uVar9 + 1,1,uVar26);
            *(ulong *)(puStack_d8 + 0x10) = uVar10;
          }
          uVar17 = uVar10 & 0xffffffffffffff8;
          uVar9 = *(ulong *)(uVar17 + 0x10);
          uVar26 = uVar9 + 1;
          uVar23 = uVar10;
          if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar9) {
            uVar23 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
            FUN_1011984a8(uVar23,uVar26,1,uVar10);
            uVar17 = uVar23 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar17 + 0x10) = uVar26;
          *(ulong *)(uVar17 + uVar9 * 8 + 0x20) = uVar11;
          *(ulong *)(puStack_d8 + 0x10) = uVar23;
          if (uVar23 >> 0x3e != 0) {
            uVar26 = uVar17;
            if (0x7fffffffffffffff < uVar23) {
              uVar26 = uVar23;
            }
            func_0x000107c60480();
          }
          func_0x000107c61170(uVar11);
          if (uVar26 == uStack_c0) break;
        }
        if (uVar18 + 1 == uVar20) break;
        uVar18 = uVar18 + 1;
        if ((param_2 & 0xc000000000000001) != 0) goto LAB_101199c94;
LAB_101199cb0:
        if (*(ulong *)(uVar22 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101199f9c);
          (*pcVar3)();
        }
        uVar11 = *(ulong *)(param_2 + uVar18 * 8 + 0x20);
        func_0x000107c61174();
      } while( true );
    }
    lVar5 = lStack_b8;
    puVar7 = &UNK_11038c500;
    func_0x000107c613fc(&UNK_11038c500,0x18,7);
    *(undefined **)(puVar7 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puStack_100 = puVar7;
    func_0x000107c60f34();
    uVar20 = *(ulong *)(puStack_d8 + 0x10);
    puStack_e0 = puVar7;
    if (uVar20 >> 0x3e == 0) {
      uVar18 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar18 = uVar20 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar20) {
        uVar18 = uVar20;
      }
      func_0x000107c60480();
    }
    lStack_f8 = *(long *)(lStack_e8 + 0x30);
    func_0x000107c61434(uVar20);
    if (uVar18 != 0) {
      uVar22 = 0;
      uStack_c0 = uVar20 & 0xc000000000000001;
      uStack_c8 = uVar20 & 0xffffffffffffff8;
      uStack_160 = uVar18;
      do {
        if (uStack_c0 == 0) {
          if (*(ulong *)(uStack_c8 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10119a654);
            (*pcVar3)();
          }
          uVar11 = *(ulong *)(uVar20 + uVar22 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar11 = uVar22;
          FUN_101198c0c(uVar22,uVar20,&PTR_PTR_1126bf970,0x112d63640);
        }
        uVar10 = uVar22 + 1;
        if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10119a650);
          (*pcVar3)();
        }
        uVar26 = uVar11;
        func_0x000107c4fd30();
        func_0x000107c61180();
        if (uVar26 == 0) {
LAB_10119a048:
          func_0x000107c61170(uVar11);
        }
        else {
          uVar9 = uVar26;
          func_0x000107c5b538();
          func_0x000107c61180();
          func_0x000107c61170(uVar26);
          uVar23 = 0;
          FUN_10119a6e4(0,0x112d63638,&PTR_PTR_1126af4d0);
          uVar26 = uVar9;
          func_0x000107c5fc54();
          func_0x000107c61170(uVar9);
          uVar9 = uVar11;
          func_0x000107c4fd30();
          func_0x000107c61180();
          if (uVar9 == 0) {
LAB_10119a040:
            func_0x000107c6142c(uVar26);
            goto LAB_10119a048;
          }
          uVar17 = uVar9;
          func_0x000107c40440();
          func_0x000107c61180();
          func_0x000107c61170(uVar9);
          if (uVar17 == 0) goto LAB_10119a040;
          uVar9 = uVar11;
          func_0x000107c4fd30();
          func_0x000107c61180();
          if (uVar9 == 0) {
LAB_10119a038:
            func_0x000107c615e8(uVar17);
            goto LAB_10119a040;
          }
          uVar12 = uVar9;
          func_0x000107c5c7bc();
          func_0x000107c61180();
          func_0x000107c61170(uVar9);
          uStack_d0 = uVar12;
          if (uVar12 == 0) goto LAB_10119a038;
          uVar9 = uVar17;
          func_0x000107c5b558();
          if (uVar26 >> 0x3e == 0) {
            uVar12 = *(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar12 = uVar26 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar26) {
              uVar12 = uVar26;
            }
            func_0x000107c60480();
          }
          lVar6 = (long)(int)uVar9;
          if (lVar6 < (long)uVar12) {
            func_0x000107c60f38(puStack_e0);
            if ((uVar26 & 0xc000000000000001) == 0) {
              if ((int)uVar9 < 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10119a670);
                (*pcVar3)();
              }
              if (*(long *)((uVar26 & 0xffffffffffffff8) + 0x10) <= lVar6) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10119a674);
                (*pcVar3)();
              }
              lVar6 = *(long *)(uVar26 + lVar6 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar23 = uVar26;
              FUN_101198c0c(lVar6,uVar26,&PTR_PTR_1126af4d0,0x112d63638);
            }
            func_0x000107c6142c(uVar26);
            uVar18 = uVar17;
            func_0x000107c5cab0();
            func_0x000107c61180();
            if (uVar18 == 0) {
              uStack_140 = 0;
              uStack_148 = 0;
            }
            else {
              uVar26 = uVar18;
              func_0x000107c5faec();
              uStack_148 = uVar23;
              uStack_140 = uVar26;
              func_0x000107c61170(uVar18);
            }
            uVar18 = uStack_d0;
            func_0x000107c5c38c();
            func_0x000107c61180();
            if (uVar18 == 0) {
              uStack_150 = 0;
              uVar23 = 0;
            }
            else {
              uVar26 = uVar18;
              func_0x000107c5faec();
              uStack_150 = uVar26;
              func_0x000107c61170(uVar18);
            }
            puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
            func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
            func_0x000107c61174();
            func_0x000107c4c194(puVar7);
            func_0x000107c61180();
            func_0x000107c51820();
            func_0x000107c61170(puVar7);
            param_1 = param_1 * 350.0;
            lVar5 = lStack_f8;
            func_0x000107c4f7c0();
            func_0x000107c61180();
            puVar7 = &UNK_11038c3e8;
            lStack_158 = lVar5;
            func_0x000107c613fc(&UNK_11038c3e8,0x18,7);
            func_0x000107c61644(puVar7 + 0x10,lStack_e8);
            puVar15 = &UNK_11038c528;
            func_0x000107c613fc(&UNK_11038c528,0x58,7);
            puVar2 = puStack_e0;
            puVar1 = puStack_100;
            *(undefined **)(puVar15 + 0x10) = puVar7;
            *(long *)(puVar15 + 0x18) = lVar6;
            *(undefined **)(puVar15 + 0x20) = puStack_e0;
            *(ulong *)(puVar15 + 0x28) = uStack_140;
            *(ulong *)(puVar15 + 0x30) = uStack_148;
            *(ulong *)(puVar15 + 0x38) = uStack_150;
            *(ulong *)(puVar15 + 0x40) = uVar23;
            *(undefined **)(puVar15 + 0x48) = puStack_100;
            *(ulong *)(puVar15 + 0x50) = uVar22;
            pcStack_88 = FUN_10119a6a0;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            pcStack_98 = FUN_100f9ebfc;
            puStack_90 = &UNK_11038c540;
            ppuVar13 = &puStack_a8;
            puStack_80 = puVar15;
            func_0x000107c60bc4();
            puVar7 = puStack_80;
            func_0x000107c6157c(puVar1);
            func_0x000107c61174(lVar6);
            func_0x000107c61174(puVar2);
            func_0x000107c61574(puVar7);
            *(undefined8 *)(lVar16 + -0x10) = 0;
            *(undefined ***)(lVar16 + -8) = ppuVar13;
            lVar5 = lStack_158;
            func_0x000107c50340(param_1,param_1,lStack_f0);
            func_0x000107c61180();
            func_0x000107c615e8();
            func_0x000107c60bd0(ppuVar13);
            func_0x000107c61170(uVar11);
            func_0x000107c615e8(uVar17);
            func_0x000107c615e8(uStack_d0);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(lVar5);
            uVar18 = uStack_160;
            lVar5 = lStack_b8;
          }
          else {
            func_0x000107c61170(uVar11);
            func_0x000107c615e8(uVar17);
            func_0x000107c615e8(uStack_d0);
            func_0x000107c6142c(uVar26);
          }
        }
        uVar22 = uVar22 + 1;
      } while (uVar10 != uVar18);
    }
    func_0x000107c6142c(uVar20);
    lVar6 = lStack_f8;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c61574(lVar5);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10119a698);
      (*pcVar3)();
    }
    puVar7 = &UNK_11038c578;
    func_0x000107c613fc(&UNK_11038c578,0x30,7);
    puVar2 = puStack_d8;
    puVar1 = puStack_100;
    puVar15 = puStack_110;
    *(undefined **)(puVar7 + 0x10) = puStack_d8;
    *(undefined **)(puVar7 + 0x18) = puStack_100;
    *(code **)(puVar7 + 0x20) = FUN_10119a698;
    *(undefined **)(puVar7 + 0x28) = puStack_110;
    pcStack_88 = FUN_10119a6d8;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_1000f6b44;
    puStack_90 = &UNK_11038c590;
    ppuVar13 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar13);
    func_0x000107c6157c(puVar1);
    func_0x000107c6157c(puVar2);
    puVar7 = puVar15;
    func_0x000107c6157c(puVar15);
    lVar16 = lStack_108;
    func_0x000107c5f808(lStack_108);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar14 = uVar8;
    func_0x0001001c7f30();
    lVar19 = lStack_118;
    lVar5 = lStack_128;
    func_0x000107c60264(lStack_128,&puStack_b0,uVar8,uVar14,lStack_118,puVar7);
    puVar7 = puStack_e0;
    func_0x000107c5ffb8(lVar16,lVar5,lVar6,ppuVar13);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61170(puVar7);
    func_0x000107c615e8(lStack_f0);
    func_0x000107c61170(lVar6);
    (**(code **)(lStack_120 + 8))(lVar5,lVar19);
    (**(code **)(lStack_138 + 8))(lVar16,lStack_130);
    puVar7 = puStack_80;
    func_0x000107c61574(puVar15);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar1);
  }
  func_0x000107c61574(puVar7);
  return;
}



/* Entry: 10119a698; end: 10119a69f;  */

void FUN_10119a698(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    FUN_101198090(param_1);
    if (param_1 >> 0x3e == 0) {
      uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar4 = param_1;
      }
      func_0x000107c60480();
    }
    if (SBORROW8(lVar1,uVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011976dc);
      (*pcVar2)();
    }
    func_0x000107c6157c(lVar3);
    func_0x000107c61434(param_1);
    FUN_101199438(lVar1 - uVar4,lVar3,lVar3,param_1);
    func_0x000107c61578(lVar3,2);
    func_0x000107c6142c(param_1);
  }
  return;
}



/* Entry: 10119a6a0; end: 10119a6d7;  */

void FUN_10119a6a0(void)

{
  FUN_101197780();
  return;
}



/* Entry: 10119a6d8; end: 10119a6e3;  */

void FUN_10119a6d8(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar9 + 0x10,auStack_78,0,0);
  uVar7 = *(ulong *)(lVar9 + 0x10);
  if (uVar7 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar11 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar11 = uVar7;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101197c88);
      (*pcVar2)();
    }
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
  if (uVar11 != 0) {
    uVar7 = 0;
    do {
      uVar6 = 0;
      func_0x000107c61428(lVar1 + 0x10,auStack_90,0x20,0);
      lVar9 = *(long *)(lVar1 + 0x10);
      if ((*(long *)(lVar9 + 0x10) == 0) || (uVar8 = uVar7, func_0x00010035a314(), (uVar6 & 1) == 0)
         ) {
        func_0x000107c614a8(auStack_90);
      }
      else {
        uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        func_0x000107c614a8(auStack_90);
        func_0x000107c61174();
        func_0x000107c61174();
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          func_0x0001011985f0(0,puVar3 + 1,1,puVar5);
        }
        uVar8 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar6 = *(ulong *)(uVar8 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
          func_0x0001011985f0(puVar5,uVar6 + 1,1,puVar4);
          uVar8 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar8 + 0x10) = uVar6 + 1;
        *(undefined8 *)(uVar8 + uVar6 * 8 + 0x20) = uVar10;
        func_0x000107c61170(uVar10);
      }
      uVar7 = uVar7 + 1;
    } while (uVar11 != uVar7);
  }
  (*pcVar2)(puVar5);
  func_0x000107c6142c(puVar5);
  return;
}



/* Entry: 10119a6e4; end: 10119a723;  */

void FUN_10119a6e4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10119a724; end: 10119a74f;  */

void FUN_10119a724(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10119a750; end: 10119a7ab;  */

void FUN_10119a750(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (param_1 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar2 = param_1;
    }
    func_0x000107c60480(uVar2,*(undefined8 *)(unaff_x20 + 0x10));
  }
  if (uVar2 != 0) {
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_1);
    FUN_101198a70();
    FUN_101198090(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return;
  }
  return;
}



/* Entry: 10119a7ac; end: 10119a7b7; -[SCMemoriesWidgetDataProviderImplEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a7ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63660;
  func_0x000107c61428(param_1 + _DAT_112d63660,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119a7b8; end: 10119a7c3; -[SCMemoriesWidgetDataProviderImplEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a7b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63660;
  func_0x000107c61428(param_1 + _DAT_112d63660,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119a7c4; end: 10119a7cf; -[SCMemoriesWidgetDataProviderImplEntryPoint activeUserSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a7c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63668;
  func_0x000107c61428(param_1 + _DAT_112d63668,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119a7d0; end: 10119a7db; -[SCMemoriesWidgetDataProviderImplEntryPoint setActiveUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a7d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63668;
  func_0x000107c61428(param_1 + _DAT_112d63668,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119a7dc; end: 10119a7e7; -[SCMemoriesWidgetDataProviderImplEntryPoint featureStoryDataSourceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a7dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63670;
  func_0x000107c61428(param_1 + _DAT_112d63670,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119a7e8; end: 10119a7f3; -[SCMemoriesWidgetDataProviderImplEntryPoint setFeatureStoryDataSourceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63670;
  func_0x000107c61428(param_1 + _DAT_112d63670,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119a7f4; end: 10119a7ff; -[SCMemoriesWidgetDataProviderImplEntryPoint grapheneServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a7f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63678;
  func_0x000107c61428(param_1 + _DAT_112d63678,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119a800; end: 10119a80b; -[SCMemoriesWidgetDataProviderImplEntryPoint setGrapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a800(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63678;
  func_0x000107c61428(param_1 + _DAT_112d63678,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119a80c; end: 10119a817; -[SCMemoriesWidgetDataProviderImplEntryPoint memoriesCachingMediaServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a80c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63680;
  func_0x000107c61428(param_1 + _DAT_112d63680,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119a818; end: 10119a823; -[SCMemoriesWidgetDataProviderImplEntryPoint setMemoriesCachingMediaServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63680;
  func_0x000107c61428(param_1 + _DAT_112d63680,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119a824; end: 10119a82f; -[SCMemoriesWidgetDataProviderImplEntryPoint memoriesMergedDataSourceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a824(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63688;
  func_0x000107c61428(param_1 + _DAT_112d63688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119a830; end: 10119a83b; -[SCMemoriesWidgetDataProviderImplEntryPoint setMemoriesMergedDataSourceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a830(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63688;
  func_0x000107c61428(param_1 + _DAT_112d63688,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119a83c; end: 10119a847; -[SCMemoriesWidgetDataProviderImplEntryPoint memoriesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a83c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63690;
  func_0x000107c61428(param_1 + _DAT_112d63690,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119a848; end: 10119a853; -[SCMemoriesWidgetDataProviderImplEntryPoint setMemoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a848(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63690;
  func_0x000107c61428(param_1 + _DAT_112d63690,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119a854; end: 10119a85f; -[SCMemoriesWidgetDataProviderImplEntryPoint homeScreenWidgetServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a854(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63698;
  func_0x000107c61428(param_1 + _DAT_112d63698,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119a860; end: 10119a8a3;  */

void FUN_10119a860(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119a8a4; end: 10119a8af; -[SCMemoriesWidgetDataProviderImplEntryPoint setHomeScreenWidgetServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63698;
  func_0x000107c61428(param_1 + _DAT_112d63698,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119a8b0; end: 10119a903;  */

void FUN_10119a8b0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119a904; end: 10119a94b; -[SCMemoriesWidgetDataProviderImplEntryPoint memoriesWidgetServiceExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a904(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d636a0;
  func_0x000107c61428(param_1 + _DAT_112d636a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10119a94c; end: 10119a9af; -[SCMemoriesWidgetDataProviderImplEntryPoint setMemoriesWidgetServiceExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119a94c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d636a0;
  func_0x000107c61428(param_1 + _DAT_112d636a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10119a9b0; end: 10119ae77;  */

/* WARNING: Possible PIC construction at 0x00010119ac5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ac6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ac80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ac94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119aca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119acc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119acd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ace4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119acf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ad04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ae20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ae30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ae40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ae50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119adf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ae00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ae10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119adc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119add0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ad90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ada0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ad70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ad80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ad60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119ad84) */
/* WARNING: Removing unreachable block (ram,0x00010119ad74) */
/* WARNING: Removing unreachable block (ram,0x00010119ada4) */
/* WARNING: Removing unreachable block (ram,0x00010119ad94) */
/* WARNING: Removing unreachable block (ram,0x00010119add4) */
/* WARNING: Removing unreachable block (ram,0x00010119adc4) */
/* WARNING: Removing unreachable block (ram,0x00010119ae14) */
/* WARNING: Removing unreachable block (ram,0x00010119ae04) */
/* WARNING: Removing unreachable block (ram,0x00010119adf4) */
/* WARNING: Removing unreachable block (ram,0x00010119ae54) */
/* WARNING: Removing unreachable block (ram,0x00010119ae44) */
/* WARNING: Removing unreachable block (ram,0x00010119ae34) */
/* WARNING: Removing unreachable block (ram,0x00010119ae24) */
/* WARNING: Removing unreachable block (ram,0x00010119ad08) */
/* WARNING: Removing unreachable block (ram,0x00010119acf8) */
/* WARNING: Removing unreachable block (ram,0x00010119ace8) */
/* WARNING: Removing unreachable block (ram,0x00010119acd8) */
/* WARNING: Removing unreachable block (ram,0x00010119acc8) */
/* WARNING: Removing unreachable block (ram,0x00010119acac) */
/* WARNING: Removing unreachable block (ram,0x00010119ac98) */
/* WARNING: Removing unreachable block (ram,0x00010119ac84) */
/* WARNING: Removing unreachable block (ram,0x00010119ac70) */
/* WARNING: Removing unreachable block (ram,0x00010119ac60) */
/* WARNING: Removing unreachable block (ram,0x00010119ad64) */

void FUN_10119a9b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3d1c4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c42eb8();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c444a8();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4cb44();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c4cbe0();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = unaff_x20;
              func_0x000107c4cb8c();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c44ee0();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  func_0x000107c4ccec();
                  func_0x000107c61180();
                  if (unaff_x20 != 0) {
                    lVar9 = 0;
                    FUN_101196c5c();
                    func_0x000107c613fc();
                    *(long *)(lVar9 + 0x10) = unaff_x20;
                    *(long *)(lVar9 + 0x20) = lVar7;
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    lVar7 = lVar8;
                    func_0x000107c44ee4();
                    func_0x000107c61180();
                    *(long *)(lVar9 + 0x28) = lVar7;
                    puVar10 = PTR_PTR_1126ae720;
                    func_0x000107c61168();
                    puVar11 = &UNK_11038c6b8;
                    func_0x000107c613fc(&UNK_11038c6b8,0x40,7);
                    *(long *)(puVar11 + 0x10) = lVar2;
                    *(long *)(puVar11 + 0x18) = lVar3;
                    *(long *)(puVar11 + 0x20) = lVar6;
                    *(long *)(puVar11 + 0x28) = lVar5;
                    *(long *)(puVar11 + 0x30) = lVar4;
                    *(long *)(puVar11 + 0x38) = lVar8;
                    pcStack_70 = FUN_10119ae78;
                    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_88 = 0x42000000;
                    pcStack_80 = FUN_1011965fc;
                    puStack_78 = &UNK_11038c6d0;
                    puStack_68 = puVar11;
                    func_0x000107c60bc4(&puStack_90);
                    puVar11 = puStack_68;
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174(lVar6);
                    func_0x000107c61174(lVar8);
                    func_0x000107c61574(puVar11);
                    func_0x000107c3e4fc(puVar10);
                    func_0x000107c61180();
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10119ae78; end: 10119aea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10119ae78(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  long unaff_x20;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar1 = 0;
  uVar10 = uVar3;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar1 + -8);
  lStack_68 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(lVar2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar10);
  }
  func_0x000107c4cba8();
  func_0x000107c61180();
  func_0x000107c4cd6c();
  func_0x000107c61180();
  func_0x000107c3ef74();
  func_0x000107c61180();
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c44ee4();
  func_0x000107c61180();
  lVar7 = 0;
  func_0x000101198410();
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = uVar3;
  *(undefined8 *)(lVar7 + 0x18) = uVar9;
  *(undefined8 *)(lVar7 + 0x20) = uVar4;
  *(undefined8 *)(lVar7 + 0x28) = uVar5;
  *(undefined8 *)(lVar7 + 0x40) = uVar6;
  puVar8 = PTR_PTR_1126ba528;
  func_0x000107c610f8();
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uStack_70 = uVar9;
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(uVar6);
  func_0x000107c4547c();
  func_0x000107c61170(lVar2);
  *(undefined **)(lVar7 + 0x48) = puVar8;
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000107c5a9ec();
    func_0x000107c61180();
  }
  lVar2 = lStack_68;
  *(undefined **)(lVar7 + 0x50) = puVar8;
  (**(code **)(lVar11 + 0x68))
            (lVar1,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,
             lStack_68);
  puVar8 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar9 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef2a320);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar9);
  (**(code **)(lVar11 + 8))(lVar1,lVar2);
  *(undefined **)(lVar7 + 0x30) = puVar8;
  puVar8 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar6);
  *(undefined **)(lVar7 + 0x38) = puVar8;
  return lVar7;
}



/* Entry: 10119aea4; end: 10119aecb; -[SCMemoriesWidgetDataProviderImplEntryPoint begin] */

void FUN_10119aea4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10119a9b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10119aecc; end: 10119b3ff; -[SCMemoriesWidgetDataProviderImplEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119aecc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112d636a8);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_101196960();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_10119af60;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_10119af60:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10119b400; end: 10119b4ab; -[SCMemoriesWidgetDataProviderImplEntryPoint setValue:forIvarName:] */

void FUN_10119b400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  func_0x00010119af80(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10119b4ac; end: 10119b5a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119b4ac(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d63660,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63668,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63670,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63678,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63680,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63688,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63690,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63698,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d636a0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d636a8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10119b5a4; end: 10119b5c3; -[SCMemoriesWidgetDataProviderImplEntryPoint init] */

void FUN_10119b5a4(void)

{
  FUN_10119b4ac();
  return;
}



/* Entry: 10119b5c4; end: 10119b5f7;  */

void FUN_10119b5c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10119b5f8; end: 10119b6af; -[SCMemoriesWidgetDataProviderImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119b5f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d63660);
  func_0x000107c61610(param_1 + _DAT_112d63668);
  func_0x000107c61610(param_1 + _DAT_112d63670);
  func_0x000107c61610(param_1 + _DAT_112d63678);
  func_0x000107c61610(param_1 + _DAT_112d63680);
  func_0x000107c61610(param_1 + _DAT_112d63688);
  func_0x000107c61610(param_1 + _DAT_112d63690);
  func_0x000107c61610(param_1 + _DAT_112d63698);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d636a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d636a8));
  return;
}



/* Entry: 10119b6b0; end: 10119b6cf;  */

void FUN_10119b6b0(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4648);
  return;
}



/* Entry: 10119b6d0; end: 10119b71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119b6d0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d636d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10119b71c; end: 10119b777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119b71c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d636d8) = param_1;
  func_0x00010119b758();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10119b778; end: 10119b7d3; -[SCMemoriesWidgetService init] */

void FUN_10119b778(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesWidgetService.SCMemoriesWidgetService",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10119b7a4);
  (*pcVar1)();
}



/* Entry: 10119b7d4; end: 10119b7e3; -[SCMemoriesWidgetService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119b7d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d636d8));
  return;
}



/* Entry: 10119b7e4; end: 10119b87b;  */

/* WARNING: Possible PIC construction at 0x00010119b860: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119b864) */

void FUN_10119b7e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  func_0x000107c5f9c4(0);
  func_0x000107c5f9c0();
  puVar2 = &UNK_11038c7d0;
  func_0x000107c613fc(&UNK_11038c7d0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  func_0x000107c6157c(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c5f9bc(FUN_10119ba3c,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10119b87c; end: 10119ba3b;  */

void FUN_10119b87c(long param_1,char param_2,code *param_3,undefined8 param_4,undefined1 *param_5,
                  long param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  bool bVar9;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  
  if (param_2 == '\x01') {
    iVar1 = 2;
    lStack_68 = param_1;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&lStack_68,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    bVar9 = false;
  }
  else {
    lVar3 = 0;
    uStack_80 = param_4;
    pcStack_78 = param_3;
    func_0x000107c5f9b4();
    lVar6 = *(long *)(lVar3 + -8);
    puStack_88 = auStack_90;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
    puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar8 = 0;
    lStack_70 = *(long *)(param_1 + 0x10);
    do {
      bVar9 = lStack_70 != lVar8;
      param_3 = pcStack_78;
      if (lStack_70 == lVar8) break;
      lVar5 = param_1 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)) +
              *(long *)(lVar6 + 0x48) * lVar8;
      puVar4 = puVar7;
      (**(code **)(lVar6 + 0x10))(puVar7,lVar5,lVar3);
      func_0x000107c5f9ac();
      if ((puVar4 == param_5) && (lVar5 == param_6)) {
        func_0x000107c6142c(lVar5);
        (**(code **)(lVar6 + 8))(puVar7,lVar3);
        bVar9 = true;
        param_3 = pcStack_78;
        break;
      }
      lVar8 = lVar8 + 1;
      func_0x000107c605b8();
      func_0x000107c6142c(lVar5);
      (**(code **)(lVar6 + 8))(puVar7,lVar3);
      param_3 = pcStack_78;
    } while (((ulong)puVar4 & 1) == 0);
  }
  (*param_3)(bVar9);
  return;
}



/* Entry: 10119ba3c; end: 10119ba57;  */

void FUN_10119ba3c(long param_1,char param_2)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long extraout_x8;
  long lVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long unaff_x20;
  long lVar11;
  bool bVar12;
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  long lStack_70;
  long lStack_68;
  
  pcVar9 = *(code **)(unaff_x20 + 0x10);
  puVar1 = *(undefined1 **)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (param_2 == '\x01') {
    iVar3 = 2;
    lStack_68 = param_1;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&lStack_68,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    bVar12 = false;
  }
  else {
    lVar5 = 0;
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x18);
    pcStack_78 = pcVar9;
    func_0x000107c5f9b4();
    lVar8 = *(long *)(lVar5 + -8);
    puStack_88 = auStack_90;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    puVar10 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar11 = 0;
    lStack_70 = *(long *)(param_1 + 0x10);
    do {
      bVar12 = lStack_70 != lVar11;
      pcVar9 = pcStack_78;
      if (lStack_70 == lVar11) break;
      lVar7 = param_1 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
              *(long *)(lVar8 + 0x48) * lVar11;
      puVar6 = puVar10;
      (**(code **)(lVar8 + 0x10))(puVar10,lVar7,lVar5);
      func_0x000107c5f9ac();
      if ((puVar6 == puVar1) && (lVar7 == lVar2)) {
        func_0x000107c6142c(lVar7);
        (**(code **)(lVar8 + 8))(puVar10,lVar5);
        bVar12 = true;
        pcVar9 = pcStack_78;
        break;
      }
      lVar11 = lVar11 + 1;
      func_0x000107c605b8();
      func_0x000107c6142c(lVar7);
      (**(code **)(lVar8 + 8))(puVar10,lVar5);
      pcVar9 = pcStack_78;
    } while (((ulong)puVar6 & 1) == 0);
  }
  (*pcVar9)(bVar12);
  return;
}



/* Entry: 10119ba58; end: 10119bab3; -[_TtC33CalendarEventShareReportingPlugin33CalendarEventShareReportingPlugin reportedChatMessageContentForMessage:] */

void FUN_10119ba58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10119bc70(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10119bab4; end: 10119bacb; -[_TtC33CalendarEventShareReportingPlugin33CalendarEventShareReportingPlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010119bac8) */

void FUN_10119bab4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10119bacc; end: 10119bb27; -[_TtC33CalendarEventShareReportingPlugin33CalendarEventShareReportingPlugin isReportableForMessage:] */

uint FUN_10119bacc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x00010119be14(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10119bb28; end: 10119bb63; -[_TtC33CalendarEventShareReportingPlugin33CalendarEventShareReportingPlugin init] */

void FUN_10119bb28(undefined8 param_1)

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



/* Entry: 10119bb64; end: 10119bb97;  */

void FUN_10119bb64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10119bb98; end: 10119bb9f;  */

undefined8 FUN_10119bb98(void)

{
  return 1;
}



/* Entry: 10119bba0; end: 10119bc3f;  */

void FUN_10119bba0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10119bc40; end: 10119bc4f;  */

void FUN_10119bc40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10119bc50; end: 10119bc6f;  */

void FUN_10119bc50(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4808);
  return;
}


