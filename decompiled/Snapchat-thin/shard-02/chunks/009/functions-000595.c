/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022a6e18; end: 1022a6ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a6e18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000100083b20(&uStack_38);
  lVar3 = 0;
  FUN_1022a85a4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112e7a558) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112e7a560) = uVar2;
  *(undefined8 *)(lVar4 + _DAT_112e7a568) = uStack_38;
  lStack_48 = lVar4;
  lStack_40 = lVar3;
  func_0x000107c61154(&lStack_48,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022a6ed4; end: 1022a6f33; -[_TtC35MemoriesLockedSnapsDataServicesImpl35MemoriesLockedSnapsCardDataServices init] */

void FUN_1022a6ed4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesLockedSnapsDataServicesImpl.MemoriesLockedSnapsCardDataServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a6f00);
  (*pcVar1)();
}



/* Entry: 1022a6f34; end: 1022a6fab; -[_TtC35MemoriesLockedSnapsDataServicesImpl35MemoriesLockedSnapsCardDataServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022a6f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a6f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a6f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a6f74) */
/* WARNING: Removing unreachable block (ram,0x0001022a6f54) */
/* WARNING: Removing unreachable block (ram,0x0001022a6f94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a6f34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7a528));
  return;
}



/* Entry: 1022a6fac; end: 1022a6fbb;  */

undefined1  [16] FUN_1022a6fac(void)

{
  return ZEXT816(0x1104eee38);
}



/* Entry: 1022a6fbc; end: 1022a6fdb;  */

void FUN_1022a6fbc(void)

{
  func_0x000107c61168(&PTR_PTR_112831fa0);
  return;
}



/* Entry: 1022a6fdc; end: 1022a7387;  */

undefined * FUN_1022a6fdc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long lVar12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  long extraout_x8_02;
  undefined8 unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f7fc();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)&puStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ffd8();
  lStack_e8 = *(long *)(lVar3 + -8);
  lStack_e0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
  lVar16 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ffc4();
  puVar10 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar15 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar17 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar5 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puStack_f0 = puVar5;
  func_0x0001000295c4(0);
  func_0x000107c5f808(lVar17);
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4ac68;
  FUN_1022a85f0(0x112d4ac68,puVar10,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar7 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar8 = 0x112d4ac78;
  func_0x0001022a8630(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar15,&puStack_90,uVar7,uVar8,lVar3,uVar6);
  (**(code **)(lStack_e8 + 0x68))
            (lVar16,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_e0);
  uVar9 = 0xd000000000000028;
  func_0x000107c5ffec(0xd000000000000028,0x800000010f07fe10,lVar17,lVar15,lVar16,0);
  puVar10 = &UNK_1104eee58;
  func_0x000107c613fc(&UNK_1104eee58,0x38,7);
  puVar5 = puStack_f0;
  *(undefined8 *)(puVar10 + 0x10) = unaff_x20;
  *(undefined **)(puVar10 + 0x18) = puStack_f0;
  *(undefined8 *)(puVar10 + 0x20) = param_1;
  *(undefined8 *)(puVar10 + 0x28) = uVar9;
  *(undefined8 *)(puVar10 + 0x30) = uVar1;
  pcStack_70 = FUN_1022a85c4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1104eee70;
  ppuVar11 = &puStack_90;
  puStack_68 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c61174(unaff_x20);
  func_0x000107c61174(puVar5);
  func_0x000107c61434(param_1);
  func_0x000107c61174(uVar9);
  func_0x000107c5f808(lVar17);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  FUN_1022a85f0(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x0001022a8630(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar13,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  func_0x000107c5ffe8(0,lVar17,lVar13,ppuVar11);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c61170(uVar9);
  (**(code **)(lVar12 + 8))(lVar13,lVar2);
  (**(code **)(lVar14 + 8))(lVar17,lVar4);
  func_0x000107c61574(puStack_68);
  return puVar5;
}



/* Entry: 1022a7388; end: 1022a8323;  */

/* WARNING: Possible PIC construction at 0x0001022a749c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a74dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a751c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a75a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a771c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a8108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a8120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a8184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a8260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a8288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a82a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a81e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a81fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a78f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a761c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a75d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a7620) */
/* WARNING: Removing unreachable block (ram,0x0001022a7668) */
/* WARNING: Removing unreachable block (ram,0x0001022a7680) */
/* WARNING: Removing unreachable block (ram,0x0001022a78f4) */
/* WARNING: Removing unreachable block (ram,0x0001022a82f8) */
/* WARNING: Removing unreachable block (ram,0x0001022a793c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7988) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c10) */
/* WARNING: Removing unreachable block (ram,0x0001022a794c) */
/* WARNING: Removing unreachable block (ram,0x0001022a798c) */
/* WARNING: Removing unreachable block (ram,0x0001022a79bc) */
/* WARNING: Removing unreachable block (ram,0x0001022a8300) */
/* WARNING: Removing unreachable block (ram,0x0001022a7a08) */
/* WARNING: Removing unreachable block (ram,0x0001022a799c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7a14) */
/* WARNING: Removing unreachable block (ram,0x0001022a82fc) */
/* WARNING: Removing unreachable block (ram,0x0001022a7a58) */
/* WARNING: Removing unreachable block (ram,0x0001022a7aac) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c38) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c50) */
/* WARNING: Removing unreachable block (ram,0x0001022a7ab0) */
/* WARNING: Removing unreachable block (ram,0x0001022a7a64) */
/* WARNING: Removing unreachable block (ram,0x0001022a7aa0) */
/* WARNING: Removing unreachable block (ram,0x0001022a7ab8) */
/* WARNING: Removing unreachable block (ram,0x0001022a8304) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b0c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7aa8) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b14) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b44) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b48) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b4c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c24) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c2c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b54) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b5c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b84) */
/* WARNING: Removing unreachable block (ram,0x0001022a7be0) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b98) */
/* WARNING: Removing unreachable block (ram,0x0001022a7bdc) */
/* WARNING: Removing unreachable block (ram,0x0001022a7984) */
/* WARNING: Removing unreachable block (ram,0x0001022a8314) */
/* WARNING: Removing unreachable block (ram,0x0001022a8200) */
/* WARNING: Removing unreachable block (ram,0x0001022a8f84) */
/* WARNING: Removing unreachable block (ram,0x0001022a8f90) */
/* WARNING: Removing unreachable block (ram,0x0001022a8f88) */
/* WARNING: Removing unreachable block (ram,0x0001022a81e4) */
/* WARNING: Removing unreachable block (ram,0x0001022a828c) */
/* WARNING: Removing unreachable block (ram,0x0001022a8264) */
/* WARNING: Removing unreachable block (ram,0x0001022a8188) */
/* WARNING: Removing unreachable block (ram,0x0001022a82a8) */
/* WARNING: Removing unreachable block (ram,0x0001022a8124) */
/* WARNING: Removing unreachable block (ram,0x0001022a810c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7fd0) */
/* WARNING: Removing unreachable block (ram,0x0001022a7ecc) */
/* WARNING: Removing unreachable block (ram,0x0001022a7d84) */
/* WARNING: Removing unreachable block (ram,0x0001022a822c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7d8c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7de4) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f00) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f10) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f18) */
/* WARNING: Removing unreachable block (ram,0x0001022a82e0) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f20) */
/* WARNING: Removing unreachable block (ram,0x0001022a7fc8) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f28) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f34) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f04) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f38) */
/* WARNING: Removing unreachable block (ram,0x0001022a7e10) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f58) */
/* WARNING: Removing unreachable block (ram,0x0001022a7fb4) */
/* WARNING: Removing unreachable block (ram,0x0001022a7e18) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f90) */
/* WARNING: Removing unreachable block (ram,0x0001022a7e20) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001022a7d74) */
/* WARNING: Removing unreachable block (ram,0x0001022a7844) */
/* WARNING: Removing unreachable block (ram,0x0001022a78a8) */
/* WARNING: Removing unreachable block (ram,0x0001022a784c) */
/* WARNING: Removing unreachable block (ram,0x0001022a77c8) */
/* WARNING: Removing unreachable block (ram,0x0001022a7868) */
/* WARNING: Removing unreachable block (ram,0x0001022a78d8) */
/* WARNING: Removing unreachable block (ram,0x0001022a789c) */
/* WARNING: Removing unreachable block (ram,0x0001022a78b0) */
/* WARNING: Removing unreachable block (ram,0x0001022a77e0) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c54) */
/* WARNING: Removing unreachable block (ram,0x0001022a775c) */
/* WARNING: Removing unreachable block (ram,0x0001022a82e4) */
/* WARNING: Removing unreachable block (ram,0x0001022a82e8) */
/* WARNING: Removing unreachable block (ram,0x0001022a7788) */
/* WARNING: Removing unreachable block (ram,0x0001022a778c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c68) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c6c) */
/* WARNING: Removing unreachable block (ram,0x0001022a8194) */
/* WARNING: Removing unreachable block (ram,0x0001022a8310) */
/* WARNING: Removing unreachable block (ram,0x0001022a81b8) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c80) */
/* WARNING: Removing unreachable block (ram,0x0001022a7d1c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7d38) */
/* WARNING: Removing unreachable block (ram,0x0001022a77a8) */
/* WARNING: Removing unreachable block (ram,0x0001022a77bc) */
/* WARNING: Removing unreachable block (ram,0x0001022a77f0) */
/* WARNING: Removing unreachable block (ram,0x0001022a78bc) */
/* WARNING: Removing unreachable block (ram,0x0001022a78d4) */
/* WARNING: Removing unreachable block (ram,0x0001022a77f4) */
/* WARNING: Removing unreachable block (ram,0x0001022a82dc) */
/* WARNING: Removing unreachable block (ram,0x0001022a7800) */
/* WARNING: Removing unreachable block (ram,0x0001022a82d8) */
/* WARNING: Removing unreachable block (ram,0x0001022a7818) */
/* WARNING: Removing unreachable block (ram,0x0001022a8308) */
/* WARNING: Removing unreachable block (ram,0x0001022a782c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7720) */
/* WARNING: Removing unreachable block (ram,0x0001022a75a4) */
/* WARNING: Removing unreachable block (ram,0x0001022a755c) */
/* WARNING: Removing unreachable block (ram,0x0001022a76ac) */
/* WARNING: Removing unreachable block (ram,0x0001022a76b4) */
/* WARNING: Removing unreachable block (ram,0x0001022a7578) */
/* WARNING: Removing unreachable block (ram,0x0001022a7520) */
/* WARNING: Removing unreachable block (ram,0x0001022a7634) */
/* WARNING: Removing unreachable block (ram,0x0001022a7528) */
/* WARNING: Removing unreachable block (ram,0x0001022a74e0) */
/* WARNING: Removing unreachable block (ram,0x0001022a75ec) */
/* WARNING: Removing unreachable block (ram,0x0001022a74e8) */
/* WARNING: Removing unreachable block (ram,0x0001022a74a0) */
/* WARNING: Removing unreachable block (ram,0x0001022a75a8) */
/* WARNING: Removing unreachable block (ram,0x0001022a74a4) */
/* WARNING: Removing unreachable block (ram,0x0001022a830c) */
/* WARNING: Removing unreachable block (ram,0x0001022a74c4) */
/* WARNING: Removing unreachable block (ram,0x0001022a75dc) */
/* WARNING: Removing unreachable block (ram,0x0001022a7684) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a7388(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 auStack_160 [136];
  undefined1 *puStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  
  lVar1 = 0;
  uStack_c8 = param_4;
  uStack_b8 = param_3;
  func_0x000107c5f7fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_d8 = auStack_160 +
               ((-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                (extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_01);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e7a558);
  func_0x000107c4cd6c(uVar2);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1022a8324; end: 1022a8333;  */

void FUN_1022a8324(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  return;
}



/* Entry: 1022a8334; end: 1022a8497;  */

void FUN_1022a8334(ulong param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (((param_1 & 1) == 0) || (param_2 != 0)) {
    func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
    if (*(long *)(param_3 + 0x10) == 0) {
      if (param_2 == 0) {
        param_2 = 0x66206574656c6564;
        FUN_1022a8d4c(0x66206574656c6564,0xed000064656c6961);
      }
      else {
        func_0x000107c5ed2c();
      }
      func_0x000107c61428(param_3 + 0x10,auStack_60,1,0);
      uVar1 = *(undefined8 *)(param_3 + 0x10);
      *(long *)(param_3 + 0x10) = param_2;
      func_0x000107c61170(uVar1);
    }
  }
  func_0x000107c60f3c(param_5);
  return;
}



/* Entry: 1022a8498; end: 1022a84fb; -[_TtC35MemoriesLockedSnapsDataServicesImpl30MemoriesLockedSnapsSnapMutator deleteSnapsWithSnapIds:] */

void FUN_1022a8498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1022a6fdc(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022a84fc; end: 1022a855b; -[_TtC35MemoriesLockedSnapsDataServicesImpl30MemoriesLockedSnapsSnapMutator init] */

void FUN_1022a84fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesLockedSnapsDataServicesImpl.MemoriesLockedSnapsSnapMutator",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a8528);
  (*pcVar1)();
}



/* Entry: 1022a855c; end: 1022a85a3; -[_TtC35MemoriesLockedSnapsDataServicesImpl30MemoriesLockedSnapsSnapMutator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022a8578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a857c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a855c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7a558));
  return;
}



/* Entry: 1022a85a4; end: 1022a85c3;  */

void FUN_1022a85a4(void)

{
  func_0x000107c61168(&PTR_PTR_112832088);
  return;
}



/* Entry: 1022a85c4; end: 1022a85ef;  */

/* WARNING: Possible PIC construction at 0x0001022a749c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a74dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a751c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a75a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a771c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7ec8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a8108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a8120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a8184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a8260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a8288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a82a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a81e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a81fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a78f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a7664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a761c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a75d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a7620) */
/* WARNING: Removing unreachable block (ram,0x0001022a7668) */
/* WARNING: Removing unreachable block (ram,0x0001022a7680) */
/* WARNING: Removing unreachable block (ram,0x0001022a78f4) */
/* WARNING: Removing unreachable block (ram,0x0001022a82f8) */
/* WARNING: Removing unreachable block (ram,0x0001022a793c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7988) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c10) */
/* WARNING: Removing unreachable block (ram,0x0001022a794c) */
/* WARNING: Removing unreachable block (ram,0x0001022a798c) */
/* WARNING: Removing unreachable block (ram,0x0001022a79bc) */
/* WARNING: Removing unreachable block (ram,0x0001022a8300) */
/* WARNING: Removing unreachable block (ram,0x0001022a7a08) */
/* WARNING: Removing unreachable block (ram,0x0001022a799c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7a14) */
/* WARNING: Removing unreachable block (ram,0x0001022a82fc) */
/* WARNING: Removing unreachable block (ram,0x0001022a7a58) */
/* WARNING: Removing unreachable block (ram,0x0001022a7aac) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c38) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c50) */
/* WARNING: Removing unreachable block (ram,0x0001022a7ab0) */
/* WARNING: Removing unreachable block (ram,0x0001022a7a64) */
/* WARNING: Removing unreachable block (ram,0x0001022a7aa0) */
/* WARNING: Removing unreachable block (ram,0x0001022a7ab8) */
/* WARNING: Removing unreachable block (ram,0x0001022a8304) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b0c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7aa8) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b14) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b44) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b48) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b4c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c24) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c2c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b54) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b5c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b84) */
/* WARNING: Removing unreachable block (ram,0x0001022a7be0) */
/* WARNING: Removing unreachable block (ram,0x0001022a7b98) */
/* WARNING: Removing unreachable block (ram,0x0001022a7bdc) */
/* WARNING: Removing unreachable block (ram,0x0001022a7984) */
/* WARNING: Removing unreachable block (ram,0x0001022a8314) */
/* WARNING: Removing unreachable block (ram,0x0001022a8200) */
/* WARNING: Removing unreachable block (ram,0x0001022a8f84) */
/* WARNING: Removing unreachable block (ram,0x0001022a8f90) */
/* WARNING: Removing unreachable block (ram,0x0001022a8f88) */
/* WARNING: Removing unreachable block (ram,0x0001022a81e4) */
/* WARNING: Removing unreachable block (ram,0x0001022a828c) */
/* WARNING: Removing unreachable block (ram,0x0001022a8264) */
/* WARNING: Removing unreachable block (ram,0x0001022a8188) */
/* WARNING: Removing unreachable block (ram,0x0001022a82a8) */
/* WARNING: Removing unreachable block (ram,0x0001022a8124) */
/* WARNING: Removing unreachable block (ram,0x0001022a810c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7fd0) */
/* WARNING: Removing unreachable block (ram,0x0001022a7ecc) */
/* WARNING: Removing unreachable block (ram,0x0001022a7d84) */
/* WARNING: Removing unreachable block (ram,0x0001022a822c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7d8c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7de4) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f00) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f10) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f18) */
/* WARNING: Removing unreachable block (ram,0x0001022a82e0) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f20) */
/* WARNING: Removing unreachable block (ram,0x0001022a7fc8) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f28) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f34) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f04) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f38) */
/* WARNING: Removing unreachable block (ram,0x0001022a7e10) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f58) */
/* WARNING: Removing unreachable block (ram,0x0001022a7fb4) */
/* WARNING: Removing unreachable block (ram,0x0001022a7e18) */
/* WARNING: Removing unreachable block (ram,0x0001022a7f90) */
/* WARNING: Removing unreachable block (ram,0x0001022a7e20) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001022a7d74) */
/* WARNING: Removing unreachable block (ram,0x0001022a7844) */
/* WARNING: Removing unreachable block (ram,0x0001022a78a8) */
/* WARNING: Removing unreachable block (ram,0x0001022a784c) */
/* WARNING: Removing unreachable block (ram,0x0001022a77c8) */
/* WARNING: Removing unreachable block (ram,0x0001022a7868) */
/* WARNING: Removing unreachable block (ram,0x0001022a78d8) */
/* WARNING: Removing unreachable block (ram,0x0001022a789c) */
/* WARNING: Removing unreachable block (ram,0x0001022a78b0) */
/* WARNING: Removing unreachable block (ram,0x0001022a77e0) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c54) */
/* WARNING: Removing unreachable block (ram,0x0001022a775c) */
/* WARNING: Removing unreachable block (ram,0x0001022a82e4) */
/* WARNING: Removing unreachable block (ram,0x0001022a82e8) */
/* WARNING: Removing unreachable block (ram,0x0001022a7788) */
/* WARNING: Removing unreachable block (ram,0x0001022a778c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c68) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c6c) */
/* WARNING: Removing unreachable block (ram,0x0001022a8194) */
/* WARNING: Removing unreachable block (ram,0x0001022a8310) */
/* WARNING: Removing unreachable block (ram,0x0001022a81b8) */
/* WARNING: Removing unreachable block (ram,0x0001022a7c80) */
/* WARNING: Removing unreachable block (ram,0x0001022a7d1c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7d38) */
/* WARNING: Removing unreachable block (ram,0x0001022a77a8) */
/* WARNING: Removing unreachable block (ram,0x0001022a77bc) */
/* WARNING: Removing unreachable block (ram,0x0001022a77f0) */
/* WARNING: Removing unreachable block (ram,0x0001022a78bc) */
/* WARNING: Removing unreachable block (ram,0x0001022a78d4) */
/* WARNING: Removing unreachable block (ram,0x0001022a77f4) */
/* WARNING: Removing unreachable block (ram,0x0001022a82dc) */
/* WARNING: Removing unreachable block (ram,0x0001022a7800) */
/* WARNING: Removing unreachable block (ram,0x0001022a82d8) */
/* WARNING: Removing unreachable block (ram,0x0001022a7818) */
/* WARNING: Removing unreachable block (ram,0x0001022a8308) */
/* WARNING: Removing unreachable block (ram,0x0001022a782c) */
/* WARNING: Removing unreachable block (ram,0x0001022a7720) */
/* WARNING: Removing unreachable block (ram,0x0001022a75a4) */
/* WARNING: Removing unreachable block (ram,0x0001022a755c) */
/* WARNING: Removing unreachable block (ram,0x0001022a76ac) */
/* WARNING: Removing unreachable block (ram,0x0001022a76b4) */
/* WARNING: Removing unreachable block (ram,0x0001022a7578) */
/* WARNING: Removing unreachable block (ram,0x0001022a7520) */
/* WARNING: Removing unreachable block (ram,0x0001022a7634) */
/* WARNING: Removing unreachable block (ram,0x0001022a7528) */
/* WARNING: Removing unreachable block (ram,0x0001022a74e0) */
/* WARNING: Removing unreachable block (ram,0x0001022a75ec) */
/* WARNING: Removing unreachable block (ram,0x0001022a74e8) */
/* WARNING: Removing unreachable block (ram,0x0001022a74a0) */
/* WARNING: Removing unreachable block (ram,0x0001022a75a8) */
/* WARNING: Removing unreachable block (ram,0x0001022a74a4) */
/* WARNING: Removing unreachable block (ram,0x0001022a830c) */
/* WARNING: Removing unreachable block (ram,0x0001022a74c4) */
/* WARNING: Removing unreachable block (ram,0x0001022a75dc) */
/* WARNING: Removing unreachable block (ram,0x0001022a7684) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a85c4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 auStack_160 [136];
  undefined1 *puStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = 0;
  func_0x000107c5f7fc(0,*(undefined8 *)(unaff_x20 + 0x18),uStack_b8,uStack_c8,
                      *(undefined8 *)(unaff_x20 + 0x30));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_d8 = auStack_160 +
               ((-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
                (extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_01);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112e7a558);
  func_0x000107c4cd6c(uVar3);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1022a85f0; end: 1022a8673;  */

void FUN_1022a85f0(long *param_1,code *param_2,long param_3)

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



/* Entry: 1022a8674; end: 1022a879b;  */

ulong FUN_1022a8674(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a879c);
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
  FUN_1022a879c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a8798);
      (*pcVar1)();
    }
    FUN_1022a881c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1022a879c; end: 1022a881b;  */

undefined * FUN_1022a879c(undefined *param_1,undefined *param_2)

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
    func_0x000100fb0a4c();
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



/* Entry: 1022a881c; end: 1022a8aaf;  */

long FUN_1022a881c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1022a893c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1022a8940);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d508c0;
        func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1022a8938);
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



/* Entry: 1022a8ab0; end: 1022a8d4b;  */

void FUN_1022a8ab0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e7a598;
  func_0x0001000285a8(0x112e7a598,&UNK_10da848e0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_1022a8d18:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1022a8d48);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_1022a8d18;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1022a8d4c);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 1022a8d4c; end: 1022a8e87;  */

undefined * FUN_1022a8d4c(undefined8 param_1,undefined8 param_2)

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
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  func_0x000107c61434(param_2);
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100f15a0c((undefined8 *)(lVar2 + 0x20));
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010da848a0);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 1022a8e88; end: 1022a8f83;  */

undefined * FUN_1022a8e88(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e7a598,&UNK_10da848e0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1022a8f80);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1022a8f84);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1022a8f84; end: 1022a8fbb;  */

void FUN_1022a8f84(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1022a8fbc; end: 1022a910b;  */

void FUN_1022a8fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e7a5a0,&UNK_10da848f0);
  puVar1 = &UNK_1104eef70;
  func_0x000107c613fc(&UNK_1104eef70,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1022a910c,puVar1);
  return;
}



/* Entry: 1022a910c; end: 1022a9127;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a910c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  lVar1 = 0;
  FUN_1022a85a4();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e7a558) = uStack_48;
  *(undefined8 *)(lVar2 + _DAT_112e7a560) = uStack_50;
  *(undefined8 *)(lVar2 + _DAT_112e7a568) = uStack_58;
  plVar3 = &lStack_68;
  lStack_68 = lVar2;
  lStack_60 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 1022a9128; end: 1022a936f;  */

void FUN_1022a9128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e7a5a8,&UNK_10da84930);
  puVar1 = &UNK_1104eefb8;
  func_0x000107c613fc(&UNK_1104eefb8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1022a9370,puVar1);
  return;
}



/* Entry: 1022a9370; end: 1022a938f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a9370(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  uVar2 = uStack_58;
  func_0x000107c4cd6c(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  func_0x000100083b20(&lStack_60);
  uVar3 = *(undefined8 *)(lStack_60 + _DAT_1130806d8);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_60);
  func_0x000100083b20(&uStack_68);
  uVar4 = uStack_68;
  func_0x000107c5c5a0(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  func_0x000100083b20(&uStack_70);
  uVar5 = uStack_70;
  func_0x000107c4cb80(uStack_70);
  func_0x000107c61180();
  func_0x000107c61170(uStack_70);
  func_0x000100083b20(&uStack_78);
  uVar6 = uStack_78;
  func_0x000107c4cb6c(uStack_78);
  func_0x000107c61180();
  func_0x000107c61170(uStack_78);
  puVar7 = PTR_PTR_1126c6668;
  func_0x000107c610f8();
  func_0x000107c47788();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  if (puVar7 != (undefined *)0x0) {
    *param_1 = puVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a9370);
  (*pcVar1)();
}



/* Entry: 1022a9390; end: 1022a93db;  */

void FUN_1022a9390(undefined8 param_1)

{
  func_0x0001000285a8(0x112e7a5b0,&UNK_10da84970);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1022a93dc,param_1);
  return;
}



/* Entry: 1022a93dc; end: 1022a9443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a93dc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1022a975c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e7a5b8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1022a9444; end: 1022a948f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a9444(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7a5b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022a9490; end: 1022a952f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1022a9490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  func_0x000107c615f0();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x00010008a7c8(&uStack_38,&uStack_50);
  func_0x000100083b20(&uStack_50);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_1);
  return uStack_50;
}



/* Entry: 1022a9530; end: 1022a9563;  */

void FUN_1022a9530(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022a9564; end: 1022a9577; -[_TtC20LockedSnapsPageScope36LockedSnapsPageLauncherScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a9564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7a5b8));
  return;
}



/* Entry: 1022a9578; end: 1022a95a7;  */

/* WARNING: Possible PIC construction at 0x0001022a9594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a9598) */

void FUN_1022a9578(undefined8 *param_1)

{
  func_0x000107c615e8(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1[1]);
  return;
}



/* Entry: 1022a95a8; end: 1022a9667;  */

undefined8 * FUN_1022a95a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c615f0();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 1022a9668; end: 1022a96b3;  */

undefined8 * FUN_1022a9668(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615e8(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1022a96b4; end: 1022a975b;  */

int FUN_1022a96b4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1022a975c; end: 1022a977b;  */

void FUN_1022a975c(void)

{
  func_0x000107c61168(&PTR_PTR_112832158);
  return;
}



/* Entry: 1022a977c; end: 1022a977f;  */

undefined8 * FUN_1022a977c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c615f0();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 1022a9780; end: 1022a97eb;  */

void FUN_1022a9780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  return;
}



/* Entry: 1022a97ec; end: 1022a9803;  */

void FUN_1022a97ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  return;
}



/* Entry: 1022a9804; end: 1022a99fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a9804(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  ppuVar9 = &puStack_90;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar11 = *(undefined8 *)(lVar5 + _DAT_11307e1c0);
    uVar12 = *(undefined8 *)(lVar4 + _DAT_112e7a830);
    lVar4 = 0;
    func_0x0001022a9bfc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(long *)(lVar5 + _DAT_112e7a6c0) = lVar3;
    *(undefined8 *)(lVar5 + _DAT_112e7a6c8) = uVar1;
    *(undefined8 *)(lVar5 + _DAT_112e7a6d0) = uVar10;
    *(undefined8 *)(lVar5 + _DAT_112e7a6d8) = uVar11;
    *(undefined8 *)(lVar5 + _DAT_112e7a6b8) = uVar12;
    puVar8 = PTR_s_init_1125d9248;
    lStack_60 = lVar5;
    lStack_58 = lVar4;
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar10);
    func_0x000107c61174(uVar11);
    func_0x000107c61174(uVar12);
    plVar6 = &lStack_60;
    func_0x000107c61154(plVar6,puVar8);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    puVar8 = &UNK_1104ef210;
    func_0x000107c613fc(&UNK_1104ef210,0x18,7);
    *(long **)(puVar8 + 0x10) = plVar6;
    pcStack_70 = FUN_1022a99fc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1022a9a04;
    puStack_78 = &UNK_1104ef228;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    func_0x000107c61174(plVar6);
    func_0x000107c61574(puVar8);
    func_0x000107c3e4fc(puVar7);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    FUN_1022b6d18(0);
    func_0x000107c610f8();
    func_0x000107c61174(puVar7);
    puVar8 = puVar7;
    func_0x0001022b6c5c();
    func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x40));
    func_0x000107c61170(plVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022a99fc);
  (*pcVar2)();
}



/* Entry: 1022a99fc; end: 1022a9a03;  */

void FUN_1022a99fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1022a9a04; end: 1022a9a3b;  */

void FUN_1022a9a04(long param_1)

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



/* Entry: 1022a9a3c; end: 1022a9a57;  */

void FUN_1022a9a3c(long param_1,long param_2)

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



/* Entry: 1022a9a58; end: 1022a9ac3;  */

void FUN_1022a9a58(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1022a9ac4; end: 1022a9ae3;  */

void FUN_1022a9ac4(void)

{
  FUN_1022a9804();
  return;
}



/* Entry: 1022a9ae4; end: 1022a9aeb;  */

undefined8 FUN_1022a9ae4(void)

{
  return 0;
}



/* Entry: 1022a9aec; end: 1022a9b0b;  */

void FUN_1022a9aec(void)

{
  func_0x000107c61168(&PTR_PTR_112e7a628);
  return;
}



/* Entry: 1022a9b0c; end: 1022a9b6b; -[_TtC42MemoriesClientGenContentWorkflowEntryPoint36MemoriesClientGenContentWorkflowImpl init] */

void FUN_1022a9b0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesClientGenContentWorkflowEntryPoint.MemoriesClientGenContentWorkflowImpl"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022a9b38);
  (*pcVar1)();
}



/* Entry: 1022a9b6c; end: 1022a9bd3; -[_TtC42MemoriesClientGenContentWorkflowEntryPoint36MemoriesClientGenContentWorkflowImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022a9b98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022a9bb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022a9b9c) */
/* WARNING: Removing unreachable block (ram,0x0001022a9bbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a9b6c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e7a6c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7a6c8));
  return;
}



/* Entry: 1022a9bd4; end: 1022a9c1b; -[_TtC42MemoriesClientGenContentWorkflowEntryPoint36MemoriesClientGenContentWorkflowImpl beginGeneratingClientGenContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022a9bd4(long param_1)

{
  func_0x000107c5c734(*(undefined8 *)(param_1 + _DAT_112e7a6b8));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1022a9c1c; end: 1022a9c1f; -[_TtC42MemoriesClientGenContentWorkflowEntryPoint36MemoriesClientGenContentWorkflowImpl terminateGeneratingClientGenContent] */

void FUN_1022a9c1c(void)

{
  return;
}



/* Entry: 1022a9c20; end: 1022a9c6f;  */

void FUN_1022a9c20(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e7a708 != 0) {
    return;
  }
  puVar1 = &UNK_1104ef358;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e7a708 = param_1;
  return;
}



/* Entry: 1022a9c70; end: 1022aa0bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1022a9c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long unaff_x20;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_78 [24];
  
  uStack_110 = param_14;
  uStack_108 = param_15;
  uStack_118 = param_12;
  uStack_f8 = param_9;
  lVar5 = 0;
  uStack_f0 = param_8;
  uStack_e8 = param_7;
  uStack_e0 = param_5;
  uStack_d8 = param_4;
  uStack_d0 = param_3;
  uStack_c8 = param_2;
  func_0x000107c5f804();
  lStack_b8 = *(long *)(lVar5 + -8);
  lStack_b0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lStack_c0 = (long)&puStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e7a710) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a718) = param_1;
  func_0x000107c6157c(param_1);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d21d8();
  *(undefined **)(unaff_x20 + _DAT_112e7a720) = puVar6;
  puVar6 = puVar7;
  FUN_1022b1bf4(puVar7,0x112e7a7f8,&UNK_10da84b98);
  uVar10 = uStack_f0;
  uVar2 = uStack_108;
  uVar9 = uStack_110;
  uVar8 = uStack_118;
  *(undefined **)(unaff_x20 + _DAT_112e7a728) = puVar6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e7a730);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112e7a738) = 0;
  *(undefined **)(unaff_x20 + _DAT_112e7a740) = puVar7;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a748) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a750) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a758) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a760) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a768) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a770) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a778) = uStack_f0;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a780) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a788) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a790) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a798) = uStack_118;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a7a0) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a7a8) = uStack_110;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a7b0) = uStack_108;
  *(undefined8 *)(unaff_x20 + _DAT_112e7a7b8) = param_16;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  puStack_120 = puVar7;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  uStack_f0 = uVar10;
  func_0x000107c61174();
  func_0x000107c61174();
  uStack_100 = param_10;
  func_0x000107c615f0(param_11);
  func_0x000107c61174(uVar8);
  func_0x000107c615f0(param_13);
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(param_16);
  puVar7 = puStack_120;
  func_0x000107c453e4();
  lVar4 = lStack_b0;
  lVar3 = lStack_b8;
  lVar5 = lStack_c0;
  *(undefined **)(unaff_x20 + _DAT_112e7a7c0) = puVar7;
  (**(code **)(lStack_b8 + 0x68))
            (lStack_c0,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
             lStack_b0);
  puVar7 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar10 = 0xd000000000000047;
  func_0x000107c5fadc(0xd000000000000047,0x800000010f07fef0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar10);
  (**(code **)(lVar3 + 8))(lVar5,lVar4);
  *(undefined **)(unaff_x20 + _DAT_112e7a7c8) = puVar7;
  puVar11 = auStack_78;
  func_0x000107c61154(puVar11,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uStack_c8);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61170(uStack_d8);
  func_0x000107c61170(uStack_e0);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(uStack_e8);
  func_0x000107c61170(uStack_f0);
  func_0x000107c61170(uStack_f8);
  func_0x000107c61170(uStack_100);
  func_0x000107c615e8(param_11);
  func_0x000107c61170(uVar8);
  func_0x000107c615e8(param_13);
  func_0x000107c61170(uVar9);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(param_16);
  return puVar11;
}



/* Entry: 1022aa0c0; end: 1022aa11f; -[_TtC26SCMemoriesClientGenManager28MemoriesClientGenManagerImpl init] */

void FUN_1022aa0c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesClientGenManager.MemoriesClientGenManagerImpl",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022aa0ec);
  (*pcVar1)();
}



/* Entry: 1022aa120; end: 1022aa297; -[_TtC26SCMemoriesClientGenManager28MemoriesClientGenManagerImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022aa14c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022aa16c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022aa18c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022aa1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022aa1cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022aa1ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022aa20c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022aa26c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022aa210) */
/* WARNING: Removing unreachable block (ram,0x0001022aa1f0) */
/* WARNING: Removing unreachable block (ram,0x0001022aa1d0) */
/* WARNING: Removing unreachable block (ram,0x0001022aa1b0) */
/* WARNING: Removing unreachable block (ram,0x0001022aa190) */
/* WARNING: Removing unreachable block (ram,0x0001022aa170) */
/* WARNING: Removing unreachable block (ram,0x0001022aa150) */
/* WARNING: Removing unreachable block (ram,0x0001022aa270) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022aa120(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e7a718));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7a748));
  return;
}



/* Entry: 1022aa298; end: 1022aa70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022aa298(ulong param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  if (param_1 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    lVar4 = _DAT_112e7a720;
    lVar5 = _DAT_112e7a728;
    lVar6 = _DAT_112e7a740;
  }
  else {
    uVar17 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar17 = param_1;
    }
    func_0x000107c60480();
    lVar4 = _DAT_112e7a720;
    lVar5 = _DAT_112e7a728;
    lVar6 = _DAT_112e7a740;
  }
  _DAT_112e7a720 = lVar4;
  _DAT_112e7a728 = lVar5;
  _DAT_112e7a740 = lVar6;
  if (uVar17 != 0) {
    func_0x000107c61428(param_2 + lVar6,auStack_80,0,0);
    bVar3 = false;
    uVar10 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1022aa6f0);
            (*pcVar7)();
          }
          uVar8 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar8 = uVar10;
          FUN_1022b04d0(uVar10,param_1);
        }
        uVar1 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1022aa6ec);
          (*pcVar7)();
        }
        plVar2 = (long *)(uVar8 + _DAT_112ff4288);
        func_0x000107c61428(param_2 + lVar5,&puStack_e8,0x20,0);
        lVar14 = *(long *)(param_2 + lVar5);
        if (*(long *)(lVar14 + 0x10) != 0) break;
LAB_1022aa4e0:
        func_0x000107c614a8(&puStack_e8);
        lVar14 = *plVar2;
        lVar16 = plVar2[1];
        func_0x000107c61428(param_2 + lVar4,&puStack_e8,0x21,0);
        uVar9 = *(undefined8 *)(param_2 + lVar4);
        func_0x000107c61558(uVar9);
        uStack_88 = *(undefined8 *)(param_2 + lVar4);
        *(undefined8 *)(param_2 + lVar4) = 0x8000000000000000;
        FUN_101687ce0(0,lVar14,lVar16,uVar9);
        *(undefined8 *)(param_2 + lVar4) = uStack_88;
        func_0x000107c614a8(&puStack_e8);
        lVar14 = *plVar2;
        lVar16 = plVar2[1];
        func_0x000107c61428(param_2 + lVar5,&puStack_e8,0x21,0);
        func_0x000107c61174();
        uVar9 = *(undefined8 *)(param_2 + lVar5);
        func_0x000107c61558(uVar9);
        uStack_88 = *(undefined8 *)(param_2 + lVar5);
        *(undefined8 *)(param_2 + lVar5) = 0x8000000000000000;
        FUN_1022b0f28(uVar8,lVar14,lVar16,uVar9);
        *(undefined8 *)(param_2 + lVar5) = uStack_88;
        func_0x000107c614a8(&puStack_e8);
        uVar12 = *(ulong *)(uVar8 + _DAT_112ff4290);
        lVar16 = *(long *)(param_2 + lVar6);
        uVar10 = uVar12;
        lVar14 = lVar16;
        FUN_1022b03d4();
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (((uint)lVar14 & 0xff) != 1) {
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1022aa710);
            (*pcVar7)();
          }
          if (*(ulong *)(lVar16 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1022aa604);
            (*pcVar7)();
          }
          puVar13 = *(undefined **)(lVar16 + uVar10 * 0x10 + 0x28);
          func_0x000107c61434(puVar13);
        }
        lVar14 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61534();
        *(undefined8 *)(lVar14 + 0x18) = 2;
        *(undefined8 *)(lVar14 + 0x10) = 1;
        lVar16 = plVar2[1];
        *(long *)(lVar14 + 0x20) = *plVar2;
        *(long *)(lVar14 + 0x28) = lVar16;
        puStack_e8 = puVar13;
        func_0x000107c61434();
        func_0x00010109a32c(lVar14);
        puVar13 = puStack_e8;
        func_0x000107c61428(param_2 + lVar6,&puStack_e8,0x21,0);
        FUN_1022aa710(puVar13,uVar12);
        func_0x000107c614a8(&puStack_e8);
        func_0x000107c61170(uVar8);
        bVar3 = true;
        uVar10 = uVar1;
        if (uVar1 == uVar17) goto LAB_1022aa604;
      }
      lVar16 = *plVar2;
      uVar12 = plVar2[1];
      func_0x000107c61434(lVar14);
      func_0x000100029284();
      if ((uVar12 & 1) == 0) {
        func_0x000107c6142c(lVar14);
        goto LAB_1022aa4e0;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + lVar16 * 8);
      func_0x000107c61174(uVar9);
      func_0x000107c614a8(&puStack_e8);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar8);
      func_0x000107c6142c(lVar14);
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar17);
LAB_1022aa604:
    if (((bVar3) && (*(char *)((undefined8 *)(param_2 + _DAT_112e7a730) + 1) != '\x01')) &&
       ((*(byte *)(param_2 + _DAT_112e7a738) & 1) == 0)) {
      uVar15 = *(undefined8 *)(param_2 + _DAT_112e7a730);
      uVar9 = *(undefined8 *)(param_2 + _DAT_112e7a7c8);
      puVar13 = &UNK_1104efa48;
      func_0x000107c613fc(&UNK_1104efa48,0x20,7);
      *(long *)(puVar13 + 0x10) = param_2;
      *(undefined8 *)(puVar13 + 0x18) = uVar15;
      uStack_c8 = 0x1022b2010;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0x42000000;
      puStack_d8 = &UNK_1000f6b44;
      puStack_d0 = &UNK_1104efa60;
      ppuVar11 = &puStack_e8;
      puStack_c0 = puVar13;
      func_0x000107c60bc4(ppuVar11);
      puVar13 = puStack_c0;
      func_0x000107c61174(param_2);
      func_0x000107c61574(puVar13);
      func_0x000107c4e524(uVar9);
      func_0x000107c60bd0(ppuVar11);
    }
  }
  return;
}



/* Entry: 1022aa710; end: 1022aa86f;  */

/* WARNING: Possible PIC construction at 0x0001022aa7f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022aa7f4) */
/* WARNING: Removing unreachable block (ram,0x0001022aa86c) */
/* WARNING: Removing unreachable block (ram,0x0001022aa7fc) */

void FUN_1022aa710(ulong param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  ulong uVar7;
  
  if (param_1 == 0) {
    param_1 = *unaff_x20;
    FUN_1022b03d4(param_2);
    if (((uint)param_1 & 0xff) == 1) {
      return;
    }
    FUN_1022b0448();
  }
  else {
    uVar7 = *unaff_x20;
    lVar4 = param_2;
    uVar3 = uVar7;
    FUN_1022b03d4();
    if (((uint)uVar3 & 0xff) == 1) {
      lVar4 = *(long *)(uVar7 + 0x10);
      if (lVar4 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        lVar5 = lVar4;
        do {
          if (SCARRY8(lVar2,lVar5)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1022aa854);
            (*pcVar1)();
          }
          if ((lVar2 + lVar5 < -1) || (lVar6 = (lVar2 + lVar5) / 2, lVar4 <= lVar6)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1022aa858);
            (*pcVar1)();
          }
          if (*(long *)(uVar7 + 0x20 + lVar6 * 0x10) < param_2) {
            lVar2 = lVar6 + 1;
            lVar6 = lVar5;
          }
          lVar5 = lVar6;
        } while (lVar2 < lVar5);
        if (lVar4 < lVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1022aa7a8);
          (*pcVar1)();
        }
      }
      func_0x0001022b1dfc(lVar2,lVar2,param_2,param_1);
    }
    else {
      func_0x000107c61434(param_1);
      func_0x000107c61558();
      if ((uVar7 & 1) == 0) {
        FUN_1022b1640();
      }
      if (lVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022aa86c);
        (*pcVar1)();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 1022aa870; end: 1022aa96f; -[_TtC26SCMemoriesClientGenManager28MemoriesClientGenManagerImpl addGenerationModelsWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022aa870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar1 = 0;
  func_0x000103bc1934(0);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e7a7c8);
  puVar2 = &UNK_1104ef4f8;
  func_0x000107c613fc(&UNK_1104ef4f8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(long *)(puVar2 + 0x18) = param_1;
  uStack_50 = 0x1022b2004;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104ef510;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(uVar1);
  func_0x000107c6142c(param_3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1022aa970; end: 1022ab197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022aa970(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uStack_128;
  undefined1 auStack_c0 [16];
  long *plStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [16];
  long *plStack_90;
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar12 = _DAT_112e7a740;
  func_0x000107c61428(unaff_x20 + _DAT_112e7a740,auStack_88,0,0);
  lVar6 = _DAT_112e7a728;
  if ((*(long *)(*(long *)(unaff_x20 + lVar12) + 0x10) != 0) &&
     (lVar13 = *(long *)(*(long *)(unaff_x20 + lVar12) + 0x28), *(long *)(lVar13 + 0x10) != 0)) {
    lVar7 = *(long *)(lVar13 + 0x20);
    uVar1 = *(ulong *)(lVar13 + 0x28);
    func_0x000107c61428(unaff_x20 + _DAT_112e7a728,auStack_a0,0x20,0);
    lVar19 = *(long *)(unaff_x20 + lVar6);
    lVar16 = *(long *)(lVar19 + 0x10);
    func_0x000107c61434(lVar13);
    func_0x000107c61434(uVar1);
    if (lVar16 != 0) {
      func_0x000107c61434(lVar19);
      lVar16 = lVar7;
      uVar14 = uVar1;
      func_0x000100029284();
      if ((uVar14 & 1) != 0) {
        lVar5 = *(long *)(*(long *)(lVar19 + 0x38) + lVar16 * 8);
        func_0x000107c61174();
        func_0x000107c614a8(auStack_a0);
        func_0x000107c6142c(lVar19);
        lStack_a8 = 0;
        plStack_b0 = &lStack_a8;
        plStack_90 = plStack_b0;
        func_0x000103bc2390(0x1022b1cfc,auStack_a0,0x1022b1d04,auStack_c0);
        lVar16 = lStack_a8;
        if (lStack_a8 != 0) {
          lVar6 = *(long *)(unaff_x20 + _DAT_112e7a748);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar6 == 0) {
            func_0x000107c6142c(lVar13);
            func_0x000107c6142c(uVar1);
            func_0x000107c61170(lVar5);
          }
          else {
            if ((char)((ulong *)(unaff_x20 + _DAT_112e7a730))[1] != '\x01') {
              uVar14 = *(ulong *)(unaff_x20 + _DAT_112e7a730);
              uVar22 = *(ulong *)(lVar5 + _DAT_112ff42a0);
              uVar17 = uVar22 & 0xffffffffffffff8;
              if (uVar22 >> 0x3e == 0) {
                uVar23 = *(ulong *)(uVar17 + 0x10);
              }
              else {
                uVar23 = uVar17;
                if (0x7fffffffffffffff < uVar22) {
                  uVar23 = uVar22;
                }
                func_0x000107c60480();
              }
              func_0x000107c61434(uVar22);
              uVar20 = 0;
              do {
                if (uVar23 == uVar20) {
                  func_0x000107c6142c(uVar22);
                  FUN_1022ab3c0(lVar7,uVar1,0,0,1);
                  func_0x000107c6142c(lVar13);
                  func_0x000107c6142c(uVar1);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar16);
                  func_0x000107c61170(lVar6);
                  return;
                }
                if ((uVar22 & 0xc000000000000001) == 0) {
                  if (*(ulong *)(uVar17 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1022ab174);
                    (*pcVar4)();
                  }
                  uVar8 = *(ulong *)(uVar22 + uVar20 * 8 + 0x20);
                  func_0x000107c61174();
                }
                else {
                  uVar8 = uVar20;
                  FUN_1022b0808(uVar20,uVar22,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
                }
                if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1022ab170);
                  (*pcVar4)();
                }
                uVar9 = uVar8;
                func_0x000107c5d388();
                func_0x000107c61170(uVar8);
                uVar20 = uVar20 + 1;
              } while (uVar9 != uVar14);
              func_0x000107c6142c(uVar22);
              lVar19 = *(long *)(lVar13 + 0x10);
              if (lVar19 == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1022ab18c);
                (*pcVar4)();
              }
              lVar10 = lVar13;
              func_0x000107c61558();
              if (((int)lVar10 == 0) || (*(ulong *)(lVar13 + 0x18) >> 1 < lVar19 - 1U)) {
                lStack_70 = lVar13;
                func_0x0001000d182c();
                lVar13 = lVar10;
              }
              lStack_70 = lVar13;
              FUN_101755ed8(0,1,0);
              uVar21 = *(undefined8 *)(lVar5 + _DAT_112ff4290);
              if (*(long *)(lVar13 + 0x10) == 0) {
                func_0x000107c61428(unaff_x20 + lVar12,auStack_a0,0x21,0);
                uVar15 = *(undefined8 *)(unaff_x20 + lVar12);
                FUN_1022b03d4(uVar21);
                if (((uint)uVar15 & 0xff) != 1) {
                  FUN_1022b0448(unaff_x20);
                  func_0x000107c6142c(uVar15);
                }
              }
              else {
                func_0x000107c61428(unaff_x20 + lVar12,auStack_a0,0x21,0);
                func_0x000107c61434(lVar13);
                FUN_1022aa710();
              }
              func_0x000107c614a8(auStack_a0);
              lVar12 = *(long *)(lVar5 + _DAT_112ff4298);
              if (-1 < *(long *)(lVar12 + _DAT_112ff43d8)) {
                if (*(long *)(lVar12 + _DAT_112ff43d0) < 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1022ab194);
                  (*pcVar4)();
                }
                if (-1 < *(long *)(lVar12 + _DAT_112ff43e0)) {
                  uStack_128 = *(undefined8 *)(lVar12 + _DAT_112ff43c8);
                  lVar19 = ((undefined8 *)(lVar12 + _DAT_112ff43c8))[1];
                  uVar21 = *(undefined8 *)(lVar12 + _DAT_112ff4408);
                  lVar10 = ((undefined8 *)(lVar12 + _DAT_112ff4408))[1];
                  uVar15 = *(undefined8 *)(lVar12 + _DAT_112ff4410);
                  lVar2 = ((undefined8 *)(lVar12 + _DAT_112ff4410))[1];
                  uVar18 = *(undefined8 *)(lVar12 + _DAT_112ff4418);
                  lVar3 = ((undefined8 *)(lVar12 + _DAT_112ff4418))[1];
                  uVar24 = *(undefined8 *)(lVar12 + _DAT_112ff4420);
                  lVar12 = ((undefined8 *)(lVar12 + _DAT_112ff4420))[1];
                  func_0x000107c61434();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61434(lVar19);
                  func_0x000107c61434(lVar10);
                  func_0x000107c61434(lVar2);
                  func_0x000107c61434(lVar3);
                  func_0x000107c5fadc(lVar7,uVar1);
                  func_0x000107c6142c(uVar1);
                  if (lVar19 == 0) {
                    uStack_128 = 0;
                  }
                  else {
                    func_0x000107c5fadc(uStack_128,lVar19);
                    func_0x000107c6142c(lVar19);
                  }
                  if (lVar10 == 0) {
                    uVar21 = 0;
                  }
                  else {
                    func_0x000107c5fadc(uVar21,lVar10);
                    func_0x000107c6142c(lVar10);
                  }
                  if (lVar2 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    func_0x000107c5fadc(uVar15,lVar2);
                    func_0x000107c6142c(lVar2);
                  }
                  if (lVar3 == 0) {
                    uVar18 = 0;
                  }
                  else {
                    func_0x000107c5fadc(uVar18,lVar3);
                    func_0x000107c6142c(lVar3);
                  }
                  if (lVar12 == 0) {
                    uVar24 = 0;
                  }
                  else {
                    func_0x000107c5fadc(uVar24,lVar12);
                    func_0x000107c6142c(lVar12);
                  }
                  puVar11 = PTR_PTR_1126aa308;
                  func_0x000107c610f8();
                  func_0x000107c45e50();
                  func_0x000107c61170(lVar6);
                  func_0x000107c61170(lVar16);
                  func_0x000107c61170(lVar7);
                  func_0x000107c61170(uStack_128);
                  func_0x000107c61170(uVar21);
                  func_0x000107c61170(uVar15);
                  func_0x000107c61170(uVar18);
                  func_0x000107c61170(uVar24);
                  uVar21 = *(undefined8 *)(unaff_x20 + _DAT_112e7a790);
                  func_0x000107c61174(puVar11);
                  func_0x000107c3d624(uVar21);
                  func_0x000107c6142c(lVar13);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(puVar11);
                  func_0x000107c61170(puVar11);
                  func_0x000107c61170(lVar16);
                  func_0x000107c61170(lVar6);
                  return;
                }
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1022ab198);
                (*pcVar4)();
              }
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1022ab190);
              (*pcVar4)();
            }
            func_0x000107c6142c(lVar13);
            func_0x000107c6142c(uVar1);
            func_0x000107c61170(lVar5);
            func_0x000107c61170(lVar16);
            lVar16 = lVar6;
          }
          func_0x000107c61170(lVar16);
          *(undefined1 *)(unaff_x20 + _DAT_112e7a738) = 0;
          return;
        }
        func_0x000107c61428(unaff_x20 + lVar6,auStack_a0,0x20,0);
        lVar6 = *(long *)(unaff_x20 + lVar6);
        if (*(long *)(lVar6 + 0x10) != 0) {
          func_0x000107c61434(lVar6);
          uVar14 = uVar1;
          func_0x000100029284();
          if ((uVar14 & 1) != 0) {
            uVar21 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + lVar7 * 8);
            func_0x000107c61174(uVar21);
            func_0x000107c614a8(auStack_a0);
            func_0x000107c6142c(lVar6);
            FUN_1022aa970();
            func_0x000107c6142c(lVar13);
            func_0x000107c61170(uVar21);
            goto LAB_1022aacb8;
          }
          func_0x000107c6142c(lVar6);
        }
        func_0x000107c614a8(auStack_a0);
        FUN_1022aa970();
        func_0x000107c6142c(lVar13);
LAB_1022aacb8:
        func_0x000107c61170(lVar5);
        func_0x000107c6142c(uVar1);
        return;
      }
      func_0x000107c6142c(lVar19);
    }
    func_0x000107c614a8(auStack_a0);
    func_0x000107c6142c(lVar13);
    func_0x000107c6142c(uVar1);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112e7a738) = 0;
  return;
}



/* Entry: 1022ab198; end: 1022ab267; -[_TtC26SCMemoriesClientGenManager28MemoriesClientGenManagerImpl kickOffGenerationIfNeededWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ab198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112e7a7c8);
  puVar1 = &UNK_1104ef4a8;
  func_0x000107c613fc(&UNK_1104ef4a8,0x20,7);
  *(long *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uStack_40 = 0x1022b200c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104ef4c0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1022ab268; end: 1022ab2f3;  */

/* WARNING: Possible PIC construction at 0x0001022ab2d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022ab2d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ab268(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_112e7a738) = 0;
  lVar1 = *(long *)(param_1 + _DAT_112e7a710);
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + _DAT_112e7a788);
  func_0x000107c615f0(lVar1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3f474(lVar1);
    func_0x000107c50554(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 1022ab2f4; end: 1022ab3bf; -[_TtC26SCMemoriesClientGenManager28MemoriesClientGenManagerImpl terminateGeneration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ab2f4(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112e7a7c8);
  puVar1 = &UNK_1104ef458;
  func_0x000107c613fc(&UNK_1104ef458,0x18,7);
  *(long *)(puVar1 + 0x10) = param_1;
  uStack_40 = 0x1022b1fb8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104ef470;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1022ab3c0; end: 1022ab77f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ab3c0(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_90 [24];
  ulong auStack_78 [3];
  
  lVar5 = _DAT_112e7a728;
  func_0x000107c61428(unaff_x20 + _DAT_112e7a728,auStack_78,0x20,0);
  lVar6 = *(long *)(unaff_x20 + lVar5);
  if (*(long *)(lVar6 + 0x10) == 0) {
LAB_1022ab4b0:
    func_0x000107c614a8(auStack_78);
    FUN_1022aa970();
    return;
  }
  func_0x000107c61434(lVar6);
  lVar2 = param_1;
  uVar8 = param_2;
  func_0x000100029284();
  if ((uVar8 & 1) == 0) {
    func_0x000107c6142c(lVar6);
    goto LAB_1022ab4b0;
  }
  lVar2 = *(long *)(*(long *)(lVar6 + 0x38) + lVar2 * 8);
  func_0x000107c61174();
  func_0x000107c614a8(auStack_78);
  func_0x000107c6142c(lVar6);
  lVar6 = _DAT_112e7a740;
  if ((param_3 & 1) != 0) {
    func_0x000107c61428(unaff_x20 + lVar5,auStack_78,0x21,0);
    func_0x000107c61434(param_2);
    FUN_1022b0e5c(param_1,param_2);
    func_0x000107c614a8(auStack_78);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(param_1);
    goto LAB_1022ab6d0;
  }
  if ((param_5 & 1) == 0) goto LAB_1022ab6d0;
  uVar8 = *(ulong *)(lVar2 + _DAT_112ff4290);
  if ((param_4 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112e7a740,auStack_78,0,0);
    lVar7 = *(long *)(unaff_x20 + lVar6);
    uVar4 = uVar8;
    lVar5 = lVar7;
    FUN_1022b03d4();
    if (((uint)lVar5 & 0xff) == 1) goto LAB_1022ab5b0;
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ab704);
      (*pcVar1)();
    }
    if (*(ulong *)(lVar7 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ab70c);
      (*pcVar1)();
    }
    func_0x000107c61428(unaff_x20 + lVar6,auStack_90,0x21,0);
    uVar4 = uVar8;
    lVar5 = lVar7;
    FUN_1022b03d4();
    if (((uint)lVar5 & 0xff) != 1) {
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ab754);
        (*pcVar1)();
      }
      if (*(ulong *)(lVar7 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ab75c);
        (*pcVar1)();
      }
      goto LAB_1022ab67c;
    }
LAB_1022ab640:
    FUN_1022b03d4(uVar8);
    if (((uint)lVar7 & 0xff) != 1) {
      FUN_1022b0448();
      func_0x000107c6142c(lVar7);
    }
  }
  else {
    if (2 < uVar8) {
      auStack_78[0] = uVar8;
      func_0x000107c60614(&UNK_1106e1c48,auStack_78,&UNK_1106e1c48,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ab780);
      (*pcVar1)();
    }
    uVar8 = *(ulong *)(&UNK_10da84c08 + uVar8 * 8);
    func_0x000107c61428(unaff_x20 + _DAT_112e7a740,auStack_78,0,0);
    lVar7 = *(long *)(unaff_x20 + lVar6);
    uVar4 = uVar8;
    lVar5 = lVar7;
    FUN_1022b03d4();
    if (((uint)lVar5 & 0xff) == 1) {
LAB_1022ab5b0:
      uVar4 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(uVar4 + 0x18) = 2;
      *(undefined8 *)(uVar4 + 0x10) = 1;
      *(long *)(uVar4 + 0x20) = param_1;
      *(ulong *)(uVar4 + 0x28) = param_2;
      func_0x000107c61428(unaff_x20 + lVar6,auStack_90,0x21,0);
      func_0x000107c61434(param_2);
    }
    else {
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ab708);
        (*pcVar1)();
      }
      if (*(ulong *)(lVar7 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ab710);
        (*pcVar1)();
      }
      func_0x000107c61428(unaff_x20 + lVar6,auStack_90,0x21,0);
      uVar4 = uVar8;
      lVar5 = lVar7;
      FUN_1022b03d4();
      if (((uint)lVar5 & 0xff) == 1) goto LAB_1022ab640;
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ab758);
        (*pcVar1)();
      }
      if (*(ulong *)(lVar7 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ab578);
        (*pcVar1)();
      }
LAB_1022ab67c:
      uVar9 = *(ulong *)(lVar7 + uVar4 * 0x10 + 0x28);
      func_0x000107c61434(param_2);
      uVar4 = uVar9;
      func_0x000107c61434();
      func_0x000107c61558();
      uVar3 = uVar9;
      if ((uVar4 & 1) == 0) {
        uVar3 = 0;
        func_0x0001000d182c(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      }
      uVar9 = *(ulong *)(uVar3 + 0x10);
      uVar4 = uVar3;
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar9) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        func_0x0001000d182c(uVar4,uVar9 + 1,1,uVar3);
      }
      *(ulong *)(uVar4 + 0x10) = uVar9 + 1;
      lVar5 = uVar4 + uVar9 * 0x10;
      *(long *)(lVar5 + 0x20) = param_1;
      *(ulong *)(lVar5 + 0x28) = param_2;
    }
    FUN_1022aa710(uVar4,uVar8);
  }
  func_0x000107c614a8(auStack_90);
LAB_1022ab6d0:
  FUN_1022aa970();
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1022ab780; end: 1022ab953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ab780(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  lVar7 = _DAT_112e7a728;
  func_0x000107c61428(param_1 + _DAT_112e7a728,auStack_58,0x20,0);
  lVar6 = *(long *)(param_1 + lVar7);
  if (*(long *)(lVar6 + 0x10) != 0) {
    func_0x000107c61434(lVar6);
    lVar1 = param_2;
    uVar5 = param_3;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + lVar1 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar6);
      puVar3 = &UNK_1104ef548;
      func_0x000107c613fc(&UNK_1104ef548,0x38,7);
      *(long *)(puVar3 + 0x10) = param_1;
      *(undefined8 *)(puVar3 + 0x18) = uVar2;
      *(undefined8 *)(puVar3 + 0x20) = param_4;
      *(long *)(puVar3 + 0x28) = param_2;
      *(ulong *)(puVar3 + 0x30) = param_3;
      func_0x000107c61174(uVar2);
      func_0x000107c61174(param_1);
      func_0x000107c615f0(param_4);
      func_0x000107c61434(param_3);
      uVar4 = 0xa3;
      func_0x0001001ca524(0xa3,0,0x48,1,0,0,&UNK_10da84b80,puVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61170(uVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(uVar4);
      return;
    }
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c614a8(auStack_58);
  func_0x000107c61428(param_1 + lVar7,auStack_58,0x20,0);
  lVar7 = *(long *)(param_1 + lVar7);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61434(lVar7);
    func_0x000100029284();
    if ((param_3 & 1) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + param_2 * 8);
      func_0x000107c61174(uVar2);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar7);
      FUN_1022aa970();
      func_0x000107c61170(uVar2);
      return;
    }
    func_0x000107c6142c(lVar7);
  }
  func_0x000107c614a8(auStack_58);
  FUN_1022aa970();
  return;
}



/* Entry: 1022ab954; end: 1022ab9af;  */

void FUN_1022ab954(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_5;
  *(undefined8 *)(unaff_x22 + 200) = param_6;
  *(long *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  plVar1 = (long *)0x250;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1022ab9b0;
  plVar1[0x31] = param_3;
  plVar1[0x32] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022abef8,0,0);
  return;
}



/* Entry: 1022ab9b0; end: 1022aba0f;  */

void FUN_1022ab9b0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xd8) = param_1;
  *(long *)(lVar2 + 0xe0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1022aba10;
  }
  else {
    pcVar1 = FUN_1022abcac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1022aba10; end: 1022abcab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022aba10(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)(unaff_x22 + 0xd8);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  if (lVar6 == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    lVar6 = *(long *)(unaff_x22 + 0xb0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da84b00);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar3);
    puVar5 = puVar4;
    func_0x000107c5ed2c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c42d78(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c4d664(uVar7);
    func_0x000107c61170(puVar2);
    func_0x000107c3fedc(uVar7);
    uVar7 = *(undefined8 *)(lVar6 + _DAT_112e7a7c8);
    puVar2 = &UNK_1104ef5c0;
    func_0x000107c613fc(&UNK_1104ef5c0,0x28,7);
    *(long *)(puVar2 + 0x10) = lVar6;
    *(undefined8 *)(puVar2 + 0x18) = uVar9;
    puVar8 = (undefined8 *)(unaff_x22 + 0x40);
    *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar2 + 0x20) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x1022b2014;
    *(undefined **)(unaff_x22 + 0x68) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x50) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x58) = &UNK_1104ef5d8;
    func_0x000107c60bc4(puVar8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x000107c61174(lVar6);
    func_0x000107c61434(uVar1);
    func_0x000107c61574(uVar9);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(puVar8);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    lVar6 = *(long *)(unaff_x22 + 0xb0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000107c61174(uVar3);
    func_0x000107c5c3c8(puVar2);
    func_0x000107c61180();
    func_0x000107c4d664(uVar7);
    func_0x000107c61170(puVar2);
    func_0x000107c3fedc(uVar7);
    uVar7 = *(undefined8 *)(lVar6 + _DAT_112e7a7c8);
    puVar2 = &UNK_1104ef610;
    func_0x000107c613fc(&UNK_1104ef610,0x28,7);
    *(long *)(puVar2 + 0x10) = lVar6;
    *(undefined8 *)(puVar2 + 0x18) = uVar9;
    puVar8 = (undefined8 *)(unaff_x22 + 0x70);
    *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(puVar2 + 0x20) = uVar1;
    *(code **)(unaff_x22 + 0x90) = FUN_1022b1a2c;
    *(undefined **)(unaff_x22 + 0x98) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x78) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x80) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x88) = &UNK_1104ef628;
    func_0x000107c60bc4(puVar8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c61174(lVar6);
    func_0x000107c61434(uVar1);
    func_0x000107c61574(uVar9);
    func_0x000107c4e524(uVar7);
    func_0x000107c60bd0(puVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001022abca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022abcac; end: 1022abedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022abcac(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar10 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar1 = 0;
  FUN_1022b1ed4(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
  lVar2 = unaff_x22 + 0xa8;
  func_0x000107c6147c(lVar2,(undefined8 *)(unaff_x22 + 0xa0),uVar10,uVar1,0);
  if ((int)lVar2 != 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    lVar2 = *(long *)(unaff_x22 + 0xb0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    puVar3 = PTR_PTR_1126af5d0;
    func_0x000107c61168(PTR_PTR_1126af5d0);
    func_0x000107c3fcb0(uVar8);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da84b00);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar5);
    puVar6 = puVar4;
    func_0x000107c5ed2c(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c42d78(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c4d664(uVar9);
    func_0x000107c61170(puVar3);
    func_0x000107c3fedc(uVar9);
    uVar9 = *(undefined8 *)(lVar2 + _DAT_112e7a7c8);
    puVar3 = &UNK_1104ef570;
    func_0x000107c613fc(&UNK_1104ef570,0x28,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar10;
    *(undefined8 *)(puVar3 + 0x20) = uVar1;
    *(code **)(unaff_x22 + 0x30) = FUN_1022b19cc;
    *(undefined **)(unaff_x22 + 0x38) = puVar3;
    puVar7 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_1104ef588;
    func_0x000107c60bc4();
    uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c61174(lVar2);
    func_0x000107c61434(uVar1);
    func_0x000107c61574(uVar10);
    func_0x000107c4e524(uVar9);
    func_0x000107c60bd0(puVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x0001022abebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  return;
}



/* Entry: 1022abee0; end: 1022abef7;  */

void FUN_1022abee0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x188) = param_1;
  *(undefined8 *)(unaff_x22 + 400) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022abef8,0,0);
  return;
}



/* Entry: 1022abef8; end: 1022abf6b;  */

void FUN_1022abef8(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x188));
  func_0x000103bc1458(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  plVar4 = (long *)0xd0;
  uVar3 = *(undefined1 *)(unaff_x22 + 0x80);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1022abf6c;
  lVar6 = *(long *)(unaff_x22 + 400);
  plVar4[0x11] = lVar6;
  plVar5 = (long *)0xd0;
  func_0x000107c615b8();
  plVar4[0x12] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)FUN_1022acb48;
  plVar5[0x14] = lVar2;
  plVar5[0x15] = lVar6;
  *(undefined1 *)(plVar5 + 0x19) = uVar3;
  plVar5[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022af0e8,0,0);
  return;
}



/* Entry: 1022abf6c; end: 1022abfcb;  */

void FUN_1022abf6c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x1a0) = param_1;
  *(long *)(lVar2 + 0x1a8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x198));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1022abfcc;
  }
  else {
    pcVar1 = FUN_1022ac70c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1022abfcc; end: 1022ac29f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022abfcc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 400) + _DAT_112e7a780);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x1b0) = lVar2;
  if (lVar2 == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1a0));
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da84b00);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    func_0x0001022b1a38(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001022ac210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x188) + _DAT_112ff4270);
  uVar6 = *(ulong *)(unaff_x22 + 0x128);
  *(ulong *)(unaff_x22 + 0x1b8) = uVar6;
  *(ulong *)(unaff_x22 + 0x170) = uVar6;
  if (uVar6 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    if (-1 < (long)uVar6) {
      uVar6 = uVar6 & 0xffffffffffffff8;
    }
    func_0x000107c60480();
  }
  uVar3 = _DAT_112e7a7c8;
  *(ulong *)(unaff_x22 + 0x1c0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar3;
  func_0x000107c61174();
  func_0x0001022b1a6c(unaff_x22 + 0x170,unaff_x22 + 0x178);
  if (uVar6 != 0) {
    *(long *)(unaff_x22 + 0x1d0) = lVar2;
    uVar6 = *(ulong *)(unaff_x22 + 0x1b8);
    if ((uVar6 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ac2a0);
        (*pcVar1)();
      }
      uVar3 = *(undefined8 *)(uVar6 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = 0;
      func_0x0001022b066c();
    }
    *(undefined8 *)(unaff_x22 + 0x1d8) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 1;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar3 = 0;
    FUN_1022b1ed4(0,0x112d50c78,&PTR_PTR_1126b25c0);
    func_0x000107c5f9dc(uVar9,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
    *(undefined8 *)(unaff_x22 + 0x1e8) = uVar9;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x180;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1022ac2a0;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,1);
    uVar3 = 0x112e7a808;
    func_0x0001000285a8(0x112e7a808,&UNK_10da84bb0);
    *(undefined8 *)(unaff_x22 + 0x168) = uVar3;
    *(long *)(unaff_x22 + 0x150) = lVar2;
    *(undefined **)(unaff_x22 + 0x130) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x138) = 0x42000000;
    *(code **)(unaff_x22 + 0x140) = FUN_1022acf08;
    *(undefined **)(unaff_x22 + 0x148) = &UNK_1104ef650;
    func_0x000107c4e5f0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  *(long *)(unaff_x22 + 0x1f8) = lVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
  FUN_1022b1ad4(unaff_x22 + 0x170);
  func_0x000107c6142c(uVar3);
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x200) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1022ac4f4;
  lVar7 = *(long *)(unaff_x22 + 400);
  plVar5[0x10] = lVar2;
  plVar5[0x11] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022acfcc,0,0);
  return;
}



/* Entry: 1022ac2a0; end: 1022ac2ff;  */

void FUN_1022ac2a0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1f0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_1022ac300;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x1a0));
    pcVar1 = FUN_1022ac740;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1022ac300; end: 1022ac4f3;  */

void FUN_1022ac300(void)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar5 = *(long *)(unaff_x22 + 0x1e0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d0);
  lVar8 = *(long *)(unaff_x22 + 0x1c0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x1d8));
  lVar10 = *(long *)(unaff_x22 + 0x180);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  if (lVar5 == lVar8) {
    *(long *)(unaff_x22 + 0x1f8) = lVar10;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
    FUN_1022b1ad4(unaff_x22 + 0x170);
    func_0x000107c6142c(uVar4);
    plVar2 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x200) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1022ac4f4;
    lVar5 = *(long *)(unaff_x22 + 400);
    plVar2[0x10] = lVar10;
    plVar2[0x11] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1022acfcc,0,0);
    return;
  }
  uVar6 = *(ulong *)(unaff_x22 + 0x1e0);
  *(long *)(unaff_x22 + 0x1d0) = lVar10;
  uVar3 = *(ulong *)(unaff_x22 + 0x1b8);
  if ((uVar3 & 0xc000000000000001) == 0) {
    if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ac4f4);
      (*pcVar1)();
    }
    uVar3 = *(ulong *)(uVar3 + uVar6 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar3 = uVar6;
    func_0x0001022b066c();
  }
  *(ulong *)(unaff_x22 + 0x1d8) = uVar3;
  *(ulong *)(unaff_x22 + 0x1e0) = uVar6 + 1;
  if (!SCARRY8(uVar6,1)) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar4 = 0;
    FUN_1022b1ed4(0,0x112d50c78,&PTR_PTR_1126b25c0);
    func_0x000107c5f9dc(uVar9,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
    *(undefined8 *)(unaff_x22 + 0x1e8) = uVar9;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x180;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1022ac2a0;
    lVar5 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar5,1);
    uVar4 = 0x112e7a808;
    func_0x0001000285a8(0x112e7a808,&UNK_10da84bb0);
    *(undefined8 *)(unaff_x22 + 0x168) = uVar4;
    *(long *)(unaff_x22 + 0x150) = lVar5;
    *(undefined **)(unaff_x22 + 0x130) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x138) = 0x42000000;
    *(code **)(unaff_x22 + 0x140) = FUN_1022acf08;
    *(undefined **)(unaff_x22 + 0x148) = &UNK_1104ef650;
    func_0x000107c4e5f0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ac4f0);
  (*pcVar1)();
}



/* Entry: 1022ac4f4; end: 1022ac58f;  */

void FUN_1022ac4f4(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x208) = param_1;
  *(long *)(lVar3 + 0x210) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x200));
  if (unaff_x20 == 0) {
    plVar1 = (long *)0xc0;
    func_0x000107c615b8();
    *(long **)(lVar3 + 0x218) = plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)FUN_1022ac590;
    lVar3 = *(long *)(lVar3 + 400);
    plVar1[0x11] = param_1;
    plVar1[0x12] = lVar3;
    pcVar2 = FUN_1022ad300;
  }
  else {
    pcVar2 = FUN_1022ac7bc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 1022ac590; end: 1022ac62f;  */

void FUN_1022ac590(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar5 + 0x220) = param_1;
  *(long *)(lVar5 + 0x228) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x218));
  if (unaff_x20 == 0) {
    plVar1 = (long *)0x1e0;
    func_0x000107c615b8();
    *(long **)(lVar5 + 0x230) = plVar1;
    *plVar1 = lVar6;
    plVar1[1] = (long)FUN_1022ac630;
    lVar6 = *(long *)(lVar5 + 0x188);
    lVar5 = *(long *)(lVar5 + 400);
    plVar1[0x2a] = param_1;
    plVar1[0x2b] = lVar5;
    plVar1[0x29] = lVar6;
    lVar5 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    uVar3 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
    uVar2 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x2c] = uVar2;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[0x2d] = uVar3;
    pcVar4 = FUN_1022ad6f4;
  }
  else {
    pcVar4 = FUN_1022ac804;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 1022ac630; end: 1022ac69b;  */

void FUN_1022ac630(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x238) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x230));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x240) = param_1;
    pcVar1 = FUN_1022ac69c;
  }
  else {
    pcVar1 = FUN_1022ac858;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1022ac69c; end: 1022ac70b;  */

void FUN_1022ac69c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1b0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x220));
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar4);
  FUN_1022b1a38(unaff_x22 + 0x50);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001022ac708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 1022ac70c; end: 1022ac73f;  */

void FUN_1022ac70c(void)

{
  long unaff_x22;
  
  FUN_1022b1a38(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001022ac73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022ac740; end: 1022ac7bb;  */

void FUN_1022ac740(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1b0);
  func_0x000107c61654();
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar4);
  FUN_1022b1a38(unaff_x22 + 0x50);
  FUN_1022b1ad4(unaff_x22 + 0x170);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001022ac7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022ac7bc; end: 1022ac803;  */

void FUN_1022ac7bc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x1b0));
  FUN_1022b1a38(unaff_x22 + 0x50);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001022ac800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022ac804; end: 1022ac857;  */

void FUN_1022ac804(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x208));
  func_0x000107c615e8(uVar1);
  FUN_1022b1a38(unaff_x22 + 0x50);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001022ac854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022ac858; end: 1022ac8bf;  */

void FUN_1022ac858(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x220));
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
  FUN_1022b1a38(unaff_x22 + 0x50);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001022ac8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022ac8c0; end: 1022ac9cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ac8c0(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112e7a728;
  func_0x000107c61428(param_1 + _DAT_112e7a728,auStack_58,0x20,0);
  lVar5 = *(long *)(param_1 + lVar1);
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x000107c61434(lVar5);
    lVar2 = param_2;
    uVar4 = param_3;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + lVar2 * 8);
      func_0x000107c61174(uVar3);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar5);
      func_0x000107c61428(param_1 + lVar1,auStack_58,0x21,0);
      func_0x000107c61434(param_3);
      FUN_1022b0e5c(param_2,param_3);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(param_3);
      func_0x000107c61170(param_2);
      FUN_1022aa970();
      func_0x000107c61170(uVar3);
      return;
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c614a8(auStack_58);
  FUN_1022aa970();
  return;
}



/* Entry: 1022ac9d0; end: 1022acadf; -[_TtC26SCMemoriesClientGenManager28MemoriesClientGenManagerImpl generateClientGenContentWithModelIdentifier:observer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ac9d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c5faec();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112e7a7c8);
  puVar1 = &UNK_1104ef408;
  func_0x000107c613fc(&UNK_1104ef408,0x30,7);
  *(long *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  uStack_50 = 0x1022b1fb0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104ef420;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c615f4(param_4,2);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c6142c(param_2);
  func_0x000107c615e8(param_4);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1022acae0; end: 1022acb47;  */

void FUN_1022acae0(long param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x88) = unaff_x20;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1022acb48;
  plVar1[0x14] = param_2;
  plVar1[0x15] = unaff_x20;
  *(undefined1 *)(plVar1 + 0x19) = param_3;
  plVar1[0x13] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022af0e8,0,0);
  return;
}



/* Entry: 1022acb48; end: 1022acbaf;  */

void FUN_1022acb48(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001022acb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022acbb0,0,0);
  return;
}



/* Entry: 1022acbb0; end: 1022ace07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022acbb0(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar8 = *(long *)(unaff_x22 + 0x98);
  puVar7 = *(undefined8 **)(lVar8 + 0x10);
  if (puVar7 == (undefined8 *)0x0) {
    func_0x000107c6142c(lVar8);
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar2 = puVar7;
    FUN_1022b0cb4(puVar7,0,0x112d62390,&PTR_PTR_1126aff40,0x112d62788,&UNK_10d928550);
    puVar3 = &uStack_68;
    FUN_1022b1654(puVar3,puVar2 + 4,puVar7,lVar8);
    func_0x0001022b1be4(uStack_68,uStack_60,uStack_58,uStack_50,uStack_48);
    if (puVar3 != puVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022acc3c);
      (*pcVar1)();
    }
  }
  *(undefined8 **)(unaff_x22 + 0xa0) = puVar2;
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0x88) + _DAT_112e7a778);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa8) = lVar8;
  if (lVar8 != 0) {
    uVar4 = 0;
    FUN_1022b1ed4(0,0x112d62390,&PTR_PTR_1126aff40);
    puVar7 = puVar2;
    func_0x000107c5fc48(puVar2,uVar4);
    func_0x000107c442d0();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xb0) = lVar8;
    func_0x000107c61170(puVar7);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1022ace08;
    lVar5 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar5,1);
    puVar6 = &UNK_1104ef958;
    func_0x000107c613fc(&UNK_1104ef958,0x20,7);
    puVar7 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 **)(puVar6 + 0x10) = puVar2;
    *(long *)(puVar6 + 0x18) = lVar5;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x1022b1bec;
    *(undefined **)(unaff_x22 + 0x78) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100bcda3c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1104ef970;
    func_0x000107c60bc4(puVar7);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(uVar4);
    func_0x000107c5dc64(lVar8);
    func_0x000107c60bd0(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c61574(puVar2);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c466bc(puVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001022ace04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022ace08; end: 1022ace73;  */

void FUN_1022ace08(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)(lVar2 + 0x80);
    pcVar1 = FUN_1022ace74;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_1022acec0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1022ace74; end: 1022acebf;  */

void FUN_1022ace74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001022acebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Entry: 1022acec0; end: 1022acf07;  */

void FUN_1022acec0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001022acf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022acf08; end: 1022acfb3;  */

void FUN_1022acf08(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar3);
    return;
  }
  if (param_2 != 0) {
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_2;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022acfb4);
  (*pcVar1)();
}



/* Entry: 1022acfb4; end: 1022acfcb;  */

void FUN_1022acfb4(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022acfcc,0,0);
  return;
}



/* Entry: 1022acfcc; end: 1022ad1ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022acfcc(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long unaff_x22;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x88) + _DAT_112e7a788);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar2;
  if (lVar2 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
  }
  else {
    uVar8 = *(ulong *)(*(long *)(unaff_x22 + 0x88) + _DAT_112e7a7c8);
    uVar3 = uVar8;
    func_0x000107c49be8();
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
      puVar5 = &UNK_1104ef868;
      func_0x000107c613fc(&UNK_1104ef868,0x28,7);
      *(undefined **)(unaff_x22 + 0x98) = puVar5;
      *(undefined8 *)(puVar5 + 0x10) = uVar1;
      *(long *)(puVar5 + 0x18) = lVar2;
      *(undefined8 *)(puVar5 + 0x20) = uVar4;
      puVar6 = &UNK_1104ef890;
      func_0x000107c613fc(&UNK_1104ef890,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_1022b1b74;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x70) = 0x1022b1bbc;
      *(undefined **)(unaff_x22 + 0x78) = puVar6;
      puVar9 = (undefined8 *)(unaff_x22 + 0x50);
      *puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_10006eb60;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1104ef8a8;
      puVar7 = puVar9;
      func_0x000107c60bc4(puVar9);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c61174(uVar1);
      func_0x000107c615f0(lVar2);
      func_0x000107c61174(uVar4);
      func_0x000107c61574(uVar10);
      func_0x000107c4e530(uVar8);
      func_0x000107c60bd0(puVar7);
      *(undefined8 **)(unaff_x22 + 0x38) = puVar9;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1022ad200;
      func_0x000107c61448(unaff_x22 + 0x10,1);
      func_0x0001022aed38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c466bc(puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001022ad0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022ad200; end: 1022ad26b;  */

void FUN_1022ad200(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_1022ad26c;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x1022ad2ac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1022ad26c; end: 1022ad2e7;  */

void FUN_1022ad26c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001022ad2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xa8));
  return;
}



/* Entry: 1022ad2e8; end: 1022ad2ff;  */

void FUN_1022ad2e8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022ad300,0,0);
  return;
}



/* Entry: 1022ad300; end: 1022ad57f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ad300(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x98) = puVar1;
  puVar2 = puVar1;
  func_0x00010011df08();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  lVar7 = *(long *)(unaff_x22 + 0x90);
  puVar3 = PTR_PTR_1126b25b8;
  func_0x000107c610f8();
  func_0x000107c46814();
  *(undefined **)(unaff_x22 + 0xa0) = puVar3;
  func_0x000107c61170(puVar2);
  lVar7 = *(long *)(lVar7 + _DAT_112e7a760);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa8) = lVar7;
  if (lVar7 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x90) + _DAT_112e7a7c8);
    uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x90) + _DAT_112e7a768);
    uVar4 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010da84b00);
    func_0x000107e6121c(puVar3,uVar5,uVar6,lVar7,uVar9,puVar1,uVar4);
    func_0x000107c61170(uVar4);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1022ad580;
    lVar7 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar7,1);
    func_0x000107c43bf4(puVar1);
    func_0x000107c61180();
    puVar2 = &UNK_1104ef818;
    func_0x000107c613fc(&UNK_1104ef818,0x18,7);
    puVar8 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar2 + 0x10) = lVar7;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x1022b1b6c;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_101383914;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1104ef830;
    func_0x000107c60bc4(puVar8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c5dc64(puVar1);
    func_0x000107c60bd0(puVar8);
    func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c466bc(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61654();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001022ad57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022ad580; end: 1022ad5eb;  */

void FUN_1022ad580(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(lVar2 + 0x80);
    pcVar1 = FUN_1022ad5ec;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_1022ad638;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}


